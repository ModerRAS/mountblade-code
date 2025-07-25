// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorHorseArcherSkirmish
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorHorseArcherSkirmish : BehaviorComponent
  {
    private bool _rushMode;
    private bool _isEnemyReachable = true;

    public BehaviorHorseArcherSkirmish(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
      this.BehaviorCoherence = 0.5f;
    }

    protected override float GetAiWeight() => !this._isEnemyReachable ? 0.09f : 0.9f;

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition position = this.Formation.QuerySystem.MedianPosition;
      this._isEnemyReachable = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (!(this.Formation.Team.TeamAI is TeamAISiegeComponent) || !TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.Formation, false));
      Vec2 averagePosition = this.Formation.QuerySystem.AveragePosition;
      if (!this._isEnemyReachable)
      {
        position.SetVec2(averagePosition);
      }
      else
      {
        WorldPosition medianPosition = this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition;
        int num1 = 0;
        Vec2 zero = Vec2.Zero;
        foreach (Formation formation in (List<Formation>) this.Formation.Team.FormationsIncludingSpecialAndEmpty)
        {
          if (formation != this.Formation && formation.CountOfUnits > 0)
          {
            ++num1;
            zero += formation.QuerySystem.MedianPosition.AsVec2;
          }
        }
        Vec2 vec2_1 = num1 <= 0 ? averagePosition : zero / (float) num1;
        WorldPosition formationPosition = this.Formation.QuerySystem.Team.MedianTargetFormationPosition;
        Vec2 vec2_2 = (formationPosition.AsVec2 - vec2_1).Normalized();
        float missileRangeAdjusted = this.Formation.QuerySystem.MissileRangeAdjusted;
        if (this._rushMode)
        {
          float num2 = averagePosition.DistanceSquared(medianPosition.AsVec2);
          if ((double) num2 > (double) this.Formation.QuerySystem.MissileRangeAdjusted * (double) this.Formation.QuerySystem.MissileRangeAdjusted)
          {
            position = formationPosition;
            position.SetVec2(position.AsVec2 - vec2_2 * (missileRangeAdjusted - (float) (10.0 + (double) this.Formation.Depth * 0.5)));
          }
          else if (this.Formation.QuerySystem.ClosestEnemyFormation.IsCavalryFormation || (double) num2 <= 400.0 || (double) this.Formation.QuerySystem.UnderRangedAttackRatio >= 0.40000000596046448)
          {
            position = this.Formation.QuerySystem.Team.MedianPosition;
            position.SetVec2(vec2_1 - ((num1 > 0 ? 30f : 80f) + this.Formation.Depth) * vec2_2);
            this._rushMode = false;
          }
          else
          {
            position = this.Formation.QuerySystem.Team.MedianPosition;
            Vec2 vec2_3 = (medianPosition.AsVec2 - averagePosition).Normalized();
            position.SetVec2(medianPosition.AsVec2 - vec2_3 * (missileRangeAdjusted - (float) (10.0 + (double) this.Formation.Depth * 0.5)));
          }
        }
        else
        {
          if (num1 > 0)
          {
            position = this.Formation.QuerySystem.Team.MedianPosition;
            position.SetVec2(vec2_1 - (30f + this.Formation.Depth) * vec2_2);
          }
          else
          {
            position = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition;
            position.SetVec2(position.AsVec2 - 80f * vec2_2);
          }
          if ((double) position.AsVec2.DistanceSquared(averagePosition) <= 400.0)
          {
            position = formationPosition;
            position.SetVec2(position.AsVec2 - vec2_2 * (missileRangeAdjusted - (float) (10.0 + (double) this.Formation.Depth * 0.5)));
            this._rushMode = true;
          }
        }
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }
  }
}
