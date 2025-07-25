// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.WalkingBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using SandBox.Objects.AnimationPoints;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class WalkingBehavior : AgentBehavior
  {
    private readonly MissionAgentHandler _missionAgentHandler;
    private readonly bool _isIndoor;
    private UsableMachine _wanderTarget;
    private UsableMachine _lastTarget;
    private Timer _waitTimer;
    private bool _indoorWanderingIsActive;
    private bool _outdoorWanderingIsActive;
    private bool _wasSimulation;

    private bool CanWander
    {
      get
      {
        if (this._isIndoor && this._indoorWanderingIsActive)
          return true;
        return !this._isIndoor && this._outdoorWanderingIsActive;
      }
    }

    public WalkingBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      this._wanderTarget = (UsableMachine) null;
      this._isIndoor = CampaignMission.Current.Location.IsIndoor;
      this._indoorWanderingIsActive = true;
      this._outdoorWanderingIsActive = true;
      this._wasSimulation = false;
    }

    public void SetIndoorWandering(bool isActive) => this._indoorWanderingIsActive = isActive;

    public void SetOutdoorWandering(bool isActive) => this._outdoorWanderingIsActive = isActive;

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._wanderTarget == null || this.Navigator.TargetUsableMachine == null || this._wanderTarget.IsDisabled || !this._wanderTarget.IsStandingPointAvailableForAgent(this.OwnerAgent))
      {
        this._wanderTarget = this.FindTarget();
        this._lastTarget = this._wanderTarget;
      }
      else if ((double) this.Navigator.GetDistanceToTarget(this._wanderTarget) < 5.0)
      {
        bool flag = this._wasSimulation && !isSimulation && this._wanderTarget != null && this._waitTimer != null && (double) MBRandom.RandomFloat < (this._isIndoor ? 0.0 : (Settlement.CurrentSettlement.IsVillage ? 0.60000002384185791 : 0.10000000149011612));
        if (this._waitTimer == null)
        {
          if (!this._wanderTarget.GameEntity.HasTag("npc_idle"))
          {
            float num = this.OwnerAgent.CurrentlyUsedGameObject is AnimationPoint currentlyUsedGameObject ? currentlyUsedGameObject.GetRandomWaitInSeconds() : 10f;
            this._waitTimer = new Timer(this.Mission.CurrentTime, (double) num < 0.0 ? (float) int.MaxValue : num);
          }
        }
        else if (this._waitTimer.Check(this.Mission.CurrentTime) | flag)
        {
          if (this.CanWander)
          {
            this._waitTimer = (Timer) null;
            UsableMachine target = this.FindTarget();
            if (target == null || this.IsChildrenOfSameParent(target, this._wanderTarget))
            {
              this._waitTimer = new Timer(this.Mission.CurrentTime, this.OwnerAgent.CurrentlyUsedGameObject is AnimationPoint currentlyUsedGameObject ? currentlyUsedGameObject.GetRandomWaitInSeconds() : 10f);
            }
            else
            {
              this._lastTarget = this._wanderTarget;
              this._wanderTarget = target;
            }
          }
          else
            this._waitTimer.Reset(100f);
        }
      }
      if (this.OwnerAgent.CurrentlyUsedGameObject != null && (double) this.Navigator.GetDistanceToTarget(this._lastTarget) > 1.0)
        this.Navigator.SetTarget(this._lastTarget, this._lastTarget == this._wanderTarget);
      this.Navigator.SetTarget(this._wanderTarget);
      this._wasSimulation = isSimulation;
    }

    private bool IsChildrenOfSameParent(UsableMachine machine, UsableMachine otherMachine)
    {
      GameEntity gameEntity1 = machine.GameEntity;
      while ((NativeObject) gameEntity1.Parent != (NativeObject) null)
        gameEntity1 = gameEntity1.Parent;
      GameEntity gameEntity2 = otherMachine.GameEntity;
      while ((NativeObject) gameEntity2.Parent != (NativeObject) null)
        gameEntity2 = gameEntity2.Parent;
      return (NativeObject) gameEntity1 == (NativeObject) gameEntity2;
    }

    public override void ConversationTick()
    {
      if (this._waitTimer == null)
        return;
      this._waitTimer.Reset(this.Mission.CurrentTime);
    }

    public override float GetAvailability(bool isSimulation)
    {
      return this.FindTarget() == null ? 0.0f : 1f;
    }

    public override void SetCustomWanderTarget(UsableMachine customUsableMachine)
    {
      this._wanderTarget = customUsableMachine;
      if (this._waitTimer == null)
        return;
      this._waitTimer = (Timer) null;
    }

    private UsableMachine FindRandomWalkingTarget(bool forWaiting)
    {
      if (forWaiting && (this._wanderTarget ?? this.Navigator.TargetUsableMachine) != null)
        return (UsableMachine) null;
      string tag = this.OwnerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag;
      if (tag == null)
        tag = "npc_common";
      else if (!this._missionAgentHandler.GetAllSpawnTags().Contains<string>(tag))
        tag = "npc_common_limited";
      return this._missionAgentHandler.FindUnusedPointWithTagForAgent(this.OwnerAgent, tag);
    }

    private UsableMachine FindTarget()
    {
      return this.FindRandomWalkingTarget(this._isIndoor && !this._indoorWanderingIsActive);
    }

    private float GetTargetScore(UsableMachine usableMachine)
    {
      if (this.OwnerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag != null && !usableMachine.GameEntity.HasTag(this.OwnerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag))
        return 0.0f;
      StandingPoint standingPointForAi = usableMachine.GetVacantStandingPointForAI(this.OwnerAgent);
      if (standingPointForAi == null || standingPointForAi.IsDisabledForAgent(this.OwnerAgent))
        return 0.0f;
      float num = 1f;
      Vec3 vec3 = standingPointForAi.GetUserFrameForAgent(this.OwnerAgent).Origin.GetGroundVec3() - this.OwnerAgent.Position;
      if ((double) vec3.Length < 2.0)
        num *= vec3.Length / 2f;
      return num * (float) (0.800000011920929 + (double) MBRandom.RandomFloat * 0.20000000298023224);
    }

    public override void OnSpecialTargetChanged()
    {
      if (this._wanderTarget == null)
        return;
      if (!this.Navigator.SpecialTargetTag.IsEmpty<char>() && !this._wanderTarget.GameEntity.HasTag(this.Navigator.SpecialTargetTag))
      {
        this._wanderTarget = (UsableMachine) null;
        this.Navigator.SetTarget(this._wanderTarget);
      }
      else
      {
        if (!this.Navigator.SpecialTargetTag.IsEmpty<char>() || this._wanderTarget.GameEntity.HasTag("npc_common"))
          return;
        this._wanderTarget = (UsableMachine) null;
        this.Navigator.SetTarget(this._wanderTarget);
      }
    }

    public override string GetDebugInfo()
    {
      string debugInfo = "Walk ";
      if (this._waitTimer != null)
        debugInfo = debugInfo + "(Wait " + (object) (int) this._waitTimer.ElapsedTime() + "/" + (object) this._waitTimer.Duration + ")";
      else if (this._wanderTarget == null)
        debugInfo += "(search for target!)";
      return debugInfo;
    }

    protected override void OnDeactivate()
    {
      this.Navigator.ClearTarget();
      this._wanderTarget = (UsableMachine) null;
      this._waitTimer = (Timer) null;
    }
  }
}
