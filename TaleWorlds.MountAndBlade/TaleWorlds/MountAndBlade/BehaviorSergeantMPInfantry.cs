// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSergeantMPInfantry
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSergeantMPInfantry : BehaviorComponent
  {
    private BehaviorSergeantMPInfantry.BehaviorState _behaviorState;
    private List<FlagCapturePoint> _flagpositions;
    private MissionMultiplayerFlagDomination _flagDominationGameMode;

    public BehaviorSergeantMPInfantry(Formation formation)
      : base(formation)
    {
      this._behaviorState = BehaviorSergeantMPInfantry.BehaviorState.Unset;
      this._flagpositions = this.Formation.Team.Mission.ActiveMissionObjects.FindAllWithType<FlagCapturePoint>().ToList<FlagCapturePoint>();
      this._flagDominationGameMode = this.Formation.Team.Mission.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      BehaviorSergeantMPInfantry.BehaviorState behaviorState = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation == null || (!this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedFormation || (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > (this._behaviorState == BehaviorSergeantMPInfantry.BehaviorState.Attacking ? 3600.0 : 2500.0)) && (!this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsInfantryFormation || (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > (this._behaviorState == BehaviorSergeantMPInfantry.BehaviorState.Attacking ? 900.0 : 400.0)) ? BehaviorSergeantMPInfantry.BehaviorState.GoingToFlag : BehaviorSergeantMPInfantry.BehaviorState.Attacking;
      if (behaviorState == BehaviorSergeantMPInfantry.BehaviorState.Attacking && (this._behaviorState != BehaviorSergeantMPInfantry.BehaviorState.Attacking || this.CurrentOrder.OrderEnum != MovementOrder.MovementOrderEnum.ChargeToTarget || this.CurrentOrder.TargetFormation.QuerySystem != this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation))
      {
        this._behaviorState = BehaviorSergeantMPInfantry.BehaviorState.Attacking;
        this.CurrentOrder = MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation);
      }
      if (behaviorState != BehaviorSergeantMPInfantry.BehaviorState.GoingToFlag)
        return;
      this._behaviorState = behaviorState;
      WorldPosition position;
      if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)))
        position = new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position, false);
      else if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)))
      {
        position = new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position, false);
      }
      else
      {
        position = this.Formation.QuerySystem.MedianPosition;
        position.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      if (this.CurrentOrder.OrderEnum != MovementOrder.MovementOrderEnum.Invalid && !(this.CurrentOrder.GetPosition(this.Formation) != position.AsVec2))
        return;
      Vec2 direction = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null ? (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized() : this.Formation.Direction;
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this.Formation.QuerySystem.HasShield)
      {
        if (this._behaviorState != BehaviorSergeantMPInfantry.BehaviorState.Attacking)
        {
          if (this._behaviorState == BehaviorSergeantMPInfantry.BehaviorState.GoingToFlag)
          {
            Vec2 vec2 = this.CurrentOrder.GetPosition(this.Formation);
            if (vec2.IsValid)
            {
              vec2 = this.Formation.QuerySystem.AveragePosition;
              if ((double) vec2.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) > 225.0)
                goto label_6;
            }
            else
              goto label_6;
          }
          else
            goto label_6;
        }
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderShieldWall;
        return;
      }
label_6:
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      return this.Formation.QuerySystem.IsInfantryFormation ? 1.2f : 0.0f;
    }

    private enum BehaviorState
    {
      GoingToFlag,
      Attacking,
      Unset,
    }
  }
}
