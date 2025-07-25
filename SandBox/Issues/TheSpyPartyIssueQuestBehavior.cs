// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.TheSpyPartyIssueQuestBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
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
  public class TheSpyPartyIssueQuestBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency TheSpyPartyIssueFrequency = IssueBase.IssueFrequency.Rare;
    private const int IssueDuration = 5;

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
    }

    public void OnCheckForIssue(Hero hero)
    {
      Settlement selectedSettlement;
      if (this.ConditionsHold(hero, out selectedSettlement))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (TheSpyPartyIssueQuestBehavior.TheSpyPartyIssue), IssueBase.IssueFrequency.Rare, (object) selectedSettlement));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (TheSpyPartyIssueQuestBehavior.TheSpyPartyIssue), IssueBase.IssueFrequency.Rare));
    }

    private bool ConditionsHold(Hero issueGiver, out Settlement selectedSettlement)
    {
      selectedSettlement = (Settlement) null;
      if (!issueGiver.IsLord || issueGiver.Clan == Clan.PlayerClan || !issueGiver.Clan.Settlements.Any<Settlement>((Func<Settlement, bool>) (x => x.IsTown)))
        return false;
      selectedSettlement = issueGiver.Clan.Settlements.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (x => x.IsTown));
      string difficultySuffix = TheSpyPartyIssueQuestBehavior.GetDifficultySuffix(Campaign.Current.Models.IssueModel.GetIssueDifficultyMultiplier());
      int num = MBObjectManager.Instance.GetObject<CharacterObject>("bold_contender_" + difficultySuffix) == null || MBObjectManager.Instance.GetObject<CharacterObject>("confident_contender_" + difficultySuffix) == null || MBObjectManager.Instance.GetObject<CharacterObject>("dignified_contender_" + difficultySuffix) == null ? 0 : (MBObjectManager.Instance.GetObject<CharacterObject>("hardy_contender_" + difficultySuffix) != null ? 1 : 0);
      if (num != 0)
        return num != 0;
      CampaignEventDispatcher.Instance.RemoveListeners((object) this);
      return num != 0;
    }

    private static string GetDifficultySuffix(float difficulty)
    {
      if ((double) difficulty <= 0.25)
        return "easy";
      if ((double) difficulty <= 0.5)
        return "normal";
      return (double) difficulty <= 0.75 ? "hard" : "very_hard";
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new TheSpyPartyIssueQuestBehavior.TheSpyPartyIssue(issueOwner, pid.RelatedObject as Settlement);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class TheSpyPartyIssueQuestTypeDefiner : SaveableTypeDefiner
    {
      public TheSpyPartyIssueQuestTypeDefiner()
        : base(121250)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (TheSpyPartyIssueQuestBehavior.TheSpyPartyIssue), 1);
        this.AddClassDefinition(typeof (TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest), 2);
      }

      protected override void DefineStructTypes()
      {
        this.AddStructDefinition(typeof (TheSpyPartyIssueQuestBehavior.SuspectNpc), 3);
      }
    }

    public struct SuspectNpc
    {
      [SaveableField(10)]
      public readonly CharacterObject CharacterObject;
      [SaveableField(20)]
      public readonly bool HasHair;
      [SaveableField(30)]
      public readonly bool HasBigSword;
      [SaveableField(40)]
      public readonly bool WithoutMarkings;
      [SaveableField(50)]
      public readonly bool HasBeard;

      public SuspectNpc(
        CharacterObject characterObject,
        bool hasHair,
        bool hasBigSword,
        bool withoutMarkings,
        bool hasBeard)
      {
        this.CharacterObject = characterObject;
        this.HasHair = hasHair;
        this.HasBigSword = hasBigSword;
        this.WithoutMarkings = withoutMarkings;
        this.HasBeard = hasBeard;
      }

      public static void AutoGeneratedStaticCollectObjectsSuspectNpc(
        object o,
        List<object> collectedObjects)
      {
        ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      private void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.CharacterObject);
      }

      internal static object AutoGeneratedGetMemberValueCharacterObject(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).CharacterObject;
      }

      internal static object AutoGeneratedGetMemberValueHasHair(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).HasHair;
      }

      internal static object AutoGeneratedGetMemberValueHasBigSword(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).HasBigSword;
      }

      internal static object AutoGeneratedGetMemberValueWithoutMarkings(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).WithoutMarkings;
      }

      internal static object AutoGeneratedGetMemberValueHasBeard(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.SuspectNpc) o).HasBeard;
      }
    }

    public class TheSpyPartyIssue : IssueBase
    {
      private const int QuestDurationInDays = 16;
      private const int RequiredSkillValue = 150;
      private const int AlternativeSolutionTroopTierRequirement = 2;
      [SaveableField(10)]
      private readonly Settlement _selectedSettlement;

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (600.0 + 800.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 1 + MathF.Ceiling(4f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 3 + MathF.Ceiling(3f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get => (int) (500.0 + 3000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject briefByIssueGiver = new TextObject("{=tFPJySG7}I am hosting a tournament at {SELECTED_SETTLEMENT}. [ib:convo_undecided_open][if:convo_pondering]I am expecting contenders to partake from all over the realm. I have my reasons to believe one of the attending warriors is actually a spy, sent to gather information about its defenses.");
          briefByIssueGiver.SetTextVariable("SELECTED_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
          return briefByIssueGiver;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get
        {
          return new TextObject("{=EYT7b2J5}Any traveler can be asked by an enemy to spy on the places he travels. How can I track this one down?");
        }
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=2lgkL9db}Of course. I have employed spies myself. But if a tournament [if:convo_pondering][ib:confident3]participant is asking questions about the state of the garrison and the walls, things which would concern no honest traveler - well, between that and the private information I've received, I think we'd have our man. The spy must be hiding inside {SELECTED_SETTLEMENT}. Once you are there start questioning the townsfolk.");
          explanationByIssueGiver.SetTextVariable("SELECTED_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssuePlayerResponseAfterAlternativeExplanation
      {
        get
        {
          return new TextObject("{=2nFBTmao}Is there any other way to solve this other than asking around?");
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=avVno3H8}Well, you can assign a companion of yours with a knack for this kind of game[if:convo_thinking] and enough muscles to back him up. Judging from what I have heard, a group of {NEEDED_MEN_COUNT} should be enough.");
          explanationByIssueGiver.SetTextVariable("NEEDED_MEN_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=99OsuHGa}I will find the one you are looking for.");
      }

      public override TextObject Title => new TextObject("{=SJHtVaNa}The Spy Among Us");

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=C6rbcpbi}{QUEST_GIVER.LINK} wants you to find a spy before he causes any harm...");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=FEcAwSfk}I will assign a companion with {NEEDED_MEN_COUNT} good men for {ALTERNATIVE_SOLUTION_DURATION} days.");
          solutionAcceptByPlayer.SetTextVariable("NEEDED_MEN_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          solutionAcceptByPlayer.SetTextVariable("ALTERNATIVE_SOLUTION_DURATION", this.GetTotalAlternativeSolutionDurationInDays());
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=O0Cjam62}I hope your people are careful about how they proceed.[if:convo_focused_happy] It would be a pity if that spy got away.");
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=ciXBiMMa}Thank you {PLAYER.NAME}, I hope your people will be successful.[if:convo_focused_happy]");
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=s5qs0bPs}{ISSUE_GIVER.LINK}, the {?ISSUE_GIVER.GENDER}lady{?}lord{\\?} of {QUEST_SETTLEMENT}, has told you about a spy that hides as a tournament attendee. You are asked to expose the spy and take care of him. You asked {COMPANION.LINK} to take {NEEDED_MEN_COUNT} of your best men to go and take care of it. They should report back to you in {ALTERNATIVE_SOLUTION_DURATION} days.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("ALTERNATIVE_SOLUTION_DURATION", this.GetTotalAlternativeSolutionDurationInDays());
          parent.SetTextVariable("NEEDED_MEN_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          return parent;
        }
      }

      public TheSpyPartyIssue(Hero issueOwner, Settlement selectedSettlement)
        : base(issueOwner, CampaignTime.DaysFromNow(5f))
      {
        this._selectedSettlement = selectedSettlement;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.SettlementSecurity)
          return -2f;
        if (issueEffect == DefaultIssueEffects.SettlementLoyalty)
          return -0.5f;
        return issueEffect == DefaultIssueEffects.ClanInfluence ? -0.2f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Charm) >= hero.GetSkillValue(DefaultSkills.Roguery) ? DefaultSkills.Charm : DefaultSkills.Roguery, 150);
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
      {
        return character.Tier >= 2;
      }

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        GainRenownAction.Apply(Hero.MainHero, 1f);
        this.RelationshipChangeWithIssueOwner = 5;
        this._selectedSettlement.Town.Prosperity += 5f;
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -5;
        this.IssueOwner.AddPower(-5f);
        this._selectedSettlement.Town.Security -= 10f;
        this._selectedSettlement.Town.Loyalty -= 10f;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(16f), this.RewardGold, this._selectedSettlement, this.IssueDifficultyMultiplier);
      }

      public override IssueBase.IssueFrequency GetFrequency() => IssueBase.IssueFrequency.Rare;

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        flag = IssueBase.PreconditionFlags.None;
        relationHero = (Hero) null;
        skill = (SkillObject) null;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flag |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions()
      {
        return this.IssueOwner.IsAlive && this._selectedSettlement.OwnerClan == this.IssueOwner.Clan && this.IssueOwner.Clan != Clan.PlayerClan;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      internal static void AutoGeneratedStaticCollectObjectsTheSpyPartyIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._selectedSettlement);
      }

      internal static object AutoGeneratedGetMemberValue_selectedSettlement(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssue) o)._selectedSettlement;
      }
    }

    public class TheSpyPartyIssueQuest : QuestBase
    {
      public const float CustomAgentHealth = 225f;
      [SaveableField(10)]
      private Settlement _selectedSettlement;
      [SaveableField(20)]
      private TheSpyPartyIssueQuestBehavior.SuspectNpc _selectedSpy;
      private MBList<TheSpyPartyIssueQuestBehavior.SuspectNpc> _suspectList;
      private List<Agent> _alreadySpokenAgents;
      [SaveableField(30)]
      private bool _playerLearnedHasHair;
      [SaveableField(40)]
      private bool _playerLearnedHasNoMarkings;
      [SaveableField(50)]
      private bool _playerLearnedHasBigSword;
      [SaveableField(60)]
      private bool _playerLearnedHasBeard;
      private bool _playerWonTheFight;
      private bool _addSpyNpcsToSettlement;
      private bool _startFightWithSpy;
      private bool _checkForBattleResult;
      private bool _playerManagedToFindSpy;
      private float _giveClueChange;
      private CharacterObject _duelCharacter;
      [SaveableField(70)]
      private float _issueDifficultyMultiplier;
      [SaveableField(80)]
      private string _currentDifficultySuffix;

      public override bool IsRemainingTimeHidden => false;

      public override TextObject Title => new TextObject("{=SJHtVaNa}The Spy Among Us");

      private TextObject _questStartedLog
      {
        get
        {
          TextObject parent = new TextObject("{=94WRYoQp}{?QUEST_GIVER.GENDER}Lady{?}Lord{\\?} {QUEST_GIVER.LINK} from {QUEST_SETTLEMENT}, has told you about rumors of a spy disguised amongst the tournament attendees. You agreed to take care of the situation by yourself. {QUEST_GIVER.LINK} believes that the spy is posing as an tournament attendee in the city of {QUEST_SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _questSuccessQuestLog
      {
        get
        {
          TextObject parent = new TextObject("{=YIxpNP4k}You received a message from {QUEST_GIVER.LINK}. \"Thank you for killing the spy.[ib:hip][if:convo_grateful] Please accept these {REWARD_GOLD}{GOLD_ICON} denars with our gratitude.\"");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("REWARD_GOLD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject _questFailedKilledAnotherQuestLog
      {
        get
        {
          TextObject parent = new TextObject("{=tTKpOFRK}You won the duel but your opponent was innocent. {QUEST_GIVER.LINK} is disappointed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _playerFoundTheSpyButLostTheFight
      {
        get
        {
          TextObject parent = new TextObject("{=hJ1SFkmq}You managed to find the spy but lost the duel. {QUEST_GIVER.LINK} is disappointed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _playerCouldNotFoundTheSpyAndLostTheFight
      {
        get
        {
          TextObject parent = new TextObject("{=dOdp1aKA}You couldn't find the spy and dueled the wrong warrior. {QUEST_GIVER.LINK} is disappointed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _timedOutQuestLog
      {
        get
        {
          TextObject parent = new TextObject("{=0dlDkkJV}You have failed to find the spy. {QUEST_GIVER.LINK} is disappointed.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _questGiverLostOwnershipQuestLog
      {
        get
        {
          TextObject parent = new TextObject("{=2OmrHVjp}{QUEST_GIVER.LINK} has lost the ownership of {QUEST_SETTLEMENT}. Your contract with {?QUEST_GIVER.GENDER}her{?}him{\\?} has canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _warDeclaredQuestLog
      {
        get
        {
          TextObject declaredQuestLog = new TextObject("{=cKz1cyuM}Your clan is now at war with {QUEST_GIVER_SETTLEMENT_FACTION}. Quest is canceled.");
          declaredQuestLog.SetTextVariable("QUEST_GIVER_SETTLEMENT_FACTION", this.QuestGiver.MapFaction.Name);
          return declaredQuestLog;
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

      public TheSpyPartyIssueQuest(
        string questId,
        Hero questGiver,
        CampaignTime duration,
        int rewardGold,
        Settlement selectedSettlement,
        float issueDifficultyMultiplier)
        : base(questId, questGiver, duration, rewardGold)
      {
        this._selectedSettlement = selectedSettlement;
        this._alreadySpokenAgents = new List<Agent>();
        this._issueDifficultyMultiplier = issueDifficultyMultiplier;
        this._giveClueChange = 0.1f;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
        this.InitializeSuspectNpcs();
        this._selectedSpy = this._suspectList.GetRandomElement<TheSpyPartyIssueQuestBehavior.SuspectNpc>();
        if (this.IsTracked((ITrackableCampaignObject) this._selectedSettlement))
          return;
        this.AddTrackedObject((ITrackableCampaignObject) this._selectedSettlement);
      }

      private void InitializeSuspectNpcs()
      {
        this._suspectList = new MBList<TheSpyPartyIssueQuestBehavior.SuspectNpc>();
        this._currentDifficultySuffix = TheSpyPartyIssueQuestBehavior.GetDifficultySuffix(this._issueDifficultyMultiplier);
        this._suspectList.Add(new TheSpyPartyIssueQuestBehavior.SuspectNpc(MBObjectManager.Instance.GetObject<CharacterObject>("bold_contender_" + this._currentDifficultySuffix), false, true, true, true));
        this._suspectList.Add(new TheSpyPartyIssueQuestBehavior.SuspectNpc(MBObjectManager.Instance.GetObject<CharacterObject>("confident_contender_" + this._currentDifficultySuffix), true, false, true, true));
        this._suspectList.Add(new TheSpyPartyIssueQuestBehavior.SuspectNpc(MBObjectManager.Instance.GetObject<CharacterObject>("dignified_contender_" + this._currentDifficultySuffix), true, true, false, true));
        this._suspectList.Add(new TheSpyPartyIssueQuestBehavior.SuspectNpc(MBObjectManager.Instance.GetObject<CharacterObject>("hardy_contender_" + this._currentDifficultySuffix), true, true, true, false));
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this._alreadySpokenAgents = new List<Agent>();
        this._giveClueChange = 0.1f;
        this.InitializeSuspectNpcs();
        this.SetDialogs();
        if (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement != this._selectedSettlement)
          return;
        this._addSpyNpcsToSettlement = true;
      }

      protected override void HourlyTick()
      {
      }

      protected override void SetDialogs()
      {
        TextObject npcText = new TextObject("{=wql79Eta}Good! We understand the spy is going to {TARGET_SETTLEMENT}. If they're trying to gather information,[ib:aggressive2][if:convo_undecided_open] they'll be wandering around the market asking questions in the guise of making small talk. Just go around talking to the townsfolk, and you should be able to figure out who it is.");
        npcText.SetTextVariable("TARGET_SETTLEMENT", this._selectedSettlement.EncyclopediaLinkWithName);
        TextObject textObject = new TextObject("{=aC0Fq6IE}Do not waste time, {PLAYER.NAME}. The spy probably won't linger any longer than he has to.[if:convo_thinking] Or she has to.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject);
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(npcText).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=yLRfb5zb}Any news? Have you managed to find him yet?[if:convo_astonished]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).BeginPlayerOptions().PlayerOption(new TextObject("{=wErSpkjy}I'm still working on it.")).NpcLine(textObject).Consequence(new ConversationSentence.OnConsequenceDelegate(this.LeaveEncounter)).CloseDialog().PlayerOption(new TextObject("{=I8raOMRH}Sorry. No progress yet.")).NpcLine(new TextObject("{=ajSm2FEU}I know spies are hard to catch but I tasked this to you for a reason. [if:convo_stern]Do not let me down {PLAYER.NAME}.")).NpcLine(new TextObject("{=pW69nUp8}Finish this task before it is too late.[if:convo_stern]")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.LeaveEncounter)).CloseDialog().EndPlayerOptions().CloseDialog();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetTownsPeopleDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotablesDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetTradersDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetSuspectsDialogFlow(), (object) this);
      }

      private void LeaveEncounter()
      {
        if (PlayerEncounter.Current == null)
          return;
        PlayerEncounter.LeaveEncounter = true;
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this._questStartedLog);
        if (Settlement.CurrentSettlement == null || Settlement.CurrentSettlement != this._selectedSettlement)
          return;
        this._addSpyNpcsToSettlement = true;
      }

      private DialogFlow GetSuspectsDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=IqhGJ8Dy}Hello there friend. Are you here for the tournament.[ib:confident3][if:convo_relaxed_happy]")).Condition((ConversationSentence.OnConditionDelegate) (() => this._suspectList.Any<TheSpyPartyIssueQuestBehavior.SuspectNpc>((Func<TheSpyPartyIssueQuestBehavior.SuspectNpc, bool>) (x => x.CharacterObject == CharacterObject.OneToOneConversationCharacter)))).BeginPlayerOptions().PlayerOption(new TextObject("{=SRa9NyP1}No, my friend. I am on a hunt.")).NpcLine(new TextObject("{=gYCSwLB2}Eh, what do you mean by that?[ib:closed][if:convo_confused_normal]")).BeginPlayerOptions().PlayerOption(new TextObject("{=oddzOnad}I'm hunting a spy. And now I have found him.")).NpcLine(new TextObject("{=MU8nbzwJ}You have nothing on me. If you try to take me anywhere I'll kill you, and it will be in self-defense.[if:convo_grave]")).PlayerLine(new TextObject("{=WDdlPUHw}Not if it's a duel. I challenge you. No true tournament fighter would refuse.")).NpcLine(new TextObject("{=Ll8q45h5}Hmf... Very well. I shall wipe out this insult with your blood.[ib:warrior][if:convo_furious]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.StartFightWithSpy))).CloseDialog().PlayerOption(new TextObject("{=O5PDH9Bc}Nothing, nothing. Go on your way.")).CloseDialog().EndPlayerOptions().PlayerOption(new TextObject("{=O7j0uzcH}I should be on my way.")).CloseDialog().EndPlayerOptions();
      }

      private void StartFightWithSpy()
      {
        this._playerManagedToFindSpy = this._selectedSpy.CharacterObject == CharacterObject.OneToOneConversationCharacter;
        this._duelCharacter = CharacterObject.OneToOneConversationCharacter;
        this._startFightWithSpy = true;
        Campaign.Current.GameMenuManager.NextLocation = LocationComplex.Current.GetLocationWithId("arena");
        Mission.Current.EndMission();
      }

      private DialogFlow GetNotablesDialogFlow()
      {
        TextObject textObject = new TextObject("{=0RTwaPBJ}I speak to many people. Of course, as I am loyal to {QUEST_GIVER.NAME}, [if:convo_pondering]I am always on the lookout for spies. But I've seen no one like this.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        return DialogFlow.CreateDialogFlow("hero_main_options", 125).BeginPlayerOptions().PlayerOption(new TextObject("{=xPTxkzVM}I am looking for a spy. Have you seen any warriors in the tournament wandering about, asking too many suspicious questions?")).Condition((ConversationSentence.OnConditionDelegate) (() => Settlement.CurrentSettlement == this._selectedSettlement && Hero.OneToOneConversationHero.IsNotable)).NpcLine(textObject).CloseDialog().EndPlayerOptions();
      }

      private DialogFlow GetTradersDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("weaponsmith_talk_player", 125).BeginPlayerOptions().PlayerOption(new TextObject("{=SHwlcdp3}I ask you because you are a trader here. Have you seen one of the warriors in the tournament walking around here, asking people a lot of suspicious questions?")).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          if (Settlement.CurrentSettlement != this._selectedSettlement)
            return false;
          return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.HorseTrader || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.GoodsTrader || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Blacksmith || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Weaponsmith;
        })).NpcLine(new TextObject("{=ocoHNhNk}Hmm... I keep pretty busy with my own trade. I haven't heard anything like that.[if:convo_pondering]")).CloseDialog().EndPlayerOptions();
      }

      private DialogFlow GetTownsPeopleDialogFlow()
      {
        TextObject playerOption1 = new TextObject("{=A2oos2Uo}Listen to me. I'm on assignment from {QUEST_GIVER.NAME}. Have any strangers been around here, asking odd questions about the garrison?");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, playerOption1);
        TextObject playerOption2 = new TextObject("{=RXhBl8e1}Act normal. Have any of the participants in the tournament come round, asking very odd questions?");
        TextObject playerOption3 = new TextObject("{=HF2GIpbI}Listen to me. Have any of the tournament participants spent long hours in the market and tavern? More than usual?");
        float dontGiveClueResponse = 0.0f;
        bool giveClue = false;
        return DialogFlow.CreateDialogFlow("town_or_village_player", 125).BeginPlayerOptions().PlayerOption(new TextObject("{=GtgGnMe1}{PLAYER_OPTION}")).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          if (Settlement.CurrentSettlement != this._selectedSettlement)
            return false;
          float randomFloat = MBRandom.RandomFloat;
          dontGiveClueResponse = MBRandom.RandomFloat;
          if ((double) randomFloat < 0.33000001311302185)
            MBTextManager.SetTextVariable("PLAYER_OPTION", playerOption1, false);
          else if ((double) randomFloat >= 0.33000001311302185 && (double) randomFloat <= 0.6600000262260437)
            MBTextManager.SetTextVariable("PLAYER_OPTION", playerOption2, false);
          else
            MBTextManager.SetTextVariable("PLAYER_OPTION", playerOption3, false);
          return true;
        })).Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
        {
          giveClue = (double) this._giveClueChange >= (double) MBRandom.RandomFloat;
          Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.AddAgentToAlreadySpokenList);
        })).BeginNpcOptions().NpcOption(new TextObject("{=8gmne3b9}Not to me {?PLAYER.GENDER}madam{?}sir{\\?}, no. I did overhear someone talking to another merchant about such things. I remember him because he had this nasty looking sword by his side.[if:convo_disbelief]"), (ConversationSentence.OnConditionDelegate) (() => giveClue && this._selectedSpy.HasBigSword && !this._playerLearnedHasBigSword && this.CommonCondition())).PlayerLine(new TextObject("{=VP6s1YFW}Many contenders have swords on their backs. Still this information might prove useful.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerLearnedSpyHasSword)).CloseDialog().NpcOption(new TextObject("{=gHnMYU9n}Why yes... At the tavern last night... Cornered a drunk and kept pressing him for information about the gatehouse. Had a beard, that one did.[if:convo_pondering]"), (ConversationSentence.OnConditionDelegate) (() => giveClue && this._selectedSpy.HasBeard && !this._playerLearnedHasBeard && this.CommonCondition())).PlayerLine(new TextObject("{=QaAzicqA}Many men have beards. Still, that is something.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerLearnedSpyHasBeard)).CloseDialog().NpcOption(new TextObject("{=DUVqJifX}Yeah. I've seen one like that around the arena, asking all matter of outlandish questions. Middle-aged, normal head of hair, that's really all I can remember though.[if:convo_thinking]"), (ConversationSentence.OnConditionDelegate) (() => giveClue && this._selectedSpy.HasHair && !this._playerLearnedHasHair && this.CommonCondition())).PlayerLine(new TextObject("{=JjtmptiD}More men have hair than not, but this is another tile in the mosaic.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerLearnedSpyHasHair)).CloseDialog().NpcOption(new TextObject("{=tXpmCzoZ}Well, there was one warrior. A handsome young lad. Didn't have any of those scars that some fighters pick up in battle, nor any of those marks or tattoos or whatever that [if:convo_pondering]some of the hard cases like to show off."), (ConversationSentence.OnConditionDelegate) (() => giveClue && this._selectedSpy.WithoutMarkings && !this._playerLearnedHasNoMarkings && this.CommonCondition())).PlayerLine(new TextObject("{=ZCbQvqqv}A face without scars and markings is usual for farmers and merchants but less so for warriors. This might be useful.")).Consequence(new ConversationSentence.OnConsequenceDelegate(this.PlayerLearnedSpyHasNoMarkings)).CloseDialog().NpcOption(new TextObject("{=sfxfiWxl}{?PLAYER.GENDER}Madam{?}Sir{\\?}, people gossip. Everyone around here knows you've been asking those questions. Your quarry is going to slip away if you don't move quickly."), (ConversationSentence.OnConditionDelegate) (() => (double) dontGiveClueResponse <= 0.20000000298023224)).PlayerLine(new TextObject("{=04gFKwY1}Well, if you see anyone like that, let me know.")).CloseDialog().NpcOption(new TextObject("{=VWaNqkqJ}Can't say I've seen anyone around here like that, {?PLAYER.GENDER}madam{?}sir{\\?}."), (ConversationSentence.OnConditionDelegate) (() => (double) dontGiveClueResponse > 0.20000000298023224 && (double) dontGiveClueResponse <= 0.40000000596046448)).PlayerLine(new TextObject("{=QbzsgawM}Okay, just keep your eyes open.")).CloseDialog().NpcOption(new TextObject("{=ff5XEKPB}Afraid I can't recall anyone like that, {?PLAYER.GENDER}madam{?}sir{\\?}."), (ConversationSentence.OnConditionDelegate) (() => (double) dontGiveClueResponse > 0.40000000596046448 && (double) dontGiveClueResponse <= 0.60000002384185791)).PlayerLine(new TextObject("{=ArseaKsm}Very well. Thanks for your time.")).CloseDialog().NpcOption(new TextObject("{=C6EOT3yY}No, sorry. Haven't seen anything like that."), (ConversationSentence.OnConditionDelegate) (() => (double) dontGiveClueResponse > 0.60000002384185791 && (double) dontGiveClueResponse <= 0.800000011920929)).PlayerLine(new TextObject("{=3UX334MB}Hmm.. Very well. Sorry for interrupting.")).CloseDialog().NpcOption(new TextObject("{=9DDWjL9Y}Hmm... Maybe, but I can't remember who. I didn't think it suspicious."), (ConversationSentence.OnConditionDelegate) (() => (double) dontGiveClueResponse > 0.800000011920929)).PlayerLine(new TextObject("{=QbzsgawM}Okay, just keep your eyes open.")).CloseDialog().EndNpcOptions().EndPlayerOptions();
      }

      private void AddAgentToAlreadySpokenList()
      {
        this._giveClueChange += 0.15f;
        this._alreadySpokenAgents.Add((Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents[0]);
      }

      private bool CommonCondition()
      {
        return Settlement.CurrentSettlement == this._selectedSettlement && !this._alreadySpokenAgents.Contains((Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents[0]) && CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk;
      }

      private void CheckIfPlayerLearnedEverything()
      {
        int num1 = 0;
        int num2;
        int num3;
        if (!this._playerLearnedHasBeard)
          num3 = num1;
        else
          num2 = num3 = num1 + 1;
        int num4 = num3;
        int num5;
        if (!this._playerLearnedHasBigSword)
          num5 = num4;
        else
          num2 = num5 = num4 + 1;
        int num6 = num5;
        int num7;
        if (!this._playerLearnedHasHair)
          num7 = num6;
        else
          num2 = num7 = num6 + 1;
        int num8 = num7;
        int num9;
        if (!this._playerLearnedHasNoMarkings)
          num9 = num8;
        else
          num2 = num9 = num8 + 1;
        if (num9 < 3)
          return;
        this.AddLog(new TextObject("{=2LW2jWuG}You should now have enough evidence to identify the spy. You might be able to find the tournament participants hanging out in the alleys with local thugs. Find and speak with them."));
      }

      private void PlayerLearnedSpyHasSword()
      {
        this._giveClueChange = 0.0f;
        this._playerLearnedHasBigSword = true;
        this.AddLog(new TextObject("{=awYMellZ}The spy is known to carry a sword."));
        this._alreadySpokenAgents.Add(MissionConversationLogic.Current.ConversationAgent);
        this.CheckIfPlayerLearnedEverything();
      }

      private void PlayerLearnedSpyHasBeard()
      {
        this._giveClueChange = 0.0f;
        this._playerLearnedHasBeard = true;
        this.AddLog(new TextObject("{=5om6Wv1n}After questioning some folk in town, you learned that the spy has a beard."));
        this._alreadySpokenAgents.Add(MissionConversationLogic.Current.ConversationAgent);
        this.CheckIfPlayerLearnedEverything();
      }

      private void PlayerLearnedSpyHasHair()
      {
        this._giveClueChange = 0.0f;
        this._playerLearnedHasHair = true;
        this.AddLog(new TextObject("{=PLgOm8tV}The townsfolk told you that the spy is not bald."));
        this._alreadySpokenAgents.Add(MissionConversationLogic.Current.ConversationAgent);
        this.CheckIfPlayerLearnedEverything();
      }

      private void PlayerLearnedSpyHasNoMarkings()
      {
        this._giveClueChange = 0.0f;
        this._playerLearnedHasNoMarkings = true;
        this.AddLog(new TextObject("{=1ieLd5qq}The townsfolk told you that the spy has no distinctive scars or other facial markings."));
        this._alreadySpokenAgents.Add(MissionConversationLogic.Current.ConversationAgent);
        this.CheckIfPlayerLearnedEverything();
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
        CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
        CampaignEvents.AfterMissionStarted.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.BeforeGameMenuOpenedEvent.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.BeforeGameMenuOpenedEvent));
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

      private void BeforeGameMenuOpenedEvent(MenuCallbackArgs args)
      {
        if (Settlement.CurrentSettlement != this._selectedSettlement || !(args.MenuContext.GameMenu.StringId == "town"))
          return;
        if (this._startFightWithSpy && Campaign.Current.GameMenuManager.NextLocation == LocationComplex.Current.GetLocationWithId("arena") && GameStateManager.Current.ActiveState is MapState)
        {
          this._startFightWithSpy = false;
          CampaignMission.OpenArenaDuelMission(LocationComplex.Current.GetLocationWithId("arena").GetSceneName(this._selectedSettlement.Town.GetWallLevel()), LocationComplex.Current.GetLocationWithId("arena"), this._duelCharacter, false, false, new Action<CharacterObject>(this.OnFightEnd), 225f);
          Campaign.Current.GameMenuManager.NextLocation = (Location) null;
        }
        if (!this._checkForBattleResult)
          return;
        if (this._playerWonTheFight)
        {
          if (this._playerManagedToFindSpy)
            this.PlayerFoundTheSpyAndKilledHim();
          else
            this.PlayerCouldNotFoundTheSpyAndKilledAnotherSuspect();
        }
        else if (this._playerManagedToFindSpy)
          this.PlayerFoundTheSpyButLostTheFight();
        else
          this.PlayerCouldNotFoundTheSpyAndLostTheFight();
      }

      private void PlayerFoundTheSpyAndKilledHim()
      {
        this.AddLog(this._questSuccessQuestLog);
        GainRenownAction.Apply(Hero.MainHero, 1f);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.RewardGold);
        this.RelationshipChangeWithQuestGiver = 5;
        this._selectedSettlement.Town.Prosperity += 5f;
        this.CompleteQuestWithSuccess();
      }

      private void PlayerCouldNotFoundTheSpyAndKilledAnotherSuspect()
      {
        this.AddLog(this._questFailedKilledAnotherQuestLog);
        ChangeCrimeRatingAction.Apply(this.QuestGiver.MapFaction, 10f);
        this.RelationshipChangeWithQuestGiver = -5;
        this._selectedSettlement.Town.Security -= 10f;
        this._selectedSettlement.Town.Loyalty -= 10f;
        this.CompleteQuestWithFail();
      }

      private void PlayerFoundTheSpyButLostTheFight()
      {
        this.AddLog(this._playerFoundTheSpyButLostTheFight);
        this.RelationshipChangeWithQuestGiver = -5;
        this._selectedSettlement.Town.Security -= 10f;
        this._selectedSettlement.Town.Loyalty -= 10f;
        this.CompleteQuestWithFail();
      }

      private void PlayerCouldNotFoundTheSpyAndLostTheFight()
      {
        this.AddLog(this._playerCouldNotFoundTheSpyAndLostTheFight);
        this.RelationshipChangeWithQuestGiver = -5;
        this._selectedSettlement.Town.Security -= 10f;
        this._selectedSettlement.Town.Loyalty -= 10f;
        this.CompleteQuestWithFail();
      }

      private void OnFightEnd(CharacterObject winnerCharacterObject)
      {
        this._checkForBattleResult = true;
        this._playerWonTheFight = winnerCharacterObject == CharacterObject.PlayerCharacter;
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
        this.CompleteQuestWithCancel(this._warDeclaredQuestLog);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._warDeclaredQuestLog);
      }

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (settlement != this._selectedSettlement || oldOwner.Clan != this.QuestGiver.Clan)
          return;
        this.AddLog(this._questGiverLostOwnershipQuestLog);
        this.CompleteQuestWithCancel();
      }

      private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
      {
        if (party == null || !party.IsMainParty || settlement != this._selectedSettlement || hero != Hero.MainHero)
          return;
        this._addSpyNpcsToSettlement = true;
      }

      public override GameMenuOption.IssueQuestFlags IsLocationTrackedByQuest(Location location)
      {
        return PlayerEncounter.LocationEncounter.Settlement == this._selectedSettlement && location.StringId == "center" ? GameMenuOption.IssueQuestFlags.ActiveIssue : GameMenuOption.IssueQuestFlags.None;
      }

      private void OnSettlementLeft(MobileParty party, Settlement settlement)
      {
        if (!party.IsMainParty || settlement != this._selectedSettlement)
          return;
        this._addSpyNpcsToSettlement = false;
      }

      private void OnMissionStarted(IMission mission)
      {
        if (!this._addSpyNpcsToSettlement)
          return;
        Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
        if (locationWithId == null)
          return;
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateBoldSpyLocationCharacter), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateConfidentSpyLocationCharacter), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateDignifiedSpyLocationCharacter), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateHardySpyLocationCharacters), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
      }

      private LocationCharacter CreateBoldSpyLocationCharacter(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        CharacterObject troop = MBObjectManager.Instance.GetObject<CharacterObject>("bold_contender_" + this._currentDifficultySuffix);
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(troop.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, troop.IsFemale, "_villain"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "alley_1", true, relation, tuple.Item1, true, isVisualTracked: true, overrideBodyProperties: false);
      }

      private LocationCharacter CreateConfidentSpyLocationCharacter(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        CharacterObject troop = MBObjectManager.Instance.GetObject<CharacterObject>("confident_contender_" + this._currentDifficultySuffix);
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(troop.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, troop.IsFemale, "_villain"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "alley_3", true, relation, tuple.Item1, true, isVisualTracked: true, overrideBodyProperties: false);
      }

      private LocationCharacter CreateDignifiedSpyLocationCharacter(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        CharacterObject troop = MBObjectManager.Instance.GetObject<CharacterObject>("dignified_contender_" + this._currentDifficultySuffix);
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(troop.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, troop.IsFemale, "_villain"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "alley_3", true, relation, tuple.Item1, true, isVisualTracked: true, overrideBodyProperties: false);
      }

      private LocationCharacter CreateHardySpyLocationCharacters(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        CharacterObject troop = MBObjectManager.Instance.GetObject<CharacterObject>("hardy_contender_" + this._currentDifficultySuffix);
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(troop.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, troop.IsFemale, "_villain"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) troop)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "alley_2", true, relation, tuple.Item1, true, isVisualTracked: true, overrideBodyProperties: false);
      }

      protected override void OnTimedOut()
      {
        this.AddLog(this._timedOutQuestLog);
        this.QuestGiver.AddPower(-5f);
        this.RelationshipChangeWithQuestGiver = -5;
        this._selectedSettlement.Town.Security -= 10f;
        this._selectedSettlement.Town.Loyalty -= 10f;
      }

      internal static void AutoGeneratedStaticCollectObjectsTheSpyPartyIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._selectedSettlement);
        TheSpyPartyIssueQuestBehavior.SuspectNpc.AutoGeneratedStaticCollectObjectsSuspectNpc((object) this._selectedSpy, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValue_selectedSettlement(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._selectedSettlement;
      }

      internal static object AutoGeneratedGetMemberValue_selectedSpy(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._selectedSpy;
      }

      internal static object AutoGeneratedGetMemberValue_playerLearnedHasHair(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._playerLearnedHasHair;
      }

      internal static object AutoGeneratedGetMemberValue_playerLearnedHasNoMarkings(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._playerLearnedHasNoMarkings;
      }

      internal static object AutoGeneratedGetMemberValue_playerLearnedHasBigSword(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._playerLearnedHasBigSword;
      }

      internal static object AutoGeneratedGetMemberValue_playerLearnedHasBeard(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._playerLearnedHasBeard;
      }

      internal static object AutoGeneratedGetMemberValue_issueDifficultyMultiplier(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._issueDifficultyMultiplier;
      }

      internal static object AutoGeneratedGetMemberValue_currentDifficultySuffix(object o)
      {
        return (object) ((TheSpyPartyIssueQuestBehavior.TheSpyPartyIssueQuest) o)._currentDifficultySuffix;
      }
    }
  }
}
