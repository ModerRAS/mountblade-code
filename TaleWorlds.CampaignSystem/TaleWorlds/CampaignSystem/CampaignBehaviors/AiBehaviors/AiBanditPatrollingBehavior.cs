using Helpers;
using System;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
    // AiBanditPatrollingBehavior 类用于处理土匪部队的巡逻行为
    public class AiBanditPatrollingBehavior : CampaignBehaviorBase
    {
        // 注册事件
        public override void RegisterEvents()
        {
            // 监听每小时的 AI 事件，每次事件触发时调用 AiHourlyTick 方法
            CampaignEvents.AiHourlyTickEvent.AddNonSerializedListener((object)this, new Action<MobileParty, PartyThinkParams>(this.AiHourlyTick));
        }

        // 同步数据的方法，目前没有需要同步的数据
        public override void SyncData(IDataStore dataStore)
        {
        }

        // 每小时触发一次，用于处理土匪部队的逻辑
        public void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
        {
            // 如果该部队不是土匪或是土匪首领部队，则直接返回，不做处理
            if (!mobileParty.IsBandit || mobileParty.IsBanditBossParty)
                return;

            int num1 = 0;

            // 如果土匪部队当前所在的定居点是一个土匪藏身处，并且该藏身处中的土匪数量已经达到最小要求，则返回
            if (mobileParty.CurrentSettlement != null && mobileParty.CurrentSettlement.IsHideout &&
                mobileParty.CurrentSettlement.Parties.CountQ<MobileParty>((Func<MobileParty, bool>)(x => x.IsBandit && !x.IsBanditBossParty)) <=
                Campaign.Current.Models.BanditDensityModel.NumberOfMinimumBanditPartiesInAHideoutToInfestIt + 1)
                return;

            // 如果土匪部队的派系有定居点，并且需要重新设定目标或者原藏身处已经不再是藏身处，则寻找新的藏身处
            if (mobileParty.MapFaction.Culture.CanHaveSettlement &&
                (mobileParty.Ai.NeedTargetReset || mobileParty.HomeSettlement.IsHideout && !mobileParty.HomeSettlement.Hideout.IsInfested))
            {
                // 找到最近的已经被感染的藏身处
                Settlement nearestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>)(x => x.Culture == mobileParty.MapFaction.Culture && x.Hideout.IsInfested));
                if (nearestHideout != null)
                    mobileParty.BanditPartyComponent.SetHomeHideout(nearestHideout.Hideout);
            }

            // 定义一个 AI 行为元组，用于设置土匪部队的巡逻行为
            AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple(mobileParty.HomeSettlement, AiBehavior.PatrolAroundPoint);
            float num2 = 1f;

            // 如果当前定居点是一个藏身处，并且与土匪部队属于同一个派系或藏身处已被感染，则调整巡逻权重
            if (mobileParty.CurrentSettlement != null && mobileParty.CurrentSettlement.IsHideout &&
                (mobileParty.CurrentSettlement.MapFaction == mobileParty.MapFaction || mobileParty.CurrentSettlement.Hideout.IsInfested))
            {
                int ahideoutToInfestIt = Campaign.Current.Models.BanditDensityModel.NumberOfMinimumBanditPartiesInAHideoutToInfestIt;
                int partiesInEachHideout = Campaign.Current.Models.BanditDensityModel.NumberOfMaximumBanditPartiesInEachHideout;
                num2 = (float)(num1 - ahideoutToInfestIt) / (float)(partiesInEachHideout - ahideoutToInfestIt);
            }

            // 计算巡逻行为的最终权重，这里随机因子影响土匪的巡逻行为
            float num3 = mobileParty.CurrentSettlement != null ? MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat : 0.5f;
            float num4 = 0.5f * num2 * num3;

            // 将行为元组和权重添加到 PartyThinkParams 中，以影响土匪部队的行为决策
            p.AddBehaviorScore((aiBehaviorTuple, num4));
        }
    }
}
