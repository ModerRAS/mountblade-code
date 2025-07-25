using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
    // AiMilitaryBehavior 类用于处理 AI 的军事行为决策，包括创建军队、围攻、掠夺等行为
    public class AiMilitaryBehavior : CampaignBehaviorBase
    {
        // 创建军队所需的最小影响力
        private const int MinimumInfluenceNeededToCreateArmy = 50;

        // 用于处理部队解散行为的接口
        private IDisbandPartyCampaignBehavior _disbandPartyCampaignBehavior;

        // 注册事件
        public override void RegisterEvents()
        {
            // 监听定居点进入事件，当部队进入定居点时调用 OnSettlementEntered 方法
            CampaignEvents.SettlementEntered.AddNonSerializedListener((object)this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
            // 监听每小时的 AI 事件，每次事件触发时调用 AiHourlyTick 方法
            CampaignEvents.AiHourlyTickEvent.AddNonSerializedListener((object)this, new Action<MobileParty, PartyThinkParams>(this.AiHourlyTick));
            // 在游戏会话启动时调用 OnSessionLaunched 方法
            CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object)this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
        }

        // 当游戏会话启动时调用，用于初始化解散部队行为
        private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
        {
            this._disbandPartyCampaignBehavior = Campaign.Current.GetCampaignBehavior<IDisbandPartyCampaignBehavior>();
        }

        // 同步数据的方法，目前没有需要同步的数据
        public override void SyncData(IDataStore dataStore)
        {
        }

        // 当部队进入定居点时触发
        private void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
        {
            // 如果部队为 null 或者不是土匪部队，或者定居点不是藏身处，或者默认行为是去定居点，则返回
            if (mobileParty == null || !mobileParty.IsBandit || !settlement.IsHideout || mobileParty.DefaultBehavior == AiBehavior.GoToSettlement)
                return;
            // 设置部队移动目标为当前定居点
            mobileParty.Ai.SetMoveGoToSettlement(settlement);
        }

        // 为特定的任务类型寻找最佳目标及其价值
        private void FindBestTargetAndItsValueForFaction(
            Army.ArmyTypes missionType,       // 军队的任务类型
            PartyThinkParams p,               // 部队思考参数
            float ourStrength,                // 部队的力量
            float newArmyCreatingAdditionalConstant = 1f)  // 创建新军队的附加常量
        {
            MobileParty mobilePartyOf = p.MobilePartyOf;
            IFaction mapFaction = mobilePartyOf.MapFaction;

            // 如果部队已经隶属于军队且不是军队的领导部队，则返回
            if (mobilePartyOf.Army != null && mobilePartyOf.Army.LeaderParty != mobilePartyOf)
                return;

            // 计算部队的规模比例得分
            float x;
            if (mobilePartyOf.Army != null)
            {
                float totalPartySizeRatio = 0.0f;
                foreach (MobileParty party in (List<MobileParty>)mobilePartyOf.Army.Parties)
                {
                    float partySizeRatio = party.PartySizeRatio / (float)(((double)PartyBaseHelper.FindPartySizeNormalLimit(party) + 1.0) * 0.5);
                    totalPartySizeRatio += partySizeRatio;
                }
                x = totalPartySizeRatio / (float)mobilePartyOf.Army.Parties.Count;
            }
            else if ((double)newArmyCreatingAdditionalConstant <= 1.0099999904632568)
            {
                float normalLimit = (float)(((double)PartyBaseHelper.FindPartySizeNormalLimit(mobilePartyOf) + 1.0) * 0.5);
                x = mobilePartyOf.PartySizeRatio / normalLimit;
            }
            else
            {
                x = 1f;
            }

            // 根据派系的城镇数量调整任务规模系数
            float num3 = MathF.Max(1f, MathF.Min((float)mobilePartyOf.MapFaction.Fiefs.Count / 5f, 2.5f));
            if (missionType == Army.ArmyTypes.Defender)
                num3 = MathF.Pow(num3, 0.75f);

            float partySizeScore = MathF.Min(1f, MathF.Pow(x, num3));

            // 根据任务类型设置 AI 行为
            AiBehavior aiBehavior = AiBehavior.Hold;
            switch (missionType)
            {
                case Army.ArmyTypes.Besieger:
                    aiBehavior = AiBehavior.BesiegeSettlement;
                    break;
                case Army.ArmyTypes.Raider:
                    aiBehavior = AiBehavior.RaidSettlement;
                    break;
                case Army.ArmyTypes.Defender:
                    aiBehavior = AiBehavior.DefendSettlement;
                    break;
                case Army.ArmyTypes.Patrolling:
                    aiBehavior = AiBehavior.PatrolAroundPoint;
                    break;
            }

            // 如果是防守或巡逻任务，则计算本派系定居点的军事行为
            if (missionType == Army.ArmyTypes.Defender || missionType == Army.ArmyTypes.Patrolling)
            {
                this.CalculateMilitaryBehaviorForFactionSettlementsParallel(mapFaction, p, missionType, aiBehavior, ourStrength, partySizeScore, newArmyCreatingAdditionalConstant);
            }
            else
            {
                // 否则计算敌方派系定居点的军事行为
                foreach (IFaction enemyFaction in FactionManager.GetEnemyFactions(mapFaction))
                    this.CalculateMilitaryBehaviorForFactionSettlementsParallel(enemyFaction, p, missionType, aiBehavior, ourStrength, partySizeScore, newArmyCreatingAdditionalConstant);
            }
        }

        // 并行计算派系定居点的军事行为
        private void CalculateMilitaryBehaviorForFactionSettlementsParallel(
            IFaction faction,                // 派系
            PartyThinkParams p,              // 部队思考参数
            Army.ArmyTypes missionType,      // 军队的任务类型
            AiBehavior aiBehavior,           // AI 行为
            float ourStrength,               // 部队的力量
            float partySizeScore,            // 部队规模得分
            float newArmyCreatingAdditionalConstant)  // 创建新军队的附加常量
        {
            MobileParty mobilePartyOf = p.MobilePartyOf;
            int count = faction.Settlements.Count;
            float totalStrength = faction.TotalStrength;

            // 遍历所有定居点，计算每个定居点的军事行为
            for (int index = 0; index < faction.Settlements.Count; ++index)
            {
                Settlement settlement = faction.Settlements[index];
                if (this.CheckIfSettlementIsSuitableForMilitaryAction(settlement, mobilePartyOf, missionType))
                    this.CalculateMilitaryBehaviorForSettlement(settlement, missionType, aiBehavior, p, ourStrength, partySizeScore, count, totalStrength, newArmyCreatingAdditionalConstant);
            }
        }

        // 检查定居点是否适合进行军事行动
        private bool CheckIfSettlementIsSuitableForMilitaryAction(
            Settlement settlement,            // 定居点
            MobileParty mobileParty,          // 部队
            Army.ArmyTypes missionType)       // 军队的任务类型
        {
            // 检查定居点是否正在进行玩家相关的事件，若是，则不适合军事行动
            if (Game.Current.CheatMode && !CampaignCheats.MainPartyIsAttackable && settlement.Party.MapEvent != null && settlement.Party.MapEvent == MapEvent.PlayerMapEvent || 
                (mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement && missionType == Army.ArmyTypes.Besieger || 
                mobileParty.DefaultBehavior == AiBehavior.RaidSettlement && missionType == Army.ArmyTypes.Raider || 
                mobileParty.DefaultBehavior == AiBehavior.DefendSettlement && missionType == Army.ArmyTypes.Defender) && 
                mobileParty.TargetSettlement == settlement)
                return false;

            // 如果是掠夺任务，检查定居点与派系中心的距离是否合适
            if (missionType == Army.ArmyTypes.Raider)
            {
                float num = MathF.Max(100f, MathF.Min(250f, Campaign.Current.Models.MapDistanceModel.GetDistance(mobileParty.MapFaction.FactionMidSettlement, settlement.MapFaction.FactionMidSettlement)));
                if ((double)Campaign.Current.Models.MapDistanceModel.GetDistance(mobileParty, settlement) > (double)num)
                    return false;
            }

            return true;
        }

        // 计算定居点的军事行为
        private void CalculateMilitaryBehaviorForSettlement(
            Settlement settlement,                // 定居点
            Army.ArmyTypes missionType,           // 军队的任务类型
            AiBehavior aiBehavior,                // AI 行为
            PartyThinkParams p,                   // 部队思考参数
            float ourStrength,                    // 部队的力量
            float partySizeScore,                 // 部队规模得分
            int numberOfEnemyFactionSettlements,  // 敌方定居点数量
            float totalEnemyMobilePartyStrength,  // 敌方部队总力量
            float newArmyCreatingAdditionalConstant = 1f)  // 创建新军队的附加常量
        {
            // 检查任务类型与定居点状态的适配性，如果不适合则返回
            if ((missionType != Army.ArmyTypes.Defender || settlement.LastAttackerParty == null || !settlement.LastAttackerParty.IsActive) && 
                (missionType != Army.ArmyTypes.Raider || !settlement.IsVillage || settlement.Village.VillageState != Village.VillageStates.Normal) && 
                (missionType != Army.ArmyTypes.Besieger || !settlement.IsFortification || settlement.SiegeEvent != null && settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapFaction != p.MobilePartyOf.MapFaction) && 
                (missionType != Army.ArmyTypes.Patrolling || settlement.IsCastle || !p.WillGatherAnArmy))
                return;

            MobileParty mobilePartyOf = p.MobilePartyOf;
            IFaction mapFaction = mobilePartyOf.MapFaction;

            // 计算部队的食物供应情况
            float food = mobilePartyOf.Food;
            float foodChange = -mobilePartyOf.FoodChange;
            if (mobilePartyOf.Army != null && mobilePartyOf == mobilePartyOf.Army.LeaderParty)
            {
                foreach (MobileParty attachedParty in (List<MobileParty>)mobilePartyOf.Army.LeaderParty.AttachedParties)
                {
                    food += attachedParty.Food;
                    foodChange += -attachedParty.FoodChange;
                }
            }

            // 计算食物供应的安全系数
            float foodSafetyFactor = MathF.Max(0.0f, food) / foodChange;
            float foodImpactFactor = (double)foodSafetyFactor < 5.0 ? (float)(0.10000000149011612 + 0.89999997615814209 * ((double)foodSafetyFactor / 5.0)) : 1f;

            // 计算任务目标得分
            float targetScore = (missionType != Army.ArmyTypes.Patrolling 
                ? Campaign.Current.Models.TargetScoreCalculatingModel.GetTargetScoreForFaction(settlement, missionType, mobilePartyOf, ourStrength, numberOfEnemyFactionSettlements, totalEnemyMobilePartyStrength) 
                : Campaign.Current.Models.TargetScoreCalculatingModel.CalculatePatrollingScoreForSettlement(settlement, mobilePartyOf)) * 
                (partySizeScore * foodImpactFactor * newArmyCreatingAdditionalConstant);

            // 根据部队的目标调整目标得分
            if (mobilePartyOf.Objective == MobileParty.PartyObjective.Defensive)
            {
                if (aiBehavior == AiBehavior.PatrolAroundPoint && settlement.MapFaction == mapFaction || aiBehavior == AiBehavior.DefendSettlement)
                {
                    targetScore *= 1.2f;
                }
                else
                {
                    targetScore *= 0.8f;
                }
            }
            else if (mobilePartyOf.Objective == MobileParty.PartyObjective.Aggressive)
            {
                if (aiBehavior == AiBehavior.BesiegeSettlement || aiBehavior == AiBehavior.RaidSettlement)
                {
                    targetScore *= 1.2f;
                }
                else
                {
                    targetScore *= 0.8f;
                }
            }

            // 如果部队正在解散，进一步降低得分
            if (!mobilePartyOf.IsDisbanding)
            {
                IDisbandPartyCampaignBehavior campaignBehavior = this._disbandPartyCampaignBehavior;
                if ((campaignBehavior != null ? (campaignBehavior.IsPartyWaitingForDisband(mobilePartyOf) ? 1 : 0) : 0) == 0)
                    goto label_20;
            }
            targetScore *= 0.25f;
        label_20:

            // 创建 AI 行为元组并添加到思考参数中
            AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint)settlement, aiBehavior, p.WillGatherAnArmy);
            p.AddBehaviorScore((aiBehaviorTuple, targetScore));
        }

        // 每小时触发一次，用于处理 AI 部队的军事行为
        private void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
        {
            // 检查部队是否符合触发条件，不符合则直接返回
            if (mobileParty.IsMilitia || mobileParty.IsCaravan || mobileParty.IsVillager || mobileParty.IsBandit || mobileParty.IsDisbanding || mobileParty.LeaderHero == null || 
                mobileParty.MapFaction != Clan.PlayerClan.MapFaction && !mobileParty.MapFaction.IsKingdomFaction || mobileParty.CurrentSettlement?.SiegeEvent != null)
                return;

            // 如果部队隶属于军队，调整其行为并返回
            if (mobileParty.Army != null)
            {
                mobileParty.Ai.SetInitiative(0.33f, 0.33f, 24f);
                if (mobileParty.Army.LeaderParty == mobileParty && (mobileParty.Army.AIBehavior == Army.AIBehaviorFlags.Gathering || mobileParty.Army.AIBehavior == Army.AIBehaviorFlags.WaitingForArmyMembers))
                {
                    mobileParty.Ai.SetInitiative(0.33f, 1f, 24f);
                    p.DoNotChangeBehavior = true;
                }
                else if (mobileParty.Army.AIBehavior == Army.AIBehaviorFlags.Patrolling)
                {
                    mobileParty.Ai.SetInitiative(1f, 1f, 24f);
                }
                else if (mobileParty.Army.AIBehavior == Army.AIBehaviorFlags.Defending && mobileParty.Army.LeaderParty == mobileParty && 
                         mobileParty.Army.AiBehaviorObject != null && mobileParty.Army.AiBehaviorObject is Settlement && 
                         (double)((Settlement)mobileParty.Army.AiBehaviorObject).GatePosition.DistanceSquared(mobileParty.Position2D) < 100.0)
                {
                    mobileParty.Ai.SetInitiative(1f, 1f, 24f);
                }

                if (mobileParty.Army.LeaderParty != mobileParty)
                    return;
            }
            else if (mobileParty.DefaultBehavior == AiBehavior.DefendSettlement || mobileParty.Objective == MobileParty.PartyObjective.Defensive)
            {
                mobileParty.Ai.SetInitiative(0.33f, 1f, 2f);
            }

            // 计算部队的规模比例得分
            float x1;
            if (mobileParty.Army != null)
            {
                float totalPartySizeRatio = 0.0f;
                foreach (MobileParty party in (List<MobileParty>)mobileParty.Army.Parties)
                {
                    float partySizeRatio = party.PartySizeRatio / (float)(((double)PartyBaseHelper.FindPartySizeNormalLimit(party) + 1.0) * 0.5);
                    totalPartySizeRatio += partySizeRatio;
                }
                x1 = totalPartySizeRatio / (float)mobileParty.Army.Parties.Count;
            }
            else
            {
                float normalLimit = (float)(((double)PartyBaseHelper.FindPartySizeNormalLimit(mobileParty) + 1.0) * 0.5);
                x1 = mobileParty.PartySizeRatio / normalLimit;
            }

            float y = MathF.Max(1f, MathF.Min((float)mobileParty.MapFaction.Fiefs.Count / 5f, 2.5f));
            float num3 = MathF.Min(1f, MathF.Pow(x1, y));

            // 计算部队的食物供应情况
            float food = mobileParty.Food;
            float foodChange = -mobileParty.FoodChange;
            int num5 = 1;
            if (mobileParty.Army != null && mobileParty == mobileParty.Army.LeaderParty)
            {
                foreach (MobileParty attachedParty in (List<MobileParty>)mobileParty.Army.LeaderParty.AttachedParties)
                {
                    food += attachedParty.Food;
                    foodChange += -attachedParty.FoodChange;
                    ++num5;
                }
            }

            // 计算食物供应的安全系数
            float foodSafetyFactor = MathF.Max(0.0f, food) / foodChange;
            float foodImpactFactor = (double)foodSafetyFactor < 5.0 ? (float)(0.10000000149011612 + 0.89999997615814209 * ((double)foodSafetyFactor / 5.0)) : 1f;

            // 计算随从部队的总力量
            float strengthWithFollowers = mobileParty.GetTotalStrengthWithFollowers(false);

            // 如果部队的默认行为是围攻、掠夺或防守，且有目标定居点，计算目标价值
            if ((mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement || mobileParty.DefaultBehavior == AiBehavior.RaidSettlement || mobileParty.DefaultBehavior == AiBehavior.DefendSettlement) && mobileParty.TargetSettlement != null)
            {
                float objectiveValue = Campaign.Current.Models.TargetScoreCalculatingModel.CurrentObjectiveValue(mobileParty) * (mobileParty.MapEvent == null || mobileParty.SiegeEvent == null ? foodImpactFactor * num3 : 1f);

                // 如果部队处于围攻事件中，进一步调整目标价值
                if (mobileParty.SiegeEvent != null)
                {
                    float totalEnemyStrength = 0.0f;
                    foreach (PartyBase partyBase in mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement ? mobileParty.SiegeEvent.BesiegedSettlement.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege) : mobileParty.SiegeEvent.BesiegerCamp.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.Siege))
                        totalEnemyStrength += partyBase.TotalStrength;

                    float strengthRatio = MathF.Max(1f, MathF.Pow(strengthWithFollowers / totalEnemyStrength, 1.75f) * 0.15f);
                    objectiveValue *= strengthRatio;
                }

                // 如果部队正在解散，进一步降低目标价值
                if (!mobileParty.IsDisbanding)
                {
                    IDisbandPartyCampaignBehavior campaignBehavior = this._disbandPartyCampaignBehavior;
                    if ((campaignBehavior != null ? (campaignBehavior.IsPartyWaitingForDisband(mobileParty) ? 1 : 0) : 0) == 0)
                        goto label_40;
                }
                objectiveValue *= 0.25f;
            label_40:

                p.CurrentObjectiveValue = objectiveValue;

                // 创建 AI 行为元组并添加到思考参数中
                AiBehavior defaultBehavior = mobileParty.DefaultBehavior;
                AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint)mobileParty.TargetSettlement, defaultBehavior);
                p.AddBehaviorScore((aiBehaviorTuple, objectiveValue));
            }

            p.Initialization();

            bool flag = false;
            float newArmyCreatingAdditionalConstant = 1f;
            float ourStrength = strengthWithFollowers;

            // 如果部队的领导者有足够的影响力并且部队规模足够大，考虑创建军队
            if (mobileParty.LeaderHero != null && mobileParty.Army == null && mobileParty.LeaderHero.Clan != null && 
                (double)mobileParty.PartySizeRatio > 0.60000002384185791 && 
                (mobileParty.LeaderHero.Clan.Leader == mobileParty.LeaderHero || 
                mobileParty.LeaderHero.Clan.Leader.PartyBelongedTo == null && 
                mobileParty.LeaderHero.Clan.WarPartyComponents != null && 
                mobileParty.LeaderHero.Clan.WarPartyComponents.FirstOrDefault<WarPartyComponent>() == mobileParty.WarPartyComponent))
            {
                int traitLevel = mobileParty.LeaderHero.GetTraitLevel(DefaultTraits.Calculating);
                Kingdom mapFaction;
                int count = (mapFaction = (Kingdom)mobileParty.MapFaction).Armies.Count;
                int influenceThreshold = 50 + count * count * 20 + mobileParty.LeaderHero.RandomInt(20) + traitLevel * 20;
                float armyCreationFactor = (float)(1.0 - (double)count * 0.20000000298023224);

                // 判断是否有足够的影响力创建军队
                flag = (double)mobileParty.LeaderHero.Clan.Influence > (double)influenceThreshold && 
                       mobileParty.MapFaction.IsKingdomFaction && 
                       !mobileParty.LeaderHero.Clan.IsUnderMercenaryService && 
                       FactionManager.GetEnemyFactions((IFaction)(mobileParty.MapFaction as Kingdom)).AnyQ<IFaction>((Func<IFaction, bool>)(x => x.Fiefs.Any<Town>()));

                if (flag)
                {
                    // 根据当前派系的军队数量和领导者的影响力调整创建军队的常量
                    double creationAdjustmentFactor = mapFaction.Armies.Count == 0 
                        ? 1.0 + (double)MathF.Sqrt((float)((int)CampaignTime.Now.ToDays - mapFaction.LastArmyCreationDay)) * 0.15000000596046448 
                        : 1.0;
                    float influenceImpact = (float)((10.0 + (double)MathF.Sqrt(MathF.Min(900f, mobileParty.LeaderHero.Clan.Influence))) / 50.0);
                    float partySizeImpact = MathF.Sqrt(mobileParty.PartySizeRatio);
                    newArmyCreatingAdditionalConstant = (float)(creationAdjustmentFactor * (double)influenceImpact) * armyCreationFactor * partySizeImpact;

                    // 计算军队的总力量
                    ourStrength = mobileParty.Party.TotalStrength;
                    List<MobileParty> partiesToCallToArmy = Campaign.Current.Models.ArmyManagementCalculationModel.GetMobilePartiesToCallToArmy(mobileParty);
                    if (partiesToCallToArmy.Count == 0)
                    {
                        flag = false;
                    }
                    else
                    {
                        foreach (MobileParty mobileParty1 in partiesToCallToArmy)
                            ourStrength += mobileParty1.Party.TotalStrength;
                    }
                }
            }

            // 针对每种任务类型寻找最佳目标
            for (int missionType = 0; missionType < 4; ++missionType)
            {
                if (flag)
                {
                    p.WillGatherAnArmy = true;
                    this.FindBestTargetAndItsValueForFaction((Army.ArmyTypes)missionType, p, ourStrength, newArmyCreatingAdditionalConstant);
                }
                p.WillGatherAnArmy = false;
                this.FindBestTargetAndItsValueForFaction((Army.ArmyTypes)missionType, p, strengthWithFollowers);
            }
        }
    }
}
