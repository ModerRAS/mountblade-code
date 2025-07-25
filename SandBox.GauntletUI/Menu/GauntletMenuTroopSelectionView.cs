// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuTroopSelectionView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.View.Menu;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TroopSelection;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuTroopSelectionView))]
  public class GauntletMenuTroopSelectionView : MenuView
  {
    private readonly Action<TroopRoster> _onDone;
    private readonly TroopRoster _fullRoster;
    private readonly TroopRoster _initialSelections;
    private readonly Func<CharacterObject, bool> _changeChangeStatusOfTroop;
    private readonly int _maxSelectableTroopCount;
    private readonly int _minSelectableTroopCount;
    private GauntletLayer _layerAsGauntletLayer;
    private GameMenuTroopSelectionVM _dataSource;
    private IGauntletMovie _movie;

    public GauntletMenuTroopSelectionView(
      TroopRoster fullRoster,
      TroopRoster initialSelections,
      Func<CharacterObject, bool> changeChangeStatusOfTroop,
      Action<TroopRoster> onDone,
      int maxSelectableTroopCount,
      int minSelectableTroopCount)
    {
      this._onDone = onDone;
      this._fullRoster = fullRoster;
      this._initialSelections = initialSelections;
      this._changeChangeStatusOfTroop = changeChangeStatusOfTroop;
      this._maxSelectableTroopCount = maxSelectableTroopCount;
      this._minSelectableTroopCount = minSelectableTroopCount;
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this._dataSource = new GameMenuTroopSelectionVM(this._fullRoster, this._initialSelections, this._changeChangeStatusOfTroop, new Action<TroopRoster>(this.OnDone), this._maxSelectableTroopCount, this._minSelectableTroopCount)
      {
        IsEnabled = true
      };
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      GauntletLayer gauntletLayer = new GauntletLayer(206);
      gauntletLayer.Name = "MenuTroopSelection";
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._movie = this._layerAsGauntletLayer.LoadMovie("GameMenuTroopSelection", (ViewModel) this._dataSource);
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._layerAsGauntletLayer);
      this.MenuViewContext.AddLayer(this.Layer);
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInHideoutTroopManage(true);
    }

    private void OnDone(TroopRoster obj)
    {
      MapScreen.Instance.SetIsInHideoutTroopManage(false);
      this.MenuViewContext.CloseTroopSelection();
      Action<TroopRoster> onDone = this._onDone;
      if (onDone == null)
        return;
      onDone.DynamicInvokeWithLog((object) obj);
    }

    protected override void OnFinalize()
    {
      this.Layer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus(this.Layer);
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (GameMenuTroopSelectionVM) null;
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this.MenuViewContext.RemoveLayer(this.Layer);
      this._movie = (IGauntletMovie) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      MapScreen.Instance.SetIsInHideoutTroopManage(false);
      base.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this._dataSource != null)
      {
        this._dataSource.IsFiveStackModifierActive = this.Layer.Input.IsHotKeyDown("FiveStackModifier");
        this._dataSource.IsEntireStackModifierActive = this.Layer.Input.IsHotKeyDown("EntireStackModifier");
      }
      ScreenLayer layer1 = this.Layer;
      if ((layer1 != null ? (layer1.Input.IsHotKeyPressed("Exit") ? 1 : 0) : 0) != 0)
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteCancel();
      }
      else
      {
        ScreenLayer layer2 = this.Layer;
        if ((layer2 != null ? (layer2.Input.IsHotKeyPressed("Confirm") ? 1 : 0) : 0) != 0 && this._dataSource.IsDoneEnabled)
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.ExecuteDone();
        }
        else
        {
          ScreenLayer layer3 = this.Layer;
          if ((layer3 != null ? (layer3.Input.IsHotKeyPressed("Reset") ? 1 : 0) : 0) != 0)
          {
            UISoundsHelper.PlayUISound("event:/ui/default");
            this._dataSource.ExecuteReset();
          }
        }
      }
      GameMenuTroopSelectionVM dataSource = this._dataSource;
      if ((dataSource != null ? (!dataSource.IsEnabled ? 1 : 0) : 0) == 0)
        return;
      this.MenuViewContext.CloseTroopSelection();
    }
  }
}
