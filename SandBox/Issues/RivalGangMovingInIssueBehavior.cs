// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.RivalGangMovingInIssueBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
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
  public class RivalGangMovingInIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency RivalGangLeaderIssueFrequency = IssueBase.IssueFrequency.Common;
    private RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest _cachedQuest;

    private static RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest Instance
    {
      get
      {
        RivalGangMovingInIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<RivalGangMovingInIssueBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest movingInIssueQuest)
          {
            campaignBehavior._cachedQuest = movingInIssueQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) null;
      }
    }

    private void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (RivalGangMovingInIssueBehavior.RivalGangMovingInIssue), IssueBase.IssueFrequency.Common));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (RivalGangMovingInIssueBehavior.RivalGangMovingInIssue), IssueBase.IssueFrequency.Common));
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      Hero rivalGangLeader = this.GetRivalGangLeader(issueOwner);
      return (IssueBase) new RivalGangMovingInIssueBehavior.RivalGangMovingInIssue(issueOwner, rivalGangLeader);
    }

    private static void rival_gang_wait_duration_is_over_menu_on_init(MenuCallbackArgs args)
    {
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      TextObject text = new TextObject("{=9Kr9pjGs}{QUEST_GIVER.LINK} has prepared {?QUEST_GIVER.GENDER}her{?}his{\\?} men and is waiting for you.");
      StringHelpers.SetCharacterProperties("QUEST_GIVER", RivalGangMovingInIssueBehavior.Instance.QuestGiver.CharacterObject);
      MBTextManager.SetTextVariable("MENU_TEXT", text, false);
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return issueGiver.IsGangLeader && issueGiver.CurrentSettlement != null && issueGiver.CurrentSettlement.IsTown && (double) issueGiver.CurrentSettlement.Town.Security <= 60.0 && this.GetRivalGangLeader(issueGiver) != null;
    }

    private void rival_gang_quest_wait_duration_is_over_yes_consequence(MenuCallbackArgs args)
    {
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, noHorse: true, noWeapon: true), new ConversationCharacterData(RivalGangMovingInIssueBehavior.Instance.QuestGiver.CharacterObject, noHorse: true, noWeapon: true));
    }

    private Hero GetRivalGangLeader(Hero issueOwner)
    {
      Hero rivalGangLeader = (Hero) null;
      foreach (Hero notable in (List<Hero>) issueOwner.CurrentSettlement.Notables)
      {
        if (notable != issueOwner && notable.IsGangLeader && notable.CanHaveQuestsOrIssues())
        {
          rivalGangLeader = notable;
          break;
        }
      }
      return rivalGangLeader;
    }

    private bool rival_gang_quest_wait_duration_is_over_yes_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Continue;
      return true;
    }

    private bool rival_gang_quest_wait_duration_is_over_no_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Leave;
      return true;
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenu("rival_gang_quest_before_fight", "", new OnInitDelegate(RivalGangMovingInIssueBehavior.rival_gang_quest_before_fight_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      gameStarter.AddGameMenu("rival_gang_quest_after_fight", "", new OnInitDelegate(RivalGangMovingInIssueBehavior.rival_gang_quest_after_fight_init), GameOverlays.MenuOverlayType.SettlementWithBoth);
      gameStarter.AddGameMenu("rival_gang_quest_wait_duration_is_over", "{MENU_TEXT}", new OnInitDelegate(RivalGangMovingInIssueBehavior.rival_gang_wait_duration_is_over_menu_on_init));
      gameStarter.AddGameMenuOption("rival_gang_quest_wait_duration_is_over", "rival_gang_quest_wait_duration_is_over_yes", "{=aka03VdU}Meet {?QUEST_GIVER.GENDER}her{?}him{\\?} now", new GameMenuOption.OnConditionDelegate(this.rival_gang_quest_wait_duration_is_over_yes_condition), new GameMenuOption.OnConsequenceDelegate(this.rival_gang_quest_wait_duration_is_over_yes_consequence));
      gameStarter.AddGameMenuOption("rival_gang_quest_wait_duration_is_over", "rival_gang_quest_wait_duration_is_over_no", "{=NIzQb6nT}Leave and meet {?QUEST_GIVER.GENDER}her{?}him{\\?} later", new GameMenuOption.OnConditionDelegate(this.rival_gang_quest_wait_duration_is_over_no_condition), new GameMenuOption.OnConsequenceDelegate(this.rival_gang_quest_wait_duration_is_over_no_consequence), true);
    }

    private void rival_gang_quest_wait_duration_is_over_no_consequence(MenuCallbackArgs args)
    {
      Campaign.Current.CurrentMenuContext.SwitchToMenu("town_wait_menus");
    }

    private static void rival_gang_quest_before_fight_init(MenuCallbackArgs args)
    {
      if (RivalGangMovingInIssueBehavior.Instance == null || !RivalGangMovingInIssueBehavior.Instance._isFinalStage)
        return;
      RivalGangMovingInIssueBehavior.Instance.StartAlleyBattle();
    }

    private static void rival_gang_quest_after_fight_init(MenuCallbackArgs args)
    {
      if (RivalGangMovingInIssueBehavior.Instance == null || !RivalGangMovingInIssueBehavior.Instance._isReadyToBeFinalized)
        return;
      bool hasPlayerWon = PlayerEncounter.Battle.WinningSide == PlayerEncounter.Battle.PlayerSide;
      PlayerEncounter.Current.FinalizeBattle();
      RivalGangMovingInIssueBehavior.Instance.HandlePlayerEncounterResult(hasPlayerWon);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    [GameMenuInitializationHandler("rival_gang_quest_after_fight")]
    [GameMenuInitializationHandler("rival_gang_quest_wait_duration_is_over")]
    private static void game_menu_rival_gang_quest_end_on_init(MenuCallbackArgs args)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement == null)
        return;
      args.MenuContext.SetBackgroundMeshName(currentSettlement.SettlementComponent.WaitMeshName);
    }

    public class RivalGangMovingInIssueTypeDefiner : SaveableTypeDefiner
    {
      public RivalGangMovingInIssueTypeDefiner()
        : base(310000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (RivalGangMovingInIssueBehavior.RivalGangMovingInIssue), 1);
        this.AddClassDefinition(typeof (RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest), 2);
      }
    }

    public class RivalGangMovingInIssue : IssueBase
    {
      private const int AlternativeSolutionRelationChange = 5;
      private const int AlternativeSolutionFailRelationChange = -5;
      private const int AlternativeSolutionQuestGiverPowerChange = 10;
      private const int AlternativeSolutionRivalGangLeaderPowerChange = -10;
      private const int AlternativeSolutionFailQuestGiverPowerChange = -10;
      private const int AlternativeSolutionFailSecurityChange = -10;
      private const int AlternativeSolutionRivalGangLeaderRelationChange = -5;
      private const int AlternativeSolutionMinimumTroopTier = 2;
      private const int IssueDuration = 15;
      private const int MinimumRequiredMenCount = 5;
      private const int IssueQuestDuration = 8;
      private const int MeleeSkillValueThreshold = 150;
      private const int RoguerySkillValueThreshold = 120;
      private const int PreparationDurationInDays = 2;

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get
        {
          return IssueBase.AlternativeSolutionScaleFlag.Casualties | IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
        }
      }

      [SaveableProperty(207)]
      public Hero RivalGangLeader { get; private set; }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 4 + MathF.Ceiling(6f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 3 + MathF.Ceiling(5f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get => (int) (600.0 + 1700.0 * (double) this.IssueDifficultyMultiplier);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (750.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=GXk6f9ah}I've got a problem... [ib:confident][if:convo_undecided_closed]And {?TARGET_NOTABLE.GENDER}her{?}his{\\?} name is {TARGET_NOTABLE.LINK}. {?TARGET_NOTABLE.GENDER}Her{?}His{\\?} people have been coming around outside the walls, robbing the dice-players and the drinkers enjoying themselves under our protection. Me and my boys are eager to teach them a lesson but I figure some extra muscle wouldn't hurt.");
          if (this.IssueOwner.RandomInt(2) == 0)
            parent = new TextObject("{=rgTGzfzI}Yeah. I have a problem all right. [ib:confident][if:convo_undecided_closed]{?TARGET_NOTABLE.GENDER}Her{?}His{\\?} name is {TARGET_NOTABLE.LINK}. {?TARGET_NOTABLE.GENDER}Her{?}His{\\?} people have been bothering shop owners under our protection, demanding money and making threats. Let me tell you something - those shop owners are my cows, and no one else gets to milk them. We're ready to teach these interlopers a lesson, but I could use some help.");
          if (this.RivalGangLeader != null)
            StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this.RivalGangLeader.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=kc6vCycY}What exactly do you want me to do?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=tyyAfWRR}We already had a small scuffle with them recently. [if:convo_mocking_revenge]They'll be waiting for us to come down hard. Instead, we'll hold off for {NUMBER} days. Let them think that we're backing off… Then, after {NUMBER} days, your men and mine will hit them in the middle of the night when they least expect it. I'll send you a messenger when the time comes and we'll strike them down together.");
          explanationByIssueGiver.SetTextVariable("NUMBER", 2);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=sSIjPCPO}If you'd rather not go into the fray yourself, [if:convo_mocking_aristocratic]you can leave me one of your companions together with {TROOP_COUNT} or so good men. If they stuck around for {RETURN_DAYS} days or so, I'd count it a very big favor.");
          explanationByIssueGiver.SetTextVariable("TROOP_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          explanationByIssueGiver.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return explanationByIssueGiver;
        }
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=ymbVPod1}{ISSUE_GIVER.LINK}, a gang leader from {SETTLEMENT}, has told you about a new gang that is trying to get a hold on the town. You asked {COMPANION.LINK} to take {TROOP_COUNT} of your best men to stay with {ISSUE_GIVER.LINK} and help {?ISSUE_GIVER.GENDER}her{?}him{\\?} in the coming gang war. They should return to you in {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.IssueOwner.CurrentSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("TROOP_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return parent;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=LdCte9H0}I'll fight the other gang with you myself.");
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get => new TextObject("{=AdbiUqtT}I'm busy, but I will leave a companion and some men.");
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          return new TextObject("{=0enbhess}Thank you. [ib:normal][if:convo_approving]I'm sure your guys are worth their salt..");
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=QR0V8Ae5}Our lads are well hidden nearby,[ib:normal][if:convo_excited] waiting for the signal to go get those bastards. I won't forget this little favor you're doing me.");
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      public override TextObject Title
      {
        get
        {
          TextObject title = new TextObject("{=vAjgn7yx}Rival Gang Moving In at {SETTLEMENT}");
          title.SetTextVariable("SETTLEMENT", this.IssueSettlement?.Name ?? this.IssueOwner.HomeSettlement.Name);
          return title;
        }
      }

      public override TextObject Description
      {
        get => new TextObject("{=H4EVfKAh}Gang leader needs help to beat the rival gang.");
      }

      public override TextObject IssueAsRumorInSettlement
      {
        get
        {
          TextObject parent = new TextObject("{=C9feTaca}I hear {QUEST_GIVER.LINK} is going to sort it out with {RIVAL_GANG_LEADER.LINK} once and for all.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("RIVAL_GANG_LEADER", this.RivalGangLeader.CharacterObject, parent);
          return parent;
        }
      }

      protected override bool IssueQuestCanBeDuplicated => false;

      public RivalGangMovingInIssue(Hero issueOwner, Hero rivalGangLeader)
        : base(issueOwner, CampaignTime.DaysFromNow(15f))
      {
        this.RivalGangLeader = rivalGangLeader;
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this.RivalGangLeader)
          return;
        result = false;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.IssueOwnerPower)
          return -0.2f;
        return issueEffect == DefaultIssueEffects.SettlementSecurity ? -0.5f : 0.0f;
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.RelationshipChangeWithIssueOwner = 5;
        ChangeRelationAction.ApplyPlayerRelation(this.RivalGangLeader, -5);
        this.IssueOwner.AddPower(10f);
        this.RivalGangLeader.AddPower(-10f);
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -5;
        this.IssueSettlement.Town.Security += -10f;
        this.IssueOwner.AddPower(-10f);
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        int skillValue1 = hero.GetSkillValue(DefaultSkills.OneHanded);
        int skillValue2 = hero.GetSkillValue(DefaultSkills.TwoHanded);
        int skillValue3 = hero.GetSkillValue(DefaultSkills.Polearm);
        int skillValue4 = hero.GetSkillValue(DefaultSkills.Roguery);
        if (skillValue1 >= skillValue2 && skillValue1 >= skillValue3 && skillValue1 >= skillValue4)
          return (DefaultSkills.OneHanded, 150);
        if (skillValue2 >= skillValue3 && skillValue2 >= skillValue4)
          return (DefaultSkills.TwoHanded, 150);
        return skillValue3 < skillValue4 ? (DefaultSkills.Roguery, 120) : (DefaultSkills.Polearm, 150);
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
      {
        return character.Tier >= 2;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest(questId, this.IssueOwner, this.RivalGangLeader, 8, this.RewardGold, this.IssueDifficultyMultiplier);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Common;

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        flag = IssueBase.PreconditionFlags.None;
        relationHero = (Hero) null;
        skill = (SkillObject) null;
        if (Hero.MainHero.IsWounded)
          flag |= IssueBase.PreconditionFlags.Wounded;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flag |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 5)
          flag |= IssueBase.PreconditionFlags.NotEnoughTroops;
        if (this.IssueOwner.CurrentSettlement.OwnerClan == Clan.PlayerClan)
          flag |= IssueBase.PreconditionFlags.PlayerIsOwnerOfSettlement;
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions()
      {
        return this.RivalGangLeader.IsAlive && this.IssueOwner.CurrentSettlement.OwnerClan != Clan.PlayerClan && (double) this.IssueOwner.CurrentSettlement.Town.Security <= 80.0;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      internal static void AutoGeneratedStaticCollectObjectsRivalGangMovingInIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this.RivalGangLeader);
      }

      internal static object AutoGeneratedGetMemberValueRivalGangLeader(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssue) o).RivalGangLeader;
      }
    }

    public class RivalGangMovingInIssueQuest : QuestBase
    {
      private const int QuestGiverRelationChangeOnSuccess = 5;
      private const int RivalGangLeaderRelationChangeOnSuccess = -5;
      private const int QuestGiverNotablePowerChangeOnSuccess = 10;
      private const int RivalGangLeaderPowerChangeOnSuccess = -10;
      private const int RenownChangeOnSuccess = 1;
      private const int QuestGiverRelationChangeOnFail = -5;
      private const int QuestGiverRelationChangeOnTimedOut = -5;
      private const int NotablePowerChangeOnFail = -10;
      private const int TownSecurityChangeOnFail = -10;
      private const int RivalGangLeaderRelationChangeOnSuccessfulBetrayal = 5;
      private const int QuestGiverRelationChangeOnSuccessfulBetrayal = -15;
      private const int RivalGangLeaderPowerChangeOnSuccessfulBetrayal = 10;
      private const int QuestGiverRelationChangeOnFailedBetrayal = -10;
      private const int PlayerAttackedQuestGiverHonorChange = -150;
      private const int PlayerAttackedQuestGiverPowerChange = -10;
      private const int NumberofRegularEnemyTroops = 15;
      private const int PlayerAttackedQuestGiverRelationChange = -8;
      private const int PlayerAttackedQuestGiverSecurityChange = -10;
      private const int NumberOfRegularAllyTroops = 20;
      private const int MaxNumberOfPlayerOwnedTroops = 5;
      private const string AllyGangLeaderHenchmanStringId = "gangster_2";
      private const string RivalGangLeaderHenchmanStringId = "gangster_3";
      private const int PreparationDurationInDays = 2;
      [SaveableField(10)]
      internal readonly Hero _rivalGangLeader;
      [SaveableField(20)]
      private MobileParty _rivalGangLeaderParty;
      private Hero _rivalGangLeaderHenchmanHero;
      [SaveableField(30)]
      private readonly CampaignTime _preparationCompletionTime;
      private Hero _allyGangLeaderHenchmanHero;
      private MobileParty _allyGangLeaderParty;
      [SaveableField(40)]
      private readonly CampaignTime _questTimeoutTime;
      [SaveableField(60)]
      internal readonly float _timeoutDurationInDays;
      [SaveableField(70)]
      internal bool _isFinalStage;
      [SaveableField(80)]
      internal bool _isReadyToBeFinalized;
      [SaveableField(90)]
      internal bool _hasBetrayedQuestGiver;
      private List<TroopRosterElement> _allPlayerTroops;
      private List<CharacterObject> _sentTroops;
      [SaveableField(110)]
      private bool _preparationsComplete;
      [SaveableField(120)]
      private int _rewardGold;
      [SaveableField(130)]
      private float _issueDifficulty;
      private Settlement _questSettlement;
      private JournalLog _onQuestStartedLog;
      private JournalLog _onQuestSucceededLog;

      private TextObject _onQuestStartedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=dav5rmDd}{QUEST_GIVER.LINK}, a gang leader from {SETTLEMENT} has told you about a rival that is trying to get a foothold in {?QUEST_GIVER.GENDER}her{?}his{\\?} town. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to wait {DAY_COUNT} days so that the other gang lets its guard down.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._questSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("DAY_COUNT", 2);
          return parent;
        }
      }

      private TextObject _onQuestFailedWithRejectionLogText
      {
        get
        {
          TextObject parent = new TextObject("{=aXMg9M7t}You decided to stay out of the fight. {?QUEST_GIVER.GENDER}She{?}He{\\?} will certainly lose to the rival gang without your help.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestFailedWithBetrayalLogText
      {
        get
        {
          TextObject parent = new TextObject("{=Rf0QqRIX}You have chosen to side with the rival gang leader, {RIVAL_GANG_LEADER.LINK}. {QUEST_GIVER.LINK} must be furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("RIVAL_GANG_LEADER", this._rivalGangLeader.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestFailedWithDefeatLogText
      {
        get
        {
          TextObject parent = new TextObject("{=du3dpMaV}You were unable to defeat {RIVAL_GANG_LEADER.LINK}'s gang, and thus failed to fulfill your commitment to {QUEST_GIVER.LINK}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("RIVAL_GANG_LEADER", this._rivalGangLeader.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestSucceededLogText
      {
        get
        {
          TextObject parent = new TextObject("{=vpUl7xcy}You have defeated the rival gang and protected the interests of {QUEST_GIVER.LINK} in {SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._questSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _onQuestPreperationsCompletedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=OIBiRTRP}{QUEST_GIVER.LINK} is waiting for you at {SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._questSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _onQuestCancelledDueToWarLogText
      {
        get
        {
          TextObject parent = new TextObject("{=vaUlAZba}Your clan is now at war with {QUEST_GIVER.LINK}. Your agreement with {QUEST_GIVER.LINK} was canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
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

      private TextObject _onQuestCancelledDueToSiegeLogText
      {
        get
        {
          TextObject parent = new TextObject("{=s1GWSE9Y}{QUEST_GIVER.LINK} cancels your plans due to the siege of {SETTLEMENT}. {?QUEST_GIVER.GENDER}She{?}He{\\?} has worse troubles than {?QUEST_GIVER.GENDER}her{?}his{\\?} quarrel with the rival gang.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._questSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _playerStartedAlleyFightWithRivalGangLeader
      {
        get
        {
          TextObject parent = new TextObject("{=OeKgpuAv}After your attack on the rival gang's alley, {QUEST_GIVER.LINK} decided to change {?QUEST_GIVER.GENDER}her{?}his{\\?} plans, and doesn't need your assistance anymore. Quest is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _playerStartedAlleyFightWithQuestgiver
      {
        get
        {
          TextObject parent = new TextObject("{=VPGkIqlh}Your attack on {QUEST_GIVER.LINK}'s gang has angered {?QUEST_GIVER.GENDER}her{?}him{\\?} and {?QUEST_GIVER.GENDER}she{?}he{\\?} broke off the agreement that you had.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject OwnerOfQuestSettlementIsPlayerClanLogText
      {
        get
        {
          TextObject parent = new TextObject("{=KxEnNEoD}Your clan is now owner of the settlement. As the {?PLAYER.GENDER}lady{?}lord{\\?} of the settlement you cannot get involved in gang wars anymore. Your agreement with the {QUEST_GIVER.LINK} has canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      public RivalGangMovingInIssueQuest(
        string questId,
        Hero questGiver,
        Hero rivalGangLeader,
        int duration,
        int rewardGold,
        float issueDifficulty)
        : base(questId, questGiver, CampaignTime.DaysFromNow((float) duration), rewardGold)
      {
        this._rivalGangLeader = rivalGangLeader;
        this._rewardGold = rewardGold;
        this._issueDifficulty = issueDifficulty;
        this._timeoutDurationInDays = (float) duration;
        this._preparationCompletionTime = CampaignTime.DaysFromNow(2f);
        this._questTimeoutTime = CampaignTime.DaysFromNow(this._timeoutDurationInDays);
        this._sentTroops = new List<CharacterObject>();
        this._allPlayerTroops = new List<TroopRosterElement>();
        this.InitializeQuestSettlement();
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      public override TextObject Title
      {
        get
        {
          TextObject title = new TextObject("{=WVorNMNc}Rival Gang Moving In At {SETTLEMENT}");
          title.SetTextVariable("SETTLEMENT", this._questSettlement.Name);
          return title;
        }
      }

      public override bool IsRemainingTimeHidden => false;

      protected override void InitializeQuestOnGameLoad()
      {
        this.InitializeQuestSettlement();
        this.SetDialogs();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetRivalGangLeaderDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetQuestGiverPreparationCompletedDialogFlow(), (object) this);
        this._rivalGangLeaderParty?.SetPartyUsedByQuest(true);
        this._sentTroops = new List<CharacterObject>();
        this._allPlayerTroops = new List<TroopRosterElement>();
      }

      private void InitializeQuestSettlement()
      {
        this._questSettlement = this.QuestGiver.CurrentSettlement;
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine("{=Fwm0PwVb}Great. As I said we need minimum of {NUMBER} days,[ib:normal][if:convo_mocking_revenge] so they'll let their guard down. I will let you know when it's time. Remember, we wait for the dark of the night to strike.").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          MBTextManager.SetTextVariable("SETTLEMENT", this._questSettlement.EncyclopediaLinkWithName, false);
          MBTextManager.SetTextVariable("NUMBER", 2);
          return Hero.OneToOneConversationHero == this.QuestGiver;
        })).Consequence(new ConversationSentence.OnConsequenceDelegate(this.OnQuestAccepted)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine("{=z43j3Tzq}I'm still gathering my men for the fight. I'll send a runner for you when the time comes.").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return Hero.OneToOneConversationHero == this.QuestGiver && !this._isFinalStage && !this._preparationsComplete;
        })).BeginPlayerOptions().PlayerOption("{=4IHRAmnA}All right. I am waiting for your runner.").NpcLine("{=xEs830bT}You'll know right away once the preparations are complete.[ib:closed][if:convo_mocking_teasing] Just don't leave town.").CloseDialog().PlayerOption("{=6g8qvD2M}I can't just hang on here forever. Be quick about it.").NpcLine("{=lM7AscLo}I'm getting this together as quickly as I can.[ib:closed][if:convo_nervous]").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetRivalGangLeaderDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=IfeN8lYd}Coming to fight us, eh? Did {QUEST_GIVER.LINK} put you up to this?[ib:aggressive2][if:convo_confused_annoyed] Look, there's no need for bloodshed. This town is big enough for all of us. But... if bloodshed is what you want, we will be happy to provide.").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return Hero.OneToOneConversationHero == this._rivalGangLeaderHenchmanHero && this._isReadyToBeFinalized;
        })).NpcLine("{=WSJxl2Hu}What I want to say is... [if:convo_mocking_teasing]You don't need to be a part of this. My boss will double whatever {?QUEST_GIVER.GENDER}she{?}he{\\?} is paying you if you join us.").BeginPlayerOptions().PlayerOption("{=GPBja02V}I gave my word to {QUEST_GIVER.LINK}, and I won't be bought.").Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.GetMissionBehavior<CombatMissionWithDialogueController>()?.StartFight(false)))).NpcLine("{=OSgBicif}You will regret this![ib:warrior][if:convo_furious]").CloseDialog().PlayerOption("{=RB4uQpPV}You're going to pay me a lot then, {REWARD}{GOLD_ICON} to be exact. But at that price, I agree.").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          MBTextManager.SetTextVariable("REWARD", this._rewardGold * 2);
          return true;
        })).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() =>
        {
          this._hasBetrayedQuestGiver = true;
          Mission.Current.GetMissionBehavior<CombatMissionWithDialogueController>()?.StartFight(true);
        }))).NpcLine("{=5jW4FVDc}Welcome to our ranks then. [ib:warrior][if:convo_evil_smile]Let's kill those bastards!").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetQuestGiverPreparationCompletedDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).BeginNpcOptions().NpcOption(new TextObject("{=hM7LSuB1}Good to see you. But we still need to wait until after dusk. {HERO.LINK}'s men may be watching, so let's keep our distance from each other until night falls."), (ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("HERO", this._rivalGangLeader.CharacterObject);
          if (Hero.OneToOneConversationHero == this.QuestGiver && !this._isFinalStage)
          {
            CampaignTime campaignTime = this._preparationCompletionTime;
            if (campaignTime.IsPast)
            {
              if (!this._preparationsComplete)
                return true;
              campaignTime = CampaignTime.Now;
              return !campaignTime.IsNightTime;
            }
          }
          return false;
        })).CloseDialog().NpcOption("{=JxNlB547}Are you ready for the fight?[ib:normal][if:convo_undecided_open]", (ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver && this._preparationsComplete && !this._isFinalStage && CampaignTime.Now.IsNightTime)).EndNpcOptions().BeginPlayerOptions().PlayerOption("{=NzMX0s21}I am ready.").Condition((ConversationSentence.OnConditionDelegate) (() => !Hero.MainHero.IsWounded)).NpcLine("{=dNjepcKu}Let's finish this![ib:hip][if:convo_mocking_revenge]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.rival_gang_start_fight_on_consequence))).CloseDialog().PlayerOption("{=B2Donbwz}I need more time.").Condition((ConversationSentence.OnConditionDelegate) (() => !Hero.MainHero.IsWounded)).NpcLine("{=advPT3WY}You'd better hurry up![ib:closed][if:convo_astonished]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.rival_gang_need_more_time_on_consequence))).CloseDialog().PlayerOption("{=QaN26CZ5}My wounds are still fresh. I need some time to recover.").Condition((ConversationSentence.OnConditionDelegate) (() => Hero.MainHero.IsWounded)).NpcLine("{=s0jKaYo0}We must attack before the rival gang hears about our plan. You'd better hurry up![if:convo_astonished]").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      public override void OnHeroCanDieInfoIsRequested(
        Hero hero,
        KillCharacterAction.KillCharacterActionDetail causeOfDeath,
        ref bool result)
      {
        if (hero != this.QuestGiver && hero != this._rivalGangLeader)
          return;
        result = false;
      }

      private void rival_gang_start_fight_on_consequence()
      {
        this._isFinalStage = true;
        if (Mission.Current != null)
          Mission.Current.EndMission();
        Campaign.Current.GameMenuManager.SetNextMenu("rival_gang_quest_before_fight");
      }

      private void rival_gang_need_more_time_on_consequence()
      {
        if (!(Campaign.Current.CurrentMenuContext.GameMenu.StringId == "rival_gang_quest_wait_duration_is_over"))
          return;
        Campaign.Current.GameMenuManager.SetNextMenu("town_wait_menus");
      }

      private void AddQuestGiverGangLeaderOnSuccessDialogFlow()
      {
        Campaign.Current.ConversationManager.AddDialogFlow(DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=zNPzh5jO}Ah! Now that was as good a fight as any I've had. Here, take this purse, It is all yours as {QUEST_GIVER.LINK} has promised.[ib:hip2][if:convo_huge_smile]").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return this.IsOngoing && Hero.OneToOneConversationHero == this._allyGangLeaderHenchmanHero;
        })).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OnQuestSucceeded))).CloseDialog());
      }

      private CharacterObject GetTroopTypeTemplateForDifficulty()
      {
        int difficultyRange = MBMath.ClampInt(MathF.Ceiling(this._issueDifficulty / 0.1f), 1, 10);
        CharacterObject templateForDifficulty = difficultyRange != 1 ? (difficultyRange != 10 ? CharacterObject.All.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (t => t.StringId == "mercenary_" + (object) (difficultyRange - 1))) : CharacterObject.All.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (t => t.StringId == "mercenary_8"))) : CharacterObject.All.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (t => t.StringId == "looter"));
        if (templateForDifficulty == null)
        {
          Debug.FailedAssert("Can't find troop in rival gang leader quest", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Issues\\RivalGangMovingInIssueBehavior.cs", nameof (GetTroopTypeTemplateForDifficulty), 785);
          templateForDifficulty = CharacterObject.All.First<CharacterObject>((Func<CharacterObject, bool>) (t => t.IsBasicTroop && t.IsSoldier));
        }
        return templateForDifficulty;
      }

      internal void StartAlleyBattle()
      {
        this.CreateRivalGangLeaderParty();
        this.CreateAllyGangLeaderParty();
        this.PreparePlayerParty();
        PlayerEncounter.RestartPlayerEncounter(this._rivalGangLeaderParty.Party, PartyBase.MainParty, false);
        PlayerEncounter.StartBattle();
        this._allyGangLeaderParty.MapEventSide = PlayerEncounter.Battle.GetMapEventSide(PlayerEncounter.Battle.PlayerSide);
        GameMenu.ActivateGameMenu("rival_gang_quest_after_fight");
        this._isReadyToBeFinalized = true;
        PlayerEncounter.StartCombatMissionWithDialogueInTownCenter(this._rivalGangLeaderHenchmanHero.CharacterObject);
      }

      private void CreateRivalGangLeaderParty()
      {
        this._rivalGangLeaderParty = MobileParty.CreateParty("rival_gang_leader_party", (PartyComponent) null);
        TextObject name = new TextObject("{=u4jhIFwG}{GANG_LEADER}'s Party");
        name.SetTextVariable("RIVAL_GANG_LEADER", this._rivalGangLeader.Name);
        name.SetTextVariable("GANG_LEADER", this._rivalGangLeader.Name);
        this._rivalGangLeaderParty.InitializeMobilePartyAroundPosition(new TroopRoster(this._rivalGangLeaderParty.Party), new TroopRoster(this._rivalGangLeaderParty.Party), this._questSettlement.GatePosition, 1f, 0.5f);
        this._rivalGangLeaderParty.SetCustomName(name);
        this._rivalGangLeaderParty.SetPartyUsedByQuest(true);
        this._rivalGangLeaderParty.MemberRoster.AddToCounts(this.GetTroopTypeTemplateForDifficulty(), 15);
        this._rivalGangLeaderHenchmanHero = HeroCreator.CreateSpecialHero(MBObjectManager.Instance.GetObject<CharacterObject>("gangster_3"));
        TextObject textObject = new TextObject("{=zJqEdDiq}Henchman of {GANG_LEADER}");
        textObject.SetTextVariable("GANG_LEADER", this._rivalGangLeader.Name);
        this._rivalGangLeaderHenchmanHero.SetName(textObject, textObject);
        this._rivalGangLeaderParty.MemberRoster.AddToCounts(this._rivalGangLeaderHenchmanHero.CharacterObject, 1);
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        this._rivalGangLeaderParty.ActualClan = Clan.BanditFactions.FirstOrDefaultQ<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        EnterSettlementAction.ApplyForParty(this._rivalGangLeaderParty, this._questSettlement);
      }

      private void CreateAllyGangLeaderParty()
      {
        this._allyGangLeaderParty = MobileParty.CreateParty("ally_gang_leader_party", (PartyComponent) null);
        TextObject name = new TextObject("{=u4jhIFwG}{GANG_LEADER}'s Party");
        name.SetTextVariable("GANG_LEADER", this.QuestGiver.Name);
        this._allyGangLeaderParty.InitializeMobilePartyAroundPosition(new TroopRoster(this._allyGangLeaderParty.Party), new TroopRoster(this._allyGangLeaderParty.Party), this._questSettlement.GatePosition, 1f, 0.5f);
        this._allyGangLeaderParty.SetCustomName(name);
        this._allyGangLeaderParty.SetPartyUsedByQuest(true);
        this._allyGangLeaderParty.MemberRoster.AddToCounts(this.GetTroopTypeTemplateForDifficulty(), 20);
        this._allyGangLeaderHenchmanHero = HeroCreator.CreateSpecialHero(MBObjectManager.Instance.GetObject<CharacterObject>("gangster_2"));
        TextObject textObject = new TextObject("{=zJqEdDiq}Henchman of {GANG_LEADER}");
        textObject.SetTextVariable("GANG_LEADER", this.QuestGiver.Name);
        this._allyGangLeaderHenchmanHero.SetName(textObject, textObject);
        this._allyGangLeaderParty.MemberRoster.AddToCounts(this._allyGangLeaderHenchmanHero.CharacterObject, 1);
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        this._allyGangLeaderParty.ActualClan = Clan.BanditFactions.FirstOrDefaultQ<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        EnterSettlementAction.ApplyForParty(this._allyGangLeaderParty, this._questSettlement);
      }

      private void PreparePlayerParty()
      {
        this._allPlayerTroops.Clear();
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) PartyBase.MainParty.MemberRoster.GetTroopRoster())
        {
          if (!troopRosterElement.Character.IsPlayerCharacter)
            this._allPlayerTroops.Add(troopRosterElement);
        }
        PartyBase.MainParty.MemberRoster.RemoveIf((Predicate<TroopRosterElement>) (t => !t.Character.IsPlayerCharacter));
        if (this._allPlayerTroops.IsEmpty<TroopRosterElement>())
          return;
        this._sentTroops.Clear();
        int num1 = 5;
        using (IEnumerator<TroopRosterElement> enumerator = this._allPlayerTroops.OrderByDescending<TroopRosterElement, int>((Func<TroopRosterElement, int>) (t => t.Character.Level)).GetEnumerator())
        {
label_13:
          while (enumerator.MoveNext())
          {
            TroopRosterElement current = enumerator.Current;
            if (num1 > 0)
            {
              int num2 = 0;
              while (true)
              {
                if (num2 < current.Number - current.WoundedNumber && num1 > 0)
                {
                  this._sentTroops.Add(current.Character);
                  --num1;
                  ++num2;
                }
                else
                  goto label_13;
              }
            }
            else
              break;
          }
        }
        foreach (CharacterObject sentTroop in this._sentTroops)
          PartyBase.MainParty.MemberRoster.AddToCounts(sentTroop, 1);
      }

      internal void HandlePlayerEncounterResult(bool hasPlayerWon)
      {
        PlayerEncounter.Finish(false);
        EncounterManager.StartSettlementEncounter(MobileParty.MainParty, this._questSettlement);
        GameMenu.SwitchToMenu("town");
        TroopRoster troopRoster = PartyBase.MainParty.MemberRoster.CloneRosterData();
        PartyBase.MainParty.MemberRoster.RemoveIf((Predicate<TroopRosterElement>) (t => !t.Character.IsPlayerCharacter));
        foreach (TroopRosterElement allPlayerTroop in this._allPlayerTroops)
        {
          TroopRosterElement playerTroop = allPlayerTroop;
          int indexOfTroop = troopRoster.FindIndexOfTroop(playerTroop.Character);
          int number = playerTroop.Number;
          int woundedNumber = playerTroop.WoundedNumber;
          int xp = playerTroop.Xp;
          if (indexOfTroop >= 0)
          {
            TroopRosterElement elementCopyAtIndex = troopRoster.GetElementCopyAtIndex(indexOfTroop);
            number -= this._sentTroops.Count<CharacterObject>((Func<CharacterObject, bool>) (t => t == playerTroop.Character)) - elementCopyAtIndex.Number;
            woundedNumber += elementCopyAtIndex.WoundedNumber;
            xp += elementCopyAtIndex.DeltaXp;
          }
          PartyBase.MainParty.MemberRoster.AddToCounts(playerTroop.Character, number, woundedCount: woundedNumber, xpChange: xp);
        }
        if (this._rivalGangLeader.PartyBelongedTo == this._rivalGangLeaderParty)
          this._rivalGangLeaderParty.MemberRoster.AddToCounts(this._rivalGangLeader.CharacterObject, -1);
        if (hasPlayerWon)
        {
          if (!this._hasBetrayedQuestGiver)
          {
            this.AddQuestGiverGangLeaderOnSuccessDialogFlow();
            this.SpawnAllyHenchmanAfterMissionSuccess();
            PlayerEncounter.LocationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationOfCharacter(this._allyGangLeaderHenchmanHero), talkToChar: this._allyGangLeaderHenchmanHero.CharacterObject);
          }
          else
            this.OnBattleWonWithBetrayal();
        }
        else if (!this._hasBetrayedQuestGiver)
          this.OnQuestFailedWithDefeat();
        else
          this.OnBattleLostWithBetrayal();
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
        CampaignEvents.AlleyClearedByPlayer.AddNonSerializedListener((object) this, new Action<Alley>(this.OnAlleyClearedByPlayer));
        CampaignEvents.AlleyOccupiedByPlayer.AddNonSerializedListener((object) this, new Action<Alley, TroopRoster>(this.OnAlleyOccupiedByPlayer));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      }

      private void SpawnAllyHenchmanAfterMissionSuccess()
      {
        LocationCharacter locationCharacter = new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) this._allyGangLeaderHenchmanHero.CharacterObject)).Monster(TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(this._allyGangLeaderHenchmanHero.CharacterObject.Race, "_settlement")), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common", true, LocationCharacter.CharacterRelations.Neutral, (string) null, true);
        LocationComplex.Current.GetLocationWithId("center").AddCharacter(locationCharacter);
      }

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (settlement != this.QuestGiver.CurrentSettlement || newOwner != Hero.MainHero)
          return;
        this.AddLog(this.OwnerOfQuestSettlementIsPlayerClanLogText);
        this.QuestGiver.AddPower(-10f);
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -5);
        this.CompleteQuestWithCancel();
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._rivalGangLeader)
          return;
        result = false;
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
        this.CompleteQuestWithCancel(this._onQuestCancelledDueToWarLogText);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._onQuestCancelledDueToWarLogText);
      }

      private void OnSiegeEventStarted(SiegeEvent siegeEvent)
      {
        if (siegeEvent.BesiegedSettlement != this._questSettlement)
          return;
        this.AddLog(this._onQuestCancelledDueToSiegeLogText);
        this.CompleteQuestWithCancel();
      }

      protected override void HourlyTick()
      {
        if (RivalGangMovingInIssueBehavior.Instance == null || !RivalGangMovingInIssueBehavior.Instance.IsOngoing)
          return;
        CampaignTime campaignTime = RivalGangMovingInIssueBehavior.Instance._preparationCompletionTime;
        if ((2.0 - (double) campaignTime.RemainingDaysFromNow) / 2.0 < 1.0 || this._preparationsComplete)
          return;
        campaignTime = CampaignTime.Now;
        if (!campaignTime.IsNightTime)
          return;
        this.OnGuestGiverPreparationsCompleted();
      }

      private void OnHeroKilled(
        Hero victim,
        Hero killer,
        KillCharacterAction.KillCharacterActionDetail detail,
        bool showNotification = true)
      {
        if (victim != this._rivalGangLeader)
          return;
        TextObject textObject = detail == KillCharacterAction.KillCharacterActionDetail.Lost ? this.TargetHeroDisappearedLogText : this.TargetHeroDiedLogText;
        StringHelpers.SetCharacterProperties("QUEST_TARGET", this._rivalGangLeader.CharacterObject, textObject);
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        this.AddLog(textObject);
        this.CompleteQuestWithCancel();
      }

      private void OnPlayerAlleyFightEnd(Alley alley)
      {
        if (this._isReadyToBeFinalized)
          return;
        if (alley.Owner == this._rivalGangLeader)
        {
          this.OnPlayerAttackedRivalGangAlley();
        }
        else
        {
          if (alley.Owner != this.QuestGiver)
            return;
          this.OnPlayerAttackedQuestGiverAlley();
        }
      }

      private void OnAlleyClearedByPlayer(Alley alley) => this.OnPlayerAlleyFightEnd(alley);

      private void OnAlleyOccupiedByPlayer(Alley alley, TroopRoster troops)
      {
        this.OnPlayerAlleyFightEnd(alley);
      }

      private void OnPlayerAttackedRivalGangAlley()
      {
        this.AddLog(this._playerStartedAlleyFightWithRivalGangLeader);
        this.CompleteQuestWithCancel();
      }

      private void OnPlayerAttackedQuestGiverAlley()
      {
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -150)
        });
        this.QuestGiver.AddPower(-10f);
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -8);
        this._questSettlement.Town.Security += -10f;
        this.AddLog(this._playerStartedAlleyFightWithQuestgiver);
        this.CompleteQuestWithFail();
      }

      protected override void OnTimedOut() => this.OnQuestFailedWithRejectionOrTimeout();

      private void OnGuestGiverPreparationsCompleted()
      {
        this._preparationsComplete = true;
        if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement == this._questSettlement && Campaign.Current.CurrentMenuContext != null && Campaign.Current.CurrentMenuContext.GameMenu.StringId == "town_wait_menus")
          Campaign.Current.CurrentMenuContext.SwitchToMenu("rival_gang_quest_wait_duration_is_over");
        TextObject textObject = new TextObject("{=DUKbtlNb}{QUEST_GIVER.LINK} has finally sent a messenger telling you it's time to meet {?QUEST_GIVER.GENDER}her{?}him{\\?} and join the fight.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        this.AddLog(this._onQuestPreperationsCompletedLogText);
        MBInformationManager.AddQuickInformation(textObject);
      }

      private void OnQuestAccepted()
      {
        this.StartQuest();
        this._onQuestStartedLog = this.AddLog(this._onQuestStartedLogText);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetRivalGangLeaderDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetQuestGiverPreparationCompletedDialogFlow(), (object) this);
      }

      private void OnQuestSucceeded()
      {
        this._onQuestSucceededLog = this.AddLog(this._onQuestSucceededLogText);
        GainRenownAction.Apply(Hero.MainHero, 1f);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 50)
        });
        this.QuestGiver.AddPower(10f);
        this._rivalGangLeader.AddPower(-10f);
        this.RelationshipChangeWithQuestGiver = 5;
        ChangeRelationAction.ApplyPlayerRelation(this._rivalGangLeader, -5);
        this.CompleteQuestWithSuccess();
      }

      private void OnQuestFailedWithRejectionOrTimeout()
      {
        this.AddLog(this._onQuestFailedWithRejectionLogText);
        TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -20)
        });
        this.RelationshipChangeWithQuestGiver = -5;
        this.ApplyQuestFailConsequences();
      }

      private void OnBattleWonWithBetrayal()
      {
        this.AddLog(this._onQuestFailedWithBetrayalLogText);
        this.RelationshipChangeWithQuestGiver = -15;
        if (!this._rivalGangLeader.IsDead)
          ChangeRelationAction.ApplyPlayerRelation(this._rivalGangLeader, 5);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold * 2);
        TraitLevelingHelper.OnIssueSolvedThroughBetrayal(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        this._rivalGangLeader.AddPower(10f);
        this.ApplyQuestFailConsequences();
        this.CompleteQuestWithBetrayal();
      }

      private void OnBattleLostWithBetrayal()
      {
        this.AddLog(this._onQuestFailedWithBetrayalLogText);
        this.RelationshipChangeWithQuestGiver = -10;
        if (!this._rivalGangLeader.IsDead)
          ChangeRelationAction.ApplyPlayerRelation(this._rivalGangLeader, -5);
        this._rivalGangLeader.AddPower(-10f);
        TraitLevelingHelper.OnIssueSolvedThroughBetrayal(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        this.ApplyQuestFailConsequences();
        this.CompleteQuestWithBetrayal();
      }

      private void OnQuestFailedWithDefeat()
      {
        this.RelationshipChangeWithQuestGiver = -5;
        this.AddLog(this._onQuestFailedWithDefeatLogText);
        this.ApplyQuestFailConsequences();
        this.CompleteQuestWithFail();
      }

      private void ApplyQuestFailConsequences()
      {
        this.QuestGiver.AddPower(-10f);
        this._questSettlement.Town.Security += -10f;
        if (this._rivalGangLeaderParty == null || !this._rivalGangLeaderParty.IsActive)
          return;
        DestroyPartyAction.Apply((PartyBase) null, this._rivalGangLeaderParty);
      }

      protected override void OnFinalize()
      {
        if (this._rivalGangLeaderParty != null && this._rivalGangLeaderParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, this._rivalGangLeaderParty);
        if (this._allyGangLeaderParty != null && this._allyGangLeaderParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, this._allyGangLeaderParty);
        if (this._allyGangLeaderHenchmanHero != null && this._allyGangLeaderHenchmanHero.IsAlive)
        {
          this._allyGangLeaderHenchmanHero.SetNewOccupation(Occupation.NotAssigned);
          KillCharacterAction.ApplyByRemove(this._allyGangLeaderHenchmanHero);
        }
        if (this._rivalGangLeaderHenchmanHero == null || !this._rivalGangLeaderHenchmanHero.IsAlive)
          return;
        this._rivalGangLeaderHenchmanHero.SetNewOccupation(Occupation.NotAssigned);
        KillCharacterAction.ApplyByRemove(this._rivalGangLeaderHenchmanHero);
      }

      internal static void AutoGeneratedStaticCollectObjectsRivalGangMovingInIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._rivalGangLeader);
        collectedObjects.Add((object) this._rivalGangLeaderParty);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this._preparationCompletionTime, collectedObjects);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this._questTimeoutTime, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValue_rivalGangLeader(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._rivalGangLeader;
      }

      internal static object AutoGeneratedGetMemberValue_timeoutDurationInDays(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._timeoutDurationInDays;
      }

      internal static object AutoGeneratedGetMemberValue_isFinalStage(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._isFinalStage;
      }

      internal static object AutoGeneratedGetMemberValue_isReadyToBeFinalized(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._isReadyToBeFinalized;
      }

      internal static object AutoGeneratedGetMemberValue_hasBetrayedQuestGiver(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._hasBetrayedQuestGiver;
      }

      internal static object AutoGeneratedGetMemberValue_rivalGangLeaderParty(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._rivalGangLeaderParty;
      }

      internal static object AutoGeneratedGetMemberValue_preparationCompletionTime(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._preparationCompletionTime;
      }

      internal static object AutoGeneratedGetMemberValue_questTimeoutTime(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._questTimeoutTime;
      }

      internal static object AutoGeneratedGetMemberValue_preparationsComplete(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._preparationsComplete;
      }

      internal static object AutoGeneratedGetMemberValue_rewardGold(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._rewardGold;
      }

      internal static object AutoGeneratedGetMemberValue_issueDifficulty(object o)
      {
        return (object) ((RivalGangMovingInIssueBehavior.RivalGangMovingInIssueQuest) o)._issueDifficulty;
      }
    }
  }
}
