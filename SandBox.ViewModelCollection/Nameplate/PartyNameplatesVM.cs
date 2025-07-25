// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.PartyNameplatesVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class PartyNameplatesVM : ViewModel
  {
    private readonly Camera _mapCamera;
    private readonly Action _resetCamera;
    private readonly Func<bool> _isShowPartyNamesEnabled;
    private readonly PartyNameplatesVM.NameplateDistanceComparer _nameplateComparer;
    private MBBindingList<PartyNameplateVM> _nameplates;

    public PartyNameplatesVM(
      Camera mapCamera,
      Action resetCamera,
      Func<bool> isShowPartyNamesEnabled)
    {
      this.Nameplates = new MBBindingList<PartyNameplateVM>();
      this._nameplateComparer = new PartyNameplatesVM.NameplateDistanceComparer();
      this._mapCamera = mapCamera;
      this._resetCamera = resetCamera;
      this._isShowPartyNamesEnabled = isShowPartyNamesEnabled;
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.PartyVisibilityChangedEvent.AddNonSerializedListener((object) this, new Action<PartyBase>(this.OnPartyVisibilityChanged));
      CampaignEvents.OnPlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, MobileParty, bool>(this.OnPlayerCharacterChangedEvent));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangeKingdom));
      CampaignEvents.OnGameOverEvent.AddNonSerializedListener((object) this, new Action(this.OnGameOver));
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Nameplates.ApplyActionOnAllItems((Action<PartyNameplateVM>) (x => x.RefreshValues()));
    }

    public void Initialize()
    {
      foreach (MobileParty party in MobileParty.All.Where<MobileParty>((Func<MobileParty, bool>) (p => p.IsSpotted() && p.CurrentSettlement == null)))
        this.Nameplates.Add(new PartyNameplateVM(party, this._mapCamera, this._resetCamera, this._isShowPartyNamesEnabled));
    }

    private void OnClanChangeKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      foreach (NameplateVM nameplateVm in this.Nameplates.Where<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party.LeaderHero != null && p.Party.LeaderHero.Clan == clan)))
        nameplateVm.RefreshDynamicProperties(true);
    }

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      for (int index = 0; index < this.Nameplates.Count; ++index)
      {
        PartyNameplateVM nameplate = this.Nameplates[index];
        if (nameplate.Party == party)
        {
          nameplate.OnFinalize();
          this.Nameplates.RemoveAt(index);
          break;
        }
      }
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (party.Army != null && party.Army.LeaderParty == party)
      {
        foreach (MobileParty party1 in (List<MobileParty>) party.Army.Parties)
        {
          MobileParty armyParty = party1;
          if (armyParty.IsSpotted() && this.Nameplates.All<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party != armyParty)))
            this.Nameplates.Add(new PartyNameplateVM(armyParty, this._mapCamera, this._resetCamera, this._isShowPartyNamesEnabled));
        }
      }
      else
      {
        if (!party.IsSpotted() || !this.Nameplates.All<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party != party)))
          return;
        this.Nameplates.Add(new PartyNameplateVM(party, this._mapCamera, this._resetCamera, this._isShowPartyNamesEnabled));
      }
    }

    private void OnPartyVisibilityChanged(PartyBase party)
    {
      if (!party.IsMobile)
        return;
      if (party.MobileParty.IsSpotted() && party.MobileParty.CurrentSettlement == null && this.Nameplates.All<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party != party.MobileParty)))
      {
        this.Nameplates.Add(new PartyNameplateVM(party.MobileParty, this._mapCamera, this._resetCamera, this._isShowPartyNamesEnabled));
      }
      else
      {
        PartyNameplateVM partyNameplateVm;
        if (party.MobileParty.IsSpotted() && party.MobileParty.CurrentSettlement == null || (partyNameplateVm = this.Nameplates.FirstOrDefault<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party == party.MobileParty))) == null || partyNameplateVm.IsMainParty)
          return;
        partyNameplateVm.OnFinalize();
        this.Nameplates.Remove(partyNameplateVm);
      }
    }

    public void Update()
    {
      for (int index = 0; index < this.Nameplates.Count; ++index)
      {
        PartyNameplateVM nameplate = this.Nameplates[index];
        nameplate.RefreshPosition();
        nameplate.DetermineIsVisibleOnMap();
        nameplate.RefreshDynamicProperties(false);
      }
      for (int index = 0; index < this.Nameplates.Count; ++index)
        this.Nameplates[index].RefreshBinding();
      this.Nameplates.Sort((IComparer<PartyNameplateVM>) this._nameplateComparer);
    }

    private void OnPlayerCharacterChangedEvent(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMainParty,
      bool isMainPartyChanged)
    {
      PartyNameplateVM partyNameplateVm = this.Nameplates.FirstOrDefault<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (n => n.GetIsMainParty));
      if (partyNameplateVm != null)
      {
        partyNameplateVm.OnFinalize();
        this.Nameplates.Remove(partyNameplateVm);
      }
      if (this.Nameplates.AllQ<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (p => p.Party.LeaderHero != newPlayer)))
        this.Nameplates.Add(new PartyNameplateVM(newMainParty, this._mapCamera, this._resetCamera, this._isShowPartyNamesEnabled));
      foreach (PartyNameplateVM nameplate in (Collection<PartyNameplateVM>) this.Nameplates)
        nameplate.OnPlayerCharacterChanged(newPlayer);
    }

    private void OnGameOver()
    {
      PartyNameplateVM partyNameplateVm = this.Nameplates.FirstOrDefault<PartyNameplateVM>((Func<PartyNameplateVM, bool>) (n => n.IsMainParty));
      if (partyNameplateVm == null)
        return;
      partyNameplateVm.OnFinalize();
      this.Nameplates.Remove(partyNameplateVm);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.Nameplates.Clear();
    }

    [DataSourceProperty]
    public MBBindingList<PartyNameplateVM> Nameplates
    {
      get => this._nameplates;
      set
      {
        if (this._nameplates == value)
          return;
        this._nameplates = value;
        this.OnPropertyChangedWithValue<MBBindingList<PartyNameplateVM>>(value, nameof (Nameplates));
      }
    }

    public class NameplateDistanceComparer : IComparer<PartyNameplateVM>
    {
      public int Compare(PartyNameplateVM x, PartyNameplateVM y)
      {
        return y.DistanceToCamera.CompareTo(x.DistanceToCamera);
      }
    }
  }
}
