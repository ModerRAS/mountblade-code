// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDefendKeyPosition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDefendKeyPosition : BehaviorComponent
  {
    private WorldPosition _defensePosition = WorldPosition.Invalid;
    public WorldPosition EnemyClusterPosition = WorldPosition.Invalid;
    private readonly QueryData<WorldPosition> _behaviorPosition;

    public WorldPosition DefensePosition
    {
      get => this._behaviorPosition.Value;
      set => this._defensePosition = value;
    }

    public BehaviorDefendKeyPosition(Formation formation)
      : base(formation)
    {
      this._behaviorPosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() => Mission.Current.FindBestDefendingPosition(this.EnemyClusterPosition, this._defensePosition)), 5f);
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Vec2 direction = this.Formation.QuerySystem.ClosestEnemyFormation != null ? ((double) this.Formation.Direction.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) < 0.5 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition : this.Formation.Direction).Normalized() : this.Formation.Direction;
      if (this.DefensePosition.IsValid)
      {
        this.CurrentOrder = MovementOrder.MovementOrderMove(this.DefensePosition);
      }
      else
      {
        WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this.Formation.QuerySystem.HasShield && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) < (double) this.Formation.Depth * (double) this.Formation.Depth * 4.0)
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderShieldWall;
      else
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    protected override float GetAiWeight() => 10f;
  }
}
