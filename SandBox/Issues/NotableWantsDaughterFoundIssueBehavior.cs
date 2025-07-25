// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.NotableWantsDaughterFoundIssueBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using SandBox.Missions.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace SandBox.Issues
{
  public class NotableWantsDaughterFoundIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency NotableWantsDaughterFoundIssueFrequency = IssueBase.IssueFrequency.Rare;
    private const int IssueDuration = 30;
    private const int QuestTimeLimit = 19;
    private const int BaseRewardGold = 500;

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
    }

    private void OnGameLoadFinished()
    {
      if (!MBSaveLoad.IsUpdatingGameVersion || !MBSaveLoad.LastLoadedGameVersion.IsOlderThan(ApplicationVersion.FromString("v1.2.8.31599")))
        return;
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        if (deadOrDisabledHero.IsDead && deadOrDisabledHero.CompanionOf == Clan.PlayerClan && deadOrDisabledHero.Father != null && deadOrDisabledHero.Father.IsNotable && deadOrDisabledHero.Father.CurrentSettlement.IsVillage)
          RemoveCompanionAction.ApplyByDeath(Clan.PlayerClan, deadOrDisabledHero);
      }
    }

    public void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssue), IssueBase.IssueFrequency.Rare));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssue), IssueBase.IssueFrequency.Rare));
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return issueGiver.IsRuralNotable && issueGiver.CurrentSettlement.IsVillage && issueGiver.CurrentSettlement.Village.Bound != null && issueGiver.CurrentSettlement.Village.Bound.BoundVillages.Count > 2 && issueGiver.CanHaveQuestsOrIssues() && (double) issueGiver.Age > (double) (Campaign.Current.Models.AgeModel.HeroComesOfAge * 2) && issueGiver.CurrentSettlement.Culture.NotableAndWandererTemplates.Any<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.Wanderer && x.IsFemale)) && issueGiver.CurrentSettlement.Culture.NotableAndWandererTemplates.Any<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.GangLeader && !x.IsFemale)) && issueGiver.GetTraitLevel(DefaultTraits.Mercy) <= 0 && issueGiver.GetTraitLevel(DefaultTraits.Generosity) <= 0;
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssue(issueOwner);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class NotableWantsDaughterFoundIssueTypeDefiner : SaveableTypeDefiner
    {
      public NotableWantsDaughterFoundIssueTypeDefiner()
        : base(1088000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssue), 1);
        this.AddClassDefinition(typeof (NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest), 2);
      }
    }

    public class NotableWantsDaughterFoundIssue : IssueBase
    {
      private const int TroopTierForAlternativeSolution = 2;
      private const int RequiredSkillLevelForAlternativeSolution = 120;

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      protected override int RewardGold
      {
        get => 500 + MathF.Round(1200f * this.IssueDifficultyMultiplier);
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 2 + MathF.Ceiling(4f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 4 + MathF.Ceiling(5f * this.IssueDifficultyMultiplier);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (500.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public NotableWantsDaughterFoundIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.1f : 0.0f;
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=x9VgLEzi}Yes... I've suffered a great misfortune. [ib:demure][if:convo_shocked]My daughter, a headstrong girl, has been bewitched by this never-do-well. I told her to stop seeing him but she wouldn't listen! Now she's missing - I'm sure she's been abducted by him! I'm offering a bounty of {BASE_REWARD_GOLD}{GOLD_ICON} to anyone who brings her back. Please {?PLAYER.GENDER}ma'am{?}sir{\\?}! Don't let a father's heart be broken.");
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("BASE_REWARD_GOLD", this.RewardGold);
          return parent;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=35w6g8gM}Tell me more. What's wrong with the man? ");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          return new TextObject("{=IY5b9vZV}Everything is wrong. [if:convo_annoyed]He is from a low family, the kind who is always involved in some land fraud scheme, or seen dealing with known bandits. Every village has a black sheep like that but I never imagined he would get his hooks into my daughter!");
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=v0XsM7Zz}If you send your best tracker with a few men, I am sure they will find my girl [if:convo_pondering]and be back to you in no more than {ALTERNATIVE_SOLUTION_WAIT_DAYS} days.");
          explanationByIssueGiver.SetTextVariable("ALTERNATIVE_SOLUTION_WAIT_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssuePlayerResponseAfterAlternativeExplanation
      {
        get
        {
          return new TextObject("{=Ldp6ckgj}Don't worry, either I or one of my companions should be able to find her and see what's going on.");
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=uYrxCtDa}I should be able to find her and see what's going on.");
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=WSrGHkal}I will have one of my trackers and {REQUIRED_TROOP_AMOUNT} of my men to find your daughter.");
          solutionAcceptByPlayer.SetTextVariable("REQUIRED_TROOP_AMOUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=mBPcZddA}{?PLAYER.GENDER}Madam{?}Sir{\\?}, we are still waiting [ib:demure][if:convo_undecided_open]for your men to bring my daughter back. I pray for their success.");
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=Hhd3KaKu}Thank you, my {?PLAYER.GENDER}lady{?}lord{\\?}. If your men can find my girl and bring her back to me, I will be so grateful.[if:convo_happy] I will pay you {BASE_REWARD_GOLD}{GOLD_ICON} for your trouble.");
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("BASE_REWARD_GOLD", this.RewardGold);
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=6OmbzoBs}{ISSUE_GIVER.LINK}, a merchant from {ISSUE_GIVER_SETTLEMENT}, has told you that {?ISSUE_GIVER.GENDER}her{?}his{\\?} daughter has gone missing. You choose {COMPANION.LINK} and {REQUIRED_TROOP_AMOUNT} men to search for her and bring her back. You expect them to complete this task and return in {ALTERNATIVE_SOLUTION_DAYS} days.");
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("BASE_REWARD_GOLD", this.RewardGold);
          parent.SetTextVariable("ISSUE_GIVER_SETTLEMENT", this.IssueOwner.CurrentSettlement.Name);
          parent.SetTextVariable("REQUIRED_TROOP_AMOUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          parent.SetTextVariable("ALTERNATIVE_SOLUTION_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          return parent;
        }
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.ApplySuccessRewards();
        float randomFloat = MBRandom.RandomFloat;
        this.AlternativeSolutionHero.AddSkillXp((double) randomFloat > 0.33000001311302185 ? ((double) randomFloat > 0.6600000262260437 ? DefaultSkills.Polearm : DefaultSkills.TwoHanded) : DefaultSkills.OneHanded, (float) (int) (500.0 + 1000.0 * (double) this.IssueDifficultyMultiplier));
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -10;
        if (this.IssueOwner.CurrentSettlement.Village.Bound == null)
          return;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Security -= 5f;
      }

      public override TextObject IssueAlternativeSolutionSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=MaXA5HJi}Your companions report that the {ISSUE_GIVER.LINK}'s daughter returns to {?ISSUE_GIVER.GENDER}her{?}him{\\?} safe and sound. {?ISSUE_GIVER.GENDER}She{?}He{\\?} is happy and sends {?ISSUE_GIVER.GENDER}her{?}his{\\?} regards with a large pouch of {BASE_REWARD_GOLD}{GOLD_ICON}.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("BASE_REWARD_GOLD", this.RewardGold);
          return parent;
        }
      }

      private void ApplySuccessRewards()
      {
        GainRenownAction.Apply(Hero.MainHero, 2f);
        this.IssueOwner.AddPower(10f);
        this.RelationshipChangeWithIssueOwner = 10;
        if (this.IssueOwner.CurrentSettlement.Village.Bound == null)
          return;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Security += 10f;
      }

      public override TextObject Title
      {
        get
        {
          TextObject parent = new TextObject("{=kr68V5pm}{ISSUE_GIVER.NAME} wants {?ISSUE_GIVER.GENDER}her{?}his{\\?} daughter found");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=SkzM5eSv}{ISSUE_GIVER.LINK}'s daughter is missing. {?ISSUE_GIVER.GENDER}She{?}He{\\?} is offering a substantial reward to find the young woman and bring her back safely.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAsRumorInSettlement
      {
        get
        {
          TextObject parent = new TextObject("{=7RyXSkEE}Wouldn't want to be the poor lovesick sap who ran off with {QUEST_GIVER.NAME}'s daughter.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(19f), this.RewardGold, this.IssueDifficultyMultiplier);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Rare;

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Charm) >= hero.GetSkillValue(DefaultSkills.Scouting) ? DefaultSkills.Charm : DefaultSkills.Scouting, 120);
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

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        bool questConditions = (double) issueGiver.GetRelationWithPlayer() >= -10.0 && !issueGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction);
        flag = questConditions ? IssueBase.PreconditionFlags.None : (!issueGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction) ? IssueBase.PreconditionFlags.Relation : IssueBase.PreconditionFlags.AtWar);
        relationHero = issueGiver;
        skill = (SkillObject) null;
        return questConditions;
      }

      public override bool IssueStayAliveConditions()
      {
        return !this.IssueOwner.CurrentSettlement.IsRaided && !this.IssueOwner.CurrentSettlement.IsUnderRaid;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      internal static void AutoGeneratedStaticCollectObjectsNotableWantsDaughterFoundIssue(
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

    public class NotableWantsDaughterFoundIssueQuest : QuestBase
    {
      [SaveableField(10)]
      private readonly Hero _daughterHero;
      [SaveableField(20)]
      private readonly Hero _rogueHero;
      private Agent _daughterAgent;
      private Agent _rogueAgent;
      [SaveableField(50)]
      private bool _isQuestTargetMission;
      [SaveableField(60)]
      private bool _didPlayerBeatRouge;
      [SaveableField(70)]
      private bool _exitedQuestSettlementForTheFirstTime = true;
      [SaveableField(80)]
      private bool _isTrackerLogAdded;
      [SaveableField(90)]
      private bool _isDaughterPersuaded;
      [SaveableField(91)]
      private bool _isDaughterCaptured;
      [SaveableField(100)]
      private bool _acceptedDaughtersEscape;
      [SaveableField(110)]
      private readonly Village _targetVillage;
      [SaveableField(120)]
      private bool _villageIsRaidedTalkWithDaughter;
      [SaveableField(140)]
      private Dictionary<Village, bool> _villagesAndAlreadyVisitedBooleans = new Dictionary<Village, bool>();
      private Dictionary<string, CharacterObject> _rogueCharacterBasedOnCulture = new Dictionary<string, CharacterObject>();
      private bool _playerDefeatedByRogue;
      private PersuasionTask _task;
      private const PersuasionDifficulty Difficulty = PersuasionDifficulty.Hard;
      private const int MaxAgeForDaughterAndRogue = 25;
      [SaveableField(130)]
      private readonly float _questDifficultyMultiplier;

      public override TextObject Title
      {
        get
        {
          TextObject parent = new TextObject("{=PDhmSieV}{QUEST_GIVER.NAME}'s Kidnapped Daughter at {SETTLEMENT}");
          parent.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.Name);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public override bool IsRemainingTimeHidden => false;

      private bool DoesMainPartyHasEnoughScoutingSkill
      {
        get
        {
          return (double) MobilePartyHelper.GetMainPartySkillCounsellor(DefaultSkills.Scouting).GetSkillValue(DefaultSkills.Scouting) >= 150.0 * (double) this._questDifficultyMultiplier;
        }
      }

      private TextObject _playerStartsQuestLogText
      {
        get
        {
          TextObject to = new TextObject("{=1jExD58d}{QUEST_GIVER.LINK}, a merchant from {SETTLEMENT_NAME}, told you that {?QUEST_GIVER.GENDER}her{?}his{\\?} daughter {TARGET_HERO.NAME} has either been abducted or run off with a local rogue. You have agreed to search for her and bring her back to {SETTLEMENT_NAME}. If you cannot find their tracks when you exit settlement, you should visit the nearby villages of {SETTLEMENT_NAME} to look for clues and tracks of the kidnapper.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          to.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject);
          to.SetTextVariable("SETTLEMENT_NAME", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          to.SetTextVariable("BASE_REWARD_GOLD", this.RewardGold);
          to.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return to;
        }
      }

      private TextObject _successQuestLogText
      {
        get
        {
          TextObject to = new TextObject("{=asVE53ac}Daughter returns to {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}She{?}He{\\?} is happy. Sends {?QUEST_GIVER.GENDER}her{?}his{\\?} regards with a large pouch of {BASE_REWARD}{GOLD_ICON}.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          to.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          to.SetTextVariable("BASE_REWARD", this.RewardGold);
          return to;
        }
      }

      private TextObject _playerDefeatedByRogueLogText
      {
        get
        {
          TextObject parent = new TextObject("{=i1sth9Ls}You were defeated by the rogue. He and {TARGET_HERO.NAME} ran off while you were unconscious. You failed to bring the daughter back to her {?QUEST_GIVER.GENDER}mother{?}father{\\?} as promised to {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}She{?}He{\\?} is furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _failQuestLogText
      {
        get
        {
          TextObject to = new TextObject("{=ak2EMWWR}You failed to bring the daughter back to her {?QUEST_GIVER.GENDER}mother{?}father{\\?} as promised to {QUEST_GIVER.LINK}. {QUEST_GIVER.LINK} is furious");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return to;
        }
      }

      private TextObject _questCanceledWarDeclaredLog
      {
        get
        {
          TextObject to = new TextObject("{=vW6kBki9}Your clan is now at war with {QUEST_GIVER.LINK}'s realm. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return to;
        }
      }

      private TextObject _playerDeclaredWarQuestLogText
      {
        get
        {
          TextObject to = new TextObject("{=bqeWVVEE}Your actions have started a war with {QUEST_GIVER.LINK}'s faction. {?QUEST_GIVER.GENDER}She{?}He{\\?} cancels your agreement and the quest is a failure.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return to;
        }
      }

      private TextObject _villageRaidedCancelQuestLogText
      {
        get
        {
          TextObject to = new TextObject("{=aN85Kfnq}{SETTLEMENT} was raided. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          to.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          to.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          return to;
        }
      }

      public NotableWantsDaughterFoundIssueQuest(
        string questId,
        Hero questGiver,
        CampaignTime duration,
        int baseReward,
        float issueDifficultyMultiplier)
        : base(questId, questGiver, duration, baseReward)
      {
        this._questDifficultyMultiplier = issueDifficultyMultiplier;
        this._targetVillage = questGiver.CurrentSettlement.Village.Bound.BoundVillages.GetRandomElementWithPredicate<Village>((Func<Village, bool>) (x => x != questGiver.CurrentSettlement.Village));
        this._rogueCharacterBasedOnCulture.Add("khuzait", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "steppe_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("vlandia", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "mountain_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("aserai", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "desert_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("battania", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "forest_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("sturgia", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "sea_raiders"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("empire_w", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "mountain_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("empire_s", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "mountain_bandits"))?.Culture.BanditBoss);
        this._rogueCharacterBasedOnCulture.Add("empire", Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (x => x.StringId == "mountain_bandits"))?.Culture.BanditBoss);
        int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
        int age1 = MBRandom.RandomInt(heroComesOfAge, 25);
        int age2 = MBRandom.RandomInt(heroComesOfAge, 25);
        this._daughterHero = HeroCreator.CreateSpecialHero(questGiver.CurrentSettlement.Culture.NotableAndWandererTemplates.GetRandomElementWithPredicate<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.Wanderer && x.IsFemale)), questGiver.HomeSettlement, questGiver.Clan, age: age1);
        this._daughterHero.CharacterObject.HiddenInEncylopedia = true;
        this._daughterHero.Father = questGiver;
        this._rogueHero = HeroCreator.CreateSpecialHero(this.GetRogueCharacterBasedOnCulture(questGiver.Culture), questGiver.HomeSettlement, questGiver.Clan, age: age2);
        this._rogueHero.CharacterObject.HiddenInEncylopedia = true;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      private CharacterObject GetRogueCharacterBasedOnCulture(CultureObject culture)
      {
        CharacterObject characterBasedOnCulture = !this._rogueCharacterBasedOnCulture.ContainsKey(culture.StringId) ? this.QuestGiver.CurrentSettlement.Culture.NotableAndWandererTemplates.GetRandomElementWithPredicate<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.GangLeader && !x.IsFemale)) : this._rogueCharacterBasedOnCulture[culture.StringId];
        characterBasedOnCulture.Culture = this.QuestGiver.Culture;
        return characterBasedOnCulture;
      }

      protected override void SetDialogs()
      {
        TextObject textObject = new TextObject("{=PZq1EMcx}Thank you for your help. [if:convo_worried]I am still very worried about my girl {TARGET_HERO.FIRSTNAME}. Please find her and bring her back to me as soon as you can.");
        StringHelpers.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject, textObject);
        TextObject npcText1 = new TextObject("{=sglD6abb}Please! Bring my daughter back.");
        TextObject npcText2 = new TextObject("{=ddEu5IFQ}I hope so.");
        TextObject npcText3 = new TextObject("{=IdKG3IaS}Good to hear that.");
        TextObject text1 = new TextObject("{=0hXofVLx}Don't worry I'll bring her.");
        TextObject text2 = new TextObject("{=zpqP5LsC}I'll go right away.");
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(textObject).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver && !this._didPlayerBeatRouge)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(npcText1).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver && !this._didPlayerBeatRouge)).BeginPlayerOptions().PlayerOption(text1).NpcLine(npcText2).CloseDialog().PlayerOption(text2).NpcLine(npcText3).CloseDialog();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetRougeDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDaughterAfterFightDialog(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDaughterAfterAcceptDialog(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDaughterAfterPersuadedDialog(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDaughterDialogWhenVillageRaid(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetRougeAfterAcceptDialog(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetRogueAfterPersuadedDialog(), (object) this);
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.SetDialogs();
        if (this._daughterHero != null)
          this._daughterHero.CharacterObject.HiddenInEncylopedia = true;
        if (this._rogueHero == null)
          return;
        this._rogueHero.CharacterObject.HiddenInEncylopedia = true;
      }

      protected override void HourlyTick()
      {
      }

      private bool IsRougeHero(IAgent agent) => agent.Character == this._rogueHero.CharacterObject;

      private bool IsDaughterHero(IAgent agent)
      {
        return agent.Character == this._daughterHero.CharacterObject;
      }

      private bool IsMainHero(IAgent agent) => agent.Character == CharacterObject.PlayerCharacter;

      private bool multi_character_conversation_on_condition()
      {
        if (this._villageIsRaidedTalkWithDaughter || this._isDaughterPersuaded || this._didPlayerBeatRouge || this._acceptedDaughtersEscape || !this._isQuestTargetMission || CharacterObject.OneToOneConversationCharacter != this._daughterHero.CharacterObject && CharacterObject.OneToOneConversationCharacter != this._rogueHero.CharacterObject)
          return false;
        foreach (Agent nearbyAgent in (List<Agent>) Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 100f, new MBList<Agent>()))
        {
          if (nearbyAgent.Character == this._daughterHero.CharacterObject)
          {
            this._daughterAgent = nearbyAgent;
            if (Mission.Current.GetMissionBehavior<MissionConversationLogic>() != null && Hero.OneToOneConversationHero != this._daughterHero)
              Campaign.Current.ConversationManager.AddConversationAgents((IEnumerable<IAgent>) new List<Agent>()
              {
                this._daughterAgent
              }, true);
          }
          else if (nearbyAgent.Character == this._rogueHero.CharacterObject)
          {
            this._rogueAgent = nearbyAgent;
            if (Mission.Current.GetMissionBehavior<MissionConversationLogic>() != null && Hero.OneToOneConversationHero != this._rogueHero)
              Campaign.Current.ConversationManager.AddConversationAgents((IEnumerable<IAgent>) new List<Agent>()
              {
                this._rogueAgent
              }, true);
          }
        }
        return this._daughterAgent != null && this._rogueAgent != null && (double) this._daughterAgent.Health > 10.0 && (double) this._rogueAgent.Health > 10.0;
      }

      private bool daughter_conversation_after_fight_on_condition()
      {
        return CharacterObject.OneToOneConversationCharacter == this._daughterHero.CharacterObject && this._didPlayerBeatRouge;
      }

      private void multi_agent_conversation_on_consequence()
      {
        this._task = this.GetPersuasionTask();
      }

      private DialogFlow GetRougeDialogFlow()
      {
        TextObject textObject1 = new TextObject("{=ovFbMMTJ}Who are you? Are you one of the bounty hunters sent by {QUEST_GIVER.LINK} to track us? Like we're animals or something? Look friend, we have done nothing wrong. As you may have figured out already, this woman and I, we love each other. I didn't force her to do anything.[ib:closed][if:convo_innocent_smile]");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject1);
        TextObject textObject2 = new TextObject("{=D25oY3j1}Thank you {?PLAYER.GENDER}lady{?}sir{\\?}. For your kindness and understanding. We won't forget this.[ib:demure][if:convo_happy]");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject2);
        TextObject textObject3 = new TextObject("{=oL3amiu1}Come {DAUGHTER_NAME.NAME}, let's go before other hounds sniff our trail... I mean... No offense {?PLAYER.GENDER}madam{?}sir{\\?}.");
        StringHelpers.SetCharacterProperties("DAUGHTER_NAME", this._daughterHero.CharacterObject, textObject3);
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject3);
        TextObject textObject4 = new TextObject("{=92sbq1YY}I'm no child, {?PLAYER.GENDER}lady{?}sir{\\?}! Draw your weapon! I challenge you to a duel![ib:warrior2][if:convo_excited]");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject4);
        TextObject textObject5 = new TextObject("{=jfzErupx}He is right! I ran away with him willingly. I love my {?QUEST_GIVER.GENDER}mother{?}father{\\?},[ib:closed][if:convo_grave] but {?QUEST_GIVER.GENDER}she{?}he{\\?} can be such a tyrant. Please {?PLAYER.GENDER}lady{?}sir{\\?}, if you believe in freedom and love, please leave us be.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject5);
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject5);
        TextObject textObject6 = new TextObject("{=5NljlbLA}Thank you kind {?PLAYER.GENDER}lady{?}sir{\\?}, thank you.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject6);
        TextObject textObject7 = new TextObject("{=i5fNZrhh}Please, {?PLAYER.GENDER}lady{?}sir{\\?}. I love him truly and I wish to spend the rest of my life with him.[ib:demure][if:convo_worried] I beg of you, please don't stand in our way.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject7);
        TextObject textObject8 = new TextObject("{=0RCdPKj2}Yes {?QUEST_GIVER.GENDER}she{?}he{\\?} would probably be sad. But not because of what you think. See, {QUEST_GIVER.LINK} promised me to one of {?QUEST_GIVER.GENDER}her{?}his{\\?} allies' sons and this will devastate {?QUEST_GIVER.GENDER}her{?}his{\\?} plans. That is true.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject8);
        TextObject text1 = new TextObject("{=5W7Kxfq9}I understand. If that is the case, I will let you go.");
        TextObject text2 = new TextObject("{=3XimdHOn}How do I know he's not forcing you to say that?");
        TextObject textObject9 = new TextObject("{=zNqDEuAw}But I've promised to find you and return you to your {?QUEST_GIVER.GENDER}mother{?}father{\\?}. {?QUEST_GIVER.GENDER}She{?}He{\\?} would be devastated.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject9);
        TextObject textObject10 = new TextObject("{=tuaQ5uU3}I guess the only way to free you from this pretty boy's spell is to kill him.");
        TextObject textObject11 = new TextObject("{=HDCmeGhG}I'm sorry but I gave a promise. I don't break my promises.");
        TextObject text3 = new TextObject("{=VGrHWxzf}This will be a massacre, not a duel, but I'm fine with that.");
        TextObject text4 = new TextObject("{=sytYViXb}I accept your duel.");
        DialogFlow dialog = DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject1, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Condition(new ConversationSentence.OnConditionDelegate(this.multi_character_conversation_on_condition)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.multi_agent_conversation_on_consequence)).NpcLine(textObject5, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).BeginPlayerOptions().PlayerOption(text1, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero)).NpcLine(textObject2, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).NpcLine(textObject3, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero)).NpcLine(textObject6, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerAcceptedDaughtersEscape))).CloseDialog().PlayerOption(text2, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero)).NpcLine(textObject7, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).PlayerLine(textObject9, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero)).NpcLine(textObject8, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).GotoDialogState("start_daughter_persuade_to_come_persuasion").GoBackToDialogState("daughter_persuade_to_come_persuasion_finished").PlayerLine(Hero.MainHero.GetTraitLevel(DefaultTraits.Mercy) < 0 ? textObject10 : textObject11, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero)).NpcLine(textObject4, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).BeginPlayerOptions().PlayerOption(text3, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero)).NpcLine(new TextObject("{=XWVW0oTB}You bastard![ib:aggressive][if:convo_furious]"), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerRejectsDuelFight))).CloseDialog().PlayerOption(text4, new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero)).NpcLine(new TextObject("{=jqahxjWD}Heaven protect me![ib:aggressive][if:convo_astonished]"), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsRougeHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerAcceptsDuelFight))).CloseDialog().EndPlayerOptions().EndPlayerOptions().CloseDialog();
        this.AddPersuasionDialogs(dialog);
        return dialog;
      }

      private DialogFlow GetDaughterAfterFightDialog()
      {
        TextObject npcText1 = new TextObject("{=MN2v1AZQ}I hate you! You killed him! I can't believe it! I will hate you with all my heart till my dying days.[if:convo_angry]");
        TextObject npcText2 = new TextObject("{=TTkVcObg}What choice do I have, you heartless bastard?![if:convo_furious]");
        TextObject textObject1 = new TextObject("{=XqsrsjiL}I did what I had to do. Pack up, you need to go.");
        TextObject textObject2 = new TextObject("{=KQ3aYvp3}Some day you'll see I did you a favor. Pack up, you need to go.");
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(npcText1).Condition(new ConversationSentence.OnConditionDelegate(this.daughter_conversation_after_fight_on_condition)).PlayerLine(Hero.MainHero.GetTraitLevel(DefaultTraits.Mercy) < 0 ? textObject1 : textObject2).NpcLine(npcText2).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerWonTheFight))).CloseDialog();
      }

      private DialogFlow GetDaughterAfterAcceptDialog()
      {
        TextObject textObject = new TextObject("{=0Wg00sfN}Thank you, {?PLAYER.GENDER}madam{?}sir{\\?}. We will be moving immediately.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject);
        TextObject playerText = new TextObject("{=kUReBc04}Good.");
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject).Condition(new ConversationSentence.OnConditionDelegate(this.daughter_conversation_after_accept_on_condition)).PlayerLine(playerText).CloseDialog();
      }

      private bool daughter_conversation_after_accept_on_condition()
      {
        return CharacterObject.OneToOneConversationCharacter == this._daughterHero.CharacterObject && this._acceptedDaughtersEscape;
      }

      private DialogFlow GetDaughterAfterPersuadedDialog()
      {
        TextObject textObject = new TextObject("{=B8bHpJRP}You are right, {?PLAYER.GENDER}my lady{?}sir{\\?}. I should be moving immediately.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject);
        TextObject playerText = new TextObject("{=kUReBc04}Good.");
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject).Condition(new ConversationSentence.OnConditionDelegate(this.daughter_conversation_after_persuaded_on_condition)).PlayerLine(playerText).CloseDialog();
      }

      private DialogFlow GetDaughterDialogWhenVillageRaid()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=w0HPC53e}Who are you? What do you want from me?[ib:nervous][if:convo_bared_teeth]")).Condition((ConversationSentence.OnConditionDelegate) (() => this._villageIsRaidedTalkWithDaughter)).PlayerLine(new TextObject("{=iRupMGI0}Calm down! Your father has sent me to find you.")).NpcLine(new TextObject("{=dwNquUNr}My father? Oh, thank god! I saw terrible things. [ib:nervous2][if:convo_shocked]They took my beloved one and slew many innocents without hesitation.")).PlayerLine("{=HtAr22re}Try to forget all about these and return to your father's house.").NpcLine("{=FgSIsasF}Yes, you are right. I shall be on my way...").Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() =>
        {
          this.ApplyDeliverySuccessConsequences();
          this.CompleteQuestWithSuccess();
          this.AddLog(this._successQuestLogText);
          this._villageIsRaidedTalkWithDaughter = false;
        }))).CloseDialog();
      }

      private bool daughter_conversation_after_persuaded_on_condition()
      {
        return CharacterObject.OneToOneConversationCharacter == this._daughterHero.CharacterObject && this._isDaughterPersuaded;
      }

      private DialogFlow GetRougeAfterAcceptDialog()
      {
        TextObject textObject = new TextObject("{=wlKtDR2z}Thank you, {?PLAYER.GENDER}my lady{?}sir{\\?}.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject);
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject).Condition(new ConversationSentence.OnConditionDelegate(this.rogue_conversation_after_accept_on_condition)).PlayerLine(new TextObject("{=0YJGvJ7o}You should leave now.")).NpcLine(new TextObject("{=6Q4cPOSG}Yes, we will.")).CloseDialog();
      }

      private bool rogue_conversation_after_accept_on_condition()
      {
        return CharacterObject.OneToOneConversationCharacter == this._rogueHero.CharacterObject && this._acceptedDaughtersEscape;
      }

      private DialogFlow GetRogueAfterPersuadedDialog()
      {
        TextObject textObject = new TextObject("{=GFt9KiHP}You are right. Maybe we need to persuade {QUEST_GIVER.NAME}.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        TextObject playerText = new TextObject("{=btJkBTSF}I am sure you can solve it.");
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject).Condition(new ConversationSentence.OnConditionDelegate(this.rogue_conversation_after_persuaded_on_condition)).PlayerLine(playerText).CloseDialog();
      }

      private bool rogue_conversation_after_persuaded_on_condition()
      {
        return CharacterObject.OneToOneConversationCharacter == this._rogueHero.CharacterObject && this._isDaughterPersuaded;
      }

      protected override void OnTimedOut()
      {
        this.ApplyDeliveryRejectedFailConsequences();
        TextObject textObject = new TextObject("{=KAvwytDK}You didn't bring {DAUGHTER.NAME} to {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}she{?}he{\\?} must be furious.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        StringHelpers.SetCharacterProperties("DAUGHTER", this._daughterHero.CharacterObject, textObject);
        this.AddLog(textObject);
      }

      private void PlayerAcceptedDaughtersEscape() => this._acceptedDaughtersEscape = true;

      private void PlayerWonTheFight()
      {
        this._isDaughterCaptured = true;
        Mission.Current.SetMissionMode(MissionMode.StartUp, false);
      }

      private void ApplyDaughtersEscapeAcceptedFailConsequences()
      {
        this.RelationshipChangeWithQuestGiver = -10;
        if (this.QuestGiver.CurrentSettlement.Village.Bound == null)
          return;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security -= 5f;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
      }

      private void ApplyDeliveryRejectedFailConsequences()
      {
        this.RelationshipChangeWithQuestGiver = -10;
        if (this.QuestGiver.CurrentSettlement.Village.Bound == null)
          return;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security -= 5f;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
      }

      private void ApplyDeliverySuccessConsequences()
      {
        GainRenownAction.Apply(Hero.MainHero, 2f);
        this.QuestGiver.AddPower(10f);
        this.RelationshipChangeWithQuestGiver = 10;
        if (this.QuestGiver.CurrentSettlement.Village.Bound != null)
          this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security += 10f;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.RewardGold);
      }

      private void PlayerRejectsDuelFight()
      {
        this._rogueAgent = (Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents.First<IAgent>((Func<IAgent, bool>) (x => !x.Character.IsFemale));
        List<Agent> playerSideAgents = new List<Agent>()
        {
          Agent.Main
        };
        List<Agent> opponentSideAgents = new List<Agent>()
        {
          this._rogueAgent
        };
        foreach (Agent nearbyAgent in (List<Agent>) Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 30f, new MBList<Agent>()))
        {
          foreach (Hero hero in Hero.MainHero.CompanionsInParty)
          {
            if (nearbyAgent.Character == hero.CharacterObject)
            {
              playerSideAgents.Add(nearbyAgent);
              break;
            }
          }
        }
        this._rogueAgent.Health = (float) (150 + playerSideAgents.Count * 20);
        this._rogueAgent.Defensiveness = 1f;
        Mission.Current.GetMissionBehavior<MissionFightHandler>().StartCustomFight(playerSideAgents, opponentSideAgents, false, false, new MissionFightHandler.OnFightEndDelegate(this.StartConversationAfterFight));
      }

      private void PlayerAcceptsDuelFight()
      {
        this._rogueAgent = (Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents.First<IAgent>((Func<IAgent, bool>) (x => !x.Character.IsFemale));
        List<Agent> playerSideAgents = new List<Agent>()
        {
          Agent.Main
        };
        List<Agent> opponentSideAgents = new List<Agent>()
        {
          this._rogueAgent
        };
        foreach (Agent nearbyAgent in (List<Agent>) Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 30f, new MBList<Agent>()))
        {
          foreach (Hero hero in Hero.MainHero.CompanionsInParty)
          {
            if (nearbyAgent.Character == hero.CharacterObject)
            {
              nearbyAgent.SetTeam(Mission.Current.SpectatorTeam, false);
              DailyBehaviorGroup behaviorGroup = nearbyAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
              if (behaviorGroup.GetActiveBehavior() is FollowAgentBehavior)
              {
                behaviorGroup.GetBehavior<FollowAgentBehavior>().SetTargetAgent((Agent) null);
                break;
              }
              break;
            }
          }
        }
        this._rogueAgent.Health = 200f;
        Mission.Current.GetMissionBehavior<MissionFightHandler>().StartCustomFight(playerSideAgents, opponentSideAgents, false, false, new MissionFightHandler.OnFightEndDelegate(this.StartConversationAfterFight));
      }

      private void StartConversationAfterFight(bool isPlayerSideWon)
      {
        if (isPlayerSideWon)
        {
          this._didPlayerBeatRouge = true;
          Campaign.Current.ConversationManager.SetupAndStartMissionConversation((IAgent) this._daughterAgent, (IAgent) Mission.Current.MainAgent, false);
          TraitLevelingHelper.OnHostileAction(-50);
        }
        else
          this._playerDefeatedByRogue = true;
      }

      private void AddPersuasionDialogs(DialogFlow dialog)
      {
        TextObject parent1 = new TextObject("{=ob5SejgJ}I will not abandon my love, {?PLAYER.GENDER}lady{?}sir{\\?}!");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent1);
        TextObject parent2 = new TextObject("{=cqe8FU8M}{?QUEST_GIVER.GENDER}She{?}He{\\?} cares nothing about me! Only about {?QUEST_GIVER.GENDER}her{?}his{\\?} reputation in our district.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent2);
        dialog.AddDialogLine("daughter_persuade_to_come_introduction", "start_daughter_persuade_to_come_persuasion", "daughter_persuade_to_come_start_reservation", parent2.ToString(), (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.persuasion_start_with_daughter_on_consequence), (object) this, speakerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), listenerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero));
        dialog.AddDialogLine("daughter_persuade_to_come_rejected", "daughter_persuade_to_come_start_reservation", "daughter_persuade_to_come_persuasion_failed", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.daughter_persuade_to_come_persuasion_failed_on_condition), new ConversationSentence.OnConsequenceDelegate(this.daughter_persuade_to_come_persuasion_failed_on_consequence), (object) this, speakerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), listenerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero));
        dialog.AddDialogLine("daughter_persuade_to_come_failed", "daughter_persuade_to_come_persuasion_failed", "daughter_persuade_to_come_persuasion_finished", parent1.ToString(), (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null, (object) this);
        dialog.AddDialogLine("daughter_persuade_to_come_start", "daughter_persuade_to_come_start_reservation", "daughter_persuade_to_come_persuasion_select_option", "{=9b2BETct}I have already decided. Don't expect me to change my mind.", (ConversationSentence.OnConditionDelegate) (() => !this.daughter_persuade_to_come_persuasion_failed_on_condition()), (ConversationSentence.OnConsequenceDelegate) null, (object) this, speakerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), listenerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero));
        dialog.AddDialogLine("daughter_persuade_to_come_success", "daughter_persuade_to_come_start_reservation", "close_window", "{=3tmXBpRH}You're right. I cannot do this. I will return to my family. ", new ConversationSentence.OnConditionDelegate(ConversationManager.GetPersuasionProgressSatisfied), new ConversationSentence.OnConsequenceDelegate(this.daughter_persuade_to_come_persuasion_success_on_consequence), (object) this, int.MaxValue, speakerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero), listenerDelegate: new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero));
        DialogFlow dialogFlow1 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_1_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_1_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_1);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_1_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
        ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate1 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero);
        ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate1 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero);
        dialogFlow1.AddPlayerLine("daughter_persuade_to_come_select_option_1", "daughter_persuade_to_come_persuasion_select_option", "daughter_persuade_to_come_persuasion_selected_option_response", "{=!}{DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, (object) this, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2, speakerDelegate: speakerDelegate1, listenerDelegate: listenerDelegate1);
        DialogFlow dialogFlow2 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_2_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_2_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_2);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_2_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
        ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate2 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero);
        ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate2 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero);
        dialogFlow2.AddPlayerLine("daughter_persuade_to_come_select_option_2", "daughter_persuade_to_come_persuasion_select_option", "daughter_persuade_to_come_persuasion_selected_option_response", "{=!}{DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, (object) this, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4, speakerDelegate: speakerDelegate2, listenerDelegate: listenerDelegate2);
        DialogFlow dialogFlow3 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_3_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_3_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_3);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_3_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
        ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate3 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero);
        ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate3 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero);
        dialogFlow3.AddPlayerLine("daughter_persuade_to_come_select_option_3", "daughter_persuade_to_come_persuasion_select_option", "daughter_persuade_to_come_persuasion_selected_option_response", "{=!}{DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, (object) this, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6, speakerDelegate: speakerDelegate3, listenerDelegate: listenerDelegate3);
        DialogFlow dialogFlow4 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate4 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_4_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate4 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_4_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate7 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_4);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate4 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_4_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate8 = persuasionOptionDelegate7;
        ConversationSentence.OnMultipleConversationConsequenceDelegate speakerDelegate4 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero);
        ConversationSentence.OnMultipleConversationConsequenceDelegate listenerDelegate4 = new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsDaughterHero);
        dialogFlow4.AddPlayerLine("daughter_persuade_to_come_select_option_4", "daughter_persuade_to_come_persuasion_select_option", "daughter_persuade_to_come_persuasion_selected_option_response", "{=!}{DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_4}", conditionDelegate4, consequenceDelegate4, (object) this, clickableConditionDelegate: clickableConditionDelegate4, persuasionOptionDelegate: persuasionOptionDelegate8, speakerDelegate: speakerDelegate4, listenerDelegate: listenerDelegate4);
        dialog.AddDialogLine("daughter_persuade_to_come_select_option_reaction", "daughter_persuade_to_come_persuasion_selected_option_response", "daughter_persuade_to_come_start_reservation", "{=D0xDRqvm}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.persuasion_selected_option_response_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_selected_option_response_on_consequence), (object) this);
      }

      private void persuasion_selected_option_response_on_consequence()
      {
        Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
        float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.Hard);
        float moveToNextStageChance;
        float blockRandomOptionChance;
        Campaign.Current.Models.PersuasionModel.GetEffectChances(tuple.Item1, out moveToNextStageChance, out blockRandomOptionChance, difficulty);
        this._task.ApplyEffects(moveToNextStageChance, blockRandomOptionChance);
      }

      private bool persuasion_selected_option_response_on_condition()
      {
        MBTextManager.SetTextVariable("PERSUASION_REACTION", PersuasionHelper.GetDefaultPersuasionOptionReaction(ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>().Item2), false);
        return true;
      }

      private bool persuasion_select_option_1_on_condition()
      {
        if (this._task.Options.Count <= 0)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(0), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(0).Line);
        MBTextManager.SetTextVariable("DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_1", text, false);
        return true;
      }

      private bool persuasion_select_option_2_on_condition()
      {
        if (this._task.Options.Count <= 1)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(1), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(1).Line);
        MBTextManager.SetTextVariable("DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_2", text, false);
        return true;
      }

      private bool persuasion_select_option_3_on_condition()
      {
        if (this._task.Options.Count <= 2)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(2), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(2).Line);
        MBTextManager.SetTextVariable("DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_3", text, false);
        return true;
      }

      private bool persuasion_select_option_4_on_condition()
      {
        if (this._task.Options.Count <= 3)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(3), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(3).Line);
        MBTextManager.SetTextVariable("DAUGHTER_PERSUADE_TO_COME_PERSUADE_ATTEMPT_4", text, false);
        return true;
      }

      private void persuasion_select_option_1_on_consequence()
      {
        if (this._task.Options.Count <= 0)
          return;
        this._task.Options[0].BlockTheOption(true);
      }

      private void persuasion_select_option_2_on_consequence()
      {
        if (this._task.Options.Count <= 1)
          return;
        this._task.Options[1].BlockTheOption(true);
      }

      private void persuasion_select_option_3_on_consequence()
      {
        if (this._task.Options.Count <= 2)
          return;
        this._task.Options[2].BlockTheOption(true);
      }

      private void persuasion_select_option_4_on_consequence()
      {
        if (this._task.Options.Count <= 3)
          return;
        this._task.Options[3].BlockTheOption(true);
      }

      private PersuasionOptionArgs persuasion_setup_option_1()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(0);
      }

      private PersuasionOptionArgs persuasion_setup_option_2()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(1);
      }

      private PersuasionOptionArgs persuasion_setup_option_3()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(2);
      }

      private PersuasionOptionArgs persuasion_setup_option_4()
      {
        return this._task.Options.ElementAt<PersuasionOptionArgs>(3);
      }

      private bool persuasion_clickable_option_1_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 0)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(0).IsBlocked;
      }

      private bool persuasion_clickable_option_2_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 1)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(1).IsBlocked;
      }

      private bool persuasion_clickable_option_3_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 2)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(2).IsBlocked;
      }

      private bool persuasion_clickable_option_4_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (this._task.Options.Count <= 3)
          return false;
        hintText = this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked ? hintText : TextObject.Empty;
        return !this._task.Options.ElementAt<PersuasionOptionArgs>(3).IsBlocked;
      }

      private PersuasionTask GetPersuasionTask()
      {
        PersuasionTask persuasionTask = new PersuasionTask(0);
        persuasionTask.FinalFailLine = new TextObject("{=5aDlmdmb}No... No. It does not make sense.");
        persuasionTask.TryLaterLine = TextObject.Empty;
        persuasionTask.SpokenLine = new TextObject("{=6P1ruzsC}Maybe...");
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Leadership, DefaultTraits.Honor, TraitEffect.Positive, PersuasionArgumentStrength.Hard, true, new TextObject("{=Nhfl6tcM}Maybe, but that is your duty to your family.")));
        TextObject textObject = new TextObject("{=lustkZ7s}Perhaps {?QUEST_GIVER.GENDER}she{?}he{\\?} made those plans because {?QUEST_GIVER.GENDER}she{?}he{\\?} loves you.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.VeryEasy, false, textObject));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.VeryHard, false, new TextObject("{=Ns6Svjsn}Do you think this one will be faithful to you over many years? I know a rogue when I see one.")));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Mercy, TraitEffect.Negative, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=2dL6j8Hp}You want to marry a corpse? Because I'm going to kill your lover if you don't listen."), canBlockOtherOption: true));
        return persuasionTask;
      }

      private void persuasion_start_with_daughter_on_consequence()
      {
        ConversationManager.StartPersuasion(2f, 1f, 0.0f, 2f, 2f, 0.0f, PersuasionDifficulty.Hard);
      }

      private void daughter_persuade_to_come_persuasion_success_on_consequence()
      {
        ConversationManager.EndPersuasion();
        this._isDaughterPersuaded = true;
      }

      private bool daughter_persuade_to_come_persuasion_failed_on_condition()
      {
        if (!this._task.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
          return false;
        MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", this._task.FinalFailLine, false);
        return true;
      }

      private void daughter_persuade_to_come_persuasion_failed_on_consequence()
      {
        ConversationManager.EndPersuasion();
      }

      private void OnSettlementLeft(MobileParty party, Settlement settlement)
      {
        if (party.IsMainParty && settlement == this.QuestGiver.CurrentSettlement && this._exitedQuestSettlementForTheFirstTime)
        {
          if (this.DoesMainPartyHasEnoughScoutingSkill)
          {
            QuestHelper.AddMapArrowFromPointToTarget(new TextObject("{=YdwLnWa1}Direction of daughter and rogue"), settlement.Position2D, this._targetVillage.Settlement.Position2D, 5f, 0.1f);
            MBInformationManager.AddQuickInformation(new TextObject("{=O15PyNUK}With the help of your scouting skill, you were able to trace their tracks."));
            MBInformationManager.AddQuickInformation(new TextObject("{=gOWebWiK}Their direction is marked with an arrow in the campaign map."));
            this.AddTrackedObject((ITrackableCampaignObject) this._targetVillage.Settlement);
          }
          else
          {
            foreach (Village boundVillage in (List<Village>) this.QuestGiver.CurrentSettlement.Village.Bound.BoundVillages)
            {
              if (boundVillage != this.QuestGiver.CurrentSettlement.Village)
              {
                this._villagesAndAlreadyVisitedBooleans.Add(boundVillage, false);
                this.AddTrackedObject((ITrackableCampaignObject) boundVillage.Settlement);
              }
            }
          }
          TextObject textObject = new TextObject("{=FvtAJE2Q}In order to find {QUEST_GIVER.LINK}'s daughter, you have decided to visit nearby villages.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
          this.AddLog(textObject, this.DoesMainPartyHasEnoughScoutingSkill);
          this._exitedQuestSettlementForTheFirstTime = false;
        }
        if (!party.IsMainParty || settlement != this._targetVillage.Settlement)
          return;
        this._isQuestTargetMission = false;
      }

      public void OnBeforeMissionOpened()
      {
        if (!this._isQuestTargetMission)
          return;
        Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("village_center");
        if (locationWithId == null)
          return;
        this.HandleRogueEquipment();
        locationWithId.AddCharacter(this.CreateQuestLocationCharacter(this._daughterHero.CharacterObject, LocationCharacter.CharacterRelations.Neutral));
        locationWithId.AddCharacter(this.CreateQuestLocationCharacter(this._rogueHero.CharacterObject, LocationCharacter.CharacterRelations.Neutral));
      }

      private void HandleRogueEquipment()
      {
        this._rogueHero.CivilianEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(MBObjectManager.Instance.GetObject<ItemObject>("short_sword_t3")));
        for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
        {
          EquipmentElement equipmentElement = this._rogueHero.BattleEquipment[index];
          ItemObject itemObject = equipmentElement.Item;
          if (itemObject != null && itemObject.WeaponComponent.PrimaryWeapon.IsShield)
          {
            Equipment battleEquipment = this._rogueHero.BattleEquipment;
            int num = (int) index;
            equipmentElement = new EquipmentElement();
            EquipmentElement itemRosterElement = equipmentElement;
            battleEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) num, itemRosterElement);
          }
        }
      }

      private void OnMissionEnded(IMission mission)
      {
        if (!this._isQuestTargetMission)
          return;
        this._daughterAgent = (Agent) null;
        this._rogueAgent = (Agent) null;
        if (this._isDaughterPersuaded)
        {
          this.ApplyDeliverySuccessConsequences();
          this.CompleteQuestWithSuccess();
          this.AddLog(this._successQuestLogText);
          this.RemoveQuestCharacters();
        }
        else if (this._acceptedDaughtersEscape)
        {
          this.ApplyDaughtersEscapeAcceptedFailConsequences();
          this.CompleteQuestWithFail(this._failQuestLogText);
          this.RemoveQuestCharacters();
        }
        else if (this._isDaughterCaptured)
        {
          this.ApplyDeliverySuccessConsequences();
          this.CompleteQuestWithSuccess();
          this.AddLog(this._successQuestLogText);
          this.RemoveQuestCharacters();
        }
        else
        {
          if (!this._playerDefeatedByRogue)
            return;
          this.CompleteQuestWithFail();
          this.AddLog(this._playerDefeatedByRogueLogText);
          this.RemoveQuestCharacters();
        }
      }

      private LocationCharacter CreateQuestLocationCharacter(
        CharacterObject character,
        LocationCharacter.CharacterRelations relation)
      {
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(character.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, character.IsFemale, "_villager"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) character)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddCompanionBehaviors), "alley_2", true, relation, tuple.Item1, false, isVisualTracked: true);
      }

      private void RemoveQuestCharacters()
      {
        Settlement.CurrentSettlement.LocationComplex.RemoveCharacterIfExists(this._daughterHero);
        Settlement.CurrentSettlement.LocationComplex.RemoveCharacterIfExists(this._rogueHero);
      }

      private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
      {
        if (party == null || !party.IsMainParty || !settlement.IsVillage)
          return;
        if (this._villagesAndAlreadyVisitedBooleans.ContainsKey(settlement.Village) && !this._villagesAndAlreadyVisitedBooleans[settlement.Village])
        {
          if (settlement.Village != this._targetVillage)
          {
            TextObject parent = settlement.IsRaided ? new TextObject("{=YTaM6G1E}It seems the village has been raided a short while ago. You found nothing but smoke, fire and crying people.") : new TextObject("{=2P3UJ8be}You ask around the village if anyone saw {TARGET_HERO.NAME} or some suspicious characters with a young woman.\n\nVillagers say that they saw a young man and woman ride in early in the morning. They bought some supplies and trotted off towards {TARGET_VILLAGE}.");
            parent.SetTextVariable("TARGET_VILLAGE", this._targetVillage.Name);
            StringHelpers.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject, parent);
            InformationManager.ShowInquiry(new InquiryData(this.Title.ToString(), parent.ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), "", (Action) null, (Action) null));
            if (!this._isTrackerLogAdded)
            {
              TextObject textObject = new TextObject("{=WGi3Zuv7}You asked the villagers around {CURRENT_SETTLEMENT} if they saw a young woman matching the description of {QUEST_GIVER.LINK}'s daughter, {TARGET_HERO.NAME}.\n\nThey said a young woman and a young man dropped by early in the morning to buy some supplies and then rode off towards {TARGET_VILLAGE}.");
              textObject.SetTextVariable("CURRENT_SETTLEMENT", Hero.MainHero.CurrentSettlement.Name);
              textObject.SetTextVariable("TARGET_VILLAGE", this._targetVillage.Settlement.EncyclopediaLinkWithName);
              StringHelpers.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject, textObject);
              StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
              this.AddLog(textObject);
              this._isTrackerLogAdded = true;
            }
          }
          else
          {
            InquiryData data;
            if (settlement.IsRaided)
            {
              TextObject parent = new TextObject("{=edoXFdmg}You have found {QUEST_GIVER.NAME}'s daughter.");
              StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
              TextObject textObject = new TextObject("{=aYMW8bWi}Talk to her");
              data = new InquiryData(this.Title.ToString(), parent.ToString(), true, false, textObject.ToString(), (string) null, new Action(this.TalkWithDaughterAfterRaid), (Action) null);
            }
            else
            {
              TextObject parent = new TextObject("{=bbwNIIKI}You ask around the village if anyone saw {TARGET_HERO.NAME} or some suspicious characters with a young woman.\n\nVillagers say that there was a young man and woman who arrived here exhausted. The villagers allowed them to stay for a while.\nYou can check the area, and see if they are still hiding here.");
              StringHelpers.SetCharacterProperties("TARGET_HERO", this._daughterHero.CharacterObject, parent);
              data = new InquiryData(this.Title.ToString(), parent.ToString(), true, true, new TextObject("{=bb6e8DoM}Search the village").ToString(), new TextObject("{=3CpNUnVl}Cancel").ToString(), new Action(this.SearchTheVillage), (Action) null);
            }
            InformationManager.ShowInquiry(data);
          }
          this._villagesAndAlreadyVisitedBooleans[settlement.Village] = true;
        }
        if (settlement != this._targetVillage.Settlement)
          return;
        if (!this.IsTracked((ITrackableCampaignObject) this._daughterHero))
          this.AddTrackedObject((ITrackableCampaignObject) this._daughterHero);
        if (!this.IsTracked((ITrackableCampaignObject) this._rogueHero))
          this.AddTrackedObject((ITrackableCampaignObject) this._rogueHero);
        this._isQuestTargetMission = true;
      }

      private void SearchTheVillage()
      {
        if (!(PlayerEncounter.LocationEncounter is VillageEncounter locationEncounter))
          return;
        locationEncounter.CreateAndOpenMissionController(LocationComplex.Current.GetLocationWithId("village_center"), (Location) null, (CharacterObject) null, (string) null);
      }

      private void TalkWithDaughterAfterRaid()
      {
        this._villageIsRaidedTalkWithDaughter = true;
        CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter), new ConversationCharacterData(this._daughterHero.CharacterObject));
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this._playerStartsQuestLogText);
      }

      private void CanHeroDie(
        Hero victim,
        KillCharacterAction.KillCharacterActionDetail detail,
        ref bool result)
      {
        if (victim != Hero.MainHero || Settlement.CurrentSettlement != this._targetVillage.Settlement || Mission.Current == null)
          return;
        result = false;
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
        CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
        CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeMissionOpened));
        CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnded));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.CanHeroDieEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.CanHeroDie));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
        CampaignEvents.RaidCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, RaidEventComponent>(this.OnRaidCompleted));
      }

      private void OnRaidCompleted(BattleSideEnum side, RaidEventComponent raidEventComponent)
      {
        if (raidEventComponent.MapEventSettlement != this.QuestGiver.CurrentSettlement)
          return;
        this.CompleteQuestWithCancel(this._villageRaidedCancelQuestLogText);
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._rogueHero && hero != this._daughterHero)
          return;
        result = false;
      }

      public override void OnHeroCanMoveToSettlementInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._rogueHero && hero != this._daughterHero)
          return;
        result = false;
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
        if (!this.QuestGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          return;
        this.CompleteQuestWithCancel(this._questCanceledWarDeclaredLog);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._questCanceledWarDeclaredLog);
      }

      protected override void OnFinalize()
      {
        if (this.IsTracked((ITrackableCampaignObject) this._targetVillage.Settlement))
          this.RemoveTrackedObject((ITrackableCampaignObject) this._targetVillage.Settlement);
        if (!Hero.MainHero.IsPrisoner && !this.DoesMainPartyHasEnoughScoutingSkill)
        {
          foreach (Village boundVillage in (List<Village>) this.QuestGiver.CurrentSettlement.BoundVillages)
          {
            if (this.IsTracked((ITrackableCampaignObject) boundVillage.Settlement))
              this.RemoveTrackedObject((ITrackableCampaignObject) boundVillage.Settlement);
          }
        }
        if (this._rogueHero != null && this._rogueHero.IsAlive)
          KillCharacterAction.ApplyByRemove(this._rogueHero);
        if (this._daughterHero == null || !this._daughterHero.IsAlive)
          return;
        KillCharacterAction.ApplyByRemove(this._daughterHero);
      }

      internal static void AutoGeneratedStaticCollectObjectsNotableWantsDaughterFoundIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._daughterHero);
        collectedObjects.Add((object) this._rogueHero);
        collectedObjects.Add((object) this._targetVillage);
        collectedObjects.Add((object) this._villagesAndAlreadyVisitedBooleans);
      }

      internal static object AutoGeneratedGetMemberValue_daughterHero(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._daughterHero;
      }

      internal static object AutoGeneratedGetMemberValue_rogueHero(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._rogueHero;
      }

      internal static object AutoGeneratedGetMemberValue_isQuestTargetMission(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._isQuestTargetMission;
      }

      internal static object AutoGeneratedGetMemberValue_didPlayerBeatRouge(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._didPlayerBeatRouge;
      }

      internal static object AutoGeneratedGetMemberValue_exitedQuestSettlementForTheFirstTime(
        object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._exitedQuestSettlementForTheFirstTime;
      }

      internal static object AutoGeneratedGetMemberValue_isTrackerLogAdded(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._isTrackerLogAdded;
      }

      internal static object AutoGeneratedGetMemberValue_isDaughterPersuaded(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._isDaughterPersuaded;
      }

      internal static object AutoGeneratedGetMemberValue_isDaughterCaptured(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._isDaughterCaptured;
      }

      internal static object AutoGeneratedGetMemberValue_acceptedDaughtersEscape(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._acceptedDaughtersEscape;
      }

      internal static object AutoGeneratedGetMemberValue_targetVillage(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._targetVillage;
      }

      internal static object AutoGeneratedGetMemberValue_villageIsRaidedTalkWithDaughter(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._villageIsRaidedTalkWithDaughter;
      }

      internal static object AutoGeneratedGetMemberValue_villagesAndAlreadyVisitedBooleans(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._villagesAndAlreadyVisitedBooleans;
      }

      internal static object AutoGeneratedGetMemberValue_questDifficultyMultiplier(object o)
      {
        return (object) ((NotableWantsDaughterFoundIssueBehavior.NotableWantsDaughterFoundIssueQuest) o)._questDifficultyMultiplier;
      }
    }
  }
}
