// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.ClanMemberRolesCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation;
using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class ClanMemberRolesCampaignBehavior : CampaignBehaviorBase
  {
    private List<Hero> _isFollowingPlayer = new List<Hero>();
    private Agent _gatherOrderedAgent;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.AddDialogs));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.NewCompanionAdded.AddNonSerializedListener((object) this, new Action<Hero>(this.OnNewCompanionAdded));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.BeforeMissionOpened));
      CampaignEvents.OnHeroJoinedPartyEvent.AddNonSerializedListener((object) this, new Action<Hero, MobileParty>(this.OnHeroJoinedParty));
      CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
      CampaignEvents.OnHeroGetsBusyEvent.AddNonSerializedListener((object) this, new Action<Hero, HeroGetsBusyReasons>(this.OnHeroGetsBusy));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<Hero>>("_isFollowingPlayer", ref this._isFollowingPlayer);
    }

    private static void FollowMainAgent()
    {
      DailyBehaviorGroup behaviorGroup = ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      FollowAgentBehavior followAgentBehavior = behaviorGroup.AddBehavior<FollowAgentBehavior>();
      behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
      followAgentBehavior.SetTargetAgent(Agent.Main);
    }

    public bool IsFollowingPlayer(Hero hero) => this._isFollowingPlayer.Contains(hero);

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddPlayerLine("clan_member_follow", "hero_main_options", "clan_member_follow_me", "{=blqTMwQT}Follow me.", new ConversationSentence.OnConditionDelegate(this.clan_member_follow_me_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("clan_member_dont_follow", "hero_main_options", "clan_member_dont_follow_me", "{=LPtWLajd}You can stop following me now. Thanks.", new ConversationSentence.OnConditionDelegate(this.clan_member_dont_follow_me_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("clan_members_follow", "hero_main_options", "clan_member_gather", "{=PUtbpIFI}Gather all my companions in the settlement and find me.", new ConversationSentence.OnConditionDelegate(this.clan_members_gather_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("clan_members_dont_follow", "hero_main_options", "clan_members_dont_follow_me", "{=FdwZlCCM}All of you can stop following me and return to what you were doing.", new ConversationSentence.OnConditionDelegate(this.clan_members_gather_end_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("clan_member_gather_clan_members_accept", "clan_member_gather", "close_window", "{=KL8tVq8P}I shall do that.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.clan_member_gather_on_consequence));
      campaignGameStarter.AddDialogLine("clan_member_follow_accept", "clan_member_follow_me", "close_window", "{=gm3wqjvi}Lead the way.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.clan_member_follow_me_on_consequence));
      campaignGameStarter.AddDialogLine("clan_member_dont_follow_accept", "clan_member_dont_follow_me", "close_window", "{=akpaap9e}As you wish.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.clan_member_dont_follow_me_on_consequence));
      campaignGameStarter.AddDialogLine("clan_members_dont_follow_accept", "clan_members_dont_follow_me", "close_window", "{=akpaap9e}As you wish.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.clan_members_dont_follow_me_on_consequence));
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (party != MobileParty.MainParty || PlayerEncounter.LocationEncounter == null)
        return;
      PlayerEncounter.LocationEncounter.RemoveAllAccompanyingCharacters();
      this._isFollowingPlayer.Clear();
    }

    private void BeforeMissionOpened()
    {
      if (PlayerEncounter.LocationEncounter == null)
        return;
      foreach (Hero member in this._isFollowingPlayer)
      {
        if (PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(member.CharacterObject) == null)
          this.AddClanMembersAsAccompanyingCharacter(member);
      }
    }

    private void OnHeroJoinedParty(Hero hero, MobileParty mobileParty)
    {
      if (hero.Clan != Clan.PlayerClan || !mobileParty.IsMainParty || mobileParty.CurrentSettlement == null || PlayerEncounter.LocationEncounter == null || !MobileParty.MainParty.IsActive || !mobileParty.CurrentSettlement.IsFortification && !mobileParty.CurrentSettlement.IsVillage || this._isFollowingPlayer.Count != 0)
        return;
      this.UpdateAccompanyingCharacters();
    }

    private void OnMissionEnded(IMission mission) => this._gatherOrderedAgent = (Agent) null;

    private void OnHeroGetsBusy(Hero hero, HeroGetsBusyReasons heroGetsBusyReason)
    {
      if (heroGetsBusyReason != HeroGetsBusyReasons.BecomeCaravanLeader && heroGetsBusyReason != HeroGetsBusyReasons.BecomeAlleyLeader && heroGetsBusyReason != HeroGetsBusyReasons.SolvesIssue)
        return;
      if (Mission.Current != null)
      {
        for (int index = 0; index < Mission.Current.Agents.Count; ++index)
        {
          Agent agent = Mission.Current.Agents[index];
          if (agent.IsHuman && agent.Character.IsHero && ((CharacterObject) agent.Character).HeroObject == hero)
          {
            this.ClearGatherOrderedAgentIfExists(agent);
            if (heroGetsBusyReason == HeroGetsBusyReasons.BecomeAlleyLeader)
            {
              this.AdjustTheBehaviorsOfTheAgent(agent);
              break;
            }
            break;
          }
        }
      }
      if (PlayerEncounter.LocationEncounter == null)
        return;
      this.RemoveAccompanyingHero(hero);
    }

    private void ClearGatherOrderedAgentIfExists(Agent agent)
    {
      if (this._gatherOrderedAgent != agent)
        return;
      this._gatherOrderedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().RemoveBehavior<ScriptBehavior>();
      this._gatherOrderedAgent = (Agent) null;
    }

    private void OnNewCompanionAdded(Hero newCompanion)
    {
      Location location = (Location) null;
      LocationComplex current = LocationComplex.Current;
      if (current != null)
      {
        foreach (Location listOfLocation in current.GetListOfLocations())
        {
          foreach (LocationCharacter character in listOfLocation.GetCharacterList())
          {
            if (character.Character == newCompanion.CharacterObject)
            {
              location = LocationComplex.Current.GetLocationOfCharacter(character);
              break;
            }
          }
        }
      }
      if (current?.GetLocationWithId("center") == null || location != null)
        return;
      AgentData agentData = new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, newCompanion.CharacterObject)).Monster(TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(newCompanion.CharacterObject.Race)).NoHorses(true);
      current.GetLocationWithId("center").AddCharacter(new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), (string) null, true, LocationCharacter.CharacterRelations.Friendly, (string) null, true));
    }

    private void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign || MobileParty.MainParty.CurrentSettlement == null || LocationComplex.Current == null || !settlement.IsTown && !settlement.IsCastle && !settlement.IsVillage)
        return;
      if (mobileParty == null && settlement == MobileParty.MainParty.CurrentSettlement && hero.Clan == Clan.PlayerClan)
      {
        if (!this._isFollowingPlayer.Contains(hero) || hero.PartyBelongedTo != null)
          return;
        this.RemoveAccompanyingHero(hero);
        if (this._isFollowingPlayer.Count != 0)
          return;
        this.UpdateAccompanyingCharacters();
      }
      else
      {
        if (mobileParty != MobileParty.MainParty || !MobileParty.MainParty.IsActive)
          return;
        this.UpdateAccompanyingCharacters();
      }
    }

    private bool clan_member_follow_me_on_condition()
    {
      if (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement.LocationComplex == null || Settlement.CurrentSettlement.IsHideout)
        return false;
      Location location = Settlement.CurrentSettlement.IsVillage ? Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("village_center") : Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
      return Hero.OneToOneConversationHero != null && ConversationMission.OneToOneConversationAgent != null && Hero.OneToOneConversationHero.Clan == Clan.PlayerClan && Hero.OneToOneConversationHero.PartyBelongedTo == MobileParty.MainParty && CampaignMission.Current?.Location == location && ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator != null && !(ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetActiveBehavior() is FollowAgentBehavior);
    }

    private bool clan_member_dont_follow_me_on_condition()
    {
      return ConversationMission.OneToOneConversationAgent != null && Hero.OneToOneConversationHero.Clan == Clan.PlayerClan && Hero.OneToOneConversationHero.PartyBelongedTo == MobileParty.MainParty && ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator != null && ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetActiveBehavior() is FollowAgentBehavior;
    }

    private bool clan_members_gather_on_condition()
    {
      if (GameStateManager.Current.ActiveState is MissionState && this._gatherOrderedAgent == null && Settlement.CurrentSettlement != null)
      {
        InterruptingBehaviorGroup behaviorGroup = ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator?.GetBehaviorGroup<InterruptingBehaviorGroup>();
        if (behaviorGroup != null && behaviorGroup.IsActive)
          return false;
        Agent conversationAgent = ConversationMission.OneToOneConversationAgent;
        CharacterObject conversationCharacter = ConversationMission.OneToOneConversationCharacter;
        if (!conversationCharacter.IsHero || conversationCharacter.HeroObject.Clan != Hero.MainHero.Clan)
          return false;
        foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
        {
          CharacterObject character = (CharacterObject) agent.Character;
          if (agent.IsHuman && agent != conversationAgent && agent != Agent.Main && character.IsHero && character.HeroObject.Clan == Clan.PlayerClan && character.HeroObject.PartyBelongedTo == MobileParty.MainParty)
          {
            AgentNavigator agentNavigator = agent.GetComponent<CampaignAgentComponent>().AgentNavigator;
            if (agentNavigator != null && !(agentNavigator.GetActiveBehavior() is FollowAgentBehavior))
              return true;
          }
        }
      }
      return false;
    }

    private bool clan_members_gather_end_on_condition()
    {
      if (ConversationMission.OneToOneConversationAgent != null && this._gatherOrderedAgent == ConversationMission.OneToOneConversationAgent)
        return !ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>().IsActive;
      if (!this.IsAgentFollowingPlayerAsCompanion(ConversationMission.OneToOneConversationAgent))
        return false;
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (agent != ConversationMission.OneToOneConversationAgent && this.IsAgentFollowingPlayerAsCompanion(agent))
          return true;
      }
      return false;
    }

    private void clan_member_gather_on_consequence()
    {
      this._gatherOrderedAgent = ConversationMission.OneToOneConversationAgent;
      this._gatherOrderedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().AddBehavior<ScriptBehavior>().IsActive = true;
      ScriptBehavior.AddTargetWithDelegate(this._gatherOrderedAgent, new ScriptBehavior.SelectTargetDelegate(this.SelectTarget), new ScriptBehavior.OnTargetReachedDelegate(this.OnTargetReached));
      this._gatherOrderedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>().AddBehavior<FollowAgentBehavior>().IsActive = false;
    }

    private void clan_member_dont_follow_me_on_consequence()
    {
      this.RemoveFollowBehavior(ConversationMission.OneToOneConversationAgent);
    }

    private void clan_members_dont_follow_me_on_consequence()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
        this.RemoveFollowBehavior(agent);
    }

    private void RemoveFollowBehavior(Agent agent)
    {
      this.ClearGatherOrderedAgentIfExists(agent);
      if (!this.IsAgentFollowingPlayerAsCompanion(agent))
        return;
      this.AdjustTheBehaviorsOfTheAgent(agent);
      this.RemoveAccompanyingHero(LocationComplex.Current.FindCharacter((IAgent) agent).Character.HeroObject);
    }

    private void AdjustTheBehaviorsOfTheAgent(Agent agent)
    {
      DailyBehaviorGroup behaviorGroup = agent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      behaviorGroup.RemoveBehavior<FollowAgentBehavior>();
      ScriptBehavior behavior = behaviorGroup.GetBehavior<ScriptBehavior>();
      if (behavior != null)
        behavior.IsActive = true;
      (behaviorGroup.GetBehavior<WalkingBehavior>() ?? behaviorGroup.AddBehavior<WalkingBehavior>()).IsActive = true;
    }

    private void clan_member_follow_me_on_consequence()
    {
      LocationCharacter locationCharacterOfHero = LocationComplex.Current.GetLocationCharacterOfHero(Hero.OneToOneConversationHero);
      if (!this.IsFollowingPlayer(locationCharacterOfHero.Character.HeroObject))
        this._isFollowingPlayer.Add(locationCharacterOfHero.Character.HeroObject);
      this.AddClanMembersAsAccompanyingCharacter(locationCharacterOfHero.Character.HeroObject, locationCharacterOfHero);
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(ClanMemberRolesCampaignBehavior.FollowMainAgent);
    }

    private bool SelectTarget(
      Agent agent,
      ref Agent targetAgent,
      ref UsableMachine targetEntity,
      ref WorldFrame targetFrame)
    {
      if (Agent.Main == null)
        return false;
      Agent agent1 = (Agent) null;
      float num1 = float.MaxValue;
      foreach (Agent agent2 in (List<Agent>) Mission.Current.Agents)
      {
        CharacterObject character = (CharacterObject) agent2.Character;
        CampaignAgentComponent component = agent2.GetComponent<CampaignAgentComponent>();
        if (agent2 != agent && agent2.IsHuman && character.IsHero && character.HeroObject.Clan == Clan.PlayerClan && character.HeroObject.PartyBelongedTo == MobileParty.MainParty && component.AgentNavigator != null && agent2.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehavior<FollowAgentBehavior>() == null)
        {
          float num2 = agent.Position.DistanceSquared(agent2.Position);
          if ((double) num2 < (double) num1)
          {
            num1 = num2;
            agent1 = agent2;
          }
        }
      }
      if (agent1 != null)
      {
        targetAgent = agent1;
        return true;
      }
      DailyBehaviorGroup behaviorGroup = agent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      FollowAgentBehavior behavior1 = behaviorGroup.GetBehavior<FollowAgentBehavior>();
      behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
      behavior1.IsActive = true;
      behavior1.SetTargetAgent(Agent.Main);
      ScriptBehavior behavior2 = behaviorGroup.GetBehavior<ScriptBehavior>();
      if (behavior2 != null)
        behavior2.IsActive = false;
      WalkingBehavior behavior3 = behaviorGroup.GetBehavior<WalkingBehavior>();
      if (behavior3 != null)
        behavior3.IsActive = false;
      LocationCharacter character1 = LocationComplex.Current.FindCharacter((IAgent) agent);
      if (!this.IsFollowingPlayer(character1.Character.HeroObject))
        this._isFollowingPlayer.Add(character1.Character.HeroObject);
      this.AddClanMembersAsAccompanyingCharacter(character1.Character.HeroObject, character1);
      this._gatherOrderedAgent = (Agent) null;
      return false;
    }

    private bool OnTargetReached(
      Agent agent,
      ref Agent targetAgent,
      ref UsableMachine targetEntity,
      ref WorldFrame targetFrame)
    {
      if (Agent.Main == null)
        return false;
      if (targetAgent == null)
        return true;
      DailyBehaviorGroup behaviorGroup = targetAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
      FollowAgentBehavior followAgentBehavior = behaviorGroup.AddBehavior<FollowAgentBehavior>();
      behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
      followAgentBehavior.SetTargetAgent(Agent.Main);
      LocationCharacter character = LocationComplex.Current.FindCharacter((IAgent) targetAgent);
      if (!this.IsFollowingPlayer(character.Character.HeroObject))
      {
        this._isFollowingPlayer.Add(character.Character.HeroObject);
        this.AddClanMembersAsAccompanyingCharacter(character.Character.HeroObject, character);
      }
      targetAgent = (Agent) null;
      return true;
    }

    private void UpdateAccompanyingCharacters()
    {
      this._isFollowingPlayer.Clear();
      PlayerEncounter.LocationEncounter.RemoveAllAccompanyingCharacters();
      bool flag = false;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero)
        {
          Hero heroObject = troopRosterElement.Character.HeroObject;
          if (heroObject != Hero.MainHero && !heroObject.IsPrisoner && !heroObject.IsWounded && (double) heroObject.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && !flag)
          {
            this._isFollowingPlayer.Add(heroObject);
            flag = true;
          }
        }
      }
    }

    private void RemoveAccompanyingHero(Hero hero)
    {
      this._isFollowingPlayer.Remove(hero);
      PlayerEncounter.LocationEncounter?.RemoveAccompanyingCharacter(hero);
    }

    private bool IsAgentFollowingPlayerAsCompanion(Agent agent)
    {
      CharacterObject character = agent?.Character as CharacterObject;
      CampaignAgentComponent component = agent?.GetComponent<CampaignAgentComponent>();
      return agent != null && agent.IsHuman && character != null && character.IsHero && character.HeroObject.Clan == Clan.PlayerClan && character.HeroObject.PartyBelongedTo == MobileParty.MainParty && component.AgentNavigator?.GetActiveBehavior() is FollowAgentBehavior;
    }

    private void AddClanMembersAsAccompanyingCharacter(
      Hero member,
      LocationCharacter locationCharacter = null)
    {
      CharacterObject characterObject = member.CharacterObject;
      if (!characterObject.IsHero || characterObject.HeroObject.IsWounded || !this.IsFollowingPlayer(member))
        return;
      PlayerEncounter.LocationEncounter.AddAccompanyingCharacter(locationCharacter ?? LocationCharacter.CreateBodyguardHero(characterObject.HeroObject, MobileParty.MainParty, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFirstCompanionBehavior)), true);
      AccompanyingCharacter accompanyingCharacter = PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(characterObject);
      accompanyingCharacter.DisallowEntranceToAllLocations();
      accompanyingCharacter.AllowEntranceToLocations((Func<Location, bool>) (x => x == LocationComplex.Current.GetLocationWithId("center") || x == LocationComplex.Current.GetLocationWithId("village_center") || x == LocationComplex.Current.GetLocationWithId("tavern")));
    }
  }
}
