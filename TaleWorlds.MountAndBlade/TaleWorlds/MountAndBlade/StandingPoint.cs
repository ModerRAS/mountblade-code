// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StandingPoint
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StandingPoint : UsableMissionObject
  {
    public bool AutoSheathWeapons;
    public bool AutoEquipWeaponsOnUseStopped;
    private bool _autoAttachOnUsingStopped;
    private Action<Agent, bool> _onUsingStoppedAction;
    public bool AutoWieldWeapons;
    public readonly bool TranslateUser;
    public bool HasRecentlyBeenRechecked;
    private Dictionary<Agent, StandingPoint.AgentDistanceCache> _cachedAgentDistances;
    private bool _needsSingleThreadTickOnce;
    protected BattleSideEnum StandingPointSide = BattleSideEnum.None;

    public virtual Agent.AIScriptedFrameFlags DisableScriptedFrameFlags
    {
      get => Agent.AIScriptedFrameFlags.None;
    }

    public override bool DisableCombatActionsOnUse => false;

    [EditableScriptComponentVariable(false)]
    public Agent FavoredUser { get; set; }

    public virtual bool PlayerStopsUsingWhenInteractsWithOther => true;

    public StandingPoint()
      : base()
    {
      this.AutoSheathWeapons = true;
      this.TranslateUser = true;
      this._autoAttachOnUsingStopped = true;
      this._needsSingleThreadTickOnce = false;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._cachedAgentDistances = new Dictionary<Agent, StandingPoint.AgentDistanceCache>();
      bool flag1 = this.GameEntity.HasTag("attacker");
      bool flag2 = this.GameEntity.HasTag("defender");
      if (flag1 && !flag2)
        this.StandingPointSide = BattleSideEnum.Attacker;
      else if (!flag1 & flag2)
        this.StandingPointSide = BattleSideEnum.Defender;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void OnParentMachinePhysicsStateChanged()
    {
      this.GameEntityWithWorldPosition.InvalidateWorldPosition();
    }

    public override bool IsDisabledForAgent(Agent agent)
    {
      if (base.IsDisabledForAgent(agent))
        return true;
      return this.StandingPointSide != BattleSideEnum.None && agent.IsAIControlled && agent.Team != null && agent.Team.Side != this.StandingPointSide;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return !GameNetwork.IsClientOrReplay && this.HasUser ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel2 : base.GetTickRequirement();
    }

    private void TickAux(bool isParallel)
    {
      if (GameNetwork.IsClientOrReplay || !this.HasUser)
        return;
      if (!this.UserAgent.IsActive() || this.DoesActionTypeStopUsingGameObject(MBAnimation.GetActionType(this.UserAgent.GetCurrentAction(0))))
      {
        if (isParallel)
        {
          this._needsSingleThreadTickOnce = true;
        }
        else
        {
          Agent userAgent = this.UserAgent;
          Agent.StopUsingGameObjectFlags flags = Agent.StopUsingGameObjectFlags.None;
          if (this._autoAttachOnUsingStopped)
            flags |= Agent.StopUsingGameObjectFlags.AutoAttachAfterStoppingUsingGameObject;
          userAgent.StopUsingGameObject(false, flags);
          Action<Agent, bool> usingStoppedAction = this._onUsingStoppedAction;
          if (usingStoppedAction == null)
            return;
          usingStoppedAction(userAgent, true);
        }
      }
      else if (this.AutoSheathWeapons)
      {
        if (this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand) != EquipmentIndex.None)
        {
          if (isParallel)
            this._needsSingleThreadTickOnce = true;
          else
            this.UserAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.Instant);
        }
        if (this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand) == EquipmentIndex.None)
          return;
        if (isParallel)
          this._needsSingleThreadTickOnce = true;
        else
          this.UserAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.Instant);
      }
      else
      {
        if (!this.AutoWieldWeapons || !this.UserAgent.Equipment.HasAnyWeapon() || this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand) != EquipmentIndex.None || this.UserAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand) != EquipmentIndex.None)
          return;
        if (isParallel)
          this._needsSingleThreadTickOnce = true;
        else
          this.UserAgent.WieldInitialWeapons(Agent.WeaponWieldActionType.Instant);
      }
    }

    protected internal override void OnTickParallel2(float dt)
    {
      base.OnTickParallel2(dt);
      this.TickAux(true);
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this._needsSingleThreadTickOnce)
        return;
      this._needsSingleThreadTickOnce = false;
      this.TickAux(false);
    }

    protected virtual bool DoesActionTypeStopUsingGameObject(Agent.ActionCodeType actionType)
    {
      return actionType == Agent.ActionCodeType.Jump || actionType == Agent.ActionCodeType.Kick || actionType == Agent.ActionCodeType.WeaponBash;
    }

    public override void OnUse(Agent userAgent)
    {
      if (!this._autoAttachOnUsingStopped && this.MovingAgent != null)
      {
        Agent movingAgent = this.MovingAgent;
        movingAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
        Action<Agent, bool> usingStoppedAction = this._onUsingStoppedAction;
        if (usingStoppedAction != null)
          usingStoppedAction(movingAgent, false);
      }
      base.OnUse(userAgent);
      if (this.LockUserFrames)
      {
        WorldFrame userFrameForAgent = this.GetUserFrameForAgent(userAgent);
        userAgent.SetTargetPositionAndDirection(userFrameForAgent.Origin.AsVec2, userFrameForAgent.Rotation.f);
      }
      else
      {
        if (!this.LockUserPositions)
          return;
        userAgent.SetTargetPosition(this.GetUserFrameForAgent(userAgent).Origin.AsVec2);
      }
    }

    public override void OnUseStopped(Agent userAgent, bool isSuccessful, int preferenceIndex)
    {
      base.OnUseStopped(userAgent, isSuccessful, preferenceIndex);
      if (!this.LockUserFrames && !this.LockUserPositions)
        return;
      userAgent.ClearTargetFrame();
    }

    public override WorldFrame GetUserFrameForAgent(Agent agent)
    {
      if (!Mission.Current.IsTeleportingAgents && !this.TranslateUser)
        return agent.GetWorldFrame();
      if (!Mission.Current.IsTeleportingAgents && (this.LockUserFrames || this.LockUserPositions))
        return base.GetUserFrameForAgent(agent);
      WorldFrame userFrameForAgent = base.GetUserFrameForAgent(agent);
      MatrixFrame lookFrame = agent.LookFrame;
      Vec2 vec2_1 = (lookFrame.origin.AsVec2 - userFrameForAgent.Origin.AsVec2).Normalized();
      Vec2 vec2_2 = userFrameForAgent.Origin.AsVec2 + agent.GetInteractionDistanceToUsable((IUsable) this) * 0.5f * vec2_1;
      Mat3 rotation = lookFrame.rotation;
      userFrameForAgent.Origin.SetVec2(vec2_2);
      userFrameForAgent.Rotation = rotation;
      return userFrameForAgent;
    }

    public virtual bool HasAlternative() => false;

    public virtual float GetUsageScoreForAgent(Agent agent)
    {
      WorldPosition origin = this.GetUserFrameForAgent(agent).Origin;
      WorldPosition worldPosition = agent.GetWorldPosition();
      float pathDistance = this.GetPathDistance(agent, ref origin, ref worldPosition);
      float usageScoreForAgent = (double) pathDistance < 0.0 ? float.MinValue : -pathDistance;
      if (agent == this.FavoredUser)
        usageScoreForAgent *= 0.5f;
      return usageScoreForAgent;
    }

    public virtual float GetUsageScoreForAgent((Agent, float) agentPair)
    {
      float num = agentPair.Item2;
      float usageScoreForAgent = (double) num < 0.0 ? float.MinValue : -num;
      if (agentPair.Item1 == this.FavoredUser)
        usageScoreForAgent *= 0.5f;
      return usageScoreForAgent;
    }

    public void SetupOnUsingStoppedBehavior(bool autoAttach, Action<Agent, bool> action)
    {
      this._autoAttachOnUsingStopped = autoAttach;
      this._onUsingStoppedAction = action;
    }

    private float GetPathDistance(
      Agent agent,
      ref WorldPosition userPosition,
      ref WorldPosition agentPosition)
    {
      StandingPoint.AgentDistanceCache agentDistanceCache1;
      float pathDistance;
      if (this._cachedAgentDistances.TryGetValue(agent, out agentDistanceCache1))
      {
        if ((double) agentDistanceCache1.AgentPosition.DistanceSquared(agentPosition.AsVec2) < 1.0 && (double) agentDistanceCache1.StandingPointPosition.DistanceSquared(userPosition.AsVec2) < 1.0)
        {
          pathDistance = agentDistanceCache1.PathDistance;
        }
        else
        {
          if (!Mission.Current.Scene.GetPathDistanceBetweenPositions(ref userPosition, ref agentPosition, agent.Monster.BodyCapsuleRadius, out pathDistance))
            pathDistance = float.MaxValue;
          StandingPoint.AgentDistanceCache agentDistanceCache2 = new StandingPoint.AgentDistanceCache()
          {
            AgentPosition = agentPosition.AsVec2,
            StandingPointPosition = userPosition.AsVec2,
            PathDistance = pathDistance
          };
          this._cachedAgentDistances[agent] = agentDistanceCache2;
        }
      }
      else
      {
        if (!Mission.Current.Scene.GetPathDistanceBetweenPositions(ref userPosition, ref agentPosition, agent.Monster.BodyCapsuleRadius, out pathDistance))
          pathDistance = float.MaxValue;
        StandingPoint.AgentDistanceCache agentDistanceCache3 = new StandingPoint.AgentDistanceCache()
        {
          AgentPosition = agentPosition.AsVec2,
          StandingPointPosition = userPosition.AsVec2,
          PathDistance = pathDistance
        };
        this._cachedAgentDistances[agent] = agentDistanceCache3;
      }
      return pathDistance;
    }

    public override void OnEndMission()
    {
      base.OnEndMission();
      this.FavoredUser = (Agent) null;
    }

    protected internal virtual bool IsUsableBySide(BattleSideEnum side)
    {
      if (this.IsDeactivated || !this.IsInstantUse && this.HasUser)
        return false;
      return this.StandingPointSide == BattleSideEnum.None || side == this.StandingPointSide;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null) => string.Empty;

    public struct StackArray8StandingPoint
    {
      private StandingPoint _element0;
      private StandingPoint _element1;
      private StandingPoint _element2;
      private StandingPoint _element3;
      private StandingPoint _element4;
      private StandingPoint _element5;
      private StandingPoint _element6;
      private StandingPoint _element7;
      public const int Length = 8;

      public StandingPoint this[int index]
      {
        get
        {
          switch (index)
          {
            case 0:
              return this._element0;
            case 1:
              return this._element1;
            case 2:
              return this._element2;
            case 3:
              return this._element3;
            case 4:
              return this._element4;
            case 5:
              return this._element5;
            case 6:
              return this._element6;
            case 7:
              return this._element7;
            default:
              return (StandingPoint) null;
          }
        }
        set
        {
          switch (index)
          {
            case 0:
              this._element0 = value;
              break;
            case 1:
              this._element1 = value;
              break;
            case 2:
              this._element2 = value;
              break;
            case 3:
              this._element3 = value;
              break;
            case 4:
              this._element4 = value;
              break;
            case 5:
              this._element5 = value;
              break;
            case 6:
              this._element6 = value;
              break;
            case 7:
              this._element7 = value;
              break;
          }
        }
      }
    }

    private struct AgentDistanceCache
    {
      public Vec2 AgentPosition;
      public Vec2 StandingPointPosition;
      public float PathDistance;
    }
  }
}
