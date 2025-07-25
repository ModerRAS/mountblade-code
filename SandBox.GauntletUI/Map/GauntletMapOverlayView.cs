// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapOverlayView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapOverlayView))]
  public class GauntletMapOverlayView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private GameMenuOverlay _overlayDataSource;
    private readonly GameOverlays.MapOverlayType _type;
    private IGauntletMovie _movie;
    private bool _isContextMenuEnabled;
    private GauntletLayer _armyManagementLayer;
    private SpriteCategory _armyManagementCategory;
    private ArmyManagementVM _armyManagementDatasource;
    private IGauntletMovie _gauntletArmyManagementMovie;
    private CampaignTimeControlMode _timeControlModeBeforeArmyManagementOpened;

    public GauntletMapOverlayView(GameOverlays.MapOverlayType type) => this._type = type;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._overlayDataSource = this.GetOverlay(this._type);
      this.Layer = (ScreenLayer) new GauntletLayer(201);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.InputRestrictions.SetInputRestrictions(false);
      if (this._type == GameOverlays.MapOverlayType.Army)
      {
        this._movie = this._layerAsGauntletLayer.LoadMovie("ArmyOverlay", (ViewModel) this._overlayDataSource);
        (this._overlayDataSource as ArmyMenuOverlayVM).OpenArmyManagement = new Action(this.OpenArmyManagement);
      }
      else
        Debug.FailedAssert("This kind of overlay not supported in gauntlet", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\Map\\GauntletMapOverlayView.cs", nameof (CreateLayout), 63);
      this.MapScreen.AddLayer(this.Layer);
    }

    public GameMenuOverlay GetOverlay(GameOverlays.MapOverlayType mapOverlayType)
    {
      if (mapOverlayType == GameOverlays.MapOverlayType.Army)
        return (GameMenuOverlay) new ArmyMenuOverlayVM();
      Debug.FailedAssert("Game menu overlay: " + mapOverlayType.ToString() + " could not be found", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\Map\\GauntletMapOverlayView.cs", nameof (GetOverlay), 76);
      return (GameMenuOverlay) null;
    }

    protected override void OnArmyLeft() => this.MapScreen.RemoveArmyOverlay();

    protected override void OnFinalize()
    {
      if (this._armyManagementLayer != null)
        this.CloseArmyManagement();
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      if (this._gauntletArmyManagementMovie != null)
        this._layerAsGauntletLayer.ReleaseMovie(this._gauntletArmyManagementMovie);
      this.MapScreen.RemoveLayer(this.Layer);
      this._movie = (IGauntletMovie) null;
      this._overlayDataSource = (GameMenuOverlay) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this._armyManagementCategory?.Unload();
      base.OnFinalize();
    }

    protected override void OnHourlyTick()
    {
      base.OnHourlyTick();
      this._overlayDataSource?.HourlyTick();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (ScreenManager.TopScreen is MapScreen topScreen && this._overlayDataSource != null)
        this._overlayDataSource.IsInfoBarExtended = topScreen.IsBarExtended;
      this._overlayDataSource?.OnFrameTick(dt);
    }

    protected override bool IsEscaped()
    {
      if (this._armyManagementDatasource == null)
        return false;
      this._armyManagementDatasource.ExecuteCancel();
      return true;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._overlayDataSource?.Refresh();
    }

    protected override void OnResume()
    {
      base.OnResume();
      this._overlayDataSource?.Refresh();
    }

    protected override void OnMapScreenUpdate(float dt)
    {
      base.OnMapScreenUpdate(dt);
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
      if (this._isContextMenuEnabled && this.Layer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._overlayDataSource.IsContextMenuEnabled = false;
      }
      this.HandleArmyManagementInput();
    }

    protected override void OnMenuModeTick(float dt)
    {
      base.OnMenuModeTick(dt);
      if (ScreenManager.TopScreen is MapScreen topScreen && this._overlayDataSource != null)
        this._overlayDataSource.IsInfoBarExtended = topScreen.IsBarExtended;
      this._overlayDataSource?.OnFrameTick(dt);
    }

    private void OpenArmyManagement()
    {
      this._armyManagementDatasource = new ArmyManagementVM(new Action(this.CloseArmyManagement));
      this._armyManagementDatasource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._armyManagementDatasource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._armyManagementDatasource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._armyManagementDatasource.SetRemoveInputKey(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory").GetHotKey("RemoveParty"));
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._armyManagementCategory = spriteData.SpriteCategories["ui_armymanagement"];
      this._armyManagementCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._armyManagementLayer = new GauntletLayer(300);
      this._gauntletArmyManagementMovie = this._armyManagementLayer.LoadMovie("ArmyManagement", (ViewModel) this._armyManagementDatasource);
      this._armyManagementLayer.InputRestrictions.SetInputRestrictions();
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory"));
      this._armyManagementLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._armyManagementLayer);
      this.MapScreen.AddLayer((ScreenLayer) this._armyManagementLayer);
      this._timeControlModeBeforeArmyManagementOpened = Campaign.Current.TimeControlMode;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.SetTimeControlModeLock(true);
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInArmyManagement(true);
    }

    private void CloseArmyManagement()
    {
      if (this._armyManagementLayer != null && this._gauntletArmyManagementMovie != null)
      {
        this._armyManagementLayer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus((ScreenLayer) this._armyManagementLayer);
        this._armyManagementLayer.InputRestrictions.ResetInputRestrictions();
        this._armyManagementLayer.ReleaseMovie(this._gauntletArmyManagementMovie);
        this.MapScreen.RemoveLayer((ScreenLayer) this._armyManagementLayer);
      }
      ((ViewModel) this._armyManagementDatasource)?.OnFinalize();
      this._gauntletArmyManagementMovie = (IGauntletMovie) null;
      this._armyManagementDatasource = (ArmyManagementVM) null;
      this._armyManagementLayer = (GauntletLayer) null;
      this._overlayDataSource?.Refresh();
      if (ScreenManager.TopScreen is MapScreen topScreen)
        topScreen.SetIsInArmyManagement(false);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.MapWindow));
      Campaign.Current.SetTimeControlModeLock(false);
      Campaign.Current.TimeControlMode = this._timeControlModeBeforeArmyManagementOpened;
    }

    private void HandleArmyManagementInput()
    {
      if (this._armyManagementLayer == null || this._armyManagementDatasource == null)
        return;
      if (this._armyManagementLayer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementDatasource.ExecuteCancel();
      }
      else if (this._armyManagementLayer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementDatasource.ExecuteDone();
      }
      else if (this._armyManagementLayer.Input.IsHotKeyReleased("Reset"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementDatasource.ExecuteReset();
      }
      else
      {
        if (!this._armyManagementLayer.Input.IsHotKeyReleased("RemoveParty") || this._armyManagementDatasource.FocusedItem == null)
          return;
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementDatasource.FocusedItem.ExecuteAction();
      }
    }
  }
}
