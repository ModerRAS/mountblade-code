// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MovementOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MovementOrder
  {
    public static readonly MovementOrder MovementOrderNull = new MovementOrder(MovementOrder.MovementOrderEnum.Invalid);
    public static readonly MovementOrder MovementOrderCharge = new MovementOrder(MovementOrder.MovementOrderEnum.Charge);
    public static readonly MovementOrder MovementOrderRetreat = new MovementOrder(MovementOrder.MovementOrderEnum.Retreat);
    public static readonly MovementOrder MovementOrderStop = new MovementOrder(MovementOrder.MovementOrderEnum.Stop);
    public static readonly MovementOrder MovementOrderAdvance = new MovementOrder(MovementOrder.MovementOrderEnum.Advance);
    public static readonly MovementOrder MovementOrderFallBack = new MovementOrder(MovementOrder.MovementOrderEnum.FallBack);
    private MovementOrder.FollowState _followState;
    private float _departStartTime;
    public readonly MovementOrder.MovementOrderEnum OrderEnum;
    private Func<Formation, WorldPosition> _positionLambda;
    private WorldPosition _position;
    private WorldPosition _getPositionResultCache;
    private bool _getPositionIsNavmeshlessCache;
    private WorldPosition _getPositionFirstSectionCache;
    public GameEntity TargetEntity;
    private readonly Timer _tickTimer;
    private WorldPosition _lastPosition;
    public readonly bool _isFacingDirection;

    public Formation TargetFormation { get; private set; }

    public Agent _targetAgent { get; }

    public OrderType OrderType
    {
      get
      {
        switch (this.OrderEnum)
        {
          case MovementOrder.MovementOrderEnum.AttackEntity:
            return OrderType.AttackEntity;
          case MovementOrder.MovementOrderEnum.Charge:
            return OrderType.Charge;
          case MovementOrder.MovementOrderEnum.ChargeToTarget:
            return OrderType.ChargeWithTarget;
          case MovementOrder.MovementOrderEnum.Follow:
            return OrderType.FollowMe;
          case MovementOrder.MovementOrderEnum.FollowEntity:
            return OrderType.FollowEntity;
          case MovementOrder.MovementOrderEnum.Guard:
            return OrderType.GuardMe;
          case MovementOrder.MovementOrderEnum.Move:
            return OrderType.Move;
          case MovementOrder.MovementOrderEnum.Retreat:
            return OrderType.Retreat;
          case MovementOrder.MovementOrderEnum.Stop:
            return OrderType.StandYourGround;
          case MovementOrder.MovementOrderEnum.Advance:
            return OrderType.Advance;
          case MovementOrder.MovementOrderEnum.FallBack:
            return OrderType.FallBack;
          default:
            Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\MovementOrder.cs", nameof (OrderType), 113);
            return OrderType.Move;
        }
      }
    }

    public MovementOrder.MovementStateEnum MovementState
    {
      get
      {
        switch (this.OrderEnum)
        {
          case MovementOrder.MovementOrderEnum.Charge:
          case MovementOrder.MovementOrderEnum.ChargeToTarget:
          case MovementOrder.MovementOrderEnum.Guard:
            return MovementOrder.MovementStateEnum.Charge;
          case MovementOrder.MovementOrderEnum.Retreat:
            return MovementOrder.MovementStateEnum.Retreat;
          case MovementOrder.MovementOrderEnum.Stop:
            return MovementOrder.MovementStateEnum.StandGround;
          default:
            return MovementOrder.MovementStateEnum.Hold;
        }
      }
    }

    private MovementOrder(MovementOrder.MovementOrderEnum orderEnum)
    {
      this.OrderEnum = orderEnum;
      switch (orderEnum)
      {
        case MovementOrder.MovementOrderEnum.Charge:
          this._positionLambda = (Func<Formation, WorldPosition>) null;
          break;
        case MovementOrder.MovementOrderEnum.Retreat:
          this._positionLambda = (Func<Formation, WorldPosition>) null;
          break;
        case MovementOrder.MovementOrderEnum.Advance:
          this._positionLambda = (Func<Formation, WorldPosition>) null;
          break;
        case MovementOrder.MovementOrderEnum.FallBack:
          this._positionLambda = (Func<Formation, WorldPosition>) null;
          break;
        default:
          this._positionLambda = (Func<Formation, WorldPosition>) null;
          break;
      }
      this.TargetFormation = (Formation) null;
      this.TargetEntity = (GameEntity) null;
      this._targetAgent = (Agent) null;
      this._tickTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this._lastPosition = WorldPosition.Invalid;
      this._isFacingDirection = false;
      this._position = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    private MovementOrder(MovementOrder.MovementOrderEnum orderEnum, Formation targetFormation)
    {
      this.OrderEnum = orderEnum;
      this._positionLambda = (Func<Formation, WorldPosition>) null;
      this.TargetFormation = targetFormation;
      this.TargetEntity = (GameEntity) null;
      this._targetAgent = (Agent) null;
      this._tickTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this._lastPosition = WorldPosition.Invalid;
      this._isFacingDirection = false;
      this._position = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    private WorldPosition ComputeAttackEntityWaitPosition(
      Formation formation,
      GameEntity targetEntity)
    {
      Scene scene = formation.Team.Mission.Scene;
      WorldPosition worldPosition = new WorldPosition(scene, UIntPtr.Zero, targetEntity.GlobalPosition, false);
      Vec2 vec2_1 = formation.QuerySystem.AveragePosition - worldPosition.AsVec2;
      Vec2 v = targetEntity.GetGlobalFrame().rotation.f.AsVec2.Normalized();
      Vec2 vec2_2 = (double) vec2_1.DotProduct(v) >= 0.0 ? v : -v;
      WorldPosition position1 = worldPosition;
      position1.SetVec2(worldPosition.AsVec2 + vec2_2 * 3f);
      if (scene.DoesPathExistBetweenPositions(position1, formation.QuerySystem.MedianPosition))
        return position1;
      WorldPosition position2 = worldPosition;
      position2.SetVec2(worldPosition.AsVec2 - vec2_2 * 3f);
      if (scene.DoesPathExistBetweenPositions(position2, formation.QuerySystem.MedianPosition))
        return position2;
      WorldPosition position3 = worldPosition;
      position3.SetVec2(worldPosition.AsVec2 + targetEntity.GetGlobalFrame().rotation.s.AsVec2.Normalized() * 3f);
      if (scene.DoesPathExistBetweenPositions(position3, formation.QuerySystem.MedianPosition))
        return position3;
      WorldPosition position4 = worldPosition;
      position4.SetVec2(worldPosition.AsVec2 - targetEntity.GetGlobalFrame().rotation.s.AsVec2.Normalized() * 3f);
      return scene.DoesPathExistBetweenPositions(position4, formation.QuerySystem.MedianPosition) ? position4 : position1;
    }

    private MovementOrder(
      MovementOrder.MovementOrderEnum orderEnum,
      GameEntity targetEntity,
      bool surroundEntity)
    {
      targetEntity.GetFirstScriptOfType<UsableMachine>();
      this.OrderEnum = orderEnum;
      this._positionLambda = (Func<Formation, WorldPosition>) (f =>
      {
        WorldPosition worldPosition = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, targetEntity.GlobalPosition, false);
        Vec2 vec2_1 = f.QuerySystem.AveragePosition - worldPosition.AsVec2;
        Vec2 v = targetEntity.GetGlobalFrame().rotation.f.AsVec2.Normalized();
        Vec2 vec2_2 = (double) vec2_1.DotProduct(v) >= 0.0 ? v : -v;
        WorldPosition position1 = worldPosition;
        position1.SetVec2(worldPosition.AsVec2 + vec2_2 * 3f);
        if (Mission.Current.Scene.DoesPathExistBetweenPositions(position1, f.QuerySystem.MedianPosition))
          return position1;
        WorldPosition position2 = worldPosition;
        position2.SetVec2(worldPosition.AsVec2 - vec2_2 * 3f);
        if (Mission.Current.Scene.DoesPathExistBetweenPositions(position2, f.QuerySystem.MedianPosition))
          return position2;
        WorldPosition position3 = worldPosition;
        position3.SetVec2(worldPosition.AsVec2 + targetEntity.GetGlobalFrame().rotation.s.AsVec2.Normalized() * 3f);
        if (Mission.Current.Scene.DoesPathExistBetweenPositions(position3, f.QuerySystem.MedianPosition))
          return position3;
        WorldPosition position4 = worldPosition;
        position4.SetVec2(worldPosition.AsVec2 - targetEntity.GetGlobalFrame().rotation.s.AsVec2.Normalized() * 3f);
        return Mission.Current.Scene.DoesPathExistBetweenPositions(position4, f.QuerySystem.MedianPosition) ? position4 : position1;
      });
      this.TargetEntity = targetEntity;
      this._tickTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this.TargetFormation = (Formation) null;
      this._targetAgent = (Agent) null;
      this._lastPosition = WorldPosition.Invalid;
      this._isFacingDirection = false;
      this._position = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    private MovementOrder(MovementOrder.MovementOrderEnum orderEnum, Agent targetAgent)
    {
      this.OrderEnum = orderEnum;
      WorldPosition targetAgentPos = targetAgent.GetWorldPosition();
      this._positionLambda = orderEnum != MovementOrder.MovementOrderEnum.Follow ? (Func<Formation, WorldPosition>) (f =>
      {
        WorldPosition worldPosition = targetAgentPos;
        worldPosition.SetVec2(worldPosition.AsVec2 - 4f * (f.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - targetAgentPos.AsVec2).Normalized());
        return (double) worldPosition.AsVec2.DistanceSquared(f.GetReadonlyMovementOrderReference()._lastPosition.AsVec2) > 6.25 ? worldPosition : f.GetReadonlyMovementOrderReference()._lastPosition;
      }) : (Func<Formation, WorldPosition>) (f =>
      {
        WorldPosition worldPosition = targetAgentPos;
        worldPosition.SetVec2(worldPosition.AsVec2 - f.GetMiddleFrontUnitPositionOffset());
        return worldPosition;
      });
      this._targetAgent = targetAgent;
      this.TargetFormation = (Formation) null;
      this.TargetEntity = (GameEntity) null;
      this._tickTimer = new Timer(targetAgent.Mission.CurrentTime, 0.5f);
      this._lastPosition = targetAgentPos;
      this._isFacingDirection = false;
      this._position = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    private MovementOrder(MovementOrder.MovementOrderEnum orderEnum, GameEntity targetEntity)
    {
      this.OrderEnum = orderEnum;
      this._positionLambda = (Func<Formation, WorldPosition>) (f =>
      {
        WorldPosition worldPosition = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, targetEntity.GlobalPosition, false);
        worldPosition.SetVec2(worldPosition.AsVec2);
        return worldPosition;
      });
      this.TargetEntity = targetEntity;
      this.TargetFormation = (Formation) null;
      this._targetAgent = (Agent) null;
      this._tickTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this._lastPosition = WorldPosition.Invalid;
      this._isFacingDirection = false;
      this._position = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    private MovementOrder(MovementOrder.MovementOrderEnum orderEnum, WorldPosition position)
    {
      this.OrderEnum = orderEnum;
      this._positionLambda = (Func<Formation, WorldPosition>) null;
      this._isFacingDirection = false;
      this.TargetFormation = (Formation) null;
      this.TargetEntity = (GameEntity) null;
      this._targetAgent = (Agent) null;
      this._tickTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this._lastPosition = WorldPosition.Invalid;
      this._position = position;
      this._getPositionResultCache = WorldPosition.Invalid;
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionIsNavmeshlessCache = false;
      this._followState = MovementOrder.FollowState.Stop;
      this._departStartTime = -1f;
    }

    public override bool Equals(object obj)
    {
      return obj is MovementOrder movementOrder && ref movementOrder == this;
    }

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(in MovementOrder m, MovementOrder obj)
    {
      return m.OrderEnum != obj.OrderEnum;
    }

    public static bool operator ==(in MovementOrder m, MovementOrder obj)
    {
      return m.OrderEnum == obj.OrderEnum;
    }

    public static MovementOrder MovementOrderChargeToTarget(Formation targetFormation)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.ChargeToTarget, targetFormation);
    }

    public static MovementOrder MovementOrderFollow(Agent targetAgent)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.Follow, targetAgent);
    }

    public static MovementOrder MovementOrderGuard(Agent targetAgent)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.Guard, targetAgent);
    }

    public static MovementOrder MovementOrderFollowEntity(GameEntity targetEntity)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.FollowEntity, targetEntity);
    }

    public static MovementOrder MovementOrderMove(WorldPosition position)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.Move, position);
    }

    public static MovementOrder MovementOrderAttackEntity(
      GameEntity targetEntity,
      bool surroundEntity)
    {
      return new MovementOrder(MovementOrder.MovementOrderEnum.AttackEntity, targetEntity, surroundEntity);
    }

    public static int GetMovementOrderDefensiveness(MovementOrder.MovementOrderEnum orderEnum)
    {
      return orderEnum == MovementOrder.MovementOrderEnum.Charge || orderEnum == MovementOrder.MovementOrderEnum.ChargeToTarget ? 0 : 1;
    }

    public static int GetMovementOrderDefensivenessChange(
      MovementOrder.MovementOrderEnum previousOrderEnum,
      MovementOrder.MovementOrderEnum nextOrderEnum)
    {
      return previousOrderEnum == MovementOrder.MovementOrderEnum.Charge || previousOrderEnum == MovementOrder.MovementOrderEnum.ChargeToTarget ? (nextOrderEnum != MovementOrder.MovementOrderEnum.Charge && nextOrderEnum != MovementOrder.MovementOrderEnum.ChargeToTarget ? 1 : 0) : (nextOrderEnum == MovementOrder.MovementOrderEnum.Charge || nextOrderEnum == MovementOrder.MovementOrderEnum.ChargeToTarget ? -1 : 0);
    }

    private static void RetreatAux(Formation formation)
    {
      for (int index = formation.Detachments.Count - 1; index >= 0; --index)
        formation.LeaveDetachment(formation.Detachments[index]);
      formation.ApplyActionOnEachUnitViaBackupList((Action<Agent>) (agent =>
      {
        if (!agent.IsAIControlled)
          return;
        agent.Retreat(true);
      }));
    }

    private static WorldPosition GetAlternatePositionForNavmeshlessOrOutOfBoundsPosition(
      Formation f,
      WorldPosition originalPosition)
    {
      float positionPenalty = 1f;
      WorldPosition ofBoundsPosition = Mission.Current.GetAlternatePositionForNavmeshlessOrOutOfBoundsPosition(originalPosition.AsVec2 - f.QuerySystem.AveragePosition, originalPosition, ref positionPenalty);
      if (f.AI?.ActiveBehavior == null)
        return ofBoundsPosition;
      f.AI.ActiveBehavior.NavmeshlessTargetPositionPenalty = positionPenalty;
      return ofBoundsPosition;
    }

    private static void OnUnitJoinOrLeaveAux(Agent unit, Agent target, bool isJoining)
    {
      unit.SetGuardState(target, isJoining);
    }

    private void GetPositionAuxFollow(Formation f)
    {
      Vec2 zero = Vec2.Zero;
      if (this._followState != MovementOrder.FollowState.Move && this._targetAgent.MountAgent != null)
        zero += f.Direction * -2f;
      if (this._followState == MovementOrder.FollowState.Move && f.PhysicalClass.IsMounted())
        zero += 2f * this._targetAgent.Velocity.AsVec2;
      else if (this._followState == MovementOrder.FollowState.Move)
        f.PhysicalClass.IsMounted();
      WorldPosition worldPosition = this._targetAgent.GetWorldPosition();
      worldPosition.SetVec2(worldPosition.AsVec2 - f.GetMiddleFrontUnitPositionOffset() + zero);
      if (this._followState == MovementOrder.FollowState.Stop || this._followState == MovementOrder.FollowState.Depart)
      {
        float num = f.PhysicalClass.IsMounted() ? 4f : 2.5f;
        if (!Mission.Current.IsTeleportingAgents && (double) worldPosition.AsVec2.DistanceSquared(this._lastPosition.AsVec2) <= (double) num * (double) num)
          return;
        this._lastPosition = worldPosition;
      }
      else
        this._lastPosition = worldPosition;
    }

    public Vec2 GetPosition(Formation f)
    {
      return this.CreateNewOrderWorldPosition(f, WorldPosition.WorldPositionEnforcedCache.None).AsVec2;
    }

    public Vec2 GetTargetVelocity()
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.AttackEntity:
        case MovementOrder.MovementOrderEnum.Charge:
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
        case MovementOrder.MovementOrderEnum.FollowEntity:
        case MovementOrder.MovementOrderEnum.Move:
        case MovementOrder.MovementOrderEnum.Retreat:
        case MovementOrder.MovementOrderEnum.Stop:
        case MovementOrder.MovementOrderEnum.Advance:
        case MovementOrder.MovementOrderEnum.FallBack:
          return Vec2.Zero;
        case MovementOrder.MovementOrderEnum.Follow:
        case MovementOrder.MovementOrderEnum.Guard:
          return this._targetAgent.AverageVelocity.AsVec2;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\MovementOrder.cs", nameof (GetTargetVelocity), 847);
          return Vec2.Zero;
      }
    }

    public WorldPosition CreateNewOrderWorldPosition(
      Formation f,
      WorldPosition.WorldPositionEnforcedCache worldPositionEnforcedCache)
    {
      if (!this.IsApplicable(f))
        return f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
      WorldPosition orderPosition;
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.Follow:
          this.GetPositionAuxFollow(f);
          orderPosition = this._lastPosition;
          break;
        case MovementOrder.MovementOrderEnum.Advance:
        case MovementOrder.MovementOrderEnum.FallBack:
          orderPosition = this.GetPositionAux(f, worldPositionEnforcedCache);
          break;
        default:
          Func<Formation, WorldPosition> positionLambda = this._positionLambda;
          orderPosition = positionLambda != null ? positionLambda(f) : this._position;
          break;
      }
      if (Mission.Current.Mode == MissionMode.Deployment)
      {
        if (!Mission.Current.IsOrderPositionAvailable(in orderPosition, f.Team))
          orderPosition = f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
        else if (!Mission.Current.DeploymentPlan.IsPositionInsideDeploymentBoundaries(f.Team.Side, orderPosition.AsVec2))
        {
          MBSceneUtilities.ProjectPositionToDeploymentBoundaries(f.Team.Side, ref orderPosition);
          if (!Mission.Current.IsOrderPositionAvailable(in orderPosition, f.Team))
            orderPosition = f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
        }
      }
      bool flag = false;
      if (this._getPositionFirstSectionCache.AsVec2 != orderPosition.AsVec2)
      {
        this._getPositionIsNavmeshlessCache = false;
        if (orderPosition.IsValid)
        {
          switch (worldPositionEnforcedCache)
          {
            case WorldPosition.WorldPositionEnforcedCache.NavMeshVec3:
              orderPosition.GetNavMeshVec3();
              break;
            case WorldPosition.WorldPositionEnforcedCache.GroundVec3:
              orderPosition.GetGroundVec3();
              break;
          }
          this._getPositionFirstSectionCache = orderPosition;
          if (this.OrderEnum != MovementOrder.MovementOrderEnum.Follow && (orderPosition.GetNavMesh() == UIntPtr.Zero || !Mission.Current.IsPositionInsideBoundaries(orderPosition.AsVec2)))
          {
            orderPosition = MovementOrder.GetAlternatePositionForNavmeshlessOrOutOfBoundsPosition(f, orderPosition);
            switch (worldPositionEnforcedCache)
            {
              case WorldPosition.WorldPositionEnforcedCache.NavMeshVec3:
                orderPosition.GetNavMeshVec3();
                break;
              case WorldPosition.WorldPositionEnforcedCache.GroundVec3:
                orderPosition.GetGroundVec3();
                break;
            }
          }
          else
          {
            flag = true;
            this._getPositionIsNavmeshlessCache = true;
          }
          this._getPositionResultCache = orderPosition;
        }
      }
      else
      {
        if (this._getPositionResultCache.IsValid)
        {
          switch (worldPositionEnforcedCache)
          {
            case WorldPosition.WorldPositionEnforcedCache.NavMeshVec3:
              this._getPositionResultCache.GetNavMeshVec3();
              break;
            case WorldPosition.WorldPositionEnforcedCache.GroundVec3:
              this._getPositionResultCache.GetGroundVec3();
              break;
          }
        }
        orderPosition = this._getPositionResultCache;
      }
      if (this._getPositionIsNavmeshlessCache | flag && f.AI?.ActiveBehavior != null)
        f.AI.ActiveBehavior.NavmeshlessTargetPositionPenalty = 1f;
      return orderPosition;
    }

    public void ResetPositionCache()
    {
      this._getPositionFirstSectionCache = WorldPosition.Invalid;
      this._getPositionResultCache = WorldPosition.Invalid;
    }

    public bool AreOrdersPracticallySame(MovementOrder m1, MovementOrder m2, bool isAIControlled)
    {
      if (m1.OrderEnum != m2.OrderEnum)
        return false;
      switch (m1.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.AttackEntity:
          return (NativeObject) m1.TargetEntity == (NativeObject) m2.TargetEntity;
        case MovementOrder.MovementOrderEnum.Charge:
          return true;
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          return m1.TargetFormation == m2.TargetFormation;
        case MovementOrder.MovementOrderEnum.Follow:
          return m1._targetAgent == m2._targetAgent;
        case MovementOrder.MovementOrderEnum.FollowEntity:
          return (NativeObject) m1.TargetEntity == (NativeObject) m2.TargetEntity;
        case MovementOrder.MovementOrderEnum.Guard:
          return m1._targetAgent == m2._targetAgent;
        case MovementOrder.MovementOrderEnum.Move:
          return isAIControlled && (double) m1._position.AsVec2.DistanceSquared(m2._position.AsVec2) < 1.0;
        case MovementOrder.MovementOrderEnum.Retreat:
          return true;
        case MovementOrder.MovementOrderEnum.Stop:
          return true;
        case MovementOrder.MovementOrderEnum.Advance:
          return true;
        case MovementOrder.MovementOrderEnum.FallBack:
          return true;
        default:
          return true;
      }
    }

    public void OnApply(Formation formation)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.AttackEntity:
          formation.FormAttackEntityDetachment(this.TargetEntity);
          break;
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          formation.SetTargetFormation(this.TargetFormation);
          break;
        case MovementOrder.MovementOrderEnum.Follow:
          formation.Arrangement.ReserveMiddleFrontUnitPosition((IFormationUnit) this._targetAgent);
          break;
        case MovementOrder.MovementOrderEnum.Guard:
          Agent localTargetAgent = this._targetAgent;
          formation.ApplyActionOnEachUnit((Action<Agent>) (agent => MovementOrder.OnUnitJoinOrLeaveAux(agent, localTargetAgent, true)));
          break;
        case MovementOrder.MovementOrderEnum.Move:
          formation.SetPositioning(new WorldPosition?(this.CreateNewOrderWorldPosition(formation, WorldPosition.WorldPositionEnforcedCache.None)));
          break;
        case MovementOrder.MovementOrderEnum.Retreat:
          MovementOrder.RetreatAux(formation);
          break;
      }
      MovementOrder.MovementOrderEnum orderEnum = this.OrderEnum;
      formation.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.RefreshBehaviorValues(orderEnum, formation.ArrangementOrder.OrderEnum)));
    }

    public void OnCancel(Formation formation)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.AttackEntity:
          formation.DisbandAttackEntityDetachment();
          break;
        case MovementOrder.MovementOrderEnum.Charge:
          if (!(formation.Team?.TeamAI is TeamAISiegeComponent teamAi))
            break;
          if (teamAi.InnerGate != null && teamAi.InnerGate.IsUsedByFormation(formation))
            formation.StopUsingMachine((UsableMachine) teamAi.InnerGate, true);
          if (teamAi.OuterGate != null && teamAi.OuterGate.IsUsedByFormation(formation))
            formation.StopUsingMachine((UsableMachine) teamAi.OuterGate, true);
          foreach (SiegeLadder ladder in (List<SiegeLadder>) teamAi.Ladders)
          {
            if (ladder.IsUsedByFormation(formation))
              formation.StopUsingMachine((UsableMachine) ladder, true);
          }
          if (formation.AttackEntityOrderDetachment != null)
          {
            formation.DisbandAttackEntityDetachment();
            this.TargetEntity = (GameEntity) null;
          }
          this._position = WorldPosition.Invalid;
          break;
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          formation.SetTargetFormation((Formation) null);
          break;
        case MovementOrder.MovementOrderEnum.Follow:
          formation.Arrangement.ReleaseMiddleFrontUnitPosition();
          break;
        case MovementOrder.MovementOrderEnum.Guard:
          Agent localTargetAgent = this._targetAgent;
          formation.ApplyActionOnEachUnit((Action<Agent>) (agent => MovementOrder.OnUnitJoinOrLeaveAux(agent, localTargetAgent, false)));
          break;
        case MovementOrder.MovementOrderEnum.Retreat:
          formation.ApplyActionOnEachUnitViaBackupList((Action<Agent>) (agent =>
          {
            if (!agent.IsAIControlled)
              return;
            agent.StopRetreatingMoraleComponent();
          }));
          break;
        case MovementOrder.MovementOrderEnum.FallBack:
          if (Mission.Current.IsPositionInsideBoundaries(this.GetPosition(formation)))
            break;
          formation.ApplyActionOnEachUnitViaBackupList((Action<Agent>) (agent =>
          {
            if (!agent.IsAIControlled)
              return;
            agent.StopRetreatingMoraleComponent();
          }));
          break;
      }
    }

    public void OnUnitJoinOrLeave(Formation formation, Agent unit, bool isJoining)
    {
      if (!this.IsApplicable(formation))
        return;
      if (this.OrderEnum == MovementOrder.MovementOrderEnum.Guard)
        MovementOrder.OnUnitJoinOrLeaveAux(unit, this._targetAgent, isJoining);
      if (isJoining)
      {
        if (this.OrderEnum == MovementOrder.MovementOrderEnum.Retreat)
        {
          if (!unit.IsAIControlled)
            return;
          unit.Retreat();
        }
        else
          unit.RefreshBehaviorValues(this.OrderEnum, formation.ArrangementOrder.OrderEnum);
      }
      else
      {
        if (this.OrderEnum != MovementOrder.MovementOrderEnum.Retreat || !unit.IsAIControlled || !unit.IsActive())
          return;
        unit.StopRetreatingMoraleComponent();
      }
    }

    public bool IsApplicable(Formation formation)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.AttackEntity:
          UsableMachine firstScriptOfType1 = this.TargetEntity.GetFirstScriptOfType<UsableMachine>();
          if (firstScriptOfType1 != null)
            return !firstScriptOfType1.IsDestroyed;
          DestructableComponent firstScriptOfType2 = this.TargetEntity.GetFirstScriptOfType<DestructableComponent>();
          return firstScriptOfType2 != null && !firstScriptOfType2.IsDestroyed;
        case MovementOrder.MovementOrderEnum.Charge:
          for (int index = 0; index < Mission.Current.Teams.Count; ++index)
          {
            Team team = Mission.Current.Teams[index];
            if (team.IsEnemyOf(formation.Team) && team.ActiveAgents.Count > 0)
              return true;
          }
          return false;
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          return this.TargetFormation.CountOfUnits > 0;
        case MovementOrder.MovementOrderEnum.Follow:
        case MovementOrder.MovementOrderEnum.Guard:
          return this._targetAgent.IsActive();
        case MovementOrder.MovementOrderEnum.FollowEntity:
          UsableMachine firstScriptOfType3 = this.TargetEntity.GetFirstScriptOfType<UsableMachine>();
          return firstScriptOfType3 == null || !firstScriptOfType3.IsDestroyed;
        default:
          return true;
      }
    }

    private bool IsInstance()
    {
      return this.OrderEnum != MovementOrder.MovementOrderEnum.Invalid && this.OrderEnum != MovementOrder.MovementOrderEnum.Charge && this.OrderEnum != MovementOrder.MovementOrderEnum.Retreat && this.OrderEnum != MovementOrder.MovementOrderEnum.Stop && this.OrderEnum != MovementOrder.MovementOrderEnum.Advance && this.OrderEnum != MovementOrder.MovementOrderEnum.FallBack;
    }

    public bool Tick(Formation formation)
    {
      int num = !this.IsInstance() ? 1 : (this._tickTimer.Check(Mission.Current.CurrentTime) ? 1 : 0);
      this.TickAux();
      if (num == 0)
        return num != 0;
      this.TickOccasionally(formation, this._tickTimer.PreviousDeltaTime);
      return num != 0;
    }

    private void TickOccasionally(Formation formation, float dt)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.Charge:
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          TeamAISiegeComponent teamAi = formation.Team?.TeamAI as TeamAISiegeComponent;
          bool flag1 = false;
          bool flag2 = false;
          bool flag3 = false;
          bool flag4 = false;
          if (!Mission.Current.IsTeleportingAgents && teamAi != null)
          {
            flag4 = TeamAISiegeComponent.IsFormationInsideCastle(formation, false);
            bool flag5 = false;
            foreach (Team team in (List<Team>) formation.Team.Mission.Teams)
            {
              if (team.IsEnemyOf(formation.Team))
              {
                foreach (Formation formation1 in (List<Formation>) team.FormationsIncludingEmpty)
                {
                  if (formation1.CountOfUnits > 0 && flag4 == TeamAISiegeComponent.IsFormationInsideCastle(formation1, false))
                  {
                    flag5 = true;
                    break;
                  }
                }
                if (flag5)
                  break;
              }
            }
            if (!flag5)
            {
              if (flag4 && !teamAi.CalculateIsAnyLaneOpenToGoOutside())
              {
                CastleGate gateToGetThrough = !teamAi.InnerGate.IsGateOpen ? teamAi.InnerGate : teamAi.OuterGate;
                if (gateToGetThrough != null)
                {
                  if (!gateToGetThrough.IsUsedByFormation(formation))
                  {
                    formation.StartUsingMachine((UsableMachine) gateToGetThrough, true);
                    SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == gateToGetThrough.DefenseSide)) ?? TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == FormationAI.BehaviorSide.Middle));
                    TacticalPosition waitPosition = siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine attackerSiegeWeapon1 && !attackerSiegeWeapon1.IsDisabled))?.WaitPosition : (TacticalPosition) null;
                    if (waitPosition != null)
                    {
                      this._position = waitPosition.Position;
                    }
                    else
                    {
                      WorldFrame worldFrame = (siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine attackerSiegeWeapon2 && !attackerSiegeWeapon2.IsDisabled))?.DefenseWaitFrame : new WorldFrame?()) ?? (siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>()?.DefenseWaitFrame : new WorldFrame?()) ?? WorldFrame.Invalid;
                      this._position = worldFrame.Origin.IsValid ? worldFrame.Origin : formation.QuerySystem.MedianPosition;
                    }
                  }
                  flag1 = true;
                }
              }
              else if (!teamAi.CalculateIsAnyLaneOpenToGetInside())
              {
                SiegeLadder usable = (SiegeLadder) null;
                float num1 = float.MaxValue;
                foreach (SiegeLadder ladder in (List<SiegeLadder>) teamAi.Ladders)
                {
                  if (!ladder.IsDeactivated && !ladder.IsDisabled)
                  {
                    float num2 = ladder.WaitFrame.origin.DistanceSquared(formation.QuerySystem.MedianPosition.GetNavMeshVec3());
                    if ((double) num2 < (double) num1)
                    {
                      num1 = num2;
                      usable = ladder;
                    }
                  }
                }
                if (usable != null)
                {
                  if (!usable.IsUsedByFormation(formation))
                  {
                    formation.StartUsingMachine((UsableMachine) usable, true);
                    this._position = usable.WaitFrame.origin.ToWorldPosition();
                  }
                  else if (!this._position.IsValid)
                    this._position = usable.WaitFrame.origin.ToWorldPosition();
                  flag2 = true;
                }
                else
                {
                  CastleGate castleGate = !teamAi.OuterGate.IsGateOpen ? teamAi.OuterGate : teamAi.InnerGate;
                  if (castleGate != null)
                  {
                    flag3 = true;
                    if (formation.AttackEntityOrderDetachment == null)
                    {
                      formation.FormAttackEntityDetachment(castleGate.GameEntity);
                      this.TargetEntity = castleGate.GameEntity;
                      this._position = this.ComputeAttackEntityWaitPosition(formation, castleGate.GameEntity);
                    }
                    else if ((NativeObject) this.TargetEntity != (NativeObject) castleGate.GameEntity)
                    {
                      formation.DisbandAttackEntityDetachment();
                      formation.FormAttackEntityDetachment(castleGate.GameEntity);
                      this.TargetEntity = castleGate.GameEntity;
                      this._position = this.ComputeAttackEntityWaitPosition(formation, castleGate.GameEntity);
                    }
                  }
                }
              }
            }
          }
          if (teamAi != null & flag4 && this._position.IsValid && !flag1)
          {
            this._position = WorldPosition.Invalid;
            formation.SetPositioning(new WorldPosition?(this._position));
          }
          if (teamAi != null && !flag4 && this._position.IsValid && !flag2 && !flag3)
          {
            this._position = WorldPosition.Invalid;
            formation.SetPositioning(new WorldPosition?(this._position));
          }
          if (teamAi != null && formation.AttackEntityOrderDetachment != null && !flag3)
          {
            formation.DisbandAttackEntityDetachment();
            this.TargetEntity = (GameEntity) null;
            this._position = WorldPosition.Invalid;
            formation.SetPositioning(new WorldPosition?(this._position));
          }
          if (!this._position.IsValid)
            break;
          formation.SetPositioning(new WorldPosition?(this._position));
          break;
        case MovementOrder.MovementOrderEnum.FallBack:
          if (Mission.Current.IsPositionInsideBoundaries(this.GetPosition(formation)))
            break;
          MovementOrder.RetreatAux(formation);
          break;
      }
    }

    private void TickAux()
    {
      if (this.OrderEnum != MovementOrder.MovementOrderEnum.Follow)
        return;
      float length = this._targetAgent.GetCurrentVelocity().Length;
      if ((double) length < 0.0099999997764825821)
        this._followState = MovementOrder.FollowState.Stop;
      else if ((double) length < (double) this._targetAgent.Monster.WalkingSpeedLimit * 0.699999988079071)
      {
        if (this._followState == MovementOrder.FollowState.Stop)
        {
          this._followState = MovementOrder.FollowState.Depart;
          this._departStartTime = Mission.Current.CurrentTime;
        }
        else
        {
          if (this._followState != MovementOrder.FollowState.Move)
            return;
          this._followState = MovementOrder.FollowState.Arrive;
        }
      }
      else if (this._followState == MovementOrder.FollowState.Depart)
      {
        if ((double) Mission.Current.CurrentTime - (double) this._departStartTime <= 1.0)
          return;
        this._followState = MovementOrder.FollowState.Move;
      }
      else
        this._followState = MovementOrder.FollowState.Move;
    }

    public void OnArrangementChanged(Formation formation)
    {
      if (!this.IsApplicable(formation) || this.OrderEnum != MovementOrder.MovementOrderEnum.Follow)
        return;
      formation.Arrangement.ReserveMiddleFrontUnitPosition((IFormationUnit) this._targetAgent);
    }

    public void Advance(Formation formation, float distance)
    {
      WorldPosition currentPosition = this.CreateNewOrderWorldPosition(formation, WorldPosition.WorldPositionEnforcedCache.None);
      Vec2 direction = formation.Direction;
      currentPosition.SetVec2(currentPosition.AsVec2 + direction * distance);
      this._positionLambda = (Func<Formation, WorldPosition>) (f => currentPosition);
    }

    public void FallBack(Formation formation, float distance) => this.Advance(formation, -distance);

    private (Agent, float) GetBestAgent(List<Agent> candidateAgents)
    {
      if (candidateAgents.IsEmpty<Agent>())
        return ((Agent) null, float.MaxValue);
      Vec3 targetEntityPos = this.TargetEntity.GlobalPosition;
      Agent agent = candidateAgents.MinBy<Agent, float>((Func<Agent, float>) (ca => ca.Position.DistanceSquared(targetEntityPos)));
      return (agent, agent.Position.DistanceSquared(targetEntityPos));
    }

    private (Agent, float) GetWorstAgent(List<Agent> currentAgents, int requiredAgentCount)
    {
      if (requiredAgentCount <= 0 || currentAgents.Count < requiredAgentCount)
        return ((Agent) null, float.MaxValue);
      Vec3 targetEntityPos = this.TargetEntity.GlobalPosition;
      Agent agent = currentAgents.MaxBy<Agent, float>((Func<Agent, float>) (ca => ca.Position.DistanceSquared(targetEntityPos)));
      return (agent, agent.Position.DistanceSquared(targetEntityPos));
    }

    public MovementOrder GetSubstituteOrder(Formation formation)
    {
      return this.OrderEnum == MovementOrder.MovementOrderEnum.Charge ? MovementOrder.MovementOrderStop : MovementOrder.MovementOrderCharge;
    }

    private Vec2 GetDirectionAux(Formation f)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.Advance:
        case MovementOrder.MovementOrderEnum.FallBack:
          FormationQuerySystem querySystem = f.QuerySystem;
          FormationQuerySystem formationQuerySystem = f.TargetFormation?.QuerySystem ?? querySystem.ClosestEnemyFormation;
          return formationQuerySystem == null ? Vec2.One : (formationQuerySystem.MedianPosition.AsVec2 - querySystem.AveragePosition).Normalized();
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\MovementOrder.cs", nameof (GetDirectionAux), 1798);
          return Vec2.One;
      }
    }

    private WorldPosition GetPositionAux(
      Formation f,
      WorldPosition.WorldPositionEnforcedCache worldPositionEnforcedCache)
    {
      switch (this.OrderEnum)
      {
        case MovementOrder.MovementOrderEnum.Advance:
          if (Mission.Current.Mode == MissionMode.Deployment)
            return f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
          FormationQuerySystem querySystem = f.QuerySystem;
          FormationQuerySystem formationQuerySystem = f.TargetFormation?.QuerySystem ?? querySystem.ClosestEnemyFormation;
          WorldPosition positionAux;
          if (formationQuerySystem == null)
          {
            Agent closestEnemyAgent = querySystem.ClosestEnemyAgent;
            if (closestEnemyAgent == null)
              return f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
            positionAux = closestEnemyAgent.GetWorldPosition();
          }
          else
            positionAux = formationQuerySystem.MedianPosition;
          if (querySystem.IsRangedFormation || querySystem.IsRangedCavalryFormation || querySystem.HasThrowing)
          {
            Vec2 directionAux = this.GetDirectionAux(f);
            positionAux.SetVec2(positionAux.AsVec2 - directionAux * querySystem.MissileRangeAdjusted);
          }
          else if (formationQuerySystem != null)
          {
            Vec2 vec2 = (formationQuerySystem.AveragePosition - f.QuerySystem.AveragePosition).Normalized();
            float num = 2f;
            if ((double) formationQuerySystem.FormationPower < (double) f.QuerySystem.FormationPower * 0.20000000298023224)
              num = 0.1f;
            positionAux.SetVec2(positionAux.AsVec2 - vec2 * num);
          }
          return positionAux;
        case MovementOrder.MovementOrderEnum.FallBack:
          if (Mission.Current.Mode == MissionMode.Deployment)
            return f.CreateNewOrderWorldPosition(worldPositionEnforcedCache);
          Vec2 directionAux1 = this.GetDirectionAux(f);
          WorldPosition medianPosition = f.QuerySystem.MedianPosition;
          medianPosition.SetVec2(f.QuerySystem.AveragePosition - directionAux1 * 7f);
          return medianPosition;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\MovementOrder.cs", nameof (GetPositionAux), 1869);
          return WorldPosition.Invalid;
      }
    }

    public enum MovementOrderEnum
    {
      Invalid,
      AttackEntity,
      Charge,
      ChargeToTarget,
      Follow,
      FollowEntity,
      Guard,
      Move,
      Retreat,
      Stop,
      Advance,
      FallBack,
    }

    public enum MovementStateEnum
    {
      Charge,
      Hold,
      Retreat,
      StandGround,
    }

    public enum Side
    {
      Front,
      Rear,
      Left,
      Right,
    }

    private enum FollowState
    {
      Stop,
      Depart,
      Move,
      Arrive,
    }
  }
}
