// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.Towns.AlleyFightMissionHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics.Towns
{
  public class AlleyFightMissionHandler : MissionLogic, IMissionAgentSpawnLogic, IMissionBehavior
  {
    private TroopRoster _playerSideTroops;
    private TroopRoster _rivalSideTroops;
    private List<Agent> _playerSideAliveAgents = new List<Agent>();
    private List<Agent> _rivalSideAliveAgents = new List<Agent>();

    public AlleyFightMissionHandler(TroopRoster playerSideTroops, TroopRoster rivalSideTroops)
    {
      this._playerSideTroops = playerSideTroops;
      this._rivalSideTroops = rivalSideTroops;
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow blow)
    {
      base.OnAgentRemoved(affectedAgent, affectorAgent, agentState, blow);
      if (this._playerSideAliveAgents.Contains(affectedAgent))
      {
        this._playerSideAliveAgents.Remove(affectedAgent);
        this._playerSideTroops.RemoveTroop(affectedAgent.Character as CharacterObject);
      }
      else if (this._rivalSideAliveAgents.Contains(affectedAgent))
      {
        this._rivalSideAliveAgents.Remove(affectedAgent);
        this._rivalSideTroops.RemoveTroop(affectedAgent.Character as CharacterObject);
      }
      if (affectedAgent != Agent.Main)
        return;
      Campaign.Current.GetCampaignBehavior<IAlleyCampaignBehavior>().OnPlayerDiedInMission();
    }

    public override void AfterStart()
    {
      this.Mission.Teams.Add(BattleSideEnum.Defender, Clan.PlayerClan.Color, Clan.PlayerClan.Color2, Clan.PlayerClan.Banner);
      this.Mission.Teams.Add(BattleSideEnum.Attacker, Clan.BanditFactions.First<Clan>().Color, Clan.BanditFactions.First<Clan>().Color2, Clan.BanditFactions.First<Clan>().Banner);
      this.Mission.PlayerTeam = this.Mission.DefenderTeam;
      this.Mission.AddTroopsToDeploymentPlan(BattleSideEnum.Defender, DeploymentPlanType.Initial, FormationClass.Infantry, this._playerSideTroops.TotalManCount, 0);
      this.Mission.AddTroopsToDeploymentPlan(BattleSideEnum.Attacker, DeploymentPlanType.Initial, FormationClass.Infantry, this._rivalSideTroops.TotalManCount, 0);
      this.Mission.MakeDefaultDeploymentPlans();
    }

    public override InquiryData OnEndMissionRequest(out bool canLeave)
    {
      canLeave = true;
      return new InquiryData("", GameTexts.FindText("str_give_up_fight").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), new Action(this.Mission.OnEndMissionResult), (Action) null);
    }

    public override void OnRetreatMission()
    {
      Campaign.Current.GetCampaignBehavior<IAlleyCampaignBehavior>().OnPlayerRetreatedFromMission();
    }

    public override void OnRenderingStarted()
    {
      Mission.Current.SetMissionMode(MissionMode.Battle, true);
      this.SpawnAgentsForBothSides();
      this.Mission.PlayerTeam.PlayerOrderController.SelectAllFormations();
      this.Mission.PlayerTeam.PlayerOrderController.SetOrder(OrderType.Charge);
      this.Mission.PlayerEnemyTeam.MasterOrderController.SelectAllFormations();
      this.Mission.PlayerEnemyTeam.MasterOrderController.SetOrder(OrderType.Charge);
    }

    private void SpawnAgentsForBothSides()
    {
      Mission.Current.PlayerEnemyTeam.SetIsEnemyOf(Mission.Current.PlayerTeam, true);
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) this._playerSideTroops.GetTroopRoster())
      {
        for (int index = 0; index < troopRosterElement.Number; ++index)
          this.SpawnATroop(troopRosterElement.Character, true);
      }
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) this._rivalSideTroops.GetTroopRoster())
      {
        for (int index = 0; index < troopRosterElement.Number; ++index)
          this.SpawnATroop(troopRosterElement.Character, false);
      }
    }

    private void SpawnATroop(CharacterObject character, bool isPlayerSide)
    {
      Agent agent = Mission.Current.SpawnTroop((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character), isPlayerSide, true, false, false, 0, 0, true, true, true, new Vec3?(), new Vec2?());
      if (isPlayerSide)
        this._playerSideAliveAgents.Add(agent);
      else
        this._rivalSideAliveAgents.Add(agent);
      AgentFlag agentFlags = agent.GetAgentFlags();
      agent.SetAgentFlags((agentFlags | AgentFlag.CanGetAlarmed) & ~AgentFlag.CanRetreat);
      if (agent.IsAIControlled)
        agent.SetWatchState(Agent.WatchState.Alarmed);
      if (isPlayerSide)
        agent.SetTeam(Mission.Current.PlayerTeam, true);
      else
        agent.SetTeam(Mission.Current.PlayerEnemyTeam, true);
    }

    public void StartSpawner(BattleSideEnum side)
    {
    }

    public void StopSpawner(BattleSideEnum side)
    {
    }

    public bool IsSideSpawnEnabled(BattleSideEnum side) => true;

    public bool IsSideDepleted(BattleSideEnum side)
    {
      return side != BattleSideEnum.Attacker ? this._playerSideAliveAgents.Count == 0 : this._rivalSideAliveAgents.Count == 0;
    }

    public float GetReinforcementInterval() => float.MaxValue;
  }
}
