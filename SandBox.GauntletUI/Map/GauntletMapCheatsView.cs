// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapCheatsView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection.Map.Cheat;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapCheatsView))]
  public class GauntletMapCheatsView : MapCheatsView
  {
    protected GauntletLayer _layerAsGauntletLayer;
    protected GameplayCheatsVM _dataSource;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new GameplayCheatsVM(new Action(this.HandleClose), GameplayCheatsManager.GetMapCheatList());
      this.InitializeKeyVisuals();
      this.Layer = (ScreenLayer) new GauntletLayer(4500);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._layerAsGauntletLayer.LoadMovie("MapCheats", (ViewModel) this._dataSource);
      this._layerAsGauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._layerAsGauntletLayer.InputRestrictions.SetInputRestrictions();
      this._layerAsGauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._layerAsGauntletLayer);
      this.MapScreen.AddLayer((ScreenLayer) this._layerAsGauntletLayer);
      this.MapScreen.SetIsMapCheatsActive(true);
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.SetTimeControlModeLock(true);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.MapScreen.RemoveLayer(this.Layer);
      this._dataSource?.OnFinalize();
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._dataSource = (GameplayCheatsVM) null;
      this.MapScreen.SetIsMapCheatsActive(false);
      Campaign.Current.SetTimeControlModeLock(false);
    }

    private void HandleClose() => this.MapScreen.CloseGameplayCheats();

    protected override bool IsEscaped() => true;

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      this.HandleInput();
    }

    protected override void OnMenuModeTick(float dt)
    {
      base.OnMenuModeTick(dt);
      this.HandleInput();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this.HandleInput();
    }

    private void HandleInput()
    {
      if (!this.Layer.Input.IsHotKeyReleased("Exit"))
        return;
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource?.ExecuteClose();
    }

    private void InitializeKeyVisuals()
    {
      this._dataSource.SetCloseInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
    }
  }
}
