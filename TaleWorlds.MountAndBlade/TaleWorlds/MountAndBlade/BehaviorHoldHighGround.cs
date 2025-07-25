// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorHoldHighGround
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorHoldHighGround : BehaviorComponent
  {
    public Formation RangedAllyFormation;
    private bool _isAllowedToChangePosition;
    private WorldPosition _lastChosenPosition;

    public BehaviorHoldHighGround(Formation formation)
      : base(formation)
    {
      this._isAllowedToChangePosition = true;
      this.RangedAllyFormation = (Formation) null;
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition position;
      Vec2 direction;
      if (this.Formation.QuerySystem.ClosestEnemyFormation != null)
      {
        position = this.Formation.QuerySystem.MedianPosition;
        Vec2 vec2_1;
        if (this.Formation.AI.ActiveBehavior != this)
        {
          this._isAllowedToChangePosition = true;
        }
        else
        {
          float num = Math.Max(this.RangedAllyFormation != null ? this.RangedAllyFormation.QuerySystem.MissileRangeAdjusted * 0.8f : 0.0f, 30f);
          vec2_1 = this.Formation.QuerySystem.AveragePosition;
          this._isAllowedToChangePosition = (double) vec2_1.DistanceSquared(this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) > (double) num * (double) num;
        }
        if (this._isAllowedToChangePosition)
        {
          position.SetVec2(this.Formation.QuerySystem.HighGroundCloseToForeseenBattleGround);
          this._lastChosenPosition = position;
        }
        else
          position = this._lastChosenPosition;
        vec2_1 = this.Formation.QuerySystem.AveragePosition;
        Vec2 vec2_2;
        if ((double) vec2_1.DistanceSquared(this.Formation.QuerySystem.HighGroundCloseToForeseenBattleGround) <= 25.0)
        {
          vec2_1 = this.Formation.Direction;
          vec2_1 = (double) vec2_1.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) < 0.5 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition : this.Formation.Direction;
          vec2_2 = vec2_1.Normalized();
        }
        else
        {
          vec2_1 = this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - position.AsVec2;
          vec2_2 = vec2_1.Normalized();
        }
        direction = vec2_2;
      }
      else
      {
        direction = this.Formation.Direction;
        position = this.Formation.QuerySystem.MedianPosition;
        position.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
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
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      return this.Formation.QuerySystem.ClosestEnemyFormation == null ? 0.0f : 1f;
    }
  }
}
