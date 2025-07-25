// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapBattleSimulationView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.ViewModelCollection;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.ViewModelCollection;
using TaleWorlds.MountAndBlade.ViewModelCollection.Scoreboard;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (BattleSimulationMapView))]
  public class GauntletMapBattleSimulationView : MapView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private IGauntletMovie _gauntletMovie;
    private SPScoreboardVM _dataSource;
    private readonly BattleSimulation _battleSimulation;

    public GauntletMapBattleSimulationView(BattleSimulation battleSimulation)
    {
      this._battleSimulation = battleSimulation;
    }

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._dataSource = new SPScoreboardVM(this._battleSimulation);
      ((ScoreboardBaseVM) this._dataSource).Initialize((IMissionScreen) null, (Mission) null, new Action(this.MapState.EndBattleSimulation), (Action<bool>) null);
      this._dataSource.SetShortcuts(new ScoreboardHotkeys()
      {
        ShowMouseHotkey = (GameKey) null,
        ShowScoreboardHotkey = (GameKey) null,
        DoneInputKey = HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"),
        FastForwardKey = HotKeyManager.GetCategory("ScoreboardHotKeyCategory").GetHotKey("ToggleFastForward")
      });
      this.Layer = (ScreenLayer) new GauntletLayer(101);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("ScoreboardHotKeyCategory"));
      this._gauntletMovie = this._layerAsGauntletLayer.LoadMovie("SPScoreboard", (ViewModel) this._dataSource);
      ((ScoreboardBaseVM) this._dataSource).ExecutePlayAction();
      this.Layer.IsFocusLayer = true;
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.MapScreen.AddLayer(this.Layer);
      ScreenManager.TrySetFocus(this.Layer);
    }

    protected override void OnFinalize()
    {
      ((ViewModel) this._dataSource).OnFinalize();
      this.MapScreen.RemoveLayer(this.Layer);
      this.Layer.IsFocusLayer = false;
      this.Layer.InputRestrictions.ResetInputRestrictions();
      ScreenManager.TryLoseFocus(this.Layer);
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._gauntletMovie = (IGauntletMovie) null;
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this._dataSource == null || this.Layer == null)
        return;
      if (!this._dataSource.IsOver && this.Layer.Input.IsHotKeyReleased("ToggleFastForward"))
      {
        this._dataSource.IsFastForwarding = !this._dataSource.IsFastForwarding;
        ((ScoreboardBaseVM) this._dataSource).ExecuteFastForwardAction();
      }
      else
      {
        if (!this._dataSource.IsOver || !this._dataSource.ShowScoreboard || !this.Layer.Input.IsHotKeyPressed("Confirm"))
          return;
        ((ScoreboardBaseVM) this._dataSource).ExecuteQuitAction();
      }
    }
  }
}
