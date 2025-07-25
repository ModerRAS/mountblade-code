// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorEliminateEnemyInsideCastle
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorEliminateEnemyInsideCastle : BehaviorComponent
  {
    private BehaviorEliminateEnemyInsideCastle.BehaviorState _behaviorState;
    private MovementOrder _gatherOrder;
    private MovementOrder _attackOrder;
    private FacingOrder _gatheringFacingOrder;
    private FacingOrder _attackFacingOrder;
    private TacticalPosition _gatheringTacticalPos;
    private Formation _targetEnemyFormation;

    public BehaviorEliminateEnemyInsideCastle(Formation formation)
      : base(formation)
    {
      this._behaviorState = BehaviorEliminateEnemyInsideCastle.BehaviorState.UnSet;
      this._behaviorSide = formation.AI.Side;
      this.ResetOrderPositions();
    }

    protected override void CalculateCurrentOrder()
    {
      base.CalculateCurrentOrder();
      this.CurrentOrder = this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
    }

    private void DetermineMostImportantInvadingEnemyFormation()
    {
      float num = float.MinValue;
      this._targetEnemyFormation = (Formation) null;
      foreach (Team team in (List<Team>) this.Formation.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Formation.Team))
        {
          for (int index = 0; index < Math.Min(team.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
          {
            Formation formation = team.FormationsIncludingSpecialAndEmpty[index];
            if (formation.CountOfUnits > 0 && TeamAISiegeComponent.IsFormationInsideCastle(formation, true))
            {
              float formationPower = formation.QuerySystem.FormationPower;
              if ((double) formationPower > (double) num)
              {
                num = formationPower;
                this._targetEnemyFormation = formation;
              }
            }
          }
        }
      }
    }

    private void ConfirmGatheringSide()
    {
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide));
      if (siegeLane != null && siegeLane.LaneState < SiegeLane.LaneStateEnum.Conceited)
        return;
      this.ResetOrderPositions();
    }

    private FormationAI.BehaviorSide DetermineGatheringSide()
    {
      this.DetermineMostImportantInvadingEnemyFormation();
      if (this._targetEnemyFormation == null)
      {
        if (this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking)
          this._behaviorState = BehaviorEliminateEnemyInsideCastle.BehaviorState.UnSet;
        return this._behaviorSide;
      }
      int connectedSides = TeamAISiegeComponent.QuerySystem.DeterminePositionAssociatedSide(this._targetEnemyFormation.QuerySystem.MedianPosition.GetNavMeshVec3());
      IEnumerable<SiegeLane> source1 = TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneState != SiegeLane.LaneStateEnum.Conceited && !SiegeQuerySystem.AreSidesRelated(sl.LaneSide, connectedSides)));
      FormationAI.BehaviorSide gatheringSide = this._behaviorSide;
      if (source1.Any<SiegeLane>())
      {
        if (source1.Count<SiegeLane>() > 1)
        {
          int leastDangerousLaneState = source1.Min<SiegeLane>((Func<SiegeLane, int>) (pgl => (int) pgl.LaneState));
          IEnumerable<SiegeLane> source2 = source1.Where<SiegeLane>((Func<SiegeLane, bool>) (pgl => pgl.LaneState == (SiegeLane.LaneStateEnum) leastDangerousLaneState));
          gatheringSide = source2.Count<SiegeLane>() > 1 ? source2.MinBy<SiegeLane, int>((Func<SiegeLane, int>) (ldl => SiegeQuerySystem.SideDistance(1 << connectedSides, 1 << (int) (ldl.LaneSide & (FormationAI.BehaviorSide) 31)))).LaneSide : source2.First<SiegeLane>().LaneSide;
        }
        else
          gatheringSide = source1.First<SiegeLane>().LaneSide;
      }
      return gatheringSide;
    }

    private void ResetOrderPositions()
    {
      this._behaviorSide = this.DetermineGatheringSide();
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide));
      WorldFrame? nullable;
      if (siegeLane == null)
      {
        nullable = new WorldFrame?();
      }
      else
      {
        List<ICastleKeyPosition> defensePoints = siegeLane.DefensePoints;
        nullable = defensePoints != null ? defensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled))?.DefenseWaitFrame : new WorldFrame?();
      }
      WorldFrame worldFrame = nullable ?? WorldFrame.Invalid;
      TacticalPosition tacticalPosition;
      if (siegeLane == null)
      {
        tacticalPosition = (TacticalPosition) null;
      }
      else
      {
        List<ICastleKeyPosition> defensePoints = siegeLane.DefensePoints;
        tacticalPosition = defensePoints != null ? defensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled))?.WaitPosition : (TacticalPosition) null;
      }
      if (tacticalPosition == null)
      {
        if (siegeLane == null)
        {
          tacticalPosition = (TacticalPosition) null;
        }
        else
        {
          List<ICastleKeyPosition> defensePoints = siegeLane.DefensePoints;
          tacticalPosition = defensePoints != null ? defensePoints.FirstOrDefault<ICastleKeyPosition>().WaitPosition : (TacticalPosition) null;
        }
      }
      this._gatheringTacticalPos = tacticalPosition;
      if (this._gatheringTacticalPos != null)
      {
        this._gatherOrder = MovementOrder.MovementOrderMove(this._gatheringTacticalPos.Position);
        this._gatheringFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else if (worldFrame.Origin.IsValid)
      {
        double num = (double) worldFrame.Rotation.f.Normalize();
        this._gatherOrder = MovementOrder.MovementOrderMove(worldFrame.Origin);
        this._gatheringFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else
      {
        this._gatherOrder = MovementOrder.MovementOrderMove(this.Formation.QuerySystem.MedianPosition);
        this._gatheringFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      this._attackOrder = MovementOrder.MovementOrderChargeToTarget(this._targetEnemyFormation);
      this._attackFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.CurrentOrder = this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
      this.CurrentFacingOrder = this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking ? this._attackFacingOrder : this._gatheringFacingOrder;
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this.ResetOrderPositions();
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this._behaviorState != BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking)
        this.ConfirmGatheringSide();
      bool flag;
      if (this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking)
      {
        flag = this._targetEnemyFormation != null;
      }
      else
      {
        int num;
        if (this._targetEnemyFormation != null)
        {
          WorldPosition worldPosition = this.Formation.QuerySystem.MedianPosition;
          Vec3 navMeshVec3_1 = worldPosition.GetNavMeshVec3();
          ref Vec3 local = ref navMeshVec3_1;
          worldPosition = this._gatherOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
          Vec3 navMeshVec3_2 = worldPosition.GetNavMeshVec3();
          num = (double) local.DistanceSquared(navMeshVec3_2) < 100.0 ? 1 : ((double) this.Formation.QuerySystem.FormationIntegrityData.DeviationOfPositionsExcludeFarAgents / ((double) this.Formation.QuerySystem.IdealAverageDisplacement != 0.0 ? (double) this.Formation.QuerySystem.IdealAverageDisplacement : 1.0) <= 3.0 ? 1 : 0);
        }
        else
          num = 0;
        flag = num != 0;
      }
      BehaviorEliminateEnemyInsideCastle.BehaviorState behaviorState = flag ? BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking : BehaviorEliminateEnemyInsideCastle.BehaviorState.Gathering;
      if (behaviorState != this._behaviorState)
      {
        this._behaviorState = behaviorState;
        this.CurrentOrder = this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
        this.CurrentFacingOrder = this._behaviorState == BehaviorEliminateEnemyInsideCastle.BehaviorState.Attacking ? this._attackFacingOrder : this._gatheringFacingOrder;
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._behaviorState != BehaviorEliminateEnemyInsideCastle.BehaviorState.Gathering || this._gatheringTacticalPos == null)
        return;
      this.Formation.FormOrder = FormOrder.FormOrderCustom(this._gatheringTacticalPos.Width);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this._behaviorState = BehaviorEliminateEnemyInsideCastle.BehaviorState.UnSet;
      this._behaviorSide = this.Formation.AI.Side;
      this.ResetOrderPositions();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override float GetAiWeight() => 1f;

    private enum BehaviorState
    {
      UnSet,
      Gathering,
      Attacking,
    }
  }
}
