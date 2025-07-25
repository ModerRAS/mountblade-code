// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.MerchantArmyOfPoachersIssueBehavior
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
using TaleWorlds.CampaignSystem.GameState;
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
  public class MerchantArmyOfPoachersIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency ArmyOfPoachersIssueFrequency = IssueBase.IssueFrequency.Common;
    private MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest _cachedQuest;

    private void engage_poachers_consequence(MenuCallbackArgs args)
    {
      MerchantArmyOfPoachersIssueBehavior.Instance.StartQuestBattle();
    }

    private static MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest Instance
    {
      get
      {
        MerchantArmyOfPoachersIssueBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<MerchantArmyOfPoachersIssueBehavior>();
        if (campaignBehavior._cachedQuest != null && campaignBehavior._cachedQuest.IsOngoing)
          return campaignBehavior._cachedQuest;
        foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
        {
          if (quest is MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest poachersIssueQuest)
          {
            campaignBehavior._cachedQuest = poachersIssueQuest;
            return campaignBehavior._cachedQuest;
          }
        }
        return (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) null;
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private bool poachers_menu_back_condition(MenuCallbackArgs args) => Hero.MainHero.IsWounded;

    private void OnSessionLaunched(CampaignGameStarter gameStarter)
    {
      gameStarter.AddGameMenu("army_of_poachers_village", "{=eaQxeRh6}A boy runs out of the village and asks you to talk to the leader of the poachers. The villagers want to avoid a fight outside their homes.", new OnInitDelegate(this.army_of_poachers_village_on_init));
      gameStarter.AddGameMenuOption("army_of_poachers_village", "engage_the_poachers", "{=xF7he8fZ}Fight the poachers", new GameMenuOption.OnConditionDelegate(this.engage_poachers_condition), new GameMenuOption.OnConsequenceDelegate(this.engage_poachers_consequence));
      gameStarter.AddGameMenuOption("army_of_poachers_village", "talk_to_the_poachers", "{=wwJGE28v}Negotiate with the poachers", new GameMenuOption.OnConditionDelegate(this.talk_to_leader_of_poachers_condition), new GameMenuOption.OnConsequenceDelegate(this.talk_to_leader_of_poachers_consequence));
      gameStarter.AddGameMenuOption("army_of_poachers_village", "back_poachers", "{=E1OwmQFb}Back", new GameMenuOption.OnConditionDelegate(this.poachers_menu_back_condition), new GameMenuOption.OnConsequenceDelegate(this.poachers_menu_back_consequence));
    }

    private void army_of_poachers_village_on_init(MenuCallbackArgs args)
    {
      if (MerchantArmyOfPoachersIssueBehavior.Instance == null || !MerchantArmyOfPoachersIssueBehavior.Instance.IsOngoing)
        return;
      args.MenuContext.SetBackgroundMeshName(MerchantArmyOfPoachersIssueBehavior.Instance._questVillage.Settlement.SettlementComponent.WaitMeshName);
      if (MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty == null && !Hero.MainHero.IsWounded)
        MerchantArmyOfPoachersIssueBehavior.Instance.CreatePoachersParty();
      if (MerchantArmyOfPoachersIssueBehavior.Instance._isReadyToBeFinalized && PlayerEncounter.Current != null)
      {
        bool flag = PlayerEncounter.Battle.WinningSide == PlayerEncounter.Battle.PlayerSide;
        PlayerEncounter.Update();
        if (PlayerEncounter.Current == null)
        {
          MerchantArmyOfPoachersIssueBehavior.Instance._isReadyToBeFinalized = false;
          if (flag)
            MerchantArmyOfPoachersIssueBehavior.Instance.QuestSuccessWithPlayerDefeatedPoachers();
          else
            MerchantArmyOfPoachersIssueBehavior.Instance.QuestFailWithPlayerDefeatedAgainstPoachers();
        }
        else if (PlayerEncounter.Battle.WinningSide == BattleSideEnum.None)
        {
          PlayerEncounter.LeaveEncounter = true;
          PlayerEncounter.Update();
          MerchantArmyOfPoachersIssueBehavior.Instance.QuestFailWithPlayerDefeatedAgainstPoachers();
        }
        else if (flag && PlayerEncounter.Current != null && Game.Current.GameStateManager.ActiveState is MapState)
        {
          PlayerEncounter.Finish();
          MerchantArmyOfPoachersIssueBehavior.Instance.QuestSuccessWithPlayerDefeatedPoachers();
        }
      }
      if (MerchantArmyOfPoachersIssueBehavior.Instance == null || !MerchantArmyOfPoachersIssueBehavior.Instance._talkedToPoachersBattleWillStart)
        return;
      MerchantArmyOfPoachersIssueBehavior.Instance.StartQuestBattle();
    }

    private bool engage_poachers_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Mission;
      if (Hero.MainHero.IsWounded)
      {
        args.Tooltip = new TextObject("{=gEHEQazX}You're heavily wounded and not fit for the fight. Come back when you're ready.");
        args.IsEnabled = false;
      }
      return true;
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private bool talk_to_leader_of_poachers_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Conversation;
      if (Hero.MainHero.IsWounded)
      {
        args.Tooltip = new TextObject("{=gEHEQazX}You're heavily wounded and not fit for the fight. Come back when you're ready.");
        args.IsEnabled = false;
      }
      return true;
    }

    private void poachers_menu_back_consequence(MenuCallbackArgs args)
    {
      PlayerEncounter.LeaveSettlement();
      PlayerEncounter.Finish();
    }

    private bool ConditionsHold(Hero issueGiver, out Village questVillage)
    {
      questVillage = (Village) null;
      if (issueGiver.CurrentSettlement == null)
        return false;
      questVillage = issueGiver.CurrentSettlement.BoundVillages.GetRandomElementWithPredicate<Village>((Func<Village, bool>) (x => !x.Settlement.IsUnderRaid && !x.Settlement.IsRaided));
      if (questVillage == null || !issueGiver.IsMerchant || issueGiver.GetTraitLevel(DefaultTraits.Mercy) + issueGiver.GetTraitLevel(DefaultTraits.Honor) >= 0)
        return false;
      Town town = issueGiver.CurrentSettlement.Town;
      return town != null && (double) town.Security <= 60.0;
    }

    private void talk_to_leader_of_poachers_consequence(MenuCallbackArgs args)
    {
      CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty.Party), MerchantArmyOfPoachersIssueBehavior.Instance._poachersParty.Party));
    }

    public void OnCheckForIssue(Hero hero)
    {
      Village questVillage;
      if (this.ConditionsHold(hero, out questVillage))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), IssueBase.IssueFrequency.Common, (object) questVillage));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), IssueBase.IssueFrequency.Common));
    }

    private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue(issueOwner, pid.RelatedObject as Village);
    }

    public class MerchantArmyOfPoachersIssue : IssueBase
    {
      private const int AlternativeSolutionTroopTierRequirement = 2;
      private const int CompanionRequiredSkillLevel = 150;
      private const int MinimumRequiredMenCount = 15;
      private const int IssueDuration = 15;
      private const int QuestTimeLimit = 20;
      [SaveableField(10)]
      private Village _questVillage;

      internal static void AutoGeneratedStaticCollectObjectsMerchantArmyOfPoachersIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._questVillage);
      }

      internal static object AutoGeneratedGetMemberValue_questVillage(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue) o)._questVillage;
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 12 + MathF.Ceiling(28f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 3 + MathF.Ceiling(5f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get => (int) (500.0 + 3000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get
        {
          return IssueBase.AlternativeSolutionScaleFlag.Casualties | IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
        }
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          return new TextObject("{=Jk3mDlU6}Yeah... I've got some problems. A few years ago, I needed hides for my tannery and I hired some hunters. I didn't ask too many questions about where they came by the skins they sold me. Well, that was a bit of mistake. Now they've banded together as a gang and are trying to muscle me out of the leather business.[ib:closed2][if:convo_thinking]");
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=apuNQC2W}What can I do for you?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=LbTETjZu}I want you to crush them. Go to {VILLAGE} and give them a lesson they won't forget.[ib:closed2][if:convo_grave]");
          explanationByIssueGiver.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=2ELhox6C}If you don't want to get involved in this yourself, leave one of your capable companions and {NUMBER_OF_TROOPS} men for some days.[ib:closed][if:convo_grave]");
          explanationByIssueGiver.SetTextVariable("NUMBER_OF_TROOPS", this.GetTotalAlternativeSolutionNeededMenCount());
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=b6naGx6H}I'll rid you of those poachers myself.");
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get => new TextObject("{=lA14Ubal}I can send a companion to hunt these poachers.");
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          return new TextObject("{=Xmtlrrmf}Thank you.[ib:normal][if:convo_normal]  Don't forget to warn your men. These poachers are not ordinary bandits. Good luck.");
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=51ahPi69}I understand that your men are still chasing those poachers. I realize that this mess might take a little time to clean up.[ib:normal2][if:convo_grave]");
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=428B377z}{ISSUE_GIVER.LINK}, a merchant of {QUEST_GIVER_SETTLEMENT}, told you that the poachers {?ISSUE_GIVER.GENDER}she{?}he{\\?} hired are now out of control. You asked {COMPANION.LINK} to take {NEEDED_MEN_COUNT} of your men to go to {QUEST_VILLAGE} and kill the poachers. They should rejoin your party in {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("QUEST_GIVER_SETTLEMENT", this.IssueOwner.CurrentSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("NEEDED_MEN_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          parent.SetTextVariable("QUEST_VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return parent;
        }
      }

      public override TextObject Title => new TextObject("{=iHFo2kjz}Army of Poachers");

      public override TextObject Description
      {
        get
        {
          TextObject description = new TextObject("{=NCC4VUOc}{ISSUE_GIVER.LINK} wants you to get rid of the poachers who once worked for {?ISSUE_GIVER.GENDER}her{?}him{\\?} but are now out of control.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject);
          return description;
        }
      }

      public MerchantArmyOfPoachersIssue(Hero issueOwner, Village questVillage)
        : base(issueOwner, CampaignTime.DaysFromNow(15f))
      {
        this._questVillage = questVillage;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.SettlementProsperity)
          return 0.2f;
        if (issueEffect == DefaultIssueEffects.SettlementSecurity)
          return -1f;
        return issueEffect == DefaultIssueEffects.SettlementLoyalty || issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.2f : 0.0f;
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

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        int skillValue1 = hero.GetSkillValue(DefaultSkills.Bow);
        int skillValue2 = hero.GetSkillValue(DefaultSkills.Crossbow);
        int skillValue3 = hero.GetSkillValue(DefaultSkills.Throwing);
        return skillValue1 >= skillValue2 && skillValue1 >= skillValue3 ? (DefaultSkills.Bow, 150) : (skillValue2 >= skillValue3 ? DefaultSkills.Crossbow : DefaultSkills.Throwing, 150);
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Common;

      public override bool IssueStayAliveConditions()
      {
        return !this._questVillage.Settlement.IsUnderRaid && !this._questVillage.Settlement.IsRaided && (double) this.IssueOwner.CurrentSettlement.Town.Security <= 90.0;
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
        if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 15)
          flag |= IssueBase.PreconditionFlags.NotEnoughTroops;
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        return flag == IssueBase.PreconditionFlags.None;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(20f), this._questVillage, this.IssueDifficultyMultiplier, this.RewardGold);
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (800.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.RelationshipChangeWithIssueOwner = 5;
        this.IssueOwner.AddPower(30f);
        this.IssueOwner.CurrentSettlement.Town.Prosperity += 50f;
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -5;
        this.IssueOwner.AddPower(-50f);
        this.IssueOwner.CurrentSettlement.Town.Prosperity -= 30f;
        this.IssueOwner.CurrentSettlement.Town.Security -= 5f;
        TraitLevelingHelper.OnIssueFailed(this.IssueOwner, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
        });
      }
    }

    public class MerchantArmyOfPoachersIssueQuest : QuestBase
    {
      [SaveableField(10)]
      internal MobileParty _poachersParty;
      [SaveableField(20)]
      internal Village _questVillage;
      [SaveableField(30)]
      internal bool _talkedToPoachersBattleWillStart;
      [SaveableField(40)]
      internal bool _isReadyToBeFinalized;
      [SaveableField(50)]
      internal bool _persuasionTriedOnce;
      [SaveableField(60)]
      internal float _difficultyMultiplier;
      [SaveableField(70)]
      internal int _rewardGold;
      private PersuasionTask _task;
      private const PersuasionDifficulty Difficulty = PersuasionDifficulty.MediumHard;

      internal static void AutoGeneratedStaticCollectObjectsMerchantArmyOfPoachersIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._poachersParty);
        collectedObjects.Add((object) this._questVillage);
      }

      internal static object AutoGeneratedGetMemberValue_poachersParty(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._poachersParty;
      }

      internal static object AutoGeneratedGetMemberValue_questVillage(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._questVillage;
      }

      internal static object AutoGeneratedGetMemberValue_talkedToPoachersBattleWillStart(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._talkedToPoachersBattleWillStart;
      }

      internal static object AutoGeneratedGetMemberValue_isReadyToBeFinalized(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._isReadyToBeFinalized;
      }

      internal static object AutoGeneratedGetMemberValue_persuasionTriedOnce(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._persuasionTriedOnce;
      }

      internal static object AutoGeneratedGetMemberValue_difficultyMultiplier(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._difficultyMultiplier;
      }

      internal static object AutoGeneratedGetMemberValue_rewardGold(object o)
      {
        return (object) ((MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest) o)._rewardGold;
      }

      public override TextObject Title => new TextObject("{=iHFo2kjz}Army of Poachers");

      public override bool IsRemainingTimeHidden => false;

      private TextObject _questStartedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=fk4ewfQh}{QUEST_GIVER.LINK}, a merchant of {SETTLEMENT}, told you that the poachers {?QUEST_GIVER.GENDER}she{?}he{\\?} hired before are now out of control. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to go to {VILLAGE} around midnight and kill the poachers.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _questCanceledTargetVillageRaided
      {
        get
        {
          TextObject targetVillageRaided = new TextObject("{=etYq1Tky}{VILLAGE} was raided and the poachers scattered.");
          targetVillageRaided.SetTextVariable("VILLAGE", this._questVillage.Settlement.EncyclopediaLinkWithName);
          return targetVillageRaided;
        }
      }

      private TextObject _questCanceledWarDeclared
      {
        get
        {
          TextObject parent = new TextObject("{=vW6kBki9}Your clan is now at war with {QUEST_GIVER.LINK}'s realm. Your agreement with {QUEST_GIVER.LINK} is canceled.");
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

      private TextObject _questFailedAfterTalkingWithProachers
      {
        get
        {
          TextObject parent = new TextObject("{=PIukmFYA}You decided not to get involved and left the village. You have failed to help {QUEST_GIVER.LINK} as promised.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questSuccessPlayerComesToAnAgreementWithPoachers
      {
        get => new TextObject("{=qPfJpwGa}You have persuaded the poachers to leave the district.");
      }

      private TextObject _questFailWithPlayerDefeatedAgainstPoachers
      {
        get
        {
          TextObject parent = new TextObject("{=p8Kfl5u6}You lost the battle against the poachers and failed to help {QUEST_GIVER.LINK} as promised.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questSuccessWithPlayerDefeatedPoachers
      {
        get
        {
          TextObject parent = new TextObject("{=8gNqLqFl}You have defeated the poachers and helped {QUEST_GIVER.LINK} as promised.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questFailedWithTimeOutLogText
      {
        get => new TextObject("{=HX7E09XJ}You failed to complete the quest in time.");
      }

      public MerchantArmyOfPoachersIssueQuest(
        string questId,
        Hero giverHero,
        CampaignTime duration,
        Village questVillage,
        float difficultyMultiplier,
        int rewardGold)
        : base(questId, giverHero, duration, rewardGold)
      {
        this._questVillage = questVillage;
        this._talkedToPoachersBattleWillStart = false;
        this._isReadyToBeFinalized = false;
        this._difficultyMultiplier = difficultyMultiplier;
        this._rewardGold = rewardGold;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      private bool SetStartDialogOnCondition()
      {
        if (this._poachersParty == null || CharacterObject.OneToOneConversationCharacter != ConversationHelper.GetConversationCharacterPartyLeader(this._poachersParty.Party))
          return false;
        MBTextManager.SetTextVariable("POACHER_PARTY_START_LINE", "{=j9MBwnWI}Well...Are you working for that merchant in the town ? So it's all fine when the rich folk trade in poached skins, but if we do it, armed men come to hunt us down.", false);
        if (this._persuasionTriedOnce)
          MBTextManager.SetTextVariable("POACHER_PARTY_START_LINE", "{=Nn06TSq9}Anything else to say?", false);
        return true;
      }

      private DialogFlow GetPoacherPartyDialogFlow()
      {
        DialogFlow dialog = DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=!}{POACHER_PARTY_START_LINE}").Condition((ConversationSentence.OnConditionDelegate) (() => this.SetStartDialogOnCondition())).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._task = this.GetPersuasionTask())).BeginPlayerOptions().PlayerOption("{=afbLOXbb}Maybe we can come to an agreement.").Condition((ConversationSentence.OnConditionDelegate) (() => !this._persuasionTriedOnce)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._persuasionTriedOnce = true)).GotoDialogState("start_poachers_persuasion").PlayerOption("{=mvw1ayGt}I'm here to do the job I agreed to do, outlaw. Give up or die.").NpcLine("{=hOVr77fd}You will never see the sunrise again![ib:warrior][if:convo_furious]").Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._talkedToPoachersBattleWillStart = true)).CloseDialog().PlayerOption("{=VJYEoOAc}Well... You have a point. Go on. We won't bother you any more.").NpcLine("{=wglTyBbx}Thank you, friend. Go in peace.[ib:normal][if:convo_approving]").Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
        {
          Campaign.Current.GameMenuManager.SetNextMenu("village");
          Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.QuestFailedAfterTalkingWithPoachers);
        })).CloseDialog().EndPlayerOptions().CloseDialog();
        this.AddPersuasionDialogs(dialog);
        return dialog;
      }

      private void AddPersuasionDialogs(DialogFlow dialog)
      {
        dialog.AddDialogLine("poachers_persuasion_check_accepted", "start_poachers_persuasion", "poachers_persuasion_start_reservation", "{=6P1ruzsC}Maybe...", new ConversationSentence.OnConditionDelegate(this.persuasion_start_with_poachers_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_start_with_poachers_on_consequence), (object) this);
        dialog.AddDialogLine("poachers_persuasion_rejected", "poachers_persuasion_start_reservation", "start", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.persuasion_failed_with_poachers_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_rejected_with_poachers_on_consequence), (object) this);
        dialog.AddDialogLine("poachers_persuasion_attempt", "poachers_persuasion_start_reservation", "poachers_persuasion_select_option", "{=wM77S68a}What's there to discuss?", (ConversationSentence.OnConditionDelegate) (() => !this.persuasion_failed_with_poachers_on_condition()), (ConversationSentence.OnConsequenceDelegate) null, (object) this);
        dialog.AddDialogLine("poachers_persuasion_success", "poachers_persuasion_start_reservation", "close_window", "{=JQKCPllJ}You've made your point.", new ConversationSentence.OnConditionDelegate(ConversationManager.GetPersuasionProgressSatisfied), new ConversationSentence.OnConsequenceDelegate(this.persuasion_complete_with_poachers_on_consequence), (object) this, 200);
        DialogFlow dialogFlow1 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_1_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_1_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_1);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_1_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
        dialogFlow1.AddPlayerLine("poachers_persuasion_select_option_1", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, (object) this, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
        DialogFlow dialogFlow2 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_2_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_2_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_2);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_2_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
        dialogFlow2.AddPlayerLine("poachers_persuasion_select_option_2", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, (object) this, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
        DialogFlow dialogFlow3 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_3_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_3_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_3);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_3_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
        dialogFlow3.AddPlayerLine("poachers_persuasion_select_option_3", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, (object) this, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
        DialogFlow dialogFlow4 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate4 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_4_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate4 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_4_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate7 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_4);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate4 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_4_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate8 = persuasionOptionDelegate7;
        dialogFlow4.AddPlayerLine("poachers_persuasion_select_option_4", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_4}", conditionDelegate4, consequenceDelegate4, (object) this, clickableConditionDelegate: clickableConditionDelegate4, persuasionOptionDelegate: persuasionOptionDelegate8);
        DialogFlow dialogFlow5 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate5 = new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_select_option_5_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate5 = new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_select_option_5_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate9 = new ConversationSentence.OnPersuasionOptionDelegate(this.poachers_persuasion_setup_option_5);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate5 = new ConversationSentence.OnClickableConditionDelegate(this.poachers_persuasion_clickable_option_5_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate10 = persuasionOptionDelegate9;
        dialogFlow5.AddPlayerLine("poachers_persuasion_select_option_5", "poachers_persuasion_select_option", "poachers_persuasion_selected_option_response", "{=!}{POACHERS_PERSUADE_ATTEMPT_5}", conditionDelegate5, consequenceDelegate5, (object) this, clickableConditionDelegate: clickableConditionDelegate5, persuasionOptionDelegate: persuasionOptionDelegate10);
        dialog.AddDialogLine("poachers_persuasion_select_option_reaction", "poachers_persuasion_selected_option_response", "poachers_persuasion_start_reservation", "{=!}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.poachers_persuasion_selected_option_response_on_condition), new ConversationSentence.OnConsequenceDelegate(this.poachers_persuasion_selected_option_response_on_consequence), (object) this);
      }

      private void persuasion_start_with_poachers_on_consequence()
      {
        ConversationManager.StartPersuasion(2f, 1f, 0.0f, 2f, 2f, 0.0f, PersuasionDifficulty.MediumHard);
      }

      private bool persuasion_start_with_poachers_on_condition()
      {
        return this._poachersParty != null && CharacterObject.OneToOneConversationCharacter == ConversationHelper.GetConversationCharacterPartyLeader(this._poachersParty.Party);
      }

      private PersuasionTask GetPersuasionTask()
      {
        PersuasionTask persuasionTask = new PersuasionTask(0);
        persuasionTask.FinalFailLine = new TextObject("{=l7Jt5tvt}This is how I earn my living, and all your clever talk doesn't make it any different. Leave now!");
        persuasionTask.TryLaterLine = new TextObject("{=!}TODO");
        persuasionTask.SpokenLine = new TextObject("{=wM77S68a}What's there to discuss?");
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Easy, false, new TextObject("{=cQCs72U7}You're not bad people. You can easily ply your trade somewhere else, somewhere safe.")));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=bioyMrUD}You are just a bunch of hunters. You don't stand a chance against us!"), canBlockOtherOption: true));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=FO1oruNy}You talk about poor folk, but you think the people here like their village turned into a nest of outlaws?")));
        TextObject textObject = new TextObject("{=S0NeQdLp}You had an agreement with {QUEST_GIVER.NAME}. Your word is your bond, no matter which side of the law you're on.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, textObject));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Hard, true, new TextObject("{=brW4pjPQ}Flee while you can. An army is already on its way here to hang you all.")));
        return persuasionTask;
      }

      private bool poachers_persuasion_selected_option_response_on_condition()
      {
        PersuasionOptionResult optionResult = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2;
        MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(optionResult), false);
        if (optionResult == PersuasionOptionResult.CriticalFailure)
          this._task.BlockAllOptions();
        return true;
      }

      private void poachers_persuasion_selected_option_response_on_consequence()
      {
        Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
        float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.MediumHard);
        float moveToNextStageChance;
        float blockRandomOptionChance;
        Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
        this._task.ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
      }

      private bool poachers_persuasion_select_option_1_on_condition()
      {
        if (this._task.Options.Count <= 0)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(0), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(0).Line);
        MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_1", text, false);
        return true;
      }

      private bool poachers_persuasion_select_option_2_on_condition()
      {
        if (this._task.Options.Count <= 1)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(1), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(1).Line);
        MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_2", text, false);
        return true;
      }

      private bool poachers_persuasion_select_option_3_on_condition()
      {
        if (this._task.Options.Count <= 2)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(2), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(2).Line);
        MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_3", text, false);
        return true;
      }

      private bool poachers_persuasion_select_option_4_on_condition()
      {
        if (this._task.Options.Count <= 3)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(3), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(3).Line);
        MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_4", text, false);
        return true;
      }

      private bool poachers_persuasion_select_option_5_on_condition()
      {
        if (this._task.Options.Count <= 4)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(4), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(4).Line);
        MBTextManager.SetTextVariable("POACHERS_PERSUADE_ATTEMPT_5", text, false);
        return true;
      }

      private void poachers_persuasion_select_option_1_on_consequence()
      {
        if (this._task.Options.Count <= 0)
          return;
        this._task.Options[0].BlockTheOption(true);
      }

      private void poachers_persuasion_select_option_2_on_consequence()
      {
        if (this._task.Options.Count <= 1)
          return;
        this._task.Options[1].BlockTheOption(true);
      }

      private void poachers_persuasion_select_option_3_on_consequence()
      {
        if (this._task.Options.Count <= 2)
          return;
        this._task.Options[2].BlockTheOption(true);
      }

      private void poachers_persuasion_select_option_4_on_consequence()
      {
        if (this._task.Options.Count <= 3)
          return;
        this._task.Options[3].BlockTheOption(true);
      }

      private void poachers_persuasion_select_option_5_on_consequence()
      {
        if (this._task.Options.Count <= 4)
          return;
        this._task.Options[4].BlockTheOption(true);
      }

      private bool persuasion_failed_with_poachers_on_condition()
      {
        if (!this._task.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
          return false;
        MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", this._task.FinalFailLine, false);
        return true;
      }

      private PersuasionOptionArgs poachers_persuasion_setup_option_1()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(0);
      }

      private PersuasionOptionArgs poachers_persuasion_setup_option_2()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(1);
      }

      private PersuasionOptionArgs poachers_persuasion_setup_option_3()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(2);
      }

      private PersuasionOptionArgs poachers_persuasion_setup_option_4()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(3);
      }

      private PersuasionOptionArgs poachers_persuasion_setup_option_5()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(4);
      }

      private bool poachers_persuasion_clickable_option_1_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 0)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
      }

      private bool poachers_persuasion_clickable_option_2_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 1)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
      }

      private bool poachers_persuasion_clickable_option_3_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 2)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
      }

      private bool poachers_persuasion_clickable_option_4_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 3)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked;
      }

      private bool poachers_persuasion_clickable_option_5_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 4)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(4).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(4).IsBlocked;
      }

      private void persuasion_rejected_with_poachers_on_consequence()
      {
        PlayerEncounter.LeaveEncounter = false;
        ConversationManager.EndPersuasion();
      }

      private void persuasion_complete_with_poachers_on_consequence()
      {
        PlayerEncounter.LeaveEncounter = true;
        ConversationManager.EndPersuasion();
        Campaign.Current.GameMenuManager.SetNextMenu("village");
        Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.QuestSuccessPlayerComesToAnAgreementWithPoachers);
      }

      internal void StartQuestBattle()
      {
        PlayerEncounter.RestartPlayerEncounter(PartyBase.MainParty, this._poachersParty.Party, false);
        PlayerEncounter.StartBattle();
        PlayerEncounter.Update();
        this._talkedToPoachersBattleWillStart = false;
        GameMenu.ActivateGameMenu("army_of_poachers_village");
        CampaignMission.OpenBattleMission(this._questVillage.Settlement.LocationComplex.GetScene("village_center", 1), false);
        this._isReadyToBeFinalized = true;
      }

      private bool DialogCondition() => Hero.OneToOneConversationHero == this.QuestGiver;

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=IefM6uAy}Thank you. You'll be paid well. Also you can keep their illegally obtained leather.[ib:normal2][if:convo_bemused]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).NpcLine(new TextObject("{=NC2VGafO}They skin their beasts in the woods, then go into the village after midnight to stash the hides. The villagers are terrified of them, I believe. If you go into the village late at night, you should be able to track them down.[ib:normal][if:convo_thinking]")).NpcLine(new TextObject("{=3pkVKMnA}Most poachers would probably run if they were surprised by armed men. But these ones are bold and desperate. Be ready for a fight.[ib:normal2][if:convo_undecided_closed]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=QNV1b5s5}Are those poachers still in business?[ib:normal2][if:convo_undecided_open]")).Condition(new ConversationSentence.OnConditionDelegate(this.DialogCondition)).BeginPlayerOptions().PlayerOption(new TextObject("{=JhJBBWab}They will be gone soon.")).NpcLine(new TextObject("{=gjGb044I}I hope they will be...[ib:normal2][if:convo_dismayed]")).CloseDialog().PlayerOption(new TextObject("{=Gu3jF88V}Any night battle can easily go wrong. I need more time to prepare.")).NpcLine(new TextObject("{=2EiC1YyZ}Well, if they get wind of what you're up to, things could go very wrong for me. Do be quick.[ib:nervous2][if:convo_dismayed]")).CloseDialog().EndPlayerOptions();
        this.QuestCharacterDialogFlow = this.GetPoacherPartyDialogFlow();
      }

      internal void CreatePoachersParty()
      {
        this._poachersParty = MobileParty.CreateParty("poachers_party", (PartyComponent) null);
        TextObject name = new TextObject("{=WQa1R55u}Poachers Party");
        this._poachersParty.InitializeMobilePartyAtPosition(new TroopRoster(this._poachersParty.Party), new TroopRoster(this._poachersParty.Party), this._questVillage.Settlement.GetPosition2D);
        this._poachersParty.SetCustomName(name);
        this._poachersParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("leather"), (MathF.Ceiling(this._difficultyMultiplier * 5f) + MBRandom.RandomInt(0, 2)) * 2);
        this._poachersParty.MemberRoster.AddToCounts(CharacterObject.All.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (t => t.StringId == "poacher")), 10 + MathF.Ceiling(40f * this._difficultyMultiplier));
        this._poachersParty.SetPartyUsedByQuest(true);
        this._poachersParty.Ai.DisableAi();
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        this._poachersParty.ActualClan = Clan.BanditFactions.FirstOrDefaultQ<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        EnterSettlementAction.ApplyForParty(this._poachersParty, Settlement.CurrentSettlement);
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this._questStartedLogText);
        this.AddTrackedObject((ITrackableCampaignObject) this._questVillage.Settlement);
      }

      internal void QuestFailedAfterTalkingWithPoachers()
      {
        this.AddLog(this._questFailedAfterTalkingWithProachers);
        TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[2]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50),
          new Tuple<TraitObject, int>(DefaultTraits.Mercy, 20)
        });
        this.RelationshipChangeWithQuestGiver = -5;
        this.QuestGiver.AddPower(-50f);
        this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
        this.CompleteQuestWithFail();
      }

      internal void QuestSuccessPlayerComesToAnAgreementWithPoachers()
      {
        this.AddLog(this._questSuccessPlayerComesToAnAgreementWithPoachers);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[2]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 10),
          new Tuple<TraitObject, int>(DefaultTraits.Mercy, 50)
        });
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
        this.RelationshipChangeWithQuestGiver = 5;
        GainRenownAction.Apply(Hero.MainHero, 1f);
        this.QuestGiver.AddPower(30f);
        this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
        this.QuestGiver.CurrentSettlement.Town.Prosperity += 50f;
        this.CompleteQuestWithSuccess();
      }

      internal void QuestFailWithPlayerDefeatedAgainstPoachers()
      {
        this.AddLog(this._questFailWithPlayerDefeatedAgainstPoachers);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
        });
        this.RelationshipChangeWithQuestGiver = -5;
        this.QuestGiver.AddPower(-50f);
        this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
        this.CompleteQuestWithFail();
      }

      internal void QuestSuccessWithPlayerDefeatedPoachers()
      {
        this.AddLog(this._questSuccessWithPlayerDefeatedPoachers);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 50)
        });
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
        this.RelationshipChangeWithQuestGiver = 5;
        this.QuestGiver.AddPower(30f);
        this.QuestGiver.CurrentSettlement.Town.Prosperity += 50f;
        this.CompleteQuestWithSuccess();
      }

      protected override void OnTimedOut()
      {
        this.AddLog(this._questFailedWithTimeOutLogText);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -30)
        });
        this.RelationshipChangeWithQuestGiver = -5;
        this.QuestGiver.AddPower(-50f);
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 30f;
        this.QuestGiver.CurrentSettlement.Town.Security -= 5f;
      }

      private void QuestCanceledTargetVillageRaided()
      {
        this.AddLog(this._questCanceledTargetVillageRaided);
        this.CompleteQuestWithFail();
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.MapEventCheck));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.MapEventStarted));
        CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.GameMenuOpened));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.CanHeroBecomePrisonerEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.OnCanHeroBecomePrisonerInfoIsRequested));
      }

      private void OnCanHeroBecomePrisonerInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != Hero.MainHero || !this._isReadyToBeFinalized)
          return;
        result = false;
      }

      protected override void HourlyTick()
      {
        if (PlayerEncounter.Current == null || !PlayerEncounter.Current.IsPlayerWaiting || PlayerEncounter.EncounterSettlement != this._questVillage.Settlement || !CampaignTime.Now.IsNightTime || this._isReadyToBeFinalized || !this.IsOngoing)
          return;
        EnterSettlementAction.ApplyForParty(MobileParty.MainParty, this._questVillage.Settlement);
        GameMenu.SwitchToMenu("army_of_poachers_village");
      }

      private void GameMenuOpened(MenuCallbackArgs obj)
      {
        if (obj.MenuContext.GameMenu.StringId == "village" && CampaignTime.Now.IsNightTime && Settlement.CurrentSettlement == this._questVillage.Settlement && !this._isReadyToBeFinalized)
          GameMenu.SwitchToMenu("army_of_poachers_village");
        if (!(obj.MenuContext.GameMenu.StringId == "army_of_poachers_village") || !this._isReadyToBeFinalized || MapEvent.PlayerMapEvent == null || !MapEvent.PlayerMapEvent.HasWinner || this._poachersParty == null)
          return;
        this._poachersParty.IsVisible = false;
      }

      private void MapEventStarted(
        MapEvent mapEvent,
        PartyBase attackerParty,
        PartyBase defenderParty)
      {
        this.MapEventCheck(mapEvent);
        if (!QuestHelper.CheckMinorMajorCoercion((QuestBase) this, mapEvent, attackerParty))
          return;
        QuestHelper.ApplyGenericMinorMajorCoercionConsequences((QuestBase) this, mapEvent);
      }

      private void MapEventCheck(MapEvent mapEvent)
      {
        if (!mapEvent.IsRaid || mapEvent.MapEventSettlement != this._questVillage.Settlement)
          return;
        this.QuestCanceledTargetVillageRaided();
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

      protected override void OnFinalize()
      {
        if (this._poachersParty != null && this._poachersParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, this._poachersParty);
        if (!Hero.MainHero.IsPrisoner)
          return;
        EndCaptivityAction.ApplyByPeace(Hero.MainHero);
      }

      protected override void InitializeQuestOnGameLoad() => this.SetDialogs();
    }

    public class MerchantArmyOfPoachersIssueBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public MerchantArmyOfPoachersIssueBehaviorTypeDefiner()
        : base(800000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssue), 1);
        this.AddClassDefinition(typeof (MerchantArmyOfPoachersIssueBehavior.MerchantArmyOfPoachersIssueQuest), 2);
      }
    }
  }
}
