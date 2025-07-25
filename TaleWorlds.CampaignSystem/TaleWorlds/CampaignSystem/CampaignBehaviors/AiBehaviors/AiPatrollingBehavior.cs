using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
  public class AiPatrollingBehavior : CampaignBehaviorBase
  {
    private IDisbandPartyCampaignBehavior _disbandPartyCampaignBehavior;

    public override void RegisterEvents()
    {
      CampaignEvents.AiHourlyTickEvent.AddNonSerializedListener((object) this, new Action<MobileParty, PartyThinkParams>(this.AiHourlyTick));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this._disbandPartyCampaignBehavior = Campaign.Current.GetCampaignBehavior<IDisbandPartyCampaignBehavior>();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void CalculatePatrollingScoreForSettlement(
      Settlement settlement,
      PartyThinkParams p,
      float patrollingScoreAdjustment)
    {
      MobileParty mobilePartyOf = p.MobilePartyOf;
      AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint) settlement, AiBehavior.PatrolAroundPoint);
      float num = Campaign.Current.Models.TargetScoreCalculatingModel.CalculatePatrollingScoreForSettlement(settlement, mobilePartyOf) * patrollingScoreAdjustment;
      if (!mobilePartyOf.IsDisbanding)
      {
        IDisbandPartyCampaignBehavior campaignBehavior = this._disbandPartyCampaignBehavior;
        if ((campaignBehavior != null ? (campaignBehavior.IsPartyWaitingForDisband(mobilePartyOf) ? 1 : 0) : 0) == 0)
          goto label_3;
      }
      num *= 0.25f;
label_3:
      float score;
      if (p.TryGetBehaviorScore(in aiBehaviorTuple, out score))
        p.SetBehaviorScore(in aiBehaviorTuple, score + num);
      else
        p.AddBehaviorScore((aiBehaviorTuple, num));
    }

    private void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
    {
      if (mobileParty.IsMilitia || mobileParty.IsCaravan || mobileParty.IsVillager || mobileParty.IsBandit || mobileParty.IsDisbanding || !mobileParty.MapFaction.IsMinorFaction && !mobileParty.MapFaction.IsKingdomFaction && !mobileParty.MapFaction.Leader.IsLord || mobileParty.CurrentSettlement?.SiegeEvent != null)
        return;
      float b;
      if (mobileParty.Army != null)
      {
        float num1 = 0.0f;
        foreach (MobileParty party in (List<MobileParty>) mobileParty.Army.Parties)
        {
          float num2 = party.PartySizeRatio / PartyBaseHelper.FindPartySizeNormalLimit(party);
          num1 += num2;
        }
        b = num1 / (float) mobileParty.Army.Parties.Count;
      }
      else
      {
        float partySizeNormalLimit = PartyBaseHelper.FindPartySizeNormalLimit(mobileParty);
        b = mobileParty.PartySizeRatio / partySizeNormalLimit;
      }
      float num3 = MathF.Sqrt(MathF.Min(1f, b));
      float patrollingScoreAdjustment = (mobileParty.CurrentSettlement == null || !mobileParty.CurrentSettlement.IsFortification || !mobileParty.CurrentSettlement.IsUnderSiege ? 1f : 0.0f) * num3;
      if (mobileParty.Party.MapFaction.Settlements.Count > 0)
      {
        foreach (Settlement settlement in (List<Settlement>) mobileParty.Party.MapFaction.Settlements)
        {
          if (settlement.IsTown || settlement.IsVillage || settlement.MapFaction.IsMinorFaction)
            this.CalculatePatrollingScoreForSettlement(settlement, p, patrollingScoreAdjustment);
        }
      }
      else
      {
        int num4 = -1;
        do
        {
          num4 = SettlementHelper.FindNextSettlementAroundMapPoint((IMapPoint) mobileParty, Campaign.AverageDistanceBetweenTwoFortifications * 5f, num4);
          if (num4 >= 0 && Settlement.All[num4].IsTown)
            this.CalculatePatrollingScoreForSettlement(Settlement.All[num4], p, patrollingScoreAdjustment);
        }
        while (num4 >= 0);
      }
    }
  }
}
