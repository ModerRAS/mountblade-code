// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorReserve
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorReserve : BehaviorComponent
  {
    public BehaviorReserve(Formation formation)
      : base(formation)
    {
      this._behaviorSide = formation.AI.Side;
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      Formation formation1 = this.Formation.Team.FormationsIncludingEmpty.FirstOrDefaultQ<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f != this.Formation && f.AI.IsMainFormation));
      WorldPosition position;
      if (formation1 != null)
      {
        position = formation1.QuerySystem.MedianPosition;
        Vec2 vec2 = (this.Formation.QuerySystem.Team.AverageEnemyPosition - formation1.QuerySystem.MedianPosition.AsVec2).Normalized();
        position.SetVec2(position.AsVec2 - vec2 * (40f + this.Formation.Depth));
      }
      else
      {
        Vec2 zero = Vec2.Zero;
        int num1 = 0;
        foreach (Formation formation2 in (List<Formation>) this.Formation.Team.FormationsIncludingSpecialAndEmpty)
        {
          if (formation2.CountOfUnits > 0 && formation2 != this.Formation)
          {
            zero += formation2.QuerySystem.MedianPosition.AsVec2;
            ++num1;
          }
        }
        if (num1 > 0)
        {
          WorldPosition worldPosition = WorldPosition.Invalid;
          float num2 = float.MaxValue;
          Vec2 vec2_1 = zero * (1f / (float) num1);
          foreach (Formation formation3 in (List<Formation>) this.Formation.Team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation3.CountOfUnits > 0 && formation3 != this.Formation)
            {
              float num3 = vec2_1.DistanceSquared(formation3.QuerySystem.MedianPosition.AsVec2);
              if ((double) num3 < (double) num2)
              {
                num2 = num3;
                worldPosition = formation3.QuerySystem.MedianPosition;
              }
            }
          }
          Vec2 vec2_2 = (this.Formation.QuerySystem.Team.AverageEnemyPosition - worldPosition.AsVec2).Normalized();
          position = worldPosition;
          position.SetVec2(position.AsVec2 - vec2_2 * (20f + this.Formation.Depth));
        }
        else
        {
          this.CurrentOrder = MovementOrder.MovementOrderStop;
          return;
        }
      }
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
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
      this.Formation.FormOrder = FormOrder.FormOrderWider;
    }

    protected override float GetAiWeight()
    {
      if (!this.Formation.AI.IsMainFormation)
      {
        foreach (Formation formation1 in (List<Formation>) this.Formation.Team.FormationsIncludingSpecialAndEmpty)
        {
          if (this.Formation != formation1 && formation1.CountOfUnits > 0)
          {
            using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
            {
              while (enumerator.MoveNext())
              {
                Team current = enumerator.Current;
                if (current.IsEnemyOf(this.Formation.Team))
                {
                  foreach (Formation formation2 in (List<Formation>) current.FormationsIncludingSpecialAndEmpty)
                  {
                    if (formation2.CountOfUnits > 0)
                      return 0.04f;
                  }
                }
              }
              break;
            }
          }
        }
      }
      return 0.0f;
    }
  }
}
