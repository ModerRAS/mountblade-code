// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorVanguard
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
  public class BehaviorVanguard : BehaviorComponent
  {
    private Formation _mainFormation;

    public BehaviorVanguard(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      if (this._mainFormation != null && this._mainFormation.CountOfUnits == 0)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      Vec2 direction;
      WorldPosition medianPosition;
      if (this._mainFormation != null)
      {
        direction = this._mainFormation.Direction;
        WorldPosition worldPosition = this.Formation.QuerySystem.Team.MedianTargetFormationPosition;
        Vec2 asVec2_1 = worldPosition.AsVec2;
        worldPosition = this._mainFormation.QuerySystem.MedianPosition;
        Vec2 asVec2_2 = worldPosition.AsVec2;
        Vec2 vec2 = (asVec2_1 - asVec2_2).Normalized();
        medianPosition = this._mainFormation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this._mainFormation.CurrentPosition + vec2 * (float) (((double) this._mainFormation.Depth + (double) this.Formation.Depth) * 0.5 + 10.0));
      }
      else
      {
        direction = this.Formation.Direction;
        medianPosition = this.Formation.QuerySystem.MedianPosition;
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
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
      if (this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation != null && (double) this.Formation.QuerySystem.AveragePosition.DistanceSquared(this.Formation.QuerySystem.ClosestSignificantlyLargeEnemyFormation.MedianPosition.AsVec2) > 1600.0 && (double) this.Formation.QuerySystem.UnderRangedAttackRatio > 0.20000000298023224 - (this.Formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.Loose ? 0.10000000149011612 : 0.0))
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
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      TextObject text = GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString());
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
  }
}
