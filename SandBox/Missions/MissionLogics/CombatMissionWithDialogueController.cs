// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.CombatMissionWithDialogueController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.AI.AgentComponents;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class CombatMissionWithDialogueController : 
    MissionLogic,
    IMissionAgentSpawnLogic,
    IMissionBehavior
  {
    private BattleAgentLogic _battleAgentLogic;
    private readonly BasicCharacterObject _characterToTalkTo;
    private bool _isMissionInitialized;
    private bool _troopsInitialized;
    private bool _conversationInitialized;
    private int _numSpawnedTroops;
    private readonly IMissionTroopSupplier[] _troopSuppliers;

    public CombatMissionWithDialogueController(
      IMissionTroopSupplier[] suppliers,
      BasicCharacterObject characterToTalkTo)
    {
      this._troopSuppliers = suppliers;
      this._characterToTalkTo = characterToTalkTo;
    }

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = true;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._battleAgentLogic = Mission.Current.GetMissionBehavior<BattleAgentLogic>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.MakeDefaultDeploymentPlans();
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._isMissionInitialized)
      {
        this.SpawnAgents();
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
        if (this._conversationInitialized || Agent.Main == null || !Agent.Main.IsActive())
          return;
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
        {
          ScriptedMovementComponent component = agent.GetComponent<ScriptedMovementComponent>();
          if (component != null && component.ShouldConversationStartWithAgent())
          {
            this.StartConversation(agent, true);
            this._conversationInitialized = true;
          }
        }
      }
    }

    public override void OnAgentHit(
      Agent affectedAgent,
      Agent affectorAgent,
      in MissionWeapon affectorWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      if (this._conversationInitialized || affectedAgent.Team == Mission.Current.PlayerTeam || affectorAgent == null || affectorAgent != Agent.Main)
        return;
      this._conversationInitialized = true;
      this.StartFight(false);
    }

    public void StartFight(bool hasPlayerChangedSide)
    {
      this.Mission.SetMissionMode(MissionMode.Battle, false);
      if (hasPlayerChangedSide)
      {
        Agent.Main.SetTeam(Agent.Main.Team == this.Mission.AttackerTeam ? this.Mission.DefenderTeam : this.Mission.AttackerTeam, true);
        Mission.Current.PlayerTeam = Agent.Main.Team;
      }
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (Agent.Main != agent)
        {
          if (hasPlayerChangedSide && agent.Team != Mission.Current.PlayerTeam && agent.Origin.BattleCombatant as PartyBase == PartyBase.MainParty)
            agent.SetTeam(Mission.Current.PlayerTeam, true);
          AgentFlag agentFlags = agent.GetAgentFlags();
          agent.SetAgentFlags(agentFlags | AgentFlag.CanGetAlarmed);
        }
      }
    }

    public void StartConversation(Agent agent, bool setActionsInstantly)
    {
      Campaign.Current.ConversationManager.SetupAndStartMissionConversation((IAgent) agent, (IAgent) this.Mission.MainAgent, setActionsInstantly);
      foreach (Agent conversationAgent in (IEnumerable<IAgent>) Campaign.Current.ConversationManager.ConversationAgents)
      {
        conversationAgent.ForceAiBehaviorSelection();
        conversationAgent.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(true);
      }
      this.Mission.MainAgentServer.AgentVisuals.SetClothComponentKeepStateOfAllMeshes(true);
      this.Mission.SetMissionMode(MissionMode.Conversation, setActionsInstantly);
    }

    private void SpawnAgents()
    {
      Agent targetAgent = (Agent) null;
      foreach (IMissionTroopSupplier troopSupplier in this._troopSuppliers)
      {
        foreach (IAgentOriginBase troopOrigin in troopSupplier.SupplyTroops(25).ToList<IAgentOriginBase>())
        {
          Agent agent = Mission.Current.SpawnTroop(troopOrigin, troopOrigin.BattleCombatant.Side == BattleSideEnum.Attacker, false, false, false, 0, 0, false, true, true, new Vec3?(), new Vec2?());
          ++this._numSpawnedTroops;
          if (!agent.IsMainAgent)
          {
            agent.AddComponent((AgentComponent) new ScriptedMovementComponent(agent, agent.Character == this._characterToTalkTo, troopOrigin.IsUnderPlayersCommand ? 5f : 2f));
            if (agent.Character == this._characterToTalkTo)
              targetAgent = agent;
          }
        }
      }
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        ScriptedMovementComponent component = agent.GetComponent<ScriptedMovementComponent>();
        if (component != null)
        {
          if (agent.Team.Side == Mission.Current.PlayerTeam.Side)
            component.SetTargetAgent(targetAgent);
          else
            component.SetTargetAgent(Agent.Main);
        }
        agent.SetFiringOrder(FiringOrder.RangedWeaponUsageOrderEnum.HoldYourFire);
      }
    }

    public void StartSpawner(BattleSideEnum side)
    {
    }

    public void StopSpawner(BattleSideEnum side)
    {
    }

    public bool IsSideSpawnEnabled(BattleSideEnum side) => false;

    public float GetReinforcementInterval() => 0.0f;

    public bool IsSideDepleted(BattleSideEnum side)
    {
      int num = this._numSpawnedTroops - this._troopSuppliers[(int) side].NumRemovedTroops;
      if (Mission.Current.PlayerTeam == this.Mission.DefenderTeam)
      {
        if (side == BattleSideEnum.Attacker)
          --num;
        else if (Agent.Main != null && Agent.Main.IsActive())
          ++num;
      }
      return num == 0;
    }
  }
}
