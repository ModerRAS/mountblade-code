// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.BaseBattleMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Diagnostics;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public abstract class BaseBattleMissionController : MissionLogic
  {
    protected readonly Game game;

    protected bool IsPlayerAttacker { get; private set; }

    protected int DeployedAttackerTroopCount { get; private set; }

    protected int DeployedDefenderTroopCount { get; private set; }

    protected BaseBattleMissionController(bool isPlayerAttacker)
    {
      this.IsPlayerAttacker = isPlayerAttacker;
      this.game = Game.Current;
    }

    public override void EarlyStart() => this.EarlyStart();

    public override void AfterStart()
    {
      base.AfterStart();
      this.CreateTeams();
      this.Mission.SetMissionMode(MissionMode.Battle, true);
    }

    protected virtual void SetupTeam(Team team)
    {
      if (team.Side == BattleSideEnum.Attacker)
        this.CreateAttackerTroops();
      else
        this.CreateDefenderTroops();
      if (team != this.Mission.PlayerTeam)
        return;
      this.CreatePlayer();
    }

    protected abstract void CreateDefenderTroops();

    protected abstract void CreateAttackerTroops();

    public virtual TeamAIComponent GetTeamAI(Team team, float thinkTimerTime = 5f, float applyTimerTime = 1f)
    {
      return (TeamAIComponent) new TeamAIGeneral(this.Mission, team, thinkTimerTime, applyTimerTime);
    }

    public override void OnMissionTick(float dt) => base.OnMissionTick(dt);

    [Conditional("DEBUG")]
    private void DebugTick()
    {
      if (Input.DebugInput.IsHotKeyPressed("SwapToEnemy"))
        this.BecomeEnemy();
      if (!Input.DebugInput.IsHotKeyDown("BaseBattleMissionControllerHotkeyBecomePlayer"))
        return;
      this.BecomePlayer();
    }

    protected bool IsPlayerDead()
    {
      return this.Mission.MainAgent == null || !this.Mission.MainAgent.IsActive();
    }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      if (!this.IsDeploymentFinished)
        return false;
      if (this.IsPlayerDead())
      {
        missionResult = MissionResult.CreateDefeated((IMission) this.Mission);
        return true;
      }
      if (this.Mission.GetMemberCountOfSide(BattleSideEnum.Attacker) == 0)
      {
        missionResult = this.Mission.PlayerTeam.Side == BattleSideEnum.Attacker ? MissionResult.CreateDefeated((IMission) this.Mission) : MissionResult.CreateSuccessful((IMission) this.Mission);
        return true;
      }
      if (this.Mission.GetMemberCountOfSide(BattleSideEnum.Defender) != 0)
        return false;
      missionResult = this.Mission.PlayerTeam.Side == BattleSideEnum.Attacker ? MissionResult.CreateSuccessful((IMission) this.Mission) : MissionResult.CreateDefeated((IMission) this.Mission);
      return true;
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = true;
      if (!this.IsPlayerDead() && this.Mission.IsPlayerCloseToAnEnemy())
      {
        canPlayerLeave = false;
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_can_not_retreat"));
      }
      else
      {
        MissionResult missionResult = (MissionResult) null;
        if (!this.IsPlayerDead() && !this.MissionEnded(ref missionResult))
          return new InquiryData("", GameTexts.FindText("str_retreat_question").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.Mission.OnEndMissionResult), (Action) null);
      }
      return (InquiryData) null;
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
    }

    private void CreateTeams()
    {
      if (!this.Mission.Teams.IsEmpty<Team>())
        throw new MBIllegalValueException("Number of teams is not 0.");
      this.Mission.Teams.Add(BattleSideEnum.Defender, 4278190335U, 4278190335U);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, 4278255360U, 4278255360U);
      if (this.IsPlayerAttacker)
        this.Mission.PlayerTeam = this.Mission.AttackerTeam;
      else
        this.Mission.PlayerTeam = this.Mission.DefenderTeam;
      this.Mission.DefenderTeam.AddTeamAI(this.GetTeamAI(this.Mission.DefenderTeam));
      this.Mission.AttackerTeam.AddTeamAI(this.GetTeamAI(this.Mission.AttackerTeam));
    }

    protected bool IsDeploymentFinished
    {
      get => this.Mission.GetMissionBehavior<DeploymentHandler>() == null;
    }

    protected void IncrementDeploymedTroops(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Attacker)
        ++this.DeployedAttackerTroopCount;
      else
        ++this.DeployedDefenderTroopCount;
    }

    protected virtual void CreatePlayer()
    {
      this.game.PlayerTroop = Game.Current.ObjectManager.GetObject<BasicCharacterObject>("main_hero");
      FormationClass formationClass = this.Mission.GetFormationSpawnClass(this.Mission.PlayerTeam.Side, FormationClass.NumberOfRegularFormations, false);
      if (formationClass != FormationClass.NumberOfRegularFormations)
        formationClass = this.game.PlayerTroop.DefaultFormationClass;
      WorldPosition spawnPosition;
      Vec2 direction;
      this.Mission.GetFormationSpawnFrame(this.Mission.PlayerTeam.Side, formationClass, false, out spawnPosition, out direction);
      Agent agent = this.Mission.SpawnAgent(new AgentBuildData(this.game.PlayerTroop).Team(this.Mission.PlayerTeam).InitialPosition(spawnPosition.GetGroundVec3()).InitialDirection(in direction).Controller(Agent.ControllerType.Player));
      agent.WieldInitialWeapons();
      this.Mission.MainAgent = agent;
    }

    protected void BecomeEnemy()
    {
      this.Mission.MainAgent.Controller = Agent.ControllerType.AI;
      this.Mission.PlayerEnemyTeam.Leader.Controller = Agent.ControllerType.Player;
      this.SwapTeams();
    }

    protected void BecomePlayer()
    {
      this.Mission.MainAgent.Controller = Agent.ControllerType.Player;
      this.Mission.PlayerEnemyTeam.Leader.Controller = Agent.ControllerType.AI;
      this.SwapTeams();
    }

    protected void SwapTeams()
    {
      this.Mission.PlayerTeam = this.Mission.PlayerEnemyTeam;
      this.IsPlayerAttacker = !this.IsPlayerAttacker;
    }
  }
}
