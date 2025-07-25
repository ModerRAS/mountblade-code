// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapPartyNameplateView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.Nameplate;
using System;
using System.Collections.ObjectModel;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapPartyNameplateView))]
  public class GauntletMapPartyNameplateView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private PartyNameplatesVM _dataSource;
    private IGauntletMovie _movie;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new PartyNameplatesVM(this.MapScreen._mapCameraView.Camera, new Action(this.MapScreen.FastMoveCameraToMainParty), new Func<bool>(this.IsShowPartyNamesEnabled));
      this.Layer = (ScreenLayer) this.MapScreen.GetMapView<GauntletMapBasicView>().GauntletNameplateLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._movie = this._layerAsGauntletLayer.LoadMovie("PartyNameplate", (ViewModel) this._dataSource);
      this._dataSource.Initialize();
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
      this._dataSource.Update();
    }

    protected override void OnResume()
    {
      base.OnResume();
      foreach (NameplateVM nameplate in (Collection<PartyNameplateVM>) this._dataSource.Nameplates)
        nameplate.RefreshDynamicProperties(true);
    }

    protected override void OnFinalize()
    {
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this._dataSource.OnFinalize();
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._movie = (IGauntletMovie) null;
      this._dataSource = (PartyNameplatesVM) null;
      base.OnFinalize();
    }

    private bool IsShowPartyNamesEnabled() => this.MapScreen.SceneLayer.Input.IsGameKeyDown(5);
  }
}
