// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionHideoutCinematicView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.MissionLogics;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionHideoutCinematicView : MissionView
  {
    private bool _isInitialized;
    private HideoutCinematicController _cinematicLogicController;
    private MissionCameraFadeView _cameraFadeViewController;
    private HideoutCinematicController.HideoutCinematicState _currentState;
    private HideoutCinematicController.HideoutCinematicState _nextState;
    private Camera _camera;
    private MatrixFrame _cameraFrame = MatrixFrame.Identity;
    private readonly Vec3 _cameraOffset = new Vec3(0.3f, 0.3f, 1.2f);
    private Vec3 _cameraMoveDir = Vec3.Forward;
    private float _cameraSpeed;

    public override void OnMissionScreenTick(float dt)
    {
      base.OnMissionScreenTick(dt);
      if (!this._isInitialized)
      {
        this.InitializeView();
      }
      else
      {
        if (Game.Current.GameStateManager.ActiveStateDisabledByUser || this._currentState != HideoutCinematicController.HideoutCinematicState.Cinematic && this._nextState != HideoutCinematicController.HideoutCinematicState.Cinematic)
          return;
        this.UpdateCamera(dt);
      }
    }

    private void SetCameraFrame(Vec3 position, Vec3 direction, out MatrixFrame cameraFrame)
    {
      cameraFrame.origin = position;
      cameraFrame.rotation.s = Vec3.Side;
      cameraFrame.rotation.f = Vec3.Up;
      cameraFrame.rotation.u = -direction;
      cameraFrame.rotation.Orthonormalize();
    }

    private void SetupCamera()
    {
      this._camera = Camera.CreateCamera();
      Camera combatCamera = this.MissionScreen.CombatCamera;
      if ((NativeObject) combatCamera != (NativeObject) null)
        this._camera.FillParametersFrom(combatCamera);
      else
        Debug.FailedAssert("Combat camera is null.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Missions\\MissionHideoutCinematicView.cs", nameof (SetupCamera), 66);
      Vec3 eyePosition1;
      this._cinematicLogicController.GetBossStandingEyePosition(out eyePosition1);
      Vec3 eyePosition2;
      this._cinematicLogicController.GetPlayerStandingEyePosition(out eyePosition2);
      Vec3 direction1 = (eyePosition1 - eyePosition2).NormalizedCopy();
      float innerRadius;
      float outerRadius;
      float walkDistance;
      this._cinematicLogicController.GetScenePrefabParameters(out innerRadius, out outerRadius, out walkDistance);
      this._cameraSpeed = (float) ((double) innerRadius + (double) outerRadius + 1.5 * (double) walkDistance) / MathF.Max(this._cinematicLogicController.CinematicDuration, 0.1f);
      this._cameraMoveDir = -direction1;
      this.SetCameraFrame(eyePosition1, direction1, out this._cameraFrame);
      Vec3 position = this._cameraFrame.origin + this._cameraOffset.x * this._cameraFrame.rotation.s + this._cameraOffset.y * this._cameraFrame.rotation.f + this._cameraOffset.z * this._cameraFrame.rotation.u;
      Vec3 direction2 = (eyePosition1 - position).NormalizedCopy();
      this.SetCameraFrame(position, direction2, out this._cameraFrame);
      this._camera.Frame = this._cameraFrame;
      this.MissionScreen.CustomCamera = this._camera;
    }

    private void UpdateCamera(float dt)
    {
      Vec3 position = this._cameraFrame.origin + this._cameraMoveDir * this._cameraSpeed * dt;
      Vec3 eyePosition;
      this._cinematicLogicController.GetBossStandingEyePosition(out eyePosition);
      Vec3 direction = (eyePosition - position).NormalizedCopy();
      this.SetCameraFrame(position, direction, out this._cameraFrame);
      this._camera.Frame = this._cameraFrame;
    }

    private void ReleaseCamera()
    {
      this.MissionScreen.UpdateFreeCamera(this.MissionScreen.CustomCamera.Frame);
      this.MissionScreen.CustomCamera = (Camera) null;
      this._camera.ReleaseCamera();
    }

    private void OnCinematicStateChanged(
      HideoutCinematicController.HideoutCinematicState state)
    {
      if (!this._isInitialized)
        return;
      this._currentState = state;
      if (this._currentState == HideoutCinematicController.HideoutCinematicState.PreCinematic)
      {
        this.SetupCamera();
      }
      else
      {
        if (this._currentState != HideoutCinematicController.HideoutCinematicState.PostCinematic)
          return;
        this.ReleaseCamera();
      }
    }

    private void OnCinematicTransition(
      HideoutCinematicController.HideoutCinematicState nextState,
      float duration)
    {
      if (!this._isInitialized)
        return;
      switch (nextState)
      {
        case HideoutCinematicController.HideoutCinematicState.InitialFadeOut:
        case HideoutCinematicController.HideoutCinematicState.PostCinematic:
          this._cameraFadeViewController.BeginFadeOut(duration);
          break;
        case HideoutCinematicController.HideoutCinematicState.Cinematic:
        case HideoutCinematicController.HideoutCinematicState.Completed:
          this._cameraFadeViewController.BeginFadeIn(duration);
          break;
      }
      this._nextState = nextState;
    }

    private void InitializeView()
    {
      this._cinematicLogicController = this.Mission.GetMissionBehavior<HideoutCinematicController>();
      this._cameraFadeViewController = this.Mission.GetMissionBehavior<MissionCameraFadeView>();
      this._isInitialized = this._cinematicLogicController != null && this._cameraFadeViewController != null;
      this._cinematicLogicController?.SetStateTransitionCallback(new HideoutCinematicController.OnHideoutCinematicStateChanged(this.OnCinematicStateChanged), new HideoutCinematicController.OnHideoutCinematicTransition(this.OnCinematicTransition));
    }
  }
}
