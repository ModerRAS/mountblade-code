// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.RuralNotableInnAndOutIssueBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using SandBox.CampaignBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace SandBox.Issues
{
  public class RuralNotableInnAndOutIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency RuralNotableInnAndOutIssueFrequency = IssueBase.IssueFrequency.Common;
    private const float IssueDuration = 30f;
    private const float QuestDuration = 14f;

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return (issueGiver.IsRuralNotable || issueGiver.IsHeadman) && issueGiver.CurrentSettlement.Village != null && issueGiver.CurrentSettlement.Village.Bound.IsTown && issueGiver.GetTraitLevel(DefaultTraits.Mercy) + issueGiver.GetTraitLevel(DefaultTraits.Honor) < 0 && Campaign.Current.GetCampaignBehavior<BoardGameCampaignBehavior>() != null && issueGiver.CurrentSettlement.Village.Bound.Culture.BoardGame != CultureObject.BoardGameType.None;
    }

    public void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssue), IssueBase.IssueFrequency.Common));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssue), IssueBase.IssueFrequency.Common));
    }

    private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssue(issueOwner);
    }

    public class RuralNotableInnAndOutIssueTypeDefiner : SaveableTypeDefiner
    {
      public RuralNotableInnAndOutIssueTypeDefiner()
        : base(585900)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssue), 1);
        this.AddClassDefinition(typeof (RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssueQuest), 2);
      }
    }

    public class RuralNotableInnAndOutIssue : IssueBase
    {
      private const int CompanionSkillLimit = 120;
      private const int QuestMoneyLimit = 2000;
      private const int AlternativeSolutionGoldCost = 1000;
      private CultureObject.BoardGameType _boardGameType;
      private Settlement _targetSettlement;

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
      }

      protected override bool IssueQuestCanBeDuplicated => false;

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 1 + MathF.Ceiling(3f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 1 + MathF.Ceiling(3f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold => 1000;

      public override TextObject Title => new TextObject("{=uUhtKnfA}Inn and Out");

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=swamqBRq}{ISSUE_OWNER.NAME} wants you to beat the game host");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject briefByIssueGiver = new TextObject("{=T0zupcGB}Ah yes... It is a bit embarrassing to mention, [ib:nervous][if:convo_nervous]but... Well, when I am in town, I often have a drink at the inn and perhaps play a round of {GAME_TYPE} or two. Normally I play for low stakes but let's just say that last time the wine went to my head, and I lost something I couldn't afford to lose.");
          briefByIssueGiver.SetTextVariable("GAME_TYPE", GameTexts.FindText("str_boardgame_name", this._boardGameType.ToString()));
          return briefByIssueGiver;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=h2tMadtI}I've heard that story before. What did you lose?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=LD4tGYCA}It's a deed to a plot of farmland. Not a big or valuable plot,[ib:normal][if:convo_disbelief] mind you, but I'd rather not have to explain to my men why they won't be sowing it this year. You can find the man who took it from me at the tavern in {TARGET_SETTLEMENT}. They call him the \"Game Host\". Just be straight about what you're doing. He's in no position to work the land. I don't imagine that he'll turn down a chance to make more money off of it. Bring it back and {REWARD}{GOLD_ICON} is yours.");
          explanationByIssueGiver.SetTextVariable("REWARD", this.RewardGold);
          explanationByIssueGiver.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          explanationByIssueGiver.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.Name);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=urCXu9Fc}Well, I could try and buy it from him, but I would not really prefer that.[if:convo_innocent_smile] I would be the joke of the tavern for months to come... If you choose to do that, I can only offer {REWARD}{GOLD_ICON} to compensate for your payment. If you have a man with a knack for such games he might do the trick.");
          explanationByIssueGiver.SetTextVariable("REWARD", this.RewardGold);
          explanationByIssueGiver.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get
        {
          return new TextObject("{=KMThnMbt}I'll go to the tavern and win it back the same way you lost it.");
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject parent = new TextObject("{=QdKWaabR}Worry not {ISSUE_OWNER.NAME}, my men will be back with your deed in no time.");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=1yEyUHJe}I really hope your men can get my deed back. [if:convo_excited]On my father's name, I will never gamble again.");
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=kiaN39yb}Thank you, {PLAYER.NAME}. I'm sure your companion will be persuasive.[if:convo_relaxed_happy]");
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=MIxzaqzi}{QUEST_GIVER.LINK} told you that he lost a land deed in a wager in {TARGET_CITY}. He needs to buy it back, and he wants your companions to intimidate the seller into offering a reasonable price. You asked {COMPANION.LINK} to take {TROOP_COUNT} of your men to go and take care of it. They should report back to you in {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("TARGET_CITY", this._targetSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          parent.SetTextVariable("TROOP_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          return parent;
        }
      }

      public RuralNotableInnAndOutIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
        this.InitializeQuestVariables();
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.VillageHearth || issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.1f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Charm) >= hero.GetSkillValue(DefaultSkills.Tactics) ? DefaultSkills.Charm : DefaultSkills.Tactics, 120);
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation) && QuestHelper.CheckGoldForAlternativeSolution(1000, ref explanation);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (500.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.RelationshipChangeWithIssueOwner = 5;
        GainRenownAction.Apply(Hero.MainHero, 5f);
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Loyalty += 5f;
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner -= 5;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Loyalty -= 5f;
      }

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Common;

      public override bool IssueStayAliveConditions()
      {
        BoardGameCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<BoardGameCampaignBehavior>();
        return campaignBehavior != null && !campaignBehavior.WonBoardGamesInOneWeekInSettlement.Contains<Settlement>(this._targetSettlement) && !this.IssueOwner.CurrentSettlement.IsRaided && !this.IssueOwner.CurrentSettlement.IsUnderRaid;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      private void InitializeQuestVariables()
      {
        this._targetSettlement = this.IssueOwner.CurrentSettlement.Village.Bound;
        this._boardGameType = this._targetSettlement.Culture.BoardGame;
      }

      protected override void OnGameLoad() => this.InitializeQuestVariables();

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(14f), this.RewardGold);
      }

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        skill = (SkillObject) null;
        relationHero = (Hero) null;
        flag = IssueBase.PreconditionFlags.None;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flag |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (FactionManager.IsAtWarAgainstFaction(issueGiver.CurrentSettlement.MapFaction, Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        if (Hero.MainHero.Gold < 2000)
          flag |= IssueBase.PreconditionFlags.Money;
        return flag == IssueBase.PreconditionFlags.None;
      }

      internal static void AutoGeneratedStaticCollectObjectsRuralNotableInnAndOutIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }
    }

    public class RuralNotableInnAndOutIssueQuest : QuestBase
    {
      public const int LesserReward = 800;
      private CultureObject.BoardGameType _boardGameType;
      private Settlement _targetSettlement;
      private bool _checkForBoardGameEnd;
      private bool _playerWonTheGame;
      private bool _applyLesserReward;
      [SaveableField(1)]
      private int _tryCount;

      private TextObject _questStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=tirG1BB2}{QUEST_GIVER.LINK} told you that he lost a land deed while playing games in a tavern in {TARGET_SETTLEMENT}. He wants you to go find the game host and win it back for him. You told him that you will take care of the situation yourself.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _successLog
      {
        get
        {
          TextObject parent = new TextObject("{=bvhWLb4C}You defeated the Game Host and got the deed back. {QUEST_GIVER.LINK}.{newline}\"Thank you for resolving this issue so neatly. Please accept these {GOLD}{GOLD_ICON} denars with our gratitude.\"");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("GOLD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject _successWithPayingLog
      {
        get
        {
          TextObject parent = new TextObject("{=TIPxWsYW}You have bought the deed from the game host. {QUEST_GIVER.LINK}.{newline}\"I am happy that I got my land back. I'm not so happy that everyone knows I had to pay for it, but... Anyway, please accept these {GOLD}{GOLD_ICON} denars with my gratitude.\"");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("GOLD", 800);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject _lostLog
      {
        get
        {
          TextObject parent = new TextObject("{=ye4oqBFB}You lost the board game and failed to help {QUEST_GIVER.LINK}. \"Thank you for trying, {PLAYER.NAME}, but I guess I chose the wrong person for the job.\"");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      private TextObject _questCanceledTargetVillageRaided
      {
        get
        {
          TextObject parent = new TextObject("{=YGVTXNrf}{SETTLEMENT} was raided, Your agreement with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _questCanceledWarDeclared
      {
        get
        {
          TextObject canceledWarDeclared = new TextObject("{=cKz1cyuM}Your clan is now at war with {QUEST_GIVER_SETTLEMENT_FACTION}. Quest is canceled.");
          canceledWarDeclared.SetTextVariable("QUEST_GIVER_SETTLEMENT_FACTION", this.QuestGiver.CurrentSettlement.MapFaction.Name);
          return canceledWarDeclared;
        }
      }

      private TextObject _playerDeclaredWarQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=bqeWVVEE}Your actions have started a war with {QUEST_GIVER.LINK}'s faction. {?QUEST_GIVER.GENDER}She{?}He{\\?} cancels your agreement and the quest is a failure.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questCanceledSettlementIsUnderSiege
      {
        get
        {
          TextObject parent = new TextObject("{=b5LdBYpF}{SETTLEMENT} is under siege. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _timeoutLog
      {
        get
        {
          TextObject parent = new TextObject("{=XLy8anVr}You received a message from {QUEST_GIVER.LINK}. \"This may not have seemed like an important task, but I placed my trust in you. I guess I was wrong to do so.\"");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject Title => new TextObject("{=uUhtKnfA}Inn and Out");

      public override bool IsRemainingTimeHidden => false;

      public RuralNotableInnAndOutIssueQuest(
        string questId,
        Hero giverHero,
        CampaignTime duration,
        int rewardGold)
        : base(questId, giverHero, duration, rewardGold)
      {
        this.InitializeQuestVariables();
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      private void InitializeQuestVariables()
      {
        this._targetSettlement = this.QuestGiver.CurrentSettlement.Village.Bound;
        this._boardGameType = this._targetSettlement.Culture.BoardGame;
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this._questStartLog);
        this.AddTrackedObject((ITrackableCampaignObject) this._targetSettlement);
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.InitializeQuestVariables();
        this.SetDialogs();
        if (Campaign.Current.GetCampaignBehavior<BoardGameCampaignBehavior>() != null)
          return;
        this.CompleteQuestWithCancel();
      }

      protected override void HourlyTick()
      {
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.OnPlayerBoardGameOverEvent.AddNonSerializedListener((object) this, new Action<Hero, BoardGameHelper.BoardGameState>(this.OnBoardGameEnd));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeStarted));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
        CampaignEvents.VillageBeingRaided.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageBeingRaided));
        CampaignEvents.LocationCharactersSimulatedEvent.AddNonSerializedListener((object) this, new Action(this.OnLocationCharactersSimulated));
      }

      private void OnLocationCharactersSimulated()
      {
        if (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement != this._targetSettlement || !(Campaign.Current.GameMenuManager.MenuLocations.First<Location>().StringId == "tavern"))
          return;
        foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
        {
          LocationCharacter locationCharacter = LocationComplex.Current.GetLocationWithId("tavern").GetLocationCharacter(agent.Origin);
          if (locationCharacter != null && locationCharacter.Character.Occupation == Occupation.TavernGameHost)
            locationCharacter.IsVisualTracked = true;
        }
      }

      private void OnMapEventStarted(
        MapEvent mapEvent,
        PartyBase attackerParty,
        PartyBase defenderParty)
      {
        if (!QuestHelper.CheckMinorMajorCoercion((QuestBase) this, mapEvent, attackerParty))
          return;
        QuestHelper.ApplyGenericMinorMajorCoercionConsequences((QuestBase) this, mapEvent);
      }

      private void OnVillageBeingRaided(Village village)
      {
        if (village != this.QuestGiver.CurrentSettlement.Village)
          return;
        this.CompleteQuestWithCancel(this._questCanceledTargetVillageRaided);
      }

      private void OnBoardGameEnd(Hero opposingHero, BoardGameHelper.BoardGameState state)
      {
        if (!this._checkForBoardGameEnd)
          return;
        this._playerWonTheGame = state == BoardGameHelper.BoardGameState.Win;
      }

      private void OnSiegeStarted(SiegeEvent siegeEvent)
      {
        if (siegeEvent.BesiegedSettlement != this._targetSettlement)
          return;
        this.CompleteQuestWithCancel(this._questCanceledSettlementIsUnderSiege);
      }

      protected override void SetDialogs()
      {
        TextObject npcText = new TextObject("{=I6amLvVE}Good, good. That's the best way to do these things. [if:convo_normal]Go to {TARGET_SETTLEMENT}, find this game host and wipe the smirk off of his face.");
        npcText.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.Name);
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(npcText).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=HGRWs0zE}Have you met the man who took my deed? Did you get it back?[if:convo_astonished]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).BeginPlayerOptions().PlayerOption(new TextObject("{=uJPAYUU7}I will be on my way soon enough.")).NpcLine(new TextObject("{=MOmePlJQ}Could you hurry this along? I don't want him to find another buyer.[if:convo_pondering] Thank you.")).CloseDialog().PlayerOption(new TextObject("{=azVhRGik}I am waiting for the right moment.")).NpcLine(new TextObject("{=bRMLn0jj}Well, if he wanders off to another town, or gets his throat slit,[if:convo_pondering] or loses the deed, that would be the wrong moment, now wouldn't it?")).CloseDialog().EndPlayerOptions();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetGameHostDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetGameHostDialogueAfterFirstGame(), (object) this);
      }

      private DialogFlow GetGameHostDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=dzWioKRa}Hello there, are you looking for a friendly match? A wager perhaps?[if:convo_mocking_aristocratic]").Condition((ConversationSentence.OnConditionDelegate) (() => this.TavernHostDialogCondition(true))).PlayerLine(new TextObject("{=eOle8pYT}You won a deed of land from my associate. I'm here to win it back.")).NpcLine("{=bEipgE5E}Ah, yes, these are the most interesting kinds of games, aren't they? [if:convo_excited]I won't deny myself the pleasure but clearly that deed is worth more to him than just the value of the land. I'll wager the deed, but you need to put up 1000 denars.").BeginPlayerOptions().PlayerOption("{=XvkSbY6N}I see your wager. Let's play.").Condition((ConversationSentence.OnConditionDelegate) (() => Hero.MainHero.Gold >= 1000)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.StartBoardGame)).CloseDialog().PlayerOption("{=89b5ao7P}As of now, I do not have 1000 denars to afford on gambling. I may get back to you once I get the required amount.").Condition((ConversationSentence.OnConditionDelegate) (() => Hero.MainHero.Gold < 1000)).NpcLine(new TextObject("{=ppi6eVos}As you wish.")).CloseDialog().PlayerOption("{=WrnvRayQ}Let's just save ourselves some trouble, and I'll just pay you that amount.").ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckPlayerHasEnoughDenarsClickableCondition)).NpcLine("{=pa3RY39w}Sure. I'm happy to turn paper into silver... 1000 denars it is.[if:convo_evil_smile]").Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerPaid1000QuestSuccess)).CloseDialog().PlayerOption("{=BSeplVwe}That's too much. I will be back later.").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetGameHostDialogueAfterFirstGame()
      {
        return DialogFlow.CreateDialogFlow("start", 125).BeginNpcOptions().NpcOption(new TextObject("{=dyhZUHao}Well, I thought you were here to be sheared, [if:convo_shocked]but it looks like the sheep bites back. Very well, nicely played, here's your man's land back."), (ConversationSentence.OnConditionDelegate) (() => this._playerWonTheGame && this.TavernHostDialogCondition())).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerWonTheBoardGame)).CloseDialog().NpcOption("{=TdnD29Ax}Ah! You almost had me! Maybe you just weren't paying attention. [if:convo_mocking_teasing]Care to put another 1000 denars on the table and have another go?", (ConversationSentence.OnConditionDelegate) (() => !this._playerWonTheGame && this._tryCount < 2 && this.TavernHostDialogCondition())).BeginPlayerOptions().PlayerOption("{=fiMZ696A}Yes, I'll play again.").ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.CheckPlayerHasEnoughDenarsClickableCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.StartBoardGame)).CloseDialog().PlayerOption("{=zlFSIvD5}No, no. I know a trap when I see one. You win. Good-bye.").NpcLine(new TextObject("{=ppi6eVos}As you wish.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerFailAfterBoardGame)).CloseDialog().EndPlayerOptions().NpcOption("{=hkNrC5d3}That was fun, but I've learned not to inflict too great a humiliation on those who carry a sword.[if:convo_merry] I'll take my winnings and enjoy them now. Good-bye to you!", (ConversationSentence.OnConditionDelegate) (() => this._tryCount >= 2 && this.TavernHostDialogCondition())).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerFailAfterBoardGame)).CloseDialog().EndNpcOptions();
      }

      private bool CheckPlayerHasEnoughDenarsClickableCondition(out TextObject explanation)
      {
        if (Hero.MainHero.Gold >= 1000)
        {
          explanation = TextObject.Empty;
          return true;
        }
        explanation = new TextObject("{=AMlaYbJv}You don't have 1000 denars.");
        return false;
      }

      private bool TavernHostDialogCondition(bool isInitialDialogue = false)
      {
        if (this._checkForBoardGameEnd && isInitialDialogue || Settlement.CurrentSettlement != this._targetSettlement || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.TavernGameHost || LocationComplex.Current?.GetLocationWithId("tavern") == null)
          return false;
        Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().DetectOpposingAgent();
        return Mission.Current.GetMissionBehavior<MissionBoardGameLogic>().CheckIfBothSidesAreSitting();
      }

      private void PlayerPaid1000QuestSuccess()
      {
        this.AddLog(this._successWithPayingLog);
        this._applyLesserReward = true;
        GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, 1000);
        this.CompleteQuestWithSuccess();
      }

      protected override void OnFinalize()
      {
        if (Mission.Current == null)
          return;
        foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
        {
          Location locationWithId = LocationComplex.Current.GetLocationWithId("tavern");
          if (locationWithId != null)
          {
            LocationCharacter locationCharacter = locationWithId.GetLocationCharacter(agent.Origin);
            if (locationCharacter != null && locationCharacter.Character.Occupation == Occupation.TavernGameHost)
              locationCharacter.IsVisualTracked = false;
          }
        }
      }

      private void ApplySuccessRewards()
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._applyLesserReward ? 800 : this.RewardGold);
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, 5);
        GainRenownAction.Apply(Hero.MainHero, 1f);
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Loyalty += 5f;
      }

      protected override void OnCompleteWithSuccess() => this.ApplySuccessRewards();

      private void StartBoardGame()
      {
        MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
        Campaign.Current.GetCampaignBehavior<BoardGameCampaignBehavior>().SetBetAmount(1000);
        missionBehavior.DetectOpposingAgent();
        missionBehavior.SetCurrentDifficulty(BoardGameHelper.AIDifficulty.Normal);
        missionBehavior.SetBoardGame(this._boardGameType);
        missionBehavior.StartBoardGame();
        this._checkForBoardGameEnd = true;
        ++this._tryCount;
      }

      private void PlayerWonTheBoardGame()
      {
        this.AddLog(this._successLog);
        this.CompleteQuestWithSuccess();
      }

      private void PlayerFailAfterBoardGame()
      {
        this.AddLog(this._lostLog);
        this.RelationshipChangeWithQuestGiver = -5;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Loyalty -= 5f;
        this.CompleteQuestWithFail();
      }

      private void OnClanChangedKingdom(
        Clan clan,
        Kingdom oldKingdom,
        Kingdom newKingdom,
        ChangeKingdomAction.ChangeKingdomActionDetail detail,
        bool showNotification = true)
      {
        if (!this.QuestGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          return;
        this.CompleteQuestWithCancel(this._questCanceledWarDeclared);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._questCanceledWarDeclared);
      }

      public override GameMenuOption.IssueQuestFlags IsLocationTrackedByQuest(Location location)
      {
        return PlayerEncounter.LocationEncounter.Settlement == this._targetSettlement && location.StringId == "tavern" ? GameMenuOption.IssueQuestFlags.ActiveIssue : GameMenuOption.IssueQuestFlags.None;
      }

      protected override void OnTimedOut()
      {
        this.RelationshipChangeWithQuestGiver = -5;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Loyalty -= 5f;
        this.AddLog(this._timeoutLog);
      }

      internal static void AutoGeneratedStaticCollectObjectsRuralNotableInnAndOutIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValue_tryCount(object o)
      {
        return (object) ((RuralNotableInnAndOutIssueBehavior.RuralNotableInnAndOutIssueQuest) o)._tryCount;
      }
    }
  }
}
