// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.MissionLogics.TournamentArcheryMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
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
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.MissionLogics
{
  public class TournamentArcheryMissionController : MissionLogic, ITournamentGameBehavior
  {
    private readonly List<ArcheryTournamentAgentController> _agentControllers;
    private TournamentMatch _match;
    private BasicMissionTimer _endTimer;
    private List<GameEntity> _spawnPoints;
    private bool _isSimulated;
    private CultureObject _culture;
    private List<DestructableComponent> _targets;
    public List<GameEntity> ShootingPositions;
    private readonly Equipment _archeryEquipment;

    public IEnumerable<ArcheryTournamentAgentController> AgentControllers
    {
      get => (IEnumerable<ArcheryTournamentAgentController>) this._agentControllers;
    }

    public TournamentArcheryMissionController(CultureObject culture)
    {
      this._culture = culture;
      this.ShootingPositions = new List<GameEntity>();
      this._agentControllers = new List<ArcheryTournamentAgentController>();
      this._archeryEquipment = new Equipment();
      this._archeryEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("nordic_shortbow")));
      this._archeryEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon1, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("blunt_arrows")));
      this._archeryEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Body, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("desert_lamellar")));
      this._archeryEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Gloves, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("reinforced_mail_mitten")));
      this._archeryEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Leg, new EquipmentElement(Game.Current.ObjectManager.GetObject<ItemObject>("leather_cavalier_boots")));
    }

    public override void AfterStart()
    {
      TournamentBehavior.DeleteTournamentSetsExcept(this.Mission.Scene.FindEntityWithTag("tournament_archery"));
      this._spawnPoints = this.Mission.Scene.FindEntitiesWithTag("sp_arena").ToList<GameEntity>();
      this.Mission.SetMissionMode(MissionMode.Battle, true);
      this._targets = this.Mission.ActiveMissionObjects.FindAllWithType<DestructableComponent>().Where<DestructableComponent>((Func<DestructableComponent, bool>) (x => x.GameEntity.HasTag("archery_target"))).ToList<DestructableComponent>();
      foreach (DestructableComponent target in this._targets)
        target.OnDestroyed += new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnTargetDestroyed);
    }

    public void StartMatch(TournamentMatch match, bool isLastRound)
    {
      this._match = match;
      this.ResetTargets();
      int count = this._spawnPoints.Count;
      int num = 0;
      int teamIndex = 0;
      foreach (TournamentTeam team1 in this._match.Teams)
      {
        Team team2 = this.Mission.Teams.Add(BattleSideEnum.None, MissionAgentHandler.GetRandomTournamentTeamColor(teamIndex));
        foreach (TournamentParticipant participant in team1.Participants)
        {
          participant.MatchEquipment = this._archeryEquipment.Clone();
          MatrixFrame globalFrame = this._spawnPoints[num % count].GetGlobalFrame();
          globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
          this.SetItemsAndSpawnCharacter(participant, team2, globalFrame);
          ++num;
        }
        ++teamIndex;
      }
    }

    public void SkipMatch(TournamentMatch match)
    {
      this._match = match;
      this.Simulate();
    }

    private void Simulate()
    {
      this._isSimulated = false;
      List<TournamentParticipant> list = this._match.Participants.ToList<TournamentParticipant>();
      int count = this._targets.Count;
      while (count > 0)
      {
        foreach (TournamentParticipant participant in list)
        {
          if (count != 0)
          {
            if ((double) MBRandom.RandomFloat < (double) this.GetDeadliness(participant))
            {
              participant.AddScore(1);
              --count;
            }
          }
          else
            break;
        }
      }
      this._isSimulated = true;
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
      if (this._endTimer == null && (!this.IsThereAnyTargetLeft() || !this.IsThereAnyArrowLeft()))
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

    private void ResetTargets()
    {
      foreach (DestructableComponent target in this._targets)
        target.Reset();
    }

    private void SetItemsAndSpawnCharacter(
      TournamentParticipant participant,
      Team team,
      MatrixFrame frame)
    {
      AgentBuildData agentBuildData = new AgentBuildData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) participant.Character, descriptor: participant.Descriptor)).Team(team).Equipment(participant.MatchEquipment).InitialPosition(in frame.origin);
      Vec2 vec2 = frame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      Agent agent = this.Mission.SpawnAgent(agentBuildData.InitialDirection(in local).Controller(participant.Character.IsPlayerCharacter ? Agent.ControllerType.Player : Agent.ControllerType.AI));
      agent.Health = agent.HealthLimit;
      ArcheryTournamentAgentController tournamentAgentController = agent.AddController(typeof (ArcheryTournamentAgentController)) as ArcheryTournamentAgentController;
      tournamentAgentController.SetTargets(this._targets);
      this._agentControllers.Add(tournamentAgentController);
      if (participant.Character.IsPlayerCharacter)
      {
        agent.WieldInitialWeapons();
        this.Mission.PlayerTeam = team;
      }
      else
        agent.SetWatchState(Agent.WatchState.Alarmed);
    }

    public void OnTargetDestroyed(
      DestructableComponent destroyedComponent,
      Agent destroyerAgent,
      in MissionWeapon attackerWeapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage)
    {
      foreach (ArcheryTournamentAgentController agentController in this.AgentControllers)
      {
        agentController.OnTargetHit(destroyerAgent, destroyedComponent);
        this._match.GetParticipant(destroyerAgent.Origin.UniqueSeed).AddScore(1);
      }
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this.IsMatchEnded())
        return;
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        agent.GetController<ArcheryTournamentAgentController>()?.OnTick();
    }

    public override void OnAgentHit(
      Agent affectedAgent,
      Agent affectorAgent,
      in MissionWeapon attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      this.Mission.EndMission();
    }

    private bool IsThereAnyTargetLeft()
    {
      return this._targets.Any<DestructableComponent>((Func<DestructableComponent, bool>) (e => !e.IsDestroyed));
    }

    private bool IsThereAnyArrowLeft()
    {
      return this.Mission.Agents.Any<Agent>((Func<Agent, bool>) (agent => agent.Equipment.GetAmmoAmount(EquipmentIndex.WeaponItemBeginSlot) > 0));
    }

    private float GetDeadliness(TournamentParticipant participant)
    {
      return (float) (0.0099999997764825821 + (double) participant.Character.GetSkillValue(DefaultSkills.Bow) / 300.0 * 0.18999999761581421);
    }
  }
}
