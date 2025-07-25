// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionAmbushView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.AgentControllers;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.SiegeWeapon;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionAmbushView : MissionView
  {
    private AmbushMissionController _ambushMissionController;
    private MissionDeploymentBoundaryMarker _deploymentBoundaryMarkerHandler;
    private MissionAmbushDeploymentView _ambushDeploymentView;
    private bool _firstTick = true;

    public override void AfterStart()
    {
      base.AfterStart();
      this._ambushMissionController = this.Mission.GetMissionBehavior<AmbushMissionController>();
      this._deploymentBoundaryMarkerHandler = this.Mission.GetMissionBehavior<MissionDeploymentBoundaryMarker>();
      this._ambushMissionController.PlayerDeploymentFinish += new AmbushMissionEventDelegate(this.OnPlayerDeploymentFinish);
      this._ambushMissionController.IntroFinish += new AmbushMissionEventDelegate(this.OnIntroFinish);
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._firstTick)
        return;
      this._firstTick = false;
      if (!this._ambushMissionController.IsPlayerAmbusher)
        return;
      this._ambushDeploymentView = new MissionAmbushDeploymentView();
      this.MissionScreen.AddMissionView((MissionView) this._ambushDeploymentView);
      this._ambushDeploymentView.OnBehaviorInitialize();
      this._ambushDeploymentView.EarlyStart();
      this._ambushDeploymentView.AfterStart();
    }

    public void OnIntroFinish()
    {
      if (this._deploymentBoundaryMarkerHandler != null)
        this.Mission.RemoveMissionBehavior((MissionBehavior) this._deploymentBoundaryMarkerHandler);
      this.MissionScreen.AddMissionView(ViewCreator.CreateMissionAgentStatusUIHandler());
      this.MissionScreen.AddMissionView(ViewCreator.CreateMissionMainAgentEquipmentController());
      this.MissionScreen.AddMissionView(ViewCreator.CreateMissionMainAgentCheerBarkControllerView());
      this.MissionScreen.AddMissionView(ViewCreator.CreateMissionAgentLockVisualizerView());
      this.MissionScreen.AddMissionView(ViewCreator.CreateMissionBoundaryCrossingView());
      this.MissionScreen.AddMissionView((MissionView) new MissionBoundaryWallView());
      this.MissionScreen.AddMissionView((MissionView) new MissionMainAgentController());
      this.MissionScreen.AddMissionView((MissionView) new MissionCrosshair());
      this.MissionScreen.AddMissionView((MissionView) new RangedSiegeWeaponViewController());
    }

    public void OnPlayerDeploymentFinish()
    {
      if (!this._ambushMissionController.IsPlayerAmbusher)
        return;
      this.Mission.RemoveMissionBehavior((MissionBehavior) this._ambushDeploymentView);
    }
  }
}
