// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapEscapeMenuView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System.Collections.Generic;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapEscapeMenuView))]
  public class GauntletMapEscapeMenuView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;
    private readonly List<EscapeMenuItemVM> _menuItems;

    public GauntletMapEscapeMenuView(List<EscapeMenuItemVM> items) => this._menuItems = items;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this._menuItems, (TextObject) null);
      GauntletLayer gauntletLayer = new GauntletLayer(4400);
      gauntletLayer.IsFocusLayer = true;
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._escapeMenuMovie = this._layerAsGauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.MapScreen.AddLayer(this.Layer);
      this.MapScreen.PauseAmbientSounds();
      ScreenManager.TrySetFocus(this.Layer);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (!this.Layer.Input.IsHotKeyReleased("ToggleEscapeMenu") && !this.Layer.Input.IsHotKeyReleased("Exit"))
        return;
      MapScreen.Instance.CloseEscapeMenu();
    }

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      if (!this.Layer.Input.IsHotKeyReleased("ToggleEscapeMenu") && !this.Layer.Input.IsHotKeyReleased("Exit"))
        return;
      MapScreen.Instance.CloseEscapeMenu();
    }

    protected override bool IsEscaped() => this.Layer.Input.IsHotKeyReleased("ToggleEscapeMenu");

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.Layer.InputRestrictions.ResetInputRestrictions();
      this.MapScreen.RemoveLayer(this.Layer);
      this.MapScreen.RestartAmbientSounds();
      ScreenManager.TryLoseFocus(this.Layer);
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
    }
  }
}
