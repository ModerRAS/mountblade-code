// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorAssaultWalls
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorAssaultWalls : BehaviorComponent
  {
    private BehaviorAssaultWalls.BehaviorState _behaviorState;
    private List<IPrimarySiegeWeapon> _primarySiegeWeapons;
    private WallSegment _wallSegment;
    private CastleGate _innerGate;
    private TeamAISiegeComponent _teamAISiegeComponent;
    private MovementOrder _attackEntityOrderInnerGate;
    private MovementOrder _attackEntityOrderOuterGate;
    private MovementOrder _chargeOrder;
    private MovementOrder _stopOrder;
    private MovementOrder _castleGateMoveOrder;
    private MovementOrder _wallSegmentMoveOrder;
    private FacingOrder _facingOrder;
    protected ArrangementOrder CurrentArrangementOrder;
    private bool _isGateLane;

    private void ResetOrderPositions()
    {
      this._primarySiegeWeapons = this._teamAISiegeComponent.PrimarySiegeWeapons.ToList<IPrimarySiegeWeapon>();
      this._primarySiegeWeapons.RemoveAll((Predicate<IPrimarySiegeWeapon>) (uM => uM.WeaponSide != this._behaviorSide));
      IEnumerable<ICastleKeyPosition> source = TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide)).SelectMany<SiegeLane, ICastleKeyPosition>((Func<SiegeLane, IEnumerable<ICastleKeyPosition>>) (sila => (IEnumerable<ICastleKeyPosition>) sila.DefensePoints));
      this._innerGate = this._teamAISiegeComponent.InnerGate;
      this._isGateLane = this._teamAISiegeComponent.OuterGate.DefenseSide == this._behaviorSide;
      this._wallSegment = !this._isGateLane ? (!(source.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp is WallSegment && (dp as WallSegment).IsBreachedWall)) is WallSegment wallSegment) ? this._primarySiegeWeapons.MaxBy<IPrimarySiegeWeapon, float>((Func<IPrimarySiegeWeapon, float>) (psw => psw.SiegeWeaponPriority)).TargetCastlePosition as WallSegment : wallSegment) : (WallSegment) null;
      this._stopOrder = MovementOrder.MovementOrderStop;
      this._chargeOrder = MovementOrder.MovementOrderCharge;
      bool flag = this._teamAISiegeComponent.OuterGate != null && this._behaviorSide == this._teamAISiegeComponent.OuterGate.DefenseSide;
      this._attackEntityOrderOuterGate = !flag || this._teamAISiegeComponent.OuterGate.IsDeactivated || this._teamAISiegeComponent.OuterGate.State == CastleGate.GateState.Open ? MovementOrder.MovementOrderStop : MovementOrder.MovementOrderAttackEntity(this._teamAISiegeComponent.OuterGate.GameEntity, false);
      this._attackEntityOrderInnerGate = !flag || this._teamAISiegeComponent.InnerGate == null || this._teamAISiegeComponent.InnerGate.IsDeactivated || this._teamAISiegeComponent.InnerGate.State == CastleGate.GateState.Open ? MovementOrder.MovementOrderStop : MovementOrder.MovementOrderAttackEntity(this._teamAISiegeComponent.InnerGate.GameEntity, false);
      this._castleGateMoveOrder = MovementOrder.MovementOrderMove(this._teamAISiegeComponent.OuterGate.MiddleFrame.Origin);
      this._wallSegmentMoveOrder = !this._isGateLane ? MovementOrder.MovementOrderMove(this._wallSegment.MiddleFrame.Origin) : this._castleGateMoveOrder;
      this._facingOrder = FacingOrder.FacingOrderLookAtEnemy;
    }

    public BehaviorAssaultWalls(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 0.0f;
      this._behaviorSide = formation.AI.Side;
      this._teamAISiegeComponent = (TeamAISiegeComponent) formation.Team.TeamAI;
      this._behaviorState = BehaviorAssaultWalls.BehaviorState.Deciding;
      this.ResetOrderPositions();
      this.CurrentOrder = this._stopOrder;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      return behaviorString;
    }

    private BehaviorAssaultWalls.BehaviorState CheckAndChangeState()
    {
      switch (this._behaviorState)
      {
        case BehaviorAssaultWalls.BehaviorState.Deciding:
          if (!this._isGateLane && this._wallSegment == null)
            return BehaviorAssaultWalls.BehaviorState.Charging;
          if (!this._isGateLane)
            return BehaviorAssaultWalls.BehaviorState.ClimbWall;
          return this._teamAISiegeComponent.OuterGate.IsGateOpen && this._teamAISiegeComponent.InnerGate.IsGateOpen ? BehaviorAssaultWalls.BehaviorState.Charging : BehaviorAssaultWalls.BehaviorState.AttackEntity;
        case BehaviorAssaultWalls.BehaviorState.ClimbWall:
          if (this._wallSegment == null)
            return BehaviorAssaultWalls.BehaviorState.Charging;
          bool flag = false;
          if (this._behaviorSide < FormationAI.BehaviorSide.BehaviorSideNotSet)
          {
            SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes[(int) this._behaviorSide];
            flag = siegeLane.IsUnderAttack() && !siegeLane.IsDefended();
          }
          return flag || (double) this.Formation.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(this._wallSegment.MiddleFrame.Origin.GetNavMeshVec3()) < (double) this.Formation.Depth * (double) this.Formation.Depth ? BehaviorAssaultWalls.BehaviorState.TakeControl : BehaviorAssaultWalls.BehaviorState.ClimbWall;
        case BehaviorAssaultWalls.BehaviorState.AttackEntity:
          return this._teamAISiegeComponent.OuterGate.IsGateOpen && this._teamAISiegeComponent.InnerGate.IsGateOpen ? BehaviorAssaultWalls.BehaviorState.Charging : BehaviorAssaultWalls.BehaviorState.AttackEntity;
        case BehaviorAssaultWalls.BehaviorState.TakeControl:
          if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
            return BehaviorAssaultWalls.BehaviorState.Deciding;
          if (TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide)).IsDefended())
            return BehaviorAssaultWalls.BehaviorState.TakeControl;
          return !this._teamAISiegeComponent.OuterGate.IsGateOpen || !this._teamAISiegeComponent.InnerGate.IsGateOpen ? BehaviorAssaultWalls.BehaviorState.MoveToGate : BehaviorAssaultWalls.BehaviorState.Charging;
        case BehaviorAssaultWalls.BehaviorState.MoveToGate:
          return this._teamAISiegeComponent.OuterGate.IsGateOpen && this._teamAISiegeComponent.InnerGate.IsGateOpen ? BehaviorAssaultWalls.BehaviorState.Charging : BehaviorAssaultWalls.BehaviorState.MoveToGate;
        case BehaviorAssaultWalls.BehaviorState.Charging:
          if ((!this._isGateLane || !this._teamAISiegeComponent.OuterGate.IsGateOpen || !this._teamAISiegeComponent.InnerGate.IsGateOpen) && this._behaviorSide < FormationAI.BehaviorSide.BehaviorSideNotSet)
          {
            if (!TeamAISiegeComponent.SiegeLanes[(int) this._behaviorSide].IsOpen && !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation, true))
              return BehaviorAssaultWalls.BehaviorState.Deciding;
            if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
              return BehaviorAssaultWalls.BehaviorState.Stop;
          }
          return BehaviorAssaultWalls.BehaviorState.Charging;
        default:
          return this.Formation.QuerySystem.ClosestEnemyFormation != null ? BehaviorAssaultWalls.BehaviorState.Deciding : BehaviorAssaultWalls.BehaviorState.Stop;
      }
    }

    protected override void CalculateCurrentOrder()
    {
      switch (this._behaviorState)
      {
        case BehaviorAssaultWalls.BehaviorState.Deciding:
          this.CurrentOrder = this._stopOrder;
          break;
        case BehaviorAssaultWalls.BehaviorState.ClimbWall:
          this.CurrentOrder = this._wallSegmentMoveOrder;
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(-this._wallSegment.MiddleFrame.Rotation.f.AsVec2.Normalized());
          this.CurrentArrangementOrder = ArrangementOrder.ArrangementOrderLine;
          break;
        case BehaviorAssaultWalls.BehaviorState.AttackEntity:
          if (!this._teamAISiegeComponent.OuterGate.IsGateOpen)
            this.CurrentOrder = this._attackEntityOrderOuterGate;
          else
            this.CurrentOrder = this._attackEntityOrderInnerGate;
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
          this.CurrentArrangementOrder = ArrangementOrder.ArrangementOrderLine;
          break;
        case BehaviorAssaultWalls.BehaviorState.TakeControl:
          if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
            this.CurrentOrder = MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestEnemyFormation.Formation);
          else
            this.CurrentOrder = MovementOrder.MovementOrderCharge;
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(-this._wallSegment.MiddleFrame.Rotation.f.AsVec2.Normalized());
          this.CurrentArrangementOrder = ArrangementOrder.ArrangementOrderLine;
          break;
        case BehaviorAssaultWalls.BehaviorState.MoveToGate:
          this.CurrentOrder = this._castleGateMoveOrder;
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(-this._innerGate.MiddleFrame.Rotation.f.AsVec2.Normalized());
          this.CurrentArrangementOrder = ArrangementOrder.ArrangementOrderLine;
          break;
        case BehaviorAssaultWalls.BehaviorState.Charging:
          this.CurrentOrder = this._chargeOrder;
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
          this.CurrentArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
          break;
        case BehaviorAssaultWalls.BehaviorState.Stop:
          this.CurrentOrder = this._stopOrder;
          break;
      }
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this.ResetOrderPositions();
      this._behaviorState = BehaviorAssaultWalls.BehaviorState.Deciding;
    }

    public override void TickOccasionally()
    {
      this._behaviorState = this.CheckAndChangeState();
      this.CalculateCurrentOrder();
      foreach (IPrimarySiegeWeapon primarySiegeWeapon in this._primarySiegeWeapons)
      {
        UsableMachine usableMachine = primarySiegeWeapon as UsableMachine;
        if (!usableMachine.IsDeactivated && !primarySiegeWeapon.HasCompletedAction() && !usableMachine.IsUsedByFormation(this.Formation))
          this.Formation.StartUsingMachine(primarySiegeWeapon as UsableMachine);
      }
      if (this._behaviorState == BehaviorAssaultWalls.BehaviorState.MoveToGate)
      {
        CastleGate innerGate = this._teamAISiegeComponent.InnerGate;
        if (innerGate != null && !innerGate.IsGateOpen && !innerGate.IsDestroyed)
        {
          if (!innerGate.IsUsedByFormation(this.Formation))
            this.Formation.StartUsingMachine((UsableMachine) innerGate);
        }
        else
        {
          CastleGate outerGate = this._teamAISiegeComponent.OuterGate;
          if (outerGate != null && !outerGate.IsGateOpen && !outerGate.IsDestroyed && !outerGate.IsUsedByFormation(this.Formation))
            this.Formation.StartUsingMachine((UsableMachine) outerGate);
        }
      }
      else
      {
        if (this.Formation.Detachments.Contains((IDetachment) this._teamAISiegeComponent.OuterGate))
          this.Formation.StopUsingMachine((UsableMachine) this._teamAISiegeComponent.OuterGate);
        if (this.Formation.Detachments.Contains((IDetachment) this._teamAISiegeComponent.InnerGate))
          this.Formation.StopUsingMachine((UsableMachine) this._teamAISiegeComponent.InnerGate);
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = this.CurrentArrangementOrder;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight()
    {
      float aiWeight = 0.0f;
      if (this._teamAISiegeComponent != null)
      {
        if (this._primarySiegeWeapons.Any<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (psw => psw.HasCompletedAction())) || this._wallSegment != null)
          aiWeight = !this._teamAISiegeComponent.IsCastleBreached() ? 0.25f : 0.75f;
        else if (this._teamAISiegeComponent.OuterGate.DefenseSide == this._behaviorSide)
          aiWeight = 0.1f;
      }
      return aiWeight;
    }

    private enum BehaviorState
    {
      Deciding,
      ClimbWall,
      AttackEntity,
      TakeControl,
      MoveToGate,
      Charging,
      Stop,
    }
  }
}
