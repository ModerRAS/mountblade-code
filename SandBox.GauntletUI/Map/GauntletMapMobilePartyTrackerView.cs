// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapMobilePartyTrackerView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.Map;
using System;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapMobilePartyTrackerView))]
  public class GauntletMapMobilePartyTrackerView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private IGauntletMovie _movie;
    private MapMobilePartyTrackerVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new MapMobilePartyTrackerVM(this.MapScreen._mapCameraView.Camera, new Action<Vec2>(this.MapScreen.FastMoveCameraToPosition));
      this.Layer = (ScreenLayer) this.MapScreen.GetMapView<GauntletMapBasicView>().GauntletNameplateLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._movie = this._layerAsGauntletLayer.LoadMovie("MapMobilePartyTracker", (ViewModel) this._dataSource);
    }

    protected override void OnResume()
    {
      base.OnResume();
      this._dataSource.UpdateProperties();
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
      this._dataSource.Update();
    }

    protected override void OnFinalize()
    {
      this._dataSource.OnFinalize();
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._movie = (IGauntletMovie) null;
      this._dataSource = (MapMobilePartyTrackerVM) null;
      base.OnFinalize();
    }
  }
}
