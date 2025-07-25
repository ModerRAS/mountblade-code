// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.CampaignMissionComponent
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class CampaignMissionComponent : MissionLogic, ICampaignMission
  {
    private MissionState _state;
    private SoundEvent _soundEvent;
    private Agent _currentAgent;
    private bool _isMainAgentAnimationSet;
    private readonly Dictionary<Agent, int> _agentSoundEvents = new Dictionary<Agent, int>();
    private readonly List<CampaignMissionComponent.AgentConversationState> _conversationAgents = new List<CampaignMissionComponent.AgentConversationState>();

    public GameState State => (GameState) this._state;

    public IMissionTroopSupplier AgentSupplier { get; set; }

    public Location Location { get; set; }

    public Alley LastVisitedAlley { get; set; }

    MissionMode ICampaignMission.Mode => this.Mission.Mode;

    void ICampaignMission.SetMissionMode(MissionMode newMode, bool atStart)
    {
      this.Mission.SetMissionMode(newMode, atStart);
    }

    public override void OnAgentCreated(Agent agent)
    {
      base.OnAgentCreated(agent);
      agent.AddComponent((AgentComponent) new CampaignAgentComponent(agent));
      CharacterObject character = (CharacterObject) agent.Character;
      if (character?.HeroObject == null || !character.HeroObject.IsPlayerCompanion)
        return;
      agent.AgentRole = new TextObject("{=kPTp6TPT}({AGENT_ROLE})");
      agent.AgentRole.SetTextVariable("AGENT_ROLE", GameTexts.FindText("str_companion"));
    }

    public override void OnPreDisplayMissionTick(float dt)
    {
      base.OnPreDisplayMissionTick(dt);
      if (this._soundEvent == null || this._soundEvent.IsPlaying())
        return;
      this.RemovePreviousAgentsSoundEvent();
      this._soundEvent.Stop();
      this._soundEvent = (SoundEvent) null;
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      if (Campaign.Current == null)
        return;
      CampaignEventDispatcher.Instance.MissionTick(dt);
    }

    protected override void OnObjectDisabled(DestructableComponent missionObject)
    {
      SiegeWeapon firstScriptOfType = missionObject.GameEntity.GetFirstScriptOfType<SiegeWeapon>();
      if (firstScriptOfType != null && Campaign.Current != null && Campaign.Current.GameMode == CampaignGameMode.Campaign)
      {
        CampaignSiegeStateHandler missionBehavior = Mission.Current.GetMissionBehavior<CampaignSiegeStateHandler>();
        if (missionBehavior != null && missionBehavior.IsSallyOut)
        {
          ISiegeEventSide siegeEventSide = missionBehavior.Settlement.SiegeEvent.GetSiegeEventSide(firstScriptOfType.Side);
          siegeEventSide.SiegeEvent.BreakSiegeEngine(siegeEventSide, firstScriptOfType.GetSiegeEngineType());
        }
      }
      base.OnObjectDisabled(missionObject);
    }

    public override void EarlyStart()
    {
      this._state = Game.Current.GameStateManager.ActiveState as MissionState;
    }

    public override void OnCreated()
    {
      CampaignMission.Current = (ICampaignMission) this;
      this._isMainAgentAnimationSet = false;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      CampaignEventDispatcher.Instance.OnMissionStarted((IMission) this.Mission);
    }

    public override void AfterStart()
    {
      base.AfterStart();
      CampaignEventDispatcher.Instance.OnAfterMissionStarted((IMission) this.Mission);
    }

    private static void SimulateRunningAwayAgents()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        PartyBase ownerParty = agent.GetComponent<CampaignAgentComponent>().OwnerParty;
        if (ownerParty != null && !agent.IsHero && agent.IsRunningAway && (double) MBRandom.RandomFloat < 0.5)
        {
          CharacterObject character = (CharacterObject) agent.Character;
          ownerParty.MemberRoster.AddToCounts(character, -1);
        }
      }
    }

    public override void OnMissionResultReady(MissionResult missionResult)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign || !PlayerEncounter.IsActive || PlayerEncounter.Battle == null)
        return;
      if (missionResult.PlayerVictory)
        PlayerEncounter.SetPlayerVictorious();
      else if (missionResult.BattleState == BattleState.DefenderPullBack)
        PlayerEncounter.SetPlayerSiegeContinueWithDefenderPullBack();
      MissionResult missionResult1 = this.Mission.MissionResult;
      PlayerEncounter.CampaignBattleResult = CampaignBattleResult.GetResult(missionResult1 != null ? missionResult1.BattleState : BattleState.None, missionResult.EnemyRetreated);
    }

    protected override void OnEndMission()
    {
      if (Campaign.Current.GameMode == CampaignGameMode.Campaign)
      {
        if (PlayerEncounter.Battle != null && (PlayerEncounter.Battle.IsSiegeAssault || PlayerEncounter.Battle.IsSiegeAmbush) && (Mission.Current.MissionTeamAIType == Mission.MissionTeamAITypeEnum.Siege || Mission.Current.MissionTeamAIType == Mission.MissionTeamAITypeEnum.SallyOut))
        {
          IEnumerable<IMissionSiegeWeapon> defenderSiegeWeapons;
          IEnumerable<IMissionSiegeWeapon> attackerSiegeWeapons;
          Mission.Current.GetMissionBehavior<MissionSiegeEnginesLogic>().GetMissionSiegeWeapons(out defenderSiegeWeapons, out attackerSiegeWeapons);
          PlayerEncounter.Battle.GetLeaderParty(BattleSideEnum.Attacker).SiegeEvent.SetSiegeEngineStatesAfterSiegeMission(attackerSiegeWeapons, defenderSiegeWeapons);
        }
        if (this._soundEvent != null)
        {
          this.RemovePreviousAgentsSoundEvent();
          this._soundEvent.Stop();
          this._soundEvent = (SoundEvent) null;
        }
      }
      CampaignEventDispatcher.Instance.OnMissionEnded((IMission) this.Mission);
      CampaignMission.Current = (ICampaignMission) null;
    }

    void ICampaignMission.OnCloseEncounterMenu()
    {
      if (this.Mission.Mode != MissionMode.Conversation)
        return;
      Campaign.Current.ConversationManager.EndConversation();
      if (!(Game.Current.GameStateManager.ActiveState is MissionState))
        return;
      Game.Current.GameStateManager.PopState();
    }

    bool ICampaignMission.AgentLookingAtAgent(IAgent agent1, IAgent agent2)
    {
      return this.Mission.AgentLookingAtAgent((Agent) agent1, (Agent) agent2);
    }

    void ICampaignMission.OnCharacterLocationChanged(
      LocationCharacter locationCharacter,
      Location fromLocation,
      Location toLocation)
    {
      MissionAgentHandler missionBehavior = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      if (toLocation == null)
        missionBehavior.FadeoutExitingLocationCharacter(locationCharacter);
      else
        missionBehavior.SpawnEnteringLocationCharacter(locationCharacter, fromLocation);
    }

    void ICampaignMission.OnProcessSentence()
    {
    }

    void ICampaignMission.OnConversationContinue()
    {
    }

    bool ICampaignMission.CheckIfAgentCanFollow(IAgent agent)
    {
      AgentNavigator agentNavigator = ((Agent) agent).GetComponent<CampaignAgentComponent>().AgentNavigator;
      if (agentNavigator == null)
        return false;
      DailyBehaviorGroup behaviorGroup = agentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      return behaviorGroup != null && behaviorGroup.GetBehavior<FollowAgentBehavior>() == null;
    }

    void ICampaignMission.AddAgentFollowing(IAgent agent)
    {
      Agent agent1 = (Agent) agent;
      if (agent1.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return;
      DailyBehaviorGroup behaviorGroup = agent1.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      behaviorGroup.AddBehavior<FollowAgentBehavior>();
      behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
    }

    bool ICampaignMission.CheckIfAgentCanUnFollow(IAgent agent)
    {
      Agent agent1 = (Agent) agent;
      if (agent1.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return false;
      DailyBehaviorGroup behaviorGroup = agent1.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      return behaviorGroup != null && behaviorGroup.GetBehavior<FollowAgentBehavior>() != null;
    }

    void ICampaignMission.RemoveAgentFollowing(IAgent agent)
    {
      Agent agent1 = (Agent) agent;
      if (agent1.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return;
      agent1.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().RemoveBehavior<FollowAgentBehavior>();
    }

    void ICampaignMission.EndMission() => this.Mission.EndMission();

    private string GetIdleAnimationId(Agent agent, string selectedId, bool startingConversation)
    {
      switch (agent.GetCurrentActionType(0))
      {
        case Agent.ActionCodeType.Sit:
          return "sit";
        case Agent.ActionCodeType.SitOnTheFloor:
          return "sit_floor";
        case Agent.ActionCodeType.SitOnAThrone:
          return "sit_throne";
        default:
          if (agent.MountAgent != null)
          {
            (string, ConversationAnimData) riderAndMountAgents = this.GetAnimDataForRiderAndMountAgents(agent);
            this.SetMountAgentAnimation((IAgent) agent.MountAgent, riderAndMountAgents.Item2, startingConversation);
            return riderAndMountAgents.Item1;
          }
          if (agent == Agent.Main)
            return "normal";
          return startingConversation ? CharacterHelper.GetStandingBodyIdle((CharacterObject) agent.Character) : selectedId;
      }
    }

    private (string, ConversationAnimData) GetAnimDataForRiderAndMountAgents(Agent riderAgent)
    {
      bool flag1 = false;
      string str = "";
      bool flag2 = false;
      ConversationAnimData conversationAnimData = (ConversationAnimData) null;
      foreach (KeyValuePair<string, ConversationAnimData> conversationAnim in Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims)
      {
        if (conversationAnim.Value != null)
        {
          if (conversationAnim.Value.FamilyType == riderAgent.MountAgent.Monster.FamilyType)
          {
            conversationAnimData = conversationAnim.Value;
            flag2 = true;
          }
          else if (conversationAnim.Value.FamilyType == riderAgent.Monster.FamilyType && conversationAnim.Value.MountFamilyType == riderAgent.MountAgent.Monster.FamilyType)
          {
            str = conversationAnim.Key;
            flag1 = true;
          }
          if (flag2 & flag1)
            break;
        }
      }
      return (str, conversationAnimData);
    }

    private int GetActionChannelNoForConversation(Agent agent)
    {
      return agent.IsSitting() || agent.MountAgent == null ? 0 : 1;
    }

    private void SetMountAgentAnimation(
      IAgent agent,
      ConversationAnimData mountAnimData,
      bool startingConversation)
    {
      Agent agent1 = (Agent) agent;
      if (mountAnimData == null)
        return;
      if (startingConversation)
        this._conversationAgents.Add(new CampaignMissionComponent.AgentConversationState(agent1));
      ActionIndexCache action = string.IsNullOrEmpty(mountAnimData.IdleAnimStart) ? ActionIndexCache.Create(mountAnimData.IdleAnimLoop) : ActionIndexCache.Create(mountAnimData.IdleAnimStart);
      this.SetConversationAgentActionAtChannel(agent1, action, this.GetActionChannelNoForConversation(agent1), false, false);
    }

    void ICampaignMission.OnConversationStart(IAgent iAgent, bool setActionsInstantly)
    {
      ((Agent) iAgent).AgentVisuals.SetAgentLodZeroOrMax(true);
      Agent.Main.AgentVisuals.SetAgentLodZeroOrMax(true);
      if (!this._isMainAgentAnimationSet)
      {
        this._isMainAgentAnimationSet = true;
        this.StartConversationAnimations((IAgent) Agent.Main, setActionsInstantly);
      }
      this.StartConversationAnimations(iAgent, setActionsInstantly);
    }

    private void StartConversationAnimations(IAgent iAgent, bool setActionsInstantly)
    {
      Agent agent = (Agent) iAgent;
      this._conversationAgents.Add(new CampaignMissionComponent.AgentConversationState(agent));
      string idleAnimationId = this.GetIdleAnimationId(agent, "", true);
      string defaultFaceIdle = CharacterHelper.GetDefaultFaceIdle((CharacterObject) agent.Character);
      int noForConversation = this.GetActionChannelNoForConversation(agent);
      ConversationAnimData conversationAnimData;
      if (Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims.TryGetValue(idleAnimationId, out conversationAnimData))
      {
        ActionIndexCache action = string.IsNullOrEmpty(conversationAnimData.IdleAnimStart) ? ActionIndexCache.Create(conversationAnimData.IdleAnimLoop) : ActionIndexCache.Create(conversationAnimData.IdleAnimStart);
        this.SetConversationAgentActionAtChannel(agent, action, noForConversation, setActionsInstantly, false);
        this.SetFaceIdle(agent, defaultFaceIdle);
      }
      if (!agent.IsUsingGameObject)
        return;
      agent.CurrentlyUsedGameObject.OnUserConversationStart();
    }

    private void EndConversationAnimations(IAgent iAgent)
    {
      Agent agent = (Agent) iAgent;
      if (agent.IsHuman)
      {
        agent.SetAgentFacialAnimation(Agent.FacialAnimChannel.High, "", false);
        agent.SetAgentFacialAnimation(Agent.FacialAnimChannel.Mid, "", false);
        if (agent.HasMount)
          this.EndConversationAnimations((IAgent) agent.MountAgent);
      }
      int index1 = -1;
      int count = this._conversationAgents.Count;
      for (int index2 = 0; index2 < count; ++index2)
      {
        CampaignMissionComponent.AgentConversationState conversationAgent = this._conversationAgents[index2];
        if (conversationAgent.Agent == agent)
        {
          for (int channelNo = 0; channelNo < 2; ++channelNo)
          {
            if (conversationAgent.IsChannelModified(channelNo))
              agent.SetActionChannel(channelNo, ActionIndexCache.act_none, additionalFlags: (ulong) agent.GetCurrentActionPriority(channelNo));
          }
          if (agent.IsUsingGameObject)
            agent.CurrentlyUsedGameObject.OnUserConversationEnd();
          index1 = index2;
          break;
        }
      }
      if (index1 == -1)
        return;
      this._conversationAgents.RemoveAt(index1);
    }

    void ICampaignMission.OnConversationPlay(
      string idleActionId,
      string idleFaceAnimId,
      string reactionId,
      string reactionFaceAnimId,
      string soundPath)
    {
      this._currentAgent = (Agent) Campaign.Current.ConversationManager.SpeakerAgent;
      this.RemovePreviousAgentsSoundEvent();
      this.StopPreviousSound();
      string idleAnimationId = this.GetIdleAnimationId(this._currentAgent, idleActionId, false);
      ConversationAnimData conversationAnimData;
      if (!string.IsNullOrEmpty(idleAnimationId) && Campaign.Current.ConversationManager.ConversationAnimationManager.ConversationAnims.TryGetValue(idleAnimationId, out conversationAnimData))
      {
        if (!string.IsNullOrEmpty(reactionId))
          this.SetConversationAgentActionAtChannel(this._currentAgent, ActionIndexCache.Create(conversationAnimData.Reactions[reactionId]), 0, false, true);
        else
          this.SetConversationAgentActionAtChannel(this._currentAgent, string.IsNullOrEmpty(conversationAnimData.IdleAnimStart) ? ActionIndexCache.Create(conversationAnimData.IdleAnimLoop) : ActionIndexCache.Create(conversationAnimData.IdleAnimStart), this.GetActionChannelNoForConversation(this._currentAgent), false, false);
      }
      if (!string.IsNullOrEmpty(reactionFaceAnimId))
        this._currentAgent.SetAgentFacialAnimation(Agent.FacialAnimChannel.Mid, reactionFaceAnimId, false);
      else if (!string.IsNullOrEmpty(idleFaceAnimId))
        this.SetFaceIdle(this._currentAgent, idleFaceAnimId);
      else
        this._currentAgent.SetAgentFacialAnimation(Agent.FacialAnimChannel.High, "", false);
      if (string.IsNullOrEmpty(soundPath))
        return;
      this.PlayConversationSoundEvent(soundPath);
    }

    private string GetRhubarbXmlPathFromSoundPath(string soundPath)
    {
      int length = soundPath.LastIndexOf('.');
      return soundPath.Substring(0, length) + ".xml";
    }

    public void PlayConversationSoundEvent(string soundPath)
    {
      Vec3 position = ConversationMission.OneToOneConversationAgent.Position;
      Debug.Print("Conversation sound playing: " + soundPath + ", position: " + (object) position, 5);
      this._soundEvent = SoundEvent.CreateEventFromExternalFile("event:/Extra/voiceover", soundPath, Mission.Current.Scene);
      this._soundEvent.SetPosition(position);
      this._soundEvent.Play();
      int soundId = this._soundEvent.GetSoundId();
      this._agentSoundEvents.Add(this._currentAgent, soundId);
      this._currentAgent.AgentVisuals.StartRhubarbRecord(this.GetRhubarbXmlPathFromSoundPath(soundPath), soundId);
    }

    private void StopPreviousSound()
    {
      if (this._soundEvent == null)
        return;
      this._soundEvent.Stop();
      this._soundEvent = (SoundEvent) null;
    }

    private void RemovePreviousAgentsSoundEvent()
    {
      if (this._soundEvent == null || !this._agentSoundEvents.ContainsValue(this._soundEvent.GetSoundId()))
        return;
      Agent key = (Agent) null;
      foreach (KeyValuePair<Agent, int> agentSoundEvent in this._agentSoundEvents)
      {
        if (agentSoundEvent.Value == this._soundEvent.GetSoundId())
          key = agentSoundEvent.Key;
      }
      this._agentSoundEvents.Remove(key);
      key.AgentVisuals.StartRhubarbRecord("", -1);
    }

    void ICampaignMission.OnConversationEnd(IAgent iAgent)
    {
      Agent agent = (Agent) iAgent;
      agent.ResetLookAgent();
      agent.DisableLookToPointOfInterest();
      Agent.Main.ResetLookAgent();
      Agent.Main.DisableLookToPointOfInterest();
      if (Settlement.CurrentSettlement != null && !this.Mission.HasMissionBehavior<ConversationMissionLogic>())
      {
        agent.AgentVisuals.SetAgentLodZeroOrMax(true);
        Agent.Main.AgentVisuals.SetAgentLodZeroOrMax(true);
      }
      if (this._soundEvent != null)
      {
        this.RemovePreviousAgentsSoundEvent();
        this._soundEvent.Stop();
      }
      if (this._isMainAgentAnimationSet)
      {
        this._isMainAgentAnimationSet = false;
        this.EndConversationAnimations((IAgent) Agent.Main);
      }
      this.EndConversationAnimations(iAgent);
      this._soundEvent = (SoundEvent) null;
    }

    private void SetFaceIdle(Agent agent, string idleFaceAnimId)
    {
      agent.SetAgentFacialAnimation(Agent.FacialAnimChannel.Mid, idleFaceAnimId, true);
    }

    private void SetConversationAgentActionAtChannel(
      Agent agent,
      ActionIndexCache action,
      int channelNo,
      bool setInstantly,
      bool forceFaceMorphRestart)
    {
      agent.SetActionChannel(channelNo, action, blendInPeriod: setInstantly ? 0.0f : -0.2f, forceFaceMorphRestart: forceFaceMorphRestart);
      int count = this._conversationAgents.Count;
      for (int index = 0; index < count; ++index)
      {
        if (this._conversationAgents[index].Agent == agent)
        {
          this._conversationAgents[index].SetChannelModified(channelNo);
          break;
        }
      }
    }

    private class AgentConversationState
    {
      private StackArray.StackArray2Bool _actionAtChannelModified;

      public Agent Agent { get; private set; }

      public AgentConversationState(Agent agent)
      {
        this.Agent = agent;
        this._actionAtChannelModified = new StackArray.StackArray2Bool();
        this._actionAtChannelModified[0] = false;
        this._actionAtChannelModified[1] = false;
      }

      public bool IsChannelModified(int channelNo) => this._actionAtChannelModified[channelNo];

      public void SetChannelModified(int channelNo)
      {
        this._actionAtChannelModified[channelNo] = true;
      }
    }
  }
}
