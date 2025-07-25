// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDefensiveRing
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDefensiveRing : BehaviorComponent
  {
    public TacticalPosition TacticalDefendPosition;

    public BehaviorDefensiveRing(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Vec2 direction = this.TacticalDefendPosition == null ? (this.Formation.QuerySystem.ClosestEnemyFormation != null ? ((double) this.Formation.Direction.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) < 0.5 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition : this.Formation.Direction).Normalized() : this.Formation.Direction) : this.TacticalDefendPosition.Direction;
      if (this.TacticalDefendPosition != null)
      {
        this.CurrentOrder = MovementOrder.MovementOrderMove(this.TacticalDefendPosition.Position);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
      else
      {
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if ((double) this.Formation.QuerySystem.AveragePosition.Distance(this.CurrentOrder.GetPosition(this.Formation)) - (double) this.Formation.Arrangement.Depth * 0.5 < 10.0)
      {
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderCircle;
        if (!this.Formation.Team.FormationsIncludingEmpty.AnyQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)))
          return;
        Formation formation = this.Formation.Team.FormationsIncludingEmpty.WhereQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.QuerySystem.IsRangedFormation)).MaxBy<Formation, int>((Func<Formation, int>) (f => f.CountOfUnits));
        int num1 = (int) MathF.Sqrt((float) formation.CountOfUnits);
        float num2 = (float) (((double) num1 * (double) formation.UnitDiameter + (double) (num1 - 1) * (double) formation.Interval) * 0.5 * 1.4142129421234131);
        int unitCount = this.Formation.Arrangement.UnitCount;
        int num3 = 0;
        while (unitCount > 0)
        {
          double a = ((double) num2 + (double) this.Formation.Distance * (double) num3 + (double) this.Formation.UnitDiameter * (double) (num3 + 1)) * Math.PI * 2.0 / ((double) this.Formation.UnitDiameter + (double) this.Formation.Interval);
          unitCount -= (int) Math.Ceiling(a);
          ++num3;
        }
        this.Formation.FormOrder = FormOrder.FormOrderCustom((float) ((double) num2 + (double) num3 * (double) this.Formation.UnitDiameter + (double) (num3 - 1) * (double) this.Formation.Distance) * 2f);
      }
      else
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    public override void ResetBehavior()
    {
      base.ResetBehavior();
      this.TacticalDefendPosition = (TacticalPosition) null;
    }

    protected override float GetAiWeight() => this.TacticalDefendPosition == null ? 0.0f : 1f;
  }
}
