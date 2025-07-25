// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.FactionDiscontinuationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class FactionDiscontinuationCampaignBehavior : CampaignBehaviorBase
  {
    private const float SurvivalDurationForIndependentClanInWeeks = 4f;
    private Dictionary<Clan, CampaignTime> _independentClans = new Dictionary<Clan, CampaignTime>();

    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    public void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (this._independentClans.ContainsKey(newOwner.Clan))
        this._independentClans.Remove(newOwner.Clan);
      if (this.CanClanBeDiscontinued(oldOwner.Clan))
        this.AddIndependentClan(oldOwner.Clan);
      Kingdom kingdom = oldOwner.Clan.Kingdom;
      if (kingdom == null || !this.CanKingdomBeDiscontinued(kingdom))
        return;
      this.DiscontinueKingdom(kingdom);
    }

    public void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      if (newKingdom == null)
      {
        if (this.CanClanBeDiscontinued(clan))
          this.AddIndependentClan(clan);
      }
      else if (this._independentClans.ContainsKey(clan))
        this._independentClans.Remove(clan);
      if (clan != Clan.PlayerClan || oldKingdom == null || !this.CanKingdomBeDiscontinued(oldKingdom))
        return;
      this.DiscontinueKingdom(oldKingdom);
    }

    private void DailyTickClan(Clan clan)
    {
      if (!this._independentClans.ContainsKey(clan) || !this._independentClans[clan].IsPast)
        return;
      this.DiscontinueClan(clan);
    }

    private bool CanKingdomBeDiscontinued(Kingdom kingdom)
    {
      bool result = !kingdom.IsEliminated && kingdom != Clan.PlayerClan.Kingdom && kingdom.Settlements.IsEmpty<Settlement>();
      if (result)
        CampaignEventDispatcher.Instance.CanKingdomBeDiscontinued(kingdom, ref result);
      return result;
    }

    private void DiscontinueKingdom(Kingdom kingdom)
    {
      foreach (Clan clan in new List<Clan>((IEnumerable<Clan>) kingdom.Clans))
      {
        this.FinalizeMapEvents(clan);
        ChangeKingdomAction.ApplyByLeaveByKingdomDestruction(clan);
      }
      kingdom.RulingClan = (Clan) null;
      DestroyKingdomAction.Apply(kingdom);
    }

    private void FinalizeMapEvents(Clan clan)
    {
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) clan.WarPartyComponents)
      {
        if (warPartyComponent.MobileParty.MapEvent != null)
          warPartyComponent.MobileParty.MapEvent.FinalizeEvent();
        if (warPartyComponent.MobileParty.SiegeEvent != null)
          warPartyComponent.MobileParty.SiegeEvent.FinalizeSiegeEvent();
      }
      foreach (Settlement settlement in (List<Settlement>) clan.Settlements)
      {
        if (settlement.Party.MapEvent != null)
          settlement.Party.MapEvent.FinalizeEvent();
        if (settlement.Party.SiegeEvent != null)
          settlement.Party.SiegeEvent.FinalizeSiegeEvent();
      }
    }

    private bool CanClanBeDiscontinued(Clan clan)
    {
      return clan.Kingdom == null && !clan.IsRebelClan && !clan.IsBanditFaction && !clan.IsMinorFaction && clan != Clan.PlayerClan && clan.Settlements.IsEmpty<Settlement>();
    }

    private void DiscontinueClan(Clan clan)
    {
      DestroyClanAction.Apply(clan);
      this._independentClans.Remove(clan);
    }

    private void AddIndependentClan(Clan clan)
    {
      if (this._independentClans.ContainsKey(clan))
        return;
      this._independentClans.Add(clan, CampaignTime.WeeksFromNow(4f));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Clan, CampaignTime>>("_independentClans", ref this._independentClans);
    }

    private void OnGameLoadFinished()
    {
      if (!(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.2")))
        return;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (!kingdom.IsEliminated && this.CanKingdomBeDiscontinued(kingdom))
          this.DiscontinueKingdom(kingdom);
      }
    }
  }
}
