// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.MissionLogics.TournamentFightMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Tournaments.MissionLogics
{
  public class TournamentFightMissionController : MissionLogic, ITournamentGameBehavior
  {
    private readonly CharacterObject _defaultWeaponTemplatesIdTeamSizeOne = MBObjectManager.Instance.GetObject<CharacterObject>("tournament_template_empire_one_participant_set_v1");
    private readonly CharacterObject _defaultWeaponTemplatesIdTeamSizeTwo = MBObjectManager.Instance.GetObject<CharacterObject>("tournament_template_empire_two_participant_set_v1");
    private readonly CharacterObject _defaultWeaponTemplatesIdTeamSizeFour = MBObjectManager.Instance.GetObject<CharacterObject>("tournament_template_empire_four_participant_set_v1");
    private TournamentMatch _match;
    private bool _isLastRound;
    private BasicMissionTimer _endTimer;
    private BasicMissionTimer _cheerTimer;
    private List<GameEntity> _spawnPoints;
    private bool _isSimulated;
    private bool _forceEndMatch;
    private bool _cheerStarted;
    private CultureObject _culture;
    private List<TournamentParticipant> _aliveParticipants;
    private List<TournamentTeam> _aliveTeams;
    private List<Agent> _currentTournamentAgents;
    private List<Agent> _currentTournamentMountAgents;
    private const float XpShareForKill = 0.5f;
    private const float XpShareForDamage = 0.5f;

    public TournamentFightMissionController(CultureObject culture)
    {
      this._match = (TournamentMatch) null;
      this._culture = culture;
      this._cheerStarted = false;
      this._currentTournamentAgents = new List<Agent>();
      this._currentTournamentMountAgents = new List<Agent>();
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.Mission.CanAgentRout_AdditionalCondition += new Func<Agent, bool>(this.CanAgentRout);
    }

    public override void AfterStart()
    {
      TournamentBehavior.DeleteTournamentSetsExcept(this.Mission.Scene.FindEntityWithTag("tournament_fight"));
      this._spawnPoints = new List<GameEntity>();
      for (int index = 0; index < 4; ++index)
      {
        GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("sp_arena_" + (object) (index + 1));
        if ((NativeObject) entityWithTag != (NativeObject) null)
          this._spawnPoints.Add(entityWithTag);
      }
      if (this._spawnPoints.Count >= 4)
        return;
      this._spawnPoints = this.Mission.Scene.FindEntitiesWithTag("sp_arena").ToList<GameEntity>();
    }

    public void PrepareForMatch()
    {
      List<Equipment> weaponEquipmentList = this.GetTeamWeaponEquipmentList(this._match.Teams.First<TournamentTeam>().Participants.Count<TournamentParticipant>());
      foreach (TournamentTeam team in this._match.Teams)
      {
        int index = 0;
        foreach (TournamentParticipant participant in team.Participants)
        {
          participant.MatchEquipment = weaponEquipmentList[index].Clone();
          this.AddRandomClothes(this._culture, participant);
          ++index;
        }
      }
    }

    public void StartMatch(TournamentMatch match, bool isLastRound)
    {
      this._cheerStarted = false;
      this._match = match;
      this._isLastRound = isLastRound;
      this.PrepareForMatch();
      this.Mission.SetMissionMode(MissionMode.Battle, true);
      List<Team> teamList = new List<Team>();
      int count = this._spawnPoints.Count;
      int num = 0;
      foreach (TournamentTeam team1 in this._match.Teams)
      {
        Team team2 = this.Mission.Teams.Add(team1.IsPlayerTeam ? BattleSideEnum.Defender : BattleSideEnum.Attacker, team1.TeamColor, banner: team1.TeamBanner);
        GameEntity spawnPoint = this._spawnPoints[num % count];
        foreach (TournamentParticipant participant in team1.Participants)
        {
          if (participant.Character.IsPlayerCharacter)
          {
            this.SpawnTournamentParticipant(spawnPoint, participant, team2);
            break;
          }
        }
        foreach (TournamentParticipant participant in team1.Participants)
        {
          if (!participant.Character.IsPlayerCharacter)
            this.SpawnTournamentParticipant(spawnPoint, participant, team2);
        }
        ++num;
        teamList.Add(team2);
      }
      for (int index1 = 0; index1 < teamList.Count; ++index1)
      {
        for (int index2 = index1 + 1; index2 < teamList.Count; ++index2)
          teamList[index1].SetIsEnemyOf(teamList[index2], true);
      }
      this._aliveParticipants = this._match.Participants.ToList<TournamentParticipant>();
      this._aliveTeams = this._match.Teams.ToList<TournamentTeam>();
    }

    protected override void OnEndMission()
    {
      this.Mission.CanAgentRout_AdditionalCondition -= new Func<Agent, bool>(this.CanAgentRout);
    }

    private void SpawnTournamentParticipant(
      GameEntity spawnPoint,
      TournamentParticipant participant,
      Team team)
    {
      MatrixFrame globalFrame = spawnPoint.GetGlobalFrame();
      globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this.SpawnAgentWithRandomItems(participant, team, globalFrame);
    }

    private List<Equipment> GetTeamWeaponEquipmentList(int teamSize)
    {
      List<Equipment> weaponEquipmentList = new List<Equipment>();
      CultureObject culture = PlayerEncounter.EncounterSettlement.Culture;
      MBReadOnlyList<CharacterObject> mbReadOnlyList1;
      switch (teamSize)
      {
        case 2:
          mbReadOnlyList1 = culture.TournamentTeamTemplatesForTwoParticipant;
          break;
        case 4:
          mbReadOnlyList1 = culture.TournamentTeamTemplatesForFourParticipant;
          break;
        default:
          mbReadOnlyList1 = culture.TournamentTeamTemplatesForOneParticipant;
          break;
      }
      MBReadOnlyList<CharacterObject> mbReadOnlyList2 = mbReadOnlyList1;
      CharacterObject characterObject1;
      if (mbReadOnlyList2.Count > 0)
      {
        characterObject1 = mbReadOnlyList2[MBRandom.RandomInt(mbReadOnlyList2.Count)];
      }
      else
      {
        CharacterObject characterObject2;
        switch (teamSize)
        {
          case 2:
            characterObject2 = this._defaultWeaponTemplatesIdTeamSizeTwo;
            break;
          case 4:
            characterObject2 = this._defaultWeaponTemplatesIdTeamSizeFour;
            break;
          default:
            characterObject2 = this._defaultWeaponTemplatesIdTeamSizeOne;
            break;
        }
        characterObject1 = characterObject2;
      }
      foreach (Equipment battleEquipment in characterObject1.BattleEquipments)
      {
        Equipment equipment = new Equipment();
        equipment.FillFrom(battleEquipment);
        weaponEquipmentList.Add(equipment);
      }
      return weaponEquipmentList;
    }

    public void SkipMatch(TournamentMatch match)
    {
      this._match = match;
      this.PrepareForMatch();
      this.Simulate();
    }

    public bool IsMatchEnded()
    {
      if (this._isSimulated || this._match == null)
        return true;
      if (this._endTimer != null && (double) this._endTimer.ElapsedTime > 6.0 || this._forceEndMatch)
      {
        this._forceEndMatch = false;
        this._endTimer = (BasicMissionTimer) null;
        return true;
      }
      if (this._cheerTimer != null && !this._cheerStarted && (double) this._cheerTimer.ElapsedTime > 1.0)
      {
        this.OnMatchResultsReady();
        this._cheerTimer = (BasicMissionTimer) null;
        this._cheerStarted = true;
        AgentVictoryLogic missionBehavior = this.Mission.GetMissionBehavior<AgentVictoryLogic>();
        foreach (Agent currentTournamentAgent in this._currentTournamentAgents)
        {
          if (currentTournamentAgent.IsAIControlled)
            missionBehavior.SetTimersOfVictoryReactionsOnTournamentVictoryForAgent(currentTournamentAgent, 1f, 3f);
        }
        return false;
      }
      if (this._endTimer == null && !this.CheckIfIsThereAnyEnemies())
      {
        this._endTimer = new BasicMissionTimer();
        if (!this._cheerStarted)
          this._cheerTimer = new BasicMissionTimer();
      }
      return false;
    }

    public void OnMatchResultsReady()
    {
      if (this._match.IsPlayerParticipating())
      {
        if (this._match.IsPlayerWinner())
        {
          if (this._isLastRound)
          {
            if (this._match.QualificationMode == TournamentGame.QualificationMode.IndividualScore)
              MBInformationManager.AddQuickInformation(new TextObject("{=Jn0k20c3}Round is over, you survived the final round of the tournament."));
            else
              MBInformationManager.AddQuickInformation(new TextObject("{=wOqOQuJl}Round is over, your team survived the final round of the tournament."));
          }
          else if (this._match.QualificationMode == TournamentGame.QualificationMode.IndividualScore)
            MBInformationManager.AddQuickInformation(new TextObject("{=uytwdSVH}Round is over, you are qualified for the next stage of the tournament."));
          else
            MBInformationManager.AddQuickInformation(new TextObject("{=fkOYvnVG}Round is over, your team is qualified for the next stage of the tournament."));
        }
        else if (this._match.QualificationMode == TournamentGame.QualificationMode.IndividualScore)
          MBInformationManager.AddQuickInformation(new TextObject("{=lcVauEKV}Round is over, you are disqualified from the tournament."));
        else
          MBInformationManager.AddQuickInformation(new TextObject("{=MLyBN51z}Round is over, your team is disqualified from the tournament."));
      }
      else
        MBInformationManager.AddQuickInformation(new TextObject("{=UBd0dEPp}Match is over"));
    }

    public void OnMatchEnded()
    {
      SandBoxHelpers.MissionHelper.FadeOutAgents(this._currentTournamentAgents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive())), true, false);
      SandBoxHelpers.MissionHelper.FadeOutAgents(this._currentTournamentMountAgents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive())), true, false);
      this.Mission.ClearCorpses(false);
      this.Mission.Teams.Clear();
      this.Mission.RemoveSpawnedItemsAndMissiles();
      this._match = (TournamentMatch) null;
      this._endTimer = (BasicMissionTimer) null;
      this._cheerTimer = (BasicMissionTimer) null;
      this._isSimulated = false;
      this._currentTournamentAgents.Clear();
      this._currentTournamentMountAgents.Clear();
    }

    private void SpawnAgentWithRandomItems(
      TournamentParticipant participant,
      Team team,
      MatrixFrame frame)
    {
      frame.Strafe((float) MBRandom.RandomInt(-2, 2) * 1f);
      frame.Advance((float) MBRandom.RandomInt(0, 2) * 1f);
      CharacterObject character = participant.Character;
      AgentBuildData agentBuildData = new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character, descriptor: participant.Descriptor)).Team(team).InitialPosition(in frame.origin);
      Vec2 vec2 = frame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      Agent agent = this.Mission.SpawnAgent(agentBuildData.InitialDirection(in local).Equipment(participant.MatchEquipment).ClothingColor1(team.Color).Banner(team.Banner).Controller(character.IsPlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI));
      if (character.IsPlayerCharacter)
      {
        agent.Health = (float) character.HeroObject.HitPoints;
        this.Mission.PlayerTeam = team;
      }
      else
        agent.SetWatchState(Agent.WatchState.Alarmed);
      agent.WieldInitialWeapons();
      this._currentTournamentAgents.Add(agent);
      if (!agent.HasMount)
        return;
      this._currentTournamentMountAgents.Add(agent.MountAgent);
    }

    private void AddRandomClothes(CultureObject culture, TournamentParticipant participant)
    {
      Equipment participantArmor = Campaign.Current.Models.TournamentModel.GetParticipantArmor(participant.Character);
      for (int index = 5; index < 10; ++index)
      {
        EquipmentElement equipmentFromSlot = participantArmor.GetEquipmentFromSlot((EquipmentIndex) index);
        if (equipmentFromSlot.Item != null)
          participant.MatchEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, equipmentFromSlot);
      }
    }

    private bool CheckIfTeamIsDead(TournamentTeam affectedParticipantTeam)
    {
      bool flag = true;
      foreach (TournamentParticipant aliveParticipant in this._aliveParticipants)
      {
        if (aliveParticipant.Team == affectedParticipantTeam)
        {
          flag = false;
          break;
        }
      }
      return flag;
    }

    private void AddScoreToRemainingTeams()
    {
      foreach (TournamentTeam aliveTeam in this._aliveTeams)
      {
        foreach (TournamentParticipant participant in aliveTeam.Participants)
          participant.AddScore(1);
      }
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (this.IsMatchEnded() || affectorAgent == null || affectedAgent == affectorAgent || !affectedAgent.IsHuman || !affectorAgent.IsHuman)
        return;
      TournamentParticipant participant = this._match.GetParticipant(affectedAgent.Origin.UniqueSeed);
      this._aliveParticipants.Remove(participant);
      this._currentTournamentAgents.Remove(affectedAgent);
      if (!this.CheckIfTeamIsDead(participant.Team))
        return;
      this._aliveTeams.Remove(participant.Team);
      this.AddScoreToRemainingTeams();
    }

    public bool CanAgentRout(Agent agent) => false;

    public override void OnScoreHit(
      Agent affectedAgent,
      Agent affectorAgent,
      WeaponComponentData attackerWeapon,
      bool isBlocked,
      bool isSiegeEngineHit,
      in Blow blow,
      in AttackCollisionData collisionData,
      float damagedHp,
      float hitDistance,
      float shotDifficulty)
    {
      if (affectorAgent == null)
        return;
      if (affectorAgent.IsMount && affectorAgent.RiderAgent != null)
        affectorAgent = affectorAgent.RiderAgent;
      if (affectorAgent.Character == null || affectedAgent.Character == null)
        return;
      float damageAmount = (float) blow.InflictedDamage;
      if ((double) damageAmount > (double) affectedAgent.HealthLimit)
        damageAmount = affectedAgent.HealthLimit;
      float num = damageAmount / affectedAgent.HealthLimit;
      this.EnemyHitReward(affectedAgent, affectorAgent, blow.MovementSpeedDamageModifier, shotDifficulty, attackerWeapon, blow.AttackType, 0.5f * num, damageAmount);
    }

    private void EnemyHitReward(
      Agent affectedAgent,
      Agent affectorAgent,
      float lastSpeedBonus,
      float lastShotDifficulty,
      WeaponComponentData lastAttackerWeapon,
      AgentAttackType attackType,
      float hitpointRatio,
      float damageAmount)
    {
      CharacterObject character1 = (CharacterObject) affectedAgent.Character;
      CharacterObject character2 = (CharacterObject) affectorAgent.Character;
      if (affectedAgent.Origin == null || affectorAgent == null || affectorAgent.Origin == null)
        return;
      bool isHorseCharge = affectorAgent.MountAgent != null && attackType == AgentAttackType.Collision;
      SkillLevelingManager.OnCombatHit(character2, character1, (CharacterObject) null, (Hero) null, lastSpeedBonus, lastShotDifficulty, lastAttackerWeapon, hitpointRatio, CombatXpModel.MissionTypeEnum.Tournament, affectorAgent.MountAgent != null, affectorAgent.Team == affectedAgent.Team, false, damageAmount, (double) affectedAgent.Health < 1.0, false, isHorseCharge);
    }

    public bool CheckIfIsThereAnyEnemies()
    {
      Team team = (Team) null;
      foreach (Agent currentTournamentAgent in this._currentTournamentAgents)
      {
        if (currentTournamentAgent.IsHuman && currentTournamentAgent.IsActive() && currentTournamentAgent.Team != null)
        {
          if (team == null)
            team = currentTournamentAgent.Team;
          else if (team != currentTournamentAgent.Team)
            return true;
        }
      }
      return false;
    }

    private void Simulate()
    {
      this._isSimulated = false;
      if (this._currentTournamentAgents.Count == 0)
      {
        this._aliveParticipants = this._match.Participants.ToList<TournamentParticipant>();
        this._aliveTeams = this._match.Teams.ToList<TournamentTeam>();
      }
      TournamentParticipant tournamentParticipant = this._aliveParticipants.FirstOrDefault<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character == CharacterObject.PlayerCharacter));
      if (tournamentParticipant != null)
      {
        TournamentTeam team = tournamentParticipant.Team;
        foreach (TournamentParticipant participant in team.Participants)
        {
          participant.ResetScore();
          this._aliveParticipants.Remove(participant);
        }
        this._aliveTeams.Remove(team);
        this.AddScoreToRemainingTeams();
      }
      Dictionary<TournamentParticipant, Tuple<float, float>> dictionary = new Dictionary<TournamentParticipant, Tuple<float, float>>();
      foreach (TournamentParticipant aliveParticipant in this._aliveParticipants)
      {
        float attackPoints;
        float defencePoints;
        aliveParticipant.Character.GetSimulationAttackPower(out attackPoints, out defencePoints, aliveParticipant.MatchEquipment);
        dictionary.Add(aliveParticipant, new Tuple<float, float>(attackPoints, defencePoints));
      }
      int index1 = 0;
      while (this._aliveParticipants.Count > 1 && this._aliveTeams.Count > 1)
      {
        index1 = (index1 + 1) % this._aliveParticipants.Count;
        TournamentParticipant aliveParticipant1 = this._aliveParticipants[index1];
        int index2;
        TournamentParticipant aliveParticipant2;
        do
        {
          index2 = MBRandom.RandomInt(this._aliveParticipants.Count);
          aliveParticipant2 = this._aliveParticipants[index2];
        }
        while (aliveParticipant1 == aliveParticipant2 || aliveParticipant1.Team == aliveParticipant2.Team);
        if ((double) dictionary[aliveParticipant2].Item2 - (double) dictionary[aliveParticipant1].Item1 > 0.0)
        {
          dictionary[aliveParticipant2] = new Tuple<float, float>(dictionary[aliveParticipant2].Item1, dictionary[aliveParticipant2].Item2 - dictionary[aliveParticipant1].Item1);
        }
        else
        {
          dictionary.Remove(aliveParticipant2);
          this._aliveParticipants.Remove(aliveParticipant2);
          if (this.CheckIfTeamIsDead(aliveParticipant2.Team))
          {
            this._aliveTeams.Remove(aliveParticipant2.Team);
            this.AddScoreToRemainingTeams();
          }
          if (index2 < index1)
            --index1;
        }
      }
      this._isSimulated = true;
    }

    private bool IsThereAnyPlayerAgent()
    {
      return this.Mission.MainAgent != null && this.Mission.MainAgent.IsActive() || this._currentTournamentAgents.Any<Agent>((Func<Agent, bool>) (agent => agent.IsPlayerControlled));
    }

    private void SkipMatch()
    {
      Mission.Current.GetMissionBehavior<TournamentBehavior>().SkipMatch();
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      InquiryData inquiryData = (InquiryData) null;
      canPlayerLeave = true;
      if (this._match != null)
      {
        if (this._match.IsPlayerParticipating())
        {
          MBTextManager.SetTextVariable("SETTLEMENT_NAME", Hero.MainHero.CurrentSettlement.EncyclopediaLinkWithName, false);
          if (this.IsThereAnyPlayerAgent())
          {
            if (this.Mission.IsPlayerCloseToAnEnemy())
            {
              canPlayerLeave = false;
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_can_not_retreat"));
            }
            else if (this.CheckIfIsThereAnyEnemies())
            {
              inquiryData = new InquiryData(GameTexts.FindText("str_tournament").ToString(), GameTexts.FindText("str_tournament_forfeit_game").ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.SkipMatch), (Action) null);
            }
            else
            {
              this._forceEndMatch = true;
              canPlayerLeave = false;
            }
          }
          else if (this.CheckIfIsThereAnyEnemies())
          {
            inquiryData = new InquiryData(GameTexts.FindText("str_tournament").ToString(), GameTexts.FindText("str_tournament_skip").ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.SkipMatch), (Action) null);
          }
          else
          {
            this._forceEndMatch = true;
            canPlayerLeave = false;
          }
        }
        else if (this.CheckIfIsThereAnyEnemies())
        {
          inquiryData = new InquiryData(GameTexts.FindText("str_tournament").ToString(), GameTexts.FindText("str_tournament_skip").ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.SkipMatch), (Action) null);
        }
        else
        {
          this._forceEndMatch = true;
          canPlayerLeave = false;
        }
      }
      return inquiryData;
    }
  }
}
