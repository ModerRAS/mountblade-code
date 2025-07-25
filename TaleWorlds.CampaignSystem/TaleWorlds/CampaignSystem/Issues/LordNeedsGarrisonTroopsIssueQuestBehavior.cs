// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.LordNeedsGarrisonTroopsIssueQuestBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
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
  public class LordNeedsGarrisonTroopsIssueQuestBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency LordNeedsGarrisonTroopsIssueFrequency = IssueBase.IssueFrequency.Common;
    private LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest _cachedQuest;

    private static LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest Instance
    {
      get
      {
        LordNeedsGarrisonTroopsIssueQuestBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<LordNeedsGarrisonTroopsIssueQuestBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest troopsIssueQuest)
          {
            campaignBehavior._cachedQuest = troopsIssueQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      string optionText = "{=FirEOQaI}Talk to the garrison commander";
      gameStarter.AddGameMenuOption("town", "talk_to_garrison_commander_town", optionText, new GameMenuOption.OnConditionDelegate(this.talk_to_garrison_commander_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_garrison_commander_on_consequence), index: 2);
      gameStarter.AddGameMenuOption("town_guard", "talk_to_garrison_commander_town", optionText, new GameMenuOption.OnConditionDelegate(this.talk_to_garrison_commander_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_garrison_commander_on_consequence), index: 2);
      gameStarter.AddGameMenuOption("castle_guard", "talk_to_garrison_commander_castle", optionText, new GameMenuOption.OnConditionDelegate(this.talk_to_garrison_commander_on_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_garrison_commander_on_consequence), index: 2);
    }

    private bool talk_to_garrison_commander_on_condition(MenuCallbackArgs args)
    {
      if (LordNeedsGarrisonTroopsIssueQuestBehavior.Instance == null)
        return false;
      if (Settlement.CurrentSettlement == LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement && LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement.Town?.GarrisonParty == null)
      {
        args.IsEnabled = false;
        args.Tooltip = new TextObject("{=JmoOJX4e}There is no one in the garrison to receive the troops requested. You should wait until someone arrives.");
      }
      args.optionLeaveType = GameMenuOption.LeaveType.LeaveTroopsAndFlee;
      args.OptionQuestData = GameMenuOption.IssueQuestFlags.ActiveIssue;
      return Settlement.CurrentSettlement == LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement;
    }

    private void talk_to_garrison_commander_on_consequence(MenuCallbackArgs args)
    {
      CharacterObject characterObject = LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement.OwnerClan.Culture.EliteBasicTroop;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsInfantry && characterObject.Level < troopRosterElement.Character.Level)
          characterObject = troopRosterElement.Character;
      }
      LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._selectedCharacterToTalk = characterObject;
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._selectedCharacterToTalk, LordNeedsGarrisonTroopsIssueQuestBehavior.Instance._settlement.Town?.GarrisonParty.Party));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private bool ConditionsHold(Hero issueGiver, out Settlement selectedSettlement)
    {
      selectedSettlement = (Settlement) null;
      if (!issueGiver.IsLord || issueGiver.Clan.Leader != issueGiver || issueGiver.IsMinorFactionHero || issueGiver.Clan == Clan.PlayerClan)
        return false;
      foreach (Settlement settlement in (List<Settlement>) issueGiver.Clan.Settlements)
      {
        if (settlement.IsCastle)
        {
          MobileParty garrisonParty = settlement.Town.GarrisonParty;
          if ((garrisonParty != null ? (garrisonParty.MemberRoster.TotalHealthyCount < 120 ? 1 : 0) : 0) != 0)
          {
            selectedSettlement = settlement;
            break;
          }
        }
        if (settlement.IsTown)
        {
          MobileParty garrisonParty = settlement.Town.GarrisonParty;
          if ((garrisonParty != null ? (garrisonParty.MemberRoster.TotalHealthyCount < 150 ? 1 : 0) : 0) != 0)
          {
            selectedSettlement = settlement;
            break;
          }
        }
      }
      return selectedSettlement != null;
    }

    public void OnCheckForIssue(Hero hero)
    {
      Settlement selectedSettlement;
      if (this.ConditionsHold(hero, out selectedSettlement))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue), IssueBase.IssueFrequency.Common, (object) selectedSettlement));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue), IssueBase.IssueFrequency.Common));
    }

    private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue(issueOwner, pid.RelatedObject as Settlement);
    }

    public class LordNeedsGarrisonTroopsIssue : IssueBase
    {
      private const int QuestDurationInDays = 30;
      private const int CompanionRequiredSkillLevel = 120;
      [SaveableField(60)]
      private Settlement _settlement;
      [SaveableField(30)]
      private CharacterObject _neededTroopType;

      internal static void AutoGeneratedStaticCollectObjectsLordNeedsGarrisonTroopsIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._settlement);
        collectedObjects.Add((object) this._neededTroopType);
      }

      internal static object AutoGeneratedGetMemberValue_settlement(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue) o)._settlement;
      }

      internal static object AutoGeneratedGetMemberValue_neededTroopType(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue) o)._neededTroopType;
      }

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
      }

      private int NumberOfTroopToBeRecruited
      {
        get => 3 + (int) ((double) this.IssueDifficultyMultiplier * 18.0);
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 5 + MathF.Ceiling(8f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 3 + MathF.Ceiling(4f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get
        {
          return (int) (1500.0 + (double) (Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(this._neededTroopType, Hero.MainHero) * this.NumberOfTroopToBeRecruited) * 1.5);
        }
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          return new TextObject("{=ZuTvTGsh}These wars have taken a toll on my men. The bravest often fall first, they say, and fewer and fewer families are willing to let their sons join my banner. But the wars don't stop because I have problems.[if:convo_undecided_closed][ib:closed]");
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get
        {
          TextObject parent = new TextObject("{=tTM6nPul}What can I do for you, {?ISSUE_OWNER.GENDER}madam{?}sir{\\?}?");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=driH06vI}I need more recruits in {SETTLEMENT}'s garrison. Since I'll be elsewhere... maybe you can recruit {NUMBER_OF_TROOP_TO_BE_RECRUITED} {TROOP_TYPE} and bring them to the garrison for me?[if:convo_undecided_open][ib:normal]");
          explanationByIssueGiver.SetTextVariable("SETTLEMENT", this._settlement.Name);
          explanationByIssueGiver.SetTextVariable("TROOP_TYPE", this._neededTroopType.EncyclopediaLinkWithName);
          explanationByIssueGiver.SetTextVariable("NUMBER_OF_TROOP_TO_BE_RECRUITED", this.NumberOfTroopToBeRecruited);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=igXcCqdo}One of your trusted companions who knows how to lead men can go around with {ALTERNATIVE_SOLUTION_MAN_COUNT} horsemen and pick some up. One way or the other I will pay {REWARD_GOLD}{GOLD_ICON} denars in return for your services. What do you say?[if:convo_thinking]");
          explanationByIssueGiver.SetTextVariable("ALTERNATIVE_SOLUTION_MAN_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          explanationByIssueGiver.SetTextVariable("REWARD_GOLD", this.RewardGold);
          explanationByIssueGiver.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=YHSm72Ln}I'll find your recruits and bring them to {SETTLEMENT} garrison.");
          solutionAcceptByPlayer.SetTextVariable("SETTLEMENT", this._settlement.Name);
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=JPclWyyr}My companion can handle it... So, {NUMBER_OF_TROOP_TO_BE_RECRUITED} {TROOP_TYPE} to {SETTLEMENT}.");
          solutionAcceptByPlayer.SetTextVariable("SETTLEMENT", this._settlement.Name);
          solutionAcceptByPlayer.SetTextVariable("TROOP_TYPE", this._neededTroopType.EncyclopediaLinkWithName);
          solutionAcceptByPlayer.SetTextVariable("NUMBER_OF_TROOP_TO_BE_RECRUITED", this.NumberOfTroopToBeRecruited);
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          TextObject alternativeSolution = new TextObject("{=lWrmxsYR}I haven't heard any news from {SETTLEMENT}, but I realize it might take some time for your men to deliver the recruits.");
          alternativeSolution.SetTextVariable("SETTLEMENT", this._settlement.Name);
          return alternativeSolution;
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get => new TextObject("{=WUWzyzWI}Thank you. Your help will be remembered.");
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=M560TDza}{ISSUE_OWNER.LINK}, the {?ISSUE_OWNER.GENDER}lady{?}lord{\\?} of {QUEST_SETTLEMENT}, told you that {?ISSUE_OWNER.GENDER}she{?}he{\\?} needs more troops in {?ISSUE_OWNER.GENDER}her{?}his{\\?} garrison. {?ISSUE_OWNER.GENDER}She{?}He{\\?} is willing to pay {REWARD}{GOLD_ICON} for your services. You asked your companion to deploy {NUMBER_OF_TROOP_TO_BE_RECRUITED} {TROOP_TYPE} troops to {QUEST_SETTLEMENT}'s garrison.");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this._settlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("TROOP_TYPE", this._neededTroopType.EncyclopediaLinkWithName);
          parent.SetTextVariable("REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("NUMBER_OF_TROOP_TO_BE_RECRUITED", this.NumberOfTroopToBeRecruited);
          return parent;
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      public override TextObject Title
      {
        get
        {
          TextObject parent = new TextObject("{=g6Ra6LUY}{ISSUE_OWNER.NAME} needs garrison troops in {SETTLEMENT}");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._settlement.Name);
          return parent;
        }
      }

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=BOAaF6x5}{ISSUE_OWNER.NAME} asks for help to increase troop levels in {SETTLEMENT}");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._settlement.Name);
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=sfFkYm0a}Your companion has successfully brought the troops {ISSUE_OWNER.LINK} requested. You received {REWARD}{GOLD_ICON}.");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      public LordNeedsGarrisonTroopsIssue(Hero issueOwner, Settlement selectedSettlement)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
        this._settlement = selectedSettlement;
        this._neededTroopType = CharacterHelper.GetTroopTree(this.IssueOwner.Culture.BasicTroop, 3f, 3f).GetRandomElementInefficiently<CharacterObject>();
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.SettlementSecurity ? -0.5f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Leadership) >= hero.GetSkillValue(DefaultSkills.Steward) ? DefaultSkills.Leadership : DefaultSkills.Steward, 120);
      }

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, mountedRequired: true);
      }

      public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
      {
        return character.IsMounted;
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, mountedRequired: true);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (800.0 + 900.0 * (double) this.IssueDifficultyMultiplier);
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        GainRenownAction.Apply(Hero.MainHero, 1f);
        this.RelationshipChangeWithIssueOwner = 2;
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Common;

      public override bool IssueStayAliveConditions()
      {
        bool flag = false;
        if (this._settlement.IsTown)
        {
          MobileParty garrisonParty = this._settlement.Town.GarrisonParty;
          flag = garrisonParty != null && garrisonParty.MemberRoster.TotalRegulars < 200;
        }
        else if (this._settlement.IsCastle)
        {
          MobileParty garrisonParty = this._settlement.Town.GarrisonParty;
          flag = garrisonParty != null && garrisonParty.MemberRoster.TotalRegulars < 160;
        }
        return this._settlement.OwnerClan == this.IssueOwner.Clan & flag && !this.IssueOwner.IsDead && this.IssueOwner.Clan != Clan.PlayerClan;
      }

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flags,
        out Hero relationHero,
        out SkillObject skill)
      {
        skill = (SkillObject) null;
        relationHero = (Hero) null;
        flags = IssueBase.PreconditionFlags.None;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flags |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (Hero.MainHero.IsKingdomLeader)
          flags |= IssueBase.PreconditionFlags.MainHeroIsKingdomLeader;
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flags |= IssueBase.PreconditionFlags.AtWar;
        return flags == IssueBase.PreconditionFlags.None;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(30f), this.RewardGold, this._settlement, this.NumberOfTroopToBeRecruited, this._neededTroopType);
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -5;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }
    }

    public class LordNeedsGarrisonTroopsIssueQuest : QuestBase
    {
      internal Settlement _settlement;
      [SaveableField(10)]
      private string _settlementStringID;
      private int _collectedTroopAmount;
      [SaveableField(20)]
      private int _requestedTroopAmount;
      [SaveableField(30)]
      private int _rewardGold;
      [SaveableField(40)]
      private CharacterObject _requestedTroopType;
      internal CharacterObject _selectedCharacterToTalk;
      [SaveableField(50)]
      private JournalLog _playerStartsQuestLog;

      internal static void AutoGeneratedStaticCollectObjectsLordNeedsGarrisonTroopsIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._requestedTroopType);
        collectedObjects.Add((object) this._playerStartsQuestLog);
      }

      internal static object AutoGeneratedGetMemberValue_settlementStringID(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) o)._settlementStringID;
      }

      internal static object AutoGeneratedGetMemberValue_requestedTroopAmount(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) o)._requestedTroopAmount;
      }

      internal static object AutoGeneratedGetMemberValue_rewardGold(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) o)._rewardGold;
      }

      internal static object AutoGeneratedGetMemberValue_requestedTroopType(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) o)._requestedTroopType;
      }

      internal static object AutoGeneratedGetMemberValue_playerStartsQuestLog(object o)
      {
        return (object) ((LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest) o)._playerStartsQuestLog;
      }

      public override TextObject Title
      {
        get
        {
          TextObject parent = new TextObject("{=g6Ra6LUY}{ISSUE_OWNER.NAME} needs garrison troops in {SETTLEMENT}");
          StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._settlement.Name);
          return parent;
        }
      }

      public override bool IsRemainingTimeHidden => false;

      private TextObject _playerStartsQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=FViaQrbV}{QUEST_GIVER.LINK}, the {?QUEST_GIVER.GENDER}lady{?}lord{\\?} of {QUEST_SETTLEMENT}, told you that {?QUEST_GIVER.GENDER}she{?}he{\\?} needs more troops in {?QUEST_GIVER.GENDER}her{?}his{\\?} garrison. {?QUEST_GIVER.GENDER}She{?}He{\\?} is willing to pay {REWARD}{GOLD_ICON} for your services. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to deliver {NUMBER_OF_TROOP_TO_BE_RECRUITED} {TROOP_TYPE} troops to garrison commander in {QUEST_SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TROOP_TYPE", this._requestedTroopType.Name);
          parent.SetTextVariable("REWARD", this._rewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("NUMBER_OF_TROOP_TO_BE_RECRUITED", this._requestedTroopAmount);
          parent.SetTextVariable("QUEST_SETTLEMENT", this._settlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _successQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=UEn466Y6}You have successfully brought the troops {QUEST_GIVER.LINK} requested. You received {REWARD} gold in return for your service.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("REWARD", this._rewardGold);
          return parent;
        }
      }

      private TextObject _questGiverLostTheSettlementLogText
      {
        get
        {
          TextObject parent = new TextObject("{=zS68eOsl}{QUEST_GIVER.LINK} has lost {SETTLEMENT} and your agreement with {?QUEST_GIVER.GENDER}her{?}his{\\?} canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._settlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _questFailedWarDeclaredLogText
      {
        get
        {
          TextObject parent = new TextObject("{=JIWVeTMD}Your clan is now at war with {QUEST_GIVER.LINK}'s realm. Your agreement with {QUEST_GIVER.LINK} was canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this._settlement.EncyclopediaLinkWithName);
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

      private TextObject _timeOutLogText
      {
        get => new TextObject("{=cnaxgN5b}You have failed to bring the troops in time.");
      }

      public LordNeedsGarrisonTroopsIssueQuest(
        string questId,
        Hero giverHero,
        CampaignTime duration,
        int rewardGold,
        Settlement selectedSettlement,
        int requestedTroopAmount,
        CharacterObject requestedTroopType)
        : base(questId, giverHero, duration, rewardGold)
      {
        this._settlement = selectedSettlement;
        this._settlementStringID = selectedSettlement.StringId;
        this._requestedTroopAmount = requestedTroopAmount;
        this._collectedTroopAmount = 0;
        this._requestedTroopType = requestedTroopType;
        this._rewardGold = rewardGold;
        this.SetDialogs();
        this.AddTrackedObject((ITrackableCampaignObject) this._settlement);
        this.InitializeQuestOnCreation();
      }

      private bool DialogCondition() => Hero.OneToOneConversationHero == this.QuestGiver;

      protected override void SetDialogs()
      {
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetGarrisonCommanderDialogFlow(), (object) this);
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=9iZg4vpz}Thank you. You will be rewarded when you are done.[if:convo_mocking_aristocratic]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=o6BunhbE}Have you brought my troops?[if:convo_undecided_open]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(MapEventHelper.OnConversationEnd))).BeginPlayerOptions().PlayerOption(new TextObject("{=eC4laxrj}I'm still out recruiting.")).NpcLine(new TextObject("{=TxxbCbUc}Good. I have faith in you...[if:convo_mocking_aristocratic]")).CloseDialog().PlayerOption(new TextObject("{=DbraLcwM}I need more time to find proper men.")).NpcLine(new TextObject("{=Mw5bJ5Fb}Every day without a proper garrison is a day that we're vulnerable. Do hurry, if you can.[if:convo_normal]")).CloseDialog().EndPlayerOptions();
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this._playerStartsQuestLog = this.AddDiscreteLog(this._playerStartsQuestLogText, new TextObject("{=WIb9VvEM}Collected Troops"), this._collectedTroopAmount, this._requestedTroopAmount);
      }

      private DialogFlow GetGarrisonCommanderDialogFlow()
      {
        TextObject textObject = new TextObject("{=abda9slW}We were waiting for you, {?PLAYER.GENDER}madam{?}sir{\\?}. Have you brought the troops that our {?ISSUE_OWNER.GENDER}lady{?}lord{\\?} requested?");
        StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.QuestGiver.CharacterObject, textObject);
        return DialogFlow.CreateDialogFlow("start", 300).NpcLine(textObject).Condition((ConversationSentence.OnConditionDelegate) (() => CharacterObject.OneToOneConversationCharacter == this._selectedCharacterToTalk)).BeginPlayerOptions().PlayerOption(new TextObject("{=ooHbl6JU}Here are your men.")).ClickableCondition(new ConversationSentence.OnClickableConditionDelegate(this.PlayerGiveTroopsToGarrisonCommanderCondition)).NpcLine(new TextObject("{=Ouy4sN5b}Thank you.[if:convo_mocking_aristocratic]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerTransferredTroopsToGarrisonCommander))).CloseDialog().PlayerOption(new TextObject("{=G5tyQj6N}Not yet.")).NpcLine(new TextObject("{=yPOZd1wb}Very well. We'll keep waiting.[if:convo_normal]")).CloseDialog().EndPlayerOptions();
      }

      private void PlayerTransferredTroopsToGarrisonCommander()
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character == this._requestedTroopType)
          {
            MobileParty.MainParty.MemberRoster.AddToCounts(this._requestedTroopType, -this._requestedTroopAmount);
            break;
          }
        }
        this.AddLog(this._successQuestLogText);
        this.RelationshipChangeWithQuestGiver = 2;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
        this.CompleteQuestWithSuccess();
      }

      private bool PlayerGiveTroopsToGarrisonCommanderCondition(out TextObject explanation)
      {
        int num = 0;
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character == this._requestedTroopType)
          {
            num = troopRosterElement.Number;
            break;
          }
        }
        if (num < this._requestedTroopAmount)
        {
          explanation = new TextObject("{=VFO2aQ4l}You don't have enough men.");
          return false;
        }
        explanation = TextObject.Empty;
        return true;
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this._settlement = Settlement.Find(this._settlementStringID);
        this.CalculateTroopAmount();
        this.SetDialogs();
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
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

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (settlement != this._settlement || this._settlement.OwnerClan == this.QuestGiver.Clan)
          return;
        this.AddLog(this._questGiverLostTheSettlementLogText);
        this.CompleteQuestWithCancel();
      }

      protected override void HourlyTick()
      {
        if (!this.IsOngoing)
          return;
        this.CalculateTroopAmount();
        this._collectedTroopAmount = MBMath.ClampInt(this._collectedTroopAmount, 0, this._requestedTroopAmount);
        this._playerStartsQuestLog.UpdateCurrentProgress(this._collectedTroopAmount);
      }

      private void CalculateTroopAmount()
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character == this._requestedTroopType)
          {
            this._collectedTroopAmount = MobileParty.MainParty.MemberRoster.GetTroopCount(troopRosterElement.Character);
            break;
          }
        }
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
        this.CompleteQuestWithCancel(this._questFailedWarDeclaredLogText);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._questFailedWarDeclaredLogText);
      }

      protected override void OnTimedOut()
      {
        this.AddLog(this._timeOutLogText);
        this.RelationshipChangeWithQuestGiver = -5;
      }
    }

    public class LordNeedsGarrisonTroopsIssueQuestTypeDefiner : SaveableTypeDefiner
    {
      public LordNeedsGarrisonTroopsIssueQuestTypeDefiner()
        : base(5080000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssue), 1);
        this.AddClassDefinition(typeof (LordNeedsGarrisonTroopsIssueQuestBehavior.LordNeedsGarrisonTroopsIssueQuest), 2);
      }
    }
  }
}
