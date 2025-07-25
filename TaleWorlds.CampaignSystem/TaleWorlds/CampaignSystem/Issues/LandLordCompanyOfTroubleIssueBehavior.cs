// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.LandLordCompanyOfTroubleIssueBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues
{
  public class LandLordCompanyOfTroubleIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency LandLordCompanyOfTroubleIssueFrequency = IssueBase.IssueFrequency.Rare;
    private LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest _cachedQuest;
    private const int IssueDuration = 25;

    private static LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest Instance
    {
      get
      {
        LandLordCompanyOfTroubleIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<LandLordCompanyOfTroubleIssueBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest troubleIssueQuest)
          {
            campaignBehavior._cachedQuest = troubleIssueQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenu("company_of_trouble_menu", "", new OnInitDelegate(this.company_of_trouble_menu_on_init));
    }

    private void company_of_trouble_menu_on_init(MenuCallbackArgs args)
    {
      if (LandLordCompanyOfTroubleIssueBehavior.Instance == null)
        return;
      if (LandLordCompanyOfTroubleIssueBehavior.Instance._checkForBattleResults)
      {
        int num = PlayerEncounter.Battle.WinningSide == PlayerEncounter.Battle.PlayerSide ? 1 : 0;
        PlayerEncounter.Finish();
        if (LandLordCompanyOfTroubleIssueBehavior.Instance._companyOfTroubleParty != null && LandLordCompanyOfTroubleIssueBehavior.Instance._companyOfTroubleParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, LandLordCompanyOfTroubleIssueBehavior.Instance._companyOfTroubleParty);
        LandLordCompanyOfTroubleIssueBehavior.Instance._checkForBattleResults = false;
        if (num != 0)
          LandLordCompanyOfTroubleIssueBehavior.Instance.QuestSuccessWithPlayerDefeatedCompany();
        else
          LandLordCompanyOfTroubleIssueBehavior.Instance.QuestFailWithPlayerDefeatedAgainstCompany();
      }
      else if (LandLordCompanyOfTroubleIssueBehavior.Instance._triggerCompanyOfTroubleConversation)
      {
        CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(LandLordCompanyOfTroubleIssueBehavior.Instance._troubleCharacterObject, PartyBase.MainParty));
        LandLordCompanyOfTroubleIssueBehavior.Instance._triggerCompanyOfTroubleConversation = false;
      }
      else if (LandLordCompanyOfTroubleIssueBehavior.Instance._battleWillStart)
      {
        PlayerEncounter.Start();
        PlayerEncounter.Current.SetupFields(PartyBase.MainParty, LandLordCompanyOfTroubleIssueBehavior.Instance._companyOfTroubleParty.Party);
        PlayerEncounter.StartBattle();
        CampaignMission.OpenBattleMission(PlayerEncounter.GetBattleSceneForMapPatch(Campaign.Current.MapSceneWrapper.GetMapPatchAtPosition(MobileParty.MainParty.Position2D)), false);
        LandLordCompanyOfTroubleIssueBehavior.Instance._battleWillStart = false;
        LandLordCompanyOfTroubleIssueBehavior.Instance._checkForBattleResults = true;
      }
      else
      {
        if (!LandLordCompanyOfTroubleIssueBehavior.Instance._companyLeftQuestWillFail)
          return;
        LandLordCompanyOfTroubleIssueBehavior.Instance.CompanyLeftQuestFail();
      }
    }

    public void OnCheckForIssue(Hero hero)
    {
      if (hero.IsLord && hero.Clan != Clan.PlayerClan && hero.PartyBelongedTo != null && !hero.IsMinorFactionHero && hero.GetTraitLevel(DefaultTraits.Mercy) <= 0)
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssue), IssueBase.IssueFrequency.Rare));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssue), IssueBase.IssueFrequency.Rare));
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssue(issueOwner);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class LandLordCompanyOfTroubleIssue : IssueBase
    {
      internal static void AutoGeneratedStaticCollectObjectsLandLordCompanyOfTroubleIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      private int CompanyTroopCount => 5 + (int) ((double) this.IssueDifficultyMultiplier * 30.0);

      public override bool IsThereAlternativeSolution => false;

      public override bool IsThereLordSolution => false;

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          return new TextObject("{=wrpsJM2u}Yes... I hired a band of mercenaries for a campaign some time back. But... normally mercenaries have their own peculiar kind of honor. You pay them, they fight for you, you don't, they go somewhere else. But these ones have made it pretty clear that if I don't keep renewing the contract, they'll turn bandit. I can't afford that right now.[if:convo_thinking][ib:closed]");
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=VlbCFDWu}What do you want from me?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          return new TextObject("{=wxDbPiNH}Well, you have the reputation of being able to manage ruffians. Maybe you can take them off my hands, find some other lord who has more need of them and more denars to pay them. I've paid their contract for a few months. I can give you a small reward and if you can find a buyer, you can transfer the rest of the contract to him and pocket the down payment.[if:convo_innocent_smile]");
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=6bvJSIqh}Yes. I can find a new lord to take them on.");
      }

      public override TextObject Title => new TextObject("{=PV7RHgUl}Company of Trouble");

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=zw7a9eIt}{ISSUE_GIVER.NAME} wants you to take {?ISSUE_GIVER.GENDER}her{?}his{\\?} mercenaries and transfer them to another lord before they cause any trouble.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAsRumorInSettlement
      {
        get
        {
          TextObject parent = new TextObject("{=I022Z9Ub}Heh. {QUEST_GIVER.NAME} got in deeper than {?QUEST_GIVER.GENDER}she{?}he{\\?} could handle with those mercenaries.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public LandLordCompanyOfTroubleIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(25f))
      {
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.ClanInfluence ? -0.1f : 0.0f;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest(questId, this.IssueOwner, CampaignTime.Never, this.CompanyTroopCount);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Rare;

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
        if (Clan.PlayerClan.Tier < 1)
          flag |= IssueBase.PreconditionFlags.ClanTier;
        if (MobileParty.MainParty.MemberRoster.TotalManCount < this.CompanyTroopCount)
          flag |= IssueBase.PreconditionFlags.NotEnoughTroops;
        if (MobileParty.MainParty.MemberRoster.TotalManCount + this.CompanyTroopCount > PartyBase.MainParty.PartySizeLimit)
          flag |= IssueBase.PreconditionFlags.PartySizeLimit;
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions() => this.IssueOwner.Clan != Clan.PlayerClan;

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }
    }

    public class LandLordCompanyOfTroubleIssueQuest : QuestBase
    {
      private const string TroubleCharacterObjectStringId = "company_of_trouble_character";
      private int _companyTroopCount;
      [SaveableField(20)]
      internal MobileParty _companyOfTroubleParty;
      [SaveableField(30)]
      internal bool _battleWillStart;
      internal bool _checkForBattleResults;
      [SaveableField(40)]
      private int _thieveryCount;
      [SaveableField(80)]
      internal bool _triggerCompanyOfTroubleConversation;
      [SaveableField(50)]
      private int _demandGold;
      internal CharacterObject _troubleCharacterObject;
      private PersuasionTask[] _tasks;
      private PersuasionTask _selectedTask;
      private const PersuasionDifficulty Difficulty = PersuasionDifficulty.Hard;
      [SaveableField(70)]
      private List<Hero> _persuationTriedHeroesList;
      internal bool _companyLeftQuestWillFail;

      internal static void AutoGeneratedStaticCollectObjectsLandLordCompanyOfTroubleIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._companyOfTroubleParty);
        collectedObjects.Add((object) this._persuationTriedHeroesList);
      }

      internal static object AutoGeneratedGetMemberValue_companyOfTroubleParty(object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._companyOfTroubleParty;
      }

      internal static object AutoGeneratedGetMemberValue_battleWillStart(object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._battleWillStart;
      }

      internal static object AutoGeneratedGetMemberValue_triggerCompanyOfTroubleConversation(
        object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._triggerCompanyOfTroubleConversation;
      }

      internal static object AutoGeneratedGetMemberValue_thieveryCount(object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._thieveryCount;
      }

      internal static object AutoGeneratedGetMemberValue_demandGold(object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._demandGold;
      }

      internal static object AutoGeneratedGetMemberValue_persuationTriedHeroesList(object o)
      {
        return (object) ((LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest) o)._persuationTriedHeroesList;
      }

      public override bool IsRemainingTimeHidden => true;

      public override TextObject Title => new TextObject("{=PV7RHgUl}Company of Trouble");

      private TextObject _playerStartsQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=8nS3QgD7}{QUEST_GIVER.LINK} is a {?QUEST_GIVER.GENDER}lady{?}lord{\\?} who told you that {?QUEST_GIVER.GENDER}she{?}he{\\?} wants to sell {?QUEST_GIVER.GENDER}her{?}his{\\?} mercenaries to another lord's service. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you sell them for {?QUEST_GIVER.GENDER}her{?}him{\\?} without causing any trouble.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questSuccessPlayerSoldCompany
      {
        get
        {
          TextObject parent = new TextObject("{=34MdCd6u}You have sold the mercenaries to another lord as you promised. {QUEST_GIVER.LINK} is grateful and sends {?QUEST_GIVER.GENDER}her{?}his{\\?} regards.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _allCompanyDiedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=RrTAX7QE}You got the troublesome mercenaries killed off. You get no extra money for the contract, but you did get rid of them as you promised. {QUEST_GIVER.LINK} is grateful and sends {?QUEST_GIVER.GENDER}her{?}his{\\?} regards.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _playerDefeatedAgainstCompany
      {
        get
        {
          return new TextObject("{=7naLQmq1}You have lost the battle against the mercenaries. You have failed to get rid of them as you promised. Now they've turned bandit and are starting to plunder the countryside");
        }
      }

      private TextObject _questFailCompanyLeft
      {
        get
        {
          return new TextObject("{=k9SksaXg}The mercenaries left your party, as you failed to get rid of them as you promised. Now the mercenaries have turned bandit and start to plunder countryside.");
        }
      }

      private TextObject _questCanceledWarDeclared
      {
        get
        {
          TextObject parent = new TextObject("{=ItueKmqd}Your clan is now at war with the {QUEST_GIVER_SETTLEMENT_FACTION}. You contract with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("QUEST_GIVER_SETTLEMENT_FACTION", this.QuestGiver.MapFaction.InformalName);
          return parent;
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

      public LandLordCompanyOfTroubleIssueQuest(
        string questId,
        Hero questGiver,
        CampaignTime duration,
        int companyTroopCount)
        : base(questId, questGiver, duration, 500)
      {
        this._troubleCharacterObject = MBObjectManager.Instance.GetObject<CharacterObject>("company_of_trouble_character");
        this._persuationTriedHeroesList = new List<Hero>();
        this._troubleCharacterObject.SetTransferableInPartyScreen(false);
        this._troubleCharacterObject.SetTransferableInHideouts(false);
        this._companyTroopCount = companyTroopCount;
        this._tasks = new PersuasionTask[3];
        this._battleWillStart = false;
        this._thieveryCount = 0;
        this._demandGold = 0;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this._troubleCharacterObject = MBObjectManager.Instance.GetObject<CharacterObject>("company_of_trouble_character");
        this._troubleCharacterObject.SetTransferableInPartyScreen(false);
        this._troubleCharacterObject.SetTransferableInHideouts(false);
        this._tasks = new PersuasionTask[3];
        this.UpdateCompanyTroopCount();
        this.SetDialogs();
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=T6d7wtJX}Very well. I'll tell them to join your party. Good luck.[if:convo_mocking_aristocratic][ib:hip]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=bWpLYiEg}Did you ever find a way to handle those mercenaries?[if:convo_astonished]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(MapEventHelper.OnConversationEnd))).BeginPlayerOptions().PlayerOption(new TextObject("{=XzK4niIb}I'll find an employer soon.")).NpcLine(new TextObject("{=rOBRabQz}Good. I'm waiting for your good news.[if:convo_mocking_aristocratic]")).CloseDialog().PlayerOption(new TextObject("{=Zb3EdxDT}That kind of lord is hard to find.")).NpcLine(new TextObject("{=yOfrb9Lu}Don't wait too long. These are dangerous men. Be careful.[if:convo_nonchalant]")).CloseDialog().EndPlayerOptions().CloseDialog();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCompanyDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetOtherLordsDialogFlow(), (object) this);
      }

      private DialogFlow GetOtherLordsDialogFlow()
      {
        DialogFlow dialog = DialogFlow.CreateDialogFlow("hero_main_options", 700).BeginPlayerOptions().PlayerOption(new TextObject("{=2E7s4L9R}Do you need mercenaries? I have a contract that I can transfer to you for {DEMAND_GOLD} denars.")).Condition(new ConversationSentence.OnConditionDelegate(this.PersuasionDialogForLordGeneralCondition)).BeginNpcOptions().NpcOption(new TextObject("{=ZR4RJdYS}Hmm, that sounds interesting...[if:convo_thinking]"), new ConversationSentence.OnConditionDelegate(this.PersuasionDialogSpecialCondition)).GotoDialogState("company_of_trouble_persuasion").NpcOption(new TextObject("{=pmrjUNEz}As it happens, I already have a mercenary contract that I wish to sell. So, no thank you.[if:convo_calm_friendly]"), new ConversationSentence.OnConditionDelegate(this.HasSameIssue)).GotoDialogState("hero_main_options").NpcOption(new TextObject("{=bw0hEPN6}You already bought their contract from our clan. Why would I want to buy them back?[if:convo_confused_normal]"), new ConversationSentence.OnConditionDelegate(this.IsSameClanMember)).GotoDialogState("hero_main_options").NpcOption(new TextObject("{=64bH4bUo}No, thank you. But perhaps one of the other lords of our clan would be interested.[if:convo_undecided_closed]"), (ConversationSentence.OnConditionDelegate) (() => !this.HasMobileParty())).GotoDialogState("hero_main_options").NpcOption(new TextObject("{=Zs6L1aBL}I'm sorry. I don't need mercenaries right now.[if:convo_normal]"), (ConversationSentence.OnConditionDelegate) null).GotoDialogState("hero_main_options").EndNpcOptions().EndPlayerOptions();
        this.AddPersuasionDialogs(dialog);
        return dialog;
      }

      private bool PersuasionDialogSpecialCondition()
      {
        return !this.IsSameClanMember() && !this.HasSameIssue() && this.HasMobileParty() && !this.InSameSettlement();
      }

      private bool HasMobileParty() => Hero.OneToOneConversationHero.PartyBelongedTo != null;

      private bool IsSameClanMember() => Hero.OneToOneConversationHero.Clan == this.QuestGiver.Clan;

      private bool InSameSettlement()
      {
        return Hero.OneToOneConversationHero.CurrentSettlement != null && this.QuestGiver.CurrentSettlement != null && Hero.OneToOneConversationHero.CurrentSettlement == this.QuestGiver.CurrentSettlement;
      }

      private bool HasSameIssue()
      {
        return Hero.OneToOneConversationHero.Issue?.GetType() == this.GetType();
      }

      private bool PersuasionDialogForLordGeneralCondition()
      {
        if ((Hero.OneToOneConversationHero == null || !Hero.OneToOneConversationHero.IsLord || (double) Hero.OneToOneConversationHero.Age < (double) Campaign.Current.Models.AgeModel.HeroComesOfAge || Hero.OneToOneConversationHero == this.QuestGiver || Hero.OneToOneConversationHero.MapFaction.IsAtWarWith(this.QuestGiver.MapFaction) || Hero.OneToOneConversationHero.Clan == Clan.PlayerClan ? 0 : (!this._persuationTriedHeroesList.Contains(Hero.OneToOneConversationHero) ? 1 : 0)) == 0)
          return false;
        this.UpdateCompanyTroopCount();
        this._demandGold = 1000 + this._companyTroopCount * 150;
        MBTextManager.SetTextVariable("DEMAND_GOLD", this._demandGold);
        this._tasks[0] = this.GetPersuasionTask1();
        this._tasks[1] = this.GetPersuasionTask2();
        this._tasks[2] = this.GetPersuasionTask3();
        this._selectedTask = this._tasks.GetRandomElement<PersuasionTask>();
        return true;
      }

      private void AddPersuasionDialogs(DialogFlow dialog)
      {
        dialog.AddDialogLine("company_of_trouble_persuasion_check_accepted", "company_of_trouble_persuasion", "company_of_trouble_persuasion_start_reservation", "{=GCH6RgIQ}How tough are they?", new ConversationSentence.OnConditionDelegate(this.persuasion_start_with_company_of_trouble_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_start_with_company_of_trouble_on_consequence), (object) this);
        dialog.AddDialogLine("company_of_trouble_persuasion_rejected", "company_of_trouble_persuasion_start_reservation", "hero_main_options", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.persuasion_failed_with_company_of_trouble_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_rejected_with_company_of_trouble_on_consequence), (object) this);
        dialog.AddDialogLine("company_of_trouble_persuasion_attempt", "company_of_trouble_persuasion_start_reservation", "company_of_trouble_persuasion_select_option", "{=K0Qtl5RZ}Tell me about the details...", (ConversationSentence.OnConditionDelegate) (() => !this.persuasion_failed_with_company_of_trouble_on_condition()), (ConversationSentence.OnConsequenceDelegate) null, (object) this);
        dialog.AddDialogLine("company_of_trouble_persuasion_success", "company_of_trouble_persuasion_start_reservation", "close_window", "{=QlECaaHt}Hmm...They can be useful.", new ConversationSentence.OnConditionDelegate(ConversationManager.GetPersuasionProgressSatisfied), new ConversationSentence.OnConsequenceDelegate(this.persuasion_complete_with_company_of_trouble_on_consequence), (object) this, 200);
        DialogFlow dialogFlow1 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.company_of_trouble_persuasion_select_option_1_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.company_of_trouble_persuasion_select_option_1_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.company_of_trouble_persuasion_setup_option_1);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.company_of_trouble_persuasion_clickable_option_1_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
        dialogFlow1.AddPlayerLine("company_of_trouble_persuasion_select_option_1", "company_of_trouble_persuasion_select_option", "company_of_trouble_persuasion_selected_option_response", "{=0AUZvSAq}{COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, (object) this, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
        DialogFlow dialogFlow2 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.company_of_trouble_persuasion_select_option_2_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.company_of_trouble_persuasion_select_option_2_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.company_of_trouble_persuasion_setup_option_2);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.company_of_trouble_persuasion_clickable_option_2_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
        dialogFlow2.AddPlayerLine("company_of_trouble_persuasion_select_option_2", "company_of_trouble_persuasion_select_option", "company_of_trouble_persuasion_selected_option_response", "{=GG1W8qGd}{COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, (object) this, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
        DialogFlow dialogFlow3 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.company_of_trouble_persuasion_select_option_3_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.company_of_trouble_persuasion_select_option_3_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.company_of_trouble_persuasion_setup_option_3);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.company_of_trouble_persuasion_clickable_option_3_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
        dialogFlow3.AddPlayerLine("company_of_trouble_persuasion_select_option_3", "company_of_trouble_persuasion_select_option", "company_of_trouble_persuasion_selected_option_response", "{=kFs940kp}{COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, (object) this, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
        dialog.AddDialogLine("company_of_trouble_persuasion_select_option_reaction", "company_of_trouble_persuasion_selected_option_response", "company_of_trouble_persuasion_start_reservation", "{=D0xDRqvm}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.company_of_trouble_persuasion_selected_option_response_on_condition), new ConversationSentence.OnConsequenceDelegate(this.company_of_trouble_persuasion_selected_option_response_on_consequence), (object) this);
      }

      private void persuasion_start_with_company_of_trouble_on_consequence()
      {
        this._persuationTriedHeroesList.Add(Hero.OneToOneConversationHero);
        ConversationManager.StartPersuasion(2f, 1f, 0.0f, 2f, 2f, 0.0f, PersuasionDifficulty.Hard);
      }

      private bool persuasion_start_with_company_of_trouble_on_condition()
      {
        return !this._persuationTriedHeroesList.Contains(Hero.OneToOneConversationHero);
      }

      private PersuasionTask GetPersuasionTask1()
      {
        PersuasionTask persuasionTask1 = new PersuasionTask(0);
        persuasionTask1.FinalFailLine = new TextObject("{=1V9GeKr8}Fah...I don't need more men. Thank you.");
        persuasionTask1.TryLaterLine = new TextObject("{=!}TODO");
        persuasionTask1.SpokenLine = new TextObject("{=EvAubSxs}What kind of troops do they make?");
        persuasionTask1.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Trade, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Easy, false, new TextObject("{=sqMUtasn}Cheap, disposable and effective. What you say?")));
        persuasionTask1.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Tactics, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=Pcgqs9aX}Here's a quick run down of their training..."), canBlockOtherOption: true));
        persuasionTask1.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=WvQDatMJ}I won't kid you, they're mean bastards, but that's good if you can manage them.")));
        return persuasionTask1;
      }

      private PersuasionTask GetPersuasionTask2()
      {
        PersuasionTask persuasionTask2 = new PersuasionTask(0);
        persuasionTask2.FinalFailLine = new TextObject("{=UP0pMGDR}There are enough bandits around here already. I don't need more on retainer.");
        persuasionTask2.TryLaterLine = new TextObject("{=!}TODO");
        persuasionTask2.SpokenLine = new TextObject("{=zR356YDY}I have to say, they seem more like bandits than soldiers.");
        persuasionTask2.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.Easy, false, new TextObject("{=JI6Q9pQ7}Bandits can kill as well as any other kind of troops, if used correctly.")));
        persuasionTask2.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Trade, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=SqceZdzH}Of course. That's why they're cheap. You get what you pay for. "), canBlockOtherOption: true));
        persuasionTask2.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Scouting, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=NWLH02KL}Bandits are good in the wilderness, having been both predator and prey.")));
        return persuasionTask2;
      }

      private PersuasionTask GetPersuasionTask3()
      {
        PersuasionTask persuasionTask3 = new PersuasionTask(0);
        persuasionTask3.FinalFailLine = new TextObject("{=97pacK2l}Fah... I don't need more men. Thank you.");
        persuasionTask3.TryLaterLine = new TextObject("{=!}TODO");
        persuasionTask3.SpokenLine = new TextObject("{=A2ju7YTZ}I don't know... They look treacherous.");
        persuasionTask3.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Tactics, DefaultTraits.Mercy, TraitEffect.Negative, PersuasionArgumentStrength.Easy, false, new TextObject("{=z1mdQhDB}Of course. Send them in ahead of your other troops. If they die, you don't need to pay them.")));
        persuasionTask3.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=jWavM9AD}You've been around in the world. You know that mercenaries aren't saints."), canBlockOtherOption: true));
        persuasionTask3.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Generosity, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=sLjGguGy}Sure, they're bastards. But they'll be loyal bastards if you treat them well.")));
        return persuasionTask3;
      }

      private bool company_of_trouble_persuasion_selected_option_response_on_condition()
      {
        PersuasionOptionResult optionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
        MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(optionResult), false);
        if (optionResult == PersuasionOptionResult.CriticalFailure)
          this._selectedTask.BlockAllOptions();
        return true;
      }

      private void company_of_trouble_persuasion_selected_option_response_on_consequence()
      {
        Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
        float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.Hard);
        float moveToNextStageChance;
        float blockRandomOptionChance;
        Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
        this._selectedTask.ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
      }

      private bool company_of_trouble_persuasion_select_option_1_on_condition()
      {
        if (this._selectedTask.Options.Count <= 0)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(0), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(0).Line);
        MBTextManager.SetTextVariable("COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_1", text, false);
        return true;
      }

      private bool company_of_trouble_persuasion_select_option_2_on_condition()
      {
        if (this._selectedTask.Options.Count <= 1)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(1), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(1).Line);
        MBTextManager.SetTextVariable("COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_2", text, false);
        return true;
      }

      private bool company_of_trouble_persuasion_select_option_3_on_condition()
      {
        if (this._selectedTask.Options.Count <= 2)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(2), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(2).Line);
        MBTextManager.SetTextVariable("COMPANY_OF_TROUBLE_PERSUADE_ATTEMPT_3", text, false);
        return true;
      }

      private void company_of_trouble_persuasion_select_option_1_on_consequence()
      {
        if (this._selectedTask.Options.Count <= 0)
          return;
        this._selectedTask.Options[0].BlockTheOption(true);
      }

      private void company_of_trouble_persuasion_select_option_2_on_consequence()
      {
        if (this._selectedTask.Options.Count <= 1)
          return;
        this._selectedTask.Options[1].BlockTheOption(true);
      }

      private void company_of_trouble_persuasion_select_option_3_on_consequence()
      {
        if (this._selectedTask.Options.Count <= 2)
          return;
        this._selectedTask.Options[2].BlockTheOption(true);
      }

      private bool persuasion_failed_with_company_of_trouble_on_condition()
      {
        if (!this._selectedTask.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
          return false;
        MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", this._selectedTask.FinalFailLine, false);
        return true;
      }

      private PersuasionOptionArgs company_of_trouble_persuasion_setup_option_1()
      {
        return this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(0);
      }

      private PersuasionOptionArgs company_of_trouble_persuasion_setup_option_2()
      {
        return this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(1);
      }

      private PersuasionOptionArgs company_of_trouble_persuasion_setup_option_3()
      {
        return this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(2);
      }

      private bool company_of_trouble_persuasion_clickable_option_1_on_condition(
        out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._selectedTask.Options.Count <= 0)
          return false;
        hintText = this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked ? hintText : TextObject.Empty;
        return !this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
      }

      private bool company_of_trouble_persuasion_clickable_option_2_on_condition(
        out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._selectedTask.Options.Count <= 1)
          return false;
        hintText = this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked ? hintText : TextObject.Empty;
        return !this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
      }

      private bool company_of_trouble_persuasion_clickable_option_3_on_condition(
        out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._selectedTask.Options.Count <= 2)
          return false;
        hintText = this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked ? hintText : TextObject.Empty;
        return !this._selectedTask.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
      }

      private void persuasion_rejected_with_company_of_trouble_on_consequence()
      {
        if (PlayerEncounter.Current != null)
          PlayerEncounter.LeaveEncounter = true;
        ConversationManager.EndPersuasion();
      }

      private void persuasion_complete_with_company_of_trouble_on_consequence()
      {
        if (PlayerEncounter.Current != null)
          PlayerEncounter.LeaveEncounter = true;
        ConversationManager.EndPersuasion();
        this.UpdateCompanyTroopCount();
        MobileParty.MainParty.MemberRoster.AddToCounts(this._troubleCharacterObject, -this._companyTroopCount);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._demandGold);
        this.RelationshipChangeWithQuestGiver = 5;
        this.AddLog(this._questSuccessPlayerSoldCompany);
        this.CompleteQuestWithSuccess();
      }

      private DialogFlow GetCompanyDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=8TCev3Qs}So, captain. We expect a bit of looting and plundering as compensation, in addition to the wages. You don't seem like you're going to provide it to us. So, farewell.[if:innocent_smile][ib:hip]")).Condition(new ConversationSentence.OnConditionDelegate(this.CompanyDialogFromCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=1aaoSpNf}Your contract with the {QUEST_GIVER.NAME} is still in force. I can't let you go without {?QUEST_GIVER.GENDER}her{?}his{\\?} permission.")).NpcLine(new TextObject("{=oI5H6Xo8}Don't think we won't fight you if you try and stop us.[if:convo_mocking_aristocratic]")).BeginPlayerOptions().PlayerOption(new TextObject("{=hIFazIcK}So be it!")).NpcLine(new TextObject("{=KKeRi477}All right, lads. Let's kill the boss.[if:convo_predatory][ib:aggressive]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.CreateCompanyEnemyParty))).CloseDialog().PlayerOption(new TextObject("{=bm7UcuQj}No! There is no need to fight. I don't want any bloodshed... Just leave.")).NpcLine(new TextObject("{=1vnaskLR}It was a pleasure to work with you, chief. Farewell...[if:convo_nonchalant][ib:normal2]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._companyLeftQuestWillFail = true)).CloseDialog().EndPlayerOptions().CloseDialog().PlayerOption(new TextObject("{=hj4vfgxk}As you wish! Good luck. ")).NpcLine(new TextObject("{=1vnaskLR}It was a pleasure to work with you, chief. Farewell...[if:convo_nonchalant][ib:normal2]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._companyLeftQuestWillFail = true)).CloseDialog().EndPlayerOptions();
      }

      private bool CompanyDialogFromCondition()
      {
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
        return this._troubleCharacterObject == CharacterObject.OneToOneConversationCharacter;
      }

      private void CreateCompanyEnemyParty()
      {
        MobileParty.MainParty.MemberRoster.AddToCounts(this._troubleCharacterObject, -this._companyTroopCount);
        Settlement randomSettlement = SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (x => x.IsHideout));
        this._companyOfTroubleParty = BanditPartyComponent.CreateBanditParty("company_of_trouble_" + this.StringId, randomSettlement.OwnerClan, randomSettlement.Hideout, false);
        TextObject name = new TextObject("{=PV7RHgUl}Company of Trouble");
        this._companyOfTroubleParty.InitializeMobilePartyAtPosition(new TroopRoster(this._companyOfTroubleParty.Party), new TroopRoster(this._companyOfTroubleParty.Party), MobileParty.MainParty.Position2D);
        this._companyOfTroubleParty.SetCustomName(name);
        this._companyOfTroubleParty.SetPartyUsedByQuest(true);
        this._companyOfTroubleParty.MemberRoster.AddToCounts(this._troubleCharacterObject, this._companyTroopCount);
        this._battleWillStart = true;
      }

      internal void CompanyLeftQuestFail()
      {
        this.UpdateCompanyTroopCount();
        MobileParty.MainParty.MemberRoster.AddToCounts(this._troubleCharacterObject, -this._companyTroopCount);
        this.AddLog(this._questFailCompanyLeft);
        this.CompleteQuestWithFail();
        this._companyLeftQuestWillFail = false;
        GameMenu.ExitToLast();
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this._playerStartsQuestLogText);
        MobileParty.MainParty.MemberRoster.AddToCounts(this._troubleCharacterObject, this._companyTroopCount);
        MBInformationManager.AddQuickInformation(new TextObject("{=jGIxKb99}Mercenaries have joined your party."));
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
        CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
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

      private void OnClanChangedKingdom(
        Clan clan,
        Kingdom oldKingdom,
        Kingdom newKingdom,
        ChangeKingdomAction.ChangeKingdomActionDetail detail,
        bool showNotification = true)
      {
        if (!this.QuestGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
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

      private void OnMapEventEnded(MapEvent mapEvent)
      {
        if (!mapEvent.IsPlayerMapEvent && !mapEvent.IsPlayerSimulation || this._checkForBattleResults)
          return;
        this.UpdateCompanyTroopCount();
        if (this._companyTroopCount != 0)
          return;
        this.AddLog(this._allCompanyDiedLogText);
        this.RelationshipChangeWithQuestGiver = 5;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.RewardGold);
        this.CompleteQuestWithSuccess();
      }

      protected override void HourlyTick()
      {
        if (!this.IsOngoing)
          return;
        this.UpdateCompanyTroopCount();
        if (MobileParty.MainParty.MemberRoster.TotalManCount - this._companyTroopCount > this._companyTroopCount || MapEvent.PlayerMapEvent != null || Settlement.CurrentSettlement != null || PlayerEncounter.Current != null || Hero.MainHero.IsWounded)
          return;
        this._triggerCompanyOfTroubleConversation = true;
        GameMenu.ActivateGameMenu("company_of_trouble_menu");
      }

      private void TryToStealItemFromPlayer()
      {
        bool flag = false;
        for (int index = 0; index < MobileParty.MainParty.ItemRoster.Count; ++index)
        {
          ItemRosterElement itemRosterElement = MobileParty.MainParty.ItemRoster[index];
          ItemObject itemObject = itemRosterElement.EquipmentElement.Item;
          if (!itemRosterElement.IsEmpty && itemObject.IsFood)
          {
            MobileParty.MainParty.ItemRoster.AddToCounts(itemObject, -1);
            flag = true;
            break;
          }
        }
        if (!flag)
          return;
        if (this._thieveryCount == 0 || this._thieveryCount == 1)
          InformationManager.ShowInquiry(new InquiryData(this.Title.ToString(), this._thieveryCount == 0 ? new TextObject("{=OKpwA8Az}Your men have noticed some of the goods in the baggage train are missing.").ToString() : new TextObject("{=acu1wTeq}Your men are sure of that some of the goods were stolen from the baggage train.").ToString(), true, false, GameTexts.FindText("str_ok").ToString(), "", (Action) null, (Action) null), true);
        else
          MBInformationManager.AddQuickInformation(new TextObject("{=xlm8oYhM}Your men reported that some of the goods were stolen from the baggage train."));
        ++this._thieveryCount;
      }

      public void DailyTick()
      {
        if ((double) MBRandom.RandomFloat <= 0.5)
          return;
        this.TryToStealItemFromPlayer();
      }

      private void UpdateCompanyTroopCount()
      {
        bool flag = false;
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character == this._troubleCharacterObject)
          {
            flag = true;
            this._companyTroopCount = troopRosterElement.Number;
            break;
          }
        }
        if (flag)
          return;
        this._companyTroopCount = 0;
      }

      internal void QuestSuccessWithPlayerDefeatedCompany()
      {
        this.AddLog(this._allCompanyDiedLogText);
        this.RelationshipChangeWithQuestGiver = 5;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.RewardGold);
        this.CompleteQuestWithSuccess();
      }

      internal void QuestFailWithPlayerDefeatedAgainstCompany()
      {
        this.AddLog(this._playerDefeatedAgainstCompany);
        this.CompleteQuestWithFail();
      }

      protected override void OnFinalize()
      {
        this.UpdateCompanyTroopCount();
        if (this._companyTroopCount <= 0)
          return;
        MobileParty.MainParty.MemberRoster.AddToCounts(this._troubleCharacterObject, -this._companyTroopCount);
      }
    }

    public class LandLordCompanyOfTroubleIssueTypeDefiner : SaveableTypeDefiner
    {
      public LandLordCompanyOfTroubleIssueTypeDefiner()
        : base(4800000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssue), 1);
        this.AddClassDefinition(typeof (LandLordCompanyOfTroubleIssueBehavior.LandLordCompanyOfTroubleIssueQuest), 2);
      }
    }
  }
}
