// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.LordNeedsHorsesIssueBehavior
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
  public class LordNeedsHorsesIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency LordNeedsHorsesIssueFrequency = IssueBase.IssueFrequency.VeryCommon;

    private void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnIssueSelected), typeof (LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue), IssueBase.IssueFrequency.VeryCommon));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue), IssueBase.IssueFrequency.VeryCommon));
    }

    private IssueBase OnIssueSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue(issueOwner);
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      if ((issueGiver.IsKingdomLeader || issueGiver.Clan?.Leader == issueGiver) && !issueGiver.IsMinorFactionHero && issueGiver.Clan != Clan.PlayerClan)
      {
        MobileParty partyBelongedTo = issueGiver.PartyBelongedTo;
        if (partyBelongedTo != null && partyBelongedTo.Party.MemberRoster.TotalManCount > 50)
        {
          int numInfantry;
          float infantryCountRatio = LordNeedsHorsesIssueBehavior.ComputeMountsOverInfantryCountRatio(partyBelongedTo, out numInfantry);
          return numInfantry >= 10 && (double) infantryCountRatio < 0.60000002384185791;
        }
      }
      return false;
    }

    public static float ComputeMountsOverInfantryCountRatio(
      MobileParty issueParty,
      out int numInfantry)
    {
      if (issueParty == null)
      {
        Debug.FailedAssert("Cannot compute mounts over infantry ratio as related party is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Issues\\LordNeedsHorsesIssueBehavior.cs", nameof (ComputeMountsOverInfantryCountRatio), 917);
        numInfantry = 0;
        return float.MaxValue;
      }
      int numberOfMounts = issueParty.ItemRoster.NumberOfMounts;
      numInfantry = 0;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) issueParty.Party.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsInfantry)
          numInfantry += troopRosterElement.Number;
      }
      return numInfantry != 0 ? (float) numberOfMounts / (float) numInfantry : float.MaxValue;
    }

    public static bool IsMountCamel(ItemObject mountObject)
    {
      return mountObject?.ItemComponent is HorseComponent itemComponent && itemComponent.Monster.MonsterUsage == "camel";
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class LordNeedsHorsesIssue : IssueBase
    {
      private const int IssueDueTimeInDays = 20;
      internal const int IssueGiverMinimumPartySize = 50;
      internal const int IssueGiverMinimumInfantryCount = 10;
      internal const float IssuePreConditionMinPlayerRelation = -10f;
      internal const float IssuePreConditionMountsOverInfantryRatioThreshold = 0.6f;
      internal const float IssueStayingAliveMountsOverInfantryRatioThreshold = 0.8f;
      private const int AlternativeSolutionCompanionSkillThreshold = 120;
      private const int AlternativeSolutionRenownRewardOnSuccess = 1;
      private const int AlternativeSolutionRelationRewardOnSuccess = 2;
      private const int AlternativeSolutionRelationPenaltyOnFail = -5;
      private const int AlternativeSolutionTroopTierRequirement = 2;
      [SaveableField(4)]
      private int _numMountsToBeDelivered;
      [SaveableField(2)]
      private readonly ItemObject _mountObjectToBeDelivered;
      [SaveableField(3)]
      private readonly int _mountValuePerUnit;

      internal static void AutoGeneratedStaticCollectObjectsLordNeedsHorsesIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._mountObjectToBeDelivered);
      }

      internal static object AutoGeneratedGetMemberValue_numMountsToBeDelivered(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue) o)._numMountsToBeDelivered;
      }

      internal static object AutoGeneratedGetMemberValue_mountObjectToBeDelivered(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue) o)._mountObjectToBeDelivered;
      }

      internal static object AutoGeneratedGetMemberValue_mountValuePerUnit(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue) o)._mountValuePerUnit;
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 2 + MathF.Ceiling(4f * this.IssueDifficultyMultiplier);
      }

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.Duration;
      }

      protected override int RewardGold
      {
        get
        {
          return 500 + MathF.Ceiling(1.5f * (float) this.IssueNumMountsToBeDelivered * (float) this._mountValuePerUnit);
        }
      }

      private int IssueNumMountsToBeDelivered
      {
        get
        {
          if (this._numMountsToBeDelivered == 0)
            this._numMountsToBeDelivered = 1 + MathF.Ceiling(12f * this.IssueDifficultyMultiplier);
          return this._numMountsToBeDelivered;
        }
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 3 + MathF.Ceiling(6f * this.IssueDifficultyMultiplier);
      }

      private int AlternativeSolutionGoldRequirement
      {
        get => this.IssueNumMountsToBeDelivered * this._mountValuePerUnit;
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (500.0 + 700.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject briefByIssueGiver = new TextObject("{=TBpMffcv}Campaigning this season has taken even a higher toll on {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} than it has on my men. The animals will drop dead of exhaustion while my troops soldier on. Yet if we don't keep our stocks up, the enemy will run rings around us.[if:convo_undecided_closed][ib:closed]");
          briefByIssueGiver.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return briefByIssueGiver;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get
        {
          TextObject to = new TextObject("{=jjNSVzx3}What do you need, my {?ISSUE_GIVER.GENDER}lady{?}lord{\\?}?");
          to.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject);
          return to;
        }
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=ugHO6Sa6}I need more {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?}, specifically, we need {MOUNT_COUNT} and they need to be {PLURAL(MOUNT_NAME)}, because we know how to use them and how they fit our needs. Bring them to me and a bag of {REWARD}{GOLD_ICON} will be right in your pocket.[if:convo_undecided_closed]");
          explanationByIssueGiver.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          explanationByIssueGiver.SetTextVariable("MOUNT_COUNT", this.IssueNumMountsToBeDelivered);
          explanationByIssueGiver.SetTextVariable("REWARD", this.RewardGold);
          explanationByIssueGiver.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          explanationByIssueGiver.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=0YRl5Yie}I'll bring your {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} by myself.");
          solutionAcceptByPlayer.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return solutionAcceptByPlayer;
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=YHG17dqZ}One of your companions who is good at haggling and riding would be appropriate for this task. {?MOUNT_TYPE_IS_CAMEL}Camels{?}Horses{\\?} should cost no more than {REQUIRED_GOLD_AMOUNT}{GOLD_ICON} denars and this should be covered by yourself. You'll also need some cavalry to bring the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?}. A purse of {REWARD_GOLD_AMOUNT}{GOLD_ICON} denars will be waiting for you when you get the job done.[if:convo_undecided_closed]");
          explanationByIssueGiver.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          explanationByIssueGiver.SetTextVariable("REQUIRED_GOLD_AMOUNT", this.AlternativeSolutionGoldRequirement);
          explanationByIssueGiver.SetTextVariable("REWARD_GOLD_AMOUNT", this.RewardGold);
          explanationByIssueGiver.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=loJja04L}My men will bring your {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} as soon as possible.");
          solutionAcceptByPlayer.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=6EJbUGpi}You will be rewarded when your companion returns with the animals we discussed.[if:convo_approving]");
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          TextObject responseByIssueGiver = new TextObject("{=YF6PPWlT}Very good. I'm sure your men will bring my {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} as soon as possible.[if:convo_approving]");
          responseByIssueGiver.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return responseByIssueGiver;
        }
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=PCigQKQ8}{QUEST_GIVER.LINK} told you that {?QUEST_GIVER.GENDER}she{?}he{\\?} needs {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} for {?QUEST_GIVER.GENDER}her{?}his{\\?} party. You asked your companion {COMPANION.LINK} and {TROOP_COUNT} of your horsemen to deliver {MOUNT_COUNT} {PLURAL(MOUNT_NAME)} to {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}She{?}He{\\?} will pay you {REWARD}{GOLD_ICON} denars when the task is done. They will rejoin your party in {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          parent.SetTextVariable("REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("TROOP_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          parent.SetTextVariable("MOUNT_COUNT", this.IssueNumMountsToBeDelivered);
          parent.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          parent.SetTextVariable("RETURN_DAYS", MathF.Ceiling(this.AlternativeSolutionReturnTimeForTroops.RemainingDaysFromNow));
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=tJc5mZua}Your companion has successfully delivered the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} {QUEST_GIVER.LINK} requested. You received {QUEST_REWARD}{GOLD_ICON} gold in return for your service.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          parent.SetTextVariable("QUEST_REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override bool IsThereLordSolution => false;

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2, true);
      }

      public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
      {
        return character.Tier >= 2 && character.IsMounted;
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2, true) && QuestHelper.CheckGoldForAlternativeSolution(this.AlternativeSolutionGoldRequirement, ref explanation);
      }

      public override void AlternativeSolutionStartConsequence()
      {
        Hero.MainHero.ChangeHeroGold(-this.AlternativeSolutionGoldRequirement);
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.RelationshipChangeWithIssueOwner = 2;
        GainRenownAction.Apply(Hero.MainHero, 1f);
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -5;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssueQuest(questId, this.IssueOwner, this.IssueNumMountsToBeDelivered, this._mountObjectToBeDelivered, this.RewardGold, CampaignTime.DaysFromNow(20f));
      }

      public override IssueBase.IssueFrequency GetFrequency()
      {
        return IssueBase.IssueFrequency.VeryCommon;
      }

      protected override bool CanPlayerTakeQuestConditions(
        Hero issueGiver,
        out IssueBase.PreconditionFlags flag,
        out Hero relationHero,
        out SkillObject skill)
      {
        flag = IssueBase.PreconditionFlags.None;
        skill = (SkillObject) null;
        relationHero = (Hero) null;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          relationHero = issueGiver;
          flag |= IssueBase.PreconditionFlags.Relation;
        }
        if (Hero.MainHero.IsKingdomLeader)
          flag |= IssueBase.PreconditionFlags.MainHeroIsKingdomLeader;
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        return flag == IssueBase.PreconditionFlags.None;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      public override bool IssueStayAliveConditions()
      {
        return !this.IssueOwner.IsDead && this.IssueOwner.PartyBelongedTo != null && this.IssueOwner.Clan != Clan.PlayerClan && (this.IssueOwner.IsKingdomLeader || this.IssueOwner.Clan.Leader == this.IssueOwner) && (double) LordNeedsHorsesIssueBehavior.ComputeMountsOverInfantryCountRatio(this.IssueOwner.PartyBelongedTo, out int _) < 0.800000011920929;
      }

      public override TextObject Title
      {
        get
        {
          TextObject title = new TextObject("{=5zF6vI5s}Lord Needs {?MOUNT_TYPE_IS_CAMEL}Camels{?}Horses{\\?}");
          title.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return title;
        }
      }

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=GHbM1i6R}{QUEST_GIVER.LINK} needs {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} to speed up {?QUEST_GIVER.GENDER}her{?}his{\\?} party.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return parent;
        }
      }

      public LordNeedsHorsesIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(20f))
      {
        MBList<ItemObject> e = new MBList<ItemObject>();
        foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
        {
          if (itemObject.IsMountable && itemObject.Culture == issueOwner.Culture && !itemObject.NotMerchandise && (double) itemObject.Tierf > 2.0 && (double) itemObject.Tierf < 3.0)
            e.Add(itemObject);
        }
        this._mountObjectToBeDelivered = e.GetRandomElement<ItemObject>();
        this._numMountsToBeDelivered = 1 + MathF.Ceiling(12f * this.IssueDifficultyMultiplier);
        if (this._mountObjectToBeDelivered == null)
          this._mountObjectToBeDelivered = MBObjectManager.Instance.GetObject<ItemObject>("sumpter_horse");
        ItemObject objectToBeDelivered = this._mountObjectToBeDelivered;
        this._mountValuePerUnit = objectToBeDelivered != null ? objectToBeDelivered.Value : 0;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        return issueEffect == DefaultIssueEffects.ClanInfluence ? -0.1f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Trade) >= hero.GetSkillValue(DefaultSkills.Riding) ? DefaultSkills.Trade : DefaultSkills.Riding, 120);
      }
    }

    public class LordNeedsHorsesIssueQuest : QuestBase
    {
      private const int RenownChangeOnSuccess = 1;
      private const int RelationChangeOnSuccess = 2;
      private const int RelationChangeOnFailure = -3;
      private const int RelationChangeOnTimeOut = -5;
      [SaveableField(1)]
      private readonly int _numMountsToBeDelivered;
      [SaveableField(2)]
      private readonly ItemObject _mountObjectToBeDelivered;
      [SaveableField(3)]
      private JournalLog _questJournalEntry;
      private int _numMountsInInventory;
      private int _playerInventoryVersionNo;
      private CharacterObject _questGiversAgentCharacterObject;

      internal static void AutoGeneratedStaticCollectObjectsLordNeedsHorsesIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._mountObjectToBeDelivered);
        collectedObjects.Add((object) this._questJournalEntry);
      }

      internal static object AutoGeneratedGetMemberValue_numMountsToBeDelivered(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssueQuest) o)._numMountsToBeDelivered;
      }

      internal static object AutoGeneratedGetMemberValue_mountObjectToBeDelivered(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssueQuest) o)._mountObjectToBeDelivered;
      }

      internal static object AutoGeneratedGetMemberValue_questJournalEntry(object o)
      {
        return (object) ((LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssueQuest) o)._questJournalEntry;
      }

      public override TextObject Title
      {
        get
        {
          TextObject title = new TextObject("{=5zF6vI5s}Lord Needs {?MOUNT_TYPE_IS_CAMEL}Camels{?}Horses{\\?}");
          title.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          return title;
        }
      }

      private TextObject _journalTaskName
      {
        get
        {
          TextObject journalTaskName = new TextObject("{=plHZYtxF}{PLURAL(REQUESTED_MOUNT_NAME)} in Inventory: ");
          journalTaskName.SetTextVariable("REQUESTED_MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          return journalTaskName;
        }
      }

      private TextObject _onQuestStartedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=GQ96SX4M}{QUEST_GIVER.LINK} told you that {?QUEST_GIVER.GENDER}she{?}he{\\?} needs {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} for {?QUEST_GIVER.GENDER}her{?}his{\\?} party. {?QUEST_GIVER.GENDER}She{?}He{\\?} asked you to bring {MOUNT_COUNT} {PLURAL(MOUNT_NAME)} to {?QUEST_GIVER.GENDER}her{?}him{\\?} or one of {?QUEST_GIVER.GENDER}her{?}his{\\?} garrison commanders. {?QUEST_GIVER.GENDER}She{?}He{\\?} will pay you {REWARD_GOLD}{GOLD_ICON} denars when the task is done.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          parent.SetTextVariable("MOUNT_COUNT", this._numMountsToBeDelivered);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          parent.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          parent.SetTextVariable("REWARD_GOLD", this.RewardGold);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestSucceededLogText
      {
        get
        {
          TextObject parent = new TextObject("{=aGvLxsub}You have successfully delivered {MOUNT_COUNT} {PLURAL(MOUNT_NAME)} to {QUEST_GIVER.LINK} as requested. You received {GOLD_REWARD}{GOLD_ICON} denars in return for your service.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("MOUNT_COUNT", this._numMountsToBeDelivered);
          parent.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          parent.SetTextVariable("GOLD_REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject _onQuestFailedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=yLuzvTtd}You had promised to deliver {MOUNT_COUNT} {PLURAL(MOUNT_NAME)} to {QUEST_GIVER.LINK}. But you've failed to complete this task. {QUEST_GIVER.LINK} was displeased.");
          parent.SetTextVariable("MOUNT_COUNT", this._numMountsToBeDelivered);
          parent.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestTimedOutLogText
      {
        get
        {
          TextObject parent = new TextObject("{=BFEYIMdi}You had promised to deliver {MOUNT_COUNT} {PLURAL(MOUNT_NAME)} to {QUEST_GIVER.LINK}. But you've failed to complete this task in time. {QUEST_GIVER.LINK} was displeased.");
          parent.SetTextVariable("MOUNT_COUNT", this._numMountsToBeDelivered);
          parent.SetTextVariable("MOUNT_NAME", this._mountObjectToBeDelivered.Name);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestCancelled2LogText
      {
        get
        {
          TextObject parent = new TextObject("{=pYgl86Cr}Your clan had entered a war with the {QUEST_GIVER.LINK}'s faction. Your agreement was canceled. You can no longer deliver the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} to {?QUEST_GIVER.GENDER}her{?}him{\\?}.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
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

      private TextObject _onQuestCancelled3LogText
      {
        get
        {
          TextObject parent = new TextObject("{=qEh4gdjU}{QUEST_GIVER.LINK} was imprisoned and your agreement with {?QUEST_GIVER.GENDER}her{?}him{\\?} was canceled. You can no longer deliver the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} to {?QUEST_GIVER.GENDER}her{?}him{\\?}.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestMountRequirementSatisfiedQuickText
      {
        get
        {
          TextObject parent = new TextObject("{=ZCPrYXaO}You have enough {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?}. Return back to {QUEST_GIVER.LINK}.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _onQuestMountRequirementNotSatisfiedQuickText
      {
        get
        {
          TextObject parent = new TextObject("{=aFNfxhwz}You no longer have enough {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} for {QUEST_GIVER.LINK}.");
          parent.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public override bool IsRemainingTimeHidden => false;

      public LordNeedsHorsesIssueQuest(
        string questId,
        Hero questGiver,
        int numMountsToBeDelivered,
        ItemObject mountObjectToBeDelivered,
        int rewardGold,
        CampaignTime duration)
        : base(questId, questGiver, duration, rewardGold)
      {
        this._numMountsToBeDelivered = numMountsToBeDelivered;
        this._mountObjectToBeDelivered = mountObjectToBeDelivered;
        this._playerInventoryVersionNo = MobileParty.MainParty.ItemRoster.VersionNo;
        this._questGiversAgentCharacterObject = (CharacterObject) null;
        this.AddTrackedObject((ITrackableCampaignObject) this.QuestGiver);
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.SetDialogs();
        this._numMountsInInventory = this.GetNumQuestMountsInInventory();
        this._playerInventoryVersionNo = MobileParty.MainParty.ItemRoster.VersionNo;
        if (this._questJournalEntry == null)
        {
          this._questJournalEntry = this.JournalEntries.FirstOrDefault<JournalLog>((Func<JournalLog, bool>) (x => x.Range == this._numMountsToBeDelivered && x.Type == LogType.Discreate));
          if (this._questJournalEntry == null)
          {
            if (this.JournalEntries.Count > 0)
            {
              for (int index = 0; index < this.JournalEntries.Count; ++index)
              {
                if (this.JournalEntries[index].Type == LogType.Discreate)
                  this.RemoveLog(this.JournalEntries[index]);
              }
              this._questJournalEntry = this.AddDiscreteLog(this._onQuestStartedLogText, this._journalTaskName, MBMath.ClampInt(this._numMountsInInventory, 0, this._numMountsToBeDelivered), this._numMountsToBeDelivered);
            }
            else
              this._questJournalEntry = this.AddDiscreteLog(this._onQuestStartedLogText, this._journalTaskName, MBMath.ClampInt(this._numMountsInInventory, 0, this._numMountsToBeDelivered), this._numMountsToBeDelivered);
          }
        }
        this.UpdateQuestJournalEntry();
      }

      protected override void SetDialogs()
      {
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetGarrisonCommanderDialogFlow(), (object) this);
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine("{=qR3gQrLi}Splendid. We'll need to keep moving around, though, so it might be tricky to find us. My fellow nobles will usually know where to find me though, if you ask them.[if:convo_approving][ib:hip2]").Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.OnQuestAccepted)).CloseDialog();
        TextObject textObject1 = new TextObject(LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? "{=nysBXpEO}camels" : "{=6YbGQDme}horses");
        TextObject npcText1 = new TextObject("{=bmW77NvO}What about my {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?}?");
        npcText1.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
        TextObject textObject2 = new TextObject("{=TLcnbALt}Here are your {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} my {?QUEST_GIVER.GENDER}lady{?}lord{\\?}.");
        textObject2.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject2);
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject2);
        TextObject text = new TextObject("{=6bt9jYai}I am still looking for the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} you have requested.");
        text.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
        TextObject textObject3 = new TextObject("{=pV7DLTAu}I am sorry, my {?QUEST_GIVER.GENDER}lady{?}lord{\\?}. I cannot deliver the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} you requested.");
        textObject3.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject3);
        TextObject npcText2 = new TextObject("{=inkr6Dzy}Too bad. Perhaps someone else will be able to get me the {?MOUNT_TYPE_IS_CAMEL}camels{?}horses{\\?} that I need.");
        npcText2.SetTextVariable("MOUNT_TYPE_IS_CAMEL", LordNeedsHorsesIssueBehavior.IsMountCamel(this._mountObjectToBeDelivered) ? 1 : 0);
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(npcText1).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(MapEventHelper.OnConversationEnd))).BeginPlayerOptions().PlayerOption(textObject2).Condition((ConversationSentence.OnConditionDelegate) (() => this.GetNumQuestMountsInInventory() >= this._numMountsToBeDelivered)).NpcLine("{=9HJbLneH}Thank you for your help, {PLAYER.NAME}. Here is the purse I promised you. Farewell.[if:convo_happy][ib:hip]").Consequence(new ConversationSentence.OnConsequenceDelegate(((QuestBase) this).CompleteQuestWithSuccess)).CloseDialog().PlayerOption(text).NpcLine("{=cH0iAEfq}Please take care of this as quickly as you can. I need those animals.[if:convo_undecided_closed]").CloseDialog().PlayerOption(textObject3).NpcLine(npcText2).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.OnQuestDeclined())).CloseDialog().EndPlayerOptions();
      }

      private DialogFlow GetGarrisonCommanderDialogFlow()
      {
        TextObject textObject = new TextObject("{=JxhEOqyT}We were waiting for you, {?PLAYER.GENDER}madam{?}sir{\\?}. Have you brought the horses that our {?ISSUE_OWNER.GENDER}lady{?}lord{\\?} requested?");
        StringHelpers.SetCharacterProperties("ISSUE_OWNER", this.QuestGiver.CharacterObject, textObject);
        return DialogFlow.CreateDialogFlow("start", 300).NpcLine(textObject).Condition((ConversationSentence.OnConditionDelegate) (() => CharacterObject.OneToOneConversationCharacter == this._questGiversAgentCharacterObject)).BeginPlayerOptions().PlayerOption(new TextObject("{=ZEy3gE7w}Here are your horses.")).Condition((ConversationSentence.OnConditionDelegate) (() => this.GetNumQuestMountsInInventory() >= this._numMountsToBeDelivered)).NpcLine(new TextObject("{=g8qb3Ame}Thank you.")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(((QuestBase) this).CompleteQuestWithSuccess))).CloseDialog().PlayerOption(new TextObject("{=G5tyQj6N}Not yet.")).NpcLine(new TextObject("{=sjTpEzju}Very well. We'll keep waiting.")).CloseDialog().EndPlayerOptions();
      }

      private void OnQuestAccepted()
      {
        this.StartQuest();
        this._numMountsInInventory = this.GetNumQuestMountsInInventory();
        this._questJournalEntry = this.AddDiscreteLog(this._onQuestStartedLogText, this._journalTaskName, MBMath.ClampInt(this._numMountsInInventory, 0, this._numMountsToBeDelivered), this._numMountsToBeDelivered);
      }

      private void OnQuestDeclined()
      {
        this.AddLog(this._onQuestFailedLogText);
        this.CompleteQuestWithFail();
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.PlayerInventoryExchangeEvent.AddNonSerializedListener((object) this, new Action<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool>(this.OnPlayerInventoryExchange));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
        CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      }

      private void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
      {
        if (hero != Hero.MainHero || mobileParty != MobileParty.MainParty || !settlement.IsFortification || settlement.OwnerClan != this.QuestGiver.Clan)
          return;
        MBList<TroopRosterElement> troopRoster = Settlement.CurrentSettlement.Town.GarrisonParty?.MemberRoster?.GetTroopRoster();
        this._questGiversAgentCharacterObject = troopRoster == null || troopRoster.Count == 0 ? this.QuestGiver.Culture.Guard : troopRoster.MaxBy<TroopRosterElement, int>((Func<TroopRosterElement, int>) (troop => troop.Character.Tier)).Character;
        CampaignMapConversation.OpenConversation(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty), new ConversationCharacterData(this._questGiversAgentCharacterObject));
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

      private void UpdateQuestJournalEntry()
      {
        int currentProgress = MBMath.ClampInt(this._numMountsInInventory, 0, this._numMountsToBeDelivered);
        if (currentProgress == this._questJournalEntry.CurrentProgress)
          return;
        this.UpdateQuestTaskStage(this._questJournalEntry, currentProgress);
      }

      private void CheckAndHandleQuestSuccessConditions()
      {
        int mountsInInventory = this.GetNumQuestMountsInInventory();
        if (mountsInInventory == this._numMountsInInventory)
          return;
        if (this._numMountsInInventory < this._numMountsToBeDelivered && mountsInInventory >= this._numMountsToBeDelivered)
          MBInformationManager.AddQuickInformation(this._onQuestMountRequirementSatisfiedQuickText);
        else if (this._numMountsInInventory >= this._numMountsToBeDelivered && mountsInInventory < this._numMountsToBeDelivered)
          MBInformationManager.AddQuickInformation(this._onQuestMountRequirementNotSatisfiedQuickText);
        this._numMountsInInventory = mountsInInventory;
        this.UpdateQuestJournalEntry();
      }

      protected override void HourlyTick()
      {
        int versionNo = MobileParty.MainParty.ItemRoster.VersionNo;
        if (this._playerInventoryVersionNo == versionNo)
          return;
        this.CheckAndHandleQuestSuccessConditions();
        this._playerInventoryVersionNo = versionNo;
      }

      private void OnPlayerInventoryExchange(
        List<(ItemRosterElement, int)> purchasedItems,
        List<(ItemRosterElement, int)> soldItems,
        bool isTrading)
      {
        bool flag1 = false;
        foreach ((ItemRosterElement, int) purchasedItem in purchasedItems)
        {
          if (purchasedItem.Item1.EquipmentElement.Item == this._mountObjectToBeDelivered)
          {
            flag1 = true;
            break;
          }
        }
        bool flag2 = false;
        foreach ((ItemRosterElement, int) soldItem in soldItems)
        {
          if (soldItem.Item1.EquipmentElement.Item == this._mountObjectToBeDelivered)
          {
            flag2 = true;
            break;
          }
        }
        if (flag1 | flag2)
          this.CheckAndHandleQuestSuccessConditions();
        this._playerInventoryVersionNo = MobileParty.MainParty.ItemRoster.VersionNo;
      }

      private void OnHeroPrisonerTaken(PartyBase capturer, Hero prisoner)
      {
        if (prisoner != this.QuestGiver)
          return;
        this.CompleteQuestWithCancel(this._onQuestCancelled3LogText);
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
        this.CompleteQuestWithCancel(this._onQuestCancelled2LogText);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        QuestHelper.CheckWarDeclarationAndFailOrCancelTheQuest((QuestBase) this, faction1, faction2, detail, this._playerDeclaredWarQuestLogText, this._onQuestCancelled2LogText);
      }

      protected override void OnCompleteWithSuccess()
      {
        this.AddLog(this._onQuestSucceededLogText);
        int mountsToBeDelivered = this._numMountsToBeDelivered;
        foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
        {
          if (itemRosterElement.EquipmentElement.Item == this._mountObjectToBeDelivered)
          {
            int amount = itemRosterElement.Amount;
            if (amount < mountsToBeDelivered)
            {
              mountsToBeDelivered -= amount;
              this.GiveMounts(Hero.MainHero, this.QuestGiver, itemRosterElement, amount);
            }
            else
            {
              this.GiveMounts(Hero.MainHero, this.QuestGiver, itemRosterElement, mountsToBeDelivered);
              break;
            }
          }
        }
        GainRenownAction.Apply(Hero.MainHero, 1f);
        GiveGoldAction.ApplyForQuestBetweenCharacters(this.QuestGiver, Hero.MainHero, this.RewardGold);
        this.RelationshipChangeWithQuestGiver = 2;
      }

      private void GiveMounts(Hero giver, Hero receiver, ItemRosterElement item, int count)
      {
        if (giver.PartyBelongedTo == null)
          return;
        giver.PartyBelongedTo.Party.ItemRoster.AddToCounts(item.EquipmentElement, -count);
        if (receiver.PartyBelongedTo == null)
          return;
        receiver.PartyBelongedTo.Party.ItemRoster.AddToCounts(item.EquipmentElement, count);
      }

      protected override void OnFinalize()
      {
        this.RemoveTrackedObject((ITrackableCampaignObject) this.QuestGiver);
      }

      public override void OnFailed() => this.RelationshipChangeWithQuestGiver = -3;

      protected override void OnTimedOut()
      {
        this.AddLog(this._onQuestTimedOutLogText);
        this.RelationshipChangeWithQuestGiver = -5;
      }

      private int GetNumQuestMountsInInventory()
      {
        int mountsInInventory = 0;
        foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
        {
          if (itemRosterElement.EquipmentElement.Item == this._mountObjectToBeDelivered)
            mountsInInventory += itemRosterElement.Amount;
        }
        return mountsInInventory;
      }
    }

    public class LordNeedsHorsesIssueBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public LordNeedsHorsesIssueBehaviorTypeDefiner()
        : base(510000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssue), 1);
        this.AddClassDefinition(typeof (LordNeedsHorsesIssueBehavior.LordNeedsHorsesIssueQuest), 2);
      }

      protected override void DefineEnumTypes()
      {
      }
    }
  }
}
