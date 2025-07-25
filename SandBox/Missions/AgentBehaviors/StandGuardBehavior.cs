// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.StandGuardBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class StandGuardBehavior : AgentBehavior
  {
    private UsableMachine _oldStandPoint;
    private UsableMachine _standPoint;
    private readonly MissionAgentHandler _missionAgentHandler;

    public StandGuardBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this.OwnerAgent.CurrentWatchState == Agent.WatchState.Patrolling)
      {
        if (!(this._standPoint == null | isSimulation))
          return;
        UsableMachine usableMachine = this._oldStandPoint ?? this._missionAgentHandler.FindUnusedPointWithTagForAgent(this.OwnerAgent, this.Navigator.SpecialTargetTag);
        if (usableMachine == null)
          return;
        this._oldStandPoint = (UsableMachine) null;
        this._standPoint = usableMachine;
        this.Navigator.SetTarget(this._standPoint);
      }
      else
      {
        if (this._standPoint == null)
          return;
        this._oldStandPoint = this._standPoint;
        this.Navigator.SetTarget((UsableMachine) null);
        this._standPoint = (UsableMachine) null;
      }
    }

    protected override void OnDeactivate()
    {
      this.Navigator.ClearTarget();
      this._standPoint = (UsableMachine) null;
    }

    public override float GetAvailability(bool isSimulation) => 1f;

    public override string GetDebugInfo() => "Guard stand";

    private enum GuardState
    {
      StandIdle,
      StandAttention,
      StandCautious,
      GotToStandPoint,
    }
  }
}
