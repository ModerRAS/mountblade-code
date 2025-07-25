// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorPullBack
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorPullBack : BehaviorComponent
  {
    public BehaviorPullBack(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
      this.BehaviorCoherence = 0.2f;
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition medianPosition = this.Formation.QuerySystem.MedianPosition;
      if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
      {
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition);
        this.CurrentOrder = MovementOrder.MovementOrderMove(medianPosition);
      }
      else
      {
        Vec2 vec2 = (this.Formation.QuerySystem.AveragePosition - this.Formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2).Normalized();
        medianPosition.SetVec2(this.Formation.QuerySystem.AveragePosition + 50f * vec2);
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
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLoose;
      this.Formation.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderWide;
    }

    protected override float GetAiWeight()
    {
      if (this.Formation.Team.TeamAI is TeamAISiegeComponent && !(this.Formation.Team.TeamAI is TeamAISallyOutAttacker) && !(this.Formation.Team.TeamAI is TeamAISallyOutDefender))
        return this.GetSiegeAIWeight();
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      FormationQuerySystem formationQuerySystem = querySystem.ClosestSignificantlyLargeEnemyFormation;
      if (formationQuerySystem == null || formationQuerySystem.ClosestEnemyFormation != querySystem || (double) formationQuerySystem.MovementSpeedMaximum - (double) querySystem.MovementSpeedMaximum > 2.0)
      {
        formationQuerySystem = querySystem.ClosestEnemyFormation;
        if (formationQuerySystem == null || formationQuerySystem.ClosestEnemyFormation != querySystem || (double) formationQuerySystem.MovementSpeedMaximum - (double) querySystem.MovementSpeedMaximum > 2.0)
          return 0.0f;
      }
      float num1 = querySystem.AveragePosition.Distance(formationQuerySystem.MedianPosition.AsVec2) / formationQuerySystem.MovementSpeedMaximum;
      float num2 = MBMath.Lerp(0.1f, 1f, (float) (1.0 - ((double) MBMath.ClampFloat(num1, 4f, 10f) - 4.0) / 6.0));
      float num3 = 0.0f;
      foreach (Team team1 in (List<Team>) Mission.Current.Teams)
      {
        if (team1.IsEnemyOf(this.Formation.Team))
        {
          foreach (Formation formation1 in (List<Formation>) team1.FormationsIncludingSpecialAndEmpty)
          {
            if (formation1.CountOfUnits > 0 && formation1 != formationQuerySystem.Formation)
            {
              Vec2 asVec2_1 = formation1.QuerySystem.MedianPosition.AsVec2;
              ref Vec2 local = ref asVec2_1;
              WorldPosition medianPosition = formationQuerySystem.MedianPosition;
              Vec2 asVec2_2 = medianPosition.AsVec2;
              float num4 = local.Distance(asVec2_2) / formation1.QuerySystem.MovementSpeedMaximum;
              if ((double) num4 <= (double) num1 + 4.0 && ((double) num1 > 8.0 || formation1.QuerySystem.ClosestEnemyFormation == this.Formation.QuerySystem))
              {
                bool flag = false;
                if ((double) num1 <= 8.0)
                {
                  foreach (Team team2 in (List<Team>) this.Formation.Team.Mission.Teams)
                  {
                    if (team2.IsFriendOf(this.Formation.Team))
                    {
                      foreach (Formation formation2 in (List<Formation>) team2.FormationsIncludingSpecialAndEmpty)
                      {
                        if (formation2.CountOfUnits > 0 && formation2 != this.Formation && formation2.QuerySystem.ClosestEnemyFormation == formation1.QuerySystem)
                        {
                          medianPosition = formation2.QuerySystem.MedianPosition;
                          if ((double) medianPosition.AsVec2.DistanceSquared(querySystem.AveragePosition) / (double) formation2.QuerySystem.MovementSpeedMaximum < (double) num4 + 4.0)
                          {
                            flag = true;
                            break;
                          }
                        }
                      }
                      if (flag)
                        break;
                    }
                  }
                }
                if (!flag)
                  num3 += formation1.QuerySystem.FormationMeleeFightingPower * formation1.QuerySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f);
              }
            }
          }
        }
      }
      float num5 = 0.0f;
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.IsFriendOf(this.Formation.Team))
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0 && formation != this.Formation && formation.QuerySystem.ClosestEnemyFormation == formationQuerySystem && (double) formation.QuerySystem.MedianPosition.AsVec2.Distance(formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) formation.QuerySystem.MovementSpeedMaximum < 4.0)
              num5 += formation.QuerySystem.FormationMeleeFightingPower * formation.QuerySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f);
          }
        }
      }
      return MBMath.ClampFloat((float) ((1.0 + (double) num3 + (double) formationQuerySystem.Formation.QuerySystem.FormationMeleeFightingPower * (double) formationQuerySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f)) / ((double) this.Formation.GetFormationMeleeFightingPower() * (double) querySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f) + (double) num5 + 1.0) * (double) querySystem.Team.RemainingPowerRatio / 3.0), 0.1f, 1.21f) * num2;
    }

    private float GetSiegeAIWeight() => 0.0f;
  }
}
