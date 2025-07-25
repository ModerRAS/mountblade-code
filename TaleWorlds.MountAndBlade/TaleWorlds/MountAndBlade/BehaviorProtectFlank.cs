// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorProtectFlank
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
  public class BehaviorProtectFlank : BehaviorComponent
  {
    private Formation _mainFormation;
    public FormationAI.BehaviorSide FlankSide;
    private BehaviorProtectFlank.BehaviorState _protectFlankState;
    private MovementOrder _movementOrder;
    private MovementOrder _chargeToTargetOrder;

    public BehaviorProtectFlank(Formation formation)
      : base(formation)
    {
      this._protectFlankState = BehaviorProtectFlank.BehaviorState.HoldingFlank;
      this._behaviorSide = formation.AI.Side;
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
      this.CurrentOrder = this._movementOrder;
    }

    protected override void CalculateCurrentOrder()
    {
      if (this._mainFormation == null || this.Formation.AI.IsMainFormation || this.Formation.QuerySystem.ClosestEnemyFormation == null)
      {
        this.CurrentOrder = MovementOrder.MovementOrderStop;
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      }
      else
      {
        if (this._protectFlankState != BehaviorProtectFlank.BehaviorState.HoldingFlank && this._protectFlankState != BehaviorProtectFlank.BehaviorState.Returning)
          return;
        Vec2 direction = this._mainFormation.Direction;
        Vec2 vec2_1 = (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2).Normalized();
        Vec2 vec2_2 = this._behaviorSide == FormationAI.BehaviorSide.Right || this.FlankSide == FormationAI.BehaviorSide.Right ? this._mainFormation.CurrentPosition + vec2_1.RightVec().Normalized() * (float) ((double) this._mainFormation.Width + (double) this.Formation.Width + 10.0) - vec2_1 * (this._mainFormation.Depth + this.Formation.Depth) : (this._behaviorSide == FormationAI.BehaviorSide.Left || this.FlankSide == FormationAI.BehaviorSide.Left ? this._mainFormation.CurrentPosition + vec2_1.LeftVec().Normalized() * (float) ((double) this._mainFormation.Width + (double) this.Formation.Width + 10.0) - vec2_1 * (this._mainFormation.Depth + this.Formation.Depth) : this._mainFormation.CurrentPosition + vec2_1 * (float) (((double) this._mainFormation.Depth + (double) this.Formation.Depth) * 0.5 + 10.0));
        WorldPosition medianPosition = this._mainFormation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(vec2_2);
        this._movementOrder = MovementOrder.MovementOrderMove(medianPosition);
        this.CurrentOrder = this._movementOrder;
        this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
      }
    }

    private void CheckAndChangeState()
    {
      Vec2 position = this._movementOrder.GetPosition(this.Formation);
      switch (this._protectFlankState)
      {
        case BehaviorProtectFlank.BehaviorState.HoldingFlank:
          if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
            break;
          float num1 = (float) (50.0 + ((double) this.Formation.Depth + (double) this.Formation.QuerySystem.ClosestEnemyFormation.Formation.Depth) / 2.0);
          if ((double) this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2.DistanceSquared(position) >= (double) num1 * (double) num1)
            break;
          this._chargeToTargetOrder = MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestEnemyFormation.Formation);
          this.CurrentOrder = this._chargeToTargetOrder;
          this._protectFlankState = BehaviorProtectFlank.BehaviorState.Charging;
          break;
        case BehaviorProtectFlank.BehaviorState.Charging:
          if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
          {
            this.CurrentOrder = this._movementOrder;
            this._protectFlankState = BehaviorProtectFlank.BehaviorState.Returning;
            break;
          }
          float num2 = (float) (60.0 + ((double) this.Formation.Depth + (double) this.Formation.QuerySystem.ClosestEnemyFormation.Formation.Depth) / 2.0);
          if ((double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(position) <= (double) num2 * (double) num2)
            break;
          this.CurrentOrder = this._movementOrder;
          this._protectFlankState = BehaviorProtectFlank.BehaviorState.Returning;
          break;
        case BehaviorProtectFlank.BehaviorState.Returning:
          if ((double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(position) >= 400.0)
            break;
          this._protectFlankState = BehaviorProtectFlank.BehaviorState.HoldingFlank;
          break;
      }
    }

    public override void OnValidBehaviorSideChanged()
    {
      base.OnValidBehaviorSideChanged();
      this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
    }

    public override void TickOccasionally()
    {
      this.CheckAndChangeState();
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      if (this._protectFlankState == BehaviorProtectFlank.BehaviorState.HoldingFlank && this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > 1600.0 && (double) this.Formation.QuerySystem.UnderRangedAttackRatio > 0.20000000298023224 - (this.Formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Loose ? 0.10000000149011612 : 0.0))
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
      else
        this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
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

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      TextObject text = GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString());
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      behaviorString.SetTextVariable("SIDE_STRING", text);
      if (this._mainFormation != null)
      {
        behaviorString.SetTextVariable("AI_SIDE", GameTexts.FindText("str_formation_ai_side_strings", this._mainFormation.AI.Side.ToString()));
        behaviorString.SetTextVariable("CLASS", GameTexts.FindText("str_formation_class_string", this._mainFormation.PhysicalClass.GetName()));
      }
      return behaviorString;
    }

    protected override float GetAiWeight()
    {
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      return this._mainFormation == null || this.Formation.AI.IsMainFormation ? 0.0f : 1.2f;
    }

    private enum BehaviorState
    {
      HoldingFlank,
      Charging,
      Returning,
    }
  }
}
