// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorDefendSiegeWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorDefendSiegeWeapon : BehaviorComponent
  {
    private WorldPosition _defensePosition = WorldPosition.Invalid;
    private TacticalPosition _tacticalDefendPosition;
    private SiegeWeapon _defendedSiegeWeapon;

    public BehaviorDefendSiegeWeapon(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
    }

    public void SetDefensePositionFromTactic(WorldPosition defensePosition)
    {
      this._defensePosition = defensePosition;
    }

    public void SetDefendedSiegeWeaponFromTactic(SiegeWeapon siegeWeapon)
    {
      this._defendedSiegeWeapon = siegeWeapon;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      return behaviorString;
    }

    protected override void CalculateCurrentOrder()
    {
      float num = 5f;
      Vec2 direction;
      if (this._tacticalDefendPosition != null)
        direction = this._tacticalDefendPosition.IsInsurmountable ? (this.Formation.Team.QuerySystem.AverageEnemyPosition - this._tacticalDefendPosition.Position.AsVec2).Normalized() : this._tacticalDefendPosition.Direction;
      else if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
        direction = this.Formation.Direction;
      else if (this._defendedSiegeWeapon != null)
      {
        Vec2 asVec2_1 = this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2;
        Vec3 vec3 = this._defendedSiegeWeapon.GameEntity.GlobalPosition;
        Vec2 asVec2_2 = vec3.AsVec2;
        direction = asVec2_1 - asVec2_2;
        float a = MathF.Min(direction.Normalize(), 5f);
        float b;
        if ((NativeObject) this._defendedSiegeWeapon.WaitEntity != (NativeObject) null)
        {
          vec3 = this._defendedSiegeWeapon.WaitEntity.GlobalPosition - this._defendedSiegeWeapon.GameEntity.GlobalPosition;
          b = vec3.Length;
        }
        else
          b = 3f;
        num = MathF.Max(a, b);
      }
      else
        direction = ((double) this.Formation.Direction.DotProduct((this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized()) < 0.5 ? this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - this.Formation.QuerySystem.AveragePosition : this.Formation.Direction).Normalized();
      if (this._tacticalDefendPosition != null)
      {
        if (!this._tacticalDefendPosition.IsInsurmountable)
        {
          this.CurrentOrder = MovementOrder.MovementOrderMove(this._tacticalDefendPosition.Position);
        }
        else
        {
          Vec2 vec2 = this._tacticalDefendPosition.Position.AsVec2 + this._tacticalDefendPosition.Width * 0.5f * direction;
          WorldPosition position = this._tacticalDefendPosition.Position;
          position.SetVec2(vec2);
          this.CurrentOrder = MovementOrder.MovementOrderMove(position);
        }
        if (!this._tacticalDefendPosition.IsInsurmountable)
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
        else
          this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else if (this._defensePosition.IsValid)
      {
        WorldPosition defensePosition = this._defensePosition;
        defensePosition.SetVec2(this._defensePosition.AsVec2 + direction * num);
        this.CurrentOrder = MovementOrder.MovementOrderMove(defensePosition);
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
          this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
        else if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > 100.0 && (double) this.Formation.QuerySystem.UnderRangedAttackRatio > 0.20000000298023224 - (this.Formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Loose ? 0.10000000149011612 : 0.0))
          this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
        if (this._tacticalDefendPosition == null)
          return;
        float customWidth;
        if (this._tacticalDefendPosition.TacticalPositionType == TacticalPosition.TacticalPositionTypeEnum.ChokePoint)
        {
          customWidth = this._tacticalDefendPosition.Width;
        }
        else
        {
          int countOfUnits = this.Formation.CountOfUnits;
          customWidth = MathF.Min(this._tacticalDefendPosition.Width, (float) ((double) this.Formation.Interval * (double) (countOfUnits - 1) + (double) this.Formation.UnitDiameter * (double) countOfUnits) / 3f);
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
      this._defensePosition = WorldPosition.Invalid;
      this._tacticalDefendPosition = (TacticalPosition) null;
    }

    protected override float GetAiWeight() => 1f;
  }
}
