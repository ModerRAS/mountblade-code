// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.ScriptBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class ScriptBehavior : AgentBehavior
  {
    private UsableMachine _targetUsableMachine;
    private Agent _targetAgent;
    private WorldFrame _targetFrame;
    private ScriptBehavior.State _state;
    private bool _sentToTarget;
    private ScriptBehavior.SelectTargetDelegate _selectTargetDelegate;
    private ScriptBehavior.OnTargetReachedDelegate _onTargetReachedDelegate;

    public ScriptBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
    }

    public static void AddUsableMachineTarget(Agent ownerAgent, UsableMachine targetUsableMachine)
    {
      DailyBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      ScriptBehavior scriptBehavior = behaviorGroup.GetBehavior<ScriptBehavior>() ?? behaviorGroup.AddBehavior<ScriptBehavior>();
      int num = behaviorGroup.ScriptedBehavior != scriptBehavior ? 1 : 0;
      scriptBehavior._targetUsableMachine = targetUsableMachine;
      scriptBehavior._state = ScriptBehavior.State.GoToUsableMachine;
      scriptBehavior._sentToTarget = false;
      if (num == 0)
        return;
      behaviorGroup.SetScriptedBehavior<ScriptBehavior>();
    }

    public static void AddAgentTarget(Agent ownerAgent, Agent targetAgent)
    {
      DailyBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      ScriptBehavior scriptBehavior = behaviorGroup.GetBehavior<ScriptBehavior>() ?? behaviorGroup.AddBehavior<ScriptBehavior>();
      int num = behaviorGroup.ScriptedBehavior != scriptBehavior ? 1 : 0;
      scriptBehavior._targetAgent = targetAgent;
      scriptBehavior._state = ScriptBehavior.State.GoToAgent;
      scriptBehavior._sentToTarget = false;
      if (num == 0)
        return;
      behaviorGroup.SetScriptedBehavior<ScriptBehavior>();
    }

    public static void AddWorldFrameTarget(Agent ownerAgent, WorldFrame targetWorldFrame)
    {
      DailyBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      ScriptBehavior scriptBehavior = behaviorGroup.GetBehavior<ScriptBehavior>() ?? behaviorGroup.AddBehavior<ScriptBehavior>();
      int num = behaviorGroup.ScriptedBehavior != scriptBehavior ? 1 : 0;
      scriptBehavior._targetFrame = targetWorldFrame;
      scriptBehavior._state = ScriptBehavior.State.GoToTargetFrame;
      scriptBehavior._sentToTarget = false;
      if (num == 0)
        return;
      behaviorGroup.SetScriptedBehavior<ScriptBehavior>();
    }

    public static void AddTargetWithDelegate(
      Agent ownerAgent,
      ScriptBehavior.SelectTargetDelegate selectTargetDelegate,
      ScriptBehavior.OnTargetReachedDelegate onTargetReachedDelegate)
    {
      DailyBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      ScriptBehavior scriptBehavior = behaviorGroup.GetBehavior<ScriptBehavior>() ?? behaviorGroup.AddBehavior<ScriptBehavior>();
      int num = behaviorGroup.ScriptedBehavior != scriptBehavior ? 1 : 0;
      scriptBehavior._selectTargetDelegate = selectTargetDelegate;
      scriptBehavior._onTargetReachedDelegate = onTargetReachedDelegate;
      scriptBehavior._state = ScriptBehavior.State.NoTarget;
      scriptBehavior._sentToTarget = false;
      if (num == 0)
        return;
      behaviorGroup.SetScriptedBehavior<ScriptBehavior>();
    }

    public bool IsNearTarget(Agent targetAgent)
    {
      if (this._targetAgent != targetAgent)
        return false;
      return this._state == ScriptBehavior.State.NearAgent || this._state == ScriptBehavior.State.NearStationaryTarget;
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._state == ScriptBehavior.State.NoTarget)
      {
        if (this._selectTargetDelegate != null)
        {
          this.SearchForNewTarget();
        }
        else
        {
          if (this.BehaviorGroup.ScriptedBehavior != this)
            return;
          this.BehaviorGroup.DisableScriptedBehavior();
          return;
        }
      }
      switch (this._state)
      {
        case ScriptBehavior.State.GoToUsableMachine:
          if (!this._sentToTarget)
          {
            this.Navigator.SetTarget(this._targetUsableMachine);
            this._sentToTarget = true;
            break;
          }
          if (!this.OwnerAgent.IsUsingGameObject || (double) this.OwnerAgent.Position.DistanceSquared(this._targetUsableMachine.GameEntity.GetGlobalFrame().origin) >= 1.0)
            break;
          if (this.CheckForSearchNewTarget(ScriptBehavior.State.NearStationaryTarget))
          {
            this.OwnerAgent.StopUsingGameObject(false);
            break;
          }
          this.RemoveTargets();
          break;
        case ScriptBehavior.State.GoToAgent:
          float distanceToUsable = this.OwnerAgent.GetInteractionDistanceToUsable((IUsable) this._targetAgent);
          if ((double) this.OwnerAgent.Position.DistanceSquared(this._targetAgent.Position) < (double) distanceToUsable * (double) distanceToUsable)
          {
            if (this.CheckForSearchNewTarget(ScriptBehavior.State.NearAgent))
              break;
            this.Navigator.SetTargetFrame(this.OwnerAgent.GetWorldPosition(), this.OwnerAgent.Frame.rotation.f.AsVec2.RotationInRadians, rotationThreshold: 1f);
            this.RemoveTargets();
            break;
          }
          this.Navigator.SetTargetFrame(this._targetAgent.GetWorldPosition(), this._targetAgent.Frame.rotation.f.AsVec2.RotationInRadians, rotationThreshold: 1f);
          break;
        case ScriptBehavior.State.GoToTargetFrame:
          if (!this._sentToTarget)
          {
            this.Navigator.SetTargetFrame(this._targetFrame.Origin, this._targetFrame.Rotation.f.AsVec2.RotationInRadians, rotationThreshold: 1f, flags: Agent.AIScriptedFrameFlags.DoNotRun);
            this._sentToTarget = true;
            break;
          }
          if (!this.Navigator.IsTargetReached() || this.CheckForSearchNewTarget(ScriptBehavior.State.NearStationaryTarget))
            break;
          this.RemoveTargets();
          break;
        case ScriptBehavior.State.NearAgent:
          if ((double) this.OwnerAgent.Position.DistanceSquared(this._targetAgent.Position) >= 1.0)
          {
            this._state = ScriptBehavior.State.GoToAgent;
            break;
          }
          this.Navigator.SetTargetFrame(this.OwnerAgent.GetWorldPosition(), this.OwnerAgent.Frame.rotation.f.AsVec2.RotationInRadians, rotationThreshold: 1f);
          this.RemoveTargets();
          break;
      }
    }

    private bool CheckForSearchNewTarget(ScriptBehavior.State endState)
    {
      bool flag = false;
      if (this._onTargetReachedDelegate != null)
        flag = this._onTargetReachedDelegate(this.OwnerAgent, ref this._targetAgent, ref this._targetUsableMachine, ref this._targetFrame);
      if (flag)
        this.SearchForNewTarget();
      else
        this._state = endState;
      return flag;
    }

    private void SearchForNewTarget()
    {
      Agent targetAgent = (Agent) null;
      UsableMachine targetUsableMachine = (UsableMachine) null;
      WorldFrame invalid = WorldFrame.Invalid;
      if (!this._selectTargetDelegate(this.OwnerAgent, ref targetAgent, ref targetUsableMachine, ref invalid))
        return;
      if (targetAgent != null)
      {
        this._targetAgent = targetAgent;
        this._state = ScriptBehavior.State.GoToAgent;
      }
      else if (targetUsableMachine != null)
      {
        this._targetUsableMachine = targetUsableMachine;
        this._state = ScriptBehavior.State.GoToUsableMachine;
      }
      else
      {
        this._targetFrame = invalid;
        this._state = ScriptBehavior.State.GoToTargetFrame;
      }
    }

    public override float GetAvailability(bool isSimulation)
    {
      return this._state == ScriptBehavior.State.NoTarget ? 0.0f : 1f;
    }

    protected override void OnDeactivate()
    {
      this.Navigator.ClearTarget();
      this.RemoveTargets();
    }

    private void RemoveTargets()
    {
      this._targetUsableMachine = (UsableMachine) null;
      this._targetAgent = (Agent) null;
      this._targetFrame = WorldFrame.Invalid;
      this._state = ScriptBehavior.State.NoTarget;
      this._selectTargetDelegate = (ScriptBehavior.SelectTargetDelegate) null;
      this._onTargetReachedDelegate = (ScriptBehavior.OnTargetReachedDelegate) null;
      this._sentToTarget = false;
    }

    public override string GetDebugInfo() => "Scripted";

    public delegate bool SelectTargetDelegate(
      Agent agent,
      ref Agent targetAgent,
      ref UsableMachine targetUsableMachine,
      ref WorldFrame targetFrame);

    public delegate bool OnTargetReachedDelegate(
      Agent agent,
      ref Agent targetAgent,
      ref UsableMachine targetUsableMachine,
      ref WorldFrame targetFrame);

    private enum State
    {
      NoTarget,
      GoToUsableMachine,
      GoToAgent,
      GoToTargetFrame,
      NearAgent,
      NearStationaryTarget,
    }
  }
}
