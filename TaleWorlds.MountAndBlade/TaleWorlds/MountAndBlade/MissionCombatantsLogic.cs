// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionCombatantsLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionCombatantsLogic : MissionLogic
  {
    private readonly IEnumerable<IBattleCombatant> _battleCombatants;
    private readonly IBattleCombatant _playerBattleCombatant;
    private readonly IBattleCombatant _defenderLeaderBattleCombatant;
    private readonly IBattleCombatant _attackerLeaderBattleCombatant;
    private readonly Mission.MissionTeamAITypeEnum _teamAIType;
    private readonly bool _isPlayerSergeant;

    public BattleSideEnum PlayerSide
    {
      get
      {
        if (this._playerBattleCombatant == null)
          return BattleSideEnum.None;
        return this._playerBattleCombatant != this._defenderLeaderBattleCombatant ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
      }
    }

    public MissionCombatantsLogic(
      IEnumerable<IBattleCombatant> battleCombatants,
      IBattleCombatant playerBattleCombatant,
      IBattleCombatant defenderLeaderBattleCombatant,
      IBattleCombatant attackerLeaderBattleCombatant,
      Mission.MissionTeamAITypeEnum teamAIType,
      bool isPlayerSergeant)
    {
      if (battleCombatants == null)
        battleCombatants = (IEnumerable<IBattleCombatant>) new IBattleCombatant[2]
        {
          defenderLeaderBattleCombatant,
          attackerLeaderBattleCombatant
        };
      this._battleCombatants = battleCombatants;
      this._playerBattleCombatant = playerBattleCombatant;
      this._defenderLeaderBattleCombatant = defenderLeaderBattleCombatant;
      this._attackerLeaderBattleCombatant = attackerLeaderBattleCombatant;
      this._teamAIType = teamAIType;
      this._isPlayerSergeant = isPlayerSergeant;
    }

    public Banner GetBannerForSide(BattleSideEnum side)
    {
      return side != BattleSideEnum.Defender ? this._attackerLeaderBattleCombatant.Banner : this._defenderLeaderBattleCombatant.Banner;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      if (!this.Mission.Teams.IsEmpty<Team>())
        throw new MBIllegalValueException("Number of teams is not 0.");
      BattleSideEnum side = this._playerBattleCombatant.Side;
      BattleSideEnum oppositeSide = side.GetOppositeSide();
      if (side == BattleSideEnum.Defender)
        this.AddPlayerTeam(side);
      else
        this.AddEnemyTeam(oppositeSide);
      if (side == BattleSideEnum.Attacker)
        this.AddPlayerTeam(side);
      else
        this.AddEnemyTeam(oppositeSide);
      this.AddPlayerAllyTeam(side);
    }

    public override void EarlyStart()
    {
      Mission.Current.MissionTeamAIType = this._teamAIType;
      switch (this._teamAIType)
      {
        case Mission.MissionTeamAITypeEnum.FieldBattle:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              current.AddTeamAI((TeamAIComponent) new TeamAIGeneral(this.Mission, current));
            }
            break;
          }
        case Mission.MissionTeamAITypeEnum.Siege:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              if (current.Side == BattleSideEnum.Attacker)
                current.AddTeamAI((TeamAIComponent) new TeamAISiegeAttacker(this.Mission, current, 5f, 1f));
              if (current.Side == BattleSideEnum.Defender)
                current.AddTeamAI((TeamAIComponent) new TeamAISiegeDefender(this.Mission, current, 5f, 1f));
            }
            break;
          }
        case Mission.MissionTeamAITypeEnum.SallyOut:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              if (current.Side == BattleSideEnum.Attacker)
                current.AddTeamAI((TeamAIComponent) new TeamAISallyOutDefender(this.Mission, current, 5f, 1f));
              else
                current.AddTeamAI((TeamAIComponent) new TeamAISallyOutAttacker(this.Mission, current, 5f, 1f));
            }
            break;
          }
      }
      if (Mission.Current.Teams.Count <= 0)
        return;
      switch (Mission.Current.MissionTeamAIType)
      {
        case Mission.MissionTeamAITypeEnum.NoTeamAI:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              if (current.HasTeamAi)
                current.AddTacticOption((TacticComponent) new TacticCharge(current));
            }
            break;
          }
        case Mission.MissionTeamAITypeEnum.FieldBattle:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team team = enumerator.Current;
              if (team.HasTeamAi)
              {
                int num = this._battleCombatants.Where<IBattleCombatant>((Func<IBattleCombatant, bool>) (bc => bc.Side == team.Side)).Max<IBattleCombatant>((Func<IBattleCombatant, int>) (bcs => bcs.GetTacticsSkillAmount()));
                team.AddTacticOption((TacticComponent) new TacticCharge(team));
                if ((double) num >= 20.0)
                {
                  team.AddTacticOption((TacticComponent) new TacticFullScaleAttack(team));
                  if (team.Side == BattleSideEnum.Defender)
                  {
                    team.AddTacticOption((TacticComponent) new TacticDefensiveEngagement(team));
                    team.AddTacticOption((TacticComponent) new TacticDefensiveLine(team));
                  }
                  if (team.Side == BattleSideEnum.Attacker)
                    team.AddTacticOption((TacticComponent) new TacticRangedHarrassmentOffensive(team));
                }
                if ((double) num >= 50.0)
                {
                  team.AddTacticOption((TacticComponent) new TacticFrontalCavalryCharge(team));
                  if (team.Side == BattleSideEnum.Defender)
                  {
                    team.AddTacticOption((TacticComponent) new TacticDefensiveRing(team));
                    team.AddTacticOption((TacticComponent) new TacticHoldChokePoint(team));
                  }
                  if (team.Side == BattleSideEnum.Attacker)
                    team.AddTacticOption((TacticComponent) new TacticCoordinatedRetreat(team));
                }
              }
            }
            break;
          }
        case Mission.MissionTeamAITypeEnum.Siege:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              if (current.HasTeamAi)
              {
                if (current.Side == BattleSideEnum.Attacker)
                  current.AddTacticOption((TacticComponent) new TacticBreachWalls(current));
                if (current.Side == BattleSideEnum.Defender)
                  current.AddTacticOption((TacticComponent) new TacticDefendCastle(current));
              }
            }
            break;
          }
        case Mission.MissionTeamAITypeEnum.SallyOut:
          using (List<Team>.Enumerator enumerator = Mission.Current.Teams.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              Team current = enumerator.Current;
              if (current.HasTeamAi)
              {
                if (current.Side == BattleSideEnum.Defender)
                  current.AddTacticOption((TacticComponent) new TacticSallyOutHitAndRun(current));
                if (current.Side == BattleSideEnum.Attacker)
                  current.AddTacticOption((TacticComponent) new TacticSallyOutDefense(current));
                current.AddTacticOption((TacticComponent) new TacticCharge(current));
              }
            }
            break;
          }
      }
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        team.QuerySystem.Expire();
        team.ResetTactic();
      }
    }

    public override void AfterStart() => this.Mission.SetMissionMode(MissionMode.Battle, true);

    public IEnumerable<IBattleCombatant> GetAllCombatants()
    {
      foreach (IBattleCombatant battleCombatant in this._battleCombatants)
        yield return battleCombatant;
    }

    private void AddPlayerTeam(BattleSideEnum playerSide)
    {
      this.Mission.Teams.Add(playerSide, this._playerBattleCombatant.PrimaryColorPair.Item1, this._playerBattleCombatant.PrimaryColorPair.Item2, this._playerBattleCombatant.Banner);
      this.Mission.PlayerTeam = playerSide == BattleSideEnum.Attacker ? this.Mission.AttackerTeam : this.Mission.DefenderTeam;
    }

    private void AddEnemyTeam(BattleSideEnum enemySide)
    {
      IBattleCombatant battleCombatant = enemySide == BattleSideEnum.Attacker ? this._attackerLeaderBattleCombatant : this._defenderLeaderBattleCombatant;
      this.Mission.Teams.Add(enemySide, battleCombatant.PrimaryColorPair.Item1, battleCombatant.PrimaryColorPair.Item2, battleCombatant.Banner);
    }

    private void AddPlayerAllyTeam(BattleSideEnum playerSide)
    {
      if (this._battleCombatants == null)
        return;
      foreach (IBattleCombatant battleCombatant in this._battleCombatants)
      {
        if (battleCombatant != this._playerBattleCombatant && battleCombatant.Side == playerSide && !this._isPlayerSergeant)
        {
          this.Mission.Teams.Add(playerSide, battleCombatant.PrimaryColorPair.Item1, battleCombatant.PrimaryColorPair.Item2, battleCombatant.Banner);
          if (playerSide != BattleSideEnum.Attacker)
          {
            Team defenderAllyTeam = this.Mission.DefenderAllyTeam;
            break;
          }
          Team attackerAllyTeam = this.Mission.AttackerAllyTeam;
          break;
        }
      }
    }
  }
}
