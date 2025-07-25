// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.SettlementNameplatesVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate
{
  public class SettlementNameplatesVM : ViewModel
  {
    private readonly Camera _mapCamera;
    private Vec3 _cachedCameraPosition;
    private readonly TWParallel.ParallelForAuxPredicate UpdateNameplateAuxMTPredicate;
    private readonly Action<Vec2> _fastMoveCameraToPosition;
    private IEnumerable<Tuple<Settlement, GameEntity>> _allHideouts;
    private IEnumerable<Tuple<Settlement, GameEntity>> _allRetreats;
    private MBBindingList<SettlementNameplateVM> _nameplates;

    public SettlementNameplatesVM(Camera mapCamera, Action<Vec2> fastMoveCameraToPosition)
    {
      this.Nameplates = new MBBindingList<SettlementNameplateVM>();
      this._mapCamera = mapCamera;
      this._fastMoveCameraToPosition = fastMoveCameraToPosition;
      CampaignEvents.PartyVisibilityChangedEvent.AddNonSerializedListener((object) this, new Action<PartyBase>(this.OnPartyBaseVisibilityChange));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnPeaceDeclared));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangeKingdom));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStartedOnSettlement));
      CampaignEvents.OnSiegeEventEndedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventEndedOnSettlement));
      CampaignEvents.RebelliousClanDisbandedAtSettlement.AddNonSerializedListener((object) this, new Action<Settlement, Clan>(this.OnRebelliousClanDisbandedAtSettlement));
      this.UpdateNameplateAuxMTPredicate = new TWParallel.ParallelForAuxPredicate(this.UpdateNameplateAuxMT);
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Nameplates.ApplyActionOnAllItems((Action<SettlementNameplateVM>) (x => x.RefreshValues()));
    }

    public void Initialize(
      IEnumerable<Tuple<Settlement, GameEntity>> settlements)
    {
      IEnumerable<Tuple<Settlement, GameEntity>> tuples = settlements.Where<Tuple<Settlement, GameEntity>>((Func<Tuple<Settlement, GameEntity>, bool>) (x => !x.Item1.IsHideout && !(x.Item1.SettlementComponent is RetirementSettlementComponent)));
      this._allHideouts = settlements.Where<Tuple<Settlement, GameEntity>>((Func<Tuple<Settlement, GameEntity>, bool>) (x => x.Item1.IsHideout && !(x.Item1.SettlementComponent is RetirementSettlementComponent)));
      this._allRetreats = settlements.Where<Tuple<Settlement, GameEntity>>((Func<Tuple<Settlement, GameEntity>, bool>) (x => !x.Item1.IsHideout && x.Item1.SettlementComponent is RetirementSettlementComponent));
      foreach (Tuple<Settlement, GameEntity> tuple in tuples)
        this.Nameplates.Add(new SettlementNameplateVM(tuple.Item1, tuple.Item2, this._mapCamera, this._fastMoveCameraToPosition));
      foreach (Tuple<Settlement, GameEntity> allHideout in this._allHideouts)
      {
        if (allHideout.Item1.Hideout.IsSpotted)
          this.Nameplates.Add(new SettlementNameplateVM(allHideout.Item1, allHideout.Item2, this._mapCamera, this._fastMoveCameraToPosition));
      }
      foreach (Tuple<Settlement, GameEntity> allRetreat in this._allRetreats)
      {
        if (allRetreat.Item1.SettlementComponent is RetirementSettlementComponent settlementComponent)
        {
          if (settlementComponent.IsSpotted)
            this.Nameplates.Add(new SettlementNameplateVM(allRetreat.Item1, allRetreat.Item2, this._mapCamera, this._fastMoveCameraToPosition));
        }
        else
          Debug.FailedAssert("A seetlement which is IsRetreat doesn't have a retirement component.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Nameplate\\SettlementNameplatesVM.cs", nameof (Initialize), 83);
      }
      foreach (SettlementNameplateVM nameplate in (Collection<SettlementNameplateVM>) this.Nameplates)
      {
        if (nameplate.Settlement?.SiegeEvent != null)
          nameplate.OnSiegeEventStartedOnSettlement(nameplate.Settlement?.SiegeEvent);
        else if (nameplate.Settlement.IsTown || nameplate.Settlement.IsCastle)
        {
          Clan ownerClan = nameplate.Settlement.OwnerClan;
          if ((ownerClan != null ? (ownerClan.IsRebelClan ? 1 : 0) : 0) != 0)
            nameplate.OnRebelliousClanFormed(nameplate.Settlement.OwnerClan);
        }
      }
      this.RefreshRelationsOfNameplates();
    }

    private void UpdateNameplateAuxMT(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        SettlementNameplateVM nameplate = this.Nameplates[index];
        nameplate.CalculatePosition(in this._cachedCameraPosition);
        nameplate.DetermineIsInsideWindow();
        nameplate.DetermineIsVisibleOnMap(in this._cachedCameraPosition);
        nameplate.RefreshPosition();
        nameplate.RefreshDynamicProperties(false);
      }
    }

    public void Update()
    {
      this._cachedCameraPosition = this._mapCamera.Position;
      TWParallel.For(0, this.Nameplates.Count, this.UpdateNameplateAuxMTPredicate);
      for (int index = 0; index < this.Nameplates.Count; ++index)
        this.Nameplates[index].RefreshBindValues();
    }

    private void OnSiegeEventStartedOnSettlement(SiegeEvent siegeEvent)
    {
      this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == siegeEvent.BesiegedSettlement))?.OnSiegeEventStartedOnSettlement(siegeEvent);
    }

    private void OnSiegeEventEndedOnSettlement(SiegeEvent siegeEvent)
    {
      this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == siegeEvent.BesiegedSettlement))?.OnSiegeEventEndedOnSettlement(siegeEvent);
    }

    private void OnMapEventStartedOnSettlement(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == mapEvent.MapEventSettlement))?.OnMapEventStartedOnSettlement(mapEvent);
    }

    private void OnMapEventEndedOnSettlement(MapEvent mapEvent)
    {
      this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == mapEvent.MapEventSettlement))?.OnMapEventEndedOnSettlement();
    }

    private void OnPartyBaseVisibilityChange(PartyBase party)
    {
      if (!party.IsSettlement)
        return;
      Tuple<Settlement, GameEntity> desiredSettlementTuple = (Tuple<Settlement, GameEntity>) null;
      if (party.Settlement.IsHideout)
        desiredSettlementTuple = this._allHideouts.SingleOrDefault<Tuple<Settlement, GameEntity>>((Func<Tuple<Settlement, GameEntity>, bool>) (h => h.Item1.Hideout == party.Settlement.Hideout));
      else if (party.Settlement.SettlementComponent is RetirementSettlementComponent)
        desiredSettlementTuple = this._allRetreats.SingleOrDefault<Tuple<Settlement, GameEntity>>((Func<Tuple<Settlement, GameEntity>, bool>) (h => h.Item1.SettlementComponent as RetirementSettlementComponent == party.Settlement.SettlementComponent as RetirementSettlementComponent));
      else
        Debug.FailedAssert("We don't support hiding non retreat or non hideout settlements.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\Nameplate\\SettlementNameplatesVM.cs", nameof (OnPartyBaseVisibilityChange), 180);
      if (desiredSettlementTuple == null)
        return;
      SettlementNameplateVM settlementNameplateVm1 = this.Nameplates.SingleOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == desiredSettlementTuple.Item1));
      if (party.IsVisible && settlementNameplateVm1 == null)
      {
        SettlementNameplateVM settlementNameplateVm2 = new SettlementNameplateVM(desiredSettlementTuple.Item1, desiredSettlementTuple.Item2, this._mapCamera, this._fastMoveCameraToPosition);
        this.Nameplates.Add(settlementNameplateVm2);
        settlementNameplateVm2.RefreshRelationStatus();
      }
      else
      {
        if (party.IsVisible || settlementNameplateVm1 == null)
          return;
        this.Nameplates.Remove(settlementNameplateVm1);
      }
    }

    private void OnPeaceDeclared(
      IFaction faction1,
      IFaction faction2,
      MakePeaceAction.MakePeaceDetail detail)
    {
      this.OnPeaceOrWarDeclared(faction1, faction2);
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail arg3)
    {
      this.OnPeaceOrWarDeclared(faction1, faction2);
    }

    private void OnPeaceOrWarDeclared(IFaction faction1, IFaction faction2)
    {
      if (faction1 != Hero.MainHero.MapFaction && faction1 != Hero.MainHero.Clan && faction2 != Hero.MainHero.MapFaction && faction2 != Hero.MainHero.Clan)
        return;
      this.RefreshRelationsOfNameplates();
    }

    private void OnClanChangeKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      this.RefreshRelationsOfNameplates();
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero previousOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      SettlementNameplateVM settlementNameplateVm1 = this.Nameplates.SingleOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == settlement));
      settlementNameplateVm1?.RefreshDynamicProperties(true);
      settlementNameplateVm1?.RefreshRelationStatus();
      foreach (Village boundVillage in (List<Village>) settlement.BoundVillages)
      {
        Village village = boundVillage;
        SettlementNameplateVM settlementNameplateVm2 = this.Nameplates.SingleOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement.IsVillage && n.Settlement.Village == village));
        settlementNameplateVm2?.RefreshDynamicProperties(true);
        settlementNameplateVm2?.RefreshRelationStatus();
      }
      if (detail == ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail.ByRebellion)
      {
        this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == settlement))?.OnRebelliousClanFormed(newOwner.Clan);
      }
      else
      {
        if (previousOwner == null || !previousOwner.IsRebel)
          return;
        this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == settlement))?.OnRebelliousClanDisbanded(previousOwner.Clan);
      }
    }

    private void OnRebelliousClanDisbandedAtSettlement(Settlement settlement, Clan clan)
    {
      this.Nameplates.FirstOrDefault<SettlementNameplateVM>((Func<SettlementNameplateVM, bool>) (n => n.Settlement == settlement))?.OnRebelliousClanDisbanded(clan);
    }

    private void RefreshRelationsOfNameplates()
    {
      foreach (NameplateVM nameplate in (Collection<SettlementNameplateVM>) this.Nameplates)
        nameplate.RefreshRelationStatus();
    }

    private void RefreshDynamicPropertiesOfNameplates()
    {
      foreach (NameplateVM nameplate in (Collection<SettlementNameplateVM>) this.Nameplates)
        nameplate.RefreshDynamicProperties(false);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      CampaignEvents.PartyVisibilityChangedEvent.ClearListeners((object) this);
      CampaignEvents.WarDeclared.ClearListeners((object) this);
      CampaignEvents.MakePeace.ClearListeners((object) this);
      CampaignEvents.OnClanChangedKingdomEvent.ClearListeners((object) this);
      CampaignEvents.OnSettlementOwnerChangedEvent.ClearListeners((object) this);
      CampaignEvents.OnSiegeEventStartedEvent.ClearListeners((object) this);
      CampaignEvents.OnSiegeEventEndedEvent.ClearListeners((object) this);
      CampaignEvents.RebelliousClanDisbandedAtSettlement.ClearListeners((object) this);
      this.Nameplates.ApplyActionOnAllItems((Action<SettlementNameplateVM>) (n => n.OnFinalize()));
    }

    [DataSourceProperty]
    public MBBindingList<SettlementNameplateVM> Nameplates
    {
      get => this._nameplates;
      set
      {
        if (this._nameplates == value)
          return;
        this._nameplates = value;
        this.OnPropertyChangedWithValue<MBBindingList<SettlementNameplateVM>>(value, nameof (Nameplates));
      }
    }
  }
}
