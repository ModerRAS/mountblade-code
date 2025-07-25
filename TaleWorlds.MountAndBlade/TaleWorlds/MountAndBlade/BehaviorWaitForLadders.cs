// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorWaitForLadders
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorWaitForLadders : BehaviorComponent
  {
    private const string WallWaitPositionTag = "attacker_wait_pos";
    private List<SiegeLadder> _ladders;
    private WallSegment _breachedWallSegment;
    private TeamAISiegeComponent _teamAISiegeComponent;
    private MovementOrder _stopOrder;
    private MovementOrder _followOrder;
    private BehaviorWaitForLadders.BehaviorState _behaviorState;
    private GameEntity _followedEntity;
    private TacticalPosition _followTacticalPosition;

    public BehaviorWaitForLadders(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._ladders = Mission.Current.ActiveMissionObjects.OfType<SiegeLadder>().ToList<SiegeLadder>();
      this._ladders.RemoveAll((Predicate<SiegeLadder>) (l => l.IsDeactivated || l.WeaponSide != this._behaviorSide));
      this._teamAISiegeComponent = (TeamAISiegeComponent) formation.Team.TeamAI;
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide));
      this._breachedWallSegment = (siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp is WallSegment && (dp as WallSegment).IsBreachedWall)) : (ICastleKeyPosition) null) as WallSegment;
      this.ResetFollowOrder();
      this._stopOrder = MovementOrder.MovementOrderStop;
      if (this._followOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid)
      {
        this.CurrentOrder = this._followOrder;
        this._behaviorState = BehaviorWaitForLadders.BehaviorState.Follow;
      }
      else
      {
        this.CurrentOrder = this._stopOrder;
        this._behaviorState = BehaviorWaitForLadders.BehaviorState.Stop;
      }
    }

    private void ResetFollowOrder()
    {
      this._followedEntity = (GameEntity) null;
      this._followTacticalPosition = (TacticalPosition) null;
      if (this._ladders.Count > 0)
      {
        this._followedEntity = (this._ladders.FirstOrDefault<SiegeLadder>((Func<SiegeLadder, bool>) (l => !l.IsDeactivated && l.InitialWaitPosition.HasScriptOfType<TacticalPosition>())) ?? this._ladders.FirstOrDefault<SiegeLadder>((Func<SiegeLadder, bool>) (l => !l.IsDeactivated))).InitialWaitPosition;
        if ((NativeObject) this._followedEntity == (NativeObject) null)
          this._followedEntity = this._ladders.FirstOrDefault<SiegeLadder>((Func<SiegeLadder, bool>) (l => !l.IsDeactivated)).InitialWaitPosition;
        this._followOrder = MovementOrder.MovementOrderFollowEntity(this._followedEntity);
      }
      else if (this._breachedWallSegment != null)
      {
        this._followedEntity = this._breachedWallSegment.GameEntity.CollectChildrenEntitiesWithTag("attacker_wait_pos").FirstOrDefault<GameEntity>();
        this._followOrder = MovementOrder.MovementOrderFollowEntity(this._followedEntity);
      }
      else
        this._followOrder = MovementOrder.MovementOrderNull;
      if (!((NativeObject) this._followedEntity != (NativeObject) null))
        return;
      this._followTacticalPosition = this._followedEntity.GetFirstScriptOfType<TacticalPosition>();
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this._ladders = Mission.Current.ActiveMissionObjects.OfType<SiegeLadder>().ToList<SiegeLadder>();
      this._ladders.RemoveAll((Predicate<SiegeLadder>) (l => l.IsDeactivated || l.WeaponSide != this._behaviorSide));
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide));
      this._breachedWallSegment = (siegeLane != null ? siegeLane.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp is WallSegment && (dp as WallSegment).IsBreachedWall)) : (ICastleKeyPosition) null) as WallSegment;
      this.ResetFollowOrder();
      this._behaviorState = BehaviorWaitForLadders.BehaviorState.Unset;
    }

    protected override void CalculateCurrentOrder()
    {
      BehaviorWaitForLadders.BehaviorState behaviorState = this._followOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid ? BehaviorWaitForLadders.BehaviorState.Follow : BehaviorWaitForLadders.BehaviorState.Stop;
      if (behaviorState == this._behaviorState)
        return;
      if (behaviorState == BehaviorWaitForLadders.BehaviorState.Follow)
      {
        this.CurrentOrder = this._followOrder;
        if (this._followTacticalPosition != null)
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(this._followTacticalPosition.Direction);
        else
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else
      {
        this.CurrentOrder = this._stopOrder;
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      this._behaviorState = behaviorState;
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this._ladders.RemoveAll((Predicate<SiegeLadder>) (l => l.IsDeactivated)) > 0)
      {
        this.ResetFollowOrder();
        this.CalculateCurrentOrder();
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._behaviorState == BehaviorWaitForLadders.BehaviorState.Follow && this._followTacticalPosition != null)
        this.Formation.FormOrder = FormOrder.FormOrderCustom(this._followTacticalPosition.Width);
      foreach (SiegeLadder ladder in this._ladders)
      {
        if (ladder.IsUsedByFormation(this.Formation))
          this.Formation.StopUsingMachine((UsableMachine) ladder);
      }
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.ArrangementOrder = this.Formation.QuerySystem.HasShield ? ArrangementOrder.ArrangementOrderShieldWall : ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      float aiWeight = 0.0f;
      if (this._followOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid && !this._teamAISiegeComponent.AreLaddersReady)
        aiWeight = !this._teamAISiegeComponent.IsCastleBreached() ? 1f : 0.5f;
      return aiWeight;
    }

    private enum BehaviorState
    {
      Unset,
      Stop,
      Follow,
    }
  }
}
