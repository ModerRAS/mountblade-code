// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.MapSiege.MapSiegeVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.MapSiege
{
  public class MapSiegeVM : ViewModel
  {
    private readonly Camera _mapCamera;
    private readonly MapSiegeVM.SiegePOIDistanceComparer _poiDistanceComparer;
    private MBBindingList<MapSiegePOIVM> _pointsOfInterest;
    private MapSiegeProductionVM _productionController;
    private float _preparationProgress;
    private string _preparationTitleText;
    private bool _isPreparationsCompleted;

    private bool IsPlayerLeaderOfSiegeEvent
    {
      get
      {
        SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
        return (playerSiegeEvent != null ? (playerSiegeEvent.IsPlayerSiegeEvent ? 1 : 0) : 0) != 0 && Campaign.Current.Models.EncounterModel.GetLeaderOfSiegeEvent(PlayerSiege.PlayerSiegeEvent, PlayerSiege.PlayerSide) == Hero.MainHero;
      }
    }

    public MapSiegeVM(
      Camera mapCamera,
      MatrixFrame[] batteringRamFrames,
      MatrixFrame[] rangedSiegeEngineFrames,
      MatrixFrame[] towerSiegeEngineFrames,
      MatrixFrame[] defenderSiegeEngineFrames,
      MatrixFrame[] breachableWallFrames)
    {
      this._mapCamera = mapCamera;
      this.PointsOfInterest = new MBBindingList<MapSiegePOIVM>();
      this._poiDistanceComparer = new MapSiegeVM.SiegePOIDistanceComparer();
      for (int machineIndex = 0; machineIndex < batteringRamFrames.Length; ++machineIndex)
        this.PointsOfInterest.Add(new MapSiegePOIVM(MapSiegePOIVM.POIType.AttackerRamSiegeMachine, batteringRamFrames[machineIndex], this._mapCamera, machineIndex, new Action<MapSiegePOIVM>(this.OnPOISelection)));
      for (int machineIndex = 0; machineIndex < rangedSiegeEngineFrames.Length; ++machineIndex)
        this.PointsOfInterest.Add(new MapSiegePOIVM(MapSiegePOIVM.POIType.AttackerRangedSiegeMachine, rangedSiegeEngineFrames[machineIndex], this._mapCamera, machineIndex, new Action<MapSiegePOIVM>(this.OnPOISelection)));
      for (int index = 0; index < towerSiegeEngineFrames.Length; ++index)
        this.PointsOfInterest.Add(new MapSiegePOIVM(MapSiegePOIVM.POIType.AttackerTowerSiegeMachine, towerSiegeEngineFrames[index], this._mapCamera, batteringRamFrames.Length + index, new Action<MapSiegePOIVM>(this.OnPOISelection)));
      for (int machineIndex = 0; machineIndex < defenderSiegeEngineFrames.Length; ++machineIndex)
        this.PointsOfInterest.Add(new MapSiegePOIVM(MapSiegePOIVM.POIType.DefenderSiegeMachine, defenderSiegeEngineFrames[machineIndex], this._mapCamera, machineIndex, new Action<MapSiegePOIVM>(this.OnPOISelection)));
      for (int machineIndex = 0; machineIndex < breachableWallFrames.Length; ++machineIndex)
        this.PointsOfInterest.Add(new MapSiegePOIVM(MapSiegePOIVM.POIType.WallSection, breachableWallFrames[machineIndex], this._mapCamera, machineIndex, new Action<MapSiegePOIVM>(this.OnPOISelection)));
      this.ProductionController = new MapSiegeProductionVM();
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.PreparationTitleText = GameTexts.FindText("str_building_siege_camp").ToString();
      this.ProductionController.RefreshValues();
      this.PointsOfInterest.ApplyActionOnAllItems((Action<MapSiegePOIVM>) (x => x.RefreshValues()));
    }

    private void OnPOISelection(MapSiegePOIVM poi)
    {
      if (this.ProductionController.LatestSelectedPOI != null)
        this.ProductionController.LatestSelectedPOI.IsSelected = false;
      if (!this.IsPlayerLeaderOfSiegeEvent)
        return;
      this.ProductionController.OnMachineSelection(poi);
    }

    public void OnSelectionFromScene(MatrixFrame frameOfEngine)
    {
      if (PlayerSiege.PlayerSiegeEvent == null)
        return;
      Settlement besiegedSettlement = PlayerSiege.BesiegedSettlement;
      if ((besiegedSettlement != null ? (besiegedSettlement.CurrentSiegeState != Settlement.SiegeState.InTheLordsHall ? 1 : 0) : 1) == 0 || !this.IsPlayerLeaderOfSiegeEvent)
        return;
      IEnumerable<MapSiegePOIVM> source = this.PointsOfInterest.Where<MapSiegePOIVM>((Func<MapSiegePOIVM, bool>) (poi => frameOfEngine.NearlyEquals(poi.MapSceneLocationFrame)));
      if (source == null)
        return;
      source.FirstOrDefault<MapSiegePOIVM>()?.ExecuteSelection();
    }

    public void Update(float mapCameraDistanceValue)
    {
      SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
      this.IsPreparationsCompleted = (playerSiegeEvent != null ? (playerSiegeEvent.BesiegerCamp.IsPreparationComplete ? 1 : 0) : 0) != 0 || PlayerSiege.PlayerSide == BattleSideEnum.Defender;
      this.PreparationProgress = (float) ((double) PlayerSiege.PlayerSiegeEvent?.BesiegerCamp.SiegeEngines?.SiegePreparations?.Progress ?? 0.0);
      TWParallel.For(0, this.PointsOfInterest.Count, (TWParallel.ParallelForAuxPredicate) ((startInclusive, endExclusive) =>
      {
        for (int index = startInclusive; index < endExclusive; ++index)
        {
          this.PointsOfInterest[index].RefreshDistanceValue(mapCameraDistanceValue);
          this.PointsOfInterest[index].RefreshPosition();
          this.PointsOfInterest[index].UpdateProperties();
        }
      }));
      foreach (MapSiegePOIVM mapSiegePoivm in (Collection<MapSiegePOIVM>) this.PointsOfInterest)
        mapSiegePoivm.RefreshBinding();
      this.ProductionController.Update();
      this.PointsOfInterest.Sort((IComparer<MapSiegePOIVM>) this._poiDistanceComparer);
    }

    [DataSourceProperty]
    public float PreparationProgress
    {
      get => this._preparationProgress;
      set
      {
        if ((double) value == (double) this._preparationProgress)
          return;
        this._preparationProgress = value;
        this.OnPropertyChangedWithValue(value, nameof (PreparationProgress));
      }
    }

    [DataSourceProperty]
    public bool IsPreparationsCompleted
    {
      get => this._isPreparationsCompleted;
      set
      {
        if (value == this._isPreparationsCompleted)
          return;
        this._isPreparationsCompleted = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPreparationsCompleted));
      }
    }

    [DataSourceProperty]
    public string PreparationTitleText
    {
      get => this._preparationTitleText;
      set
      {
        if (!(value != this._preparationTitleText))
          return;
        this._preparationTitleText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (PreparationTitleText));
      }
    }

    [DataSourceProperty]
    public MapSiegeProductionVM ProductionController
    {
      get => this._productionController;
      set
      {
        if (value == this._productionController)
          return;
        this._productionController = value;
        this.OnPropertyChangedWithValue<MapSiegeProductionVM>(value, nameof (ProductionController));
      }
    }

    [DataSourceProperty]
    public MBBindingList<MapSiegePOIVM> PointsOfInterest
    {
      get => this._pointsOfInterest;
      set
      {
        if (value == this._pointsOfInterest)
          return;
        this._pointsOfInterest = value;
        this.OnPropertyChangedWithValue<MBBindingList<MapSiegePOIVM>>(value, nameof (PointsOfInterest));
      }
    }

    public class SiegePOIDistanceComparer : IComparer<MapSiegePOIVM>
    {
      public int Compare(MapSiegePOIVM x, MapSiegePOIVM y) => y.LatestW.CompareTo(x.LatestW);
    }
  }
}
