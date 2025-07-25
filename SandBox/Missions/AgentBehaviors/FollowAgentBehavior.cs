// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.FollowAgentBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Objects;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class FollowAgentBehavior : AgentBehavior
  {
    private const float _moveReactionProximityThreshold = 4f;
    private const float _longitudinalClearanceOffset = 2f;
    private const float _onFootMoveProximityThreshold = 1.2f;
    private const float _mountedMoveProximityThreshold = 2.2f;
    private const float _onFootAgentLongitudinalOffset = 0.6f;
    private const float _onFootAgentLateralOffset = 1f;
    private const float _mountedAgentLongitudinalOffset = 1.25f;
    private const float _mountedAgentLateralOffset = 1.5f;
    private float _idleDistance;
    private Agent _selectedAgent;
    private FollowAgentBehavior.State _state;
    private Agent _deactivatedAgent;
    private bool _myLastStateWasRunning;
    private bool _updatePositionThisFrame;

    public FollowAgentBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._selectedAgent = (Agent) null;
      this._deactivatedAgent = (Agent) null;
      this._myLastStateWasRunning = false;
    }

    public void SetTargetAgent(Agent agent)
    {
      this._selectedAgent = agent;
      this._state = FollowAgentBehavior.State.Idle;
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("navigation_mesh_deactivator");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        int disableFaceWithId = entityWithTag.GetFirstScriptOfType<NavigationMeshDeactivator>().DisableFaceWithId;
        if (disableFaceWithId != -1)
          this.OwnerAgent.SetAgentExcludeStateForFaceGroupId(disableFaceWithId, false);
      }
      this.TryMoveStateTransition(true);
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this._selectedAgent == null)
        return;
      this.ControlMovement();
    }

    private void ControlMovement()
    {
      Vec3 position;
      if (this.Navigator.TargetPosition.IsValid && this.Navigator.IsTargetReached())
      {
        this.OwnerAgent.DisableScriptedMovement();
        this.OwnerAgent.SetMaximumSpeedLimit(-1f, false);
        if (this._state == FollowAgentBehavior.State.OnMove)
        {
          Vec2 asVec2_1 = this.OwnerAgent.Position.AsVec2;
          ref Vec2 local = ref asVec2_1;
          position = this._selectedAgent.Position;
          Vec2 asVec2_2 = position.AsVec2;
          this._idleDistance = local.Distance(asVec2_2);
        }
        this._state = FollowAgentBehavior.State.Idle;
      }
      Mission mission = this.Mission;
      Team team = this.OwnerAgent.Team;
      position = this.OwnerAgent.Position;
      Vec2 asVec2 = position.AsVec2;
      int nearbyEnemyAgentCount = mission.GetNearbyEnemyAgentCount(team, asVec2, 5f);
      if (this._state != FollowAgentBehavior.State.Fight && nearbyEnemyAgentCount > 0)
      {
        this.OwnerAgent.SetWatchState(Agent.WatchState.Alarmed);
        this.OwnerAgent.ResetLookAgent();
        this.Navigator.ClearTarget();
        this.OwnerAgent.DisableScriptedMovement();
        this._state = FollowAgentBehavior.State.Fight;
        Debug.Print("[Follow agent behavior] Fight!");
      }
      switch (this._state)
      {
        case FollowAgentBehavior.State.Idle:
          this.TryMoveStateTransition(false);
          break;
        case FollowAgentBehavior.State.OnMove:
          this.MoveToFollowingAgent(false);
          break;
        case FollowAgentBehavior.State.Fight:
          if (nearbyEnemyAgentCount != 0)
            break;
          this.OwnerAgent.SetWatchState(Agent.WatchState.Patrolling);
          this.OwnerAgent.SetLookAgent(this._selectedAgent);
          this._state = FollowAgentBehavior.State.Idle;
          Debug.Print("[Follow agent behavior] Stop fighting!");
          break;
      }
    }

    private void TryMoveStateTransition(bool forceMove)
    {
      if (this._selectedAgent == null || (double) this.OwnerAgent.Position.AsVec2.Distance(this._selectedAgent.Position.AsVec2) <= 4.0 + (double) this._idleDistance)
        return;
      this._state = FollowAgentBehavior.State.OnMove;
      this.MoveToFollowingAgent(forceMove);
    }

    private void MoveToFollowingAgent(bool forcedMove)
    {
      Vec2 asVec2_1 = this._selectedAgent.Velocity.AsVec2;
      if (!(this._updatePositionThisFrame | forcedMove) && !asVec2_1.IsNonZero())
        return;
      this._updatePositionThisFrame = false;
      WorldPosition worldPosition = this._selectedAgent.GetWorldPosition();
      Vec2 vb1 = asVec2_1.IsNonZero() ? asVec2_1.Normalized() : this._selectedAgent.GetMovementDirection();
      Vec2 vb2 = vb1.LeftVec();
      Vec2 asVec2_2 = this._selectedAgent.Position.AsVec2;
      Vec3 position1 = this.OwnerAgent.Position;
      Vec2 asVec2_3 = position1.AsVec2;
      Vec2 va1 = asVec2_2 - asVec2_3;
      float lengthSquared = va1.LengthSquared;
      int num1 = (double) Vec2.DotProduct(va1, vb2) > 0.0 ? 1 : -1;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      int num5 = 0;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        CampaignAgentComponent component = agent.GetComponent<CampaignAgentComponent>();
        if (component?.AgentNavigator != null)
        {
          FollowAgentBehavior behavior = component.AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>()?.GetBehavior<FollowAgentBehavior>();
          if (behavior != null && behavior._selectedAgent != null && behavior._selectedAgent == this._selectedAgent)
          {
            position1 = this._selectedAgent.Position;
            Vec2 asVec2_4 = position1.AsVec2;
            position1 = agent.Position;
            Vec2 asVec2_5 = position1.AsVec2;
            Vec2 va2 = asVec2_4 - asVec2_5;
            int num6 = (double) Vec2.DotProduct(va2, vb2) > 0.0 ? 1 : -1;
            if ((double) va2.LengthSquared < (double) lengthSquared)
            {
              if (num6 == num1)
              {
                if (agent.HasMount)
                  ++num3;
                else
                  ++num2;
              }
              if ((double) Vec2.DotProduct(va2, vb1) > 0.30000001192092896)
              {
                if (agent.HasMount)
                  ++num5;
                else
                  ++num4;
              }
            }
          }
        }
      }
      float num7 = this._selectedAgent.HasMount ? 1.25f : 0.6f;
      float num8 = this.OwnerAgent.HasMount ? 1.25f : 0.6f;
      float num9 = this._selectedAgent.HasMount ? 1.5f : 1f;
      float num10 = this.OwnerAgent.HasMount ? 1.5f : 1f;
      Vec2 searchPos = this._selectedAgent.Position.AsVec2 - vb1 * (float) (2.0 + 0.5 * ((double) num8 + (double) num7) + (double) num2 * 0.60000002384185791 + (double) num3 * 1.25) - (float) num1 * vb2 * (float) (0.5 * ((double) num10 + (double) num9) + (double) num2 * 1.0 + (double) num3 * 1.5);
      bool flag = false;
      AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, searchPos, 0.5f);
      while (searchStruct.LastFoundAgent != null)
      {
        Agent lastFoundAgent = searchStruct.LastFoundAgent;
        if (lastFoundAgent.Index != this.OwnerAgent.Index && lastFoundAgent.Index != this._selectedAgent.Index)
        {
          flag = true;
          break;
        }
        AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
      }
      float rangeThreshold1 = this.OwnerAgent.HasMount ? 2.2f : 1.2f;
      if (!flag)
      {
        WorldPosition pos = worldPosition;
        pos = new WorldPosition(this.Mission.Scene, UIntPtr.Zero, pos.GetGroundVec3(), false);
        pos.SetVec2(searchPos);
        if (pos.GetNavMesh() != UIntPtr.Zero && this.Mission.Scene.IsLineToPointClear(ref pos, ref worldPosition, this.OwnerAgent.Monster.BodyCapsuleRadius))
        {
          WorldPosition position2 = pos;
          position2.SetVec2(position2.AsVec2 + vb1 * 1.5f);
          if (position2.GetNavMesh() != UIntPtr.Zero && this.Mission.Scene.IsLineToPointClear(ref position2, ref pos, this.OwnerAgent.Monster.BodyCapsuleRadius))
            this.SetMovePos(position2, this._selectedAgent.MovementDirectionAsAngle, rangeThreshold1, Agent.AIScriptedFrameFlags.NoAttack);
          else
            this.SetMovePos(pos, this._selectedAgent.MovementDirectionAsAngle, rangeThreshold1, Agent.AIScriptedFrameFlags.NoAttack);
        }
        else
          flag = true;
      }
      if (!flag)
        return;
      float rangeThreshold2 = (float) ((double) rangeThreshold1 + (double) num4 * 0.60000002384185791 + (double) num5 * 1.25);
      this.SetMovePos(worldPosition, this._selectedAgent.MovementDirectionAsAngle, rangeThreshold2, Agent.AIScriptedFrameFlags.NoAttack);
    }

    private void SetMovePos(
      WorldPosition pos,
      float rotationInRadians,
      float rangeThreshold,
      Agent.AIScriptedFrameFlags flags)
    {
      bool disableClearTargetWhenTargetIsReached = this.Mission.Mode == MissionMode.Stealth;
      if (this.Navigator.CharacterHasVisiblePrefabs)
      {
        this._myLastStateWasRunning = false;
      }
      else
      {
        if (disableClearTargetWhenTargetIsReached && this._selectedAgent.CrouchMode)
          flags |= Agent.AIScriptedFrameFlags.Crouch;
        if (disableClearTargetWhenTargetIsReached && this._selectedAgent.WalkMode)
        {
          this.OwnerAgent.SetMaximumSpeedLimit(this._selectedAgent.CrouchMode ? this._selectedAgent.Monster.CrouchWalkingSpeedLimit : this._selectedAgent.Monster.WalkingSpeedLimit, false);
          this._myLastStateWasRunning = false;
        }
        else
        {
          float num = this.OwnerAgent.Position.AsVec2.Distance(pos.AsVec2);
          if ((double) num - (double) rangeThreshold <= 0.5 * (this._myLastStateWasRunning ? 1.0 : 1.2000000476837158) && (double) this._selectedAgent.Velocity.AsVec2.Length <= (double) this.OwnerAgent.Monster.WalkingSpeedLimit * (this._myLastStateWasRunning ? 1.0 : 1.2000000476837158))
          {
            this._myLastStateWasRunning = false;
          }
          else
          {
            this.OwnerAgent.SetMaximumSpeedLimit(num - rangeThreshold + this._selectedAgent.Velocity.AsVec2.Length, false);
            this._myLastStateWasRunning = true;
          }
        }
      }
      if (!this._myLastStateWasRunning)
        flags |= Agent.AIScriptedFrameFlags.DoNotRun;
      this.Navigator.SetTargetFrame(pos, rotationInRadians, rangeThreshold, flags: flags, disableClearTargetWhenTargetIsReached: disableClearTargetWhenTargetIsReached);
    }

    public override void OnAgentRemoved(Agent agent)
    {
      if (agent != this._selectedAgent)
        return;
      this.OwnerAgent.ResetLookAgent();
      this._selectedAgent = (Agent) null;
    }

    protected override void OnActivate()
    {
      if (this._deactivatedAgent == null)
        return;
      this.SetTargetAgent(this._deactivatedAgent);
      this._deactivatedAgent = (Agent) null;
    }

    protected override void OnDeactivate()
    {
      this._state = FollowAgentBehavior.State.Idle;
      this._deactivatedAgent = this._selectedAgent;
      this._selectedAgent = (Agent) null;
      this.OwnerAgent.DisableScriptedMovement();
      this.OwnerAgent.ResetLookAgent();
      this.Navigator.ClearTarget();
    }

    public override string GetDebugInfo()
    {
      return "Follow " + this._selectedAgent.Name + " (id:" + (object) this._selectedAgent.Index + ")";
    }

    public override float GetAvailability(bool isSimulation)
    {
      return this._selectedAgent == null ? 0.0f : 100f;
    }

    private enum State
    {
      Idle,
      OnMove,
      Fight,
    }
  }
}
