// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DeploymentMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.MountAndBlade.Missions.Handlers;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DeploymentMissionController : MissionLogic
  {
    private BattleDeploymentHandler _battleDeploymentHandler;
    protected MissionAgentSpawnLogic MissionAgentSpawnLogic;
    private readonly bool _isPlayerAttacker;
    protected bool TeamSetupOver;
    private bool _isPlayerControllerSetToAI;

    public DeploymentMissionController(bool isPlayerAttacker)
    {
      this._isPlayerAttacker = isPlayerAttacker;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._battleDeploymentHandler = this.Mission.GetMissionBehavior<BattleDeploymentHandler>();
      this.MissionAgentSpawnLogic = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.AllowAiTicking = false;
      for (int side = 0; side < 2; ++side)
        this.MissionAgentSpawnLogic.SetSpawnTroops((BattleSideEnum) side, false);
      this.MissionAgentSpawnLogic.SetReinforcementsSpawnEnabled(false);
    }

    private void SetupTeams()
    {
      Utilities.SetLoadingScreenPercentage(0.92f);
      this.Mission.DisableDying = true;
      BattleSideEnum side1 = this._isPlayerAttacker ? BattleSideEnum.Defender : BattleSideEnum.Attacker;
      BattleSideEnum side2 = this._isPlayerAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
      this.SetupTeamsOfSide(side1);
      this.OnSideDeploymentFinished(side1);
      if (this._isPlayerAttacker)
      {
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          if (agent.IsHuman && agent.Team != null && agent.Team.Side == side1)
          {
            agent.SetRenderCheckEnabled(false);
            agent.AgentVisuals.SetVisible(false);
            agent.MountAgent?.SetRenderCheckEnabled(false);
            agent.MountAgent?.AgentVisuals.SetVisible(false);
          }
        }
      }
      this.SetupTeamsOfSide(side2);
      this.Mission.IsTeleportingAgents = true;
      Utilities.SetLoadingScreenPercentage(0.96f);
      if (MissionGameModels.Current.BattleInitializationModel.CanPlayerSideDeployWithOrderOfBattle())
        return;
      this.FinishDeployment();
    }

    public override void OnAgentControllerSetToPlayer(Agent agent)
    {
      if (this._isPlayerControllerSetToAI)
        return;
      agent.Controller = Agent.ControllerType.AI;
      agent.SetIsAIPaused(true);
      agent.SetDetachableFromFormation(false);
      this._isPlayerControllerSetToAI = true;
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (this.TeamSetupOver || !((NativeObject) this.Mission.Scene != (NativeObject) null))
        return;
      this.SetupTeams();
      this.TeamSetupOver = true;
    }

    [Conditional("DEBUG")]
    private void DebugTick()
    {
      if (!Input.DebugInput.IsHotKeyPressed("SwapToEnemy"))
        return;
      this.Mission.MainAgent.Controller = Agent.ControllerType.AI;
      this.Mission.PlayerEnemyTeam.Leader.Controller = Agent.ControllerType.Player;
      this.SwapTeams();
    }

    private void SwapTeams() => this.Mission.PlayerTeam = this.Mission.PlayerEnemyTeam;

    protected void SetupTeamsOfSideAux(BattleSideEnum side)
    {
      Team team1 = side == BattleSideEnum.Attacker ? this.Mission.AttackerTeam : this.Mission.DefenderTeam;
      foreach (Formation formation in (List<Formation>) team1.FormationsIncludingSpecialAndEmpty)
      {
        if (formation.CountOfUnits > 0)
          formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
          {
            if (!agent.IsAIControlled)
              return;
            agent.AIStateFlags &= ~Agent.AIStateFlag.Alarmed;
            agent.SetIsAIPaused(true);
          }));
      }
      Team team2 = side == BattleSideEnum.Attacker ? this.Mission.AttackerAllyTeam : this.Mission.DefenderAllyTeam;
      if (team2 != null)
      {
        foreach (Formation formation in (List<Formation>) team2.FormationsIncludingSpecialAndEmpty)
        {
          if (formation.CountOfUnits > 0)
            formation.ApplyActionOnEachUnit((Action<Agent>) (agent =>
            {
              if (!agent.IsAIControlled)
                return;
              agent.AIStateFlags &= ~Agent.AIStateFlag.Alarmed;
              agent.SetIsAIPaused(true);
            }));
        }
      }
      this.MissionAgentSpawnLogic.OnBattleSideDeployed(team1.Side);
    }

    protected virtual void SetupTeamsOfSide(BattleSideEnum side)
    {
      this.MissionAgentSpawnLogic.SetSpawnTroops(side, true, true);
      this.SetupTeamsOfSideAux(side);
    }

    protected void OnSideDeploymentFinished(BattleSideEnum side)
    {
      Team team1 = side == BattleSideEnum.Attacker ? this.Mission.AttackerTeam : this.Mission.DefenderTeam;
      if (side == this.Mission.PlayerTeam.Side)
        return;
      this.Mission.IsTeleportingAgents = true;
      this.DeployFormationsOfTeam(team1);
      Team team2 = side == BattleSideEnum.Attacker ? this.Mission.AttackerAllyTeam : this.Mission.DefenderAllyTeam;
      if (team2 != null)
        this.DeployFormationsOfTeam(team2);
      this.Mission.IsTeleportingAgents = false;
    }

    protected void DeployFormationsOfTeam(Team team)
    {
      foreach (Formation formation in (List<Formation>) team.FormationsIncludingEmpty)
      {
        if (formation.CountOfUnits > 0)
          formation.SetControlledByAI(true);
      }
      team.QuerySystem.Expire();
      this.Mission.AllowAiTicking = true;
      this.Mission.ForceTickOccasionally = true;
      team.ResetTactic();
      bool teleportingAgents = Mission.Current.IsTeleportingAgents;
      this.Mission.IsTeleportingAgents = true;
      team.Tick(0.0f);
      this.Mission.IsTeleportingAgents = teleportingAgents;
      this.Mission.AllowAiTicking = false;
      this.Mission.ForceTickOccasionally = false;
    }

    public void FinishDeployment()
    {
      this.OnBeforeDeploymentFinished();
      if (this._isPlayerAttacker)
      {
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          if (agent.IsHuman && agent.Team != null && agent.Team.Side == BattleSideEnum.Defender)
          {
            agent.SetRenderCheckEnabled(true);
            agent.AgentVisuals.SetVisible(true);
            agent.MountAgent?.SetRenderCheckEnabled(true);
            agent.MountAgent?.AgentVisuals.SetVisible(true);
          }
        }
      }
      this.Mission.IsTeleportingAgents = false;
      Mission.Current.OnDeploymentFinished();
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsAIControlled)
        {
          agent.AIStateFlags |= Agent.AIStateFlag.Alarmed;
          agent.SetIsAIPaused(false);
          if (agent.GetAgentFlags().HasAnyFlag<AgentFlag>(AgentFlag.CanWieldWeapon))
            agent.ResetEnemyCaches();
          agent.HumanAIComponent?.SyncBehaviorParamsIfNecessary();
        }
      }
      Agent mainAgent = this.Mission.MainAgent;
      if (mainAgent != null)
      {
        mainAgent.SetDetachableFromFormation(true);
        mainAgent.Controller = Agent.ControllerType.Player;
      }
      this.Mission.AllowAiTicking = true;
      this.Mission.DisableDying = false;
      this.MissionAgentSpawnLogic.SetReinforcementsSpawnEnabled(true);
      this.OnAfterDeploymentFinished();
      this.Mission.RemoveMissionBehavior((MissionBehavior) this);
    }

    public virtual void OnBeforeDeploymentFinished()
    {
      this.OnSideDeploymentFinished(this.Mission.PlayerTeam.Side);
    }

    public virtual void OnAfterDeploymentFinished()
    {
      this.Mission.RemoveMissionBehavior((MissionBehavior) this._battleDeploymentHandler);
    }
  }
}
