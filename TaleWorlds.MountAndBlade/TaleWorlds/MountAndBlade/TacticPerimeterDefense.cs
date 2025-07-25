// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TacticPerimeterDefense
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TacticPerimeterDefense : TacticComponent
  {
    private WorldPosition _defendPosition;
    private readonly List<TacticPerimeterDefense.EnemyCluster> _enemyClusters;
    private readonly List<TacticPerimeterDefense.DefenseFront> _defenseFronts;
    private const float RetreatThresholdValue = 2f;
    private List<Formation> _meleeFormations;
    private List<Formation> _rangedFormations;
    private bool _isRetreatingToKeep;

    public TacticPerimeterDefense(Team team)
      : base(team)
    {
      Scene scene = Mission.Current.Scene;
      FleePosition fleePosition = Mission.Current.GetFleePositionsForSide(BattleSideEnum.Defender).FirstOrDefault<FleePosition>((Func<FleePosition, bool>) (fp => fp.GetSide() == BattleSideEnum.Defender));
      this._defendPosition = fleePosition == null ? WorldPosition.Invalid : fleePosition.GameEntity.GlobalPosition.ToWorldPosition();
      this._enemyClusters = new List<TacticPerimeterDefense.EnemyCluster>();
      this._defenseFronts = new List<TacticPerimeterDefense.DefenseFront>();
    }

    private void DetermineEnemyClusters()
    {
      List<Formation> formationList = new List<Formation>();
      float b = 0.0f;
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
          b += team.QuerySystem.TeamPower;
      }
      foreach (Team team in (List<Team>) this.Team.Mission.Teams)
      {
        if (team.IsEnemyOf(this.Team))
        {
          for (int index = 0; index < Math.Min(team.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
          {
            Formation enemyFormation = team.FormationsIncludingSpecialAndEmpty[index];
            if (enemyFormation.CountOfUnits > 0 && (double) enemyFormation.QuerySystem.FormationPower < (double) MathF.Min(this.Team.QuerySystem.TeamPower, b) / 4.0)
            {
              if (!this._enemyClusters.Any<TacticPerimeterDefense.EnemyCluster>((Func<TacticPerimeterDefense.EnemyCluster, bool>) (ec => ec.enemyFormations.IndexOf(enemyFormation) >= 0)))
                formationList.Add(enemyFormation);
            }
            else
            {
              TacticPerimeterDefense.EnemyCluster enemyCluster1 = this._enemyClusters.FirstOrDefault<TacticPerimeterDefense.EnemyCluster>((Func<TacticPerimeterDefense.EnemyCluster, bool>) (ec => ec.enemyFormations.IndexOf(enemyFormation) >= 0));
              if (enemyCluster1 != null)
              {
                if ((double) (this._defendPosition.AsVec2 - enemyCluster1.AggregatePosition).DotProduct(this._defendPosition.AsVec2 - enemyFormation.QuerySystem.AveragePosition) < 0.70710678118)
                  enemyCluster1.RemoveFromCluster(enemyFormation);
                else
                  continue;
              }
              List<TacticPerimeterDefense.EnemyCluster> list = this._enemyClusters.Where<TacticPerimeterDefense.EnemyCluster>((Func<TacticPerimeterDefense.EnemyCluster, bool>) (c => (double) (this._defendPosition.AsVec2 - c.AggregatePosition).DotProduct(this._defendPosition.AsVec2 - enemyFormation.QuerySystem.MedianPosition.AsVec2) >= 0.70710678118)).ToList<TacticPerimeterDefense.EnemyCluster>();
              if (list.Count > 0)
              {
                list.MaxBy<TacticPerimeterDefense.EnemyCluster, float>((Func<TacticPerimeterDefense.EnemyCluster, float>) (ec => (this._defendPosition.AsVec2 - ec.AggregatePosition).DotProduct(this._defendPosition.AsVec2 - enemyFormation.QuerySystem.MedianPosition.AsVec2))).AddToCluster(enemyFormation);
              }
              else
              {
                TacticPerimeterDefense.EnemyCluster enemyCluster2 = new TacticPerimeterDefense.EnemyCluster();
                enemyCluster2.AddToCluster(enemyFormation);
                this._enemyClusters.Add(enemyCluster2);
              }
            }
          }
        }
      }
      if (this._enemyClusters.Count <= 0)
        return;
      foreach (Formation formation in formationList)
      {
        Formation skippedFormation = formation;
        this._enemyClusters.MaxBy<TacticPerimeterDefense.EnemyCluster, float>((Func<TacticPerimeterDefense.EnemyCluster, float>) (ec => (this._defendPosition.AsVec2 - ec.AggregatePosition).DotProduct(this._defendPosition.AsVec2 - skippedFormation.QuerySystem.MedianPosition.AsVec2))).AddToCluster(skippedFormation);
      }
    }

    private bool MustRetreatToCastle()
    {
      return (double) this.Team.QuerySystem.TotalPowerRatio / (double) this.Team.QuerySystem.RemainingPowerRatio > 2.0;
    }

    private void StartRetreatToKeep()
    {
      foreach (Formation f in (List<Formation>) this.FormationsIncludingEmpty)
      {
        if (f.CountOfUnits > 0)
        {
          f.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(f);
          f.AI.SetBehaviorWeight<BehaviorRetreatToKeep>(1f);
        }
      }
    }

    private void CheckAndChangeState()
    {
      if (!this.MustRetreatToCastle() || this._isRetreatingToKeep)
        return;
      this._isRetreatingToKeep = true;
      this.StartRetreatToKeep();
    }

    private void ArrangeDefenseFronts()
    {
      this._meleeFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
      {
        if (f.CountOfUnits <= 0)
          return false;
        return f.QuerySystem.IsInfantryFormation || f.QuerySystem.IsCavalryFormation;
      })).ToList<Formation>();
      this._rangedFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
      {
        if (f.CountOfUnits <= 0)
          return false;
        return f.QuerySystem.IsRangedFormation || f.QuerySystem.IsRangedCavalryFormation;
      })).ToList<Formation>();
      int count1 = MathF.Min(8 - this._rangedFormations.Count, this._enemyClusters.Count);
      if (this._meleeFormations.Count != count1)
      {
        this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsInfantryFormation || f.QuerySystem.IsCavalryFormation), count1);
        this._meleeFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
        {
          if (f.CountOfUnits <= 0)
            return false;
          return f.QuerySystem.IsInfantryFormation || f.QuerySystem.IsCavalryFormation;
        })).ToList<Formation>();
      }
      int count2 = MathF.Min(8 - count1, this._enemyClusters.Count);
      if (this._rangedFormations.Count != count2)
      {
        this.SplitFormationClassIntoGivenNumber((Func<Formation, bool>) (f => f.QuerySystem.IsRangedFormation || f.QuerySystem.IsRangedCavalryFormation), count2);
        this._rangedFormations = this.FormationsIncludingEmpty.Where<Formation>((Func<Formation, bool>) (f =>
        {
          if (f.CountOfUnits <= 0)
            return false;
          return f.QuerySystem.IsRangedFormation || f.QuerySystem.IsRangedCavalryFormation;
        })).ToList<Formation>();
      }
      foreach (TacticPerimeterDefense.DefenseFront defenseFront in this._defenseFronts)
      {
        defenseFront.MatchedEnemyCluster.UpdateClusterData();
        BehaviorDefendKeyPosition defendKeyPosition = defenseFront.MeleeFormation.AI.SetBehaviorWeight<BehaviorDefendKeyPosition>(1f);
        defendKeyPosition.EnemyClusterPosition = defenseFront.MatchedEnemyCluster.MedianAggregatePosition;
        defendKeyPosition.EnemyClusterPosition.SetVec2(defenseFront.MatchedEnemyCluster.AggregatePosition);
      }
      IEnumerable<TacticPerimeterDefense.EnemyCluster> enemyClusters = this._enemyClusters.Where<TacticPerimeterDefense.EnemyCluster>((Func<TacticPerimeterDefense.EnemyCluster, bool>) (ec => this._defenseFronts.All<TacticPerimeterDefense.DefenseFront>((Func<TacticPerimeterDefense.DefenseFront, bool>) (df => df.MatchedEnemyCluster != ec))));
      List<Formation> list1 = this._meleeFormations.Where<Formation>((Func<Formation, bool>) (mf => this._defenseFronts.All<TacticPerimeterDefense.DefenseFront>((Func<TacticPerimeterDefense.DefenseFront, bool>) (df => df.MeleeFormation != mf)))).ToList<Formation>();
      List<Formation> list2 = this._rangedFormations.Where<Formation>((Func<Formation, bool>) (rf => this._defenseFronts.All<TacticPerimeterDefense.DefenseFront>((Func<TacticPerimeterDefense.DefenseFront, bool>) (df => df.RangedFormation != rf)))).ToList<Formation>();
      foreach (TacticPerimeterDefense.EnemyCluster matchedEnemyCluster in enemyClusters)
      {
        if (list1.IsEmpty<Formation>())
          break;
        Formation formation = list1[list1.Count - 1];
        TacticPerimeterDefense.DefenseFront defenseFront = new TacticPerimeterDefense.DefenseFront(matchedEnemyCluster, formation);
        formation.AI.ResetBehaviorWeights();
        TacticComponent.SetDefaultBehaviorWeights(formation);
        BehaviorDefendKeyPosition defendKeyPosition = formation.AI.SetBehaviorWeight<BehaviorDefendKeyPosition>(1f);
        defendKeyPosition.DefensePosition = this._defendPosition;
        defendKeyPosition.EnemyClusterPosition = matchedEnemyCluster.MedianAggregatePosition;
        defendKeyPosition.EnemyClusterPosition.SetVec2(matchedEnemyCluster.AggregatePosition);
        list1.Remove(formation);
        if (!list2.IsEmpty<Formation>())
        {
          Formation f = list2[list2.Count - 1];
          f.AI.ResetBehaviorWeights();
          TacticComponent.SetDefaultBehaviorWeights(f);
          f.AI.SetBehaviorWeight<BehaviorSkirmishBehindFormation>(1f).ReferenceFormation = formation;
          defenseFront.RangedFormation = f;
          list2.Remove(f);
          this._defenseFronts.Add(defenseFront);
        }
      }
    }

    protected internal override void TickOccasionally()
    {
      if (!this.AreFormationsCreated)
        return;
      this.CheckAndChangeState();
      if (this._isRetreatingToKeep)
        return;
      this.DetermineEnemyClusters();
      this.ArrangeDefenseFronts();
    }

    protected internal override float GetTacticWeight()
    {
      return this._defendPosition.IsValid ? 10f : 0.0f;
    }

    private class DefenseFront
    {
      public Formation MeleeFormation;
      public Formation RangedFormation;
      public TacticPerimeterDefense.EnemyCluster MatchedEnemyCluster;

      public DefenseFront(
        TacticPerimeterDefense.EnemyCluster matchedEnemyCluster,
        Formation meleeFormation)
      {
        this.MatchedEnemyCluster = matchedEnemyCluster;
        this.MeleeFormation = meleeFormation;
        this.RangedFormation = (Formation) null;
      }
    }

    private class EnemyCluster
    {
      public List<Formation> enemyFormations;
      public float totalPower;

      public Vec2 AggregatePosition { get; private set; }

      public WorldPosition MedianAggregatePosition { get; private set; }

      public EnemyCluster() => this.enemyFormations = new List<Formation>();

      public void UpdateClusterData()
      {
        this.totalPower = this.enemyFormations.Sum<Formation>((Func<Formation, float>) (ef => ef.QuerySystem.FormationPower));
        this.AggregatePosition = Vec2.Zero;
        foreach (Formation enemyFormation in this.enemyFormations)
          this.AggregatePosition += enemyFormation.QuerySystem.AveragePosition * (enemyFormation.QuerySystem.FormationPower / this.totalPower);
        this.UpdateMedianPosition();
      }

      public void AddToCluster(Formation formation)
      {
        this.enemyFormations.Add(formation);
        float totalPower = this.totalPower;
        this.totalPower += formation.QuerySystem.FormationPower;
        this.AggregatePosition = this.AggregatePosition * (totalPower / this.totalPower) + formation.QuerySystem.AveragePosition * (formation.QuerySystem.FormationPower / this.totalPower);
        this.UpdateMedianPosition();
      }

      public void RemoveFromCluster(Formation formation)
      {
        this.enemyFormations.Remove(formation);
        float totalPower = this.totalPower;
        this.totalPower -= formation.QuerySystem.FormationPower;
        this.AggregatePosition -= formation.QuerySystem.AveragePosition * (formation.QuerySystem.FormationPower / totalPower);
        this.AggregatePosition *= totalPower / this.totalPower;
        this.UpdateMedianPosition();
      }

      private void UpdateMedianPosition()
      {
        float num1 = float.MaxValue;
        foreach (Formation enemyFormation in this.enemyFormations)
        {
          float num2 = enemyFormation.QuerySystem.MedianPosition.AsVec2.DistanceSquared(this.AggregatePosition);
          if ((double) num2 < (double) num1)
          {
            num1 = num2;
            this.MedianAggregatePosition = enemyFormation.QuerySystem.MedianPosition;
          }
        }
      }
    }
  }
}
