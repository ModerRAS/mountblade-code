// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TeamQuerySystem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Missions.Handlers;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TeamQuerySystem
  {
    public readonly Team Team;
    private readonly Mission _mission;
    private readonly QueryData<int> _memberCount;
    private readonly QueryData<WorldPosition> _medianPosition;
    private readonly QueryData<Vec2> _averagePosition;
    private readonly QueryData<Vec2> _averageEnemyPosition;
    private readonly QueryData<FormationQuerySystem> _medianTargetFormation;
    private readonly QueryData<WorldPosition> _medianTargetFormationPosition;
    private readonly QueryData<WorldPosition> _leftFlankEdgePosition;
    private readonly QueryData<WorldPosition> _rightFlankEdgePosition;
    private readonly QueryData<float> _infantryRatio;
    private readonly QueryData<float> _rangedRatio;
    private readonly QueryData<float> _cavalryRatio;
    private readonly QueryData<float> _rangedCavalryRatio;
    private readonly QueryData<int> _allyMemberCount;
    private readonly QueryData<int> _enemyMemberCount;
    private readonly QueryData<float> _allyInfantryRatio;
    private readonly QueryData<float> _allyRangedRatio;
    private readonly QueryData<float> _allyCavalryRatio;
    private readonly QueryData<float> _allyRangedCavalryRatio;
    private readonly QueryData<float> _enemyInfantryRatio;
    private readonly QueryData<float> _enemyRangedRatio;
    private readonly QueryData<float> _enemyCavalryRatio;
    private readonly QueryData<float> _enemyRangedCavalryRatio;
    private readonly QueryData<float> _remainingPowerRatio;
    private readonly QueryData<float> _teamPower;
    private readonly QueryData<float> _totalPowerRatio;
    private readonly QueryData<float> _insideWallsRatio;
    private BattlePowerCalculationLogic _battlePowerLogic;
    private CasualtyHandler _casualtyHandler;
    private readonly QueryData<float> _maxUnderRangedAttackRatio;

    public int MemberCount => this._memberCount.Value;

    public WorldPosition MedianPosition => this._medianPosition.Value;

    public Vec2 AveragePosition => this._averagePosition.Value;

    public Vec2 AverageEnemyPosition => this._averageEnemyPosition.Value;

    public FormationQuerySystem MedianTargetFormation => this._medianTargetFormation.Value;

    public WorldPosition MedianTargetFormationPosition => this._medianTargetFormationPosition.Value;

    public WorldPosition LeftFlankEdgePosition => this._leftFlankEdgePosition.Value;

    public WorldPosition RightFlankEdgePosition => this._rightFlankEdgePosition.Value;

    public float InfantryRatio => this._infantryRatio.Value;

    public float RangedRatio => this._rangedRatio.Value;

    public float CavalryRatio => this._cavalryRatio.Value;

    public float RangedCavalryRatio => this._rangedCavalryRatio.Value;

    public int AllyUnitCount => this._allyMemberCount.Value;

    public int EnemyUnitCount => this._enemyMemberCount.Value;

    public float AllyInfantryRatio => this._allyInfantryRatio.Value;

    public float AllyRangedRatio => this._allyRangedRatio.Value;

    public float AllyCavalryRatio => this._allyCavalryRatio.Value;

    public float AllyRangedCavalryRatio => this._allyRangedCavalryRatio.Value;

    public float EnemyInfantryRatio => this._enemyInfantryRatio.Value;

    public float EnemyRangedRatio => this._enemyRangedRatio.Value;

    public float EnemyCavalryRatio => this._enemyCavalryRatio.Value;

    public float EnemyRangedCavalryRatio => this._enemyRangedCavalryRatio.Value;

    public float RemainingPowerRatio => this._remainingPowerRatio.Value;

    public float TeamPower => this._teamPower.Value;

    public float TotalPowerRatio => this._totalPowerRatio.Value;

    public float InsideWallsRatio => this._insideWallsRatio.Value;

    public BattlePowerCalculationLogic BattlePowerLogic
    {
      get
      {
        if (this._battlePowerLogic == null)
          this._battlePowerLogic = this._mission.GetMissionBehavior<BattlePowerCalculationLogic>();
        return this._battlePowerLogic;
      }
    }

    public CasualtyHandler CasualtyHandler
    {
      get
      {
        if (this._casualtyHandler == null)
          this._casualtyHandler = this._mission.GetMissionBehavior<CasualtyHandler>();
        return this._casualtyHandler;
      }
    }

    public float MaxUnderRangedAttackRatio => this._maxUnderRangedAttackRatio.Value;

    public int DeathCount { get; private set; }

    public int DeathByRangedCount { get; private set; }

    public int AllyRangedUnitCount
    {
      get => (int) ((double) this.AllyRangedRatio * (double) this.AllyUnitCount);
    }

    public int AllCavalryUnitCount
    {
      get => (int) ((double) this.AllyCavalryRatio * (double) this.AllyUnitCount);
    }

    public int EnemyRangedUnitCount
    {
      get => (int) ((double) this.EnemyRangedRatio * (double) this.EnemyUnitCount);
    }

    public void Expire()
    {
      this._memberCount.Expire();
      this._medianPosition.Expire();
      this._averagePosition.Expire();
      this._averageEnemyPosition.Expire();
      this._medianTargetFormationPosition.Expire();
      this._leftFlankEdgePosition.Expire();
      this._rightFlankEdgePosition.Expire();
      this._infantryRatio.Expire();
      this._rangedRatio.Expire();
      this._cavalryRatio.Expire();
      this._rangedCavalryRatio.Expire();
      this._allyMemberCount.Expire();
      this._enemyMemberCount.Expire();
      this._allyInfantryRatio.Expire();
      this._allyRangedRatio.Expire();
      this._allyCavalryRatio.Expire();
      this._allyRangedCavalryRatio.Expire();
      this._enemyInfantryRatio.Expire();
      this._enemyRangedRatio.Expire();
      this._enemyCavalryRatio.Expire();
      this._enemyRangedCavalryRatio.Expire();
      this._remainingPowerRatio.Expire();
      this._teamPower.Expire();
      this._totalPowerRatio.Expire();
      this._insideWallsRatio.Expire();
      this._maxUnderRangedAttackRatio.Expire();
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
          formation.QuerySystem.Expire();
      }
    }

    public void ExpireAfterUnitAddRemove()
    {
      this._memberCount.Expire();
      this._medianPosition.Expire();
      this._averagePosition.Expire();
      this._leftFlankEdgePosition.Expire();
      this._rightFlankEdgePosition.Expire();
      this._infantryRatio.Expire();
      this._rangedRatio.Expire();
      this._cavalryRatio.Expire();
      this._rangedCavalryRatio.Expire();
      this._allyMemberCount.Expire();
      this._allyInfantryRatio.Expire();
      this._allyRangedRatio.Expire();
      this._allyCavalryRatio.Expire();
      this._allyRangedCavalryRatio.Expire();
      this._remainingPowerRatio.Expire();
      this._teamPower.Expire();
      this._totalPowerRatio.Expire();
      this._insideWallsRatio.Expire();
      this._maxUnderRangedAttackRatio.Expire();
    }

    private void InitializeTelemetryScopeNames()
    {
    }

    public TeamQuerySystem(Team team)
    {
      TeamQuerySystem teamQuerySystem = this;
      this.Team = team;
      this._mission = Mission.Current;
      this._memberCount = new QueryData<int>((Func<int>) (() =>
      {
        int num = 0;
        foreach (Formation formation in (List<Formation>) teamQuerySystem.Team.FormationsIncludingSpecialAndEmpty)
          num += formation.CountOfUnits;
        return num;
      }), 2f);
      this._allyMemberCount = new QueryData<int>((Func<int>) (() =>
      {
        int num = 0;
        foreach (Team team1 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team1.IsFriendOf(teamQuerySystem.Team))
            num += team1.QuerySystem.MemberCount;
        }
        return num;
      }), 2f);
      this._enemyMemberCount = new QueryData<int>((Func<int>) (() =>
      {
        int num = 0;
        foreach (Team team2 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team2.IsEnemyOf(teamQuerySystem.Team))
            num += team2.QuerySystem.MemberCount;
        }
        return num;
      }), 2f);
      this._averagePosition = new QueryData<Vec2>(new Func<Vec2>(team.GetAveragePosition), 5f);
      this._medianPosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() => team.GetMedianPosition(teamQuerySystem.AveragePosition)), 5f);
      this._averageEnemyPosition = new QueryData<Vec2>((Func<Vec2>) (() =>
      {
        Vec2 positionOfEnemies = team.GetAveragePositionOfEnemies();
        if (positionOfEnemies.IsValid)
          return positionOfEnemies;
        if (team.Side == BattleSideEnum.Attacker)
        {
          SiegeDeploymentHandler missionBehavior = teamQuerySystem._mission.GetMissionBehavior<SiegeDeploymentHandler>();
          if (missionBehavior != null)
            return missionBehavior.GetEstimatedAverageDefenderPosition();
        }
        return !teamQuerySystem.AveragePosition.IsValid ? team.GetAveragePosition() : teamQuerySystem.AveragePosition;
      }), 5f);
      this._medianTargetFormation = new QueryData<FormationQuerySystem>((Func<FormationQuerySystem>) (() =>
      {
        float num1 = float.MaxValue;
        Formation formation1 = (Formation) null;
        foreach (Team team3 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team3.IsEnemyOf(teamQuerySystem.Team))
          {
            foreach (Formation formation2 in (List<Formation>) team3.FormationsIncludingSpecialAndEmpty)
            {
              if (formation2.CountOfUnits > 0)
              {
                float num2 = formation2.QuerySystem.MedianPosition.AsVec2.DistanceSquared(teamQuerySystem.AverageEnemyPosition);
                if ((double) num1 > (double) num2)
                {
                  num1 = num2;
                  formation1 = formation2;
                }
              }
            }
          }
        }
        return formation1?.QuerySystem;
      }), 1f);
      this._medianTargetFormationPosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() => teamQuerySystem.MedianTargetFormation != null ? teamQuerySystem.MedianTargetFormation.MedianPosition : teamQuerySystem.MedianPosition), 1f);
      QueryData<WorldPosition>.SetupSyncGroup((IQueryData) this._averageEnemyPosition, (IQueryData) this._medianTargetFormationPosition);
      this._leftFlankEdgePosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() =>
      {
        Vec2 vec2 = (teamQuerySystem.MedianTargetFormationPosition.AsVec2 - teamQuerySystem.AveragePosition).RightVec();
        double num = (double) vec2.Normalize();
        WorldPosition formationPosition = teamQuerySystem.MedianTargetFormationPosition;
        formationPosition.SetVec2(formationPosition.AsVec2 - vec2 * 50f);
        return formationPosition;
      }), 5f);
      this._rightFlankEdgePosition = new QueryData<WorldPosition>((Func<WorldPosition>) (() =>
      {
        Vec2 vec2 = (teamQuerySystem.MedianTargetFormationPosition.AsVec2 - teamQuerySystem.AveragePosition).RightVec();
        double num = (double) vec2.Normalize();
        WorldPosition formationPosition = teamQuerySystem.MedianTargetFormationPosition;
        formationPosition.SetVec2(formationPosition.AsVec2 + vec2 * 50f);
        return formationPosition;
      }), 5f);
      this._infantryRatio = new QueryData<float>((Func<float>) (() => teamQuerySystem.MemberCount != 0 ? (teamQuerySystem.Team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.QuerySystem.InfantryUnitRatio * (float) f.CountOfUnits)) + (float) team.Heroes.Count<Agent>((Func<Agent, bool>) (h => QueryLibrary.IsInfantry(h)))) / (float) teamQuerySystem.MemberCount : 0.0f), 15f);
      this._rangedRatio = new QueryData<float>((Func<float>) (() => teamQuerySystem.MemberCount != 0 ? (teamQuerySystem.Team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.QuerySystem.RangedUnitRatio * (float) f.CountOfUnits)) + (float) team.Heroes.Count<Agent>((Func<Agent, bool>) (h => QueryLibrary.IsRanged(h)))) / (float) teamQuerySystem.MemberCount : 0.0f), 15f);
      this._cavalryRatio = new QueryData<float>((Func<float>) (() => teamQuerySystem.MemberCount != 0 ? (teamQuerySystem.Team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.QuerySystem.CavalryUnitRatio * (float) f.CountOfUnits)) + (float) team.Heroes.Count<Agent>((Func<Agent, bool>) (h => QueryLibrary.IsCavalry(h)))) / (float) teamQuerySystem.MemberCount : 0.0f), 15f);
      this._rangedCavalryRatio = new QueryData<float>((Func<float>) (() => teamQuerySystem.MemberCount != 0 ? (teamQuerySystem.Team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.QuerySystem.RangedCavalryUnitRatio * (float) f.CountOfUnits)) + (float) team.Heroes.Count<Agent>((Func<Agent, bool>) (h => QueryLibrary.IsRangedCavalry(h)))) / (float) teamQuerySystem.MemberCount : 0.0f), 15f);
      QueryData<float>.SetupSyncGroup((IQueryData) this._infantryRatio, (IQueryData) this._rangedRatio, (IQueryData) this._cavalryRatio, (IQueryData) this._rangedCavalryRatio);
      this._allyInfantryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num3 = 0.0f;
        int num4 = 0;
        foreach (Team team4 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team4.IsFriendOf(teamQuerySystem.Team))
          {
            int memberCount = team4.QuerySystem.MemberCount;
            num3 += team4.QuerySystem.InfantryRatio * (float) memberCount;
            num4 += memberCount;
          }
        }
        return num4 != 0 ? num3 / (float) num4 : 0.0f;
      }), 15f);
      this._allyRangedRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num5 = 0.0f;
        int num6 = 0;
        foreach (Team team5 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team5.IsFriendOf(teamQuerySystem.Team))
          {
            int memberCount = team5.QuerySystem.MemberCount;
            num5 += team5.QuerySystem.RangedRatio * (float) memberCount;
            num6 += memberCount;
          }
        }
        return num6 != 0 ? num5 / (float) num6 : 0.0f;
      }), 15f);
      this._allyCavalryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num7 = 0.0f;
        int num8 = 0;
        foreach (Team team6 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team6.IsFriendOf(teamQuerySystem.Team))
          {
            int memberCount = team6.QuerySystem.MemberCount;
            num7 += team6.QuerySystem.CavalryRatio * (float) memberCount;
            num8 += memberCount;
          }
        }
        return num8 != 0 ? num7 / (float) num8 : 0.0f;
      }), 15f);
      this._allyRangedCavalryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num9 = 0.0f;
        int num10 = 0;
        foreach (Team team7 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team7.IsFriendOf(teamQuerySystem.Team))
          {
            int memberCount = team7.QuerySystem.MemberCount;
            num9 += team7.QuerySystem.RangedCavalryRatio * (float) memberCount;
            num10 += memberCount;
          }
        }
        return num10 != 0 ? num9 / (float) num10 : 0.0f;
      }), 15f);
      QueryData<float>.SetupSyncGroup((IQueryData) this._allyInfantryRatio, (IQueryData) this._allyRangedRatio, (IQueryData) this._allyCavalryRatio, (IQueryData) this._allyRangedCavalryRatio);
      this._enemyInfantryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num11 = 0.0f;
        int num12 = 0;
        foreach (Team team8 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team8.IsEnemyOf(teamQuerySystem.Team))
          {
            int memberCount = team8.QuerySystem.MemberCount;
            num11 += team8.QuerySystem.InfantryRatio * (float) memberCount;
            num12 += memberCount;
          }
        }
        return num12 != 0 ? num11 / (float) num12 : 0.0f;
      }), 15f);
      this._enemyRangedRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num13 = 0.0f;
        int num14 = 0;
        foreach (Team team9 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team9.IsEnemyOf(teamQuerySystem.Team))
          {
            int memberCount = team9.QuerySystem.MemberCount;
            num13 += team9.QuerySystem.RangedRatio * (float) memberCount;
            num14 += memberCount;
          }
        }
        return num14 != 0 ? num13 / (float) num14 : 0.0f;
      }), 15f);
      this._enemyCavalryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num15 = 0.0f;
        int num16 = 0;
        foreach (Team team10 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team10.IsEnemyOf(teamQuerySystem.Team))
          {
            int memberCount = team10.QuerySystem.MemberCount;
            num15 += team10.QuerySystem.CavalryRatio * (float) memberCount;
            num16 += memberCount;
          }
        }
        return num16 != 0 ? num15 / (float) num16 : 0.0f;
      }), 15f);
      this._enemyRangedCavalryRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num17 = 0.0f;
        int num18 = 0;
        foreach (Team team11 in (List<Team>) teamQuerySystem._mission.Teams)
        {
          if (team11.IsEnemyOf(teamQuerySystem.Team))
          {
            int memberCount = team11.QuerySystem.MemberCount;
            num17 += team11.QuerySystem.RangedCavalryRatio * (float) memberCount;
            num18 += memberCount;
          }
        }
        return num18 != 0 ? num17 / (float) num18 : 0.0f;
      }), 15f);
      this._teamPower = new QueryData<float>((Func<float>) (() => team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.GetFormationPower()))), 5f);
      this._remainingPowerRatio = new QueryData<float>((Func<float>) (() =>
      {
        BattlePowerCalculationLogic battlePowerLogic = teamQuerySystem.BattlePowerLogic;
        CasualtyHandler casualtyHandler = teamQuerySystem.CasualtyHandler;
        float b1 = 0.0f;
        float b2 = 0.0f;
        foreach (Team team12 in (List<Team>) teamQuerySystem.Team.Mission.Teams)
        {
          if (team12.IsEnemyOf(teamQuerySystem.Team))
          {
            b2 += battlePowerLogic.GetTotalTeamPower(team12);
            foreach (Formation formation in (List<Formation>) team12.FormationsIncludingSpecialAndEmpty)
              b2 -= casualtyHandler.GetCasualtyPowerLossOfFormation(formation);
          }
          else
          {
            b1 += battlePowerLogic.GetTotalTeamPower(team12);
            foreach (Formation formation in (List<Formation>) team12.FormationsIncludingSpecialAndEmpty)
              b1 -= casualtyHandler.GetCasualtyPowerLossOfFormation(formation);
          }
        }
        return (float) (((double) MathF.Max(0.0f, b1) + 1.0) / ((double) MathF.Max(0.0f, b2) + 1.0));
      }), 5f);
      this._totalPowerRatio = new QueryData<float>((Func<float>) (() =>
      {
        BattlePowerCalculationLogic battlePowerLogic = teamQuerySystem.BattlePowerLogic;
        float num19 = 0.0f;
        float num20 = 0.0f;
        foreach (Team team13 in (List<Team>) teamQuerySystem.Team.Mission.Teams)
        {
          if (team13.IsEnemyOf(teamQuerySystem.Team))
            num20 += battlePowerLogic.GetTotalTeamPower(team13);
          else
            num19 += battlePowerLogic.GetTotalTeamPower(team13);
        }
        return (float) (((double) num19 + 1.0) / ((double) num20 + 1.0));
      }), 10f);
      this._insideWallsRatio = new QueryData<float>((Func<float>) (() =>
      {
        if (!(team.TeamAI is TeamAISiegeComponent))
          return 1f;
        if (teamQuerySystem.AllyUnitCount == 0)
          return 0.0f;
        int num = 0;
        foreach (Team team14 in (List<Team>) Mission.Current.Teams)
        {
          if (team14.IsFriendOf(team))
          {
            foreach (Formation formation in (List<Formation>) team14.FormationsIncludingSpecialAndEmpty)
            {
              if (formation.CountOfUnits > 0)
                num += formation.CountUnitsOnNavMeshIDMod10(1, false);
            }
          }
        }
        return (float) num / (float) teamQuerySystem.AllyUnitCount;
      }), 10f);
      this._maxUnderRangedAttackRatio = new QueryData<float>((Func<float>) (() =>
      {
        float num21;
        if (teamQuerySystem.AllyUnitCount == 0)
        {
          num21 = 0.0f;
        }
        else
        {
          float currentTime = MBCommon.GetTotalMissionTime();
          int num22 = 0;
          foreach (Team team15 in (List<Team>) teamQuerySystem._mission.Teams)
          {
            if (team15.IsFriendOf(teamQuerySystem.Team))
            {
              for (int index = 0; index < Math.Min(team15.FormationsIncludingSpecialAndEmpty.Count, 8); ++index)
              {
                Formation formation = team15.FormationsIncludingSpecialAndEmpty[index];
                if (formation.CountOfUnits > 0)
                  num22 += formation.GetCountOfUnitsWithCondition((Func<Agent, bool>) (agent => (double) currentTime - (double) agent.LastRangedHitTime < 10.0 && !agent.Equipment.HasShield()));
              }
            }
          }
          num21 = (float) num22 / (float) teamQuerySystem.AllyUnitCount;
        }
        return (double) num21 <= (double) teamQuerySystem._maxUnderRangedAttackRatio.GetCachedValue() ? teamQuerySystem._maxUnderRangedAttackRatio.GetCachedValue() : num21;
      }), 3f);
      this.DeathCount = 0;
      this.DeathByRangedCount = 0;
      this.InitializeTelemetryScopeNames();
    }

    public void RegisterDeath() => ++this.DeathCount;

    public void RegisterDeathByRanged() => ++this.DeathByRangedCount;

    public float GetLocalAllyPower(Vec2 target)
    {
      return this.Team.FormationsIncludingSpecialAndEmpty.Sum<Formation>((Func<Formation, float>) (f => f.CountOfUnits <= 0 ? 0.0f : f.QuerySystem.FormationPower / f.QuerySystem.AveragePosition.Distance(target)));
    }

    public float GetLocalEnemyPower(Vec2 target)
    {
      float localEnemyPower = 0.0f;
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (this.Team.IsEnemyOf(team))
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
              localEnemyPower += formation.QuerySystem.FormationPower / formation.QuerySystem.AveragePosition.Distance(target);
          }
        }
      }
      return localEnemyPower;
    }
  }
}
