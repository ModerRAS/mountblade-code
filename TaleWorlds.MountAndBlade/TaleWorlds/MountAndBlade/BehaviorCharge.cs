// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorCharge
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorCharge : BehaviorComponent
  {
    public BehaviorCharge(Formation formation)
      : base(formation)
    {
      this.CalculateCurrentOrder();
      this.BehaviorCoherence = 0.5f;
    }

    protected override void CalculateCurrentOrder()
    {
      this.CurrentOrder = this.Formation.QuerySystem.ClosestEnemyFormation == null ? MovementOrder.MovementOrderCharge : MovementOrder.MovementOrderChargeToTarget(this.Formation.QuerySystem.ClosestEnemyFormation.Formation);
    }

    public override void TickOccasionally()
    {
      base.TickOccasionally();
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
    }

    public override float NavmeshlessTargetPositionPenalty => 1f;

    protected override void OnBehaviorActivatedAux()
    {
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      if (this.Formation.ArrangementOrder.OrderEnum != ArrangementOrder.ArrangementOrderEnum.ShieldWall)
        return;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
    }

    private float CalculateAIWeight(bool isSiege, bool isInsideCastle)
    {
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      float num1 = querySystem.AveragePosition.Distance(querySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / querySystem.MovementSpeedMaximum;
      float num2 = querySystem.IsCavalryFormation || querySystem.IsRangedCavalryFormation ? ((double) num1 > 4.0 ? MBMath.Lerp(0.1f, 1.4f, (float) (1.0 - ((double) MBMath.ClampFloat(num1, 4f, 10f) - 4.0) / 6.0)) : MBMath.Lerp(0.1f, 1.4f, MBMath.ClampFloat(num1, 0.0f, 4f) / 4f)) : MBMath.Lerp(0.1f, 1f, (float) (1.0 - ((double) MBMath.ClampFloat(num1, 4f, 10f) - 4.0) / 6.0));
      float num3 = 0.0f;
      foreach (Team team1 in (List<Team>) Mission.Current.Teams)
      {
        if (team1.IsEnemyOf(this.Formation.Team))
        {
          foreach (Formation formation1 in (List<Formation>) team1.FormationsIncludingSpecialAndEmpty)
          {
            if (formation1.CountOfUnits > 0 && querySystem.ClosestEnemyFormation.Formation != formation1 && (!isSiege || TeamAISiegeComponent.IsFormationInsideCastle(formation1, true) == isInsideCastle))
            {
              float num4 = formation1.QuerySystem.MedianPosition.AsVec2.Distance(querySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / formation1.QuerySystem.MovementSpeedMaximum;
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
                        if (formation2.CountOfUnits > 0 && formation2 != this.Formation && formation2.QuerySystem.ClosestEnemyFormation == formation1.QuerySystem && (double) formation2.QuerySystem.MedianPosition.AsVec2.DistanceSquared(querySystem.AveragePosition) / (double) formation2.QuerySystem.MovementSpeedMaximum < (double) num4 + 4.0)
                        {
                          flag = true;
                          break;
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
            if (formation != this.Formation && formation.CountOfUnits > 0 && querySystem.ClosestEnemyFormation == formation.QuerySystem.ClosestEnemyFormation && (!isSiege || TeamAISiegeComponent.IsFormationInsideCastle(formation, true) == isInsideCastle) && (double) formation.QuerySystem.MedianPosition.AsVec2.Distance(formation.QuerySystem.ClosestEnemyFormation.MedianPosition.AsVec2) / (double) formation.QuerySystem.MovementSpeedMaximum < 4.0)
              num5 += formation.QuerySystem.FormationMeleeFightingPower * formation.QuerySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f);
          }
        }
      }
      float num6 = (float) (((double) this.Formation.QuerySystem.FormationMeleeFightingPower * (double) querySystem.GetClassWeightedFactor(1f, 1f, 1f, 1f) + (double) num5 + 1.0) / (1.0 + (double) num3 + (double) querySystem.ClosestEnemyFormation.Formation.QuerySystem.FormationMeleeFightingPower * (double) querySystem.ClosestEnemyFormation.GetClassWeightedFactor(1f, 1f, 1f, 1f)) / (!isSiege ? (double) MBMath.ClampFloat(querySystem.Team.RemainingPowerRatio, 0.2f, 3f) : (double) MBMath.ClampFloat(querySystem.Team.RemainingPowerRatio, 0.5f, 3f)));
      if ((double) num6 > 1.0)
        num6 = (float) (((double) num6 - 1.0) / 3.0) + 1f;
      float num7 = MBMath.ClampFloat(num6, 0.1f, 1.25f);
      float num8 = 1f;
      if ((double) num1 <= 4.0)
      {
        Vec2 averagePosition = querySystem.AveragePosition;
        WorldPosition medianPosition1 = querySystem.ClosestEnemyFormation.MedianPosition;
        Vec2 asVec2 = medianPosition1.AsVec2;
        float length = (averagePosition - asVec2).Length;
        if ((double) length > 1.4012984643248171E-45)
        {
          WorldPosition medianPosition2 = querySystem.MedianPosition;
          medianPosition2.SetVec2(querySystem.AveragePosition);
          float navMeshZ1 = medianPosition2.GetNavMeshZ();
          if (!float.IsNaN(navMeshZ1))
          {
            double num9 = (double) navMeshZ1;
            medianPosition1 = querySystem.ClosestEnemyFormation.MedianPosition;
            double navMeshZ2 = (double) medianPosition1.GetNavMeshZ();
            num8 = MBMath.Lerp(0.9f, 1.1f, (float) (((double) MBMath.ClampFloat((float) (num9 - navMeshZ2) / length, -0.58f, 0.58f) + 0.57999998331069946) / 1.1599999666213989));
          }
        }
      }
      float num10 = 1f;
      if ((double) num1 <= 4.0 && (double) num1 >= 1.5)
        num10 = 1.2f;
      float num11 = 1f;
      if ((double) num1 <= 4.0 && querySystem.ClosestEnemyFormation.ClosestEnemyFormation != querySystem)
        num11 = 1.2f;
      float num12 = !isSiege ? querySystem.GetClassWeightedFactor(1f, 1f, 1.5f, 1.5f) * querySystem.ClosestEnemyFormation.GetClassWeightedFactor(1f, 1f, 0.5f, 0.5f) : querySystem.GetClassWeightedFactor(1f, 1f, 1.2f, 1.2f) * querySystem.ClosestEnemyFormation.GetClassWeightedFactor(1f, 1f, 0.3f, 0.3f);
      return num2 * num7 * num8 * num10 * num11 * num12;
    }

    protected override float GetAiWeight()
    {
      bool isSiege = this.Formation.Team.TeamAI is TeamAISiegeComponent;
      float aiWeight = 0.0f;
      if (this.Formation.QuerySystem.ClosestEnemyFormation == null)
      {
        if (this.Formation.Team.HasAnyEnemyTeamsWithAgents(false))
          aiWeight = 0.2f;
      }
      else
      {
        bool isInsideCastle = false;
        bool flag;
        if (!isSiege)
          flag = true;
        else if ((this.Formation.Team.TeamAI as TeamAISiegeComponent).CalculateIsChargePastWallsApplicable(this.Formation.AI.Side))
        {
          flag = true;
        }
        else
        {
          isInsideCastle = TeamAISiegeComponent.IsFormationInsideCastle(this.Formation.QuerySystem.ClosestEnemyFormation.Formation, true, 0.51f);
          flag = isInsideCastle == TeamAISiegeComponent.IsFormationInsideCastle(this.Formation, true, isInsideCastle ? 0.9f : 0.1f);
        }
        if (flag)
          aiWeight = this.CalculateAIWeight(isSiege, isInsideCastle);
      }
      return aiWeight;
    }
  }
}
