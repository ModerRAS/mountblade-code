// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletTournamentView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.Tournaments.MissionLogics;
using SandBox.View.Missions.Tournaments;
using SandBox.ViewModelCollection.Tournament;
using System;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (MissionTournamentView))]
  public class MissionGauntletTournamentView : MissionView
  {
    private TournamentBehavior _behavior;
    private Camera _customCamera;
    private bool _viewEnabled = true;
    private IGauntletMovie _gauntletMovie;
    private GauntletLayer _gauntletLayer;
    private TournamentVM _dataSource;

    public MissionGauntletTournamentView() => this.ViewOrderPriority = 48;

    public override void OnMissionScreenInitialize()
    {
      base.OnMissionScreenInitialize();
      this._dataSource = new TournamentVM(new Action(this.DisableUi), this._behavior);
      this._gauntletLayer = new GauntletLayer(this.ViewOrderPriority);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._gauntletMovie = this._gauntletLayer.LoadMovie("Tournament", (ViewModel) this._dataSource);
      this.MissionScreen.CustomCamera = this._customCamera;
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
    }

    public override void OnMissionScreenFinalize()
    {
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
      this._gauntletMovie = (IGauntletMovie) null;
      this._gauntletLayer = (GauntletLayer) null;
      this._dataSource.OnFinalize();
      this._dataSource = (TournamentVM) null;
      base.OnMissionScreenFinalize();
    }

    public override void AfterStart()
    {
      this._behavior = this.Mission.GetMissionBehavior<TournamentBehavior>();
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("camera_instance");
      this._customCamera = Camera.CreateCamera();
      Vec3 vec3 = new Vec3();
      Camera customCamera = this._customCamera;
      ref Vec3 local = ref vec3;
      entityWithTag.GetCameraParamsFromCameraScript(customCamera, ref local);
    }

    public override void OnMissionTick(float dt)
    {
      if (this._behavior == null)
        return;
      if (this._gauntletLayer.IsFocusLayer && this._dataSource.IsCurrentMatchActive)
      {
        this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
        this._gauntletLayer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      }
      else if (!this._gauntletLayer.IsFocusLayer && !this._dataSource.IsCurrentMatchActive)
      {
        this._gauntletLayer.InputRestrictions.SetInputRestrictions();
        this._gauntletLayer.IsFocusLayer = true;
        ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      }
      if (this._dataSource.IsBetWindowEnabled)
      {
        if (this._gauntletLayer.Input.IsHotKeyReleased("Confirm"))
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.ExecuteBet();
          this._dataSource.IsBetWindowEnabled = false;
        }
        else if (this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.IsBetWindowEnabled = false;
        }
      }
      if (!this._viewEnabled && (this._behavior.LastMatch != null && this._behavior.CurrentMatch == null || this._behavior.CurrentMatch.IsReady))
      {
        this._dataSource.Refresh();
        this.ShowUi();
      }
      if (!this._viewEnabled && this._dataSource.CurrentMatch.IsValid)
      {
        TournamentMatch currentMatch = this._behavior.CurrentMatch;
        if ((currentMatch != null ? (currentMatch.State == TournamentMatch.MatchState.Started ? 1 : 0) : 0) != 0)
          this._dataSource.CurrentMatch.RefreshActiveMatch();
      }
      if (!this._dataSource.IsOver || !this._viewEnabled || this.DebugInput.IsControlDown() || !this.DebugInput.IsHotKeyPressed("ShowHighlightsSummary"))
        return;
      this.Mission.GetMissionBehavior<HighlightsController>()?.ShowSummary();
    }

    private void DisableUi()
    {
      if (!this._viewEnabled)
        return;
      this.MissionScreen.UpdateFreeCamera(this._customCamera.Frame);
      this.MissionScreen.CustomCamera = (Camera) null;
      this._viewEnabled = false;
      this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
    }

    private void ShowUi()
    {
      if (this._viewEnabled)
        return;
      this.MissionScreen.CustomCamera = this._customCamera;
      this._viewEnabled = true;
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
    }

    public override bool IsOpeningEscapeMenuOnFocusChangeAllowed() => !this._viewEnabled;

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      base.OnAgentRemoved(affectedAgent, affectorAgent, agentState, killingBlow);
      this._dataSource.OnAgentRemoved(affectedAgent);
    }

    public override void OnPhotoModeActivated()
    {
      base.OnPhotoModeActivated();
      this._gauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    public override void OnPhotoModeDeactivated()
    {
      base.OnPhotoModeDeactivated();
      this._gauntletLayer.UIContext.ContextAlpha = 1f;
    }
  }
}
