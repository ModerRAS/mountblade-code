// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.PatrollingGuardBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class PatrollingGuardBehavior : AgentBehavior
  {
    private readonly MissionAgentHandler _missionAgentHandler;
    private UsableMachine _target;

    public PatrollingGuardBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._target == null)
      {
        UsableMachine usableMachine = this.Navigator.SpecialTargetTag == null || this.Navigator.SpecialTargetTag.IsEmpty<char>() ? this._missionAgentHandler.FindUnusedPointWithTagForAgent(this.OwnerAgent, "npc_common") : this._missionAgentHandler.FindUnusedPointWithTagForAgent(this.OwnerAgent, this.Navigator.SpecialTargetTag);
        if (usableMachine == null)
          return;
        this._target = usableMachine;
        this.Navigator.SetTarget(this._target);
      }
      else
      {
        if (this.Navigator.TargetUsableMachine != null)
          return;
        this.Navigator.SetTarget(this._target);
      }
    }

    public override float GetAvailability(bool isSimulation)
    {
      return this._missionAgentHandler.GetAllUsablePointsWithTag(this.Navigator.SpecialTargetTag).Count <= 0 ? 0.0f : 1f;
    }

    protected override void OnDeactivate()
    {
      this._target = (UsableMachine) null;
      this.Navigator.ClearTarget();
    }

    public override string GetDebugInfo() => "Guard patrol";
  }
}
