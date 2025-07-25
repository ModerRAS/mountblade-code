// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.BettingFraudIssueBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues
{
  public class BettingFraudIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency BettingFraudIssueFrequency = IssueBase.IssueFrequency.Rare;
    private const string JoinTournamentMenuId = "menu_town_tournament_join";
    private const string JoinTournamentForBettingFraudQuestMenuId = "menu_town_tournament_join_betting_fraud";
    private const int SettlementSecurityLimit = 50;
    private BettingFraudIssueBehavior.BettingFraudQuest _cachedQuest;

    private static BettingFraudIssueBehavior.BettingFraudQuest Instance
    {
      get
      {
        BettingFraudIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<BettingFraudIssueBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is BettingFraudIssueBehavior.BettingFraudQuest bettingFraudQuest)
          {
            campaignBehavior._cachedQuest = bettingFraudQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (BettingFraudIssueBehavior.BettingFraudQuest) null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.CheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenu("menu_town_tournament_join_betting_fraud", "{=5Adr6toM}{MENU_TEXT}", new OnInitDelegate(this.game_menu_tournament_join_on_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      gameStarter.AddGameMenuOption("menu_town_tournament_join_betting_fraud", "mno_tournament_event_1", "{=es0Y3Bxc}Join", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Mission;
        args.OptionQuestData = GameMenuOption.IssueQuestFlags.ActiveIssue;
        return true;
      }), new GameMenuOption.OnConsequenceDelegate(this.game_menu_tournament_join_current_game_on_consequence));
      gameStarter.AddGameMenuOption("menu_town_tournament_join_betting_fraud", "mno_tournament_leave", "{=3sRdGQou}Leave", (GameMenuOption.OnConditionDelegate) (args =>
      {
        args.optionLeaveType = GameMenuOption.LeaveType.Leave;
        return true;
      }), (GameMenuOption.OnConsequenceDelegate) (args => GameMenu.SwitchToMenu("town_arena")), true);
    }

    private void game_menu_tournament_join_on_init(MenuCallbackArgs args)
    {
      TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
      tournamentGame.UpdateTournamentPrize(true);
      GameTexts.SetVariable("MENU_TEXT", tournamentGame.GetMenuText());
    }

    private void game_menu_tournament_join_current_game_on_consequence(MenuCallbackArgs args)
    {
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(BettingFraudIssueBehavior.Instance._thug));
    }

    [GameMenuInitializationHandler("menu_town_tournament_join_betting_fraud")]
    private static void game_menu_ui_town_ui_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.Town.WaitMeshName);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void CheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (BettingFraudIssueBehavior.BettingFraudIssue), IssueBase.IssueFrequency.Rare));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (BettingFraudIssueBehavior.BettingFraudIssue), IssueBase.IssueFrequency.Rare));
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return issueGiver.IsGangLeader && issueGiver.CurrentSettlement != null && issueGiver.CurrentSettlement.Town != null && (double) issueGiver.CurrentSettlement.Town.Security < 50.0;
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new BettingFraudIssueBehavior.BettingFraudIssue(issueOwner);
    }

    public class BettingFraudIssue : IssueBase
    {
      private const int NeededTournamentCount = 5;
      private const int IssueDuration = 45;
      private const int MainHeroSkillLimit = 50;
      private const int MainClanRenownLimit = 50;
      private const int RelationLimitWithIssueOwner = -10;
      private const float IssueOwnerPowerPenaltyForIssueEffect = -0.2f;

      internal static void AutoGeneratedStaticCollectObjectsBettingFraudIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          return new TextObject("{=kru5Vpog}Yes. I'm glad to have the chance to talk to you. I keep an eye on the careers of champions like yourself for professional reasons, and I have a proposal that might interest a good fighter like you. Interested?[ib:confident3][if:convo_bemused]");
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=YWXkgDSd}What kind of a partnership are we talking about?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          return new TextObject("{=vLaoZhkF}I follow tournaments, you see, and like to both place and take bets. But of course I need someone who can not only win those tournaments but lose if necessary... if you understand what I mean. Not all the time. That would be too obvious. Here's what I propose. We enter into a partnership for five tournaments. Don't bother memorizing which ones you win and which ones you lose. Before each fight, an associate of my mine will let you know how you should place. Follow my instructions and I promise you will be rewarded handsomely. What do you say?[if:convo_bemused][ib:demure2]");
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=cL9BX7ph}As long as the payment is good, I agree.");
      }

      public override bool IsThereAlternativeSolution => false;

      public override bool IsThereLordSolution => false;

      public override TextObject Title => new TextObject("{=xhVrxgC4}Betting Fraud");

      public override TextObject Description
      {
        get
        {
          TextObject to = new TextObject("{=3j8pV58L}{ISSUE_GIVER.NAME} offers you a deal to fix {TOURNAMENT_COUNT} tournaments and share the profit from the bet winnings.");
          to.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject);
          to.SetTextVariable("TOURNAMENT_COUNT", 5);
          return to;
        }
      }

      public BettingFraudIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(45f))
      {
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.2f : 0.0f;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new BettingFraudIssueBehavior.BettingFraudQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(45f), 0);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Rare;

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueOwner,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        relationHero = (Hero) null;
        skill = (SkillObject) null;
        flag = IssueBase.PreconditionFlags.None;
        if ((double) Clan.PlayerClan.Renown < 50.0)
          flag |= IssueBase.PreconditionFlags.Renown;
        if ((double) issueOwner.GetRelationWithPlayer() < -10.0)
        {
          flag |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueOwner;
        }
        if ((Hero.MainHero.GetSkillValue(DefaultSkills.OneHanded) >= 50 || Hero.MainHero.GetSkillValue(DefaultSkills.TwoHanded) >= 50 || Hero.MainHero.GetSkillValue(DefaultSkills.Polearm) >= 50 || Hero.MainHero.GetSkillValue(DefaultSkills.Bow) >= 50 || Hero.MainHero.GetSkillValue(DefaultSkills.Crossbow) >= 50 ? 1 : (Hero.MainHero.GetSkillValue(DefaultSkills.Throwing) >= 50 ? 1 : 0)) == 0)
        {
          if (Hero.MainHero.GetSkillValue(DefaultSkills.OneHanded) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.OneHanded;
          }
          else if (Hero.MainHero.GetSkillValue(DefaultSkills.TwoHanded) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.TwoHanded;
          }
          else if (Hero.MainHero.GetSkillValue(DefaultSkills.Polearm) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.Polearm;
          }
          else if (Hero.MainHero.GetSkillValue(DefaultSkills.Bow) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.Bow;
          }
          else if (Hero.MainHero.GetSkillValue(DefaultSkills.Crossbow) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.Crossbow;
          }
          else if (Hero.MainHero.GetSkillValue(DefaultSkills.Throwing) < 50)
          {
            flag |= IssueBase.PreconditionFlags.Skill;
            skill = DefaultSkills.Throwing;
          }
        }
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions() => true;

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }
    }

    public class BettingFraudQuest : QuestBase
    {
      private const int TournamentFixCount = 5;
      private const int MinorOffensiveLimit = 2;
      private const int SmallReward = 250;
      private const int BigReward = 2500;
      private const int CounterOfferReward = 4500;
      private const string MaleThug = "betting_fraud_thug_male";
      private const string FemaleThug = "betting_fraud_thug_female";
      [SaveableField(100)]
      private JournalLog _startLog;
      [SaveableField(1)]
      private Hero _counterOfferNotable;
      [SaveableField(10)]
      internal readonly CharacterObject _thug;
      [SaveableField(20)]
      private int _fixedTournamentCount;
      [SaveableField(30)]
      private int _minorOffensiveCount;
      private BettingFraudIssueBehavior.BettingFraudQuest.Directives _currentDirective;
      private BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState _afterTournamentConversationState;
      private bool _counterOfferAccepted;
      private bool _readyToStartTournament;
      private bool _startTournamentEndConversation;
      [SaveableField(40)]
      private bool _counterOfferConversationDone;

      internal static void AutoGeneratedStaticCollectObjectsBettingFraudQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._thug);
        collectedObjects.Add((object) this._startLog);
        collectedObjects.Add((object) this._counterOfferNotable);
      }

      internal static object AutoGeneratedGetMemberValue_thug(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._thug;
      }

      internal static object AutoGeneratedGetMemberValue_startLog(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._startLog;
      }

      internal static object AutoGeneratedGetMemberValue_counterOfferNotable(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._counterOfferNotable;
      }

      internal static object AutoGeneratedGetMemberValue_fixedTournamentCount(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._fixedTournamentCount;
      }

      internal static object AutoGeneratedGetMemberValue_minorOffensiveCount(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._minorOffensiveCount;
      }

      internal static object AutoGeneratedGetMemberValue_counterOfferConversationDone(object o)
      {
        return (object) ((BettingFraudIssueBehavior.BettingFraudQuest) o)._counterOfferConversationDone;
      }

      public override TextObject Title => new TextObject("{=xhVrxgC4}Betting Fraud");

      public override bool IsRemainingTimeHidden => false;

      private TextObject StartLog
      {
        get
        {
          TextObject to = new TextObject("{=6rweIvZS}{QUEST_GIVER.LINK}, a gang leader from {SETTLEMENT} offers you to fix 5 tournaments together and share the profit.\n {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to enter 5 tournaments and follow the instructions given by {?QUEST_GIVER.GENDER}her{?}his{\\?} associate.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          to.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          return to;
        }
      }

      private TextObject CurrentDirectiveLog
      {
        get
        {
          TextObject to = new TextObject("{=dnZekyZI}Directive from {QUEST_GIVER.LINK}: {DIRECTIVE}");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          to.SetTextVariable("DIRECTIVE", this.GetDirectiveText());
          return to;
        }
      }

      private TextObject QuestFailedWithTimeOutLog
      {
        get
        {
          TextObject parent = new TextObject("{=2brAaeFh}You failed to complete tournaments in time. {QUEST_GIVER.LINK} will certainly be disappointed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public BettingFraudQuest(
        string questId,
        Hero questGiver,
        CampaignTime duration,
        int rewardGold)
        : base(questId, questGiver, duration, rewardGold)
      {
        this._counterOfferNotable = (Hero) null;
        this._fixedTournamentCount = 0;
        this._minorOffensiveCount = 0;
        this._counterOfferAccepted = false;
        this._readyToStartTournament = false;
        this._startTournamentEndConversation = false;
        this._counterOfferConversationDone = false;
        this._currentDirective = BettingFraudIssueBehavior.BettingFraudQuest.Directives.None;
        this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.None;
        this._thug = MBObjectManager.Instance.GetObject<CharacterObject>((double) MBRandom.RandomFloat > 0.5 ? "betting_fraud_thug_male" : "betting_fraud_thug_female");
        this._startLog = (JournalLog) null;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      protected override void InitializeQuestOnGameLoad() => this.SetDialogs();

      protected override void HourlyTick()
      {
      }

      private void SelectCounterOfferNotable(Settlement settlement)
      {
        this._counterOfferNotable = settlement.Notables.GetRandomElement<Hero>();
      }

      private void IncreaseMinorOffensive()
      {
        ++this._minorOffensiveCount;
        this._currentDirective = BettingFraudIssueBehavior.BettingFraudQuest.Directives.None;
        if (this._minorOffensiveCount >= 2)
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.SecondMinorOffense;
        else
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MinorOffense;
      }

      private void IncreaseFixedTournamentCount()
      {
        ++this._fixedTournamentCount;
        this._startLog.UpdateCurrentProgress(this._fixedTournamentCount);
        this._currentDirective = BettingFraudIssueBehavior.BettingFraudQuest.Directives.None;
        if (this._fixedTournamentCount >= 5)
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.BigReward;
        else
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.SmallReward;
      }

      private void SetCurrentDirective()
      {
        this._currentDirective = (double) MBRandom.RandomFloat <= 0.33000001311302185 ? BettingFraudIssueBehavior.BettingFraudQuest.Directives.LoseAt3RdRound : ((double) MBRandom.RandomFloat < 0.5 ? BettingFraudIssueBehavior.BettingFraudQuest.Directives.LoseAt4ThRound : BettingFraudIssueBehavior.BettingFraudQuest.Directives.WinTheTournament);
        this.AddLog(this.CurrentDirectiveLog);
      }

      private void StartTournamentMission()
      {
        TournamentGame tournamentGame = Campaign.Current.TournamentManager.GetTournamentGame(Settlement.CurrentSettlement.Town);
        GameMenu.SwitchToMenu("town");
        tournamentGame.PrepareForTournamentGame(true);
        Campaign.Current.TournamentManager.OnPlayerJoinTournament(tournamentGame.GetType(), Settlement.CurrentSettlement);
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.PlayerEliminatedFromTournament.AddNonSerializedListener((object) this, new Action<int, Town>(this.OnPlayerEliminatedFromTournament));
        CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinished));
        CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
      }

      private void OnPlayerEliminatedFromTournament(int round, Town town)
      {
        this._startTournamentEndConversation = true;
        if ((BettingFraudIssueBehavior.BettingFraudQuest.Directives) round == this._currentDirective)
          this.IncreaseFixedTournamentCount();
        else if ((BettingFraudIssueBehavior.BettingFraudQuest.Directives) round < this._currentDirective)
        {
          this.IncreaseMinorOffensive();
        }
        else
        {
          if ((BettingFraudIssueBehavior.BettingFraudQuest.Directives) round <= this._currentDirective)
            return;
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MajorOffense;
        }
      }

      private void OnTournamentFinished(
        CharacterObject winner,
        MBReadOnlyList<CharacterObject> participants,
        Town town,
        ItemObject prize)
      {
        if (!participants.Contains(CharacterObject.PlayerCharacter) || this._currentDirective == BettingFraudIssueBehavior.BettingFraudQuest.Directives.None)
          return;
        this._startTournamentEndConversation = true;
        if (this._currentDirective == BettingFraudIssueBehavior.BettingFraudQuest.Directives.WinTheTournament)
        {
          if (winner == CharacterObject.PlayerCharacter)
            this.IncreaseFixedTournamentCount();
          else
            this.IncreaseMinorOffensive();
        }
        else
        {
          if (winner != CharacterObject.PlayerCharacter)
            return;
          this._afterTournamentConversationState = BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MajorOffense;
        }
      }

      private void OnGameMenuOpened(MenuCallbackArgs args)
      {
        if (args.MenuContext.GameMenu.StringId == "menu_town_tournament_join")
          GameMenu.SwitchToMenu("menu_town_tournament_join_betting_fraud");
        if (args.MenuContext.GameMenu.StringId == "menu_town_tournament_join_betting_fraud")
        {
          if (this._readyToStartTournament)
          {
            if (this._fixedTournamentCount == 4 && !this._counterOfferConversationDone && this._counterOfferNotable != null && this._currentDirective != BettingFraudIssueBehavior.BettingFraudQuest.Directives.WinTheTournament)
            {
              CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(this._counterOfferNotable.CharacterObject));
            }
            else
            {
              this.StartTournamentMission();
              this._readyToStartTournament = false;
            }
          }
          if (this._fixedTournamentCount == 4 && (this._counterOfferNotable == null || this._counterOfferNotable.CurrentSettlement != Settlement.CurrentSettlement))
            this.SelectCounterOfferNotable(Settlement.CurrentSettlement);
        }
        if (!this._startTournamentEndConversation)
          return;
        CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(this._thug));
      }

      protected override void OnTimedOut()
      {
        base.OnTimedOut();
        this.PlayerDidNotCompleteTournaments();
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = this.GetOfferDialogFlow();
        this.DiscussDialogFlow = this.GetDiscussDialogFlow();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogWithThugStart(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogWithThugEnd(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCounterOfferDialog(), (object) this);
      }

      private DialogFlow GetOfferDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=sp52g5AQ}Very good, very good. Try to enter five tournaments over the next 45 days or so. Right before the fight you'll hear from my associate how far I want you to go in the rankings before you lose.[if:convo_delighted][ib:hip]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).NpcLine(new TextObject("{=ADIYnC4u}Now, I know you can't win every fight, so if you underperform once or twice, I'd understand. But if you lose every time, or worse, if you overperform, well, then I'll be a bit angry.[if:convo_nonchalant][ib:normal2]")).NpcLine(new TextObject("{=1hOPCf8I}But I'm sure you won't disappoint me. Enjoy your riches![if:convo_focused_happy][ib:confident]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.OfferDialogFlowConsequence)).CloseDialog();
      }

      private void OfferDialogFlowConsequence()
      {
        this.StartQuest();
        this._startLog = this.AddDiscreteLog(this.StartLog, new TextObject("{=dLfWFa61}Fix 5 Tournaments"), 0, 5);
      }

      private DialogFlow GetDiscussDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=!}{RESPONSE_TEXT}")).Condition(new ConversationSentence.OnConditionDelegate(this.DiscussDialogCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=abLgPWzf}I will continue to honor our deal. Do not forget to do your end, that's all.")).BeginNpcOptions().NpcOption(new TextObject("{=ZLPEsMUx}Well, there are tournament happening in {NEARBY_TOURNAMENTS_LIST} right now. You can go there and do the job. Your denars will be waiting for you."), new ConversationSentence.OnConditionDelegate(this.NpcTournamentLocationCondition)).CloseDialog().NpcDefaultOption("{=sUfSCLQx}Sadly, I've heard no news of an upcoming tournament. I am sure one will be held before too long.").CloseDialog().EndNpcOptions().CloseDialog().PlayerOption(new TextObject("{=XUS5wNsD}I feel like I do all the job and you get your denars.")).BeginNpcOptions().NpcOption(new TextObject("{=ZLPEsMUx}Well, there are tournament happening in {NEARBY_TOURNAMENTS_LIST} right now. You can go there and do the job. Your denars will be waiting for you."), new ConversationSentence.OnConditionDelegate(this.NpcTournamentLocationCondition)).CloseDialog().NpcDefaultOption("{=sUfSCLQx}Sadly, I've heard no news of an upcoming tournament. I am sure one will be held before too long.").CloseDialog().EndNpcOptions().CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private bool DiscussDialogCondition()
      {
        int num = Hero.OneToOneConversationHero == this.QuestGiver ? 1 : 0;
        if (num == 0)
          return num != 0;
        if (this._minorOffensiveCount > 0)
        {
          MBTextManager.SetTextVariable("RESPONSE_TEXT", new TextObject("{=7SPwGYvf}I had expected better of you. But even the best can fail sometimes. Just make sure it does not happen again.[if:convo_bored][ib:closed2] "), false);
          return num != 0;
        }
        MBTextManager.SetTextVariable("RESPONSE_TEXT", new TextObject("{=vo0uhUsZ}I have high hopes for you, friend. Just follow my directives and we will be rich.[if:convo_relaxed_happy][ib:demure2]"), false);
        return num != 0;
      }

      private bool NpcTournamentLocationCondition()
      {
        List<Town> list = Town.AllTowns.Where<Town>((Func<Town, bool>) (x => Campaign.Current.TournamentManager.GetTournamentGame(x) != null && x != Settlement.CurrentSettlement.Town)).ToList<Town>().OrderBy<Town, float>((Func<Town, float>) (x => x.Settlement.Position2D.DistanceSquared(Settlement.CurrentSettlement.Position2D))).ToList<Town>();
        if (list.Count <= 0)
          return false;
        MBTextManager.SetTextVariable("NEARBY_TOURNAMENTS_LIST", list[0].Name, false);
        return true;
      }

      private DialogFlow GetDialogWithThugStart()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=!}{GREETING_LINE}")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogWithThugStartCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=!}{POSITIVE_OPTION}")).Condition(new ConversationSentence.OnConditionDelegate(this.PositiveOptionCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PositiveOptionConsequences)).CloseDialog().PlayerOption(new TextObject("{=!}{NEGATIVE_OPTION}")).Condition(new ConversationSentence.OnConditionDelegate(this.NegativeOptionCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.NegativeOptionConsequence)).CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private bool DialogWithThugStartCondition()
      {
        int num = CharacterObject.OneToOneConversationCharacter != this._thug ? 0 : (!this._startTournamentEndConversation ? 1 : 0);
        if (num == 0)
          return num != 0;
        this.SetCurrentDirective();
        if (this._fixedTournamentCount < 2)
        {
          TextObject textObject = new TextObject("{=xYu4yVRU}Hey there friend. So... You don't need to know my name, but suffice to say that we're both friends of {QUEST_GIVER.LINK}. Here's {?QUEST_GIVER.GENDER}her{?}his{\\?} message for you: {DIRECTIVE}.[ib:confident][if:convo_nonchalant]");
          textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          textObject.SetTextVariable("DIRECTIVE", this.GetDirectiveText());
          MBTextManager.SetTextVariable("GREETING_LINE", textObject, false);
          return num != 0;
        }
        if (this._fixedTournamentCount < 4)
        {
          TextObject text = new TextObject("{=cQE9tQOy}My friend! Good to see you. You did very well in that last fight. People definitely won't be expecting you to \"{DIRECTIVE}\". What a surprise that would be. Well, I should not keep you from your tournament. You know what to do.[if:convo_happy][ib:closed2]");
          text.SetTextVariable("DIRECTIVE", this.GetDirectiveText());
          MBTextManager.SetTextVariable("GREETING_LINE", text, false);
          return num != 0;
        }
        TextObject text1 = new TextObject("{=RVLPQ4rm}My friend. I am almost sad that these meetings are going to come to an end. Well, a deal is a deal. I won't beat around the bush. Here's your final message: {DIRECTIVE}. I wish you luck, right up until the moment that you have to go down.[if:convo_mocking_teasing][ib:closed]");
        text1.SetTextVariable("DIRECTIVE", this.GetDirectiveText());
        MBTextManager.SetTextVariable("GREETING_LINE", text1, false);
        return num != 0;
      }

      private bool PositiveOptionCondition()
      {
        if (this._fixedTournamentCount < 2)
          MBTextManager.SetTextVariable("POSITIVE_OPTION", new TextObject("{=PrUauabl}As long as the payment is as we talked, you got nothing to worry about."), false);
        else if (this._fixedTournamentCount < 4)
          MBTextManager.SetTextVariable("POSITIVE_OPTION", new TextObject("{=TKRsPVMU}Yes, I did. Be around when the tournament is over."), false);
        else
          MBTextManager.SetTextVariable("POSITIVE_OPTION", new TextObject("{=26XPQw2v}I will miss this little deal we had. See you at the end"), false);
        return true;
      }

      private void PositiveOptionConsequences() => this._readyToStartTournament = true;

      private bool NegativeOptionCondition()
      {
        int num = this._fixedTournamentCount >= 4 ? 1 : 0;
        if (num == 0)
          return num != 0;
        MBTextManager.SetTextVariable("NEGATIVE_OPTION", new TextObject("{=vapdvRQO}This deal was a mistake. We will not talk again after this last tournament."), false);
        return num != 0;
      }

      private void NegativeOptionConsequence() => this._readyToStartTournament = true;

      private TextObject GetDirectiveText()
      {
        if (this._currentDirective == BettingFraudIssueBehavior.BettingFraudQuest.Directives.LoseAt3RdRound)
          return new TextObject("{=aHlcBLYB}Lose this tournament at 3rd round");
        if (this._currentDirective == BettingFraudIssueBehavior.BettingFraudQuest.Directives.LoseAt4ThRound)
          return new TextObject("{=hc1mnqOx}Lose this tournament at 4th round");
        return this._currentDirective == BettingFraudIssueBehavior.BettingFraudQuest.Directives.WinTheTournament ? new TextObject("{=hl4pTsaO}Win this tournament") : TextObject.Empty;
      }

      private DialogFlow GetDialogWithThugEnd()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=!}{GREETING_LINE}")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogWithThugEndCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.DialogWithThugEndConsequence)).CloseDialog();
      }

      private bool DialogWithThugEndCondition()
      {
        bool flag = CharacterObject.OneToOneConversationCharacter == this._thug && this._startTournamentEndConversation;
        if (flag)
        {
          TextObject textObject = TextObject.Empty;
          switch (this._afterTournamentConversationState)
          {
            case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.SmallReward:
              textObject = new TextObject("{=ZM8t4ZW2}We are very impressed, my friend. Here is the payment as promised. I hope we can continue this profitable partnership. See you at the next tournament.[if:convo_happy][ib:demure]");
              GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, 250);
              break;
            case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.BigReward:
              textObject = new TextObject("{=9vOZWY25}What an exciting result! I will definitely miss these tournaments. Well, maybe after some time goes by and memories get a little hazy we can continue. Here is the last payment. Very well deserved.[if:convo_happy][ib:demure]");
              break;
            case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MinorOffense:
              textObject = new TextObject("{=d8bGHJnZ}This was not we were expecting. We lost some money. Well, Lady Fortune always casts her ballot too in these contests. But try to reassure us that this was her plan, and not yours, eh?[if:convo_grave][ib:closed2]");
              break;
            case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.SecondMinorOffense:
              textObject = new TextObject("{=bNAG2t8S}Well, my friend, either you're playing us false or you're just not very good at this. Either way, {QUEST_GIVER.LINK} wishes to tell you that {?QUEST_GIVER.GENDER}her{?}his{\\?} association with you is over.[if:convo_predatory][ib:closed2]");
              textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
              break;
            case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MajorOffense:
              textObject = new TextObject("{=Lyqx3NYE}Well... What happened back there... That wasn't bad luck or incompetence. {QUEST_GIVER.LINK} trusted in you and {?QUEST_GIVER.GENDER}She{?}He{\\?} doesn't take well to betrayal.[if:convo_angry][ib:warrior]");
              textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
              break;
            default:
              Debug.FailedAssert("After tournament conversation state is not set!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Issues\\BettingFraudIssueBehavior.cs", nameof (DialogWithThugEndCondition), 722);
              break;
          }
          MBTextManager.SetTextVariable("GREETING_LINE", textObject, false);
        }
        return flag;
      }

      private void DialogWithThugEndConsequence()
      {
        this._startTournamentEndConversation = false;
        switch (this._afterTournamentConversationState)
        {
          case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.BigReward:
            this.MainHeroSuccessfullyFixedTournaments();
            break;
          case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.SecondMinorOffense:
            this.MainHeroFailToFixTournaments();
            break;
          case BettingFraudIssueBehavior.BettingFraudQuest.AfterTournamentConversationState.MajorOffense:
            if (this._counterOfferAccepted)
            {
              this.MainHeroAcceptsCounterOffer();
              break;
            }
            this.MainHeroChooseNotToFixTournaments();
            break;
        }
      }

      private DialogFlow GetCounterOfferDialog()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=bUfBHSsz}Hold on a moment, friend. I need to talk to you.[ib:aggressive]")).Condition(new ConversationSentence.OnConditionDelegate(this.CounterOfferConversationStartCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.CounterOfferConversationStartConsequence)).PlayerLine(new TextObject("{=PZfR7hEK}What do you want? I have a tournament to prepare for.")).NpcLine(new TextObject("{=GN9F316V}Oh of course you do. {QUEST_GIVER.LINK}'s people have been running around placing bets - we know all about your arrangement, you see. And let me tell you something: as these arrangements go, {QUEST_GIVER.LINK} is getting you cheap. Do you want to see real money? Win this tournament and I will pay you what you're worth. And isn't it better to win than to lose?[if:convo_mocking_aristocratic][ib:confident2]")).Condition(new ConversationSentence.OnConditionDelegate(this.AccusationCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=MacG8ikN}I will think about it.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.CounterOfferAcceptedConsequence)).CloseDialog().PlayerOption(new TextObject("{=bT279pk9}I have no idea what you talking about. Be on your way, friend.")).CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private bool CounterOfferConversationStartCondition()
      {
        return this._counterOfferNotable != null && CharacterObject.OneToOneConversationCharacter == this._counterOfferNotable.CharacterObject;
      }

      private void CounterOfferConversationStartConsequence()
      {
        this._counterOfferConversationDone = true;
      }

      private bool AccusationCondition()
      {
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        return true;
      }

      private void CounterOfferAcceptedConsequence() => this._counterOfferAccepted = true;

      private void MainHeroSuccessfullyFixedTournaments()
      {
        TextObject textObject = new TextObject("{=aCA83avL}You have placed in the tournaments as {QUEST_GIVER.LINK} wished.");
        textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        this.AddLog(textObject);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, 2500);
        Clan.PlayerClan.AddRenown(2f);
        this.QuestGiver.AddPower(10f);
        this.QuestGiver.CurrentSettlement.Town.Security += -20f;
        this.RelationshipChangeWithQuestGiver = 5;
        this.CompleteQuestWithSuccess();
      }

      private void MainHeroFailToFixTournaments()
      {
        TextObject textObject = new TextObject("{=ETbToaZC}You have failed to place in the tournaments as {QUEST_GIVER.LINK} wished.");
        textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        this.AddLog(textObject);
        this.QuestGiver.AddPower(-10f);
        this.QuestGiver.CurrentSettlement.Town.Security += 10f;
        this.RelationshipChangeWithQuestGiver = -5;
        this.CompleteQuestWithFail();
      }

      private void MainHeroChooseNotToFixTournaments()
      {
        TextObject textObject = new TextObject("{=52smwnzz}You have chosen not to place in the tournaments as {QUEST_GIVER.LINK} wished.");
        textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        this.AddLog(textObject);
        this.QuestGiver.AddPower(-15f);
        this.QuestGiver.CurrentSettlement.Town.Security += 15f;
        this.RelationshipChangeWithQuestGiver = -10;
        this.CompleteQuestWithFail();
      }

      private void MainHeroAcceptsCounterOffer()
      {
        TextObject textObject = new TextObject("{=nb0wqaGA}You have made a deal with {NOTABLE.LINK} to betray {QUEST_GIVER.LINK}.");
        textObject.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        textObject.SetCharacterProperties("NOTABLE", this._counterOfferNotable.CharacterObject);
        this.AddLog(textObject);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, 4500);
        this.QuestGiver.AddPower(-15f);
        this.QuestGiver.CurrentSettlement.Town.Security += 15f;
        ChangeRelationAction.ApplyPlayerRelation(this._counterOfferNotable, 2);
        this.RelationshipChangeWithQuestGiver = -10;
        this.CompleteQuestWithFail();
      }

      private void PlayerDidNotCompleteTournaments()
      {
        this.AddLog(this.QuestFailedWithTimeOutLog);
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -5);
      }

      private enum Directives
      {
        None = 0,
        LoseAt3RdRound = 2,
        LoseAt4ThRound = 3,
        WinTheTournament = 4,
      }

      private enum AfterTournamentConversationState
      {
        None,
        SmallReward,
        BigReward,
        MinorOffense,
        SecondMinorOffense,
        MajorOffense,
      }
    }

    public class BettingFraudIssueTypeDefiner : SaveableTypeDefiner
    {
      public BettingFraudIssueTypeDefiner()
        : base(600327)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (BettingFraudIssueBehavior.BettingFraudIssue), 1);
        this.AddClassDefinition(typeof (BettingFraudIssueBehavior.BettingFraudQuest), 2);
      }
    }
  }
}
