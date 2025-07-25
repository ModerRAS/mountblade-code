// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DisorganizedStateCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  internal class DisorganizedStateCampaignBehavior : CampaignBehaviorBase
  {
    private bool _checkForEvent;

    public override void RegisterEvents()
    {
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnd));
      CampaignEvents.PartyRemovedFromArmyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyRemovedFromArmy));
      CampaignEvents.GameMenuOptionSelectedEvent.AddNonSerializedListener((object) this, new Action<GameMenuOption>(this.OnGameMenuOptionSelected));
    }

    private void OnGameMenuOptionSelected(GameMenuOption gameMenuOption)
    {
      if (!this._checkForEvent || !(gameMenuOption.IdString == "str_order_attack") && !(gameMenuOption.IdString == "attack"))
        return;
      foreach (MapEventParty party in (List<MapEventParty>) MobileParty.MainParty.MapEvent.DefenderSide.Parties)
      {
        if (Campaign.Current.Models.PartyImpairmentModel.CanGetDisorganized(party.Party))
          party.Party.MobileParty.SetDisorganized(true);
      }
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (!mapEvent.IsSallyOut)
        return;
      if (!mapEvent.AttackerSide.IsMainPartyAmongParties())
      {
        foreach (MapEventParty party in (List<MapEventParty>) mapEvent.DefenderSide.Parties)
        {
          if (Campaign.Current.Models.PartyImpairmentModel.CanGetDisorganized(party.Party))
            party.Party.MobileParty.SetDisorganized(true);
        }
      }
      else
        this._checkForEvent = true;
    }

    private void OnPartyRemovedFromArmy(MobileParty mobileParty)
    {
      if (!Campaign.Current.Models.PartyImpairmentModel.CanGetDisorganized(mobileParty.Party))
        return;
      mobileParty.SetDisorganized(true);
    }

    private void OnMapEventEnd(MapEvent mapEvent)
    {
      if ((mapEvent.AttackerSide.Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.HealthyManCountAtStart)) != mapEvent.AttackerSide.Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.Party.NumberOfHealthyMembers)) ? 1 : (mapEvent.DefenderSide.Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.HealthyManCountAtStart)) != mapEvent.DefenderSide.Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.Party.NumberOfHealthyMembers)) ? 1 : 0)) != 0 && !mapEvent.IsHideoutBattle)
      {
        foreach (PartyBase involvedParty in mapEvent.InvolvedParties)
        {
          if (involvedParty.IsActive)
          {
            MobileParty mobileParty = involvedParty.MobileParty;
            if (((mobileParty != null ? (mobileParty.IsMainParty ? 1 : 0) : 0) == 0 || !mapEvent.DiplomaticallyFinished || !mapEvent.AttackerSide.MapFaction.IsAtWarWith(mapEvent.DefenderSide.MapFaction)) && (!mapEvent.IsSallyOut || involvedParty.MapEventSide.MissionSide == BattleSideEnum.Defender) && Campaign.Current.Models.PartyImpairmentModel.CanGetDisorganized(involvedParty))
              involvedParty.MobileParty.SetDisorganized(true);
          }
        }
      }
      this._checkForEvent = false;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<bool>("_checkForEvent", ref this._checkForEvent);
    }
  }
}
