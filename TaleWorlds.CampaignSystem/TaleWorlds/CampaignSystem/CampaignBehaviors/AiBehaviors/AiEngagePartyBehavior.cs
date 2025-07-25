using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
    // AiEngagePartyBehavior 类用于处理 AI 部队与其他部队的交战行为
    public class AiEngagePartyBehavior : CampaignBehaviorBase
    {
        // 用于处理部队解散行为的接口
        private IDisbandPartyCampaignBehavior _disbandPartyCampaignBehavior;

        // 注册事件
        public override void RegisterEvents()
        {
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

        // 每小时触发一次，用于处理 AI 部队的交战逻辑
        private void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
        {
            // 如果部队当前在定居点内并且该定居点正在被围攻，则不处理
            if (mobileParty.CurrentSettlement != null && mobileParty.CurrentSettlement.SiegeEvent != null)
                return;

            float radius = 25f; // 搜索其他部队的半径
            // 判断该部队是否属于一个王国，并且不是主角的部队或者不是商队，且部队没有隶属于军队（或者隶属于的军队不是当前部队），则直接返回
            if (!mobileParty.MapFaction.IsKingdomFaction && mobileParty.MapFaction != Hero.MainHero.MapFaction || mobileParty.IsCaravan || mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty || mobileParty.LeaderHero == null)
                return;

            float closestFriendlySettlementDistanceSquared = Campaign.MapDiagonalSquared; // 离最近的友军定居点的距离平方
            // 搜索部队周围的定居点，寻找距离最近的友军定居点
            LocatableSearchData<Settlement> data1 = Settlement.StartFindingLocatablesAroundPosition(mobileParty.Position2D, 50f);
            for (Settlement nextLocatable = Settlement.FindNextLocatable(ref data1); nextLocatable != null; nextLocatable = Settlement.FindNextLocatable(ref data1))
            {
                if (nextLocatable.MapFaction == mobileParty.MapFaction)
                {
                    float distanceSquared = nextLocatable.Position2D.DistanceSquared(mobileParty.Position2D);
                    if (distanceSquared < closestFriendlySettlementDistanceSquared)
                        closestFriendlySettlementDistanceSquared = distanceSquared;
                }
            }

            // 计算离最近友军定居点的距离
            float closestFriendlySettlementDistance = MathF.Sqrt(closestFriendlySettlementDistanceSquared);
            // 根据该距离计算一个影响力因子
            float influenceFactor = closestFriendlySettlementDistance < 50.0 ? (float)(1.0 - (double)MathF.Max(0.0f, closestFriendlySettlementDistance - 15f) / 35.0) : 0.0f;
            if (influenceFactor <= 0.0)
                return;

            // 计算部队的力量比例
            float partySizeRatio = mobileParty.PartySizeRatio;
            foreach (MobileParty attachedParty in (List<MobileParty>)mobileParty.AttachedParties)
                partySizeRatio += attachedParty.PartySizeRatio;

            float normalizedPartySizeRatio = MathF.Min(1f, partySizeRatio / ((float)mobileParty.AttachedParties.Count + 1f));
            // 根据力量比例计算进一步的因子
            float strengthFactor = normalizedPartySizeRatio * (normalizedPartySizeRatio <= 0.5 ? normalizedPartySizeRatio : (float)(0.5 + 0.707 * MathF.Sqrt(normalizedPartySizeRatio - 0.5f)));

            // 搜索部队周围的其他移动部队
            LocatableSearchData<MobileParty> data2 = MobileParty.StartFindingLocatablesAroundPosition(mobileParty.Position2D, radius);
            for (MobileParty enemyParty = MobileParty.FindNextLocatable(ref data2); enemyParty != null; enemyParty = MobileParty.FindNextLocatable(ref data2))
            {
                if (enemyParty.IsActive)
                {
                    IFaction enemyFaction = enemyParty.MapFaction;
                    // 如果该部队与当前部队处于战争状态，并且部队没有隶属于军队（或隶属于的军队是当前部队）
                    if (enemyFaction != null && enemyFaction.IsAtWarWith(mobileParty.MapFaction) && (enemyParty.Army == null || enemyParty == enemyParty.Army.LeaderParty))
                    {
                        IFaction enemyPartyFaction = enemyParty.MapFaction;
                        // 如果敌军是一个王国或是主角的派系，并且不在防御性建筑内，且攻击性较高
                        if (enemyPartyFaction != null && (enemyPartyFaction.IsKingdomFaction || enemyParty.MapFaction == Hero.MainHero.MapFaction) &&
                            (enemyParty.CurrentSettlement == null || !enemyParty.CurrentSettlement.IsFortification) && enemyParty.Aggressiveness > 0.1)
                        {
                            // 计算敌军的总力量
                            Army enemyArmy = enemyParty.Army;
                            float enemyStrength = enemyArmy != null ? enemyArmy.TotalStrength : enemyParty.Party.TotalStrength;
                            Vec2 enemyPosition = enemyParty.Position2D;
                            // 计算敌军距离的影响因子
                            float distanceFactor = 1.0f - 0.5f * (enemyPosition.DistanceSquared(mobileParty.Position2D) / (radius * radius));
                            float relationFactor = 1f;

                            // 根据领导者之间的关系调整影响因子
                            if (enemyParty.LeaderHero != null)
                            {
                                int relation = enemyParty.LeaderHero.GetRelation(mobileParty.LeaderHero);
                                relationFactor = relation >= 0 ? 1.0f - MathF.Sqrt(relation) / 10.0f : 1.0f + MathF.Sqrt(-relation) / 20.0f;
                            }

                            float friendlyPartyStrengthAroundEnemy = 0.0f;
                            // 搜索敌军周围的友军部队，计算其总力量
                            LocatableSearchData<MobileParty> data3 = MobileParty.StartFindingLocatablesAroundPosition(mobileParty.Position2D, radius);
                            for (MobileParty friendlyParty = MobileParty.FindNextLocatable(ref data3); friendlyParty != null; friendlyParty = MobileParty.FindNextLocatable(ref data3))
                            {
                                if (friendlyParty != mobileParty && friendlyParty.MapFaction == mobileParty.MapFaction && (friendlyParty.Army == null || friendlyParty.Army.LeaderParty == friendlyParty) &&
                                    (friendlyParty.DefaultBehavior == AiBehavior.GoAroundParty && friendlyParty.TargetParty == enemyParty || friendlyParty.ShortTermBehavior == AiBehavior.EngageParty && friendlyParty.ShortTermTargetParty == enemyParty))
                                {
                                    friendlyPartyStrengthAroundEnemy += friendlyParty.Army != null ? friendlyParty.Army.TotalStrength : friendlyParty.Party.TotalStrength;
                                }
                            }

                            // 计算我方部队的总力量
                            Army playerArmy = mobileParty.Army;
                            float playerStrength = playerArmy != null ? playerArmy.TotalStrength : mobileParty.Party.TotalStrength;
                            // 计算力量比例因子
                            float strengthRatio = (friendlyPartyStrengthAroundEnemy + playerStrength) / enemyStrength;

                            // 如果敌军在防御性建筑内，进一步降低影响力因子
                            float fortificationFactor = enemyParty.CurrentSettlement == null || !enemyParty.CurrentSettlement.IsFortification || enemyParty.CurrentSettlement.MapFaction == mobileParty.MapFaction ? 1f : 0.25f;
                            float combatPotentialFactor = 1f;
                            // 如果我方的总力量远超过敌军，则调整因子
                            if (friendlyPartyStrengthAroundEnemy + playerStrength + 30.0f > enemyStrength * 1.5)
                                combatPotentialFactor = MathF.Pow((float)((enemyStrength * 1.5 + 10.0 + (enemyParty.MapEvent != null || enemyParty.SiegeEvent != null ? 30.0 : 0.0)) / (friendlyPartyStrengthAroundEnemy + playerStrength + 30.0f)), 0.8f);

                            double playerSpeed = mobileParty.Speed;
                            float enemySpeed = enemyParty.Speed;
                            // 计算速度比例因子
                            float speedRatio = (float)(playerSpeed / enemySpeed);
                            float speedFactor = speedRatio * speedRatio * speedRatio * speedRatio;
                            float mobilityFactor = playerSpeed <= enemySpeed || mobileParty.Army != null ? (friendlyPartyStrengthAroundEnemy + playerStrength > enemyStrength ? (float)(0.5 + 0.5 * speedFactor * combatPotentialFactor) : 0.5f * speedFactor) : 1f;
                            float behaviorFactor = mobileParty.DefaultBehavior != AiBehavior.GoAroundParty || enemyParty != mobileParty.TargetParty ? 1f : 1.1f;
                            float armyFactor = mobileParty.Army != null ? 0.9f : 1f;
                            float mainHeroFactor = enemyParty == MobileParty.MainParty ? 1.2f : 1f;
                            float defensiveObjectiveFactor = mobileParty.Objective == MobileParty.PartyObjective.Defensive ? 1.2f : 1f;
                            float priorityFactor = 1f;
                            // 如果当前派系的领导者是主角，并且敌军派系与主角派系的关系优先级较高，则调整优先级因子
                            if (mobileParty.MapFaction != null && mobileParty.MapFaction.IsKingdomFaction && mobileParty.MapFaction.Leader == Hero.MainHero)
                            {
                                StanceLink stanceWith = Hero.MainHero.MapFaction.GetStanceWith(enemyParty.MapFaction);
                                if (stanceWith != null && stanceWith.BehaviorPriority == 1)
                                    priorityFactor = 1.2f;
                            }

                            // 计算最终的行为影响力值
                            float finalBehaviorScore = distanceFactor * influenceFactor * relationFactor * strengthRatio * mainHeroFactor * strengthFactor * mobilityFactor * combatPotentialFactor * fortificationFactor * behaviorFactor * armyFactor * defensiveObjectiveFactor * priorityFactor * 2f;

                            // 如果影响力值足够高，并且敌军不在定居点内，则继续计算是否与其交战
                            if (finalBehaviorScore > 0.05f && enemyParty.CurrentSettlement == null)
                            {
                                float closestFriendlySettlementToEnemyDistanceSquared = Campaign.MapDiagonalSquared;
                                LocatableSearchData<Settlement> data4 = Settlement.StartFindingLocatablesAroundPosition(enemyParty.Position2D, 25f);
                                for (Settlement nextLocatable3 = Settlement.FindNextLocatable(ref data4); nextLocatable3 != null; nextLocatable3 = Settlement.FindNextLocatable(ref data4))
                                {
                                    if (nextLocatable3.MapFaction == enemyParty.MapFaction)
                                    {
                                        enemyPosition = nextLocatable3.Position2D;
                                        float distanceSquared = enemyPosition.DistanceSquared(mobileParty.Position2D);
                                        if (distanceSquared < closestFriendlySettlementToEnemyDistanceSquared)
                                            closestFriendlySettlementToEnemyDistanceSquared = distanceSquared;
                                    }
                                }

                                // 如果距离较近，则进一步调整影响力值
                                if (closestFriendlySettlementToEnemyDistanceSquared < 625.0)
                                {
                                    float closestFriendlySettlementToEnemyDistance = MathF.Sqrt(closestFriendlySettlementToEnemyDistanceSquared);
                                    finalBehaviorScore *= (float)(0.25 + 0.75 * ((double)MathF.Max(0.0f, closestFriendlySettlementToEnemyDistance - 5f) / 20.0));
                                    // 如果部队正在解散，进一步降低影响力值
                                    if (!mobileParty.IsDisbanding)
                                    {
                                        IDisbandPartyCampaignBehavior campaignBehavior = this._disbandPartyCampaignBehavior;
                                        if (campaignBehavior != null && campaignBehavior.IsPartyWaitingForDisband(mobileParty))
                                            finalBehaviorScore *= 0.25f;
                                    }
                                }
                            }

                            // 将当前的行为目标值设置为最终计算的影响力值
                            p.CurrentObjectiveValue = finalBehaviorScore;
                            // 设置 AI 的行为为围绕敌军部队的行为
                            AiBehavior aiBehavior = AiBehavior.GoAroundParty;
                            AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint)enemyParty, aiBehavior);
                            // 添加行为分数到 PartyThinkParams 中
                            p.AddBehaviorScore((aiBehaviorTuple, finalBehaviorScore));
                        }
                    }
                }
            }
        }
    }
}
