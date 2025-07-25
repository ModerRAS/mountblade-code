// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.EscortAgentBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class EscortAgentBehavior : AgentBehavior
  {
    private const float StartWaitingDistanceSquared = 25f;
    private const float ReturnToEscortedAgentDistanceSquared = 100f;
    private const float EscortFinishedDistanceSquared = 16f;
    private const float TargetProximityThreshold = 3f;
    private const float MountedMoveProximityThreshold = 2.2f;
    private const float OnFootMoveProximityThreshold = 1.2f;
    private EscortAgentBehavior.State _state;
    private Agent _escortedAgent;
    private Agent _targetAgent;
    private UsableMachine _targetMachine;
    private Vec3? _targetPosition;
    private bool _myLastStateWasRunning;
    private float _initialMaxSpeedLimit;
    private EscortAgentBehavior.OnTargetReachedDelegate _onTargetReached;
    private bool _escortFinished;

    public Agent EscortedAgent => this._escortedAgent;

    public Agent TargetAgent => this._targetAgent;

    public EscortAgentBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._targetAgent = (Agent) null;
      this._escortedAgent = (Agent) null;
      this._myLastStateWasRunning = false;
      this._initialMaxSpeedLimit = 1f;
    }

    public void Initialize(
      Agent escortedAgent,
      Agent targetAgent,
      EscortAgentBehavior.OnTargetReachedDelegate onTargetReached = null)
    {
      this._escortedAgent = escortedAgent;
      this._targetAgent = targetAgent;
      this._targetMachine = (UsableMachine) null;
      this._targetPosition = new Vec3?();
      this._onTargetReached = onTargetReached;
      this._escortFinished = false;
      this._initialMaxSpeedLimit = this.OwnerAgent.GetMaximumSpeedLimit();
      this._state = EscortAgentBehavior.State.Escorting;
    }

    public void Initialize(
      Agent escortedAgent,
      UsableMachine targetMachine,
      EscortAgentBehavior.OnTargetReachedDelegate onTargetReached = null)
    {
      this._escortedAgent = escortedAgent;
      this._targetAgent = (Agent) null;
      this._targetMachine = targetMachine;
      this._targetPosition = new Vec3?();
      this._onTargetReached = onTargetReached;
      this._escortFinished = false;
      this._initialMaxSpeedLimit = this.OwnerAgent.GetMaximumSpeedLimit();
      this._state = EscortAgentBehavior.State.Escorting;
    }

    public void Initialize(
      Agent escortedAgent,
      Vec3? targetPosition,
      EscortAgentBehavior.OnTargetReachedDelegate onTargetReached = null)
    {
      this._escortedAgent = escortedAgent;
      this._targetAgent = (Agent) null;
      this._targetMachine = (UsableMachine) null;
      this._targetPosition = targetPosition;
      this._onTargetReached = onTargetReached;
      this._escortFinished = false;
      this._initialMaxSpeedLimit = this.OwnerAgent.GetMaximumSpeedLimit();
      this._state = EscortAgentBehavior.State.Escorting;
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._escortedAgent == null || !this._escortedAgent.IsActive() || this._targetAgent == null || !this._targetAgent.IsActive())
        this._state = EscortAgentBehavior.State.NotEscorting;
      if (this._escortedAgent == null || this._state == EscortAgentBehavior.State.NotEscorting)
        return;
      this.ControlMovement();
    }

    public bool IsEscortFinished() => this._escortFinished;

    private void ControlMovement()
    {
      int nearbyEnemyAgentCount = this.Mission.GetNearbyEnemyAgentCount(this._escortedAgent.Team, this._escortedAgent.Position.AsVec2, 5f);
      if (this._state != EscortAgentBehavior.State.NotEscorting && nearbyEnemyAgentCount > 0)
      {
        this._state = EscortAgentBehavior.State.NotEscorting;
        this.OwnerAgent.ResetLookAgent();
        this.Navigator.ClearTarget();
        this.OwnerAgent.DisableScriptedMovement();
        this.OwnerAgent.SetMaximumSpeedLimit(this._initialMaxSpeedLimit, false);
        Debug.Print("[Escort agent behavior] Escorted agent got into a fight... Disable!");
      }
      else
      {
        float rangeThreshold = this.OwnerAgent.HasMount ? 2.2f : 1.2f;
        float num1 = this.OwnerAgent.Position.DistanceSquared(this._escortedAgent.Position);
        float num2;
        WorldPosition worldPosition;
        float targetRotation;
        if (this._targetAgent != null)
        {
          num2 = this.OwnerAgent.Position.DistanceSquared(this._targetAgent.Position);
          worldPosition = this._targetAgent.GetWorldPosition();
          targetRotation = this._targetAgent.Frame.rotation.f.AsVec2.RotationInRadians;
        }
        else if (this._targetMachine != null)
        {
          MatrixFrame globalFrame = this._targetMachine.GameEntity.GetGlobalFrame();
          num2 = this.OwnerAgent.Position.DistanceSquared(globalFrame.origin);
          worldPosition = globalFrame.origin.ToWorldPosition();
          targetRotation = globalFrame.rotation.f.AsVec2.RotationInRadians;
        }
        else if (this._targetPosition.HasValue)
        {
          num2 = this.OwnerAgent.Position.DistanceSquared(this._targetPosition.Value);
          worldPosition = this._targetPosition.Value.ToWorldPosition();
          targetRotation = (this._targetPosition.Value - this.OwnerAgent.Position).AsVec2.RotationInRadians;
        }
        else
        {
          Debug.FailedAssert("At least one target must be specified for the escort behavior.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\AgentBehaviors\\EscortAgentBehavior.cs", nameof (ControlMovement), 158);
          num2 = 0.0f;
          worldPosition = this.OwnerAgent.GetWorldPosition();
          targetRotation = 0.0f;
        }
        if (this._escortFinished)
        {
          bool flag = false;
          this.OwnerAgent.SetMaximumSpeedLimit(this._initialMaxSpeedLimit, false);
          if (this._onTargetReached != null)
            flag = this._onTargetReached(this.OwnerAgent, ref this._escortedAgent, ref this._targetAgent, ref this._targetMachine, ref this._targetPosition);
          this._state = !flag || this._escortedAgent == null || this._targetAgent == null && this._targetMachine == null && !this._targetPosition.HasValue ? EscortAgentBehavior.State.NotEscorting : EscortAgentBehavior.State.Escorting;
        }
        switch (this._state)
        {
          case EscortAgentBehavior.State.ReturnToEscortedAgent:
            if ((double) num1 < 25.0)
            {
              this._state = EscortAgentBehavior.State.Wait;
              break;
            }
            this.SetMovePos(this._escortedAgent.GetWorldPosition(), this._escortedAgent.Frame.rotation.f.AsVec2.RotationInRadians, rangeThreshold);
            break;
          case EscortAgentBehavior.State.Wait:
            if ((double) num1 < 25.0)
            {
              this._state = EscortAgentBehavior.State.Escorting;
              Debug.Print("[Escort agent behavior] Escorting!");
              break;
            }
            if ((double) num1 > 100.0)
            {
              this._state = EscortAgentBehavior.State.ReturnToEscortedAgent;
              Debug.Print("[Escort agent behavior] Escorted agent is too far away! Return to escorted agent!");
              break;
            }
            this.SetMovePos(this.OwnerAgent.GetWorldPosition(), this.OwnerAgent.Frame.rotation.f.AsVec2.RotationInRadians, 0.0f);
            break;
          case EscortAgentBehavior.State.Escorting:
            if ((double) num1 >= 25.0)
            {
              this._state = EscortAgentBehavior.State.Wait;
              Debug.Print("[Escort agent behavior] Stop walking! Wait");
              break;
            }
            this.SetMovePos(worldPosition, targetRotation, 3f);
            break;
        }
        if (this._state != EscortAgentBehavior.State.Escorting || (double) num2 >= 16.0 || (double) num1 >= 16.0)
          return;
        this._escortFinished = true;
      }
    }

    private void SetMovePos(
      WorldPosition targetPosition,
      float targetRotation,
      float rangeThreshold)
    {
      Agent.AIScriptedFrameFlags flags = Agent.AIScriptedFrameFlags.NoAttack;
      if (this.Navigator.CharacterHasVisiblePrefabs)
      {
        this._myLastStateWasRunning = false;
      }
      else
      {
        float num = this.OwnerAgent.Position.AsVec2.Distance(targetPosition.AsVec2);
        float length = this._escortedAgent.Velocity.AsVec2.Length;
        if ((double) num - (double) rangeThreshold <= 0.5 * (this._myLastStateWasRunning ? 1.0 : 1.2000000476837158) && (double) length <= (double) this.OwnerAgent.Monster.WalkingSpeedLimit * (this._myLastStateWasRunning ? 1.0 : 1.2000000476837158))
        {
          this._myLastStateWasRunning = false;
        }
        else
        {
          this.OwnerAgent.SetMaximumSpeedLimit(num - rangeThreshold + length, false);
          this._myLastStateWasRunning = true;
        }
      }
      if (!this._myLastStateWasRunning)
        flags |= Agent.AIScriptedFrameFlags.DoNotRun;
      this.Navigator.SetTargetFrame(targetPosition, targetRotation, rangeThreshold, flags: flags);
    }

    public override float GetAvailability(bool isSimulation)
    {
      return this._state == EscortAgentBehavior.State.NotEscorting ? 0.0f : 1f;
    }

    protected override void OnDeactivate()
    {
      this._escortedAgent = (Agent) null;
      this._targetAgent = (Agent) null;
      this._targetMachine = (UsableMachine) null;
      this._targetPosition = new Vec3?();
      this._onTargetReached = (EscortAgentBehavior.OnTargetReachedDelegate) null;
      this._state = EscortAgentBehavior.State.NotEscorting;
      this.OwnerAgent.DisableScriptedMovement();
      this.OwnerAgent.ResetLookAgent();
      this.Navigator.ClearTarget();
    }

    public override string GetDebugInfo()
    {
      object[] objArray = new object[6]
      {
        (object) "Escort ",
        (object) this._escortedAgent.Name,
        (object) " (id:",
        (object) this._escortedAgent.Index,
        (object) ")",
        null
      };
      string str;
      if (this._targetAgent == null)
      {
        if (this._targetMachine == null)
          str = this._targetPosition.HasValue ? " to position: " + (object) this._targetPosition.Value : " to NO TARGET";
        else
          str = " to " + (object) this._targetMachine + "(id:" + (object) this._targetMachine.Id + ")";
      }
      else
        str = " to " + this._targetAgent.Name + " (id:" + (object) this._targetAgent.Index + ")";
      objArray[5] = (object) str;
      return string.Concat(objArray);
    }

    public static void AddEscortAgentBehavior(
      Agent ownerAgent,
      Agent targetAgent,
      EscortAgentBehavior.OnTargetReachedDelegate onTargetReached)
    {
      InterruptingBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator?.GetBehaviorGroup<InterruptingBehaviorGroup>();
      if (behaviorGroup == null)
        return;
      int num = behaviorGroup.GetBehavior<EscortAgentBehavior>() == null ? 1 : 0;
      EscortAgentBehavior escortAgentBehavior = behaviorGroup.GetBehavior<EscortAgentBehavior>() ?? behaviorGroup.AddBehavior<EscortAgentBehavior>();
      if (num != 0)
        behaviorGroup.SetScriptedBehavior<EscortAgentBehavior>();
      escortAgentBehavior.Initialize(Agent.Main, targetAgent, onTargetReached);
    }

    public static void RemoveEscortBehaviorOfAgent(Agent ownerAgent)
    {
      InterruptingBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator?.GetBehaviorGroup<InterruptingBehaviorGroup>();
      if (behaviorGroup == null || behaviorGroup.GetBehavior<EscortAgentBehavior>() == null)
        return;
      behaviorGroup.RemoveBehavior<EscortAgentBehavior>();
    }

    public static bool CheckIfAgentIsEscortedBy(Agent ownerAgent, Agent escortedAgent)
    {
      EscortAgentBehavior behavior = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator?.GetBehaviorGroup<InterruptingBehaviorGroup>()?.GetBehavior<EscortAgentBehavior>();
      return behavior != null && behavior.EscortedAgent == escortedAgent;
    }

    public delegate bool OnTargetReachedDelegate(
      Agent agent,
      ref Agent escortedAgent,
      ref Agent targetAgent,
      ref UsableMachine targetMachine,
      ref Vec3? targetPosition);

    private enum State
    {
      NotEscorting,
      ReturnToEscortedAgent,
      Wait,
      Escorting,
    }
  }
}
