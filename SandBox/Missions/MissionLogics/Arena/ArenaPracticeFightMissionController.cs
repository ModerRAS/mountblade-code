// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Arena.ArenaPracticeFightMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics.Arena
{
  public class ArenaPracticeFightMissionController : MissionLogic
  {
    private const int AIParticipantCount = 30;
    private const int MaxAliveAgentCount = 6;
    private const int MaxSpawnInterval = 14;
    private const int MinSpawnDistanceSquared = 144;
    private const int TotalStageCount = 3;
    private const int PracticeFightTroopTierLimit = 3;
    public int TeleportTime = 5;
    private Settlement _settlement;
    private int _spawnedOpponentAgentCount;
    private int _aliveOpponentCount;
    private float _nextSpawnTime;
    private List<MatrixFrame> _initialSpawnFrames;
    private List<MatrixFrame> _spawnFrames;
    private List<Team> _AIParticipantTeams;
    private List<Agent> _participantAgents;
    private Team _tournamentMasterTeam;
    private BasicMissionTimer _teleportTimer;
    private List<CharacterObject> _participantCharacters;
    private const float XpShareForKill = 0.5f;
    private const float XpShareForDamage = 0.5f;

    private int AISpawnIndex => this._spawnedOpponentAgentCount;

    public int RemainingOpponentCountFromLastPractice { get; private set; }

    public bool IsPlayerPracticing { get; private set; }

    public int OpponentCountBeatenByPlayer { get; private set; }

    public int RemainingOpponentCount
    {
      get => 30 - this._spawnedOpponentAgentCount + this._aliveOpponentCount;
    }

    public bool IsPlayerSurvived { get; private set; }

    public bool AfterPractice { get; set; }

    public override void AfterStart()
    {
      this._settlement = PlayerEncounter.LocationEncounter.Settlement;
      this.InitializeTeams();
      GameEntity gameEntity1 = this.Mission.Scene.FindEntityWithTag("tournament_practice") ?? this.Mission.Scene.FindEntityWithTag("tournament_fight");
      List<GameEntity> list = Mission.Current.Scene.FindEntitiesWithTag("arena_set").ToList<GameEntity>();
      list.Remove(gameEntity1);
      foreach (GameEntity gameEntity2 in list)
        gameEntity2.Remove(88);
      this._initialSpawnFrames = this.Mission.Scene.FindEntitiesWithTag("sp_arena").Select<GameEntity, MatrixFrame>((Func<GameEntity, MatrixFrame>) (e => e.GetGlobalFrame())).ToList<MatrixFrame>();
      this._spawnFrames = this.Mission.Scene.FindEntitiesWithTag("sp_arena_respawn").Select<GameEntity, MatrixFrame>((Func<GameEntity, MatrixFrame>) (e => e.GetGlobalFrame())).ToList<MatrixFrame>();
      for (int index = 0; index < this._initialSpawnFrames.Count; ++index)
      {
        MatrixFrame initialSpawnFrame = this._initialSpawnFrames[index];
        initialSpawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        this._initialSpawnFrames[index] = initialSpawnFrame;
      }
      for (int index = 0; index < this._spawnFrames.Count; ++index)
      {
        MatrixFrame spawnFrame = this._spawnFrames[index];
        spawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        this._spawnFrames[index] = spawnFrame;
      }
      this.IsPlayerPracticing = false;
      this._participantAgents = new List<Agent>();
      this.StartPractice();
      MissionAgentHandler missionBehavior = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      missionBehavior.SpawnPlayer(true, true);
      missionBehavior.SpawnLocationCharacters();
    }

    private void SpawnPlayerNearTournamentMaster()
    {
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("sp_player_near_arena_master");
      this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) CharacterObject.PlayerCharacter).Team(this.Mission.PlayerTeam).InitialFrameFromSpawnPointEntity(entityWithTag).NoHorses(true).CivilianEquipment(true).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) CharacterObject.PlayerCharacter)).Controller(Agent.ControllerType.Player));
      Mission.Current.SetMissionMode(MissionMode.StartUp, false);
    }

    private Agent SpawnArenaAgent(Team team, MatrixFrame frame)
    {
      CharacterObject characterObject;
      int spawnIndex;
      if (team == this.Mission.PlayerTeam)
      {
        characterObject = CharacterObject.PlayerCharacter;
        spawnIndex = 0;
      }
      else
      {
        characterObject = this._participantCharacters[this.AISpawnIndex];
        spawnIndex = this.AISpawnIndex;
      }
      Equipment equipment = new Equipment();
      this.AddRandomWeapons(equipment, spawnIndex);
      this.AddRandomClothes(characterObject, equipment);
      Mission mission = this.Mission;
      AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) characterObject).Team(team).InitialPosition(in frame.origin);
      Vec2 vec2 = frame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      AgentBuildData agentBuildData2 = agentBuildData1.InitialDirection(in local).NoHorses(true).Equipment(equipment).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) characterObject)).Controller(characterObject == CharacterObject.PlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI);
      Agent agent = mission.SpawnAgent(agentBuildData2);
      agent.FadeIn();
      if (characterObject != CharacterObject.PlayerCharacter)
      {
        ++this._aliveOpponentCount;
        ++this._spawnedOpponentAgentCount;
      }
      if (agent.IsAIControlled)
        agent.SetWatchState(Agent.WatchState.Alarmed);
      return agent;
    }

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
      WeaponComponentData attackerWeapon,
      AgentAttackType attackType,
      float hitpointRatio,
      float damageAmount)
    {
      CharacterObject character1 = (CharacterObject) affectedAgent.Character;
      CharacterObject character2 = (CharacterObject) affectorAgent.Character;
      if (affectedAgent.Origin == null || affectorAgent == null || affectorAgent.Origin == null)
        return;
      bool isAffectorMounted = affectorAgent.MountAgent != null;
      bool isHorseCharge = isAffectorMounted && attackType == AgentAttackType.Collision;
      SkillLevelingManager.OnCombatHit(character2, character1, (CharacterObject) null, (Hero) null, lastSpeedBonus, lastShotDifficulty, attackerWeapon, hitpointRatio, CombatXpModel.MissionTypeEnum.PracticeFight, isAffectorMounted, affectorAgent.Team == affectedAgent.Team, false, damageAmount, (double) affectedAgent.Health < 1.0, false, isHorseCharge);
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this._aliveOpponentCount < 6 && this._spawnedOpponentAgentCount < 30 && (this._aliveOpponentCount == 2 || (double) this._nextSpawnTime < (double) this.Mission.CurrentTime))
      {
        this._participantAgents.Add(this.SpawnArenaAgent(this.SelectRandomAiTeam(), this.GetSpawnFrame(true, false)));
        this._nextSpawnTime = (float) ((double) this.Mission.CurrentTime + 14.0 - (double) this._spawnedOpponentAgentCount / 3.0);
        if (this._spawnedOpponentAgentCount == 30 && !this.IsPlayerPracticing)
          this._spawnedOpponentAgentCount = 0;
      }
      if (this._teleportTimer == null && this.IsPlayerPracticing && this.CheckPracticeEndedForPlayer())
      {
        this._teleportTimer = new BasicMissionTimer();
        this.IsPlayerSurvived = this.Mission.MainAgent != null && this.Mission.MainAgent.IsActive();
        if (this.IsPlayerSurvived)
          MBInformationManager.AddQuickInformation(new TextObject("{=seyti8xR}Victory!"), soundEventPath: "event:/ui/mission/arena_victory");
        this.AfterPractice = true;
      }
      if (this._teleportTimer == null || (double) this._teleportTimer.ElapsedTime <= (double) this.TeleportTime)
        return;
      this._teleportTimer = (BasicMissionTimer) null;
      this.RemainingOpponentCountFromLastPractice = this.RemainingOpponentCount;
      this.IsPlayerPracticing = false;
      this.StartPractice();
      this.SpawnPlayerNearTournamentMaster();
      MissionConversationLogic.Current.StartConversation(this.Mission.Agents.FirstOrDefault<Agent>((Func<Agent, bool>) (x => x.Character != null && ((CharacterObject) x.Character).Occupation == Occupation.ArenaMaster)), true);
    }

    private Team SelectRandomAiTeam()
    {
      Team team = (Team) null;
      foreach (Team aiParticipantTeam in this._AIParticipantTeams)
      {
        if (!aiParticipantTeam.HasBots)
        {
          team = aiParticipantTeam;
          break;
        }
      }
      if (team == null)
        team = this._AIParticipantTeams[MBRandom.RandomInt(this._AIParticipantTeams.Count - 1) + 1];
      return team;
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectedAgent != null && affectedAgent.IsHuman)
      {
        if (affectedAgent != Agent.Main)
          --this._aliveOpponentCount;
        if (affectorAgent != null && affectorAgent.IsHuman && affectorAgent == Agent.Main && affectedAgent != Agent.Main)
          ++this.OpponentCountBeatenByPlayer;
      }
      if (!this._participantAgents.Contains(affectedAgent))
        return;
      this._participantAgents.Remove(affectedAgent);
    }

    public override bool MissionEnded(ref MissionResult missionResult) => false;

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = true;
      return !this.IsPlayerPracticing ? (InquiryData) null : new InquiryData(new TextObject("{=zv49qE35}Practice Fight").ToString(), GameTexts.FindText("str_give_up_fight").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.Mission.OnEndMissionResult), (Action) null);
    }

    public void StartPlayerPractice()
    {
      this.IsPlayerPracticing = true;
      this.AfterPractice = false;
      this.StartPractice();
    }

    private void StartPractice()
    {
      this.InitializeParticipantCharacters();
      SandBoxHelpers.MissionHelper.FadeOutAgents(this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (agent => this._participantAgents.Contains(agent) || agent.IsMount || agent.IsPlayerControlled)), true, false);
      this._spawnedOpponentAgentCount = 0;
      this._aliveOpponentCount = 0;
      this._participantAgents.Clear();
      Mission.Current.ClearCorpses(false);
      this.Mission.RemoveSpawnedItemsAndMissiles();
      this.ArrangePlayerTeamEnmity();
      if (this.IsPlayerPracticing)
      {
        Agent agent = this.SpawnArenaAgent(this.Mission.PlayerTeam, this.GetSpawnFrame(false, true));
        agent.WieldInitialWeapons();
        this.OpponentCountBeatenByPlayer = 0;
        this._participantAgents.Add(agent);
      }
      int count = this._AIParticipantTeams.Count;
      int num = 0;
      while (this._spawnedOpponentAgentCount < 6)
      {
        this._participantAgents.Add(this.SpawnArenaAgent(this._AIParticipantTeams[num % count], this.GetSpawnFrame(false, true)));
        ++num;
      }
      this._nextSpawnTime = this.Mission.CurrentTime + 14f;
    }

    private bool CheckPracticeEndedForPlayer()
    {
      return this.Mission.MainAgent == null || !this.Mission.MainAgent.IsActive() || this.RemainingOpponentCount == 0;
    }

    private void AddRandomWeapons(Equipment equipment, int spawnIndex)
    {
      int num = 1 + spawnIndex * 3 / 30;
      List<Equipment> list = (Game.Current.ObjectManager.GetObject<CharacterObject>("weapon_practice_stage_" + (object) num + "_" + this._settlement.MapFaction.Culture.StringId) ?? Game.Current.ObjectManager.GetObject<CharacterObject>("weapon_practice_stage_" + (object) num + "_empire")).BattleEquipments.ToList<Equipment>();
      int index1 = MBRandom.RandomInt(list.Count);
      for (int index2 = 0; index2 <= 3; ++index2)
      {
        EquipmentElement equipmentFromSlot = list[index1].GetEquipmentFromSlot((EquipmentIndex) index2);
        if (equipmentFromSlot.Item != null)
          equipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index2, equipmentFromSlot);
      }
    }

    private void AddRandomClothes(CharacterObject troop, Equipment equipment)
    {
      Equipment participantArmor = Campaign.Current.Models.TournamentModel.GetParticipantArmor(troop);
      for (int index = 0; index < 12; ++index)
      {
        if (index > 4 && index != 10 && index != 11)
        {
          EquipmentElement equipmentFromSlot = participantArmor.GetEquipmentFromSlot((EquipmentIndex) index);
          if (equipmentFromSlot.Item != null)
            equipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, equipmentFromSlot);
        }
      }
    }

    private void InitializeTeams()
    {
      this._AIParticipantTeams = new List<Team>();
      this.Mission.Teams.Add(BattleSideEnum.Defender, Hero.MainHero.MapFaction.Color, Hero.MainHero.MapFaction.Color2);
      this.Mission.PlayerTeam = this.Mission.DefenderTeam;
      this._tournamentMasterTeam = this.Mission.Teams.Add(BattleSideEnum.None, this._settlement.MapFaction.Color, this._settlement.MapFaction.Color2);
      while (this._AIParticipantTeams.Count < 6)
        this._AIParticipantTeams.Add(this.Mission.Teams.Add(BattleSideEnum.Attacker, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true));
      for (int index1 = 0; index1 < this._AIParticipantTeams.Count; ++index1)
      {
        this._AIParticipantTeams[index1].SetIsEnemyOf(this._tournamentMasterTeam, false);
        for (int index2 = index1 + 1; index2 < this._AIParticipantTeams.Count; ++index2)
          this._AIParticipantTeams[index1].SetIsEnemyOf(this._AIParticipantTeams[index2], true);
      }
    }

    private void InitializeParticipantCharacters()
    {
      this._participantCharacters = ArenaPracticeFightMissionController.GetParticipantCharacters(this._settlement).OrderBy<CharacterObject, int>((Func<CharacterObject, int>) (x => x.Level)).ToList<CharacterObject>();
    }

    public static List<CharacterObject> GetParticipantCharacters(Settlement settlement)
    {
      int num1 = 30;
      List<CharacterObject> participantCharacters = new List<CharacterObject>();
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      if (participantCharacters.Count < num1 && settlement.Town.GarrisonParty != null)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) settlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
        {
          int num5 = num1 - participantCharacters.Count;
          if (!participantCharacters.Contains(troopRosterElement.Character) && troopRosterElement.Character.Tier == 3 && (double) num5 * 0.40000000596046448 > (double) num2)
          {
            participantCharacters.Add(troopRosterElement.Character);
            ++num2;
          }
          else if (!participantCharacters.Contains(troopRosterElement.Character) && troopRosterElement.Character.Tier == 4 && (double) num5 * 0.40000000596046448 > (double) num3)
          {
            participantCharacters.Add(troopRosterElement.Character);
            ++num3;
          }
          else if (!participantCharacters.Contains(troopRosterElement.Character) && troopRosterElement.Character.Tier == 5 && (double) num5 * 0.20000000298023224 > (double) num4)
          {
            participantCharacters.Add(troopRosterElement.Character);
            ++num4;
          }
          if (participantCharacters.Count >= num1)
            break;
        }
      }
      if (participantCharacters.Count < num1)
      {
        List<CharacterObject> list = new List<CharacterObject>();
        ArenaPracticeFightMissionController.GetUpgradeTargets((settlement != null ? settlement.Culture : Game.Current.ObjectManager.GetObject<CultureObject>("empire")).BasicTroop, ref list);
        int num6 = num1 - participantCharacters.Count;
        foreach (CharacterObject characterObject in list)
        {
          if (!participantCharacters.Contains(characterObject) && characterObject.Tier == 3 && (double) num6 * 0.40000000596046448 > (double) num2)
          {
            participantCharacters.Add(characterObject);
            ++num2;
          }
          else if (!participantCharacters.Contains(characterObject) && characterObject.Tier == 4 && (double) num6 * 0.40000000596046448 > (double) num3)
          {
            participantCharacters.Add(characterObject);
            ++num3;
          }
          else if (!participantCharacters.Contains(characterObject) && characterObject.Tier == 5 && (double) num6 * 0.20000000298023224 > (double) num4)
          {
            participantCharacters.Add(characterObject);
            ++num4;
          }
          if (participantCharacters.Count >= num1)
            break;
        }
label_27:
        while (participantCharacters.Count < num1)
        {
          int index = 0;
          while (true)
          {
            if (index < list.Count && participantCharacters.Count < num1)
            {
              participantCharacters.Add(list[index]);
              ++index;
            }
            else
              goto label_27;
          }
        }
      }
      return participantCharacters;
    }

    private static void GetUpgradeTargets(CharacterObject troop, ref List<CharacterObject> list)
    {
      if (!list.Contains(troop) && troop.Tier >= 3)
        list.Add(troop);
      foreach (CharacterObject upgradeTarget in troop.UpgradeTargets)
        ArenaPracticeFightMissionController.GetUpgradeTargets(upgradeTarget, ref list);
    }

    private void ArrangePlayerTeamEnmity()
    {
      foreach (Team aiParticipantTeam in this._AIParticipantTeams)
        aiParticipantTeam.SetIsEnemyOf(this.Mission.PlayerTeam, this.IsPlayerPracticing);
    }

    private Team GetStrongestTeamExceptPlayerTeam()
    {
      Team exceptPlayerTeam = (Team) null;
      int num = -1;
      foreach (Team aiParticipantTeam in this._AIParticipantTeams)
      {
        int teamPower = this.CalculateTeamPower(aiParticipantTeam);
        if (teamPower > num)
        {
          exceptPlayerTeam = aiParticipantTeam;
          num = teamPower;
        }
      }
      return exceptPlayerTeam;
    }

    private int CalculateTeamPower(Team team)
    {
      int teamPower = 0;
      foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
        teamPower += activeAgent.Character.Level * activeAgent.KillCount + (int) MathF.Sqrt(activeAgent.Health);
      return teamPower;
    }

    private MatrixFrame GetSpawnFrame(bool considerPlayerDistance, bool isInitialSpawn)
    {
      List<MatrixFrame> matrixFrameList = isInitialSpawn || this._spawnFrames.IsEmpty<MatrixFrame>() ? this._initialSpawnFrames : this._spawnFrames;
      if (matrixFrameList.Count == 1)
      {
        Debug.FailedAssert("Spawn point count is wrong! Arena practice spawn point set should be used in arena scenes.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\Arena\\ArenaPracticeFightMissionController.cs", nameof (GetSpawnFrame), 615);
        return matrixFrameList[0];
      }
      MatrixFrame spawnFrame;
      if (considerPlayerDistance && Agent.Main != null && Agent.Main.IsActive())
      {
        int index1 = MBRandom.RandomInt(matrixFrameList.Count);
        spawnFrame = matrixFrameList[index1];
        float num = float.MinValue;
        for (int index2 = index1 + 1; index2 < index1 + matrixFrameList.Count; ++index2)
        {
          MatrixFrame matrixFrame = matrixFrameList[index2 % matrixFrameList.Count];
          float locationScore = this.CalculateLocationScore(matrixFrame);
          if ((double) locationScore >= 100.0)
          {
            spawnFrame = matrixFrame;
            break;
          }
          if ((double) locationScore > (double) num)
          {
            spawnFrame = matrixFrame;
            num = locationScore;
          }
        }
      }
      else
      {
        int opponentAgentCount = this._spawnedOpponentAgentCount;
        if (this.IsPlayerPracticing && Agent.Main != null)
          ++opponentAgentCount;
        spawnFrame = matrixFrameList[opponentAgentCount % matrixFrameList.Count];
      }
      return spawnFrame;
    }

    private float CalculateLocationScore(MatrixFrame matrixFrame)
    {
      float locationScore = 100f;
      float num1 = 0.25f;
      float num2 = 0.75f;
      if ((double) matrixFrame.origin.DistanceSquared(Agent.Main.Position) < 144.0)
        locationScore *= num1;
      for (int index = 0; index < this._participantAgents.Count; ++index)
      {
        if ((double) this._participantAgents[index].Position.DistanceSquared(matrixFrame.origin) < 144.0)
          locationScore *= num2;
      }
      return locationScore;
    }
  }
}
