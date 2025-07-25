// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentControllers.AmbushMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.Handlers;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Missions;

#nullable disable
namespace SandBox.Missions.AgentControllers
{
  public class AmbushMissionController : BaseBattleMissionController
  {
    private AmbushBattleDeploymentHandler _ambushDeploymentHandler;
    private AmbushIntroLogic _ambushIntroLogic;
    private readonly List<GameEntity> _checkPoints;
    private readonly List<GameEntity> _defenderSpawnPoints;
    private int _currentPositionIndex;
    private int _columns;
    private const float UnitSpread = 1f;
    private Team _playerSoloTeam;
    private bool _firstTick = true;

    public bool IsPlayerAmbusher
    {
      get => this.IsPlayerAttacker;
      private set
      {
      }
    }

    public AmbushMissionController(bool isPlayerAttacker)
      : base(isPlayerAttacker)
    {
      this._checkPoints = new List<GameEntity>();
      this._defenderSpawnPoints = new List<GameEntity>();
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._ambushDeploymentHandler = this.Mission.GetMissionBehavior<AmbushBattleDeploymentHandler>();
      this._ambushIntroLogic = this.Mission.GetMissionBehavior<AmbushIntroLogic>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.SetMissionMode(MissionMode.Stealth, true);
      int num1 = 0;
      GameEntity entityWithTag1;
      do
      {
        entityWithTag1 = Mission.Current.Scene.FindEntityWithTag("checkpoint_" + num1.ToString());
        if ((NativeObject) entityWithTag1 != (NativeObject) null)
        {
          this._checkPoints.Add(entityWithTag1);
          ++num1;
        }
      }
      while ((NativeObject) entityWithTag1 != (NativeObject) null);
      int num2 = 0;
      GameEntity entityWithTag2;
      do
      {
        entityWithTag2 = Mission.Current.Scene.FindEntityWithTag("spawnpoint_defender_" + num2.ToString());
        if ((NativeObject) entityWithTag2 != (NativeObject) null)
        {
          this._defenderSpawnPoints.Add(entityWithTag2);
          ++num2;
        }
      }
      while ((NativeObject) entityWithTag2 != (NativeObject) null);
      if (this.Mission.PlayerTeam.Side == BattleSideEnum.Attacker)
      {
        this.SetupTeam(this.Mission.AttackerTeam);
      }
      else
      {
        this.SetupTeam(this.Mission.AttackerTeam);
        this.SetupTeam(this.Mission.DefenderTeam);
      }
      this._playerSoloTeam = this.Mission.Teams.Add(this.Mission.PlayerTeam.Side, isSettingRelations: false);
      this.Mission.AttackerTeam.SetIsEnemyOf(this.Mission.DefenderTeam, false);
      this.Mission.DefenderTeam.SetIsEnemyOf(this.Mission.AttackerTeam, false);
      this.Mission.AttackerTeam.SetIsEnemyOf(this._playerSoloTeam, false);
      this.Mission.DefenderTeam.SetIsEnemyOf(this._playerSoloTeam, true);
      this.Mission.AttackerTeam.ExpireAIQuerySystem();
      this.Mission.DefenderTeam.ExpireAIQuerySystem();
      Agent.Main.Controller = Agent.ControllerType.AI;
    }

    public override void OnMissionTick(float dt)
    {
      if (this._firstTick)
      {
        this._firstTick = false;
        if (!this.IsPlayerAmbusher)
        {
          this.Mission.AddMissionBehavior((MissionBehavior) new MissionBoundaryCrossingHandler());
          this._ambushIntroLogic.StartIntro();
        }
      }
      base.OnMissionTick(dt);
      this.UpdateAgents();
    }

    protected override void CreateDefenderTroops()
    {
      this.CreateTroop("guard", this.Mission.DefenderTeam, 30);
    }

    protected override void CreateAttackerTroops()
    {
      this.CreateTroop("guard", this.Mission.AttackerTeam, 10);
      this.CreateTroop("archer", this.Mission.AttackerTeam, 15);
    }

    protected void CreateTroop(
      string troopName,
      Team troopTeam,
      int troopCount,
      bool isReinforcement = false)
    {
      if (troopTeam.Side == BattleSideEnum.Attacker)
      {
        CharacterObject characterObject = Game.Current.ObjectManager.GetObject<CharacterObject>(troopName);
        FormationClass defaultFormationClass = characterObject.DefaultFormationClass;
        Formation formation = troopTeam.GetFormation(defaultFormationClass);
        WorldPosition spawnPosition;
        Vec2 spawnDirection;
        this.Mission.GetFormationSpawnFrame(troopTeam.Side, defaultFormationClass, isReinforcement, out spawnPosition, out spawnDirection);
        formation.SetPositioning(new WorldPosition?(spawnPosition), new Vec2?(spawnDirection));
        for (int formationTroopIndex = 0; formationTroopIndex < troopCount; ++formationTroopIndex)
        {
          (this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(troopTeam).Formation(formation).FormationTroopSpawnCount(troopCount).FormationTroopSpawnIndex(formationTroopIndex)).AddController(typeof (AmbushBattleAgentController)) as AmbushBattleAgentController).IsAttacker = true;
          this.IncrementDeploymedTroops(BattleSideEnum.Attacker);
        }
      }
      else
      {
        CharacterObject characterObject = this.game.ObjectManager.GetObject<CharacterObject>(troopName);
        for (int index = 0; index < troopCount; ++index)
        {
          int count = this._defenderSpawnPoints.Count;
          this._columns = MathF.Ceiling((float) troopCount / (float) count);
          int num = this.DeployedDefenderTroopCount - this.DeployedDefenderTroopCount / this._columns * this._columns;
          MatrixFrame globalFrame = this._defenderSpawnPoints[this.DeployedDefenderTroopCount / this._columns].GetGlobalFrame();
          globalFrame.origin = globalFrame.TransformToParent(new Vec3(1f) * (float) num * 1f);
          (this.Mission.SpawnAgent(new AgentBuildData((BasicCharacterObject) characterObject).Team(troopTeam).InitialPosition(in globalFrame.origin).InitialDirection(globalFrame.rotation.f.AsVec2.Normalized())).AddController(typeof (AmbushBattleAgentController)) as AmbushBattleAgentController).IsAttacker = false;
          this.IncrementDeploymedTroops(BattleSideEnum.Defender);
        }
      }
    }

    public void OnPlayerDeploymentFinish(bool doDebugPause = false)
    {
      if (this.Mission.PlayerTeam.Side == BattleSideEnum.Attacker)
        this.SetupTeam(this.Mission.DefenderTeam);
      this.Mission.RemoveMissionBehavior((MissionBehavior) this._ambushDeploymentHandler);
      this.Mission.AddMissionBehavior((MissionBehavior) new MissionBoundaryCrossingHandler());
      this._ambushIntroLogic.StartIntro();
      if (this.PlayerDeploymentFinish != null)
        this.PlayerDeploymentFinish();
      Agent.Main.SetTeam(this._playerSoloTeam, true);
    }

    public void OnIntroductionFinish()
    {
      if (!this.IsPlayerAttacker)
        this.StartFighting();
      if (this.IntroFinish != null)
        this.IntroFinish();
      Agent.Main.Controller = Agent.ControllerType.Player;
    }

    private void UpdateAgents()
    {
      int num1 = 0;
      int num2 = 0;
      foreach (Agent agent1 in (List<Agent>) this.Mission.Agents)
      {
        if (this.Mission.Mode == MissionMode.Stealth && agent1.IsAIControlled && agent1.CurrentWatchState == Agent.WatchState.Cautious && agent1.IsHuman)
          this.StartFighting();
        if (!this.IsPlayerAmbusher && Agent.Main.IsAIControlled)
        {
          Vec2 movementDirection = Agent.Main.GetMovementDirection();
          WorldPosition worldPosition = Agent.Main.GetWorldPosition();
          worldPosition.SetVec2(worldPosition.AsVec2 + movementDirection * 5f);
          Agent.Main.DisableScriptedMovement();
          Agent.Main.SetScriptedPosition(ref worldPosition, false, Agent.AIScriptedFrameFlags.DoNotRun);
        }
        AmbushBattleAgentController controller = agent1.GetController<AmbushBattleAgentController>();
        if (controller != null)
        {
          controller.UpdateState();
          if (!controller.IsAttacker && !controller.Aggressive)
          {
            if (num1 == 0)
            {
              if (controller.CheckArrivedAtWayPoint(this._checkPoints[this._currentPositionIndex]))
              {
                ++this._currentPositionIndex;
                if (this._currentPositionIndex >= this._checkPoints.Count)
                {
                  MBDebug.ShowWarning("The enemy has gotten away.");
                }
                else
                {
                  WorldPosition position = new WorldPosition(Mission.Current.Scene, UIntPtr.Zero, this._checkPoints[this._currentPositionIndex].GlobalPosition, false);
                  agent1.SetScriptedPosition(ref position, false, Agent.AIScriptedFrameFlags.DoNotRun);
                }
              }
            }
            else
            {
              WorldPosition worldPosition;
              Vec2 vec2;
              if (num1 % this._columns != 0)
              {
                Agent agent2 = this.Mission.Agents[num2 - 1];
                worldPosition = agent2.GetWorldPosition();
                vec2 = agent2.GetMovementDirection();
                vec2.RotateCCW(-1.57079637f);
              }
              else
              {
                Agent agent3 = this.Mission.Agents[num2 - this._columns];
                worldPosition = agent3.GetWorldPosition();
                Vec3 position = agent1.Position;
                Vec2 asVec2_1 = position.AsVec2;
                position = agent3.Position;
                Vec2 asVec2_2 = position.AsVec2;
                vec2 = asVec2_1 - asVec2_2;
                double num3 = (double) vec2.Normalize();
              }
              worldPosition.SetVec2(worldPosition.AsVec2 + vec2 * 1f);
              agent1.DisableScriptedMovement();
              agent1.SetScriptedPosition(ref worldPosition, false, Agent.AIScriptedFrameFlags.DoNotRun);
            }
            ++num1;
          }
        }
        ++num2;
      }
    }

    private void StartFighting()
    {
      this.Mission.AttackerTeam.SetIsEnemyOf(this.Mission.DefenderTeam, true);
      this.Mission.DefenderTeam.SetIsEnemyOf(this.Mission.AttackerTeam, true);
      if (this.Mission.PlayerAllyTeam != null)
      {
        this.Mission.PlayerAllyTeam.SetIsEnemyOf(this.Mission.PlayerEnemyTeam, true);
        this.Mission.PlayerEnemyTeam.SetIsEnemyOf(this.Mission.PlayerAllyTeam, true);
      }
      this.Mission.SetMissionMode(MissionMode.Battle, false);
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        AmbushBattleAgentController controller = agent.GetController<AmbushBattleAgentController>();
        if (controller != null)
        {
          controller.Aggressive = true;
          if (!controller.IsAttacker)
          {
            agent.DisableScriptedMovement();
            FormationClass agentTroopClass = this.Mission.GetAgentTroopClass(BattleSideEnum.Defender, agent.Character);
            agent.Formation = this.Mission.DefenderTeam.GetFormation(agentTroopClass);
            agent.Formation.SetMovementOrder(MovementOrder.MovementOrderCharge);
          }
        }
        if (agent.IsPlayerControlled)
          agent.SetTeam(this.Mission.PlayerTeam, true);
      }
      this.Mission.DefenderTeam.MasterOrderController.SelectAllFormations();
      this.Mission.DefenderTeam.MasterOrderController.SetOrder(OrderType.StandYourGround);
      this.Mission.DefenderTeam.MasterOrderController.SetOrder(OrderType.Charge);
      foreach (Formation formation in (List<Formation>) this.Mission.DefenderTeam.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
          this.Mission.DefenderTeam.MasterOrderController.DeselectFormation(formation);
      }
    }

    public event AmbushMissionEventDelegate PlayerDeploymentFinish;

    public event AmbushMissionEventDelegate IntroFinish;
  }
}
