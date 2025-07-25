// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapEventVisualsView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapEventVisualsView))]
  public class GauntletMapEventVisualsView : MapView, IGauntletMapEventVisualHandler
  {
    private GauntletLayer _layerAsGauntletLayer;
    private IGauntletMovie _movie;
    private MapEventVisualsVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new MapEventVisualsVM(this.MapScreen._mapCameraView.Camera, new Func<Vec2, Vec3>(this.GetRealPositionOfMapEvent));
      this.Layer = (ScreenLayer) this.MapScreen.GetMapView<GauntletMapBasicView>().GauntletNameplateLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._movie = this._layerAsGauntletLayer.LoadMovie("MapEventVisuals", (ViewModel) this._dataSource);
      if (!(Campaign.Current.VisualCreator.MapEventVisualCreator is GauntletMapEventVisualCreator eventVisualCreator))
        return;
      eventVisualCreator.Handlers.Add((IGauntletMapEventVisualHandler) this);
      foreach (GauntletMapEventVisual currentEvent in eventVisualCreator.GetCurrentEvents())
        this._dataSource.OnMapEventStarted(currentEvent.MapEvent);
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
      this._dataSource.Update(dt);
    }

    protected override void OnFinalize()
    {
      if (Campaign.Current.VisualCreator.MapEventVisualCreator is GauntletMapEventVisualCreator eventVisualCreator)
        eventVisualCreator.Handlers.Remove((IGauntletMapEventVisualHandler) this);
      this._dataSource.OnFinalize();
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this._movie = (IGauntletMovie) null;
      this._dataSource = (MapEventVisualsVM) null;
      base.OnFinalize();
    }

    private Vec3 GetRealPositionOfMapEvent(Vec2 mapEventPosition)
    {
      float height = 0.0f;
      ((MapScene) Campaign.Current.MapSceneWrapper).Scene.GetHeightAtPoint(mapEventPosition, BodyFlags.CommonCollisionExcludeFlagsForCombat, ref height);
      return new Vec3(mapEventPosition.x, mapEventPosition.y, height);
    }

    void IGauntletMapEventVisualHandler.OnNewEventStarted(GauntletMapEventVisual newEvent)
    {
      this._dataSource.OnMapEventStarted(newEvent.MapEvent);
    }

    void IGauntletMapEventVisualHandler.OnInitialized(GauntletMapEventVisual newEvent)
    {
      this._dataSource.OnMapEventStarted(newEvent.MapEvent);
    }

    void IGauntletMapEventVisualHandler.OnEventEnded(GauntletMapEventVisual newEvent)
    {
      this._dataSource.OnMapEventEnded(newEvent.MapEvent);
    }

    void IGauntletMapEventVisualHandler.OnEventVisibilityChanged(
      GauntletMapEventVisual visibilityChangedEvent)
    {
      this._dataSource.OnMapEventVisibilityChanged(visibilityChangedEvent.MapEvent);
    }
  }
}
