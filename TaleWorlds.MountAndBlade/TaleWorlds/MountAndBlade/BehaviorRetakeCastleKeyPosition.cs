// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorRetakeCastleKeyPosition
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
  public class BehaviorRetakeCastleKeyPosition : BehaviorComponent
  {
    private BehaviorRetakeCastleKeyPosition.BehaviorState _behaviorState;
    private MovementOrder _gatherOrder;
    private MovementOrder _attackOrder;
    private FacingOrder _gatheringFacingOrder;
    private FacingOrder _attackFacingOrder;
    private TacticalPosition _gatheringTacticalPos;
    private FormationAI.BehaviorSide _gatheringSide;

    public BehaviorRetakeCastleKeyPosition(Formation formation)
      : base(formation)
    {
      this._behaviorState = BehaviorRetakeCastleKeyPosition.BehaviorState.UnSet;
      this._behaviorSide = formation.AI.Side;
      this.ResetOrderPositions();
    }

    protected override void CalculateCurrentOrder()
    {
      base.CalculateCurrentOrder();
      this.CurrentOrder = this._behaviorState == BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
    }

    private FormationAI.BehaviorSide DetermineGatheringSide()
    {
      IEnumerable<SiegeLane> source = TeamAISiegeComponent.SiegeLanes.Where<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide != this._behaviorSide && sl.LaneState != SiegeLane.LaneStateEnum.Conceited && sl.DefenderOrigin.IsValid));
      if (!source.Any<SiegeLane>())
        return this._behaviorSide;
      int nearestSafeSideDistance = source.Min<SiegeLane>((Func<SiegeLane, int>) (pgl => SiegeQuerySystem.SideDistance(1 << (int) (this._behaviorSide & (FormationAI.BehaviorSide) 31), 1 << (int) (pgl.LaneSide & (FormationAI.BehaviorSide) 31))));
      return source.Where<SiegeLane>((Func<SiegeLane, bool>) (pgl => SiegeQuerySystem.SideDistance(1 << (int) (this._behaviorSide & (FormationAI.BehaviorSide) 31), 1 << (int) (pgl.LaneSide & (FormationAI.BehaviorSide) 31)) == nearestSafeSideDistance)).MinBy<SiegeLane, float>((Func<SiegeLane, float>) (pgl => pgl.DefenderOrigin.GetGroundVec3().DistanceSquared(this.Formation.QuerySystem.MedianPosition.GetGroundVec3()))).LaneSide;
    }

    private void ConfirmGatheringSide()
    {
      SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._gatheringSide));
      if (siegeLane != null && siegeLane.LaneState < SiegeLane.LaneStateEnum.Conceited)
        return;
      this.ResetOrderPositions();
    }

    private void ResetOrderPositions()
    {
      this._behaviorState = BehaviorRetakeCastleKeyPosition.BehaviorState.UnSet;
      this._gatheringSide = this.DetermineGatheringSide();
      SiegeLane siegeLane1 = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._gatheringSide));
      ICastleKeyPosition castleKeyPosition1 = siegeLane1.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled));
      WorldFrame worldFrame = castleKeyPosition1 != null ? castleKeyPosition1.DefenseWaitFrame : siegeLane1.DefensePoints.FirstOrDefault<ICastleKeyPosition>().DefenseWaitFrame;
      this._gatheringTacticalPos = siegeLane1.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled))?.WaitPosition;
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
      SiegeLane siegeLane2 = TeamAISiegeComponent.SiegeLanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (sl => sl.LaneSide == this._behaviorSide));
      ICastleKeyPosition castleKeyPosition2 = siegeLane2.DefensePoints.FirstOrDefault<ICastleKeyPosition>((Func<ICastleKeyPosition, bool>) (dp => dp.AttackerSiegeWeapon is UsableMachine && !(dp.AttackerSiegeWeapon as UsableMachine).IsDisabled));
      this._attackOrder = MovementOrder.MovementOrderMove(castleKeyPosition2 != null ? castleKeyPosition2.MiddleFrame.Origin : siegeLane2.DefensePoints.FirstOrDefault<ICastleKeyPosition>().MiddleFrame.Origin);
      this._attackFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.CurrentOrder = this._behaviorState == BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
      this.CurrentFacingOrder = this._behaviorState == BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking ? this._attackFacingOrder : this._gatheringFacingOrder;
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this.ResetOrderPositions();
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      if (this._behaviorState != BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking)
        this.ConfirmGatheringSide();
      bool flag = true;
      if (this._behaviorState != BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking)
      {
        WorldPosition worldPosition = this.Formation.QuerySystem.MedianPosition;
        Vec3 navMeshVec3_1 = worldPosition.GetNavMeshVec3();
        ref Vec3 local = ref navMeshVec3_1;
        worldPosition = this._gatherOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
        Vec3 navMeshVec3_2 = worldPosition.GetNavMeshVec3();
        flag = (double) local.DistanceSquared(navMeshVec3_2) < 100.0 || (double) this.Formation.QuerySystem.FormationIntegrityData.DeviationOfPositionsExcludeFarAgents / ((double) this.Formation.QuerySystem.IdealAverageDisplacement != 0.0 ? (double) this.Formation.QuerySystem.IdealAverageDisplacement : 1.0) <= 3.0;
      }
      BehaviorRetakeCastleKeyPosition.BehaviorState behaviorState = flag ? BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking : BehaviorRetakeCastleKeyPosition.BehaviorState.Gathering;
      if (behaviorState != this._behaviorState)
      {
        this._behaviorState = behaviorState;
        this.CurrentOrder = this._behaviorState == BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking ? this._attackOrder : this._gatherOrder;
        this.CurrentFacingOrder = this._behaviorState == BehaviorRetakeCastleKeyPosition.BehaviorState.Attacking ? this._attackFacingOrder : this._gatheringFacingOrder;
      }
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._behaviorState != BehaviorRetakeCastleKeyPosition.BehaviorState.Gathering || this._gatheringTacticalPos == null)
        return;
      this.Formation.FormOrder = FormOrder.FormOrderCustom(this._gatheringTacticalPos.Width);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this._behaviorState = BehaviorRetakeCastleKeyPosition.BehaviorState.UnSet;
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
