// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuOverlayBaseView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.View.Menu;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuOverlayBaseView))]
  public class GauntletMenuOverlayBaseView : MenuView
  {
    private GameMenuOverlay _overlayDataSource;
    private GauntletLayer _layerAsGauntletLayer;
    private bool _isContextMenuEnabled;

    protected override void OnInitialize()
    {
      this._overlayDataSource = GameMenuOverlay.GetOverlay(Campaign.Current.GameMenuManager.GetMenuOverlayType(this.MenuContext));
      this.Layer = (ScreenLayer) new GauntletLayer(200);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._layerAsGauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions(false);
      this.MenuViewContext.AddLayer(this.Layer);
      if (this._overlayDataSource is EncounterMenuOverlayVM)
        this._layerAsGauntletLayer.LoadMovie("EncounterOverlay", (ViewModel) this._overlayDataSource);
      else if (this._overlayDataSource is SettlementMenuOverlayVM)
        this._layerAsGauntletLayer.LoadMovie("SettlementOverlay", (ViewModel) this._overlayDataSource);
      else if (this._overlayDataSource is ArmyMenuOverlayVM)
        Debug.FailedAssert("Trying to open army overlay in menu. Should be opened in map overlay", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\Menu\\GauntletMenuOverlayBaseView.cs", nameof (OnInitialize), 47);
      else
        Debug.FailedAssert("Game menu overlay not supported in gauntlet overlay", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\Menu\\GauntletMenuOverlayBaseView.cs", nameof (OnInitialize), 51);
      base.OnInitialize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this._overlayDataSource?.OnFrameTick(dt);
      if (ScreenManager.TopScreen is MapScreen && this._overlayDataSource != null)
        this._overlayDataSource.IsInfoBarExtended = ScreenManager.TopScreen is MapScreen topScreen && topScreen.IsBarExtended;
      if (!this._isContextMenuEnabled && this._overlayDataSource.IsContextMenuEnabled)
      {
        this._isContextMenuEnabled = true;
        this.Layer.IsFocusLayer = true;
        ScreenManager.TrySetFocus(this.Layer);
      }
      else if (this._isContextMenuEnabled && !this._overlayDataSource.IsContextMenuEnabled)
      {
        this._isContextMenuEnabled = false;
        this.Layer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus(this.Layer);
      }
      if (!this._isContextMenuEnabled || !this.Layer.Input.IsHotKeyReleased("Exit"))
        return;
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._overlayDataSource.IsContextMenuEnabled = false;
    }

    protected override void OnHourlyTick()
    {
      base.OnHourlyTick();
      this._overlayDataSource?.Refresh();
    }

    protected override void OnOverlayTypeChange(GameOverlays.MenuOverlayType newType)
    {
      base.OnOverlayTypeChange(newType);
      this._overlayDataSource?.UpdateOverlayType(newType);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._overlayDataSource?.Refresh();
    }

    protected override void OnFinalize()
    {
      this.MenuViewContext.RemoveLayer(this.Layer);
      ((ViewModel) this._overlayDataSource).OnFinalize();
      this._overlayDataSource = (GameMenuOverlay) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      base.OnFinalize();
    }
  }
}
