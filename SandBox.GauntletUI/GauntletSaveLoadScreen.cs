// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletSaveLoadScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View;
using SandBox.ViewModelCollection.SaveLoad;
using System;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  [OverrideView(typeof (SaveLoadScreen))]
  public class GauntletSaveLoadScreen : ScreenBase
  {
    private GauntletLayer _gauntletLayer;
    private SaveLoadVM _dataSource;
    private SpriteCategory _spriteCategory;
    private readonly bool _isSaving;

    public GauntletSaveLoadScreen(bool isSaving) => this._isSaving = isSaving;

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this._dataSource = new SaveLoadVM(this._isSaving, GameStateManager.Current.GameStates.FirstOrDefaultQ<TaleWorlds.Core.GameState>((Func<TaleWorlds.Core.GameState, bool>) (s => s is MapState)) != null);
      this._dataSource.SetDeleteInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Delete"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      if (Game.Current != null)
        Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._spriteCategory = spriteData.SpriteCategories["ui_saveload"];
      this._spriteCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.LoadMovie("SaveLoadScreen", (ViewModel) this._dataSource);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.IsFocusLayer = true;
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      if (!BannerlordConfig.ForceVSyncInMenus)
        return;
      Utilities.SetForceVsync(true);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this._dataSource.IsBusyWithAnAction)
        return;
      if (this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
      {
        this._dataSource.ExecuteDone();
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
      }
      else if (this._gauntletLayer.Input.IsHotKeyPressed("Confirm") && !this._gauntletLayer.IsFocusedOnInput())
      {
        this._dataSource.ExecuteLoadSave();
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
      }
      else
      {
        if (!this._gauntletLayer.Input.IsHotKeyPressed("Delete") || this._gauntletLayer.IsFocusedOnInput())
          return;
        this._dataSource.DeleteSelectedSave();
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
      }
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      if (Game.Current != null)
        Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer = (GauntletLayer) null;
      this._dataSource.OnFinalize();
      this._dataSource = (SaveLoadVM) null;
      this._spriteCategory.Unload();
      Utilities.SetForceVsync(false);
    }
  }
}
