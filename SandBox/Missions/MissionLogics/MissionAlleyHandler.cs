// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionAlleyHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionAlleyHandler : MissionLogic
  {
    private const float ConstantForInitiatingConversation = 5f;
    private static Vec3 _fightPosition = Vec3.Invalid;
    private Dictionary<Agent, AgentNavigator> _rivalThugAgentsAndAgentNavigators;
    private const int DistanceForEndingAlleyFight = 20;
    private const int GuardAgentSafeZone = 10;
    private static List<Agent> _guardAgents;
    private bool _conversationTriggeredWithRivalThug;
    private MissionFightHandler _missionFightHandler;

    public override void OnRenderingStarted()
    {
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsHuman)
        {
          CampaignAgentComponent component = agent.GetComponent<CampaignAgentComponent>();
          if (component?.AgentNavigator?.MemberOfAlley != null && component.AgentNavigator.MemberOfAlley.Owner != Hero.MainHero && !this._rivalThugAgentsAndAgentNavigators.ContainsKey(agent))
            this._rivalThugAgentsAndAgentNavigators.Add(agent, component.AgentNavigator);
        }
      }
    }

    public override void OnMissionTick(float dt)
    {
      if (Mission.Current.Mode == MissionMode.Battle)
      {
        this.EndFightIfPlayerIsFarAwayOrNearGuard();
      }
      else
      {
        if ((double) MBRandom.RandomFloat >= (double) dt * 10.0)
          return;
        this.CheckAndTriggerConversationWithRivalThug();
      }
    }

    private void CheckAndTriggerConversationWithRivalThug()
    {
      if (this._conversationTriggeredWithRivalThug || Campaign.Current.ConversationManager.IsConversationFlowActive || Agent.Main == null)
        return;
      foreach (KeyValuePair<Agent, AgentNavigator> andAgentNavigator in this._rivalThugAgentsAndAgentNavigators)
      {
        if (andAgentNavigator.Key.IsActive())
        {
          Agent key = andAgentNavigator.Key;
          if ((double) key.GetTrackDistanceToMainAgent() < 5.0 && andAgentNavigator.Value.CanSeeAgent(Agent.Main))
          {
            Mission.Current.GetMissionBehavior<MissionConversationLogic>().StartConversation(key, false);
            this._conversationTriggeredWithRivalThug = true;
            break;
          }
        }
      }
    }

    public override void AfterStart()
    {
      MissionAlleyHandler._guardAgents = new List<Agent>();
      this._rivalThugAgentsAndAgentNavigators = new Dictionary<Agent, AgentNavigator>();
      MissionAlleyHandler._fightPosition = Vec3.Invalid;
      this._missionFightHandler = Mission.Current.GetMissionBehavior<MissionFightHandler>();
    }

    private void EndFightIfPlayerIsFarAwayOrNearGuard()
    {
      if (Agent.Main == null)
        return;
      bool flag = false;
      foreach (Agent guardAgent in MissionAlleyHandler._guardAgents)
      {
        if ((double) (Agent.Main.Position - guardAgent.Position).Length <= 10.0)
        {
          flag = true;
          break;
        }
      }
      if (MissionAlleyHandler._fightPosition != Vec3.Invalid && (double) (Agent.Main.Position - MissionAlleyHandler._fightPosition).Length >= 20.0)
        flag = true;
      if (!flag)
        return;
      this.EndFight();
    }

    private (bool, string) CanPlayerOccupyTheCurrentAlley()
    {
      TextObject empty = TextObject.Empty;
      if (!Settlement.CurrentSettlement.Alleys.All<Alley>((Func<Alley, bool>) (x => x.Owner != Hero.MainHero)))
        return (false, new TextObject("{=ribkM9dl}You already own another alley in the settlement.").ToString());
      if (!Campaign.Current.Models.AlleyModel.GetClanMembersAndAvailabilityDetailsForLeadingAnAlley(CampaignMission.Current.LastVisitedAlley).Any<(Hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail)>((Func<(Hero, DefaultAlleyModel.AlleyMemberAvailabilityDetail), bool>) (x => x.Item2 == DefaultAlleyModel.AlleyMemberAvailabilityDetail.Available || x.Item2 == DefaultAlleyModel.AlleyMemberAvailabilityDetail.AvailableWithDelay)))
      {
        TextObject textObject = new TextObject("{=hnhKJYbx}You don't have any suitable clan members to assign this alley. ({ROGUERY_SKILL} skill {NEEDED_SKILL_LEVEL} or higher, {TRAIT_NAME} trait {MAX_TRAIT_AMOUNT} or lower)");
        textObject.SetTextVariable("ROGUERY_SKILL", DefaultSkills.Roguery.Name);
        textObject.SetTextVariable("NEEDED_SKILL_LEVEL", 30);
        textObject.SetTextVariable("TRAIT_NAME", DefaultTraits.Mercy.Name);
        textObject.SetTextVariable("MAX_TRAIT_AMOUNT", 0);
        return (false, textObject.ToString());
      }
      if (MobileParty.MainParty.MemberRoster.TotalRegulars >= Campaign.Current.Models.AlleyModel.MinimumTroopCountInPlayerOwnedAlley)
        return (true, (string) null);
      TextObject textObject1 = new TextObject("{=zLnqZdIK}You don't have enough troops to assign this alley. (Needed at least {NEEDED_TROOP_NUMBER})");
      textObject1.SetTextVariable("NEEDED_TROOP_NUMBER", Campaign.Current.Models.AlleyModel.MinimumTroopCountInPlayerOwnedAlley);
      return (false, textObject1.ToString());
    }

    private void EndFight()
    {
      this._missionFightHandler.EndFight();
      foreach (Agent guardAgent in MissionAlleyHandler._guardAgents)
        guardAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<AlarmedBehaviorGroup>().GetBehavior<FightBehavior>().IsActive = false;
      MissionAlleyHandler._guardAgents.Clear();
      Mission.Current.SetMissionMode(MissionMode.StartUp, false);
    }

    private void OnTakeOverTheAlley()
    {
      AlleyHelper.CreateMultiSelectionInquiryForSelectingClanMemberToAlley(CampaignMission.Current.LastVisitedAlley, new Action<List<InquiryElement>>(this.OnCompanionSelectedForNewAlley), new Action<List<InquiryElement>>(this.OnCompanionSelectionCancel));
    }

    private void OnCompanionSelectionCancel(List<InquiryElement> obj) => this.OnLeaveItEmpty();

    private void OnCompanionSelectedForNewAlley(List<InquiryElement> companion)
    {
      CharacterObject identifier = companion.First<InquiryElement>().Identifier as CharacterObject;
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      dummyTroopRoster.AddToCounts(identifier, 1);
      AlleyHelper.OpenScreenForManagingAlley(dummyTroopRoster, new PartyPresentationDoneButtonDelegate(this.OnPartyScreenDoneClicked), new TextObject("{=s8dsW6m0}New Alley"), new PartyPresentationCancelButtonDelegate(this.OnPartyScreenCancel));
    }

    private void OnPartyScreenCancel() => this.OnLeaveItEmpty();

    public override void OnAgentHit(
      Agent affectedAgent,
      Agent affectorAgent,
      in MissionWeapon attackerWeapon,
      in Blow blow,
      in AttackCollisionData attackCollisionData)
    {
      if (!affectedAgent.IsHuman || affectorAgent == null || affectorAgent != Agent.Main || !affectorAgent.IsHuman || affectedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return;
      affectedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>().GetBehavior<TalkBehavior>()?.Disable();
      if (affectedAgent.IsEnemyOf(affectorAgent) || affectedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.MemberOfAlley == null)
        return;
      this.StartCommonAreaBattle(affectedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.MemberOfAlley);
    }

    private bool OnPartyScreenDoneClicked(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty,
      PartyBase rightParty)
    {
      CampaignEventDispatcher.Instance.OnAlleyOccupiedByPlayer(CampaignMission.Current.LastVisitedAlley, leftMemberRoster);
      return true;
    }

    public void StartCommonAreaBattle(Alley alley)
    {
      MissionAlleyHandler._guardAgents.Clear();
      this._conversationTriggeredWithRivalThug = true;
      List<Agent> accompanyingAgents = new List<Agent>();
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        AccompanyingCharacter accompanyingCharacter = PlayerEncounter.LocationEncounter.GetAccompanyingCharacter(LocationComplex.Current.FindCharacter((IAgent) agent));
        CharacterObject character = (CharacterObject) agent.Character;
        if (accompanyingCharacter != null && accompanyingCharacter.IsFollowingPlayerAtMissionStart)
          accompanyingAgents.Add(agent);
        else if (character != null && (character.Occupation == Occupation.Guard || character.Occupation == Occupation.Soldier))
          MissionAlleyHandler._guardAgents.Add(agent);
      }
      List<Agent> list1 = Mission.Current.Agents.Where<Agent>((Func<Agent, bool>) (agent =>
      {
        if (!agent.IsHuman || !agent.Character.IsHero)
          return false;
        return agent.IsPlayerControlled || accompanyingAgents.Contains(agent);
      })).ToList<Agent>();
      List<Agent> list2 = Mission.Current.Agents.Where<Agent>((Func<Agent, bool>) (agent => agent.IsHuman && agent.GetComponent<CampaignAgentComponent>().AgentNavigator != null && agent.GetComponent<CampaignAgentComponent>().AgentNavigator.MemberOfAlley == alley)).ToList<Agent>();
      MissionAlleyHandler._fightPosition = Agent.Main.Position;
      Mission.Current.GetMissionBehavior<MissionFightHandler>().StartCustomFight(list1, list2, false, false, new MissionFightHandler.OnFightEndDelegate(this.OnAlleyFightEnd));
    }

    private void OnLeaveItEmpty()
    {
      CampaignEventDispatcher.Instance.OnAlleyClearedByPlayer(CampaignMission.Current.LastVisitedAlley);
    }

    private void OnAlleyFightEnd(bool isPlayerSideWon)
    {
      if (isPlayerSideWon)
      {
        TextObject textObject1 = new TextObject("{=4QfQBi2k}Alley fight won");
        TextObject textObject2 = new TextObject("{=8SK2BZum}You have cleared an alley which belonged to a gang leader. Now, you can either take it over for your own benefit or leave it empty to help the town. To own an alley, you will need to assign a suitable clan member and some troops to watch over it. This will provide denars to your clan, but also increase your crime rating.");
        TextObject textObject3 = new TextObject("{=qxY2ASqp}Take over the alley");
        TextObject textObject4 = new TextObject("{=jjEzdO0Y}Leave it empty");
        InformationManager.ShowInquiry(new InquiryData(textObject1.ToString(), textObject2.ToString(), true, true, textObject3.ToString(), textObject4.ToString(), new Action(this.OnTakeOverTheAlley), new Action(this.OnLeaveItEmpty), isAffirmativeOptionEnabled: new Func<(bool, string)>(this.CanPlayerOccupyTheCurrentAlley)), true);
      }
      else if (Agent.Main == null || !Agent.Main.IsActive())
      {
        Mission.Current.NextCheckTimeEndMission = 0.0f;
        Campaign.Current.GameMenuManager.SetNextMenu("settlement_player_unconscious");
      }
      MissionAlleyHandler._fightPosition = Vec3.Invalid;
    }
  }
}
