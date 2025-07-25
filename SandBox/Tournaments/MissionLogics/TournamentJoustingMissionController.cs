// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.MissionLogics.TournamentJoustingMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.AgentControllers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.MissionLogics
{
  public class TournamentJoustingMissionController : MissionLogic, ITournamentGameBehavior
  {
    private Team _winnerTeam;
    public List<GameEntity> RegionBoxList;
    public List<GameEntity> RegionExitBoxList;
    public List<MatrixFrame> CornerBackStartList;
    public List<GameEntity> CornerStartList;
    public List<MatrixFrame> CornerMiddleList;
    public List<MatrixFrame> CornerFinishList;
    public bool IsSwordDuelStarted;
    private TournamentMatch _match;
    private BasicMissionTimer _endTimer;
    private bool _isSimulated;
    private CultureObject _culture;
    private readonly Equipment _joustingEquipment;

    public event TournamentJoustingMissionController.JoustingEventDelegate VictoryAchieved;

    public event TournamentJoustingMissionController.JoustingEventDelegate PointGanied;

    public event TournamentJoustingMissionController.JoustingEventDelegate Disqualified;

    public event TournamentJoustingMissionController.JoustingEventDelegate Unconscious;

    public event TournamentJoustingMissionController.JoustingAgentStateChangedEventDelegate AgentStateChanged;

    public TournamentJoustingMissionController(CultureObject culture)
    {
      this._culture = culture;
      this._match = (TournamentMatch) null;
      this.RegionBoxList = new List<GameEntity>(2);
      this.RegionExitBoxList = new List<GameEntity>(2);
      this.CornerBackStartList = new List<MatrixFrame>();
      this.CornerStartList = new List<GameEntity>(2);
      this.CornerMiddleList = new List<MatrixFrame>();
      this.CornerFinishList = new List<MatrixFrame>();
      this.IsSwordDuelStarted = false;
      this._joustingEquipment = new Equipment();
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.ArmorItemEndSlot, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("charger")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.HorseHarness, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("horse_harness_e")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("vlandia_lance_2_t4")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon1, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("leather_round_shield")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Body, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("desert_lamellar")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.NumAllWeaponSlots, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("nasal_helmet_with_mail")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Gloves, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("reinforced_mail_mitten")));
      this._joustingEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Leg, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("leather_cavalier_boots")));
    }

    public override void AfterStart()
    {
      TournamentBehavior.DeleteTournamentSetsExcept(this.Mission.Scene.FindEntityWithTag("tournament_jousting"));
      for (int index = 0; index < 2; ++index)
      {
        GameEntity entityWithTag1 = this.Mission.Scene.FindEntityWithTag("sp_jousting_back_" + (object) index);
        GameEntity entityWithTag2 = this.Mission.Scene.FindEntityWithTag("sp_jousting_start_" + (object) index);
        GameEntity entityWithTag3 = this.Mission.Scene.FindEntityWithTag("sp_jousting_middle_" + (object) index);
        GameEntity entityWithTag4 = this.Mission.Scene.FindEntityWithTag("sp_jousting_finish_" + (object) index);
        this.CornerBackStartList.Add(entityWithTag1.GetGlobalFrame());
        this.CornerStartList.Add(entityWithTag2);
        this.CornerMiddleList.Add(entityWithTag3.GetGlobalFrame());
        this.CornerFinishList.Add(entityWithTag4.GetGlobalFrame());
      }
      this.RegionBoxList.Add(this.Mission.Scene.FindEntityWithName("region_box_0"));
      this.RegionBoxList.Add(this.Mission.Scene.FindEntityWithName("region_box_1"));
      this.RegionExitBoxList.Add(this.Mission.Scene.FindEntityWithName("region_end_box_0"));
      this.RegionExitBoxList.Add(this.Mission.Scene.FindEntityWithName("region_end_box_1"));
      this.Mission.SetMissionMode(MissionMode.Battle, true);
    }

    public void StartMatch(TournamentMatch match, bool isLastRound)
    {
      this._match = match;
      int cornerIndex = 0;
      foreach (TournamentTeam team1 in this._match.Teams)
      {
        Team team2 = this.Mission.Teams.Add(BattleSideEnum.None, uint.MaxValue, uint.MaxValue, (Banner) null, true, false, true);
        foreach (TournamentParticipant participant in team1.Participants)
        {
          participant.MatchEquipment = this._joustingEquipment.Clone();
          this.SetItemsAndSpawnCharacter(participant, team2, cornerIndex);
        }
        ++cornerIndex;
      }
      List<Team> list = this.Mission.Teams.ToList<Team>();
      for (int index1 = 0; index1 < list.Count; ++index1)
      {
        for (int index2 = index1 + 1; index2 < list.Count; ++index2)
          list[index1].SetIsEnemyOf(list[index2], true);
      }
      this.Mission.Scene.SetAbilityOfFacesWithId(1, false);
      this.Mission.Scene.SetAbilityOfFacesWithId(2, false);
    }

    public void SkipMatch(TournamentMatch match)
    {
      this._match = match;
      this.Simulate();
    }

    public bool IsMatchEnded()
    {
      if (this._isSimulated || this._match == null)
        return true;
      if (this._endTimer != null && (double) this._endTimer.ElapsedTime > 6.0)
      {
        this._endTimer = (BasicMissionTimer) null;
        return true;
      }
      if (this._endTimer == null && this._winnerTeam != null)
        this._endTimer = new BasicMissionTimer();
      return false;
    }

    public void OnMatchEnded()
    {
      SandBoxHelpers.MissionHelper.FadeOutAgents((IEnumerable<Agent>) this.Mission.Agents, true, false);
      this.Mission.ClearCorpses(false);
      this.Mission.Teams.Clear();
      this.Mission.RemoveSpawnedItemsAndMissiles();
      this._match = (TournamentMatch) null;
      this._endTimer = (BasicMissionTimer) null;
      this._isSimulated = false;
    }

    private void Simulate()
    {
      this._isSimulated = false;
      List<TournamentParticipant> participants = this._match.Participants.ToList<TournamentParticipant>();
      while (participants.Count > 1 && participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Team != participants[0].Team)) && !participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Score >= 3)))
      {
        TournamentParticipant tournamentParticipant1 = participants[MBRandom.RandomInt(participants.Count)];
        TournamentParticipant tournamentParticipant2 = participants[MBRandom.RandomInt(participants.Count)];
        while (tournamentParticipant1 == tournamentParticipant2 || tournamentParticipant1.Team == tournamentParticipant2.Team)
          tournamentParticipant2 = participants[MBRandom.RandomInt(participants.Count)];
        tournamentParticipant1.AddScore(1);
      }
      this._isSimulated = true;
    }

    private void SetItemsAndSpawnCharacter(
      TournamentParticipant participant,
      Team team,
      int cornerIndex)
    {
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) participant.Character, descriptor: participant.Descriptor)).Team(team).InitialFrameFromSpawnPointEntity(this.CornerStartList[cornerIndex]).Equipment(participant.MatchEquipment).Controller(participant.Character.IsPlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI));
      agent.Health = agent.HealthLimit;
      this.AddJoustingAgentController(agent);
      agent.GetController<JoustingAgentController>().CurrentCornerIndex = cornerIndex;
      if (participant.Character.IsPlayerCharacter)
      {
        agent.WieldInitialWeapons();
        this.Mission.PlayerTeam = team;
      }
      else
        agent.SetWatchState(Agent.WatchState.Alarmed);
    }

    private void AddJoustingAgentController(Agent agent)
    {
      agent.AddController(typeof (JoustingAgentController));
    }

    public bool IsAgentInTheTrack(Agent agent, bool inCurrentTrack = true)
    {
      bool flag = false;
      if (agent != null)
      {
        JoustingAgentController controller = agent.GetController<JoustingAgentController>();
        flag = this.RegionBoxList[inCurrentTrack ? controller.CurrentCornerIndex : 1 - controller.CurrentCornerIndex].CheckPointWithOrientedBoundingBox(agent.Position);
      }
      return flag;
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this.Mission.IsMissionEnding)
        return;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        agent.GetController<JoustingAgentController>()?.UpdateState();
      this.CheckStartOfSwordDuel();
    }

    private void CheckStartOfSwordDuel()
    {
      if (this.Mission.IsMissionEnding)
        return;
      if (!this.IsSwordDuelStarted)
      {
        if (this.Mission.Agents.Count <= 0 || this.Mission.Agents.Count<Agent>((Func<Agent, bool>) (a => a.IsMount)) >= 2)
          return;
        this.IsSwordDuelStarted = true;
        this.RemoveBarriers();
        this.Mission.Scene.SetAbilityOfFacesWithId(2, true);
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          if (agent.IsHuman)
          {
            JoustingAgentController controller = agent.GetController<JoustingAgentController>();
            controller.State = JoustingAgentController.JoustingAgentState.SwordDuel;
            controller.PrepareAgentToSwordDuel();
          }
        }
      }
      else
      {
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          if (agent.IsHuman)
          {
            JoustingAgentController controller = agent.GetController<JoustingAgentController>();
            controller.State = JoustingAgentController.JoustingAgentState.SwordDuel;
            if (controller.PrepareEquipmentsAfterDismount && agent.MountAgent == null)
            {
              CharacterObject character = (CharacterObject) agent.Character;
              controller.PrepareEquipmentsForSwordDuel();
              agent.DisableScriptedMovement();
              CharacterObject playerCharacter = CharacterObject.PlayerCharacter;
              if (character == playerCharacter)
                agent.Controller = Agent.ControllerType.Player;
            }
          }
        }
      }
    }

    private void RemoveBarriers()
    {
      foreach (GameEntity gameEntity in this.Mission.Scene.FindEntitiesWithTag("jousting_barrier").ToList<GameEntity>())
        gameEntity.Remove(95);
    }

    public override void OnAgentHit(
      Agent affectedAgent,
      Agent affectorAgent,
      in MissionWeapon attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      if (this.Mission.IsMissionEnding || this.IsSwordDuelStarted || !affectedAgent.IsHuman || affectorAgent == null || !affectorAgent.IsHuman || affectedAgent == affectorAgent)
        return;
      JoustingAgentController controller1 = affectorAgent.GetController<JoustingAgentController>();
      JoustingAgentController controller2 = affectedAgent.GetController<JoustingAgentController>();
      if (this.IsAgentInTheTrack(affectorAgent) && controller2.IsRiding() && controller1.IsRiding())
      {
        this._match.GetParticipant(affectorAgent.Origin.UniqueSeed).AddScore(1);
        ++controller1.Score;
        if (controller1.Score >= 3)
        {
          this._winnerTeam = affectorAgent.Team;
          TournamentJoustingMissionController.JoustingEventDelegate victoryAchieved = this.VictoryAchieved;
          if (victoryAchieved == null)
            return;
          victoryAchieved(affectorAgent, affectedAgent);
        }
        else
        {
          TournamentJoustingMissionController.JoustingEventDelegate pointGanied = this.PointGanied;
          if (pointGanied == null)
            return;
          pointGanied(affectorAgent, affectedAgent);
        }
      }
      else
      {
        this._match.GetParticipant(affectorAgent.Origin.UniqueSeed).AddScore(-100);
        this._winnerTeam = affectedAgent.Team;
        MBTextManager.SetTextVariable("OPPONENT_GENDER", affectorAgent.Character.IsFemale ? "0" : "1", false);
        TournamentJoustingMissionController.JoustingEventDelegate disqualified = this.Disqualified;
        if (disqualified == null)
          return;
        disqualified(affectorAgent, affectedAgent);
      }
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (this.Mission.IsMissionEnding || !affectedAgent.IsHuman || affectorAgent == null || !affectorAgent.IsHuman || affectedAgent == affectorAgent)
        return;
      if (this.IsAgentInTheTrack(affectorAgent) || this.IsSwordDuelStarted)
      {
        this._match.GetParticipant(affectorAgent.Origin.UniqueSeed).AddScore(100);
        this._winnerTeam = affectorAgent.Team;
        if (this.Unconscious == null)
          return;
        this.Unconscious(affectorAgent, affectedAgent);
      }
      else
      {
        this._match.GetParticipant(affectorAgent.Origin.UniqueSeed).AddScore(-100);
        this._winnerTeam = affectedAgent.Team;
        MBTextManager.SetTextVariable("OPPONENT_GENDER", affectorAgent.Character.IsFemale ? "0" : "1", false);
        if (this.Disqualified == null)
          return;
        this.Disqualified(affectorAgent, affectedAgent);
      }
    }

    public void OnJoustingAgentStateChanged(
      Agent agent,
      JoustingAgentController.JoustingAgentState state)
    {
      if (this.AgentStateChanged == null)
        return;
      this.AgentStateChanged(agent, state);
    }

    public delegate void JoustingEventDelegate(Agent affectedAgent, Agent affectorAgent);

    public delegate void JoustingAgentStateChangedEventDelegate(
      Agent agent,
      JoustingAgentController.JoustingAgentState state);
  }
}
