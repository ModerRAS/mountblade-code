// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorCautiousAdvance
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class BehaviorCautiousAdvance : BehaviorComponent
  {
    private bool _isInShieldWallDistance;
    private bool _switchedToShieldWallRecently;
    private Timer _switchedToShieldWallTimer;
    private Vec2 _reformPosition = Vec2.Invalid;
    private Formation _archerFormation;
    private bool _cantShoot;
    private float _cantShootDistance = float.MaxValue;
    private BehaviorCautiousAdvance.BehaviorState _behaviorState = BehaviorCautiousAdvance.BehaviorState.Shooting;
    private Timer _cantShootTimer;
    private Vec2 _shootPosition = Vec2.Invalid;
    private FormationQuerySystem _targetFormation;

    public BehaviorCautiousAdvance()
    {
      this.BehaviorCoherence = 1f;
      this._cantShootTimer = new Timer(0.0f, 0.0f);
      this._switchedToShieldWallTimer = new Timer(0.0f, 0.0f);
    }

    public BehaviorCautiousAdvance(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 1f;
      this._cantShootTimer = new Timer(0.0f, 0.0f);
      this._switchedToShieldWallTimer = new Timer(0.0f, 0.0f);
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
      bool flag = false;
      Vec2 vec2;
      WorldPosition worldPosition;
      if (this._targetFormation == null || this._archerFormation == null)
      {
        vec2 = this.Formation.Direction;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        worldPosition = this._targetFormation.MedianPosition;
        vec2 = worldPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
        float b = vec2.Normalize();
        float num = this._archerFormation.QuerySystem.RangedUnitRatio * 0.5f / (float) this._archerFormation.Arrangement.RankCount;
        switch (this._behaviorState)
        {
          case BehaviorCautiousAdvance.BehaviorState.Approaching:
            if ((double) b < (double) this._cantShootDistance * 0.800000011920929)
            {
              this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Shooting;
              this._cantShoot = false;
              flag = true;
            }
            else if ((double) this._archerFormation.QuerySystem.MakingRangedAttackRatio >= (double) num * 1.2000000476837158)
            {
              this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Shooting;
              this._cantShoot = false;
              flag = true;
            }
            if (this._behaviorState == BehaviorCautiousAdvance.BehaviorState.Shooting)
            {
              this._shootPosition = this.Formation.QuerySystem.AveragePosition + vec2 * 5f;
              break;
            }
            break;
          case BehaviorCautiousAdvance.BehaviorState.Shooting:
            if ((double) this._archerFormation.QuerySystem.MakingRangedAttackRatio <= (double) num)
            {
              if ((double) b > (double) this._archerFormation.QuerySystem.MaximumMissileRange)
              {
                this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Approaching;
                this._cantShootDistance = MathF.Min(this._cantShootDistance, this._archerFormation.QuerySystem.MaximumMissileRange * 0.9f);
                this._shootPosition = Vec2.Invalid;
                break;
              }
              if (!this._cantShoot)
              {
                this._cantShoot = true;
                this._cantShootTimer.Reset(Mission.Current.CurrentTime, this._archerFormation == null ? 10f : MBMath.Lerp(10f, 15f, (float) (((double) MBMath.ClampFloat((float) this._archerFormation.CountOfUnits, 10f, 60f) - 10.0) * 0.019999999552965164)));
                break;
              }
              if (this._cantShootTimer.Check(Mission.Current.CurrentTime))
              {
                this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Approaching;
                this._cantShootDistance = MathF.Min(this._cantShootDistance, b);
                this._shootPosition = Vec2.Invalid;
                break;
              }
              break;
            }
            this._cantShootDistance = MathF.Max(this._cantShootDistance, b);
            this._cantShoot = false;
            if ((!this._targetFormation.IsRangedFormation && !this._targetFormation.IsRangedCavalryFormation || (double) b < (double) this._targetFormation.MissileRangeAdjusted && (double) this._targetFormation.MakingRangedAttackRatio < 0.10000000149011612) && (double) b < (double) MathF.Min(this._archerFormation.QuerySystem.MissileRangeAdjusted * 0.4f, this._cantShootDistance * 0.667f))
            {
              this._behaviorState = BehaviorCautiousAdvance.BehaviorState.PullingBack;
              this._shootPosition = Vec2.Invalid;
              break;
            }
            break;
          case BehaviorCautiousAdvance.BehaviorState.PullingBack:
            if ((double) b > (double) MathF.Min(this._cantShootDistance, this._archerFormation.QuerySystem.MissileRangeAdjusted) * 0.800000011920929)
            {
              this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Shooting;
              this._cantShoot = false;
              this._shootPosition = this.Formation.QuerySystem.AveragePosition + vec2 * 5f;
              flag = true;
              break;
            }
            break;
        }
        switch (this._behaviorState)
        {
          case BehaviorCautiousAdvance.BehaviorState.Approaching:
            medianPosition = this._targetFormation.MedianPosition;
            FormationQuerySystem.FormationIntegrityDataGroup formationIntegrityData = this.Formation.QuerySystem.FormationIntegrityData;
            if (this._switchedToShieldWallRecently && !this._switchedToShieldWallTimer.Check(Mission.Current.CurrentTime) && (double) formationIntegrityData.DeviationOfPositionsExcludeFarAgents > (double) formationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents * 0.5)
            {
              if (this._reformPosition.IsValid)
              {
                medianPosition.SetVec2(this._reformPosition);
                break;
              }
              worldPosition = this.Formation.QuerySystem.Team.MedianTargetFormationPosition;
              vec2 = (worldPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
              this._reformPosition = this.Formation.QuerySystem.AveragePosition + vec2 * 5f;
              medianPosition.SetVec2(this._reformPosition);
              break;
            }
            this._switchedToShieldWallRecently = false;
            this._reformPosition = Vec2.Invalid;
            medianPosition.SetVec2(this._targetFormation.AveragePosition);
            break;
          case BehaviorCautiousAdvance.BehaviorState.Shooting:
            if (this._shootPosition.IsValid)
            {
              medianPosition.SetVec2(this._shootPosition);
              break;
            }
            medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
            break;
          case BehaviorCautiousAdvance.BehaviorState.PullingBack:
            medianPosition = this.Formation.QuerySystem.MedianPosition;
            medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
            break;
        }
      }
      worldPosition = this.CurrentOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.None);
      if (((!worldPosition.IsValid ? 1 : (this._behaviorState != BehaviorCautiousAdvance.BehaviorState.Shooting ? 1 : 0)) | (flag ? 1 : 0)) == 0)
      {
        worldPosition = this.CurrentOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
        if ((double) worldPosition.GetNavMeshVec3().DistanceSquared(medianPosition.GetNavMeshVec3()) < (double) this.Formation.Depth * (double) this.Formation.Depth)
          goto label_34;
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
label_34:
      if (((!this.CurrentFacingOrder.GetDirection(this.Formation).IsValid ? 1 : (this._behaviorState != BehaviorCautiousAdvance.BehaviorState.Shooting ? 1 : 0)) | (flag ? 1 : 0)) == 0 && (double) this.CurrentFacingOrder.GetDirection(this.Formation).DotProduct(vec2) > (double) MBMath.Lerp(0.5f, 1f, (float) (1.0 - (double) MBMath.ClampFloat(this.Formation.Width, 1f, 20f) * 0.05000000074505806)))
        return;
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(vec2);
    }

    protected override void OnBehaviorActivatedAux()
    {
      IEnumerable<Formation> source = this.Formation.Team.FormationsIncludingEmpty.WhereQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f != this.Formation && f.QuerySystem.IsRangedFormation));
      if (source.AnyQ<Formation>())
        this._archerFormation = source.MaxBy<Formation, float>((Func<Formation, float>) (f => f.QuerySystem.FormationPower));
      this._cantShoot = false;
      this._cantShootDistance = float.MaxValue;
      this._behaviorState = BehaviorCautiousAdvance.BehaviorState.Shooting;
      this._cantShootTimer.Reset(Mission.Current.CurrentTime, this._archerFormation == null ? 10f : MBMath.Lerp(10f, 15f, (float) (((double) MBMath.ClampFloat((float) this._archerFormation.CountOfUnits, 10f, 60f) - 10.0) * 0.019999999552965164)));
      this._targetFormation = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation ?? this.Formation.QuerySystem.ClosestEnemyFormation;
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this._isInShieldWallDistance = true;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override void OnBehaviorCanceled()
    {
    }

    public override void TickOccasionally()
    {
      this._targetFormation = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation ?? this.Formation.QuerySystem.ClosestEnemyFormation;
      if (this.Formation.PhysicalClass.IsMeleeInfantry())
      {
        bool flag = this._targetFormation != null && (this.Formation.QuerySystem.IsUnderRangedAttack || (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) < 25.0 + (this._isInShieldWallDistance ? 75.0 : 0.0)) && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this._targetFormation.MedianPosition.AsVec2) > 100.0 - (this._isInShieldWallDistance ? 75.0 : 0.0);
        if (flag != this._isInShieldWallDistance)
        {
          this._isInShieldWallDistance = flag;
          if (this._isInShieldWallDistance)
          {
            ArrangementOrder arrangementOrder = this.Formation.QuerySystem.HasShield ? ArrangementOrder.ArrangementOrderShieldWall : ArrangementOrder.ArrangementOrderLoose;
            if (this.Formation.ArrangementOrder != arrangementOrder)
            {
              this.Formation.ArrangementOrder = arrangementOrder;
              this._switchedToShieldWallRecently = true;
              this._switchedToShieldWallTimer.Reset(Mission.Current.CurrentTime, 5f);
            }
          }
          else if (!(this.Formation.ArrangementOrder == ArrangementOrder.ArrangementOrderLine))
            this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
        }
      }
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    protected override float GetAiWeight() => 1f;

    private enum BehaviorState
    {
      Approaching,
      Shooting,
      PullingBack,
    }
  }
}
