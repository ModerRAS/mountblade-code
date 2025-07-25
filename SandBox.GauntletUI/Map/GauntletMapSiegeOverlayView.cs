// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapSiegeOverlayView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.MapSiege;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapSiegeOverlayView))]
  public class GauntletMapSiegeOverlayView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private MapSiegeVM _dataSource;
    private IGauntletMovie _movie;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this.Layer = (ScreenLayer) this.MapScreen.GetMapView<GauntletMapBasicView>().GauntletNameplateLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      PartyVisual visualOfParty = PartyVisualManager.Current.GetVisualOfParty(PlayerSiege.PlayerSiegeEvent.BesiegedSettlement.Party);
      this._dataSource = new MapSiegeVM(this.MapScreen._mapCameraView.Camera, visualOfParty.GetAttackerBatteringRamSiegeEngineFrames(), visualOfParty.GetAttackerRangedSiegeEngineFrames(), visualOfParty.GetAttackerTowerSiegeEngineFrames(), visualOfParty.GetDefenderRangedSiegeEngineFrames(), visualOfParty.GetBreachableWallFrames());
      CampaignEvents.SiegeEngineBuiltEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent, BattleSideEnum, SiegeEngineType>(this.OnSiegeEngineBuilt));
      this._movie = this._layerAsGauntletLayer.LoadMovie("MapSiegeOverlay", (ViewModel) this._dataSource);
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
      this._dataSource?.Update(this.MapScreen._mapCameraView.CameraDistance);
    }

    protected override void OnFinalize()
    {
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this._movie = (IGauntletMovie) null;
      this._dataSource = (MapSiegeVM) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      CampaignEvents.SiegeEngineBuiltEvent.ClearListeners((object) this);
      base.OnFinalize();
    }

    protected override void OnSiegeEngineClick(MatrixFrame siegeEngineFrame)
    {
      base.OnSiegeEngineClick(siegeEngineFrame);
      UISoundsHelper.PlayUISound("event:/ui/panels/siege/engine_click");
      MapSiegeVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.ProductionController.IsEnabled ? 1 : 0) : 0) != 0 && this._dataSource.ProductionController.LatestSelectedPOI.MapSceneLocationFrame.NearlyEquals(siegeEngineFrame))
      {
        this._dataSource.ProductionController.ExecuteDisable();
      }
      else
      {
        this._dataSource?.OnSelectionFromScene(siegeEngineFrame);
        this.MapState.OnSiegeEngineClick(siegeEngineFrame);
      }
    }

    protected override void OnMapTerrainClick()
    {
      base.OnMapTerrainClick();
      this._dataSource?.ProductionController.ExecuteDisable();
    }

    private void OnSiegeEngineBuilt(
      SiegeEvent siegeEvent,
      BattleSideEnum side,
      SiegeEngineType siegeEngineType)
    {
      if (!siegeEvent.IsPlayerSiegeEvent || side != PlayerSiege.PlayerSide)
        return;
      UISoundsHelper.PlayUISound("event:/ui/panels/siege/engine_build_complete");
    }
  }
}
