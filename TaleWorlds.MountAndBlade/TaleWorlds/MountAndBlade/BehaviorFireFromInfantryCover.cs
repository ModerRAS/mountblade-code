// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorFireFromInfantryCover
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorFireFromInfantryCover : BehaviorComponent
  {
    private Formation _mainFormation;
    private bool _isFireAtWill = true;

    public BehaviorFireFromInfantryCover(Formation formation)
      : base(formation)
    {
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
      Vec2 direction = this.Formation.Direction;
      if (this._mainFormation == null)
      {
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      else
      {
        Vec2 position = this._mainFormation.GetReadonlyMovementOrderReference().GetPosition(this._mainFormation);
        if (position.IsValid)
        {
          direction = (position - this._mainFormation.QuerySystem.AveragePosition).Normalized();
          Vec2 vec2 = position - direction * this._mainFormation.Depth * 0.33f;
          medianPosition.SetVec2(vec2);
        }
        else
          medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if ((double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) < 100.0)
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderSquare;
      Vec2 position = this.CurrentOrder.GetPosition(this.Formation);
      bool flag = this.Formation.QuerySystem.ClosestEnemyFormation == null || (double) this._mainFormation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.AveragePosition) <= (double) this.Formation.Depth * (double) this.Formation.Width || (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(position) <= ((double) this._mainFormation.Depth + (double) this.Formation.Depth) * ((double) this._mainFormation.Depth + (double) this.Formation.Depth) * 0.25;
      if (flag == this._isFireAtWill)
        return;
      this._isFireAtWill = flag;
      this.Formation.FiringOrder = this._isFireAtWill ? FiringOrder.FiringOrderFireAtWill : FiringOrder.FiringOrderHoldYourFire;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      int num = (int) MathF.Sqrt((float) this.Formation.CountOfUnits);
      this.Formation.FormOrder = FormOrder.FormOrderCustom((float) ((double) num * (double) this.Formation.UnitDiameter + (double) (num - 1) * (double) this.Formation.Interval));
    }

    protected override float GetAiWeight()
    {
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      return this._mainFormation == null || this.Formation.AI.IsMainFormation || this.Formation.QuerySystem.ClosestEnemyFormation == null || !this.Formation.QuerySystem.IsRangedFormation ? 0.0f : 2f;
    }
  }
}
