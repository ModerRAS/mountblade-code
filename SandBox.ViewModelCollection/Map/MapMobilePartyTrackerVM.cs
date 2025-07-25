// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Map.MapMobilePartyTrackerVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Map
{
  public class MapMobilePartyTrackerVM : ViewModel
  {
    private readonly Camera _mapCamera;
    private readonly Action<Vec2> _fastMoveCameraToPosition;
    private readonly TWParallel.ParallelForAuxPredicate UpdateTrackerPropertiesAuxPredicate;
    private MBBindingList<MobilePartyTrackItemVM> _trackers;

    public MBBindingList<MobilePartyTrackItemVM> Trackers
    {
      get => this._trackers;
      set
      {
        if (value == this._trackers)
          return;
        this._trackers = value;
        this.OnPropertyChangedWithValue<MBBindingList<MobilePartyTrackItemVM>>(value, nameof (Trackers));
      }
    }

    public MapMobilePartyTrackerVM(Camera mapCamera, Action<Vec2> fastMoveCameraToPosition)
    {
      this._mapCamera = mapCamera;
      this._fastMoveCameraToPosition = fastMoveCameraToPosition;
      this.UpdateTrackerPropertiesAuxPredicate = new TWParallel.ParallelForAuxPredicate(this.UpdateTrackerPropertiesAux);
      this.Trackers = new MBBindingList<MobilePartyTrackItemVM>();
      this.InitList();
      CampaignEvents.ArmyCreated.AddNonSerializedListener((object) this, new Action<Army>(this.OnArmyCreated));
      CampaignEvents.ArmyDispersed.AddNonSerializedListener((object) this, new Action<Army, Army.ArmyDispersionReason, bool>(this.OnArmyDispersed));
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnMobilePartyCreated));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnPartyDestroyed));
      CampaignEvents.MobilePartyQuestStatusChanged.AddNonSerializedListener((object) this, new Action<MobileParty, bool>(this.OnPartyQuestStatusChanged));
      CampaignEvents.OnPartyDisbandedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnPartyDisbanded));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnCompanionClanCreatedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnCompanionClanCreated));
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      CampaignEventDispatcher.Instance.RemoveListeners((object) this);
    }

    private void InitList()
    {
      this.Trackers.Clear();
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) Clan.PlayerClan.WarPartyComponents)
      {
        if (this.CanAddParty(warPartyComponent.MobileParty))
          this.Trackers.Add(new MobilePartyTrackItemVM(warPartyComponent.MobileParty, this._mapCamera, this._fastMoveCameraToPosition));
      }
      foreach (CaravanPartyComponent caravanPartyComponent in Clan.PlayerClan.Heroes.SelectMany<Hero, CaravanPartyComponent>((Func<Hero, IEnumerable<CaravanPartyComponent>>) (h => (IEnumerable<CaravanPartyComponent>) h.OwnedCaravans)))
      {
        if (this.CanAddParty(caravanPartyComponent.MobileParty))
          this.Trackers.Add(new MobilePartyTrackItemVM(caravanPartyComponent.MobileParty, this._mapCamera, this._fastMoveCameraToPosition));
      }
      if (Clan.PlayerClan.Kingdom != null)
      {
        foreach (Army army in (List<Army>) Clan.PlayerClan.Kingdom.Armies)
          this.Trackers.Add(new MobilePartyTrackItemVM(army, this._mapCamera, this._fastMoveCameraToPosition));
      }
      foreach (TrackedObject trackedObject in (List<TrackedObject>) Campaign.Current.VisualTrackerManager.TrackedObjects)
      {
        if (trackedObject.Object is MobileParty trackedParty && trackedParty.LeaderHero == null && trackedParty.IsCurrentlyUsedByAQuest)
          this.Trackers.Add(new MobilePartyTrackItemVM(trackedParty, this._mapCamera, this._fastMoveCameraToPosition));
      }
    }

    private void UpdateTrackerPropertiesAux(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        this.Trackers[index].UpdateProperties();
        this.Trackers[index].UpdatePosition();
      }
    }

    public void Update()
    {
      TWParallel.For(0, this.Trackers.Count, this.UpdateTrackerPropertiesAuxPredicate);
      this.Trackers.ApplyActionOnAllItems((Action<MobilePartyTrackItemVM>) (t => t.RefreshBinding()));
    }

    public void UpdateProperties()
    {
      this.Trackers.ApplyActionOnAllItems((Action<MobilePartyTrackItemVM>) (t => t.UpdateProperties()));
    }

    private bool CanAddParty(MobileParty party)
    {
      if (party == null || party.IsMainParty || party.IsMilitia || party.IsGarrison || party.IsVillager || party.IsBandit || party.IsBanditBossParty || party.IsCurrentlyUsedByAQuest)
        return false;
      return !party.IsCaravan || party.CaravanPartyComponent.Owner == Hero.MainHero;
    }

    private void AddIfNotAdded(Army army)
    {
      if (this.Trackers.FirstOrDefault<MobilePartyTrackItemVM>((Func<MobilePartyTrackItemVM, bool>) (t => t.TrackedArmy == army)) != null)
        return;
      this.Trackers.Add(new MobilePartyTrackItemVM(army, this._mapCamera, this._fastMoveCameraToPosition));
    }

    private void AddIfNotAdded(MobileParty party)
    {
      for (int index = 0; index < this.Trackers.Count; ++index)
      {
        if (this.Trackers[index].TrackedParty == party)
          return;
      }
      this.Trackers.Add(new MobilePartyTrackItemVM(party, this._mapCamera, this._fastMoveCameraToPosition));
    }

    private void RemoveIfExists(Army army)
    {
      MobilePartyTrackItemVM partyTrackItemVm = this.Trackers.FirstOrDefault<MobilePartyTrackItemVM>((Func<MobilePartyTrackItemVM, bool>) (t => t.TrackedArmy == army));
      if (partyTrackItemVm == null)
        return;
      this.Trackers.Remove(partyTrackItemVm);
    }

    private void RemoveIfExists(MobileParty party)
    {
      for (int index = 0; index < this.Trackers.Count; ++index)
      {
        if (this.Trackers[index].TrackedParty == party)
        {
          this.Trackers.RemoveAt(index);
          break;
        }
      }
    }

    private void OnPartyDestroyed(MobileParty mobileParty, PartyBase arg2)
    {
      this.RemoveIfExists(mobileParty);
    }

    private void OnPartyQuestStatusChanged(MobileParty mobileParty, bool isUsedByQuest)
    {
      if (isUsedByQuest)
      {
        this.RemoveIfExists(mobileParty);
      }
      else
      {
        if (!this.CanAddParty(mobileParty))
          return;
        this.AddIfNotAdded(mobileParty);
      }
    }

    private void OnPartyDisbanded(MobileParty disbandedParty, Settlement relatedSettlement)
    {
      this.RemoveIfExists(disbandedParty);
    }

    private void OnMobilePartyCreated(MobileParty party)
    {
      if (party.IsLordParty)
      {
        if (!Clan.PlayerClan.WarPartyComponents.Contains(party.WarPartyComponent))
          return;
        this.AddIfNotAdded(party);
      }
      else
      {
        if (!this.CanAddParty(party))
          return;
        this.AddIfNotAdded(party);
      }
    }

    private void OnArmyDispersed(Army army, Army.ArmyDispersionReason arg2, bool arg3)
    {
      if (army.Kingdom != Hero.MainHero.MapFaction)
        return;
      this.RemoveIfExists(army);
    }

    private void OnArmyCreated(Army army)
    {
      if (army.Kingdom != Hero.MainHero.MapFaction)
        return;
      this.AddIfNotAdded(army);
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      if (clan != Clan.PlayerClan)
        return;
      this.InitList();
    }

    private void OnCompanionClanCreated(Clan clan)
    {
      this.RemoveIfExists(clan.Leader.PartyBelongedTo);
    }
  }
}
