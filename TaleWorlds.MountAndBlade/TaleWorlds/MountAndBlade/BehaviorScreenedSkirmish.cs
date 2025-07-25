// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorScreenedSkirmish
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorScreenedSkirmish : BehaviorComponent
  {
    private Formation _mainFormation;
    private bool _isFireAtWill = true;

    public BehaviorScreenedSkirmish(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Vec2 vec2_1;
      if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && this._mainFormation != null)
      {
        Vec2 vec2_2 = (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
        Vec2 v = (this._mainFormation.QuerySystem.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
        vec2_1 = (double) vec2_2.DotProduct(v) <= 0.5 ? vec2_2 : this._mainFormation.FacingOrder.GetDirection(this._mainFormation);
      }
      else
        vec2_1 = this.Formation.Direction;
      WorldPosition medianPosition;
      if (this._mainFormation == null)
      {
        medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        medianPosition = this._mainFormation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(medianPosition.AsVec2 - vec2_1 * (float) (((double) this._mainFormation.Depth + (double) this.Formation.Depth) * 0.5));
      }
      WorldPosition worldPosition = this.CurrentOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.None);
      if (worldPosition.IsValid)
      {
        if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null)
        {
          if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedCavalryFormation)
          {
            Vec2 averagePosition = this.Formation.QuerySystem.AveragePosition;
            ref Vec2 local = ref averagePosition;
            worldPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
            Vec2 asVec2 = worldPosition.GetNavMeshVec3().AsVec2;
            if ((double) local.DistanceSquared(asVec2) < (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MissileRangeAdjusted * (double) this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MissileRangeAdjusted)
            {
              worldPosition = this.CurrentOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
              if ((double) worldPosition.GetNavMeshVec3().DistanceSquared(medianPosition.GetNavMeshVec3()) < (double) this.Formation.Depth * (double) this.Formation.Depth)
                goto label_12;
            }
          }
        }
        else
          goto label_12;
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
label_12:
      Vec2 vec2_3 = this.CurrentFacingOrder.GetDirection(this.Formation);
      if (vec2_3.IsValid && this.CurrentFacingOrder.OrderEnum != FacingOrder.FacingOrderEnum.LookAtEnemy && this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null)
      {
        vec2_3 = this.Formation.QuerySystem.AveragePosition;
        ref Vec2 local = ref vec2_3;
        worldPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
        Vec2 asVec2 = worldPosition.GetNavMeshVec3().AsVec2;
        if ((double) local.DistanceSquared(asVec2) < (double) this.Formation.QuerySystem.MissileRangeAdjusted * (double) this.Formation.QuerySystem.MissileRangeAdjusted)
        {
          if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedCavalryFormation)
            return;
          vec2_3 = this.CurrentFacingOrder.GetDirection(this.Formation);
          if ((double) vec2_3.DotProduct(vec2_1) > (double) MBMath.Lerp(0.5f, 1f, (float) (1.0 - (double) MBMath.ClampFloat(this.Formation.Width, 1f, 20f) * 0.05000000074505806)))
            return;
        }
      }
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(vec2_1);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      int num1;
      if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
      {
        Vec2 asVec2_1 = this._mainFormation.QuerySystem.MedianPosition.AsVec2;
        ref Vec2 local1 = ref asVec2_1;
        WorldPosition medianPosition = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition;
        Vec2 asVec2_2 = medianPosition.AsVec2;
        double num2 = (double) local1.DistanceSquared(asVec2_2);
        Vec2 averagePosition = this.Formation.QuerySystem.AveragePosition;
        ref Vec2 local2 = ref averagePosition;
        medianPosition = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition;
        Vec2 asVec2_3 = medianPosition.AsVec2;
        double num3 = (double) local2.DistanceSquared(asVec2_3);
        if (num2 > num3)
        {
          num1 = (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) <= ((double) this._mainFormation.Depth + (double) this.Formation.Depth) * ((double) this._mainFormation.Depth + (double) this.Formation.Depth) * 0.25 ? 1 : 0;
          goto label_4;
        }
      }
      num1 = 1;
label_4:
      bool flag = num1 != 0;
      if (flag != this._isFireAtWill)
      {
        this._isFireAtWill = flag;
        this.Formation.FiringOrder = this._isFireAtWill ? FiringOrder.FiringOrderFireAtWill : FiringOrder.FiringOrderHoldYourFire;
      }
      if (this._mainFormation != null && (double) MathF.Abs(this._mainFormation.Width - this.Formation.Width) > 10.0)
        this.Formation.FormOrder = FormOrder.FormOrderCustom(this._mainFormation.Width);
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      if (this._mainFormation != null)
      {
        behaviorString.SetTextVariable("AI_SIDE", GameTexts.FindText("str_formation_ai_side_strings", this._mainFormation.AI.Side.ToString()));
        behaviorString.SetTextVariable("CLASS", GameTexts.FindText("str_formation_class_string", this._mainFormation.PhysicalClass.GetName()));
      }
      return behaviorString;
    }

    protected override float GetAiWeight()
    {
      // ISSUE: explicit reference operation
      if (@this.CurrentOrder == MovementOrder.MovementOrderStop)
        this.CalculateCurrentOrder();
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      if (this._behaviorSide != this.Formation.AI.Side)
        this._behaviorSide = this.Formation.AI.Side;
      if (this._mainFormation == null || this.Formation.AI.IsMainFormation || this.Formation.QuerySystem.ClosestEnemyFormation == null)
        return 0.0f;
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      double num1 = (double) MBMath.Lerp(0.1f, 1f, MBMath.ClampFloat(querySystem.RangedUnitRatio + querySystem.RangedCavalryUnitRatio, 0.0f, 0.5f) * 2f);
      Vec2 vec2 = this._mainFormation.Direction;
      vec2 = vec2.Normalized();
      ref Vec2 local1 = ref vec2;
      WorldPosition medianPosition = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition;
      Vec2 asVec2_1 = medianPosition.AsVec2;
      medianPosition = this._mainFormation.QuerySystem.MedianPosition;
      Vec2 asVec2_2 = medianPosition.AsVec2;
      Vec2 v = (asVec2_1 - asVec2_2).Normalized();
      float num2 = MBMath.LinearExtrapolation(0.5f, 1.1f, (float) (((double) local1.DotProduct(v) + 1.0) / 2.0));
      Vec2 averagePosition = this.Formation.QuerySystem.AveragePosition;
      ref Vec2 local2 = ref averagePosition;
      medianPosition = querySystem.ClosestEnemyFormation.MedianPosition;
      Vec2 asVec2_3 = medianPosition.AsVec2;
      float num3 = MBMath.Lerp(0.5f, 1.2f, (float) ((8.0 - (double) MBMath.ClampFloat(local2.Distance(asVec2_3) / querySystem.ClosestEnemyFormation.MovementSpeedMaximum, 4f, 8f)) / 4.0));
      double reliabilityFactor = (double) this.Formation.QuerySystem.MainFormationReliabilityFactor;
      return (float) (num1 * reliabilityFactor) * num2 * num3;
    }
  }
}
