// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionAmbushIntroView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.AgentControllers;
using SandBox.Missions.MissionLogics;
using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionAmbushIntroView : MissionView
  {
    private AmbushMissionController _ambushMissionController;
    private AmbushIntroLogic _ambushIntroLogic;
    private bool _isPlayerAmbusher;
    private MatrixFrame _cameraStart;
    private MatrixFrame _cameraEnd;
    private float _cameraMoveSpeed = 0.1f;
    private float _cameraLerping;
    private Camera _camera;
    public Action IntroEndAction;
    private bool _started;
    private bool _firstTick = true;

    public override void AfterStart()
    {
      base.AfterStart();
      this._ambushMissionController = this.Mission.GetMissionBehavior<AmbushMissionController>();
      this._ambushIntroLogic = this.Mission.GetMissionBehavior<AmbushIntroLogic>();
      this._isPlayerAmbusher = this._ambushMissionController.IsPlayerAmbusher;
      this._cameraStart = this.Mission.Scene.FindEntityWithTag(this._isPlayerAmbusher ? "intro_camera_attacker_start" : "intro_camera_defender_start").GetGlobalFrame();
      this._cameraEnd = this.Mission.Scene.FindEntityWithTag(this._isPlayerAmbusher ? "intro_camera_attacker_end" : "intro_camera_defender_end").GetGlobalFrame();
      this.IntroEndAction = new Action(this._ambushIntroLogic.OnIntroEnded);
      this._ambushIntroLogic.StartIntroAction = new Action(this.StartIntro);
    }

    public void StartIntro()
    {
      this._started = true;
      this._camera = Camera.CreateCamera();
      this._camera.FillParametersFrom(this.MissionScreen.CombatCamera);
      this._camera.Frame = this._cameraStart;
      this.MissionScreen.CustomCamera = this._camera;
    }

    public override void OnMissionTick(float dt)
    {
      if (this._firstTick)
        this._firstTick = false;
      if (!this._started)
        return;
      if ((double) this._cameraLerping < 1.0)
      {
        MatrixFrame matrixFrame;
        matrixFrame.origin = MBMath.Lerp(this._cameraStart.origin, this._cameraEnd.origin, this._cameraLerping, 1E-05f);
        matrixFrame.rotation = MBMath.Lerp(ref this._cameraStart.rotation, ref this._cameraEnd.rotation, this._cameraLerping, 1E-05f);
        this._camera.Frame = matrixFrame;
        this._cameraLerping += this._cameraMoveSpeed * dt;
      }
      else
      {
        this._camera.Frame = this._cameraEnd;
        this.CleanUp();
      }
    }

    private void CleanUp()
    {
      this.MissionScreen.CustomCamera = (Camera) null;
      this.IntroEndAction();
      this.Mission.RemoveMissionBehavior((MissionBehavior) this);
    }
  }
}
