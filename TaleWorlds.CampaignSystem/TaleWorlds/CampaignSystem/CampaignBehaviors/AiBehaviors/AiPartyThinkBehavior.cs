using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
    // AiPartyThinkBehavior 类用于处理 AI 部队的行为逻辑和决策，包括战争、和平、定居点所有权变更等情况下的行为调整
    public class AiPartyThinkBehavior : CampaignBehaviorBase
    {
        // 注册事件
        public override void RegisterEvents()
        {
            // 监听每小时的 AI 部分事件，每次事件触发时调用 PartyHourlyAiTick 方法
            CampaignEvents.TickPartialHourlyAiEvent.AddNonSerializedListener((object)this, new Action<MobileParty>(this.PartyHourlyAiTick));
            // 监听定居点所有者变更事件，当定居点所有者发生变化时调用 OnSettlementOwnerChanged 方法
            CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object)this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
            // 监听宣战事件，当派系之间宣战时调用 OnWarDeclared 方法
            CampaignEvents.WarDeclared.AddNonSerializedListener((object)this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
            // 监听缔结和平事件，当派系之间缔结和平时调用 OnMakePeace 方法
            CampaignEvents.MakePeace.AddNonSerializedListener((object)this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
            // 监听氏族变更王国事件，当氏族更换王国时调用 OnClanChangedKingdom 方法
            CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object)this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        }

        // 同步数据的方法，目前没有需要同步的数据
        public override void SyncData(IDataStore dataStore)
        {
        }

        // 处理每小时的 AI 事件，用于决定部队的行为
        private void PartyHourlyAiTick(MobileParty mobileParty)
        {
            // 如果部队的 AI 被禁用或设置为不进行新决策，则直接返回
            if (mobileParty.Ai.IsDisabled || mobileParty.Ai.DoNotMakeNewDecisions)
                return;

            bool isArmyLeader = mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty;  // 判断当前部队是否为军队的领导者
            int tickInterval = isArmyLeader || mobileParty.Ai.RethinkAtNextHourlyTick || (mobileParty.MapEvent != null && (mobileParty.MapEvent.IsRaid || mobileParty.MapEvent.IsSiegeAssault)) ? 1 : 6;

            // 特殊情况下调整 AI 思考的频率
            if (isArmyLeader && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == mobileParty && 
                (mobileParty.CurrentSettlement != null || mobileParty.LastVisitedSettlement != null && mobileParty.MapEvent == null && 
                (double)mobileParty.LastVisitedSettlement.Position2D.Distance(mobileParty.Position2D) < 1.0))
            {
                tickInterval = 6;
            }

            // 每经过指定的小时数后，重新思考 AI 行为
            if (mobileParty.Ai.HourCounter % tickInterval == 0 && mobileParty != MobileParty.MainParty && 
                (mobileParty.MapEvent == null || mobileParty.Party == mobileParty.MapEvent.AttackerSide.LeaderParty && 
                (mobileParty.MapEvent.IsRaid || mobileParty.MapEvent.IsSiegeAssault)))
            {
                mobileParty.Ai.HourCounter = 0;
                Army.AIBehaviorFlags previousBehavior = isArmyLeader ? mobileParty.Army.AIBehavior : Army.AIBehaviorFlags.Unassigned;
                IMapPoint aiBehaviorObject = isArmyLeader ? mobileParty.Army.AiBehaviorObject : null;

                mobileParty.Ai.RethinkAtNextHourlyTick = false;
                PartyThinkParams thinkParamsCache = mobileParty.ThinkParamsCache;
                thinkParamsCache.Reset(mobileParty);
                
                // 触发 AI 每小时思考事件
                CampaignEventDispatcher.Instance.AiHourlyTick(mobileParty, thinkParamsCache);

                AIBehaviorTuple bestBehaviorTuple = new AIBehaviorTuple(null, AiBehavior.Hold);
                AIBehaviorTuple nonArmyBehaviorTuple = new AIBehaviorTuple(null, AiBehavior.Hold);
                float bestScore = -1f;
                float nonArmyBestScore = -1f;

                // 遍历所有可能的行为得分，选择得分最高的行为
                foreach ((AIBehaviorTuple, float) aiBehaviorScore in thinkParamsCache.AIBehaviorScores)
                {
                    float score = aiBehaviorScore.Item2;
                    if (score > bestScore)
                    {
                        bestScore = score;
                        bestBehaviorTuple = aiBehaviorScore.Item1;
                    }
                    if (score > nonArmyBestScore && !aiBehaviorScore.Item1.WillGatherArmy)
                    {
                        nonArmyBestScore = score;
                        nonArmyBehaviorTuple = aiBehaviorScore.Item1;
                    }
                }

                // 如果当前的默认行为是保持不变或某些特定行为，则保持最高分
                if (mobileParty.DefaultBehavior == AiBehavior.Hold || mobileParty.Ai.RethinkAtNextHourlyTick || 
                    (thinkParamsCache.CurrentObjectiveValue < 0.05 && 
                    (mobileParty.DefaultBehavior == AiBehavior.BesiegeSettlement || 
                     mobileParty.DefaultBehavior == AiBehavior.RaidSettlement || 
                     mobileParty.DefaultBehavior == AiBehavior.DefendSettlement)))
                {
                    bestScore = 1f;
                }

                // 计算最终选择的行为概率
                double threshold = (bestBehaviorTuple.AiBehavior == AiBehavior.PatrolAroundPoint || bestBehaviorTuple.AiBehavior == AiBehavior.GoToSettlement ? 0.03 : 0.1) * 
                                   (bestBehaviorTuple.WillGatherArmy ? 2.0 : (mobileParty.Army == null || mobileParty.Army.LeaderParty != mobileParty ? 1.0 : 0.33));

                bool shouldAct = mobileParty.Army != null;
                for (int index = 0; index < tickInterval && !shouldAct; ++index)
                    shouldAct = MBRandom.RandomFloat < bestScore;

                if ((bestScore > threshold && shouldAct) || (bestScore > 0.01 && mobileParty.MapEvent == null && mobileParty.Army == null && mobileParty.DefaultBehavior == AiBehavior.Hold))
                {
                    // 处理一些特殊情况，如攻击或围攻时取消当前行动
                    if (mobileParty.MapEvent != null && mobileParty.Party == mobileParty.MapEvent.AttackerSide.LeaderParty && 
                        !thinkParamsCache.DoNotChangeBehavior && 
                        (bestBehaviorTuple.Party != mobileParty.MapEvent.MapEventSettlement || 
                         bestBehaviorTuple.AiBehavior != AiBehavior.RaidSettlement && 
                         bestBehaviorTuple.AiBehavior != AiBehavior.BesiegeSettlement && 
                         bestBehaviorTuple.AiBehavior != AiBehavior.AssaultSettlement))
                    {
                        if (PlayerEncounter.Current != null && PlayerEncounter.Battle == mobileParty.MapEvent)
                            PlayerEncounter.Finish();
                        if (mobileParty.MapEvent != null)
                            mobileParty.MapEvent.FinalizeEvent();
                        if (mobileParty.SiegeEvent != null)
                            mobileParty.SiegeEvent.FinalizeSiegeEvent();

                        if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty)
                        {
                            foreach (MobileParty party in (List<MobileParty>)mobileParty.Army.Parties)
                                party.Ai.SetMoveEscortParty(mobileParty);
                        }
                    }

                    // 如果得分不高，选择不组建军队的行为
                    if (bestScore <= threshold)
                        bestBehaviorTuple = nonArmyBehaviorTuple;

                    bool shouldGatherArmy = bestBehaviorTuple.AiBehavior == AiBehavior.RaidSettlement || 
                                            bestBehaviorTuple.AiBehavior == AiBehavior.BesiegeSettlement || 
                                            bestBehaviorTuple.AiBehavior == AiBehavior.DefendSettlement || 
                                            bestBehaviorTuple.AiBehavior == AiBehavior.PatrolAroundPoint;

                    // 如果部队当前是军队的领导者，并且选择的行为不适合当前的军队状态，解散军队
                    if (mobileParty.Army != null && mobileParty.Army.LeaderParty == mobileParty && 
                        (bestBehaviorTuple.AiBehavior == AiBehavior.GoAroundParty || 
                         bestBehaviorTuple.AiBehavior == AiBehavior.PatrolAroundPoint || 
                         bestBehaviorTuple.AiBehavior == AiBehavior.GoToSettlement || shouldGatherArmy) == 0)
                        DisbandArmyAction.ApplyByUnknownReason(mobileParty.Army);

                    // 如果选择的行为是围攻、防守或巡逻，并且当前没有组建军队，且满足条件则组建军队
                    if (shouldGatherArmy && mobileParty.Army == null && bestBehaviorTuple.WillGatherArmy && !mobileParty.LeaderHero.Clan.IsUnderMercenaryService)
                    {
                        bool shouldFormArmy = MBRandom.RandomFloat < bestScore;
                        if (bestBehaviorTuple.AiBehavior == AiBehavior.DefendSettlement || shouldFormArmy)
                        {
                            Army.ArmyTypes selectedArmyType = bestBehaviorTuple.AiBehavior == AiBehavior.BesiegeSettlement ? Army.ArmyTypes.Besieger : 
                                                              (bestBehaviorTuple.AiBehavior == AiBehavior.RaidSettlement ? Army.ArmyTypes.Raider : Army.ArmyTypes.Defender);
                            ((Kingdom)mobileParty.MapFaction).CreateArmy(mobileParty.LeaderHero, bestBehaviorTuple.Party as Settlement, selectedArmyType);
                        }
                    }
                    else if (!thinkParamsCache.DoNotChangeBehavior)
                    {
                        // 根据选择的行为执行相应的 AI 操作
                        if (bestBehaviorTuple.AiBehavior == AiBehavior.PatrolAroundPoint)
                            SetPartyAiAction.GetActionForPatrollingAroundSettlement(mobileParty, (Settlement)bestBehaviorTuple.Party);
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.GoToSettlement)
                        {
                            if (MobilePartyHelper.GetCurrentSettlementOfMobilePartyForAICalculation(mobileParty) != bestBehaviorTuple.Party)
                                SetPartyAiAction.GetActionForVisitingSettlement(mobileParty, (Settlement)bestBehaviorTuple.Party);
                        }
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.EscortParty)
                            SetPartyAiAction.GetActionForEscortingParty(mobileParty, (MobileParty)bestBehaviorTuple.Party);
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.RaidSettlement)
                        {
                            if (mobileParty.MapEvent == null || !mobileParty.MapEvent.IsRaid || mobileParty.MapEvent.MapEventSettlement != bestBehaviorTuple.Party)
                                SetPartyAiAction.GetActionForRaidingSettlement(mobileParty, (Settlement)bestBehaviorTuple.Party);
                        }
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.BesiegeSettlement)
                            SetPartyAiAction.GetActionForBesiegingSettlement(mobileParty, (Settlement)bestBehaviorTuple.Party);
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.DefendSettlement && mobileParty.CurrentSettlement != bestBehaviorTuple.Party)
                            SetPartyAiAction.GetActionForDefendingSettlement(mobileParty, (Settlement)bestBehaviorTuple.Party);
                        else if (bestBehaviorTuple.AiBehavior == AiBehavior.GoAroundParty)
                            SetPartyAiAction.GetActionForGoingAroundParty(mobileParty, (MobileParty)bestBehaviorTuple.Party);
                    }
                }
                // 如果当前军队行为不适合当前状态，解散军队
                else if (mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty && 
                         mobileParty.Army.AIBehavior != Army.AIBehaviorFlags.Gathering && 
                         mobileParty.Army.AIBehavior != Army.AIBehaviorFlags.WaitingForArmyMembers)
                {
                    DisbandArmyAction.ApplyByUnknownReason(mobileParty.Army);
                }
                // 如果当前是非领导者部队，调整行为以护送领导者部队
                else if (mobileParty.Army != null && mobileParty.CurrentSettlement == null && 
                         mobileParty != mobileParty.Army.LeaderParty && 
                         !thinkParamsCache.DoNotChangeBehavior)
                {
                    SetPartyAiAction.GetActionForEscortingParty(mobileParty, mobileParty.Army.LeaderParty);
                }

                // 如果主角所在的军队发生行为变化，触发事件通知玩家
                if (MobileParty.MainParty.Army != null && mobileParty.Equals((object)MobileParty.MainParty.Army?.LeaderParty) && 
                    (previousBehavior != mobileParty.Army.AIBehavior || mobileParty.Army.AiBehaviorObject != aiBehaviorObject))
                {
                    Army.ArmyLeaderThinkReason changeExplanation = Army.GetBehaviorChangeExplanation(previousBehavior, mobileParty.Army.AIBehavior);
                    CampaignEventDispatcher.Instance.OnArmyLeaderThink(mobileParty.LeaderHero, changeExplanation);
                }
            }
            ++mobileParty.Ai.HourCounter;  // 增加小时计数器
        }

        // 当派系之间缔结和平时触发，用于终止所有相关的敌对行动
        private void OnMakePeace(
            IFaction faction1,
            IFaction faction2,
            MakePeaceAction.MakePeaceDetail detail)
        {
            if (faction1.IsKingdomFaction && faction2.IsKingdomFaction)
                FactionHelper.FinishAllRelatedHostileActions((Kingdom)faction1, (Kingdom)faction2);
            else if (faction1.IsKingdomFaction || faction2.IsKingdomFaction)
            {
                if (faction1.IsKingdomFaction)
                {
                    FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction2, faction1);
                    FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction1, faction2);
                }
                else
                {
                    FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction1, faction2);
                    FactionHelper.FinishAllRelatedHostileActionsOfFactionToFaction(faction2, faction1);
                }
            }
            else
                FactionHelper.FinishAllRelatedHostileActions((Clan)faction1, (Clan)faction2);
        }

        // 当氏族更换所属的王国时触发，检查并调整与目标定居点相关的部队行为
        private void OnClanChangedKingdom(
            Clan clan,
            Kingdom oldKingdom,
            Kingdom newKingdom,
            ChangeKingdomAction.ChangeKingdomActionDetail detail,
            bool showNotification = true)
        {
            foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>)clan.WarPartyComponents)
            {
                if (warPartyComponent.MobileParty.TargetSettlement != null)
                    this.CheckMobilePartyActionAccordingToSettlement(warPartyComponent.MobileParty, warPartyComponent.MobileParty.TargetSettlement);
            }
        }

        // 当派系之间宣战时触发，检查并调整与目标定居点相关的部队行为
        private void OnWarDeclared(
            IFaction faction1,
            IFaction faction2,
            DeclareWarAction.DeclareWarDetail detail)
        {
            foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>)faction1.WarPartyComponents)
            {
                if (warPartyComponent.MobileParty.TargetSettlement != null)
                    this.CheckMobilePartyActionAccordingToSettlement(warPartyComponent.MobileParty, warPartyComponent.MobileParty.TargetSettlement);
            }
            foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>)faction2.WarPartyComponents)
            {
                if (warPartyComponent.MobileParty.TargetSettlement != null)
                    this.CheckMobilePartyActionAccordingToSettlement(warPartyComponent.MobileParty, warPartyComponent.MobileParty.TargetSettlement);
            }
        }

        // 当定居点的所有者发生变化时触发，调整相关部队的行为
        private void OnSettlementOwnerChanged(
            Settlement settlement,
            bool openToClaim,
            Hero newOwner,
            Hero oldOwner,
            Hero capturerHero,
            ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
        {
            this.HandlePartyActionsAfterSettlementOwnerChange(settlement);
        }

        // 处理定居点所有权变更后的部队行为
        private void HandlePartyActionsAfterSettlementOwnerChange(Settlement settlement)
        {
            foreach (MobileParty mobileParty in (List<MobileParty>)MobileParty.All)
                this.CheckMobilePartyActionAccordingToSettlement(mobileParty, settlement);
        }

        // 检查并调整部队针对定居点的行为
        private void CheckMobilePartyActionAccordingToSettlement(
            MobileParty mobileParty,
            Settlement settlement)
        {
            // 如果部队当前正围攻该定居点，则不做任何调整
            if (mobileParty.BesiegedSettlement == settlement)
                return;

            if (mobileParty.Army == null)
            {
                Settlement targetSettlement = mobileParty.TargetSettlement;
                if (targetSettlement == null || targetSettlement != settlement && (!targetSettlement.IsVillage || targetSettlement.Village.Bound != settlement))
                    return;

                // 根据部队当前状态调整 AI 行为
                if (mobileParty.MapEvent == null)
                {
                    if (mobileParty.CurrentSettlement == null)
                    {
                        mobileParty.Ai.SetMoveModeHold();
                    }
                    else
                    {
                        mobileParty.Ai.SetMoveGoToSettlement(mobileParty.CurrentSettlement);
                        mobileParty.Ai.RecalculateShortTermAi();
                    }
                }
                else
                {
                    mobileParty.Ai.RethinkAtNextHourlyTick = true;
                }
            }
            else
            {
                if (mobileParty.Army.LeaderParty != mobileParty)
                    return;

                Army army = mobileParty.Army;
                if (army.AiBehaviorObject != settlement && (army.AiBehaviorObject == null || 
                    !((Settlement)army.AiBehaviorObject).IsVillage || 
                    ((Settlement)army.AiBehaviorObject).Village.Bound != settlement))
                    return;

                // 重新设定军队的 AI 行为
                army.AIBehavior = Army.AIBehaviorFlags.Unassigned;
                army.AiBehaviorObject = null;

                if (army.LeaderParty.MapEvent == null)
                    army.LeaderParty.Ai.SetMoveModeHold();
                else
                    army.LeaderParty.Ai.RethinkAtNextHourlyTick = true;

                army.FinishArmyObjective();
            }
        }
    }
}
