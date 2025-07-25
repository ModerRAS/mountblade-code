// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorSkirmishBehindFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorSkirmishBehindFormation : BehaviorComponent
  {
    public Formation ReferenceFormation;
    private bool _isFireAtWill = true;

    public BehaviorSkirmishBehindFormation(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Vec2 vec2_1;
      Vec2 vec2_2;
      if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
      {
        vec2_1 = this.Formation.Direction;
        vec2_2 = ((double) vec2_1.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) > 0.5 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition : this.Formation.Direction).Normalized();
      }
      else
        vec2_2 = this.Formation.Direction;
      WorldPosition medianPosition;
      if (this.ReferenceFormation == null)
      {
        medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        medianPosition = this.ReferenceFormation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(medianPosition.AsVec2 - vec2_2 * (float) (((double) this.ReferenceFormation.Depth + (double) this.Formation.Depth) * 0.5));
      }
      vec2_1 = this.CurrentOrder.GetPosition(this.Formation);
      Vec3 navMeshVec3;
      WorldPosition worldPosition;
      if (vec2_1.IsValid)
      {
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
      else
      {
        FormationQuerySystem largeEnemyFormation = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation;
        if (largeEnemyFormation != null)
        {
          if (largeEnemyFormation.IsRangedCavalryFormation)
          {
            vec2_1 = this.Formation.QuerySystem.AveragePosition;
            ref Vec2 local = ref vec2_1;
            navMeshVec3 = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.GetNavMeshVec3();
            Vec2 asVec2 = navMeshVec3.AsVec2;
            if ((double) local.DistanceSquared(asVec2) >= (double) largeEnemyFormation.MissileRangeAdjusted * (double) largeEnemyFormation.MissileRangeAdjusted)
              goto label_12;
          }
          else
            goto label_12;
        }
        worldPosition = this.CurrentOrder.CreateNewOrderWorldPosition(this.Formation, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
        navMeshVec3 = worldPosition.GetNavMeshVec3();
        if ((double) navMeshVec3.DistanceSquared(medianPosition.GetNavMeshVec3()) < (double) this.Formation.Depth * (double) this.Formation.Depth)
          goto label_13;
label_12:
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
label_13:
      vec2_1 = this.CurrentFacingOrder.GetDirection(this.Formation);
      if (vec2_1.IsValid && this.CurrentFacingOrder.OrderEnum != FacingOrder.FacingOrderEnum.LookAtEnemy && this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null)
      {
        vec2_1 = this.Formation.QuerySystem.AveragePosition;
        ref Vec2 local = ref vec2_1;
        worldPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
        navMeshVec3 = worldPosition.GetNavMeshVec3();
        Vec2 asVec2 = navMeshVec3.AsVec2;
        if ((double) local.DistanceSquared(asVec2) < (double) this.Formation.QuerySystem.MissileRangeAdjusted * (double) this.Formation.QuerySystem.MissileRangeAdjusted)
        {
          if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.IsRangedCavalryFormation)
            return;
          vec2_1 = this.CurrentFacingOrder.GetDirection(this.Formation);
          if ((double) vec2_1.DotProduct(vec2_2) > (double) MBMath.Lerp(0.5f, 1f, (float) (1.0 - (double) MBMath.ClampFloat(this.Formation.Width, 1f, 20f) * 0.05000000074505806)))
            return;
        }
      }
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(vec2_2);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      int num1;
      if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
      {
        Vec2 asVec2_1 = this.ReferenceFormation.QuerySystem.MedianPosition.AsVec2;
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
          num1 = (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) <= ((double) this.ReferenceFormation.Depth + (double) this.Formation.Depth) * ((double) this.ReferenceFormation.Depth + (double) this.Formation.Depth) * 0.25 ? 1 : 0;
          goto label_4;
        }
      }
      num1 = 1;
label_4:
      bool flag = num1 != 0;
      if (flag != this._isFireAtWill)
      {
        this._isFireAtWill = flag;
        if (this._isFireAtWill)
          this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
        else
          this.Formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
      }
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
      this.Formation.FormOrder = FormOrder.FormOrderWider;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      if (this.ReferenceFormation != null)
      {
        behaviorString.SetTextVariable("AI_SIDE", GameTexts.FindText("str_formation_ai_side_strings", this.ReferenceFormation.AI.Side.ToString()));
        behaviorString.SetTextVariable("CLASS", GameTexts.FindText("str_formation_class_string", this.ReferenceFormation.PhysicalClass.GetName()));
      }
      return behaviorString;
    }

    protected override float GetAiWeight() => 10f;
  }
}
