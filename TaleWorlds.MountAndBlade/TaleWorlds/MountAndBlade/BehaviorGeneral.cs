// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorGeneral
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorGeneral : BehaviorComponent
  {
    private Formation _mainFormation;

    public BehaviorGeneral(Formation formation)
      : base(formation)
    {
      this._mainFormation = formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      bool flag1 = false;
      bool flag2 = false;
      foreach (Formation formation in (List<Formation>) this.Formation.Team.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          flag1 = true;
          if (formation.GetReadonlyMovementOrderReference().OrderEnum == MovementOrder.MovementOrderEnum.Retreat)
          {
            flag2 = true;
          }
          else
          {
            flag2 = false;
            break;
          }
        }
      }
      if (!flag1)
        this.CurrentOrder = MovementOrder.MovementOrderCharge;
      else if (flag2)
      {
        this.CurrentOrder = MovementOrder.MovementOrderRetreat;
      }
      else
      {
        bool flag3 = false;
        foreach (Team team in (List<Team>) Mission.Current.Teams)
        {
          if (team.IsEnemyOf(this.Formation.Team) && team.HasAnyFormationsIncludingSpecialThatIsNotEmpty())
          {
            flag3 = true;
            break;
          }
        }
        WorldPosition medianPosition;
        if (flag3 && this.Formation.Team.HasAnyFormationsIncludingSpecialThatIsNotEmpty())
        {
          float num1 = !this.Formation.PhysicalClass.IsMounted() || (double) this.Formation.Team.QuerySystem.CavalryRatio + (double) this.Formation.Team.QuerySystem.RangedCavalryRatio < 33.299999237060547 ? 3f : 40f;
          if (this._mainFormation != null && this._mainFormation.CountOfUnits > 0)
          {
            float num2 = this._mainFormation.Depth + num1;
            medianPosition = this._mainFormation.QuerySystem.MedianPosition;
            medianPosition.SetVec2(medianPosition.AsVec2 - (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this._mainFormation.QuerySystem.MedianPosition.AsVec2).Normalized() * num2);
          }
          else
          {
            medianPosition = this.Formation.QuerySystem.Team.MedianPosition;
            medianPosition.SetVec2(this.Formation.QuerySystem.Team.AveragePosition - (this.Formation.QuerySystem.Team.MedianTargetFormationPosition.AsVec2 - this.Formation.QuerySystem.Team.AveragePosition).Normalized() * num1);
          }
        }
        else
        {
          medianPosition = this.Formation.QuerySystem.MedianPosition;
          medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        }
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      if (this._mainFormation == null || !this._mainFormation.AI.IsMainFormation)
        this._mainFormation = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.AI.IsMainFormation));
      return 1.2f;
    }
  }
}
