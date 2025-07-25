// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartiesSellPrisonerCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartiesSellPrisonerCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (!settlement.IsFortification || mobileParty == null || mobileParty.PrisonRoster.Count <= 0 || mobileParty.MapFaction == null || mobileParty.IsMainParty || mobileParty.IsDisbanding || mobileParty.MapFaction.IsAtWarWith(settlement.MapFaction))
        return;
      if (mobileParty.MapFaction.IsKingdomFaction && mobileParty.ActualClan != null)
      {
        TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.PrisonRoster.GetTroopRoster())
        {
          if (!troopRosterElement.Character.IsHero || troopRosterElement.Character.HeroObject.MapFaction.IsAtWarWith(settlement.MapFaction))
            dummyTroopRoster.Add(troopRosterElement);
        }
        if (dummyTroopRoster.Count <= 0)
          return;
        SellPrisonersAction.ApplyForSelectedPrisoners(mobileParty.Party, settlement.Party, dummyTroopRoster);
      }
      else
        SellPrisonersAction.ApplyForAllPrisoners(mobileParty.Party, settlement.Party);
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsFortification)
        return;
      TroopRoster prisonRoster = settlement.Party.PrisonRoster;
      if (prisonRoster.TotalRegulars <= 0)
        return;
      int val1 = settlement.Owner == Hero.MainHero ? prisonRoster.TotalManCount - settlement.Party.PrisonerSizeLimit : MBRandom.RoundRandomized((float) prisonRoster.TotalRegulars * 0.1f);
      if (val1 <= 0)
        return;
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      foreach (TroopRosterElement troopRosterElement in settlement.Owner == Hero.MainHero ? (IEnumerable<TroopRosterElement>) prisonRoster.GetTroopRoster().OrderBy<TroopRosterElement, int>((Func<TroopRosterElement, int>) (t => t.Character.Tier)) : prisonRoster.GetTroopRoster().AsEnumerable<TroopRosterElement>())
      {
        if (!troopRosterElement.Character.IsHero)
        {
          int count = Math.Min(val1, troopRosterElement.Number);
          val1 -= count;
          dummyTroopRoster.AddToCounts(troopRosterElement.Character, count);
          if (val1 <= 0)
            break;
        }
      }
      if (dummyTroopRoster.TotalManCount <= 0)
        return;
      SellPrisonersAction.ApplyForSelectedPrisoners(settlement.Party, (PartyBase) null, dummyTroopRoster);
    }
  }
}
