// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSergeantMPMountedRanged
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
  public class BehaviorSergeantMPMountedRanged : BehaviorComponent
  {
    private List<FlagCapturePoint> _flagpositions;
    private MissionMultiplayerFlagDomination _flagDominationGameMode;

    public BehaviorSergeantMPMountedRanged(Formation formation)
      : base(formation)
    {
      this._flagpositions = this.Formation.Team.Mission.ActiveMissionObjects.FindAllWithType<FlagCapturePoint>().ToList<FlagCapturePoint>();
      this._flagDominationGameMode = this.Formation.Team.Mission.GetMissionBehavior<MissionMultiplayerFlagDomination>();
      this.CalculateCurrentOrder();
    }

    private MovementOrder UncapturedFlagMoveOrder()
    {
      if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)))
      {
        FlagCapturePoint flagCapturePoint = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => this.Formation.Team.QuerySystem.GetLocalEnemyPower(fp.Position.AsVec2)));
        return MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, flagCapturePoint.Position, false));
      }
      if (!this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)))
        return MovementOrder.MovementOrderStop;
      Vec3 position = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) == this.Formation.Team)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => fp.Position.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition))).Position;
      return MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, position, false));
    }

    protected override void CalculateCurrentOrder()
    {
      if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation == null || (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2.DistanceSquared(this.Formation.QuerySystem.AveragePosition) > 2500.0)
      {
        this.CurrentOrder = this.UncapturedFlagMoveOrder();
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else
      {
        FlagCapturePoint flagCapturePoint = (FlagCapturePoint) null;
        if (this._flagpositions.Any<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team && !fp.IsContested)))
          flagCapturePoint = this._flagpositions.Where<FlagCapturePoint>((Func<FlagCapturePoint, bool>) (fp => this._flagDominationGameMode.GetFlagOwnerTeam(fp) != this.Formation.Team && !fp.IsContested)).MinBy<FlagCapturePoint, float>((Func<FlagCapturePoint, float>) (fp => this.Formation.QuerySystem.AveragePosition.DistanceSquared(fp.Position.AsVec2)));
        if (!this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsInfantryFormation && flagCapturePoint != null)
        {
          this.CurrentOrder = MovementOrder.MovementOrderMove(new WorldPosition(this.Formation.Team.Mission.Scene, UIntPtr.Zero, flagCapturePoint.Position, false));
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
        }
        else if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedFormation)
        {
          this.CurrentOrder = MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation);
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
        }
        else
        {
          Vec2 direction = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
          float num = direction.Normalize();
          WorldPosition medianPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
          if ((double) num > (double) this.Formation.QuerySystem.MissileRangeAdjusted)
            medianPosition.SetVec2(medianPosition.AsVec2 - direction * (this.Formation.QuerySystem.MissileRangeAdjusted - this.Formation.Depth * 0.5f));
          else if ((double) num < (double) this.Formation.QuerySystem.MissileRangeAdjusted * 0.40000000596046448)
          {
            medianPosition.SetVec2(medianPosition.AsVec2 - direction * (this.Formation.QuerySystem.MissileRangeAdjusted * 0.7f));
          }
          else
          {
            direction = direction.RightVec();
            medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition + direction * 20f);
          }
          this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
        }
      }
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this.CurrentOrder.OrderEnum == MovementOrder.MovementOrderEnum.ChargeToTarget && this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedFormation)
        this.Formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
      else
        this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this._flagpositions.RemoveAll((Predicate<FlagCapturePoint>) (fp => fp.IsDeactivated));
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      return this.Formation.QuerySystem.IsRangedCavalryFormation ? 1.2f : 0.0f;
    }
  }
}
