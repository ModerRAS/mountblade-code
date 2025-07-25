// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.UsableMachineAIBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class UsableMachineAIBase
  {
    protected readonly UsableMachine UsableMachine;
    private GameEntity _lastActiveWaitStandingPoint;

    protected UsableMachineAIBase(UsableMachine usableMachine)
    {
      this.UsableMachine = usableMachine;
      this._lastActiveWaitStandingPoint = this.UsableMachine.WaitEntity;
    }

    public virtual bool HasActionCompleted => false;

    protected internal virtual Agent.AIScriptedFrameFlags GetScriptedFrameFlags(Agent agent)
    {
      return Agent.AIScriptedFrameFlags.None;
    }

    public void Tick(
      Agent agentToCompareTo,
      Formation formationToCompareTo,
      Team potentialUsersTeam,
      float dt)
    {
      this.OnTick(agentToCompareTo, formationToCompareTo, potentialUsersTeam, dt);
    }

    protected virtual void OnTick(
      Agent agentToCompareTo,
      Formation formationToCompareTo,
      Team potentialUsersTeam,
      float dt)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.UsableMachine.StandingPoints)
      {
        Agent userAgent = standingPoint.UserAgent;
        if ((agentToCompareTo == null || userAgent == agentToCompareTo) && (formationToCompareTo == null || userAgent != null && userAgent.IsAIControlled && userAgent.Formation == formationToCompareTo) && (this.HasActionCompleted || potentialUsersTeam != null && this.UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side) || userAgent.IsRunningAway))
          this.HandleAgentStopUsingStandingPoint(userAgent, standingPoint);
        if (standingPoint.HasAIMovingTo)
        {
          Agent movingAgent = standingPoint.MovingAgent;
          if ((agentToCompareTo == null || movingAgent == agentToCompareTo) && (formationToCompareTo == null || movingAgent != null && movingAgent.IsAIControlled && movingAgent.Formation == formationToCompareTo))
          {
            if (this.HasActionCompleted || potentialUsersTeam != null && this.UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side) || movingAgent.IsRunningAway)
            {
              this.HandleAgentStopUsingStandingPoint(movingAgent, standingPoint);
            }
            else
            {
              if (standingPoint.HasAlternative() && this.UsableMachine.IsInRangeToCheckAlternativePoints(movingAgent))
              {
                StandingPoint pointAlternativeTo = this.UsableMachine.GetBestPointAlternativeTo(standingPoint, movingAgent);
                if (pointAlternativeTo != standingPoint)
                {
                  standingPoint.OnMoveToStopped(movingAgent);
                  movingAgent.AIMoveToGameObjectEnable((UsableMissionObject) pointAlternativeTo, (IDetachment) this.UsableMachine, this.GetScriptedFrameFlags(movingAgent));
                  if (standingPoint == this.UsableMachine.CurrentlyUsedAmmoPickUpPoint)
                  {
                    this.UsableMachine.CurrentlyUsedAmmoPickUpPoint = pointAlternativeTo;
                    continue;
                  }
                  continue;
                }
              }
              if (standingPoint.HasUserPositionsChanged(movingAgent))
              {
                WorldFrame userFrameForAgent = standingPoint.GetUserFrameForAgent(movingAgent);
                movingAgent.SetScriptedPositionAndDirection(ref userFrameForAgent.Origin, userFrameForAgent.Rotation.f.AsVec2.RotationInRadians, false, this.GetScriptedFrameFlags(movingAgent));
              }
              if (!standingPoint.IsDisabled && !standingPoint.HasUser && !movingAgent.IsPaused && movingAgent.CanReachAndUseObject((UsableMissionObject) standingPoint, standingPoint.GetUserFrameForAgent(movingAgent).Origin.GetGroundVec3().DistanceSquared(movingAgent.Position)))
              {
                movingAgent.UseGameObject((UsableMissionObject) standingPoint);
                movingAgent.SetScriptedFlags(movingAgent.GetScriptedFlags() & ~standingPoint.DisableScriptedFrameFlags);
              }
            }
          }
        }
        for (int index = standingPoint.GetDefendingAgentCount() - 1; index >= 0; --index)
        {
          Agent defendingAgent = standingPoint.DefendingAgents[index];
          if ((agentToCompareTo == null || defendingAgent == agentToCompareTo) && (formationToCompareTo == null || defendingAgent != null && defendingAgent.IsAIControlled && defendingAgent.Formation == formationToCompareTo) && (this.HasActionCompleted || potentialUsersTeam != null && !this.UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side) || defendingAgent.IsRunningAway))
            this.HandleAgentStopUsingStandingPoint(defendingAgent, standingPoint);
        }
      }
      if (!((NativeObject) this._lastActiveWaitStandingPoint != (NativeObject) this.UsableMachine.WaitEntity))
        return;
      foreach (Formation formation in potentialUsersTeam.FormationsIncludingSpecialAndEmpty.Where<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && this.UsableMachine.IsUsedByFormation(f) && f.GetReadonlyMovementOrderReference().OrderEnum == MovementOrder.MovementOrderEnum.FollowEntity && (NativeObject) f.GetReadonlyMovementOrderReference().TargetEntity == (NativeObject) this._lastActiveWaitStandingPoint)))
      {
        if (this is SiegeTowerAI)
          formation.SetMovementOrder(this.NextOrder);
        else
          formation.SetMovementOrder(MovementOrder.MovementOrderFollowEntity(this.UsableMachine.WaitEntity));
      }
      this._lastActiveWaitStandingPoint = this.UsableMachine.WaitEntity;
    }

    [Conditional("DEBUG")]
    private void TickForDebug()
    {
      if (!Input.DebugInput.IsHotKeyDown("UsableMachineAiBaseHotkeyShowMachineUsers"))
        return;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.UsableMachine.StandingPoints)
      {
        int num = standingPoint.HasAIMovingTo ? 1 : 0;
        Agent userAgent = standingPoint.UserAgent;
      }
    }

    public static Agent GetSuitableAgentForStandingPoint(
      UsableMachine usableMachine,
      StandingPoint standingPoint,
      IEnumerable<Agent> agents,
      List<Agent> usedAgents)
    {
      if (usableMachine.AmmoPickUpPoints.Contains(standingPoint) && usableMachine.StandingPoints.Any<StandingPoint>((Func<StandingPoint, bool>) (standingPoint2 => (standingPoint2.IsDeactivated || standingPoint2.HasUser || standingPoint2.HasAIMovingTo) && !standingPoint2.GameEntity.HasTag(usableMachine.AmmoPickUpTag) && standingPoint2 is StandingPointWithWeaponRequirement)))
        return (Agent) null;
      IEnumerable<Agent> source = agents.Where<Agent>((Func<Agent, bool>) (a =>
      {
        if (usedAgents.Contains(a) || !a.IsAIControlled || !a.IsActive() || a.IsRunningAway || a.InteractingWithAnyGameObject() || standingPoint.IsDisabledForAgent(a))
          return false;
        return a.Formation == null || !a.IsDetachedFromFormation;
      }));
      return !source.Any<Agent>() ? (Agent) null : source.MaxBy<Agent, float>((Func<Agent, float>) (a => standingPoint.GetUsageScoreForAgent(a)));
    }

    public static Agent GetSuitableAgentForStandingPoint(
      UsableMachine usableMachine,
      StandingPoint standingPoint,
      List<(Agent, float)> agents,
      List<Agent> usedAgents,
      float weight)
    {
      if (usableMachine.IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(standingPoint))
        return (Agent) null;
      Agent forStandingPoint = (Agent) null;
      float num = float.MinValue;
      foreach ((Agent agent, float _) in agents)
      {
        if (!usedAgents.Contains(agent) && agent.IsAIControlled && agent.IsActive() && !agent.IsRunningAway && !agent.InteractingWithAnyGameObject() && !standingPoint.IsDisabledForAgent(agent) && (agent.Formation == null || !agent.IsDetachedFromFormation || (double) agent.DetachmentWeight * 0.40000000596046448 > (double) weight))
        {
          float usageScoreForAgent = standingPoint.GetUsageScoreForAgent(agent);
          if ((double) num < (double) usageScoreForAgent)
          {
            num = usageScoreForAgent;
            forStandingPoint = agent;
          }
        }
      }
      return forStandingPoint;
    }

    protected virtual MovementOrder NextOrder => MovementOrder.MovementOrderStop;

    public virtual void TeleportUserAgentsToMachine(List<Agent> agentList)
    {
      int num = 0;
      bool flag;
      do
      {
        ++num;
        flag = false;
        foreach (Agent agent in agentList)
        {
          if (agent.IsAIControlled && agent.AIMoveToGameObjectIsEnabled())
          {
            flag = true;
            WorldFrame userFrameForAgent = this.UsableMachine.GetTargetStandingPointOfAIAgent(agent).GetUserFrameForAgent(agent);
            Vec2 vec2 = userFrameForAgent.Rotation.f.AsVec2;
            Vec2 direction = vec2.Normalized();
            vec2 = agent.Position.AsVec2 - userFrameForAgent.Origin.AsVec2;
            if ((double) vec2.LengthSquared <= 9.9999997473787516E-05)
            {
              vec2 = agent.GetMovementDirection() - direction;
              if ((double) vec2.LengthSquared <= 9.9999997473787516E-05)
                continue;
            }
            agent.TeleportToPosition(userFrameForAgent.Origin.GetGroundVec3());
            agent.SetMovementDirection(in direction);
            if (GameNetwork.IsServerOrRecorder)
            {
              GameNetwork.BeginBroadcastModuleEvent();
              GameNetwork.WriteMessage((GameNetworkMessage) new AgentTeleportToFrame(agent.Index, userFrameForAgent.Origin.GetGroundVec3(), direction));
              GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
            }
          }
        }
      }
      while (flag && num < 10);
    }

    public void StopUsingStandingPoint(StandingPoint standingPoint)
    {
      this.HandleAgentStopUsingStandingPoint(standingPoint.HasUser ? standingPoint.UserAgent : (standingPoint.HasAIMovingTo ? standingPoint.MovingAgent : (Agent) null), standingPoint);
    }

    protected virtual void HandleAgentStopUsingStandingPoint(
      Agent agent,
      StandingPoint standingPoint)
    {
      Agent.StopUsingGameObjectFlags flags = Agent.StopUsingGameObjectFlags.None;
      if (agent.Team == null || agent.IsRunningAway)
      {
        flags |= Agent.StopUsingGameObjectFlags.AutoAttachAfterStoppingUsingGameObject;
      }
      else
      {
        if (this.UsableMachine.AutoAttachUserToFormation(agent.Team.Side))
          flags |= Agent.StopUsingGameObjectFlags.AutoAttachAfterStoppingUsingGameObject;
        if (this.UsableMachine.HasToBeDefendedByUser(agent.Team.Side))
          flags |= Agent.StopUsingGameObjectFlags.DefendAfterStoppingUsingGameObject;
      }
      agent.StopUsingGameObjectMT(flags: flags);
    }
  }
}
