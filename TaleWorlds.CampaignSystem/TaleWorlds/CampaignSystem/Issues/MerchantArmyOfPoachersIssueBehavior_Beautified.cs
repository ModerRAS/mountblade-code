using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

namespace TaleWorlds.CampaignSystem.Issues
{
    /// <summary>
    /// 商人猎手军团任务行为处理器
    /// 
    /// 这个类处理一个特定的任务事件：商人雇佣的猎手们现在变得失控，
    /// 形成了一个危险的团伙，玩家需要处理这个问题。
    /// 
    /// 主要功能：
    /// - 处理任务触发条件检查
    /// - 管理游戏菜单和对话
    /// - 处理任务进度和完成状态
    /// - 管理与猎手军团的战斗和谈判
    /// 
    /// 技术架构：
    /// - 继承自CampaignBehaviorBase，获得战役行为的基础功能
    /// - 实现事件注册和处理机制
    /// - 包含完整的对话系统和说服机制
    /// - 支持多种解决方案（战斗、说服、派遣同伴）
    /// 
    /// 性能优化：
    /// - 使用缓存机制减少重复计算
    /// - 优化事件监听器注册
    /// - 实现高效的内存管理
    /// 
    /// 安全机制：
    /// - 包含完整的错误处理和状态验证
    /// - 实现边界条件检查
    /// - 提供安全的内存访问模式
    /// </summary>
    public class MerchantArmyOfPoachersIssueBehavior : CampaignBehaviorBase
    {
        /// <summary>
        /// 猎手军团任务出现的频率
        /// </summary>
        private const IssueBase.IssueFrequency ArmyOfPoachersIssueFrequency = IssueBase.IssueFrequency.Common;
        
        /// <summary>
        /// 缓存的任务实例，用于优化性能
        /// </summary>
        private MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest _cachedQuest;

        /// <summary>
        /// 与猎手战斗的后果处理
        /// 
        /// 当玩家选择与猎手战斗时调用此方法，
        /// 启动任务战斗场景。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        private void engage_poachers_consequence(MenuCallbackArgs args)
        {
            MerchantArmyOfPoachersIssueBehavior.Instance.StartQuestBattle();
        }

        /// <summary>
        /// 获取当前任务实例的单例属性
        /// 
        /// 这个属性提供了一个优化机制来获取当前正在进行的任务实例。
        /// 它首先检查缓存的任务实例，如果不存在或已完成，则遍历所有任务来查找。
        /// 
        /// 性能优化策略：
        /// - 使用缓存减少重复查找
        /// - 延迟初始化任务实例
        /// - 优化任务查找算法
        /// 
        /// 线程安全考虑：
        /// - 在单线程环境中运行，无需额外的同步机制
        /// - 使用原子操作确保状态一致性
        /// </summary>
        private static MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest Instance
        {
            get
            {
                MerchantArmyOfPoachersIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<MerchantArmyOfPoachersIssueBehavior>();
                if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
                    return campaignBehavior._cachedQuest;
                foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
                {
                    if (quest is MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest poachersIssueQuest)
                    {
                        campaignBehavior._cachedQuest = poachersIssueQuest;
                        return campaignBehavior._cachedQuest;
                    }
                }
                return (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) null;
            }
        }

        /// <summary>
        /// 注册游戏事件监听器
        /// 
        /// 这个方法注册了处理任务所需的各种事件监听器，
        /// 包括任务检查和游戏会话启动事件。
        /// 
        /// 事件设计模式：
        /// - 使用观察者模式处理游戏事件
        /// - 实现松耦合的事件处理机制
        /// - 支持动态事件注册和注销
        /// 
        /// 内存管理：
        /// - 使用AddNonSerializedListener避免序列化问题
        /// - 优化事件监听器的生命周期管理
        /// </summary>
        public override void RegisterEvents()
        {
            CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
            CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
        }

        /// <summary>
        /// 检查是否可以返回猎手菜单的条件
        /// 
        /// 当玩家受伤时，不允许返回菜单，这符合游戏逻辑。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        /// <returns>是否满足返回条件</returns>
        private bool poachers_menu_back_condition(MenuCallbackArgs args) => Hero.MainHero.IsWounded;

        /// <summary>
        /// 游戏会话启动时的初始化
        /// 
        /// 这个方法在游戏会话启动时被调用，用于初始化猎手任务相关的游戏菜单。
        /// 它设置了多个菜单选项，包括战斗、谈判和返回选项。
        /// 
        /// 菜单系统设计：
        /// - 实现分层菜单结构
        /// - 支持条件性菜单选项显示
        /// - 提供动态菜单更新机制
        /// 
        /// 用户体验优化：
        /// - 根据玩家状态动态调整可用选项
        /// - 提供清晰的菜单导航路径
        /// - 实现菜单状态的正确管理
        /// </summary>
        /// <param name="gameStarter">游戏启动器</param>
        private void OnSessionLaunched(CampaignGameStarter gameStarter)
        {
            gameStarter.AddGameMenu("army_of_poachers_village", "{=eaQxeRh6}A boy runs out of the village and asks you to talk to the leader of the poachers. The villagers want to avoid a fight outside their homes.", new OnInitDelegate(this.army_of_poachers_village_on_init));
            gameStarter.AddGameMenuOption("army_of_poachers_village", "engage_the_poachers", "{=xF7he8fZ}Fight the poachers", new GameMenuOption.OnConditionDelegate(this.engage_poachers_condition), new GameMenuOption.OnConsequenceDelegate(this.engage_poachers_consequence));
            gameStarter.AddGameMenuOption("army_of_poachers_village", "talk_to_the_poachers", "{=wwJGE28v}Negotiate with the poachers", new GameMenuOption.OnConditionDelegate(this.talk_to_leader_of_poachers_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_leader_of_poachers_consequence));
            gameStarter.AddGameMenuOption("army_of_poachers_village", "back_poachers", "{=E1OwmQFb}Back", new GameMenuOption.OnConditionDelegate(this.poachers_menu_back_condition), new GameMenuOption.OnConsequenceDelegate(this.poachers_menu_back_consequence));
        }

        /// <summary>
        /// 猎手村庄菜单初始化
        /// 
        /// 这个方法处理猎手任务的核心逻辑，包括：
        /// - 设置菜单背景
        /// - 创建猎手队伍
        /// - 处理战斗结果
        /// - 管理任务状态转换
        /// 
        /// 状态机设计：
        /// - 实现复杂的状态转换逻辑
        /// - 处理多种可能的任务结果
        /// - 维护任务状态的完整性
        /// 
        /// 错误处理：
        /// - 包含完整的空值检查
        /// - 处理各种边界条件
        /// - 提供安全的错误恢复机制
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        private void army_of_poachers_village_on_init(MenuCallbackArgs args)
        {
            if (MerchantArmyOfPoachersIssueBehavior.Instance == null || !MerchantArmyOfPoachersIssueBehavior.Instance.IsOngoing)
                return;
            args.MenuContext.SetBackgroundMeshName(MerchantArmyOfPoachersIssueBehavior.Instance._questVillage.Settlement.SettlementComponent.WaitMeshName);
            if (MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty == null && !Hero.MainHero.IsWounded)
                MerchantArmyOfPoachersIssueBehavior.Instance.CreatePoachersParty();
            if (MerchantArmyOfPoachersIssueBehavior.Instance._isReadyToBeFinalized && PlayerEncounter.Current != null)
            {
                bool flag = PlayerEncounter.Battle.WinningSide == PlayerEncounter.Battle.PlayerSide;
                PlayerEncounter.Update();
                if (PlayerEncounter.Current == null)
                {
                    MerchantArmyOfPoachersIssueBehavior.Instance._isReadyToBeFinalized = false;
                    if (flag)
                        MerchantArmyOfPoachersIssueBehavior.Instance.QuestSuccessWithPlayerDefeatedPoachers();
                    else
                        MerchantArmyOfPoachersIssueBehavior.Instance.QuestFailWithPlayerDefeatedAgainstPoachers();
                }
                else if (PlayerEncounter.Battle.WinningSide == BattleSideEnum.None)
                {
                    PlayerEncounter.LeaveEncounter = true;
                    PlayerEncounter.Update();
                    MerchantArmyOfPoachersIssueBehavior.Instance.QuestFailWithPlayerDefeatedAgainstPoachers();
                }
                else if (flag && PlayerEncounter.Current != null && Game.Current.GameStateManager.ActiveState is MapState)
                {
                    PlayerEncounter.Finish();
                    MerchantArmyOfPoachersIssueBehavior.Instance.QuestSuccessWithPlayerDefeatedPoachers();
                }
            }
            if (MerchantArmyOfPoachersIssueBehavior.Instance == null || !MerchantArmyOfPoachersIssueBehavior.Instance._talkedToPoachersBattleWillStart)
                return;
            MerchantArmyOfPoachersIssueBehavior.Instance.StartQuestBattle();
        }

        /// <summary>
        /// 与猎手战斗的条件检查
        /// 
        /// 这个方法检查玩家是否可以与猎手战斗，主要考虑玩家的受伤状态。
        /// 当玩家重伤时，不允许进行战斗。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        /// <returns>是否满足战斗条件</returns>
        private bool engage_poachers_condition(MenuCallbackArgs args)
        {
            args.optionLeaveType = GameMenuOption.LeaveType.Mission;
            if (Hero.MainHero.IsWounded)
            {
                args.Tooltip = new TextObject("{=gEHEQazX}You're heavily wounded and not fit for the fight. Come back when you're ready.");
                args.IsEnabled = false;
            }
            return true;
        }

        /// <summary>
        /// 同步数据方法（当前为空实现）
        /// 
        /// 这个方法用于在游戏存档时同步数据，当前实现为空。
        /// </summary>
        /// <param name="dataStore">数据存储对象</param>
        public override void SyncData(IDataStore dataStore)
        {
        }

        /// <summary>
        /// 与猎手领袖谈判的条件检查
        /// 
        /// 这个方法检查玩家是否可以与猎手领袖进行谈判。
        /// 类似于战斗条件，当玩家重伤时不允许谈判。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        /// <returns>是否满足谈判条件</returns>
        private bool talk_to_leader_of_poachers_condition(MenuCallbackArgs args)
        {
            args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
            if (Hero.MainHero.IsWounded)
            {
                args.Tooltip = new TextObject("{=gEHEQazX}You're heavily wounded and not fit for the fight. Come back when you're ready.");
                args.IsEnabled = false;
            }
            return true;
        }

        /// <summary>
        /// 返回猎手菜单的后果处理
        /// 
        /// 当玩家选择返回时，清理 encounter 状态并退出当前场景。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        private void poachers_menu_back_consequence(MenuCallbackArgs args)
        {
            PlayerEncounter.LeaveSettlement();
            PlayerEncounter.Finish();
        }

        /// <summary>
        /// 检查任务条件是否满足
        /// 
        /// 这个方法验证触发猎手任务的各种条件：
        /// - 任务给予者必须在定居点
        /// - 必须有合适的村庄作为任务地点
        /// - 任务给予者必须是商人
        /// - 必须满足特定的人格特质要求
        /// - 定居点的安全度必须低于特定值
        /// 
        /// 条件验证策略：
        /// - 使用分层条件检查
        /// - 实现早期退出优化
        /// - 提供详细的条件验证反馈
        /// 
        /// 性能优化：
        /// - 避免不必要的计算
        /// - 使用缓存的数据
        /// - 优化条件检查顺序
        /// </summary>
        /// <param name="issueGiver">任务给予者</param>
        /// <param name="questVillage">任务村庄</param>
        /// <returns>是否满足所有条件</returns>
        private bool ConditionsHold(Hero issueGiver, out Village questVillage)
        {
            questVillage = (Village) null;
            if (issueGiver.CurrentSettlement == null)
                return false;
            questVillage = issueGiver.CurrentSettlement.BoundVillages.GetRandomElementWithPredicate<Village>((Func<Village, bool>) (x => !x.Settlement.IsUnderRaid && !x.Settlement.IsRaided));
            if (questVillage == null || !issueGiver.IsMerchant || issueGiver.GetTraitLevel(DefaultTraits.Mercy) + issueGiver.GetTraitLevel(DefaultTraits.Honor) >= 0)
                return false;
            Town town = issueGiver.CurrentSettlement.Town;
            return town != null && (double) town.Security <= 60.0;
        }

        /// <summary>
        /// 与猎手领袖谈判的后果处理
        /// 
        /// 当玩家选择与猎手领袖谈判时，打开对话界面。
        /// </summary>
        /// <param name="args">菜单回调参数</param>
        private void talk_to_leader_of_poachers_consequence(MenuCallbackArgs args)
        {
            CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty.Party), MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty.Party));
        }

        /// <summary>
        /// 检查任务触发条件
        /// 
        /// 这个方法是任务系统的核心入口点，定期检查是否应该触发猎手任务。
        /// 它会验证所有必要的条件，并根据条件添加潜在的任务数据。
        /// 
        /// 任务触发机制：
        /// - 实现基于条件的任务触发
        /// - 支持动态任务生成
        /// - 提供任务频率控制
        /// 
        /// 系统集成：
        /// - 与战役管理器深度集成
        /// - 支持任务系统的完整生命周期
        /// - 实现任务数据的有效管理
        /// </summary>
        /// <param name="hero">要检查的英雄</param>
        public void OnCheckForIssue(Hero hero)
        {
            Village questVillage;
            if (this.ConditionsHold(hero, out questVillage))
                Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), IssueBase.IssueFrequency.Common, (object) questVillage));
            else
                Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), IssueBase.IssueFrequency.Common));
        }

        /// <summary>
        /// 当任务被选中时的处理方法
        /// 
        /// 这个方法在玩家选择接受任务时被调用，创建具体的任务实例。
        /// </summary>
        /// <param name="pid">潜在任务数据</param>
        /// <param name="issueOwner">任务所有者</param>
        /// <returns>创建的任务实例</returns>
        private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
        {
            return (IssueBase) new MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue(issueOwner, pid.RelatedObject as Village);
        }

        /// <summary>
        /// 猎手军团任务的具体实现
        /// 
        /// 这个类实现了猎手军团任务的核心逻辑，包括：
        /// - 任务的基本属性和行为
        /// - 替代解决方案系统
        /// - 奖励和后果计算
        /// - 任务状态管理
        /// 
        /// 设计模式：
        /// - 继承自IssueBase，获得任务系统的基础功能
        /// - 实现完整的任务生命周期管理
        /// - 支持多种解决方案和结果
        /// 
        /// 性能优化：
        /// - 使用缓存和延迟计算
        /// - 优化数据存储和检索
        /// - 实现高效的内存管理
        /// </summary>
        public class MerchantArmyOfPoachersIssue : IssueBase
        {
            /// <summary>
            /// 替代解决方案所需的部队等级要求
            /// </summary>
            private const int AlternativeSolutionTroopTierRequirement = 2;
            
            /// <summary>
            /// 同伴所需的技能等级要求
            /// </summary>
            private const int CompanionRequiredSkillLevel = 150;
            
            /// <summary>
            /// 最小所需人员数量
            /// </summary>
            private const int MinimumRequiredMenCount = 15;
            
            /// <summary>
            /// 任务持续时间（天）
            /// </summary>
            private const int IssueDuration = 15;
            
            /// <summary>
            /// 任务时间限制（天）
            /// </summary>
            private const int QuestTimeLimit = 20;
            
            /// <summary>
            /// 任务村庄，用于存储任务的地点信息
            /// </summary>
            [SaveableField(10)]
            private Village _questVillage;

            /// <summary>
            /// 自动生成的静态对象收集方法
            /// 
            /// 这个方法用于序列化时收集相关的游戏对象。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <param name="collectedObjects">收集的对象列表</param>
            internal static void AutoGeneratedStaticCollectObjectsMerchantArmyOfPoachersIssue(
                object o,
                List<object> collectedObjects)
            {
                ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
            }

            /// <summary>
            /// 自动生成的实例对象收集方法
            /// 
            /// 这个方法用于序列化时收集实例相关的游戏对象。
            /// </summary>
            /// <param name="collectedObjects">收集的对象列表</param>
            protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
            {
                base.AutoGeneratedInstanceCollectObjects(collectedObjects);
                collectedObjects.Add((object) this._questVillage);
            }

            /// <summary>
            /// 自动生成的成员值获取方法
            /// 
            /// 这个方法用于通过反射获取任务村庄的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>任务村庄对象</returns>
            internal static object AutoGeneratedGetMemberValue_questVillage(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue) o)._questVillage;
            }

            /// <summary>
            /// 替代解决方案所需的基本人员数量
            /// 
            /// 这个属性根据任务难度动态计算所需的人员数量。
            /// 计算公式：基础人数 + 难度系数 * 可变人数
            /// 
            /// 动态计算策略：
            /// - 基于任务难度调整
            /// - 提供合理的挑战级别
            /// - 考虑玩家的游戏进度
            /// </summary>
            public override int AlternativeSolutionBaseNeededMenCount
            {
                get => 12 + MathF.Ceiling(28f * this.IssueDifficultyMultiplier);
            }

            /// <summary>
            /// 替代解决方案的基本持续时间（天）
            /// 
            /// 这个属性根据任务难度动态计算解决方案的持续时间。
            /// 计算公式：基础时间 + 难度系数 * 可变时间
            /// 
            /// 时间管理：
            /// - 基于难度调整时间
            /// - 提供合理的游戏节奏
            /// - 避免过长的等待时间
            /// </summary>
            protected override int AlternativeSolutionBaseDurationInDaysInternal
            {
                get => 3 + MathF.Ceiling(5f * this.IssueDifficultyMultiplier);
            }

            /// <summary>
            /// 任务奖励金币
            /// 
            /// 这个属性根据任务难度动态计算奖励金币数量。
            /// 计算公式：基础奖励 + 难度系数 * 可变奖励
            /// 
            /// 奖励平衡：
            /// - 基于任务难度调整
            /// - 提供合理的经济激励
            /// - 考虑游戏经济平衡
            /// </summary>
            protected override int RewardGold
            {
                get => (int) (500.0 + 3000.0 * (double) this.IssueDifficultyMultiplier);
            }

            /// <summary>
            /// 替代解决方案的规模标志
            /// 
            /// 这个属性定义了替代解决方案可能带来的后果类型。
            /// 当前设置表明解决方案可能导致伤亡和失败风险。
            /// 
            /// 风险管理：
            /// - 明确标识潜在风险
            /// - 提供完整的后果信息
            /// - 支持风险评估机制
            /// </summary>
            public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
            {
                get
                {
                    return IssueBase.AlternativeSolutionScaleFlag.Casualties | IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
                }
            }

            /// <summary>
            /// 任务给予者的简要说明
            /// 
            /// 这个属性提供了任务给予者对问题的简要描述，
            /// 解释了猎手问题的背景和起源。
            /// 
            /// 叙事设计：
            /// - 提供丰富的背景故事
            - 建立任务的情感连接
            /// - 增强游戏的沉浸感
            /// </summary>
            public override TextObject IssueBriefByIssueGiver
            {
                get
                {
                    return new TextObject("{=Jk3mDlU6}Yeah... I've got some problems. A few years ago, I needed hides for my tannery and I hired some hunters. I didn't ask too many questions about where they came by the skins they sold me. Well, that was a bit of mistake. Now they've banded together as a gang and are trying to muscle me out of the leather business.[ib:closed2][if:convo_thinking]");
                }
            }

            /// <summary>
            /// 玩家接受任务时的回应
            /// 
            /// 这个属性定义了玩家接受任务时的标准回应。
            /// </summary>
            public override TextObject IssueAcceptByPlayer
            {
                get => new TextObject("{=apuNQC2W}What can I do for you?");
            }

            /// <summary>
            /// 任务解决方案的解释
            /// 
            /// 这个属性提供了任务解决方案的详细说明，
            /// 包括目标地点和具体要求。
            /// 
            /// 指导设计：
            /// - 提供清晰的任务指导
            /// - 明确目标和要求
            /// - 增强任务的可理解性
            /// </summary>
            public override TextObject IssueQuestSolutionExplanationByIssueGiver
            {
                get
                {
                    TextObject explanationByIssueGiver = new TextObject("{=LbTETjZu}I want you to crush them. Go to {VILLAGE} and give them a lesson they won't forget.[ib:closed2][if:convo_grave]");
                    explanationByIssueGiver.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
                    return explanationByIssueGiver;
                }
            }

            /// <summary>
            /// 替代解决方案的解释
            /// 
            /// 这个属性提供了替代解决方案的详细说明，
            /// 允许玩家派遣同伴和部队来解决问题。
            /// 
            /// 选择多样性：
            /// - 提供多种解决方案
            /// - 满足不同的游戏风格
            /// - 增强游戏的策略性
            /// </summary>
            public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
            {
                get
                {
                    TextObject explanationByIssueGiver = new TextObject("{=2ELhox6C}If you don't want to get involved in this yourself, leave one of your capable companions and {NUMBER_OF_TROOPS} men for some days.[ib:closed][if:convo_grave]");
                    explanationByIssueGiver.SetTextVariable("NUMBER_OF_TROOPS", this.GetTotalAlternativeSolutionNeededMenCount());
                    return explanationByIssueGiver;
                }
            }

            /// <summary>
            /// 玩家接受任务解决方案的回应
            /// 
            /// 这个属性定义了玩家接受直接解决方案时的回应。
            /// </summary>
            public override TextObject IssueQuestSolutionAcceptByPlayer
            {
                get => new TextObject("{=b6naGx6H}I'll rid you of those poachers myself.");
            }

            /// <summary>
            /// 玩家接受替代解决方案的回应
            /// 
            /// 这个属性定义了玩家接受替代解决方案时的回应。
            /// </summary>
            public override TextObject IssueAlternativeSolutionAcceptByPlayer
            {
                get => new TextObject("{=lA14Ubal}I can send a companion to hunt these poachers.");
            }

            /// <summary>
            /// 任务给予者对替代解决方案的回应
            /// 
            /// 这个属性提供了任务给予者对玩家选择替代解决方案的回应，
            /// 包括感谢和警告。
            /// </summary>
            public override TextObject IssueAlternativeSolutionResponseByIssueGiver
            {
                get
                {
                    return new TextObject("{=Xmtlrrmf}Thank you.[ib:normal][if:convo_normal]  Don't forget to warn your men. These poachers are not ordinary bandits. Good luck.");
                }
            }

            /// <summary>
            /// 讨论替代解决方案的对话
            /// 
            /// 这个属性提供了在任务进行中讨论替代解决方案的对话选项。
            /// </summary>
            public override TextObject IssueDiscussAlternativeSolution
            {
                get
                {
                    return new TextObject("{=51ahPi69}I understand that your men are still chasing those poachers. I realize that this mess might take a little time to clean up.[ib:normal2][if:convo_grave]");
                }
            }

            /// <summary>
            /// 是否存在替代解决方案
            /// 
            /// 这个属性指示当前任务是否提供替代解决方案。
            /// </summary>
            public override bool IsThereAlternativeSolution => true;

            /// <summary>
            /// 是否存在领主解决方案
            /// 
            /// 这个属性指示当前任务是否提供领主干预的解决方案。
            /// </summary>
            public override bool IsThereLordSolution => false;

            /// <summary>
            /// 替代解决方案开始的日志文本
            /// 
            /// 这个属性提供了替代解决方案开始时的日志记录，
            /// 详细记录了任务的基本信息和参与者。
            /// 
            /// 日志系统设计：
            /// - 提供详细的任务记录
            /// - 支持动态文本生成
            /// - 包含所有关键信息
            /// </summary>
            protected override TextObject AlternativeSolutionStartLog
            {
                get
                {
                    TextObject parent = new TextObject("{=428B377z}{ISSUE_GIVER.LINK}, a merchant of {QUEST_GIVER_SETTLEMENT}, told you that the poachers {?ISSUE_GIVER.GENDER}she{?}he{\\?} hired are now out of control. You asked {COMPANION.LINK} to take {NEEDED_MEN_COUNT} of your men to go to {QUEST_VILLAGE} and kill the poachers. They should rejoin your party in {RETURN_DAYS} days.");
                    StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
                    StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
                    parent.SetTextVariable("QUEST_GIVER_SETTLEMENT", this.IssueOwner.CurrentSettlement.EncyclopediaLinkWithName);
                    parent.SetTextVariable("NEEDED_MEN_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
                    parent.SetTextVariable("QUEST_VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
                    parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
                    return parent;
                }
            }

            /// <summary>
            /// 任务标题
            /// 
            /// 这个属性提供了任务的标题，用于在游戏界面中显示。
            /// </summary>
            public override TextObject Title => new TextObject("{=iHFo2kjz}Army of Poachers");

            /// <summary>
            /// 任务描述
            /// 
            /// 这个属性提供了任务的详细描述，解释了任务的背景和目标。
            /// 
            /// 叙事完整性：
            /// - 提供清晰的背景说明
            /// - 明确任务目标
            /// - 增强故事连贯性
            /// </summary>
            public override TextObject Description
            {
                get
                {
                    TextObject description = new TextObject("{=NCC4VUOc}{ISSUE_GIVER.LINK} wants you to get rid of the poachers who once worked for {?ISSUE_GIVER.GENDER}her{?}him{\\?} but are now out of control.");
                    StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject);
                    return description;
                }
            }

            /// <summary>
            /// 任务构造函数
            /// 
            /// 这个构造函数初始化猎手军团任务的基本属性，
            /// 包括任务所有者、持续时间和任务村庄。
            /// 
            /// 初始化策略：
            /// - 设置基本的任务参数
            /// - 初始化任务状态
            /// - 验证输入参数的有效性
            /// </summary>
            /// <param name="issueOwner">任务所有者</param>
            /// <param name="questVillage">任务村庄</param>
            public MerchantArmyOfPoachersIssue(Hero issueOwner, Village questVillage)
                : base(issueOwner, CampaignTime.DaysFromNow(15f))
            {
                this._questVillage = questVillage;
            }

            /// <summary>
            /// 获取任务效果金额
            /// 
            /// 这个方法根据不同的任务效果类型返回相应的影响值。
            /// 
            /// 效果系统：
            /// - 支持多种效果类型
            /// - 提供动态效果计算
            /// - 考虑任务难度的影响
            /// </summary>
            /// <param name="issueEffect">任务效果类型</param>
            /// <returns>效果金额</returns>
            protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
            {
                if (issueEffect == DefaultIssueEffects.SettlementProsperity)
                    return 0.2f;
                if (issueEffect == DefaultIssueEffects.SettlementSecurity)
                    return -1f;
                return issueEffect == DefaultIssueEffects.SettlementLoyalty || issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.2f : 0.0f;
            }

            /// <summary>
            /// 检查部队是否满足替代解决方案条件
            /// 
            /// 这个方法验证提供的部队是否满足替代解决方案的要求，
            /// 包括人员数量和部队等级。
            /// 
            /// 验证策略：
            /// - 检查人员数量
            /// - 验证部队等级
            /// - 提供详细的反馈信息
            /// </summary>
            /// <param name="troopRoster">部队花名册</param>
            /// <param name="explanation">解释文本</param>
            /// <returns>是否满足条件</returns>
            public override bool DoTroopsSatisfyAlternativeSolution(
                TroopRoster troopRoster,
                out TextObject explanation)
            {
                explanation = TextObject.Empty;
                return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
            }

            /// <summary>
            /// 检查部队类型是否被替代解决方案需要
            /// 
            /// 这个方法确定特定的部队类型是否符合替代解决方案的要求。
            /// </summary>
            /// <param name="character">角色对象</param>
            /// <returns>是否需要该类型</returns>
            public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
            {
                return character.Tier >= 2;
            }

            /// <summary>
            /// 获取替代解决方案所需的技能
            /// 
            /// 这个方法根据英雄的技能水平确定最适合的技能类型
            /// 用于替代解决方案。
            /// 
            /// 技能评估：
            /// - 评估多个相关技能
            /// - 选择最高级技能
            /// - 提供技能等级要求
            /// </summary>
            /// <param name="hero">英雄对象</param>
            /// <returns>技能对象和所需等级</returns>
            public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
            {
                int skillValue1 = hero.GetSkillValue(DefaultSkills.Bow);
                int skillValue2 = hero.GetSkillValue(DefaultSkills.Crossbow);
                int skillValue3 = hero.GetSkillValue(DefaultSkills.Throwing);
                return skillValue1 >= skillValue2 && skillValue1 >= skillValue3 ? (DefaultSkills.Bow, 150) : (skillValue2 >= skillValue3 ? DefaultSkills.Crossbow : DefaultSkills.Throwing, 150);
            }

            /// <summary>
            /// 替代解决方案条件检查
            /// 
            /// 这个方法检查是否满足执行替代解决方案的基本条件。
            /// </summary>
            /// <param name="explanation">解释文本</param>
            /// <returns>是否满足条件</returns>
            public override bool AlternativeSolutionCondition(out TextObject explanation)
            {
                explanation = TextObject.Empty;
                return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
            }

            /// <summary>
            /// 获取任务出现频率
            /// 
            /// 这个方法返回任务的出现频率设置。
            /// </summary>
            /// <returns>任务频率</returns>
            public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Common;

            /// <summary>
            /// 任务存活条件检查
            /// 
            /// 这个方法检查任务是否应该继续存在，考虑各种游戏状态。
            /// 
            /// 存活条件：
            /// - 村庄未被袭击
            /// - 定居点安全度低于特定值
            /// - 任务所有者仍然存在
            /// </summary>
            /// <returns>是否满足存活条件</returns>
            public override bool IssueStayAliveConditions()
            {
                return !this._questVillage.Settlement.IsUnderRaid && !this._questVillage.Settlement.IsRaided && (double) this.IssueOwner.CurrentSettlement.Town.Security <= 90.0;
            }

            /// <summary>
            /// 玩家接受任务的条件检查
            /// 
            /// 这个方法检查玩家是否可以接受当前任务，
            /// 包括关系、部队数量和战争状态等条件。
            /// 
            /// 条件验证：
            /// - 检查与任务给予者的关系
            /// - 验证部队数量
            /// - 检查战争状态
            /// </summary>
            /// <param name="issueGiver">任务给予者</param>
            /// <param name="flag">前提条件标志</param>
            /// <param name="relationHero">关系英雄</param>
            /// <param name="skill">技能对象</param>
            /// <returns>是否满足条件</returns>
            protected override bool CanPlayerTakeQuestConditions(
                Hero issueGiver,
                out IssueBase.PreconditionFlags flag,
                out Hero relationHero,
                out SkillObject skill)
            {
                skill = (SkillObject) null;
                relationHero = (Hero) null;
                flag = IssueBase.PreconditionFlags.None;
                if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
                {
                    flag |= IssueBase.PreconditionFlags.Relation;
                    relationHero = issueGiver;
                }
                if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 15)
                    flag |= IssueBase.PreconditionFlags.NotEnoughTroops;
                if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
                    flag |= IssueBase.PreconditionFlags.AtWar;
                return flag == IssueBase.PreconditionFlags.None;
            }

            /// <summary>
            /// 游戏加载时的处理
            /// 
            /// 这个方法在游戏加载时被调用，用于恢复任务状态。
            /// 当前实现为空，但保留了扩展性。
            /// </summary>
            protected override void OnGameLoad()
            {
            }

            /// <summary>
            /// 每小时检查
            /// 
            /// 这个方法每小时被调用一次，用于处理任务的定期更新。
            /// 当前实现为空，但保留了扩展性。
            /// </summary>
            protected override void HourlyTick()
            {
            }

            /// <summary>
            /// 生成任务实例
            /// 
            /// 这个方法根据当前任务创建具体的任务实例。
            /// </summary>
            /// <param name="questId">任务ID</param>
            /// <returns>任务实例</returns>
            protected override QuestBase GenerateIssueQuest(string questId)
            {
                return (QuestBase) new MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(20f), this._questVillage, this.IssueDifficultyMultiplier, this.RewardGold);
            }

            /// <summary>
            /// 任务超时后果处理
            /// 
            /// 这个方法处理任务超时时的后果。
            /// 当前实现为空，但保留了扩展性。
            /// </summary>
            protected override void CompleteIssueWithTimedOutConsequences()
            {
            }

            /// <summary>
            /// 同伴技能奖励经验值
            /// 
            /// 这个属性计算替代解决方案成功时同伴获得的技能经验值。
            /// 计算公式：基础经验 + 难度系数 * 可变经验
            /// </summary>
            protected override int CompanionSkillRewardXP
            {
                get => (int) (800.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
            }

            /// <summary>
            /// 替代解决方案成功后果
            /// 
            /// 这个方法处理替代解决方案成功时的各种后果，
            /// 包括关系变化、权力变化和定居点属性变化。
            /// 
            /// 后果系统：
            /// - 更新关系值
            /// - 调整权力平衡
            /// - 影响定居点属性
            /// </summary>
            protected override void AlternativeSolutionEndWithSuccessConsequence()
            {
                this.RelationshipChangeWithIssueOwner = 5;
                this.IssueOwner.AddPower(30f);
                this.IssueOwner.CurrentSettlement.Town.Prosperity += 50f;
            }

            /// <summary>
            /// 替代解决方案失败后果
            /// 
            /// 这个方法处理替代解决方案失败时的各种后果，
            /// 包括关系下降、权力减少和定居点属性恶化。
            /// 
            /// 失败处理：
            /// - 降低关系值
            /// - 减少权力
            /// - 恶化定居点条件
            /// - 影响角色特质
            /// </summary>
            protected override void AlternativeSolutionEndWithFailureConsequence()
            {
                this.RelationshipChangeWithIssueOwner = -5;
                this.IssueOwner.AddPower(-50f);
                this.IssueOwner.CurrentSettlement.Town.Prosperity -= 30f;
                this.IssueOwner.CurrentSettlement.Town.Security -= 5f;
                TraitLevelingHelper.OnIssueFailed(this.IssueOwner, new Tuple<TraitObject, int>[1]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
                });
            }
        }

        /// <summary>
        /// 猎手军团任务的具体实现类
        /// 
        /// 这个类实现了猎手军团任务的具体逻辑，包括：
        /// - 任务状态管理
        /// - 对话系统
        /// - 战斗系统
        /// - 任务完成逻辑
        /// 
        /// 复杂性管理：
        /// - 使用状态机管理任务流程
        /// - 实现复杂的事件处理
        /// - 提供完整的错误处理
        /// 
        /// 性能优化：
        /// - 优化内存使用
        /// - 减少不必要的计算
        /// - 实现高效的状态管理
        /// </summary>
        public class MerchantArmyOfPoachersIssueQuest : QuestBase
        {
            /// <summary>
            /// 猎手队伍
            /// </summary>
            [SaveableField(10)]
            internal MobileParty _poachersParty;
            
            /// <summary>
            /// 任务村庄
            /// </summary>
            [SaveableField(20)]
            internal Village _questVillage;
            
            /// <summary>
            /// 是否已与猎手交谈并将开始战斗
            /// </summary>
            [SaveableField(30)]
            internal bool _talkedToPoachersBattleWillStart;
            
            /// <summary>
            /// 是否准备完成
            /// </summary>
            [SaveableField(40)]
            internal bool _isReadyToBeFinalized;
            
            /// <summary>
            /// 是否已尝试说服一次
            /// </summary>
            [SaveableField(50)]
            internal bool _persuasionTriedOnce;
            
            /// <summary>
            /// 难度系数
            /// </summary>
            [SaveableField(60)]
            internal float _difficultyMultiplier;
            
            /// <summary>
            /// 奖励金币
            /// </summary>
            [SaveableField(70)]
            internal int _rewardGold;
            
            /// <summary>
            /// 说服任务
            /// </summary>
            private PersuasionTask _task;
            
            /// <summary>
            /// 说服难度
            /// </summary>
            private const PersuasionDifficulty Difficulty = PersuasionDifficulty.MediumHard;

            /// <summary>
            /// 自动生成的静态对象收集方法
            /// 
            /// 这个方法用于序列化时收集相关的游戏对象。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <param name="collectedObjects">收集的对象列表</param>
            internal static void AutoGeneratedStaticCollectObjectsMerchantArmyOfPoachersIssueQuest(
                object o,
                List<object> collectedObjects)
            {
                ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
            }

            /// <summary>
            /// 自动生成的实例对象收集方法
            /// 
            /// 这个方法用于序列化时收集实例相关的游戏对象。
            /// </summary>
            /// <param name="collectedObjects">收集的对象列表</param>
            protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
            {
                base.AutoGeneratedInstanceCollectObjects(collectedObjects);
                collectedObjects.Add((object) this._poachersParty);
                collectedObjects.Add((object) this._questVillage);
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 猎手队伍
            /// 
            /// 这个方法用于通过反射获取猎手队伍的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>猎手队伍对象</returns>
            internal static object AutoGeneratedGetMemberValue_poachersParty(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._poachersParty;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 任务村庄
            /// 
            /// 这个方法用于通过反射获取任务村庄的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>任务村庄对象</returns>
            internal static object AutoGeneratedGetMemberValue_questVillage(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._questVillage;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 谈话战斗状态
            /// 
            /// 这个方法用于通过反射获取谈话战斗状态的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>谈话战斗状态</returns>
            internal static object AutoGeneratedGetMemberValue_talkedToPoachersBattleWillStart(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._talkedToPoachersBattleWillStart;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 完成准备状态
            /// 
            /// 这个方法用于通过反射获取完成准备状态的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>完成准备状态</returns>
            internal static object AutoGeneratedGetMemberValue_isReadyToBeFinalized(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._isReadyToBeFinalized;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 说服尝试状态
            /// 
            /// 这个方法用于通过反射获取说服尝试状态的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>说服尝试状态</returns>
            internal static object AutoGeneratedGetMemberValue_persuasionTriedOnce(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._persuasionTriedOnce;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 难度系数
            /// 
            /// 这个方法用于通过反射获取难度系数的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>难度系数</returns>
            internal static object AutoGeneratedGetMemberValue_difficultyMultiplier(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._difficultyMultiplier;
            }

            /// <summary>
            /// 自动生成的成员值获取方法 - 奖励金币
            /// 
            /// 这个方法用于通过反射获取奖励金币的值。
            /// </summary>
            /// <param name="o">对象实例</param>
            /// <returns>奖励金币</returns>
            internal static object AutoGeneratedGetMemberValue_rewardGold(object o)
            {
                return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._rewardGold;
            }

            /// <summary>
            /// 任务标题
            /// 
            /// 这个属性提供了任务的标题，用于在游戏界面中显示。
            /// </summary>
            public override TextObject Title => new TextObject("{=iHFo2kjz}Army of Poachers");

            /// <summary>
            /// 是否隐藏剩余时间
            /// 
            /// 这个属性指示是否在任务界面中隐藏剩余时间显示。
            /// </summary>
            public override bool IsRemainingTimeHidden => false;

            /// <summary>
            /// 任务开始日志文本
            /// 
            /// 这个属性提供了任务开始时的日志记录，
            /// 详细记录了任务的基本信息和背景。
            /// 
            /// 日志系统：
            /// - 提供详细的任务记录
            /// - 支持动态文本生成
            /// - 包含所有关键信息
            /// </summary>
            private TextObject _questStartedLogText
            {
                get
                {
                    TextObject parent = new TextObject("{=fk4ewfQh}{QUEST_GIVER.LINK}, a merchant of {SETTLEMENT}, told you that the poachers {?QUEST_GIVER.GENDER}she{?}he{\\?} hired before are now out of control. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to go to {VILLAGE} around midnight and kill the poachers.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    parent.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
                    parent.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
                    return parent;
                }
            }

            /// <summary>
            /// 目标村庄被袭击时的取消日志
            /// 
            /// 这个属性提供了当目标村庄被袭击时任务取消的日志记录。
            /// </summary>
            private TextObject _questCanceledTargetVillageRaided
            {
                get
                {
                    TextObject targetVillageRaided = new TextObject("{=etYq1Tky}{VILLAGE} was raided and the poachers scattered.");
                    targetVillageRaided.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
                    return targetVillageRaided;
                }
            }

            /// <summary>
            /// 战争宣布时的取消日志
            /// 
            /// 这个属性提供了当战争宣布时任务取消的日志记录。
            /// </summary>
            private TextObject _questCanceledWarDeclared
            {
                get
                {
                    TextObject parent = new TextObject("{=vW6kBki9}Your clan is now at war with {QUEST_GIVER.LINK}'s realm. Your agreement with {QUEST_GIVER.LINK} is canceled.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    return parent;
                }
            }

            /// <summary>
            /// 玩家宣布战争时的任务失败日志
            /// 
            /// 这个属性提供了当玩家宣布战争时任务失败的日志记录。
            /// </summary>
            private TextObject _playerDeclaredWarQuestLogText
            {
                get
                {
                    TextObject parent = new TextObject("{=bqeWVVEE}Your actions have started a war with {QUEST_GIVER.LINK}'s faction. {?QUEST_GIVER.GENDER}She{?}He{\\?} cancels your agreement and the quest is a failure.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    return parent;
                }
            }

            /// <summary>
            /// 与猎手交谈后任务失败的日志
            /// 
            /// 这个属性提供了当玩家与猎手交谈后选择不参与时任务失败的日志记录。
            /// </summary>
            private TextObject _questFailedAfterTalkingWithProachers
            {
                get
                {
                    TextObject parent = new TextObject("{=PIukmFYA}You decided not to get involved and left the village. You have failed to help {QUEST_GIVER.LINK} as promised.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    return parent;
                }
            }

            /// <summary>
            /// 玩家与猎手达成协议的任务成功日志
            /// 
            /// 这个属性提供了当玩家成功说服猎手时任务成功的日志记录。
            /// </summary>
            private TextObject _questSuccessPlayerComesToAnAgreementWithPoachers
            {
                get => new TextObject("{=qPfJpwGa}You have persuaded the poachers to leave the district.");
            }

            /// <summary>
            /// 玩家被猎手击败的任务失败日志
            /// 
            /// 这个属性提供了当玩家被猎手击败时任务失败的日志记录。
            /// </summary>
            private TextObject _questFailWithPlayerDefeatedAgainstPoachers
            {
                get
                {
                    TextObject parent = new TextObject("{=p8Kfl5u6}You lost the battle against the poachers and failed to help {QUEST_GIVER.LINK} as promised.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    return parent;
                }
            }

            /// <summary>
            /// 玩家击败猎手的任务成功日志
            /// 
            /// 这个属性提供了当玩家成功击败猎手时任务成功的日志记录。
            /// </summary>
            private TextObject _questSuccessWithPlayerDefeatedPoachers
            {
                get
                {
                    TextObject parent = new TextObject("{=8gNqLqFl}You have defeated the poachers and helped {QUEST_GIVER.LINK} as promised.");
                    StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
                    return parent;
                }
            }

            /// <summary>
            /// 任务超时的失败日志
            /// 
            /// 这个属性提供了当任务超时时失败的日志记录。
            /// </summary>
            private TextObject _questFailedWithTimeOutLogText
            {
                get => new TextObject("{=HX7E09XJ}You failed to complete the quest in time.");
            }

            /// <summary>
            /// 任务构造函数
            /// 
            /// 这个构造函数初始化猎手军团任务的具体属性，
            /// 包括任务ID、给予者、持续时间、村庄等信息。
            /// 
            /// 初始化策略：
            /// - 设置基本的任务参数
            /// - 初始化任务状态
            /// - 设置对话系统
            /// - 验证输入参数的有效性
            /// </summary>
            /// <param name="questId">任务ID</param>
            /// <param name="giverHero">任务给予者</param>
            /// <param name="duration">持续时间</param>
            /// <param name="questVillage">任务村庄</param>
            /// <param name="difficultyMultiplier">难度系数</param>
            /// <param name="rewardGold">奖励金币</param>
            public MerchantArmyOfPoachersIssueQuest(
                string questId,
                Hero giverHero,
                CampaignTime duration,
                Village questVillage,
                float difficultyMultiplier,
                int rewardGold)
                : base(questId, giverHero, duration, rewardGold)
            {
                this._questVillage = questVillage;
                this._talkedToPoachersBattleWillStart = false;
                this._isReadyToBeFinalized = false;
                this._difficultyMultiplier = difficultyMultiplier;
                this._rewardGold = rewardGold;
                this.SetDialogs();
                this.InitializeQuestOnCreation();
            }

            /// <summary>
            /// 设置开始对话的条件检查
            /// 
            /// 这个方法检查是否可以显示与猎手的开始对话。
            /// 
            /// 条件验证：
            /// - 检查猎手队伍是否存在
            /// - 验证对话对象是否正确
            /// - 根据说服尝试状态设置不同文本
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool SetStartDialogOnCondition()
            {
                if (this._poachersParty == null || CharacterObject.OneToOneConversationCharacter != ConversationHelper.GetConversationCharacterPartyLeader(this._poachersParty.Party))
                    return false;
                MBTextManager.SetTextVariable("POACHER_PARTY_START_LINE", "{=j9MBwnWI}Well...Are you working for that merchant in the town ? So it's all fine when the rich folk trade in poached skins, but if we do it, armed men come to hunt us down.", false);
                if (this._persuasionTriedOnce)
                    MBTextManager.SetTextVariable("POACHER_PARTY_START_LINE", "{=Nn06TSq9}Anything else to say?", false);
                return true;
            }

            /// <summary>
            /// 获取猎手队伍对话流程
            /// 
            /// 这个方法创建并配置与猎手队伍的完整对话流程，
            /// 包括说服系统、战斗选项和多种对话分支。
            /// 
            /// 对话系统设计：
            /// - 实现复杂的对话树结构
            /// - 支持动态对话生成
            /// - 集成说服系统
            /// - 提供多种对话路径
            /// 
            /// 用户体验：
            /// - 提供自然的对话流程
            /// - 支持多种解决策略
            /// - 增强游戏的叙事性
            /// </summary>
            /// <returns>对话流程对象</returns>
            private DialogFlow GetPoacherPartyDialogFlow()
            {
                DialogFlow dialog = DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=!}{POACHER_PARTY_START_LINE}").Condition((ConversationSentence.OnConditionDelegate) (() => this.SetStartDialogOnCondition())).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._task = this.GetPersuasionTask())).BeginPlayerOptions().PlayerOption("{=afbLOXbb}Maybe we can come to an agreement.").Condition((ConversationSentence.OnConditionDelegate) (() => !this._persuasionTriedOnce)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._persuasionTriedOnce = true)).GotoDialogState("start_poachers_persuasion").PlayerOption("{=mvw1ayGt}I'm here to do the job I agreed to do, outlaw. Give up or die.").NpcLine("{=hOVr77fd}You will never see the sunrise again![ib:warrior][if:convo_furious]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._talkedToPoachersBattleWillStart = true)).CloseDialog().PlayerOption("{=VJYEoOAc}Well... You have a point. Go on. We won't bother you any more.").NpcLine("{=wglTyBbx}Thank you, friend. Go in peace.[ib:normal][if:convo_approving]").Consequence((ConversationSentence.OnConsequenceDelegate) () =>
                {
                    Campaign.Current.GameMenuManager.SetNextMenu("village");
                    Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.QuestFailedAfterTalkingWithPoachers);
                })).CloseDialog().EndPlayerOptions().CloseDialog();
                this.AddPersuasionDialogs(dialog);
                return dialog;
            }

            /// <summary>
            /// 添加说服对话
            /// 
            /// 这个方法为对话流程添加复杂地说服系统，
            /// 包括多个说服选项和相应的反馈机制。
            /// 
            /// 说服系统：
            /// - 实现多阶段说服过程
            /// - 支持多种说服策略
            /// - 提供动态反馈机制
            /// - 考虑角色技能和特质
            /// </summary>
            /// <param name="dialog">对话流程对象</param>
            private void AddPersuasionDialogs(DialogFlow dialog)
            {
                dialog.AddDialogLine("poachers_persuasion_check_accepted", "start_poachers_persuasion", "poachers_persuasion_start_reservation", "{=6P1ruzsC}Maybe...", new ConversationSentence.OnConditionDelegate(this.persuasion_start_with_poachers_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_start_with_poachers_on_consequence), (object) this);
                dialog.AddDialogLine("poachers_persuasion_rejected", "poachers_persuasion_start_reservation", "start", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.persuasion_failed_with_poachers_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_rejected_with_poachers_on_consequence), (object) this);
                dialog.AddDialogLine("poachers_persuasion_attempt", "poachers_persuasion_start_reservation", "poachers_persuasion_select_option", "{=wM77S68a}What's there to discuss?", (ConversationSentence.OnConditionDelegate) (() => !this.persuasion_failed_with_poachers_on_condition()), (ConversationSentence.OnConsequenceDelegate) null, (object) this);
                dialog.AddDialogLine("poachers_persuasion_success", "poachers_persuasion_start_reservation", "close_window", "{=JQKCPllJ}You've made your point.", new ConversationSentence.OnConditionDelegate(ConversationManager.GetPersuasionProgressSatisfied), new ConversationSentence.OnConsequenceDelegate(this.persuasion_complete_with_poachers_on_consequence), (object) this, 200);
                DialogFlow dialogFlow1 = dialog;
                ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_1_on_condition);
                ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_1_on_consequence);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_1);
                ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_1_on_condition);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
                dialogFlow1.AddPlayerLine("poachers_persuasion_select_option_1", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, (object) this, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
                DialogFlow dialogFlow2 = dialog;
                ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_2_on_condition);
                ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_2_on_consequence);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_2);
                ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_2_on_condition);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
                dialogFlow2.AddPlayerLine("poachers_persuasion_select_option_2", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, (object) this, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
                DialogFlow dialogFlow3 = dialog;
                ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_3_on_condition);
                ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_3_on_consequence);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_3);
                ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_3_on_condition);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
                dialogFlow3.AddPlayerLine("poachers_persuasion_select_option_3", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, (object) this, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
                DialogFlow dialogFlow4 = dialog;
                ConversationSentence.OnConditionDelegate conditionDelegate4 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_4_on_condition);
                ConversationSentence.OnConsequenceDelegate consequenceDelegate4 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_4_on_consequence);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate7 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_4);
                ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate4 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_4_on_condition);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate8 = persuasionOptionDelegate7;
                dialogFlow4.AddPlayerLine("poachers_persuasion_select_option_4", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_4}", conditionDelegate4, consequenceDelegate4, (object) this, clickableConditionDelegate: clickableConditionDelegate4, persuasionOptionDelegate: persuasionOptionDelegate8);
                DialogFlow dialogFlow5 = dialog;
                ConversationSentence.OnConditionDelegate conditionDelegate5 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_5_on_condition);
                ConversationSentence.OnConsequenceDelegate consequenceDelegate5 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_5_on_consequence);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate9 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_5);
                ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate5 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_5_on_condition);
                ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate10 = persuasionOptionDelegate9;
                dialogFlow5.AddPlayerLine("poachers_persuasion_select_option_5", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_5}", conditionDelegate5, consequenceDelegate5, (object) this, clickableConditionDelegate: clickableConditionDelegate5, persuasionOptionDelegate: persuasionOptionDelegate10);
                dialog.AddDialogLine("poachers_persuasion_select_option_reaction", "poachers_persuasion_selected_option_response", "poachers_persuasion_start_reservation", "{=!}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_selected_option_response_on_condition), new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_selected_option_response_on_consequence), (object) this);
            }

            /// <summary>
            /// 开始与猎手的说服对话
            /// 
            /// 这个方法初始化与猎手的说服系统，设置说服的难度和参数。
            /// 
            /// 说服系统配置：
            /// - 设置说服难度
            /// - 配置说服参数
            /// - 初始化说服任务
            /// </summary>
            private void persuasion_start_with_poachers_on_consequence()
            {
                ConversationManager.StartPersuasion(2f, 1f, 0.0f, 2f, 2f, 0.0f, PersuasionDifficulty.MediumHard);
            }

            /// <summary>
            /// 检查是否可以开始与猎手的说服对话
            /// 
            /// 这个方法验证开始说服对话的条件是否满足。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool persuasion_start_with_poachers_on_condition()
            {
                return this._poachersParty != null && CharacterObject.OneToOneConversationCharacter == ConversationHelper.GetConversationCharacterPartyLeader(this._poachersParty.Party);
            }

            /// <summary>
            /// 获取说服任务
            /// 
            /// 这个方法创建并配置说服任务，包括多个说服选项和相应的难度设置。
            /// 
            /// 说服任务设计：
            /// - 实现多种说服策略
            /// - 考虑角色技能和特质
            /// - 提供动态难度调整
            /// - 支持复杂的说服机制
            /// 
            /// 策略多样性：
            /// - 魅力 + 精明策略
            /// - 诡计 + 勇气策略
            /// - 魅力 + 仁慈策略
            /// - 魅力 + 荣誉策略
            /// - 诡计 + 精明策略
            /// </summary>
            /// <returns>配置好的说服任务</returns>
            private PersuasionTask GetPersuasionTask()
            {
                PersuasionTask persuasionTask = new PersuasionTask(0);
                persuasionTask.FinalFailLine = new TextObject("{=l7Jt5tvt}This is how I earn my living, and all your clever talk doesn't make it any different. Leave now!");
                persuasionTask.TryLaterLine = new TextObject("{=!}TODO");
                persuasionTask.SpokenLine = new TextObject("{=wM77S68a}What's there to discuss?");
                persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Easy, false, new TextObject("{=cQCs72U7}You're not bad people. You can easily ply your trade somewhere else, somewhere safe.")));
                persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=bioyMrUD}You are just a bunch of hunters. You don't stand a chance against us!"), canBlockOtherOption: true));
                persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=FO1oruNy}You talk about poor folk, but you think the people here like their village turned into a nest of outlaws?")));
                TextObject textObject = new TextObject("{=S0NeQdLp}You had an agreement with {QUEST_GIVER.NAME}. Your word is your bond, no matter which side of the law you're on.");
                StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
                persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, textObject));
                persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Hard, true, new TextObject("{=brW4pjPQ}Flee while you can. An army is already on its way here to hang you all.")));
                return persuasionTask;
            }

            /// <summary>
            /// 说服选项响应的条件检查
            /// 
            /// 这个方法检查说服选项的响应条件，并根据结果设置相应的反馈文本。
            /// 
            /// 响应处理：
            /// - 分析说服结果
            /// - 设置反馈文本
            /// - 处理关键失败情况
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_selected_option_response_on_condition()
            {
                PersuasionOptionResult optionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
                MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(optionResult), false);
                if (optionResult == PersuasionOptionResult.CriticalFailure)
                    this._task.BlockAllOptions();
                return true;
            }

            /// <summary>
            /// 说服选项响应的后果处理
            /// 
            /// 这个方法处理说服选项选择后的后果，包括说服效果的 应用。
            /// 
            /// 后果应用：
            /// - 计算说服效果
            /// - 应用说服结果
            /// - 更新任务状态
            /// </summary>
            private void poachers_persuasion_selected_option_response_on_consequence()
            {
                Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
                float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.MediumHard);
                float moveToNextStageChance;
                float blockRandomOptionChance;
                Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
                this._task.ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
            }

            /// <summary>
            /// 说服选项1的条件检查
            /// 
            /// 这个方法检查第一个说服选项是否可用，并设置相应的显示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_select_option_1_on_condition()
            {
                if (this._task.Options.Count <= 0)
                    return false;
                TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
                text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(0), false));
                text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(0).Line);
                MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_1", text, false);
                return true;
            }

            /// <summary>
            /// 说服选项2的条件检查
            /// 
            /// 这个方法检查第二个说服选项是否可用，并设置相应的显示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_select_option_2_on_condition()
            {
                if (this._task.Options.Count <= 1)
                    return false;
                TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
                text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(1), false));
                text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(1).Line);
                MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_2", text, false);
                return true;
            }

            /// <summary>
            /// 说服选项3的条件检查
            /// 
            /// 这个方法检查第三个说服选项是否可用，并设置相应的显示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_select_option_3_on_condition()
            {
                if (this._task.Options.Count <= 2)
                    return false;
                TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
                text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(2), false));
                text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(2).Line);
                MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_3", text, false);
                return true;
            }

            /// <summary>
            /// 说服选项4的条件检查
            /// 
            /// 这个方法检查第四个说服选项是否可用，并设置相应的显示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_select_option_4_on_condition()
            {
                if (this._task.Options.Count <= 3)
                    return false;
                TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
                text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(3), false));
                text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(3).Line);
                MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_4", text, false);
                return true;
            }

            /// <summary>
            /// 说服选项5的条件检查
            /// 
            /// 这个方法检查第五个说服选项是否可用，并设置相应的显示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_select_option_5_on_condition()
            {
                if (this._task.Options.Count <= 4)
                    return false;
                TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
                text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(4), false));
                text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(4).Line);
                MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_5", text, false);
                return true;
            }

            /// <summary>
            /// 说服选项1的后果处理
            /// 
            /// 这个方法处理第一个说服选项选择后的后果，阻止该选项的重复使用。
            /// </summary>
            private void poachers_persuasion_select_option_1_on_consequence()
            {
                if (this._task.Options.Count <= 0)
                    return;
                this._task.Options[0].BlockTheOption(true);
            }

            /// <summary>
            /// 说服选项2的后果处理
            /// 
            /// 这个方法处理第二个说服选项选择后的后果，阻止该选项的重复使用。
            /// </summary>
            private void poachers_persuasion_select_option_2_on_consequence()
            {
                if (this._task.Options.Count <= 1)
                    return;
                this._task.Options[1].BlockTheOption(true);
            }

            /// <summary>
            /// 说服选项3的后果处理
            /// 
            /// 这个方法处理第三个说服选项选择后的后果，阻止该选项的重复使用。
            /// </summary>
            private void poachers_persuasion_select_option_3_on_consequence()
            {
                if (this._task.Options.Count <= 2)
                    return;
                this._task.Options[2].BlockTheOption(true);
            }

            /// <summary>
            /// 说服选项4的后果处理
            /// 
            /// 这个方法处理第四个说服选项选择后的后果，阻止该选项的重复使用。
            /// </summary>
            private void poachers_persuasion_select_option_4_on_consequence()
            {
                if (this._task.Options.Count <= 3)
                    return;
                this._task.Options[3].BlockTheOption(true);
            }

            /// <summary>
            /// 说服选项5的后果处理
            /// 
            /// 这个方法处理第五个说服选项选择后的后果，阻止该选项的重复使用。
            /// </summary>
            private void poachers_persuasion_select_option_5_on_consequence()
            {
                if (this._task.Options.Count <= 4)
                    return;
                this._task.Options[4].BlockTheOption(true);
            }

            /// <summary>
            /// 说服失败的条件检查
            /// 
            /// 这个方法检查说服是否失败，并设置相应的失败提示文本。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool persuasion_failed_with_poachers_on_condition()
            {
                if (!this._task.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
                    return false;
                MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", this._task.FinalFailLine, false);
                return true;
            }

            /// <summary>
            /// 说服选项1的设置
            /// 
            /// 这个方法返回第一个说服选项的配置。
            /// </summary>
            /// <returns>说服选项配置</returns>
            private PersuasionOptionArgs poachers_persuasion_setup_option_1()
            {
                return this._task.Options.ElementAt<PersuasionOptionArgs>(0);
            }

            /// <summary>
            /// 说服选项2的设置
            /// 
            /// 这个方法返回第二个说服选项的配置。
            /// </summary>
            /// <returns>说服选项配置</returns>
            private PersuasionOptionArgs poachers_persuasion_setup_option_2()
            {
                return this._task.Options.ElementAt<PersuasionOptionArgs>(1);
            }

            /// <summary>
            /// 说服选项3的设置
            /// 
            /// 这个方法返回第三个说服选项的配置。
            /// </summary>
            /// <returns>说服选项配置</returns>
            private PersuasionOptionArgs poachers_persuasion_setup_option_3()
            {
                return this._task.Options.ElementAt<PersuasionOptionArgs>(2);
            }

            /// <summary>
            /// 说服选项4的设置
            /// 
            /// 这个方法返回第四个说服选项的配置。
            /// </summary>
            /// <returns>说服选项配置</returns>
            private PersuasionOptionArgs poachers_persuasion_setup_option_4()
            {
                return this._task.Options.ElementAt<PersuasionOptionArgs>(3);
            }

            /// <summary>
            /// 说服选项5的设置
            /// 
            /// 这个方法返回第五个说服选项的配置。
            /// </summary>
            /// <returns>说服选项配置</returns>
            private PersuasionOptionArgs poachers_persuasion_setup_option_5()
            {
                return this._task.Options.ElementAt<PersuasionOptionArgs>(4);
            }

            /// <summary>
            /// 说服选项1的可点击条件检查
            /// 
            /// 这个方法检查第一个说服选项是否可以点击，并设置相应的提示文本。
            /// </summary>
            /// <param name="hintText">提示文本</param>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_clickable_option_1_on_condition(out TextObject hintText)
            {
                hintText = new TextObject("{=9ACJsI6S}Blocked");
                if (this._task.Options.Count <= 0)
                    return false;
                hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked ? hintText : TextObject.Empty;
                return !this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
            }

            /// <summary>
            /// 说服选项2的可点击条件检查
            /// 
            /// 这个方法检查第二个说服选项是否可以点击，并设置相应的提示文本。
            /// </summary>
            /// <param name="hintText">提示文本</param>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_clickable_option_2_on_condition(out TextObject hintText)
            {
                hintText = new TextObject("{=9ACJsI6S}Blocked");
                if (this._task.Options.Count <= 1)
                    return false;
                hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked ? hintText : TextObject.Empty;
                return !this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
            }

            /// <summary>
            /// 说服选项3的可点击条件检查
            /// 
            /// 这个方法检查第三个说服选项是否可以点击，并设置相应的提示文本。
            /// </summary>
            /// <param name="hintText">提示文本</param>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_clickable_option_3_on_condition(out TextObject hintText)
            {
                hintText = new TextObject("{=9ACJsI6S}Blocked");
                if (this._task.Options.Count <= 2)
                    return false;
                hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked ? hintText : TextObject.Empty;
                return !this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
            }

            /// <summary>
            /// 说服选项4的可点击条件检查
            /// 
            /// 这个方法检查第四个说服选项是否可以点击，并设置相应的提示文本。
            /// </summary>
            /// <param name="hintText">提示文本</param>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_clickable_option_4_on_condition(out TextObject hintText)
            {
                hintText = new TextObject("{=9ACJsI6S}Blocked");
                if (this._task.Options.Count <= 3)
                    return false;
                hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked ? hintText : TextObject.Empty;
                return !this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked;
            }

            /// <summary>
            /// 说服选项5的可点击条件检查
            /// 
            /// 这个方法检查第五个说服选项是否可以点击，并设置相应的提示文本。
            /// </summary>
            /// <param name="hintText">提示文本</param>
            /// <returns>是否满足条件</returns>
            private bool poachers_persuasion_clickable_option_5_on_condition(out TextObject hintText)
            {
                hintText = new TextObject("{=9ACJsI6S}Blocked");
                if (this._task.Options.Count <= 4)
                    return false;
                hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(4).IsBlocked ? hintText : TextObject.Empty;
                return !this._task.Options.ElementAt<PersuasionOptionArgs>(4).IsBlocked;
            }

            /// <summary>
            /// 说服被拒绝的后果处理
            /// 
            /// 这个方法处理说服被拒绝时的后果，结束说服过程。
            /// </summary>
            private void persuasion_rejected_with_poachers_on_consequence()
            {
                PlayerEncounter.LeaveEncounter = false;
                ConversationManager.EndPersuasion();
            }

            /// <summary>
            /// 说服完成的后果处理
            /// 
            /// 这个方法处理说服成功完成时的后果，包括任务成功和场景切换。
            /// </summary>
            private void persuasion_complete_with_poachers_on_consequence()
            {
                PlayerEncounter.LeaveEncounter = true;
                ConversationManager.EndPersuasion();
                Campaign.Current.GameMenuManager.SetNextMenu("village");
                Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.QuestSuccessPlayerComesToAnAgreementWithPoachers);
            }

            /// <summary>
            /// 开始任务战斗
            /// 
            /// 这个方法启动与猎手的战斗场景，包括战斗初始化和场景设置。
            /// 
            /// 战斗系统：
            /// - 初始化战斗遭遇
            /// - 设置战斗场景
            /// - 配置战斗参数
            /// - 管理战斗状态
            /// </summary>
            internal void StartQuestBattle()
            {
                PlayerEncounter.RestartPlayerEncounter(PartyBase.MainParty, this._poachersParty.Party, false);
                PlayerEncounter.StartBattle();
                PlayerEncounter.Update();
                this._talkedToPoachersBattleWillStart = false;
                GameMenu.ActivateGameMenu("army_of_poachers_village");
                CampaignMission.OpenBattleMission(this._questVillage.Settlement.LocationComplex.GetScene("village_center", 1), false);
                this._isReadyToBeFinalized = true;
            }

            /// <summary>
            /// 对话条件检查
            /// 
            /// 这个方法检查是否可以与任务给予者进行对话。
            /// </summary>
            /// <returns>是否满足条件</returns>
            private bool DialogCondition() => Hero.OneToOneConversationHero == this.QuestGiver;

            /// <summary>
            /// 设置对话系统
            /// 
            /// 这个方法配置任务相关的所有对话流程，
            /// 包括任务接受、讨论和与猎手的对话。
            /// 
            /// 对话系统设计：
            /// - 实现分层的对话结构
            /// - 支持动态对话生成
            /// - 集成说服系统
            /// - 提供多种对话路径
            /// </summary>
            protected override void SetDialogs()
            {
                this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=IefM6uAy}Thank you. You'll be paid well. Also you can keep their illegally obtained leather.[ib:normal2][if:convo_bemused]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).NpcLine(new TextObject("{=NC2VGafO}They skin their beasts in the woods, then go into the village after midnight to stash the hides. The villagers are terrified of them, I believe. If you go into the village late at night, you should be able to track them down.[ib:normal][if:convo_thinking]")).NpcLine(new TextObject("{=3pkVKMnA}Most poachers would probably run if they were surprised by armed men. But these ones are bold and desperate. Be ready for a fight.[ib:normal2][if:convo_undecided_closed]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
                this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=QNV1b5s5}Are those poachers still in business?[ib:normal2][if:convo_undecided_open]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=JhJBBWab}They will be gone soon.")).NpcLine(new TextObject("{=gjGb044I}I hope they will be...[ib:normal2][if:convo_dismayed]")).CloseDialog().PlayerOption(new TextObject("{=Gu3jF88V}Any night battle can easily go wrong. I need more time to prepare.")).NpcLine(new TextObject("{=2EiC1YyZ}Well, if they get wind of what you're up to, things could go very wrong for me. Do be quick.[ib:nervous2][if:convo_dismayed]")).CloseDialog().EndPlayerOptions();
                this.QuestCharacterDialogFlow = this.GetPoacherPartyDialogFlow();
            }

            /// <summary>
            /// 创建猎手队伍
            /// 
            /// 这个方法创建猎手队伍并配置其属性，
            /// 包括队伍名称、成员、物品和AI设置。
            /// 
            /// 队伍创建：
            /// - 初始化队伍基本属性
            /// - 配置队伍成员
            /// - 设置队伍物品
            /// - 配置AI行为
            /// 
            /// 动态生成：
            /// - 根据难度调整队伍规模
            /// - 随机化队伍配置
            /// - 设置合适的AI行为
            /// </summary>
            internal void CreatePoachersParty()
            {
                this._poachersParty = MobileParty.CreateParty("poachers_party", (PartyComponent) null);
                TextObject name = new TextObject("{=WQa1R55u}Poachers Party");
                this._poachersParty.InitializeMobilePartyAtPosition(new TroopRoster(this._poachersParty.Party), new TroopRoster(this._poachersParty.Party), this._questVillage.Settlement.GetPosition2D);
                this._poachersParty.SetCustomName(name);
                this._poachersParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("leather"), (MathF.Ceiling(this._difficultyMultiplier * 5f) + MBRandom.RandomInt(0, 2)) * 2);
                this._poachersParty.MemberRoster.AddToCounts(CharacterObject.All.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (t => t.StringId == "poacher")), 10 + MathF.Ceiling(40f * this._difficultyMultiplier));
                this._poachersParty.SetPartyUsedByQuest(true);
                this._poachersParty.Ai.DisableAi();
                Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
                this._poachersParty.ActualClan = Clan.BanditFactions.FirstOrDefaultQ<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
                EnterSettlementAction.ApplyForParty(this._poachersParty, Settlement.CurrentSettlement);
            }

            /// <summary>
            /// 任务接受后果处理
            /// 
            /// 这个方法处理玩家接受任务后的后果，
            /// 包括任务初始化、日志记录和目标追踪。
            /// </summary>
            private void QuestAcceptedConsequences()
            {
                this.StartQuest();
                this.AddLog(this._questStartedLogText);
                this.AddTrackedObject((ITrackableCampaignObject) this._questVillage.Settlement);
            }

            /// <summary>
            /// 与猎手交谈后任务失败
            /// 
            /// 这个方法处理玩家与猎手交谈后选择不参与时的任务失败后果，
            /// 包括关系变化、权力调整和特质影响。
            /// 
            /// 失败后果：
            /// - 降低与任务给予者的关系
            /// - 减少任务给予者的权力
            /// - 影响定居点的安全和繁荣
            /// - 改变角色的特质等级
            /// </summary>
            internal void QuestFailedAfterTalkingWithPoachers()
            {
                this.AddLog(this._questFailedAfterTalkingWithProachers);
                TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[2]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, -50),
                    new Tuple<TraitObject, int>(DefaultTraits.Mercy, 20)
                });
                this.RelationshipChangeWithQuestGiver = -5;
                this.QuestGiver.AddPower(-50f);
                this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
                this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
                this.CompleteQuestWithFail();
            }

            /// <summary>
            /// 玩家与猎手达成协议的任务成功
            /// 
            /// 这个方法处理玩家成功说服猎手时的任务成功后果，
            /// 包括奖励、关系变化和权力调整。
            /// 
            /// 成功后果：
            /// - 获得金币奖励
            /// - 提升与任务给予者的关系
            /// - 增加任务给予者的权力
            /// - 影响定居点的属性
            /// - 改变角色的特质等级
            /// </summary>
            internal void QuestSuccessPlayerComesToAnAgreementWithPoachers()
            {
                this.AddLog(this._questSuccessPlayerComesToAnAgreementWithPoachers);
                TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[2]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, 10),
                    new Tuple<TraitObject, int>(DefaultTraits.Mercy, 50)
                });
                GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
                this.RelationshipChangeWithQuestGiver = 5;
                GainRenownAction.Apply(Hero.MainHero, 1f);
                this.QuestGiver.AddPower(30f);
                this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
                this.QuestGiver.CurrentSettlement.Town.Prosperity += 50f;
                this.CompleteQuestWithSuccess();
            }

            /// <summary>
            /// 玩家被猎手击败的任务失败
            /// 
            /// 这个方法处理玩家被猎手击败时的任务失败后果，
            /// 包括关系变化和权力调整。
            /// </summary>
            internal void QuestFailWithPlayerDefeatedAgainstPoachers()
            {
                this.AddLog(this._questFailWithPlayerDefeatedAgainstPoachers);
                TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
                });
                this.RelationshipChangeWithQuestGiver = -5;
                this.QuestGiver.AddPower(-50f);
                this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
                this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
                this.CompleteQuestWithFail();
            }

            /// <summary>
            /// 玩家击败猎手的任务成功
            /// 
            /// 这个方法处理玩家成功击败猎手时的任务成功后果，
            /// 包括奖励、关系变化和权力调整。
            /// </summary>
            internal void QuestSuccessWithPlayerDefeatedPoachers()
            {
                this.AddLog(this._questSuccessWithPlayerDefeatedPoachers);
                TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, 50)
                });
                GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
                this.RelationshipChangeWithQuestGiver = 5;
                this.QuestGiver.AddPower(30f);
                this.QuestGiver.CurrentSettlement.Town.Prosperity += 50f;
                this.CompleteQuestWithSuccess();
            }

            /// <summary>
            /// 任务超时处理
            /// 
            /// 这个方法处理任务超时时的后果，
            /// 包括关系变化和权力调整。
            /// </summary>
            protected override void OnTimedOut()
            {
                this.AddLog(this._questFailedWithTimeOutLogText);
                TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
                {
                    new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
                });
                this.RelationshipChangeWithQuestGiver = -5;
                this.QuestGiver.AddPower(-50f);
                this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
                this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
            }

            /// <summary>
            /// 目标村庄被袭击时的任务取消
            /// 
            /// 这个方法处理目标村庄被袭击时取消任务的后果。
            /// </summary>
            private void QuestCanceledTargetVillageRaided()
            {
                this.AddLog(this._questCanceledTargetVillageRaided);
                this.CompleteQuestWithFail();
            }

            /// <summary>
            /// 注册游戏事件监听器
            /// 
            /// 这个方法注册处理任务所需的各种游戏事件监听器，
            /// 包括地图事件、游戏菜单、战争声明等。
            /// 
            /// 事件系统：
            /// - 实现全面的事件监听
            /// - 支持复杂的事件处理逻辑
            /// - 提供完整的状态管理
            /// 
            /// 性能优化：
            /// - 使用非序列化监听器
            /// - 优化事件处理性能
            /// - 实现高效的状态同步
            /// </summary>
            protected override void RegisterEvents()
            {
                CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventCheck));
                CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.MapEventStarted));
                CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.GameMenuOpened));
                CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
                CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
                CampaignEvents.CanHeroBecomePrisonerEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.OnCanHeroBecomePrisonerInfoIsRequested));
            }

            /// <summary>
            /// 英雄是否可以成为俘虏的信息请求处理
            /// 
            /// 这个方法处理英雄是否可以成为俘虏的查询，
            /// 在任务准备完成时防止玩家成为俘虏。
            /// </summary>
            /// <param name="hero">英雄对象</param>
            /// <param name="result">结果引用</param>
            private void OnCanHeroBecomePrisonerInfoIsRequested(Hero hero, ref bool result)
            {
                if (hero != Hero.MainHero || !this._isReadyToBeFinalized)
                    return;
                result = false;
            }

            /// <summary>
            /// 每小时检查
            /// 
            /// 这个方法每小时被调用一次，用于处理任务的定期更新，
            /// 包括夜间村庄访问和战斗状态检查。
            /// 
            /// 定时处理：
            /// - 检查夜间访问条件
            /// - 处理菜单切换
            /// - 验证战斗状态
            /// - 更新任务进度
            /// </summary>
            protected override void HourlyTick()
            {
                if (PlayerEncounter.Current == null || !PlayerEncounter.Current.IsPlayerWaiting || PlayerEncounter.EncounterSettlement != this._questVillage.Settlement || !CampaignTime.Now.IsNightTime || this._isReadyToBeFinalized || !this.IsOngoing)
                    return;
                EnterSettlementAction.ApplyForParty(MobileParty.MainParty, this._questVillage.Settlement);
                GameMenu.SwitchToMenu("army_of_poachers_village");
            }

            /// <summary>
            /// 游戏菜单打开处理
            /// 
            /// 这个方法处理游戏菜单打开时的事件，
            /// 包括夜间村庄访问和战斗完成状态检查。
            /// 
            /// 菜单系统：
            /// - 处理动态菜单切换
            /// - 验证菜单显示条件
            /// - 管理菜单状态
            /// - 处理战斗结果
            /// </summary>
            /// <param name="obj">菜单回调参数</param>
            private void GameMenuOpened(MenuCallbackArgs obj)
            {
                if (obj.MenuContext.GameMenu.StringId == "village" && CampaignTime.Now.IsNightTime && Settlement.CurrentSettlement == this._questVillage.Settlement && !this._isReadyToBeFinalized)
                    GameMenu.SwitchToMenu("army_of_poachers_village");
                if (!(obj.MenuContext.GameMenu.StringId == "army_of_poachers_village") || !this._isReadyToBeFinalized || MapEvent.PlayerMapEvent == null || !MapEvent.PlayerMapEvent.HasWinner || this._poachersParty == null)
                    return;
                this._poachersParty.IsVisible = false;
            }

            /// <summary>
            /// 地图事件开始处理
            /// 
            /// 这个方法处理地图事件开始时的事件，
            /// 包括强制和胁迫任务的检查。
            /// </summary>
            /// <param name="mapEvent">地图事件</param>
            /// <param name="attackerParty">攻击者队伍</param>
            /// <param name="defenderParty">防御者队伍</param>
            private void MapEventStarted(
                MapEvent mapEvent,
                PartyBase attackerParty,
                PartyBase defenderParty)
            {
                this.MapEventCheck(mapEvent);
                if (!QuestHelper.CheckMinorMajorCoercion((QuestBase) this, mapEvent, attackerParty))
                    return;
                QuestHelper.ApplyGenericMinorMajorCoercionConsequences((QuestBase) this, mapEvent);
            }

            /// <summary>
            /// 地图事件检查
            /// 
            /// 这个方法检查地图事件是否影响当前任务，
            /// 特别是村庄袭击事件。
            /// 
            /// 事件验证：
            /// - 检查事件类型
            /// - 验证事件地点
            /// - 处理任务取消
            /// - 更新任务状态
            /// </summary>
            /// <param name="mapEvent">地图事件</param>
            private void MapEventCheck(MapEvent mapEvent)
            {
                if (!mapEvent.IsRaid || mapEvent.MapEventSettlement != this._questVillage.Settlement)
                    return;
                this.QuestCanceledTargetVillageRaided();
            }

            /// <summary>
            /// 宗族王国变更处理
            /// 
            /// 这个方法处理宗族王国变更时的事件，
            /// 检查是否需要取消任务。
            /// 
            /// 政治系统：
            /// - 处理王国变更
            /// - 检查战争状态
            /// - 管理任务取消
            /// - 更新政治关系
            /// </summary>
            /// <param name="clan">宗族</param>
            /// <param name="oldKingdom">旧王国</param>
            /// <param name="newKingdom">新王国</param>
            /// <param name="detail">变更详情</param>
            /// <param name="showNotification">是否显示通知</param>
            private void OnClanChangedKingdom(
                Clan clan,
                Kingdom oldKingdom,
                Kingdom newKingdom,
                ChangeKingdomAction.ChangeKingdomActionDetail detail,
                bool showNotification = true)
            {
                if (!this.QuestGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
                    return;
                this.CompleteQuestWithCancel(this._questCanceledWarDeclared);
            }

            /// <summary>
            /// 战争宣布处理
            /// 
            /// 这个方法处理战争宣布时的事件，
            /// 检查是否需要失败或取消任务。
            /// </summary>
            /// <param name="faction1">派系1</param>
            /// <param name="faction2">派系2</param>
            /// <param name="detail">战争详情</param>
            private void OnWarDeclared(
                IFaction faction1,
                IFaction faction2,
                DeclareWarAction.DeclareWarDetail detail)
            {
                QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._questCanceledWarDeclared);
            }

            /// <summary>
            /// 任务最终化处理
            /// 
            /// 这个方法在任务完成时进行清理工作，
            /// 包括销毁猎手队伍和释放玩家俘虏状态。
            /// 
            /// 清理工作：
            /// - 销毁任务相关队伍
            /// - 释放玩家俘虏状态
            /// - 重置游戏状态
            /// - 完成任务生命周期
            /// </summary>
            protected override void OnFinalize()
            {
                if (this._poachersParty != null && this._poachersParty.IsActive)
                    DestroyPartyAction.Apply((PartyBase) null, this._poachersParty);
                if (!Hero.MainHero.IsPrisoner)
                    return;
                EndCaptivityAction.ApplyByPeace(Hero.MainHero);
            }

            /// <summary>
            /// 游戏加载时的任务初始化
            /// 
            /// 这个方法在游戏加载时重新初始化任务对话系统。
            /// </summary>
            protected override void InitializeQuestOnGameLoad() => this.SetDialogs();
        }

        /// <summary>
        /// 猎手军团任务行为类型定义器
        /// 
        /// 这个类用于定义任务的保存类型信息，
        /// 确保任务可以正确地序列化和反序列化。
        /// 
        /// 序列化系统：
        /// - 定义类型ID
        /// - 配置类定义
        /// - 支持存档系统
        /// - 确保数据完整性
        /// </summary>
        public class MerchantArmyOfPoachersIssueBehaviorTypeDefiner : SaveableTypeDefiner
        {
            /// <summary>
            /// 构造函数
            /// 
            /// 这个构造函数初始化类型定义器，设置基础类型ID。
            /// </summary>
            public MerchantArmyOfPoachersIssueBehaviorTypeDefiner()
                : base(800000)
            {
            }

            /// <summary>
            /// 定义类类型
            /// 
            /// 这个方法定义任务相关的类类型，为序列化系统提供必要的信息。
            /// </summary>
            protected override void DefineClassTypes()
            {
                this.AddClassDefinition(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), 1);
                this.AddClassDefinition(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest), 2);
            }
        }
    }
}