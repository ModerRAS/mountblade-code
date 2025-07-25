// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.SallyOutsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class SallyOutsCampaignBehavior : CampaignBehaviorBase
  {
    private const int SallyOutCheckPeriodInHours = 4;
    private const float SallyOutPowerRatioForHelpingReliefForce = 1.5f;
    private const float SallyOutPowerRatio = 2f;

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.HourlyTickSettlement));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (defenderParty.SiegeEvent == null)
        return;
      this.CheckForSettlementSallyOut(defenderParty.SiegeEvent.BesiegedSettlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void HourlyTickSettlement(Settlement settlement)
    {
      this.CheckForSettlementSallyOut(settlement);
    }

    private void CheckForSettlementSallyOut(Settlement settlement, bool forceForCheck = false)
    {
      if (!settlement.IsFortification || settlement.SiegeEvent == null || settlement.Party.MapEvent != null || settlement.Town.GarrisonParty == null || settlement.Town.GarrisonParty.MapEvent != null)
        return;
      bool flag = settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapEvent != null && settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapEvent.IsSiegeOutside;
      if ((flag ? 1 : (MathF.Floor(CampaignTime.Now.ToHours) % 4 == 0 ? 1 : 0)) == 0 || Hero.MainHero.CurrentSettlement == settlement && Campaign.Current.Models.EncounterModel.GetLeaderOfSiegeEvent(settlement.SiegeEvent, BattleSideEnum.Defender) == Hero.MainHero)
        return;
      MobileParty leaderParty = settlement.SiegeEvent.BesiegerCamp.LeaderParty;
      float num1 = 0.0f;
      float num2 = 0.0f;
      float num3 = settlement.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.SallyOut).Sum<PartyBase>((Func<PartyBase, float>) (x => x.TotalStrength));
      LocatableSearchData<MobileParty> data = MobileParty.StartFindingLocatablesAroundPosition(settlement.SiegeEvent.BesiegerCamp.LeaderParty.Position2D, 3f);
      for (MobileParty nextLocatable = MobileParty.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = MobileParty.FindNextLocatable(ref data))
      {
        if (nextLocatable.CurrentSettlement == null && (double) nextLocatable.Aggressiveness > 0.0)
        {
          float num4 = (double) nextLocatable.Aggressiveness > 0.5 ? 1f : nextLocatable.Aggressiveness * 2f;
          if (nextLocatable.MapFaction.IsAtWarWith(settlement.Party.MapFaction))
            num1 += num4 * nextLocatable.Party.TotalStrength;
          else if (nextLocatable.MapFaction == settlement.MapFaction)
            num2 += num4 * nextLocatable.Party.TotalStrength;
        }
      }
      double num5 = (double) num3 + (double) num2;
      float num6 = flag ? 1.5f : 2f;
      double num7 = (double) num1 * (double) num6;
      if (num5 <= num7)
        return;
      if (flag)
      {
        foreach (PartyBase partyBase in settlement.GetInvolvedPartiesForEventType(MapEvent.BattleTypes.SallyOut))
        {
          if (partyBase.IsMobile && !partyBase.MobileParty.IsMainParty && partyBase.MapEventSide == null)
            partyBase.MapEventSide = settlement.SiegeEvent.BesiegerCamp.LeaderParty.MapEvent.AttackerSide;
        }
      }
      else
        EncounterManager.StartPartyEncounter(settlement.Town.GarrisonParty.Party, leaderParty.Party);
    }
  }
}
