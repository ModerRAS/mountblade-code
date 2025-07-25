// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDefendCastleKeyPosition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDefendCastleKeyPosition : BehaviorComponent
  {
    private TeamAISiegeComponent _teamAISiegeDefender;
    private CastleGate _innerGate;
    private CastleGate _outerGate;
    private List<SiegeLadder> _laddersOnThisSide;
    private BehaviorDefendCastleKeyPosition.BehaviorState _behaviorState;
    private MovementOrder _waitOrder;
    private MovementOrder _readyOrder;
    private FacingOrder _waitFacingOrder;
    private FacingOrder _readyFacingOrder;
    private TacticalPosition _tacticalMiddlePos;
    private TacticalPosition _tacticalWaitPos;
    private bool _hasFormedShieldWall;
    private WorldPosition _readyOrderPosition;

    public override float NavmeshlessTargetPositionPenalty => 1f;

    public BehaviorDefendCastleKeyPosition(Formation formation)
      : base(formation)
    {
      this._teamAISiegeDefender = formation.Team.TeamAI as TeamAISiegeComponent;
      this._behaviorState = BehaviorDefendCastleKeyPosition.BehaviorState.UnSet;
      this._laddersOnThisSide = new List<SiegeLadder>();
      this.ResetOrderPositions();
      this._hasFormedShieldWall = true;
    }

    protected override void CalculateCurrentOrder()
    {
      base.CalculateCurrentOrder();
      this.CurrentOrder = this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyOrder : this._waitOrder;
      this.CurrentFacingOrder = this.Formation.QuerySystem.ClosestEnemyFormation == null || !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestEnemyFormation.Formation, true) ? (this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyFacingOrder : this._waitFacingOrder) : FacingOrder.FacingOrderLookAtEnemy;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      return behaviorString;
    }

    private void ResetOrderPositions()
    {
      this._behaviorSide = this.Formation.AI.Side;
      this._innerGate = (CastleGate) null;
      this._outerGate = (CastleGate) null;
      this._laddersOnThisSide.Clear();
      WorldFrame worldFrame1;
      WorldFrame worldFrame2;
      if (this._teamAISiegeDefender.OuterGate.DefenseSide == this._behaviorSide)
      {
        CastleGate outerGate = this._teamAISiegeDefender.OuterGate;
        this._innerGate = this._teamAISiegeDefender.InnerGate;
        this._outerGate = this._teamAISiegeDefender.OuterGate;
        worldFrame1 = outerGate.MiddleFrame;
        worldFrame2 = outerGate.DefenseWaitFrame;
        this._tacticalMiddlePos = outerGate.MiddlePosition;
        this._tacticalWaitPos = outerGate.WaitPosition;
      }
      else
      {
        WallSegment wallSegment = this._teamAISiegeDefender.WallSegments.Where<WallSegment>((Func<WallSegment, bool>) (ws => ws.DefenseSide == this._behaviorSide && ws.IsBreachedWall)).FirstOrDefault<WallSegment>();
        if (wallSegment != null)
        {
          worldFrame1 = wallSegment.MiddleFrame;
          worldFrame2 = wallSegment.DefenseWaitFrame;
          this._tacticalMiddlePos = wallSegment.MiddlePosition;
          this._tacticalWaitPos = wallSegment.WaitPosition;
        }
        else
        {
          IEnumerable<IPrimarySiegeWeapon> source = this._teamAISiegeDefender.PrimarySiegeWeapons.Where<IPrimarySiegeWeapon>((Func<IPrimarySiegeWeapon, bool>) (sw =>
          {
            if (sw.WeaponSide != this._behaviorSide)
              return false;
            return sw is SiegeWeapon siegeWeapon2 && !siegeWeapon2.IsDestroyed && !siegeWeapon2.IsDeactivated || sw.HasCompletedAction();
          }));
          if (!source.Any<IPrimarySiegeWeapon>())
          {
            worldFrame1 = WorldFrame.Invalid;
            worldFrame2 = WorldFrame.Invalid;
            this._tacticalMiddlePos = (TacticalPosition) null;
            this._tacticalWaitPos = (TacticalPosition) null;
          }
          else
          {
            this._laddersOnThisSide = source.OfType<SiegeLadder>().ToList<SiegeLadder>();
            ICastleKeyPosition targetCastlePosition = source.FirstOrDefault<IPrimarySiegeWeapon>().TargetCastlePosition as ICastleKeyPosition;
            worldFrame1 = targetCastlePosition.MiddleFrame;
            worldFrame2 = targetCastlePosition.DefenseWaitFrame;
            this._tacticalMiddlePos = targetCastlePosition.MiddlePosition;
            this._tacticalWaitPos = targetCastlePosition.WaitPosition;
          }
        }
      }
      if (this._tacticalMiddlePos != null)
      {
        this._readyOrderPosition = this._tacticalMiddlePos.Position;
        this._readyOrder = MovementOrder.MovementOrderMove(this._readyOrderPosition);
        this._readyFacingOrder = FacingOrder.FacingOrderLookAtDirection(this._tacticalMiddlePos.Direction);
      }
      else if (worldFrame1.Origin.IsValid)
      {
        double num = (double) worldFrame1.Rotation.f.Normalize();
        this._readyOrderPosition = worldFrame1.Origin;
        this._readyOrder = MovementOrder.MovementOrderMove(this._readyOrderPosition);
        this._readyFacingOrder = FacingOrder.FacingOrderLookAtDirection(worldFrame1.Rotation.f.AsVec2);
      }
      else
      {
        this._readyOrderPosition = WorldPosition.Invalid;
        this._readyOrder = MovementOrder.MovementOrderStop;
        this._readyFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      if (this._tacticalWaitPos != null)
      {
        this._waitOrder = MovementOrder.MovementOrderMove(this._tacticalWaitPos.Position);
        this._waitFacingOrder = FacingOrder.FacingOrderLookAtDirection(this._tacticalWaitPos.Direction);
      }
      else if (worldFrame2.Origin.IsValid)
      {
        double num = (double) worldFrame2.Rotation.f.Normalize();
        this._waitOrder = MovementOrder.MovementOrderMove(worldFrame2.Origin);
        this._waitFacingOrder = FacingOrder.FacingOrderLookAtDirection(worldFrame2.Rotation.f.AsVec2);
      }
      else
      {
        this._waitOrder = MovementOrder.MovementOrderStop;
        this._waitFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      this.CurrentOrder = this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyOrder : this._waitOrder;
      this.CurrentFacingOrder = this.Formation.QuerySystem.ClosestEnemyFormation == null || !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestEnemyFormation.Formation, true) ? (this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyFacingOrder : this._waitFacingOrder) : FacingOrder.FacingOrderLookAtEnemy;
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this.ResetOrderPositions();
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      bool flag1 = false;
      if (this._teamAISiegeDefender != null && !this.Formation.IsDeployment)
      {
        for (int index1 = 0; index1 < TeamAISiegeComponent.SiegeLanes.Count; ++index1)
        {
          SiegeLane siegeLane = TeamAISiegeComponent.SiegeLanes[index1];
          if (siegeLane.LaneSide == this._behaviorSide)
          {
            if (siegeLane.IsOpen)
            {
              flag1 = true;
            }
            else
            {
              for (int index2 = 0; index2 < siegeLane.PrimarySiegeWeapons.Count; ++index2)
              {
                IPrimarySiegeWeapon primarySiegeWeapon = siegeLane.PrimarySiegeWeapons[index2];
                if (primarySiegeWeapon is SiegeLadder siegeLadder)
                {
                  if (siegeLadder.IsUsed)
                  {
                    flag1 = true;
                    break;
                  }
                }
                else if ((primarySiegeWeapon as SiegeWeapon).GetComponent<SiegeWeaponMovementComponent>().HasApproachedTarget)
                {
                  flag1 = true;
                  break;
                }
              }
            }
          }
        }
      }
      BehaviorDefendCastleKeyPosition.BehaviorState behaviorState = flag1 ? BehaviorDefendCastleKeyPosition.BehaviorState.Ready : BehaviorDefendCastleKeyPosition.BehaviorState.Waiting;
      bool flag2 = false;
      if (behaviorState != this._behaviorState)
      {
        this._behaviorState = behaviorState;
        this.CurrentOrder = this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyOrder : this._waitOrder;
        this.CurrentFacingOrder = this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready ? this._readyFacingOrder : this._waitFacingOrder;
        flag2 = true;
      }
      if (Mission.Current.MissionTeamAIType == Mission.MissionTeamAITypeEnum.Siege)
      {
        if (this._outerGate != null && this._outerGate.State == CastleGate.GateState.Open && !this._outerGate.IsDestroyed)
        {
          if (!this._outerGate.IsUsedByFormation(this.Formation))
            this.Formation.StartUsingMachine((UsableMachine) this._outerGate);
        }
        else if (this._innerGate != null && this._innerGate.State == CastleGate.GateState.Open && !this._innerGate.IsDestroyed && !this._innerGate.IsUsedByFormation(this.Formation))
          this.Formation.StartUsingMachine((UsableMachine) this._innerGate);
        foreach (SiegeLadder usable in this._laddersOnThisSide)
        {
          if (!usable.IsDisabledForBattleSide(BattleSideEnum.Defender) && !usable.IsUsedByFormation(this.Formation))
            this.Formation.StartUsingMachine((UsableMachine) usable);
        }
      }
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Ready && this._tacticalMiddlePos != null)
        this.Formation.FormOrder = FormOrder.FormOrderCustom(this._tacticalMiddlePos.Width);
      else if (this._behaviorState == BehaviorDefendCastleKeyPosition.BehaviorState.Waiting && this._tacticalWaitPos != null)
        this.Formation.FormOrder = FormOrder.FormOrderCustom(this._tacticalWaitPos.Width);
      if (!flag2 && this._hasFormedShieldWall)
        return;
      bool flag3 = this._behaviorState != BehaviorDefendCastleKeyPosition.BehaviorState.Ready || !this._readyOrderPosition.IsValid || (double) this._readyOrderPosition.DistanceSquaredWithLimit(this.Formation.QuerySystem.MedianPosition.GetNavMeshVec3(), MathF.Min(this.Formation.Depth, this.Formation.Width) * 1.2f) <= (this._hasFormedShieldWall ? (double) MathF.Min(this.Formation.Depth, this.Formation.Width) * (double) MathF.Min(this.Formation.Depth, this.Formation.Width) : (double) MathF.Min(this.Formation.Depth, this.Formation.Width) * (double) MathF.Min(this.Formation.Depth, this.Formation.Width) * 0.25);
      if (flag3 == this._hasFormedShieldWall)
        return;
      this._hasFormedShieldWall = flag3;
      this.Formation.ArrangementOrder = this._hasFormedShieldWall ? ArrangementOrder.ArrangementOrderShieldWall : ArrangementOrder.ArrangementOrderLine;
    }

    public override void OnDeploymentFinished()
    {
      base.OnDeploymentFinished();
      this.ResetOrderPositions();
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.ResetOrderPositions();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this._hasFormedShieldWall = true;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    protected override float GetAiWeight() => 1f;

    private enum BehaviorState
    {
      UnSet,
      Waiting,
      Ready,
    }
  }
}
