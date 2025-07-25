// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TownSecurityCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TownSecurityCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventEnded));
      CampaignEvents.OnSiegeEventEndedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.SiegeEventEnded));
      CampaignEvents.OnHideoutDeactivatedEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.OnHideoutDeactivated));
    }

    private void OnHideoutDeactivated(Settlement hideout)
    {
      SettlementSecurityModel model = Campaign.Current.Models.SettlementSecurityModel;
      foreach (Settlement settlement in Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => t.IsTown && (double) t.GatePosition.DistanceSquared(hideout.GatePosition) < (double) model.HideoutClearedSecurityEffectRadius * (double) model.HideoutClearedSecurityEffectRadius)).ToList<Settlement>())
        settlement.Town.Security += (float) model.HideoutClearedSecurityGain;
    }

    private void MapEventEnded(MapEvent mapEvent)
    {
      if (!mapEvent.IsFieldBattle || !mapEvent.HasWinner)
        return;
      SettlementSecurityModel model = Campaign.Current.Models.SettlementSecurityModel;
      foreach (Settlement settlement in Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => t.IsTown && (double) t.GatePosition.DistanceSquared(mapEvent.Position) < (double) model.MapEventSecurityEffectRadius * (double) model.MapEventSecurityEffectRadius)).ToList<Settlement>())
      {
        Settlement town = settlement;
        if (mapEvent.Winner.Parties.Any<MapEventParty>((Func<MapEventParty, bool>) (party => party.Party.IsMobile && party.Party.MobileParty.IsBandit)) && mapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (party => this.ValidCivilianPartyCondition(party, mapEvent, town.MapFaction))))
        {
          float sumOfAttackedPartyStrengths = mapEvent.StrengthOfSide[(int) mapEvent.DefeatedSide];
          town.Town.Security += model.GetLootedNearbyPartySecurityEffect(town.Town, sumOfAttackedPartyStrengths);
        }
        else if (mapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (party => this.ValidBanditPartyCondition(party, mapEvent))))
        {
          float sumOfAttackedPartyStrengths = mapEvent.StrengthOfSide[(int) mapEvent.DefeatedSide];
          town.Town.Security += model.GetNearbyBanditPartyDefeatedSecurityEffect(town.Town, sumOfAttackedPartyStrengths);
        }
      }
    }

    private bool ValidCivilianPartyCondition(
      PartyBase party,
      MapEvent mapEvent,
      IFaction mapFaction)
    {
      if (!party.IsMobile)
        return false;
      if (party.Side != mapEvent.WinningSide && party.MobileParty.IsVillager && FactionManager.IsAlliedWithFaction(party.MapFaction, mapFaction))
        return true;
      return party.MobileParty.IsCaravan && !party.MapFaction.IsAtWarWith(mapFaction);
    }

    private bool ValidBanditPartyCondition(PartyBase party, MapEvent mapEvent)
    {
      if (party.Side == mapEvent.WinningSide)
        return false;
      MobileParty mobileParty = party.MobileParty;
      return mobileParty != null && mobileParty.IsBandit;
    }

    private void SiegeEventEnded(SiegeEvent siegeEvent)
    {
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
