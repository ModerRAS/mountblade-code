// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionFightHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionFightHandler : MissionLogic
  {
    private static MissionFightHandler.OnFightEndDelegate _onFightEnd;
    private List<Agent> _playerSideAgents;
    private List<Agent> _opponentSideAgents;
    private Dictionary<Agent, Team> _playerSideAgentsOldTeamData;
    private Dictionary<Agent, Team> _opponentSideAgentsOldTeamData;
    private MissionFightHandler.State _state;
    private BasicMissionTimer _finishTimer;
    private BasicMissionTimer _prepareTimer;
    private bool _isPlayerSideWon;
    private MissionMode _oldMissionMode;

    private static MissionFightHandler _current
    {
      get => Mission.Current.GetMissionBehavior<MissionFightHandler>();
    }

    public IEnumerable<Agent> PlayerSideAgents
    {
      get => (IEnumerable<Agent>) this._playerSideAgents.AsReadOnly();
    }

    public IEnumerable<Agent> OpponentSideAgents
    {
      get => (IEnumerable<Agent>) this._opponentSideAgents.AsReadOnly();
    }

    public bool IsPlayerSideWon => this._isPlayerSideWon;

    public override void OnBehaviorInitialize()
    {
      this.Mission.IsAgentInteractionAllowed_AdditionalCondition += new Func<bool>(this.IsAgentInteractionAllowed_AdditionalCondition);
    }

    public override void EarlyStart()
    {
      this._playerSideAgents = new List<Agent>();
      this._opponentSideAgents = new List<Agent>();
    }

    public override void AfterStart()
    {
    }

    public override void OnMissionTick(float dt)
    {
      if (this._finishTimer != null && (double) this._finishTimer.ElapsedTime > 5.0)
      {
        this._finishTimer = (BasicMissionTimer) null;
        this.EndFight();
        this._prepareTimer = new BasicMissionTimer();
      }
      if (this._prepareTimer == null || (double) this._prepareTimer.ElapsedTime <= 3.0)
        return;
      this._prepareTimer = (BasicMissionTimer) null;
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (this._state != MissionFightHandler.State.Fighting)
        return;
      if (affectedAgent == Agent.Main)
        Mission.Current.NextCheckTimeEndMission += 8f;
      if (affectorAgent != null && this._playerSideAgents.Contains(affectedAgent))
      {
        this._playerSideAgents.Remove(affectedAgent);
        if (this._playerSideAgents.Count != 0)
          return;
        this._isPlayerSideWon = false;
        this.ResetScriptedBehaviors();
        this._finishTimer = new BasicMissionTimer();
      }
      else
      {
        if (affectorAgent == null || !this._opponentSideAgents.Contains(affectedAgent))
          return;
        this._opponentSideAgents.Remove(affectedAgent);
        if (this._opponentSideAgents.Count != 0)
          return;
        this._isPlayerSideWon = true;
        this.ResetScriptedBehaviors();
        this._finishTimer = new BasicMissionTimer();
      }
    }

    public void StartCustomFight(
      List<Agent> playerSideAgents,
      List<Agent> opponentSideAgents,
      bool dropWeapons,
      bool isItemUseDisabled,
      MissionFightHandler.OnFightEndDelegate onFightEndDelegate)
    {
      this._state = MissionFightHandler.State.Fighting;
      this._opponentSideAgents = opponentSideAgents;
      this._playerSideAgents = playerSideAgents;
      this._playerSideAgentsOldTeamData = new Dictionary<Agent, Team>();
      this._opponentSideAgentsOldTeamData = new Dictionary<Agent, Team>();
      MissionFightHandler._onFightEnd = onFightEndDelegate;
      Mission.Current.MainAgent.IsItemUseDisabled = isItemUseDisabled;
      foreach (Agent opponentSideAgent in this._opponentSideAgents)
      {
        if (dropWeapons)
          this.DropAllWeapons(opponentSideAgent);
        this._opponentSideAgentsOldTeamData.Add(opponentSideAgent, opponentSideAgent.Team);
        this.ForceAgentForFight(opponentSideAgent);
      }
      foreach (Agent playerSideAgent in this._playerSideAgents)
      {
        if (dropWeapons)
          this.DropAllWeapons(playerSideAgent);
        this._playerSideAgentsOldTeamData.Add(playerSideAgent, playerSideAgent.Team);
        this.ForceAgentForFight(playerSideAgent);
      }
      this.SetTeamsForFightAndDuel();
      this._oldMissionMode = Mission.Current.Mode;
      Mission.Current.SetMissionMode(MissionMode.Battle, false);
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = true;
      if (this._state == MissionFightHandler.State.Fighting && (this._opponentSideAgents.Count > 0 || this._playerSideAgents.Count > 0))
      {
        MBInformationManager.AddQuickInformation(new TextObject("{=Fpk3BUBs}Your duel has not ended yet!"));
        canPlayerLeave = false;
      }
      return (InquiryData) null;
    }

    private void ForceAgentForFight(Agent agent)
    {
      if (agent.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return;
      AlarmedBehaviorGroup behaviorGroup = agent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<AlarmedBehaviorGroup>();
      behaviorGroup.DisableCalmDown = true;
      behaviorGroup.AddBehavior<FightBehavior>();
      behaviorGroup.SetScriptedBehavior<FightBehavior>();
    }

    protected override void OnEndMission()
    {
      this.Mission.IsAgentInteractionAllowed_AdditionalCondition -= new Func<bool>(this.IsAgentInteractionAllowed_AdditionalCondition);
    }

    private void SetTeamsForFightAndDuel()
    {
      Mission.Current.PlayerEnemyTeam.SetIsEnemyOf(Mission.Current.PlayerTeam, true);
      foreach (Agent playerSideAgent in this._playerSideAgents)
      {
        if (playerSideAgent.IsHuman)
        {
          if (playerSideAgent.IsAIControlled)
            playerSideAgent.SetWatchState(Agent.WatchState.Alarmed);
          playerSideAgent.SetTeam(Mission.Current.PlayerTeam, true);
        }
      }
      foreach (Agent opponentSideAgent in this._opponentSideAgents)
      {
        if (opponentSideAgent.IsHuman)
        {
          if (opponentSideAgent.IsAIControlled)
            opponentSideAgent.SetWatchState(Agent.WatchState.Alarmed);
          opponentSideAgent.SetTeam(Mission.Current.PlayerEnemyTeam, true);
        }
      }
    }

    private void ResetTeamsForFightAndDuel()
    {
      foreach (Agent playerSideAgent in this._playerSideAgents)
      {
        if (playerSideAgent.IsAIControlled)
        {
          playerSideAgent.ResetEnemyCaches();
          playerSideAgent.InvalidateTargetAgent();
          playerSideAgent.InvalidateAIWeaponSelections();
          playerSideAgent.SetWatchState(Agent.WatchState.Patrolling);
        }
        playerSideAgent.SetTeam(new Team(this._playerSideAgentsOldTeamData[playerSideAgent].MBTeam, BattleSideEnum.None, this.Mission), true);
      }
      foreach (Agent opponentSideAgent in this._opponentSideAgents)
      {
        if (opponentSideAgent.IsAIControlled)
        {
          opponentSideAgent.ResetEnemyCaches();
          opponentSideAgent.InvalidateTargetAgent();
          opponentSideAgent.InvalidateAIWeaponSelections();
          opponentSideAgent.SetWatchState(Agent.WatchState.Patrolling);
        }
        opponentSideAgent.SetTeam(new Team(this._opponentSideAgentsOldTeamData[opponentSideAgent].MBTeam, BattleSideEnum.None, this.Mission), true);
      }
    }

    private bool IsAgentInteractionAllowed_AdditionalCondition()
    {
      return this._state != MissionFightHandler.State.Fighting;
    }

    public static Agent GetAgentToSpectate()
    {
      MissionFightHandler current = MissionFightHandler._current;
      if (current._playerSideAgents.Count > 0)
        return current._playerSideAgents[0];
      return current._opponentSideAgents.Count > 0 ? current._opponentSideAgents[0] : (Agent) null;
    }

    private void DropAllWeapons(Agent agent)
    {
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
      {
        if (!agent.Equipment[equipmentIndex].IsEmpty)
          agent.DropItem(equipmentIndex);
      }
    }

    private void ResetScriptedBehaviors()
    {
      foreach (Agent playerSideAgent in this._playerSideAgents)
      {
        if (playerSideAgent.IsActive() && playerSideAgent.GetComponent<CampaignAgentComponent>().AgentNavigator != null)
          playerSideAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<AlarmedBehaviorGroup>().DisableScriptedBehavior();
      }
      foreach (Agent opponentSideAgent in this._opponentSideAgents)
      {
        if (opponentSideAgent.IsActive() && opponentSideAgent.GetComponent<CampaignAgentComponent>().AgentNavigator != null)
          opponentSideAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<AlarmedBehaviorGroup>().DisableScriptedBehavior();
      }
    }

    public void EndFight()
    {
      this.ResetTeamsForFightAndDuel();
      this._state = MissionFightHandler.State.FightEnded;
      foreach (Agent playerSideAgent in this._playerSideAgents)
      {
        playerSideAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
        playerSideAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
      }
      foreach (Agent opponentSideAgent in this._opponentSideAgents)
      {
        opponentSideAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
        opponentSideAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
      }
      this._playerSideAgents.Clear();
      this._opponentSideAgents.Clear();
      if (Mission.Current.MainAgent != null)
        Mission.Current.MainAgent.IsItemUseDisabled = false;
      if (this._oldMissionMode == MissionMode.Conversation && !Campaign.Current.ConversationManager.IsConversationFlowActive)
        this._oldMissionMode = MissionMode.StartUp;
      Mission.Current.SetMissionMode(this._oldMissionMode, false);
      if (MissionFightHandler._onFightEnd == null)
        return;
      MissionFightHandler._onFightEnd(this._isPlayerSideWon);
      MissionFightHandler._onFightEnd = (MissionFightHandler.OnFightEndDelegate) null;
    }

    public bool IsThereActiveFight() => this._state == MissionFightHandler.State.Fighting;

    public void AddAgentToSide(Agent agent, bool isPlayerSide)
    {
      if (!this.IsThereActiveFight() || this._playerSideAgents.Contains(agent) || this._opponentSideAgents.Contains(agent))
        return;
      if (isPlayerSide)
      {
        agent.SetTeam(Mission.Current.PlayerTeam, true);
        this._playerSideAgents.Add(agent);
      }
      else
      {
        agent.SetTeam(Mission.Current.PlayerEnemyTeam, true);
        this._opponentSideAgents.Add(agent);
      }
    }

    public IEnumerable<Agent> GetDangerSources(Agent ownerAgent)
    {
      if (!(ownerAgent.Character is CharacterObject))
      {
        Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\MissionLogics\\MissionFightHandler.cs", nameof (GetDangerSources), 370);
        return (IEnumerable<Agent>) new List<Agent>();
      }
      if (!this.IsThereActiveFight() || MissionFightHandler.IsAgentAggressive(ownerAgent) || Agent.Main == null)
        return (IEnumerable<Agent>) new List<Agent>();
      return (IEnumerable<Agent>) new List<Agent>()
      {
        Agent.Main
      };
    }

    public static bool IsAgentAggressive(Agent agent)
    {
      CharacterObject character = agent.Character as CharacterObject;
      if (agent.HasWeapon())
        return true;
      if (character == null)
        return false;
      return character.Occupation == Occupation.Mercenary || MissionFightHandler.IsAgentVillian(character) || MissionFightHandler.IsAgentJusticeWarrior(character);
    }

    public static bool IsAgentJusticeWarrior(CharacterObject character)
    {
      return character.Occupation == Occupation.Soldier || character.Occupation == Occupation.Guard || character.Occupation == Occupation.PrisonGuard;
    }

    public static bool IsAgentVillian(CharacterObject character)
    {
      return character.Occupation == Occupation.Gangster || character.Occupation == Occupation.GangLeader || character.Occupation == Occupation.Bandit;
    }

    private enum State
    {
      NoFight,
      Fighting,
      FightEnded,
    }

    public delegate void OnFightEndDelegate(bool isPlayerSideWon);
  }
}
