// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSkirmishLine
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
  public class BehaviorSkirmishLine : BehaviorComponent
  {
    private Formation _mainFormation;
    private FormationQuerySystem _targetFormation;

    public BehaviorSkirmishLine(Formation formation)
      : base(formation)
    {
      this._behaviorSide = FormationAI.BehaviorSide.BehaviorSideNotSet;
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      this._targetFormation = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation ?? this.Formation.QuerySystem.ClosestEnemyFormation;
      Vec2 vec2_1;
      WorldPosition medianPosition;
      if (this._targetFormation == null || this._mainFormation == null)
      {
        vec2_1 = this.Formation.Direction;
        medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        vec2_1 = !(this._mainFormation.AI.ActiveBehavior is BehaviorCautiousAdvance) ? ((double) this.Formation.Direction.DotProduct((this._targetFormation.MedianPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2).Normalized()) < 0.5 ? this._targetFormation.MedianPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2 : this.Formation.Direction).Normalized() : this._mainFormation.Direction;
        Vec2 vec2_2 = this._mainFormation.OrderPosition - this._mainFormation.QuerySystem.MedianPosition.AsVec2;
        float num1 = this._mainFormation.QuerySystem.MovementSpeed * 7f;
        float length = vec2_2.Length;
        if ((double) length > 0.0)
        {
          float num2 = num1 / length;
          if ((double) num2 < 1.0)
            vec2_2 *= num2;
        }
        medianPosition = this._mainFormation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(medianPosition.AsVec2 + vec2_1 * 8f + vec2_2);
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      if (this.CurrentFacingOrder.GetDirection(this.Formation).IsValid && this.CurrentFacingOrder.OrderEnum != FacingOrder.FacingOrderEnum.LookAtEnemy && (this._targetFormation == null || (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this._targetFormation.MedianPosition.GetNavMeshVec3().AsVec2) < (double) this.Formation.QuerySystem.MissileRangeAdjusted * (double) this.Formation.QuerySystem.MissileRangeAdjusted && (this._targetFormation.IsRangedCavalryFormation || (double) this.CurrentFacingOrder.GetDirection(this.Formation).DotProduct(vec2_1) > (double) MBMath.Lerp(0.5f, 1f, (float) (1.0 - (double) MBMath.ClampFloat(this.Formation.Width, 1f, 20f) * 0.05000000074505806)))))
        return;
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(vec2_1);
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

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._mainFormation == null || (double) this.Formation.Width <= (double) this._mainFormation.Width * 1.5)
        return;
      this.Formation.FormOrder = FormOrder.FormOrderCustom(this._mainFormation.Width * 1.2f);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWider;
    }

    protected override float GetAiWeight()
    {
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      if (this._behaviorSide != this.Formation.AI.Side)
        this._behaviorSide = this.Formation.AI.Side;
      if (this._mainFormation == null || this.Formation.AI.IsMainFormation || this.Formation.QuerySystem.ClosestEnemyFormation == null)
        return 0.0f;
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      double num1 = (double) MBMath.Lerp(0.1f, 1f, MBMath.ClampFloat(querySystem.RangedUnitRatio + querySystem.RangedCavalryUnitRatio, 0.0f, 0.5f) * 2f);
      float num2 = MBMath.Lerp(0.5f, 1.2f, (float) (((double) MBMath.ClampFloat(this.Formation.QuerySystem.AveragePosition.Distance((querySystem.ClosestSignificantlyLargeEnemyFormation ?? querySystem.ClosestEnemyFormation).MedianPosition.AsVec2) / (querySystem.ClosestSignificantlyLargeEnemyFormation ?? querySystem.ClosestEnemyFormation).MovementSpeedMaximum, 4f, 8f) - 4.0) / 4.0));
      double reliabilityFactor = (double) querySystem.MainFormationReliabilityFactor;
      return (float) (num1 * reliabilityFactor) * num2;
    }
  }
}
