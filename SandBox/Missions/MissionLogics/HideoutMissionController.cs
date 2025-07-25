// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.HideoutMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation.MissionLogics;
using SandBox.Objects.AnimationPoints;
using SandBox.Objects.AreaMarkers;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class HideoutMissionController : MissionLogic, IMissionAgentSpawnLogic, IMissionBehavior
  {
    private const int FirstPhaseEndInSeconds = 4;
    private readonly List<CommonAreaMarker> _areaMarkers;
    private readonly List<PatrolArea> _patrolAreas;
    private readonly Dictionary<Agent, HideoutMissionController.UsedObject> _defenderAgentObjects;
    private readonly HideoutMissionController.MissionSide[] _missionSides;
    private List<Agent> _duelPhaseAllyAgents;
    private List<Agent> _duelPhaseBanditAgents;
    private BattleAgentLogic _battleAgentLogic;
    private BattleEndLogic _battleEndLogic;
    private AgentVictoryLogic _agentVictoryLogic;
    private HideoutCinematicController _cinematicController;
    private HideoutMissionController.HideoutMissionState _hideoutMissionState;
    private Agent _bossAgent;
    private Team _enemyTeam;
    private Timer _firstPhaseEndTimer;
    private bool _troopsInitialized;
    private bool _isMissionInitialized;
    private bool _battleResolved;
    private int _firstPhaseEnemyTroopCount;
    private int _firstPhasePlayerSideTroopCount;
    private MissionMode _oldMissionMode;

    public HideoutMissionController(
      IMissionTroopSupplier[] suppliers,
      BattleSideEnum playerSide,
      int firstPhaseEnemyTroopCount,
      int firstPhasePlayerSideTroopCount)
    {
      this._areaMarkers = new List<CommonAreaMarker>();
      this._patrolAreas = new List<PatrolArea>();
      this._defenderAgentObjects = new Dictionary<Agent, HideoutMissionController.UsedObject>();
      this._firstPhaseEnemyTroopCount = firstPhaseEnemyTroopCount;
      this._firstPhasePlayerSideTroopCount = firstPhasePlayerSideTroopCount;
      this._missionSides = new HideoutMissionController.MissionSide[2];
      for (int side = 0; side < 2; ++side)
      {
        IMissionTroopSupplier supplier = suppliers[side];
        bool isPlayerSide = (BattleSideEnum) side == playerSide;
        this._missionSides[side] = new HideoutMissionController.MissionSide((BattleSideEnum) side, supplier, isPlayerSide);
      }
    }

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = false;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._battleAgentLogic = this.Mission.GetMissionBehavior<BattleAgentLogic>();
      this._battleEndLogic = this.Mission.GetMissionBehavior<BattleEndLogic>();
      this._battleEndLogic.ChangeCanCheckForEndCondition(false);
      this._agentVictoryLogic = this.Mission.GetMissionBehavior<AgentVictoryLogic>();
      this._cinematicController = this.Mission.GetMissionBehavior<HideoutCinematicController>();
      this.Mission.IsMainAgentObjectInteractionEnabled = false;
    }

    public override void OnObjectStoppedBeingUsed(Agent userAgent, UsableMissionObject usedObject)
    {
      if (usedObject == null || !(usedObject is AnimationPoint) || !userAgent.IsActive() || !userAgent.IsAIControlled || userAgent.CurrentWatchState != Agent.WatchState.Patrolling)
        return;
      ((IDetachment) usedObject.GameEntity.Parent.GetFirstScriptOfType<PatrolArea>())?.AddAgent(userAgent);
    }

    public override void OnAgentAlarmedStateChanged(Agent agent, Agent.AIStateFlag flag)
    {
      int num = flag == Agent.AIStateFlag.Alarmed ? 1 : 0;
      if (num == 0)
      {
        switch (flag)
        {
          case Agent.AIStateFlag.None:
            this._defenderAgentObjects[agent].IsMachineAITicked = true;
            agent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimation);
            ((IDetachment) this._defenderAgentObjects[agent].Machine).AddAgent(agent);
            goto label_9;
          case Agent.AIStateFlag.Cautious:
            break;
          default:
            goto label_9;
        }
      }
      if (agent.IsUsingGameObject)
      {
        agent.StopUsingGameObject();
      }
      else
      {
        agent.DisableScriptedMovement();
        if (agent.IsAIControlled && agent.AIMoveToGameObjectIsEnabled())
        {
          agent.AIMoveToGameObjectDisable();
          agent.Formation?.Team.DetachmentManager.RemoveScoresOfAgentFromDetachments(agent);
        }
      }
      this._defenderAgentObjects[agent].IsMachineAITicked = false;
label_9:
      if (num == 0)
        return;
      agent.SetWantsToYell();
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._isMissionInitialized)
      {
        this.InitializeMission();
        this._isMissionInitialized = true;
      }
      else
      {
        if (!this._troopsInitialized)
        {
          this._troopsInitialized = true;
          foreach (Agent agent in (List<Agent>) this.Mission.Agents)
            this._battleAgentLogic.OnAgentBuild(agent, (Banner) null);
        }
        this.UsedObjectTick(dt);
        if (this._battleResolved)
          return;
        this.CheckBattleResolved();
      }
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel)
      {
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          if (agent != affectedAgent && agent != affectorAgent && agent.IsActive() && agent.GetLookAgent() == affectedAgent)
            agent.SetLookAgent((Agent) null);
        }
      }
      else
      {
        if (this._hideoutMissionState != HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight || !affectedAgent.IsMainAgent)
          return;
        this.Mission.PlayerTeam.PlayerOrderController.SelectAllFormations();
        affectedAgent.Formation = (Formation) null;
        this.Mission.PlayerTeam.PlayerOrderController.SetOrder(OrderType.Retreat);
      }
    }

    private void InitializeMission()
    {
      this.Mission.GetMissionBehavior<MissionConversationLogic>().DisableStartConversation(true);
      this.Mission.SetMissionMode(MissionMode.Stealth, true);
      this._areaMarkers.AddRange((IEnumerable<CommonAreaMarker>) this.Mission.ActiveMissionObjects.FindAllWithType<CommonAreaMarker>().OrderBy<CommonAreaMarker, int>((Func<CommonAreaMarker, int>) (area => area.AreaIndex)));
      this._patrolAreas.AddRange((IEnumerable<PatrolArea>) this.Mission.ActiveMissionObjects.FindAllWithType<PatrolArea>().OrderBy<PatrolArea, int>((Func<PatrolArea, int>) (area => area.AreaIndex)));
      this.DecideMissionState();
      this.Mission.MakeDefaultDeploymentPlans();
      for (int index = 0; index < 2; ++index)
      {
        int spawnCount;
        if (this._missionSides[index].IsPlayerSide)
        {
          spawnCount = this._firstPhasePlayerSideTroopCount;
        }
        else
        {
          if (this._missionSides[index].NumberOfTroopsNotSupplied <= this._firstPhaseEnemyTroopCount)
          {
            Debug.FailedAssert("_missionSides[i].NumberOfTroopsNotSupplied <= _firstPhaseEnemyTroopCount", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\HideoutMissionController.cs", nameof (InitializeMission), 449);
            this._firstPhaseEnemyTroopCount = (int) ((double) this._missionSides[index].NumberOfTroopsNotSupplied * 0.699999988079071);
          }
          spawnCount = this._hideoutMissionState == HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight ? this._firstPhaseEnemyTroopCount : this._missionSides[index].NumberOfTroopsNotSupplied;
        }
        this._missionSides[index].SpawnTroops(this._areaMarkers, this._patrolAreas, this._defenderAgentObjects, spawnCount);
      }
    }

    private void UsedObjectTick(float dt)
    {
      foreach (KeyValuePair<Agent, HideoutMissionController.UsedObject> defenderAgentObject in this._defenderAgentObjects)
      {
        if (defenderAgentObject.Value.IsMachineAITicked)
          defenderAgentObject.Value.MachineAI.Tick(defenderAgentObject.Key, (Formation) null, (Team) null, dt);
      }
    }

    protected override void OnEndMission()
    {
      int num = 0;
      if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel)
      {
        if (Agent.Main == null || !Agent.Main.IsActive())
        {
          List<Agent> duelPhaseAllyAgents = this._duelPhaseAllyAgents;
          // ISSUE: explicit non-virtual call
          num = duelPhaseAllyAgents != null ? __nonvirtual (duelPhaseAllyAgents.Count) : 0;
        }
        else if (this._bossAgent == null || !this._bossAgent.IsActive())
          PlayerEncounter.EnemySurrender = true;
      }
      if (MobileParty.MainParty.MemberRoster.TotalHealthyCount > num || MapEvent.PlayerMapEvent.BattleState != BattleState.None)
        return;
      MapEvent.PlayerMapEvent.SetOverrideWinner(BattleSideEnum.Defender);
    }

    private void CheckBattleResolved()
    {
      if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.CutSceneBeforeBossFight || this._hideoutMissionState == HideoutMissionController.HideoutMissionState.ConversationBetweenLeaders)
        return;
      if (this.IsSideDepleted(BattleSideEnum.Attacker))
      {
        if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel)
          this.OnDuelOver(BattleSideEnum.Defender);
        this._battleEndLogic.ChangeCanCheckForEndCondition(true);
        this._battleResolved = true;
      }
      else
      {
        if (!this.IsSideDepleted(BattleSideEnum.Defender))
          return;
        if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight)
        {
          if (this._firstPhaseEndTimer == null)
          {
            this._firstPhaseEndTimer = new Timer(this.Mission.CurrentTime, 4f);
            this._oldMissionMode = Mission.Current.Mode;
            Mission.Current.SetMissionMode(MissionMode.CutScene, false);
          }
          else
          {
            if (!this._firstPhaseEndTimer.Check(this.Mission.CurrentTime))
              return;
            this._cinematicController.StartCinematic(new HideoutCinematicController.OnInitialFadeOutFinished(this.OnInitialFadeOutOver), new HideoutCinematicController.OnHideoutCinematicFinished(this.OnCutSceneOver));
          }
        }
        else
        {
          if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel)
            this.OnDuelOver(BattleSideEnum.Attacker);
          this._battleEndLogic.ChangeCanCheckForEndCondition(true);
          MapEvent.PlayerMapEvent.SetOverrideWinner(BattleSideEnum.Attacker);
          this._battleResolved = true;
        }
      }
    }

    public void StartSpawner(BattleSideEnum side)
    {
      this._missionSides[(int) side].SetSpawnTroops(true);
    }

    public void StopSpawner(BattleSideEnum side)
    {
      this._missionSides[(int) side].SetSpawnTroops(false);
    }

    public bool IsSideSpawnEnabled(BattleSideEnum side)
    {
      return this._missionSides[(int) side].TroopSpawningActive;
    }

    public float GetReinforcementInterval() => 0.0f;

    public bool IsSideDepleted(BattleSideEnum side)
    {
      bool flag1 = this._missionSides[(int) side].NumberOfActiveTroops == 0;
      if (!flag1)
      {
        if ((Agent.Main == null || !Agent.Main.IsActive()) && side == BattleSideEnum.Attacker)
        {
          if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel || this._hideoutMissionState == HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight)
            flag1 = true;
          else if (this._hideoutMissionState == HideoutMissionController.HideoutMissionState.WithoutBossFight || this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithAll)
          {
            int num = this.Mission.Teams.Attacker.FormationsIncludingEmpty.Any<Formation>((Func<Formation, bool>) (f => f.CountOfUnits > 0 && f.GetReadonlyMovementOrderReference().OrderType == OrderType.Charge)) ? 1 : 0;
            bool flag2 = this.Mission.Teams.Defender.ActiveAgents.Any<Agent>((Func<Agent, bool>) (t => t.CurrentWatchState == Agent.WatchState.Alarmed));
            flag1 = num == 0 && !flag2;
          }
        }
        else if (side == BattleSideEnum.Defender && this._hideoutMissionState == HideoutMissionController.HideoutMissionState.BossFightWithDuel && (this._bossAgent == null || !this._bossAgent.IsActive()))
          flag1 = true;
      }
      else if (side == BattleSideEnum.Defender && this._hideoutMissionState == HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight && (Agent.Main == null || !Agent.Main.IsActive()))
        flag1 = false;
      return flag1;
    }

    private void DecideMissionState()
    {
      this._hideoutMissionState = !this._missionSides[0].IsPlayerSide ? HideoutMissionController.HideoutMissionState.InitialFightBeforeBossFight : HideoutMissionController.HideoutMissionState.WithoutBossFight;
    }

    private void SetWatchStateOfAIAgents(Agent.WatchState state)
    {
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsAIControlled)
          agent.SetWatchState(state);
      }
    }

    private void SpawnBossAndBodyguards()
    {
      HideoutMissionController.MissionSide missionSide1 = this._missionSides[0];
      MatrixFrame banditsInitialFrame = this._cinematicController.GetBanditsInitialFrame();
      HideoutMissionController.MissionSide missionSide2 = missionSide1;
      List<MatrixFrame> spawnFrames = new List<MatrixFrame>();
      spawnFrames.Add(banditsInitialFrame);
      int troopsNotSupplied = missionSide1.NumberOfTroopsNotSupplied;
      missionSide2.SpawnRemainingTroopsForBossFight(spawnFrames, troopsNotSupplied);
      this._bossAgent = this.SelectBossAgent();
      this._bossAgent.WieldInitialWeapons(initialWeaponEquipPreference: Equipment.InitialWeaponEquipPreference.MeleeForMainHand);
      foreach (Agent activeAgent in (List<Agent>) this._enemyTeam.ActiveAgents)
      {
        if (activeAgent != this._bossAgent)
          activeAgent.WieldInitialWeapons(Agent.WeaponWieldActionType.WithAnimationUninterruptible);
      }
    }

    private Agent SelectBossAgent()
    {
      Agent agent1 = (Agent) null;
      Agent agent2 = (Agent) null;
      foreach (Agent agent3 in (List<Agent>) this.Mission.Agents)
      {
        if (agent3.Team == this._enemyTeam && agent3.IsHuman)
        {
          if (agent3.IsHero)
          {
            agent1 = agent3;
            break;
          }
          if (agent3.Character.Culture.IsBandit && (agent3.Character.Culture is CultureObject culture ? culture.BanditBoss : (CharacterObject) null) != null && ((CultureObject) agent3.Character.Culture).BanditBoss == agent3.Character)
            agent1 = agent3;
          if (agent2 == null || agent3.Character.Level > agent2.Character.Level)
            agent2 = agent3;
        }
      }
      return agent1 ?? agent2;
    }

    private void OnInitialFadeOutOver(
      ref Agent playerAgent,
      ref List<Agent> playerCompanions,
      ref Agent bossAgent,
      ref List<Agent> bossCompanions,
      ref float placementPerturbation,
      ref float placementAngle)
    {
      this._hideoutMissionState = HideoutMissionController.HideoutMissionState.CutSceneBeforeBossFight;
      this._enemyTeam = this.Mission.PlayerEnemyTeam;
      this.SpawnBossAndBodyguards();
      this.Mission.PlayerTeam.SetIsEnemyOf(this._enemyTeam, false);
      this.SetWatchStateOfAIAgents(Agent.WatchState.Patrolling);
      if (Agent.Main.IsUsingGameObject)
        Agent.Main.StopUsingGameObject(false);
      playerAgent = Agent.Main;
      playerCompanions = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive() && x.Team == this.Mission.PlayerTeam && x.IsHuman && x.IsAIControlled)).ToList<Agent>();
      bossAgent = this._bossAgent;
      bossCompanions = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive() && x.Team == this._enemyTeam && x.IsHuman && x.IsAIControlled && x != this._bossAgent)).ToList<Agent>();
    }

    private void OnCutSceneOver()
    {
      Mission.Current.SetMissionMode(this._oldMissionMode, false);
      this._hideoutMissionState = HideoutMissionController.HideoutMissionState.ConversationBetweenLeaders;
      MissionConversationLogic missionBehavior = this.Mission.GetMissionBehavior<MissionConversationLogic>();
      missionBehavior.DisableStartConversation(false);
      missionBehavior.StartConversation(this._bossAgent, false);
    }

    private void OnDuelOver(BattleSideEnum winnerSide)
    {
      AgentVictoryLogic missionBehavior = this.Mission.GetMissionBehavior<AgentVictoryLogic>();
      missionBehavior?.SetCheerActionGroup(AgentVictoryLogic.CheerActionGroupEnum.HighCheerActions);
      missionBehavior?.SetCheerReactionTimerSettings(0.25f, 3f);
      if (winnerSide == BattleSideEnum.Attacker && this._duelPhaseAllyAgents != null)
      {
        foreach (Agent duelPhaseAllyAgent in this._duelPhaseAllyAgents)
        {
          if (duelPhaseAllyAgent.State == AgentState.Active)
          {
            duelPhaseAllyAgent.SetTeam(this.Mission.PlayerTeam, true);
            duelPhaseAllyAgent.SetWatchState(Agent.WatchState.Alarmed);
          }
        }
      }
      else
      {
        if (winnerSide != BattleSideEnum.Defender || this._duelPhaseBanditAgents == null)
          return;
        foreach (Agent phaseBanditAgent in this._duelPhaseBanditAgents)
        {
          if (phaseBanditAgent.State == AgentState.Active)
          {
            phaseBanditAgent.SetTeam(this._enemyTeam, true);
            phaseBanditAgent.SetWatchState(Agent.WatchState.Alarmed);
          }
        }
      }
    }

    public static void StartBossFightDuelMode()
    {
      Mission.Current?.GetMissionBehavior<HideoutMissionController>()?.StartBossFightDuelModeInternal();
    }

    private void StartBossFightDuelModeInternal()
    {
      this.Mission.GetMissionBehavior<MissionConversationLogic>().DisableStartConversation(true);
      this.Mission.PlayerTeam.SetIsEnemyOf(this._enemyTeam, true);
      this._duelPhaseAllyAgents = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive() && x.Team == this.Mission.PlayerTeam && x.IsHuman && x.IsAIControlled && x != Agent.Main)).ToList<Agent>();
      this._duelPhaseBanditAgents = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (x => x.IsActive() && x.Team == this._enemyTeam && x.IsHuman && x.IsAIControlled && x != this._bossAgent)).ToList<Agent>();
      foreach (Agent duelPhaseAllyAgent in this._duelPhaseAllyAgents)
      {
        duelPhaseAllyAgent.SetTeam(Team.Invalid, true);
        WorldPosition worldPosition = duelPhaseAllyAgent.GetWorldPosition();
        duelPhaseAllyAgent.SetScriptedPosition(ref worldPosition, false);
        duelPhaseAllyAgent.SetLookAgent(Agent.Main);
      }
      foreach (Agent phaseBanditAgent in this._duelPhaseBanditAgents)
      {
        phaseBanditAgent.SetTeam(Team.Invalid, true);
        WorldPosition worldPosition = phaseBanditAgent.GetWorldPosition();
        phaseBanditAgent.SetScriptedPosition(ref worldPosition, false);
        phaseBanditAgent.SetLookAgent(this._bossAgent);
      }
      this._bossAgent.SetWatchState(Agent.WatchState.Alarmed);
      this._hideoutMissionState = HideoutMissionController.HideoutMissionState.BossFightWithDuel;
    }

    public static void StartBossFightBattleMode()
    {
      Mission.Current?.GetMissionBehavior<HideoutMissionController>()?.StartBossFightBattleModeInternal();
    }

    private void StartBossFightBattleModeInternal()
    {
      this.Mission.GetMissionBehavior<MissionConversationLogic>().DisableStartConversation(true);
      this.Mission.PlayerTeam.SetIsEnemyOf(this._enemyTeam, true);
      this.SetWatchStateOfAIAgents(Agent.WatchState.Alarmed);
      this._hideoutMissionState = HideoutMissionController.HideoutMissionState.BossFightWithAll;
      foreach (Formation formation in (List<Formation>) this.Mission.PlayerTeam.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0)
        {
          formation.SetMovementOrder(MovementOrder.MovementOrderCharge);
          formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
        }
      }
    }

    private class MissionSide
    {
      private readonly BattleSideEnum _side;
      private readonly IMissionTroopSupplier _troopSupplier;
      public readonly bool IsPlayerSide;
      private int _numberOfSpawnedTroops;

      public bool TroopSpawningActive { get; private set; }

      public int NumberOfActiveTroops
      {
        get => this._numberOfSpawnedTroops - this._troopSupplier.NumRemovedTroops;
      }

      public int NumberOfTroopsNotSupplied => this._troopSupplier.NumTroopsNotSupplied;

      public MissionSide(
        BattleSideEnum side,
        IMissionTroopSupplier troopSupplier,
        bool isPlayerSide)
      {
        this._side = side;
        this.IsPlayerSide = isPlayerSide;
        this._troopSupplier = troopSupplier;
      }

      public void SpawnTroops(
        List<CommonAreaMarker> areaMarkers,
        List<PatrolArea> patrolAreas,
        Dictionary<Agent, HideoutMissionController.UsedObject> defenderAgentObjects,
        int spawnCount)
      {
        int num1 = 0;
        bool isPatrolling = false;
        List<StandingPoint> standingPointList = new List<StandingPoint>();
        foreach (AreaMarker areaMarker in areaMarkers)
        {
          foreach (UsableMachine usableMachine in areaMarker.GetUsableMachinesInRange())
            standingPointList.AddRange((IEnumerable<StandingPoint>) usableMachine.StandingPoints);
        }
        List<IAgentOriginBase> list = this._troopSupplier.SupplyTroops(spawnCount).ToList<IAgentOriginBase>();
        for (int index = 0; index < list.Count; ++index)
        {
          if (BattleSideEnum.Attacker == this._side)
          {
            Mission.Current.SpawnTroop(list[index], true, true, false, false, 0, 0, true, true, true, new Vec3?(), new Vec2?());
            ++this._numberOfSpawnedTroops;
          }
          else if (areaMarkers.Count > num1)
          {
            StandingPoint spawnPoint = (StandingPoint) null;
            int num2 = list.Count - index;
            if (num2 < standingPointList.Count / 2 && num2 < 4)
              isPatrolling = true;
            if (!isPatrolling)
            {
              standingPointList.Shuffle<StandingPoint>();
              spawnPoint = standingPointList.FirstOrDefault<StandingPoint>((Func<StandingPoint, bool>) (point => !point.IsDeactivated && !point.IsDisabled && !point.HasUser));
            }
            else
            {
              IEnumerable<PatrolArea> source = patrolAreas.Where<PatrolArea>((Func<PatrolArea, bool>) (area => area.StandingPoints.All<StandingPoint>((Func<StandingPoint, bool>) (point => !point.HasUser && !point.HasAIMovingTo))));
              if (!source.IsEmpty<PatrolArea>())
                spawnPoint = source.First<PatrolArea>().StandingPoints[0];
            }
            if (spawnPoint != null && !spawnPoint.IsDisabled)
            {
              MatrixFrame globalFrame = spawnPoint.GameEntity.GetGlobalFrame();
              globalFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
              this.InitializeBanditAgent(Mission.Current.SpawnTroop(list[index], false, false, false, false, 0, 0, false, false, false, new Vec3?(globalFrame.origin), new Vec2?(globalFrame.rotation.f.AsVec2.Normalized()), "_hideout_bandit"), spawnPoint, isPatrolling, defenderAgentObjects);
              ++this._numberOfSpawnedTroops;
              int groupId1 = ((AnimationPoint) spawnPoint).GroupId;
              if (!isPatrolling)
              {
                foreach (StandingPoint standingPoint in (List<StandingPoint>) spawnPoint.GameEntity.Parent.GetFirstScriptOfType<UsableMachine>().StandingPoints)
                {
                  int groupId2 = ((AnimationPoint) standingPoint).GroupId;
                  if (groupId1 == groupId2 && standingPoint != spawnPoint)
                    standingPoint.SetDisabledAndMakeInvisible();
                }
              }
            }
            else
              ++num1;
          }
        }
        foreach (Formation formation in (List<Formation>) Mission.Current.AttackerTeam.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0)
            formation.SetMovementOrder(MovementOrder.MovementOrderMove(formation.QuerySystem.MedianPosition));
          formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
          if (Mission.Current.AttackerTeam == Mission.Current.PlayerTeam)
            formation.PlayerOwner = Mission.Current.MainAgent;
        }
      }

      public void SpawnRemainingTroopsForBossFight(List<MatrixFrame> spawnFrames, int spawnCount)
      {
        List<IAgentOriginBase> list = this._troopSupplier.SupplyTroops(spawnCount).ToList<IAgentOriginBase>();
        for (int index = 0; index < list.Count; ++index)
        {
          MatrixFrame matrixFrame = spawnFrames.FirstOrDefault<MatrixFrame>();
          matrixFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
          Agent agent = Mission.Current.SpawnTroop(list[index], false, false, false, false, 0, 0, false, false, false, new Vec3?(matrixFrame.origin), new Vec2?(matrixFrame.rotation.f.AsVec2.Normalized()), "_hideout_bandit");
          AgentFlag agentFlags = agent.GetAgentFlags();
          if (agentFlags.HasAnyFlag<AgentFlag>(AgentFlag.CanRetreat))
            agent.SetAgentFlags(agentFlags & ~AgentFlag.CanRetreat);
          ++this._numberOfSpawnedTroops;
        }
        foreach (Formation formation in (List<Formation>) Mission.Current.AttackerTeam.FormationsIncludingEmpty)
        {
          if (formation.CountOfUnits > 0)
            formation.SetMovementOrder(MovementOrder.MovementOrderMove(formation.QuerySystem.MedianPosition));
          formation.FiringOrder = FiringOrder.FiringOrderHoldYourFire;
          if (Mission.Current.AttackerTeam == Mission.Current.PlayerTeam)
            formation.PlayerOwner = Mission.Current.MainAgent;
        }
      }

      private void InitializeBanditAgent(
        Agent agent,
        StandingPoint spawnPoint,
        bool isPatrolling,
        Dictionary<Agent, HideoutMissionController.UsedObject> defenderAgentObjects)
      {
        UsableMachine machine = isPatrolling ? (UsableMachine) spawnPoint.GameEntity.Parent.GetScriptComponents<PatrolArea>().FirstOrDefault<PatrolArea>() : spawnPoint.GameEntity.Parent.GetScriptComponents<UsableMachine>().FirstOrDefault<UsableMachine>();
        if (isPatrolling)
        {
          ((IDetachment) machine).AddAgent(agent);
          agent.WieldInitialWeapons();
        }
        else
          agent.UseGameObject((UsableMissionObject) spawnPoint);
        defenderAgentObjects.Add(agent, new HideoutMissionController.UsedObject(machine, isPatrolling));
        AgentFlag agentFlags = agent.GetAgentFlags();
        agent.SetAgentFlags((agentFlags | AgentFlag.CanGetAlarmed) & ~AgentFlag.CanRetreat);
        agent.GetComponent<CampaignAgentComponent>().CreateAgentNavigator();
        this.SimulateTick(agent);
      }

      private void SimulateTick(Agent agent)
      {
        int num = MBRandom.RandomInt(1, 20);
        for (int index = 0; index < num; ++index)
        {
          if (agent.IsUsingGameObject)
            agent.CurrentlyUsedGameObject.SimulateTick(0.1f);
        }
      }

      public void SetSpawnTroops(bool spawnTroops) => this.TroopSpawningActive = spawnTroops;
    }

    private class UsedObject
    {
      public readonly UsableMachine Machine;
      public readonly UsableMachineAIBase MachineAI;
      public bool IsMachineAITicked;

      public UsedObject(UsableMachine machine, bool isMachineAITicked)
      {
        this.Machine = machine;
        this.MachineAI = machine.CreateAIBehaviorObject();
        this.IsMachineAITicked = isMachineAITicked;
      }
    }

    private enum HideoutMissionState
    {
      NotDecided,
      WithoutBossFight,
      InitialFightBeforeBossFight,
      CutSceneBeforeBossFight,
      ConversationBetweenLeaders,
      BossFightWithDuel,
      BossFightWithAll,
    }
  }
}
