// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.MapSiege.MapSiegeProductionVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.MapSiege
{
  public class MapSiegeProductionVM : ViewModel
  {
    private MBBindingList<MapSiegeProductionMachineVM> _possibleProductionMachines;
    private bool _isEnabled;

    private SiegeEvent Siege => PlayerSiege.PlayerSiegeEvent;

    private BattleSideEnum PlayerSide => PlayerSiege.PlayerSide;

    private Settlement Settlement => this.Siege.BesiegedSettlement;

    public MapSiegePOIVM LatestSelectedPOI { get; private set; }

    public MapSiegeProductionVM()
    {
      this.PossibleProductionMachines = new MBBindingList<MapSiegeProductionMachineVM>();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.PossibleProductionMachines.ApplyActionOnAllItems((Action<MapSiegeProductionMachineVM>) (x => x.RefreshValues()));
    }

    public void Update()
    {
      if (!this.IsEnabled || this.LatestSelectedPOI.Machine != null || !this.PossibleProductionMachines.Any<MapSiegeProductionMachineVM>((Func<MapSiegeProductionMachineVM, bool>) (m => m.IsReserveOption)))
        return;
      this.ExecuteDisable();
    }

    public void OnMachineSelection(MapSiegePOIVM poi)
    {
      this.PossibleProductionMachines.Clear();
      this.LatestSelectedPOI = poi;
      if (this.LatestSelectedPOI?.Machine != null)
      {
        this.PossibleProductionMachines.Add(new MapSiegeProductionMachineVM(new Action<MapSiegeProductionMachineVM>(this.OnPossibleMachineSelection), !this.LatestSelectedPOI.Machine.IsActive && !this.LatestSelectedPOI.Machine.IsBeingRedeployed));
      }
      else
      {
        IEnumerable<SiegeEngineType> siegeEngineTypes;
        switch (poi.Type)
        {
          case MapSiegePOIVM.POIType.DefenderSiegeMachine:
            siegeEngineTypes = this.GetAllDefenderMachines();
            break;
          case MapSiegePOIVM.POIType.AttackerRamSiegeMachine:
            siegeEngineTypes = this.GetAllAttackerRamMachines();
            break;
          case MapSiegePOIVM.POIType.AttackerTowerSiegeMachine:
            siegeEngineTypes = this.GetAllAttackerTowerMachines();
            break;
          case MapSiegePOIVM.POIType.AttackerRangedSiegeMachine:
            siegeEngineTypes = this.GetAllAttackerRangedMachines();
            break;
          default:
            this.IsEnabled = false;
            return;
        }
        foreach (SiegeEngineType siegeEngineType in siegeEngineTypes)
        {
          SiegeEngineType desMachine = siegeEngineType;
          int number = this.Siege.GetSiegeEventSide(this.PlayerSide).SiegeEngines.ReservedSiegeEngines.Count<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (m => m.SiegeEngine == desMachine));
          this.PossibleProductionMachines.Add(new MapSiegeProductionMachineVM(desMachine, number, new Action<MapSiegeProductionMachineVM>(this.OnPossibleMachineSelection)));
        }
      }
      this.IsEnabled = true;
    }

    private void OnPossibleMachineSelection(MapSiegeProductionMachineVM machine)
    {
      if (this.LatestSelectedPOI.Machine == null || this.LatestSelectedPOI.Machine.SiegeEngine != machine.Engine)
      {
        ISiegeEventSide siegeEventSide = this.Siege.GetSiegeEventSide(this.PlayerSide);
        if (machine.IsReserveOption && this.LatestSelectedPOI.Machine != null)
        {
          bool moveToReserve = this.LatestSelectedPOI.Machine.IsActive || this.LatestSelectedPOI.Machine.IsBeingRedeployed;
          siegeEventSide.SiegeEngines.RemoveDeployedSiegeEngine(this.LatestSelectedPOI.MachineIndex, this.LatestSelectedPOI.Machine.SiegeEngine.IsRanged, moveToReserve);
        }
        else
        {
          SiegeEvent.SiegeEngineConstructionProgress siegeEngine = siegeEventSide.SiegeEngines.ReservedSiegeEngines.FirstOrDefault<SiegeEvent.SiegeEngineConstructionProgress>((Func<SiegeEvent.SiegeEngineConstructionProgress, bool>) (e => e.SiegeEngine == machine.Engine));
          if (siegeEngine == null)
          {
            float siegeEngineHitPoints = Campaign.Current.Models.SiegeEventModel.GetSiegeEngineHitPoints(PlayerSiege.PlayerSiegeEvent, machine.Engine, this.PlayerSide);
            siegeEngine = new SiegeEvent.SiegeEngineConstructionProgress(machine.Engine, 0.0f, siegeEngineHitPoints);
          }
          if (siegeEventSide.SiegeStrategy != DefaultSiegeStrategies.Custom && Campaign.Current.Models.EncounterModel.GetLeaderOfSiegeEvent(this.Siege, siegeEventSide.BattleSide) == Hero.MainHero)
            siegeEventSide.SetSiegeStrategy(DefaultSiegeStrategies.Custom);
          siegeEventSide.SiegeEngines.DeploySiegeEngineAtIndex(siegeEngine, this.LatestSelectedPOI.MachineIndex);
        }
        this.Siege.BesiegedSettlement.Party.SetVisualAsDirty();
        Game.Current.EventManager.TriggerEvent<PlayerStartEngineConstructionEvent>(new PlayerStartEngineConstructionEvent(machine.Engine));
      }
      this.IsEnabled = false;
    }

    public void ExecuteDisable() => this.IsEnabled = false;

    private IEnumerable<SiegeEngineType> GetAllDefenderMachines()
    {
      return Campaign.Current.Models.SiegeEventModel.GetAvailableDefenderSiegeEngines(PartyBase.MainParty);
    }

    private IEnumerable<SiegeEngineType> GetAllAttackerRangedMachines()
    {
      return Campaign.Current.Models.SiegeEventModel.GetAvailableAttackerRangedSiegeEngines(PartyBase.MainParty);
    }

    private IEnumerable<SiegeEngineType> GetAllAttackerRamMachines()
    {
      return Campaign.Current.Models.SiegeEventModel.GetAvailableAttackerRamSiegeEngines(PartyBase.MainParty);
    }

    private IEnumerable<SiegeEngineType> GetAllAttackerTowerMachines()
    {
      return Campaign.Current.Models.SiegeEventModel.GetAvailableAttackerTowerSiegeEngines(PartyBase.MainParty);
    }

    [DataSourceProperty]
    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnabled));
      }
    }

    [DataSourceProperty]
    public MBBindingList<MapSiegeProductionMachineVM> PossibleProductionMachines
    {
      get => this._possibleProductionMachines;
      set
      {
        if (value == this._possibleProductionMachines)
          return;
        this._possibleProductionMachines = value;
        this.OnPropertyChangedWithValue<MBBindingList<MapSiegeProductionMachineVM>>(value, nameof (PossibleProductionMachines));
      }
    }
  }
}
