// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDefend
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDefend : BehaviorComponent
  {
    public WorldPosition DefensePosition = WorldPosition.Invalid;
    public TacticalPosition TacticalDefendPosition;

    public BehaviorDefend(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition worldPosition;
      Vec2 direction;
      if (this.TacticalDefendPosition != null)
      {
        Vec2 vec2;
        if (this.TacticalDefendPosition.IsInsurmountable)
        {
          Vec2 averageEnemyPosition = this.Formation.Team.QuerySystem.AverageEnemyPosition;
          worldPosition = this.TacticalDefendPosition.Position;
          Vec2 asVec2 = worldPosition.AsVec2;
          vec2 = (averageEnemyPosition - asVec2).Normalized();
        }
        else
          vec2 = this.TacticalDefendPosition.Direction;
        direction = vec2;
      }
      else if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
      {
        direction = this.Formation.Direction;
      }
      else
      {
        Vec2 vec2;
        if ((double) this.Formation.Direction.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) >= 0.5)
        {
          vec2 = this.Formation.Direction;
        }
        else
        {
          worldPosition = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition;
          vec2 = worldPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition;
        }
        direction = vec2.Normalized();
      }
      if (this.TacticalDefendPosition != null)
      {
        if (!this.TacticalDefendPosition.IsInsurmountable)
        {
          this.CurrentOrder = MovementOrder.MovementOrderMove(this.TacticalDefendPosition.Position);
        }
        else
        {
          worldPosition = this.TacticalDefendPosition.Position;
          Vec2 vec2 = worldPosition.AsVec2 + this.TacticalDefendPosition.Width * 0.5f * direction;
          WorldPosition position = this.TacticalDefendPosition.Position;
          position.SetVec2(vec2);
          this.CurrentOrder = MovementOrder.MovementOrderMove(position);
        }
        if (!this.TacticalDefendPosition.IsInsurmountable)
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
        else
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else if (this.DefensePosition.IsValid)
      {
        this.CurrentOrder = MovementOrder.MovementOrderMove(this.DefensePosition);
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
      if ((double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.CurrentOrder.GetPosition(this.Formation)) < 100.0)
      {
        if (this.Formation.QuerySystem.HasShield)
          this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderShieldWall;
        else if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > 100.0 && (double) this.Formation.QuerySystem.UnderRangedAttackRatio > 0.20000000298023224 - (this.Formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Loose ? 0.10000000149011612 : 0.0))
          this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
        if (this.TacticalDefendPosition == null)
          return;
        float customWidth;
        if (this.TacticalDefendPosition.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.ChokePoint)
        {
          customWidth = this.TacticalDefendPosition.Width;
        }
        else
        {
          int countOfUnits = this.Formation.CountOfUnits;
          customWidth = MathF.Min(this.TacticalDefendPosition.Width, (float) ((double) this.Formation.Interval * (double) (countOfUnits - 1) + (double) this.Formation.UnitDiameter * (double) countOfUnits) / 3f);
        }
        this.Formation.FormOrder = FormOrder.FormOrderCustom(customWidth);
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
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override void ResetBehavior()
    {
      base.ResetBehavior();
      this.DefensePosition = WorldPosition.Invalid;
      this.TacticalDefendPosition = (TacticalPosition) null;
    }

    protected override float GetAiWeight() => 1f;
  }
}
