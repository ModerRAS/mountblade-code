// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletCheatView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.ViewModelCollection.Map.Cheat;
using System;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (MissionCheatView))]
  public class MissionGauntletCheatView : MissionCheatView
  {
    private GauntletLayer _gauntletLayer;
    private GameplayCheatsVM _dataSource;
    private bool _isActive;

    public override void OnMissionScreenFinalize()
    {
      base.OnMissionScreenFinalize();
      this.FinalizeScreen();
    }

    public override bool GetIsCheatsAvailable() => true;

    public override void InitializeScreen()
    {
      if (this._isActive)
        return;
      this._isActive = true;
      this._dataSource = new GameplayCheatsVM(new Action(((MissionCheatView) this).FinalizeScreen), GameplayCheatsManager.GetMissionCheatList());
      this.InitializeKeyVisuals();
      this._gauntletLayer = new GauntletLayer(4500);
      this._gauntletLayer.LoadMovie("MapCheats", (ViewModel) this._dataSource);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
    }

    public override void FinalizeScreen()
    {
      if (!this._isActive)
        return;
      this._isActive = false;
      this.MissionScreen.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._dataSource?.OnFinalize();
      this._gauntletLayer = (GauntletLayer) null;
      this._dataSource = (GameplayCheatsVM) null;
    }

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      if (!this._isActive)
        return;
      this.HandleInput();
    }

    private void HandleInput()
    {
      if (!this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
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
