// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplatePartyMarkersVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplatePartyMarkersVM : ViewModel
  {
    private Settlement _settlement;
    private bool _eventsRegistered;
    private SettlementNameplatePartyMarkersVM.PartyMarkerItemComparer _itemComparer;
    private MBBindingList<SettlementNameplatePartyMarkerItemVM> _partiesInSettlement;

    public SettlementNameplatePartyMarkersVM(Settlement settlement)
    {
      this._settlement = settlement;
      this.PartiesInSettlement = new MBBindingList<SettlementNameplatePartyMarkerItemVM>();
      this._itemComparer = new SettlementNameplatePartyMarkersVM.PartyMarkerItemComparer();
    }

    private void PopulatePartyList()
    {
      this.PartiesInSettlement.Clear();
      foreach (MobileParty mobileParty in this._settlement.Parties.Where<MobileParty>((Func<MobileParty, bool>) (p => this.IsMobilePartyValid(p))))
        this.PartiesInSettlement.Add(new SettlementNameplatePartyMarkerItemVM(mobileParty));
      this.PartiesInSettlement.Sort((IComparer<SettlementNameplatePartyMarkerItemVM>) this._itemComparer);
    }

    private bool IsMobilePartyValid(MobileParty party)
    {
      if (party.IsGarrison || party.IsMilitia || party.IsMainParty && (!party.IsMainParty || Campaign.Current.IsMainHeroDisguised))
        return false;
      if (party.Army == null)
        return true;
      Army army = party.Army;
      return (army != null ? (army.LeaderParty.IsMainParty ? 1 : 0) : 0) != 0 && !Campaign.Current.IsMainHeroDisguised;
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (settlement != this._settlement)
        return;
      SettlementNameplatePartyMarkerItemVM partyMarkerItemVm = this.PartiesInSettlement.SingleOrDefault<SettlementNameplatePartyMarkerItemVM>((Func<SettlementNameplatePartyMarkerItemVM, bool>) (p => p.Party == party));
      if (partyMarkerItemVm == null)
        return;
      this.PartiesInSettlement.Remove(partyMarkerItemVm);
    }

    private void OnSettlementEntered(
      MobileParty partyEnteredSettlement,
      Settlement settlement,
      Hero leader)
    {
      if (settlement != this._settlement || partyEnteredSettlement == null || this.PartiesInSettlement.SingleOrDefault<SettlementNameplatePartyMarkerItemVM>((Func<SettlementNameplatePartyMarkerItemVM, bool>) (p => p.Party == partyEnteredSettlement)) != null || !this.IsMobilePartyValid(partyEnteredSettlement))
        return;
      this.PartiesInSettlement.Add(new SettlementNameplatePartyMarkerItemVM(partyEnteredSettlement));
      this.PartiesInSettlement.Sort((IComparer<SettlementNameplatePartyMarkerItemVM>) this._itemComparer);
    }

    private void OnMapEventEnded(MapEvent obj)
    {
      if (obj.MapEventSettlement == null || obj.MapEventSettlement != this._settlement)
        return;
      this.PopulatePartyList();
    }

    public void RegisterEvents()
    {
      if (this._eventsRegistered)
        return;
      this.PopulatePartyList();
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      this._eventsRegistered = true;
    }

    public void UnloadEvents()
    {
      if (!this._eventsRegistered)
        return;
      CampaignEvents.SettlementEntered.ClearListeners((object) this);
      CampaignEvents.OnSettlementLeftEvent.ClearListeners((object) this);
      CampaignEvents.MapEventEnded.ClearListeners((object) this);
      this.PartiesInSettlement.Clear();
      this._eventsRegistered = false;
    }

    public MBBindingList<SettlementNameplatePartyMarkerItemVM> PartiesInSettlement
    {
      get => this._partiesInSettlement;
      set
      {
        if (value == this._partiesInSettlement)
          return;
        this._partiesInSettlement = value;
        this.OnPropertyChangedWithValue<MBBindingList<SettlementNameplatePartyMarkerItemVM>>(value, nameof (PartiesInSettlement));
      }
    }

    public class PartyMarkerItemComparer : IComparer<SettlementNameplatePartyMarkerItemVM>
    {
      public int Compare(
        SettlementNameplatePartyMarkerItemVM x,
        SettlementNameplatePartyMarkerItemVM y)
      {
        return x.SortIndex.CompareTo(y.SortIndex);
      }
    }
  }
}
