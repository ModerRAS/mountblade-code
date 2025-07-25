// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.SnareTheWealthyIssueBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace SandBox.Issues
{
  public class SnareTheWealthyIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency SnareTheWealthyIssueFrequency = IssueBase.IssueFrequency.Rare;

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
    }

    private void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssue), IssueBase.IssueFrequency.Rare));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssue), IssueBase.IssueFrequency.Rare));
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return issueGiver.IsGangLeader && issueGiver.CurrentSettlement != null && issueGiver.CurrentSettlement.IsTown && (double) issueGiver.CurrentSettlement.Town.Security <= 50.0 && this.GetTargetMerchant(issueGiver) != null;
    }

    private Hero GetTargetMerchant(Hero issueOwner)
    {
      Hero targetMerchant = (Hero) null;
      foreach (Hero notable in (List<Hero>) issueOwner.CurrentSettlement.Notables)
      {
        if (notable != issueOwner && notable.IsMerchant && (double) notable.Power >= 150.0 && notable.GetTraitLevel(DefaultTraits.Mercy) + notable.GetTraitLevel(DefaultTraits.Honor) < 0 && notable.CanHaveQuestsOrIssues() && !Campaign.Current.IssueManager.HasIssueCoolDown(typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssue), notable) && !Campaign.Current.IssueManager.HasIssueCoolDown(typeof (EscortMerchantCaravanIssueBehavior), notable) && !Campaign.Current.IssueManager.HasIssueCoolDown(typeof (CaravanAmbushIssueBehavior), notable))
        {
          targetMerchant = notable;
          break;
        }
      }
      return targetMerchant;
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      Hero targetMerchant = this.GetTargetMerchant(issueOwner);
      return (IssueBase) new SnareTheWealthyIssueBehavior.SnareTheWealthyIssue(issueOwner, targetMerchant.CharacterObject);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class SnareTheWealthyIssueTypeDefiner : SaveableTypeDefiner
    {
      public SnareTheWealthyIssueTypeDefiner()
        : base(340000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssue), 1);
        this.AddClassDefinition(typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest), 2);
      }

      protected override void DefineEnumTypes()
      {
        this.AddEnumDefinition(typeof (SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice), 3);
      }
    }

    public class SnareTheWealthyIssue : IssueBase
    {
      private const int IssueDuration = 30;
      private const int IssueQuestDuration = 10;
      private const int MinimumRequiredMenCount = 20;
      private const int MinimumRequiredRelationWithIssueGiver = -10;
      private const int AlternativeSolutionMinimumTroopTier = 2;
      private const int CompanionRoguerySkillValueThreshold = 120;
      [SaveableField(1)]
      private readonly CharacterObject _targetMerchantCharacter;

      private int AlternativeSolutionReward
      {
        get => MathF.Floor((float) (1000.0 + 3000.0 * (double) this.IssueDifficultyMultiplier));
      }

      public SnareTheWealthyIssue(Hero issueOwner, CharacterObject targetMerchant)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
        this._targetMerchantCharacter = targetMerchant;
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=bLigh8Sd}Well, let's just say there's an idea I've been mulling over.[ib:confident2][if:convo_bemused] You may be able to help. Have you met {TARGET_MERCHANT.NAME}? {?TARGET_MERCHANT.GENDER}She{?}He{\\?} is a very rich merchant. Very rich indeed. But not very honest… It's not right that someone without morals should have so much wealth, is it? I have a plan to redistribute it a bit.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          return parent;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=keKEFagm}So what's the plan?");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=SliFGAX4}{TARGET_MERCHANT.NAME} is always looking for extra swords to protect[if:convo_evil_smile] {?TARGET_MERCHANT.GENDER}her{?}his{\\?} caravans. The wicked are the ones who fear wickedness the most, you might say. What if those guards turned out to be robbers? {TARGET_MERCHANT.NAME} wouldn't trust just anyone but I think {?TARGET_MERCHANT.GENDER}she{?}he{\\?} might hire a renowned warrior like yourself. And if that warrior were to lead the caravan into an ambush… Oh I suppose it's all a bit dishonorable, but I wouldn't worry too much about your reputation. {TARGET_MERCHANT.NAME} is known to defraud {?TARGET_MERCHANT.GENDER}her{?}his{\\?} partners. If something happened to one of {?TARGET_MERCHANT.GENDER}her{?}his{\\?} caravans - well, most people won't know who to believe, and won't really care either.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          return parent;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=4upBpsnb}All right. I am in.");
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=ivNVRP69}I prefer if you do this yourself, but one of your trusted companions with a strong[if:convo_evil_smile] sword-arm and enough brains to set an ambush can do the job with {TROOP_COUNT} fighters. We'll split the loot, and I'll throw in a little bonus on top of that for you..");
          explanationByIssueGiver.SetTextVariable("TROOP_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get => new TextObject("{=biqYiCnr}My companion can handle it. Do not worry.");
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          return new TextObject("{=UURamhdC}Thank you. This should make both of us a pretty penny.[if:convo_delighted]");
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=pmuEeFV8}We are still arranging with your men how we'll spring this ambush. Do not worry. Everything will go smoothly.");
        }
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=28lLrXOe}{ISSUE_GIVER.LINK} shared their plan for robbing {TARGET_MERCHANT.LINK} with you. You agreed to send your companion along with {TROOP_COUNT} men to lead the ambush for them. They will return after {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          parent.SetTextVariable("TROOP_COUNT", this.AlternativeSolutionSentTroops.TotalManCount - 1);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return parent;
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      public override TextObject Title => new TextObject("{=IeihUvCD}Snare The Wealthy");

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=8LghFfQO}Help {ISSUE_GIVER.NAME} to rob {TARGET_MERCHANT.NAME} by acting as their guard.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      protected override bool IssueQuestCanBeDuplicated => false;

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.SettlementLoyalty)
          return -0.1f;
        return issueEffect == DefaultIssueEffects.SettlementSecurity ? -0.5f : 0.0f;
      }

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => (IssueBase.AlternativeSolutionScaleFlag) (4 | 8);
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 10 + MathF.Ceiling(16f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 2 + MathF.Ceiling(4f * this.IssueDifficultyMultiplier);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (800.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Roguery) >= hero.GetSkillValue(DefaultSkills.Tactics) ? DefaultSkills.Roguery : DefaultSkills.Tactics, 120);
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
        TraitLevelingHelper.OnIssueSolvedThroughAlternativeSolution(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
        });
        TraitLevelingHelper.OnIssueSolvedThroughAlternativeSolution(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 50)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.IssueOwner, 5);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -10);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.AlternativeSolutionReward);
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        TraitLevelingHelper.OnIssueSolvedThroughAlternativeSolution(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        TraitLevelingHelper.OnIssueSolvedThroughAlternativeSolution(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.IssueOwner, -10);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -10);
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest(questId, this.IssueOwner, this._targetMerchantCharacter, this.IssueDifficultyMultiplier, CampaignTime.DaysFromNow(10f));
      }

      protected override void OnIssueFinalized()
      {
        if (!this.IsSolvingWithQuest)
          return;
        Campaign.Current.IssueManager.AddIssueCoolDownData(this.GetType(), (IssueCoolDownData) new HeroRelatedIssueCoolDownData(this._targetMerchantCharacter.HeroObject, CampaignTime.DaysFromNow((float) Campaign.Current.Models.IssueModel.IssueOwnerCoolDownInDays)));
        Campaign.Current.IssueManager.AddIssueCoolDownData(typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest), (IssueCoolDownData) new HeroRelatedIssueCoolDownData(this._targetMerchantCharacter.HeroObject, CampaignTime.DaysFromNow((float) Campaign.Current.Models.IssueModel.IssueOwnerCoolDownInDays)));
        Campaign.Current.IssueManager.AddIssueCoolDownData(typeof (CaravanAmbushIssueBehavior.CaravanAmbushIssueQuest), (IssueCoolDownData) new HeroRelatedIssueCoolDownData(this._targetMerchantCharacter.HeroObject, CampaignTime.DaysFromNow((float) Campaign.Current.Models.IssueModel.IssueOwnerCoolDownInDays)));
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
        if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 20)
          flag |= IssueBase.PreconditionFlags.NotEnoughTroops;
        if ((double) issueGiver.GetRelationWithPlayer() < -10.0)
        {
          flag |= IssueBase.PreconditionFlags.Relation;
          relationHero = issueGiver;
        }
        if (issueGiver.CurrentSettlement.OwnerClan == Clan.PlayerClan)
          flag |= IssueBase.PreconditionFlags.PlayerIsOwnerOfSettlement;
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions()
      {
        return this.IssueOwner.IsAlive && (double) this.IssueOwner.CurrentSettlement.Town.Security <= 80.0 && this._targetMerchantCharacter.HeroObject.IsAlive;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._targetMerchantCharacter.HeroObject)
          return;
        result = false;
      }

      internal static void AutoGeneratedStaticCollectObjectsSnareTheWealthyIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._targetMerchantCharacter);
      }

      internal static object AutoGeneratedGetMemberValue_targetMerchantCharacter(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssue) o)._targetMerchantCharacter;
      }
    }

    public class SnareTheWealthyIssueQuest : QuestBase
    {
      private const float CaravanEncounterStartDistance = 20f;
      private SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.QuestEndDelegate _startConversationDelegate;
      [SaveableField(1)]
      private CharacterObject _targetMerchantCharacter;
      [SaveableField(2)]
      private Settlement _targetSettlement;
      [SaveableField(3)]
      private MobileParty _caravanParty;
      [SaveableField(4)]
      private MobileParty _gangParty;
      [SaveableField(5)]
      private readonly float _questDifficulty;
      [SaveableField(6)]
      private SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice _playerChoice;
      [SaveableField(7)]
      private bool _canEncounterConversationStart;
      [SaveableField(8)]
      private bool _isCaravanFollowing = true;

      private int CaravanPartyTroopCount => 20 + MathF.Ceiling(40f * this._questDifficulty);

      private int GangPartyTroopCount => 10 + MathF.Ceiling(25f * this._questDifficulty);

      private int Reward1
      {
        get => MathF.Floor((float) (1000.0 + 3000.0 * (double) this._questDifficulty));
      }

      private int Reward2 => MathF.Floor((float) this.Reward1 * 0.4f);

      public SnareTheWealthyIssueQuest(
        string questId,
        Hero questGiver,
        CharacterObject targetMerchantCharacter,
        float questDifficulty,
        CampaignTime duration)
        : base(questId, questGiver, duration, 0)
      {
        this._targetMerchantCharacter = targetMerchantCharacter;
        this._targetSettlement = this.GetTargetSettlement();
        this._questDifficulty = questDifficulty;
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      public override TextObject Title => new TextObject("{=IeihUvCD}Snare The Wealthy");

      public override bool IsRemainingTimeHidden => false;

      private TextObject _questStartedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=Ba9nsfHc}{QUEST_GIVER.LINK} shared their plan for robbing {TARGET_MERCHANT.LINK} with you. You agreed to talk with {TARGET_MERCHANT.LINK} to convince {?TARGET_MERCHANT.GENDER}her{?}him{\\?} to guard {?TARGET_MERCHANT.GENDER}her{?}his{\\?} caravan and lead the caravan to ambush around {TARGET_SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _success1LogText
      {
        get
        {
          TextObject parent = new TextObject("{=bblwaDi1}You have successfully robbed {TARGET_MERCHANT.LINK}'s caravan with {QUEST_GIVER.LINK}.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _sidedWithGangLogText
      {
        get
        {
          TextObject parent = new TextObject("{=lZjj3MZg}When {QUEST_GIVER.LINK} arrived, you kept your side of the bargain and attacked the caravan");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _timedOutWithoutTalkingToMerchantText
      {
        get
        {
          TextObject parent = new TextObject("{=OMKgidoP}You have failed to convince the merchant to guard {?TARGET_MERCHANT.GENDER}her{?}his{\\?} caravan in time. {QUEST_GIVER.LINK} must be furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          return parent;
        }
      }

      private TextObject _fail1LogText
      {
        get
        {
          return new TextObject("{=DRpcqEMI}The caravan leader said your decisions were wasting their time and decided to go on his way. You have failed to uphold your part in the plan.");
        }
      }

      private TextObject _fail2LogText
      {
        get
        {
          return new TextObject("{=EFjas6hI}At the last moment, you decided to side with the caravan guard and defend them.");
        }
      }

      private TextObject _fail2OutcomeLogText
      {
        get
        {
          TextObject parent = new TextObject("{=JgrG0uoO}Having the {TARGET_MERCHANT.LINK} by your side, you were successful in protecting the caravan.");
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          return parent;
        }
      }

      private TextObject _fail3LogText
      {
        get
        {
          return new TextObject("{=0NxiTi8b}You didn't feel like splitting the loot, so you betrayed both the merchant and the gang leader.");
        }
      }

      private TextObject _fail3OutcomeLogText
      {
        get
        {
          return new TextObject("{=KbMew14D}Although the gang leader and the caravaneer joined their forces, you have successfully defeated them and kept the loot for yourself.");
        }
      }

      private TextObject _fail4LogText
      {
        get
        {
          TextObject parent = new TextObject("{=22nahm29}You have lost the battle against the merchant's caravan and failed to help {QUEST_GIVER.LINK}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _fail5LogText
      {
        get
        {
          TextObject parent = new TextObject("{=QEgzLRnC}You have lost the battle against {QUEST_GIVER.LINK} and failed to help the merchant as you promised.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _fail6LogText
      {
        get
        {
          TextObject parent = new TextObject("{=pGu2mcar}You have lost the battle against the combined forces of the {QUEST_GIVER.LINK} and the caravan.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _playerCapturedQuestSettlementLogText
      {
        get
        {
          return new TextObject("{=gPFfHluf}Your clan is now owner of the settlement. As the lord of the settlement you cannot be part of the criminal activities anymore. Your agreement with the questgiver has canceled.");
        }
      }

      private TextObject _questSettlementWasCapturedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=uVigJ3LP}{QUEST_GIVER.LINK} has lost the control of {SETTLEMENT} and the deal is now invalid.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _warDeclaredBetweenPlayerAndQuestGiverLogText
      {
        get
        {
          TextObject parent = new TextObject("{=ojpW4WRD}Your clan is now at war with the {QUEST_GIVER.LINK}'s lord. Your agreement with {QUEST_GIVER.LINK} was canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _targetSettlementRaidedLogText
      {
        get
        {
          TextObject parent = new TextObject("{=QkbkesNJ}{QUEST_GIVER.LINK} called off the ambush after {TARGET_SETTLEMENT} was raided.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject _talkedToMerchantLogText
      {
        get
        {
          TextObject parent = new TextObject("{=N1ZiaLRL}You talked to {TARGET_MERCHANT.LINK} as {QUEST_GIVER.LINK} asked. The caravan is waiting for you outside the gates to be escorted to {TARGET_SETTLEMENT}.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.SetDialogs();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetEncounterDialogue(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithMerchant(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithCaravan(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithGangWithoutCaravan(), (object) this);
      }

      private Settlement GetTargetSettlement()
      {
        MapDistanceModel model = Campaign.Current.Models.MapDistanceModel;
        return Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => t != this.QuestGiver.CurrentSettlement && t.IsTown)).OrderBy<Settlement, float>((Func<Settlement, float>) (t => model.GetDistance(t, this.QuestGiver.CurrentSettlement))).ElementAt<Settlement>(0).BoundVillages.GetRandomElement<Village>().Settlement;
      }

      protected override void SetDialogs()
      {
        TextObject discussIntroDialogue = new TextObject("{=lOFR5sq6}Have you talked with {TARGET_MERCHANT.NAME}? It would be a damned waste if we waited too long and word of our plans leaked out.");
        TextObject textObject = new TextObject("{=cc4EEDMg}Splendid. Go have a word with {TARGET_MERCHANT.LINK}. [if:convo_focused_happy]If you can convince {?TARGET_MERCHANT.GENDER}her{?}him{\\?} to guide the caravan, we will wait in ambush along their route.");
        StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, textObject);
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(textObject).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.OnQuestAccepted)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(discussIntroDialogue).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter, discussIntroDialogue);
          return Hero.OneToOneConversationHero == this.QuestGiver;
        })).BeginPlayerOptions().PlayerOption("{=YuabHAbV}I'll take care of it shortly..").NpcLine("{=CDXUehf0}Good, good.").CloseDialog().PlayerOption("{=2haJj9mp}I have but I need to deal with some other problems before leading the caravan.").NpcLine("{=bSDIHQzO}Please do so. Hate to have word leak out.[if:convo_nervous]").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetDialogueWithMerchant()
      {
        TextObject npcText = new TextObject("{=OJtUNAbN}Very well. You'll find the caravan [if:convo_calm_friendly]getting ready outside the gates. You will get your payment after the job. Good luck, friend.");
        return DialogFlow.CreateDialogFlow("hero_main_options", 125).BeginPlayerOptions().PlayerOption(new TextObject("{=K1ICRis9}I have heard you are looking for extra swords to protect your caravan. I am here to offer my services.")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this._targetMerchantCharacter.HeroObject && this._caravanParty == null)).NpcLine("{=ltbu3S63}Yes, you have heard correctly. I am looking for a capable [if:convo_astonished]leader with a good number of followers. You only need to escort the caravan until they reach {TARGET_SETTLEMENT}. A simple job, but the cargo is very important. I'm willing to pay {MERCHANT_REWARD} denars. And of course, if you betrayed me...").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          MBTextManager.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName, false);
          MBTextManager.SetTextVariable("MERCHANT_REWARD", this.Reward2);
          return true;
        })).Consequence(new ConversationSentence.OnConsequenceDelegate(this.SpawnQuestParties)).BeginPlayerOptions().PlayerOption("{=AGnd7nDb}Worry not. The outlaws in these parts know my name well, and fear it.").NpcLine(npcText).CloseDialog().PlayerOption("{=RCsbpizl}If you have the denars we'll do the job,.").NpcLine(npcText).CloseDialog().PlayerOption("{=TfDomerj}I think my men and I are more than enough to protect the caravan, good {?TARGET_MERCHANT.GENDER}madam{?}sir{\\?}.").Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter);
          return true;
        })).NpcLine(npcText).CloseDialog().EndPlayerOptions().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetDialogueWithCaravan()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=Xs7Qweuw}Lead the way, {PLAYER.NAME}.").Condition((ConversationSentence.OnConditionDelegate) (() => MobileParty.ConversationParty == this._caravanParty && this._caravanParty != null && !this._canEncounterConversationStart)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => PlayerEncounter.LeaveEncounter = true)).CloseDialog();
      }

      private DialogFlow GetDialogueWithGangWithoutCaravan()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=F44s8kPB}Where is the caravan? My men can't wait here for too long.[if:convo_undecided_open]").Condition((ConversationSentence.OnConditionDelegate) (() => MobileParty.ConversationParty == this._gangParty && this._gangParty != null && !this._canEncounterConversationStart)).BeginPlayerOptions().PlayerOption("{=Yqv1jk7D}Don't worry, they are coming towards our trap.").NpcLine("{=fHc6fwrb}Good, let's finish this.").CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private DialogFlow GetEncounterDialogue()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine("{=vVH7wT07}Who are these men? Be on your guard {PLAYER.NAME}, I smell trouble![if:convo_confused_annoyed]").Condition((ConversationSentence.OnConditionDelegate) (() => MobileParty.ConversationParty == this._caravanParty && this._caravanParty != null && this._canEncounterConversationStart)).Consequence((ConversationSentence.OnConsequenceDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("TARGET_MERCHANT", this._targetMerchantCharacter);
          AgentBuildData agentBuildData1 = new AgentBuildData((BasicCharacterObject) ConversationHelper.GetConversationCharacterPartyLeader(this._gangParty.Party));
          agentBuildData1.TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin(agentBuildData1.AgentCharacter));
          Vec3 vec3 = Agent.Main.LookDirection * 10f;
          vec3.RotateAboutZ(1.39626336f);
          agentBuildData1.InitialPosition(Agent.Main.Position + vec3);
          AgentBuildData agentBuildData2 = agentBuildData1;
          Vec2 vec2 = Agent.Main.LookDirection.AsVec2;
          vec2 = -vec2.Normalized();
          ref Vec2 local = ref vec2;
          agentBuildData2.InitialDirection(in local);
          Campaign.Current.ConversationManager.AddConversationAgents((IEnumerable<IAgent>) new List<IAgent>()
          {
            (IAgent) Mission.Current.SpawnAgent(agentBuildData1)
          }, true);
        })).NpcLine("{=LJ2AoQyS}Well, well. What do we have here? Must be one of our lucky days, [if:convo_huge_smile]huh? Release all the valuables you carry and nobody gets hurt.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster)).NpcLine("{=SdgDF4OZ}Hah! You're making a big mistake. See that group of men over there, [if:convo_excited]led by the warrior {PLAYER.NAME}? They're with us, and they'll cut you open.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader)).NpcLine("{=LaHWB3r0}Oh… I'm afraid there's been a misunderstanding. {PLAYER.NAME} is with us, you see.[if:convo_evil_smile] Did {TARGET_MERCHANT.LINK} stuff you with lies and then send you out to your doom? Oh, shameful, shameful. {?TARGET_MERCHANT.GENDER}She{?}He{\\?} does that fairly often, unfortunately.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster)).NpcLine("{=EGC4BA4h}{PLAYER.NAME}! Is this true? Look, you're a smart {?PLAYER.GENDER}woman{?}man{\\?}. [if:convo_shocked]You know that {TARGET_MERCHANT.LINK} can pay more than these scum. Take the money and keep your reputation.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).NpcLine("{=zUKqWeUa}Come on, {PLAYER.NAME}. All this back-and-forth  is making me anxious. Let's finish this.[if:convo_nervous]", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).BeginPlayerOptions().PlayerOption("{=UEY5aQ2l}I'm here to rob {TARGET_MERCHANT.NAME}, not be {?TARGET_MERCHANT.GENDER}her{?}his{\\?} lackey. Now, cough up the goods or fight.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader)).NpcLine("{=tHUHfe6C}You're with them? This is the basest treachery I have ever witnessed![if:convo_furious]", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.AddLog(this._sidedWithGangLogText))).NpcLine("{=IKeZLbIK}No offense, captain, but if that's the case you need to get out more. [if:convo_mocking_teasing]Anyway, shall we go to it?", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.StartBattle(SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithGang))).CloseDialog().PlayerOption("{=W7TD4yTc}You know, {TARGET_MERCHANT.NAME}'s man makes a good point. I'm guarding this caravan.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader)).NpcLine("{=VXp0R7da}Heaven protect you! I knew you'd never be tempted by such a perfidious offer.[if:convo_huge_smile]", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.AddLog(this._fail2LogText))).NpcLine("{=XJOqws2b}Hmf. A funny sense of honor you have… Anyway, I'm not going home empty handed, so let's do this.[if:convo_furious]", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.StartBattle(SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithCaravan))).CloseDialog().PlayerOption("{=ILrYPvTV}You know, I think I'd prefer to take all the loot for myself.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader)).NpcLine("{=cpTMttNb}Is that so? Hey, caravan captain, whatever your name is… [if:convo_contemptuous]As long as we're all switching sides here, how about I join with you to defeat this miscreant who just betrayed both of us? Whichever of us comes out of this with the most men standing keeps your goods.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsGangPartyLeader), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.AddLog(this._fail3LogText))).NpcLine("{=15UCTrNA}I have no choice, do I? Well, better an honest robber than a traitor![if:convo_aggressive] Let's take {?PLAYER.GENDER}her{?}him{\\?} down.", new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCaravanMaster), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainHero)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this.StartBattle(SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.BetrayedBoth))).CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private void OnQuestAccepted()
      {
        this.StartQuest();
        this.AddLog(this._questStartedLogText);
        this.AddTrackedObject((ITrackableCampaignObject) this._targetMerchantCharacter.HeroObject);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetEncounterDialogue(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithMerchant(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithCaravan(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetDialogueWithGangWithoutCaravan(), (object) this);
      }

      public void GetMountAndHarnessVisualIdsForQuestCaravan(
        CultureObject culture,
        out string mountStringId,
        out string harnessStringId)
      {
        if (culture.StringId == "khuzait" || culture.StringId == "aserai")
        {
          mountStringId = "camel";
          harnessStringId = "camel_saddle_b";
        }
        else
        {
          mountStringId = "mule";
          harnessStringId = "mule_load_c";
        }
      }

      private void SpawnQuestParties()
      {
        TextObject name = new TextObject("{=Bh4sZo9o}Caravan of {TARGET_MERCHANT}");
        name.SetTextVariable("TARGET_MERCHANT", this._targetMerchantCharacter.HeroObject.Name);
        string mountStringId;
        string harnessStringId;
        this.GetMountAndHarnessVisualIdsForQuestCaravan(this._targetMerchantCharacter.Culture, out mountStringId, out harnessStringId);
        this._caravanParty = CustomPartyComponent.CreateQuestParty(this._targetMerchantCharacter.HeroObject.CurrentSettlement.GatePosition, 0.1f, this._targetMerchantCharacter.HeroObject.CurrentSettlement, name, this._targetMerchantCharacter.HeroObject.Clan, this._targetMerchantCharacter.HeroObject.Culture.CaravanPartyTemplate, this._targetMerchantCharacter.HeroObject, this.CaravanPartyTroopCount, mountStringId, harnessStringId, MobileParty.MainParty.Speed);
        this._caravanParty.MemberRoster.AddToCounts(this._targetMerchantCharacter.Culture.CaravanMaster, 1);
        this._caravanParty.ItemRoster.AddToCounts(Game.Current.ObjectManager.GetObject<ItemObject>("grain"), 40);
        this._caravanParty.IgnoreByOtherPartiesTill(this.QuestDueTime);
        SetPartyAiAction.GetActionForEscortingParty(this._caravanParty, MobileParty.MainParty);
        this._caravanParty.Ai.SetDoNotMakeNewDecisions(true);
        this._caravanParty.SetPartyUsedByQuest(true);
        this.AddTrackedObject((ITrackableCampaignObject) this._caravanParty);
        MobilePartyHelper.TryMatchPartySpeedWithItemWeight(this._caravanParty, MobileParty.MainParty.Speed * 1.5f);
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        Clan clan = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        this._gangParty = CustomPartyComponent.CreateQuestParty(this._targetSettlement.GatePosition, 0.1f, this._targetSettlement, new TextObject("{=gJNdkwHV}Gang Party"), (Clan) null, Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("kingdom_hero_party_caravan_ambushers") ?? this.QuestGiver.Culture.BanditBossPartyTemplate, this.QuestGiver, this.GangPartyTroopCount);
        this._gangParty.MemberRoster.AddToCounts(clan.Culture.BanditBoss, 1, true);
        this._gangParty.ItemRoster.AddToCounts(Game.Current.ObjectManager.GetObject<ItemObject>("grain"), 40);
        this._gangParty.SetPartyUsedByQuest(true);
        this._gangParty.IgnoreByOtherPartiesTill(this.QuestDueTime);
        this._gangParty.Ai.SetDoNotMakeNewDecisions(true);
        this._gangParty.Ai.DisableAi();
        MobilePartyHelper.TryMatchPartySpeedWithItemWeight(this._gangParty, 0.2f);
        this._gangParty.Ai.SetMoveGoToSettlement(this._targetSettlement);
        EnterSettlementAction.ApplyForParty(this._gangParty, this._targetSettlement);
        this.AddTrackedObject((ITrackableCampaignObject) this._targetSettlement);
        this.AddLog(this._talkedToMerchantLogText);
      }

      private void StartBattle(
        SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice playerChoice)
      {
        this._playerChoice = playerChoice;
        if (this._caravanParty.MapEvent != null)
          this._caravanParty.MapEvent.FinalizeEvent();
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        Clan clan = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        this._caravanParty.ActualClan = playerChoice != SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithCaravan ? clan : this._caravanParty.Owner.SupporterOf;
        this._gangParty.ActualClan = playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithGang ? this.QuestGiver.SupporterOf : clan;
        PartyBase attackerParty = playerChoice != SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithGang ? this._gangParty.Party : this._caravanParty.Party;
        PlayerEncounter.Start();
        PlayerEncounter.Current.SetupFields(attackerParty, PartyBase.MainParty);
        PlayerEncounter.StartBattle();
        if (playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.BetrayedBoth)
          this._caravanParty.MapEventSide = this._gangParty.MapEventSide;
        else if (playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithCaravan)
          this._caravanParty.MapEventSide = PartyBase.MainParty.MapEventSide;
        else
          this._gangParty.MapEventSide = PartyBase.MainParty.MapEventSide;
      }

      private void StartEncounterDialogue()
      {
        LeaveSettlementAction.ApplyForParty(this._gangParty);
        PlayerEncounter.Finish();
        this._canEncounterConversationStart = true;
        CampaignMission.OpenConversationMission(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty, true), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(this._caravanParty.Party), this._caravanParty.Party, true, noBodyguards: true));
      }

      private void StartDialogueWithoutCaravan()
      {
        PlayerEncounter.Finish();
        CampaignMission.OpenConversationMission(new ConversationCharacterData(CharacterObject.PlayerCharacter, PartyBase.MainParty, true), new ConversationCharacterData(ConversationHelper.GetConversationCharacterPartyLeader(this._gangParty.Party), this._gangParty.Party, true));
      }

      protected override void HourlyTick()
      {
        if (this._caravanParty == null)
          return;
        if (this._caravanParty.Ai.DefaultBehavior != AiBehavior.EscortParty || this._caravanParty.ShortTermBehavior != AiBehavior.EscortParty)
          SetPartyAiAction.GetActionForEscortingParty(this._caravanParty, MobileParty.MainParty);
        (this._caravanParty.PartyComponent as CustomPartyComponent).CustomPartyBaseSpeed = MobileParty.MainParty.Speed;
        if (MobileParty.MainParty.TargetParty == this._caravanParty)
        {
          this._caravanParty.Ai.SetMoveModeHold();
          this._isCaravanFollowing = false;
        }
        else
        {
          if (this._isCaravanFollowing)
            return;
          SetPartyAiAction.GetActionForEscortingParty(this._caravanParty, MobileParty.MainParty);
          this._isCaravanFollowing = true;
        }
      }

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        if (settlement != this.QuestGiver.CurrentSettlement)
          return;
        if (newOwner.Clan == Clan.PlayerClan)
          this.OnCancel4();
        else
          this.OnCancel2();
      }

      public void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail reason)
      {
        if ((faction1 != this.QuestGiver.MapFaction || faction2 != Hero.MainHero.MapFaction) && (faction2 != this.QuestGiver.MapFaction || faction1 != Hero.MainHero.MapFaction))
          return;
        this.OnCancel1();
      }

      public void OnVillageStateChanged(
        Village village,
        Village.VillageStates oldState,
        Village.VillageStates newState,
        MobileParty raiderParty)
      {
        if (village != this._targetSettlement.Village || newState == Village.VillageStates.Normal)
          return;
        this.OnCancel3();
      }

      public void OnMapEventEnded(MapEvent mapEvent)
      {
        if (!mapEvent.IsPlayerMapEvent || this._caravanParty == null)
          return;
        if (mapEvent.InvolvedParties.Contains<PartyBase>(this._caravanParty.Party))
        {
          if (!mapEvent.InvolvedParties.Contains<PartyBase>(this._gangParty.Party))
            this.OnFail1();
          else if (mapEvent.WinningSide == mapEvent.PlayerSide)
          {
            if (this._playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithGang)
              this.OnSuccess1();
            else if (this._playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithCaravan)
              this.OnFail2();
            else
              this.OnFail3();
          }
          else if (this._playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithGang)
            this.OnFail4();
          else if (this._playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.SidedWithCaravan)
            this.OnFail5();
          else
            this.OnFail6();
        }
        else
          this.OnFail1();
      }

      private void OnPartyJoinedArmy(MobileParty mobileParty)
      {
        if (mobileParty != MobileParty.MainParty || this._caravanParty == null)
          return;
        this.OnFail1();
      }

      private void OnGameMenuOpened(MenuCallbackArgs args)
      {
        if (this._startConversationDelegate == null || MobileParty.MainParty.CurrentSettlement != this._targetSettlement || this._caravanParty == null)
          return;
        this._startConversationDelegate();
        this._startConversationDelegate = (SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.QuestEndDelegate) null;
      }

      public void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
      {
        if (party != MobileParty.MainParty || settlement != this._targetSettlement || this._caravanParty == null)
          return;
        if ((double) this._caravanParty.Position2D.DistanceSquared(this._targetSettlement.Position2D) <= 20.0)
          this._startConversationDelegate = new SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.QuestEndDelegate(this.StartEncounterDialogue);
        else
          this._startConversationDelegate = new SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.QuestEndDelegate(this.StartDialogueWithoutCaravan);
      }

      public void OnSettlementLeft(MobileParty party, Settlement settlement)
      {
        if (party != MobileParty.MainParty || this._caravanParty == null)
          return;
        SetPartyAiAction.GetActionForEscortingParty(this._caravanParty, MobileParty.MainParty);
      }

      private void CanHeroBecomePrisoner(Hero hero, ref bool result)
      {
        if (hero != Hero.MainHero || this._playerChoice == SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest.SnareTheWealthyQuestChoice.None)
          return;
        result = false;
      }

      protected override void OnFinalize()
      {
        if (this._caravanParty != null && this._caravanParty.IsActive)
          DestroyPartyAction.Apply((PartyBase) null, this._caravanParty);
        if (this._gangParty == null || !this._gangParty.IsActive)
          return;
        DestroyPartyAction.Apply((PartyBase) null, this._gangParty);
      }

      private void OnSuccess1()
      {
        this.AddLog(this._success1LogText);
        TraitLevelingHelper.OnIssueSolvedThroughQuest(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        TraitLevelingHelper.OnIssueSolvedThroughQuest(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 50)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, 5);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -10);
        this.QuestGiver.AddPower(30f);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.Reward1);
        this.CompleteQuestWithSuccess();
      }

      private void OnTimedOutWithoutTalkingToMerchant()
      {
        this.AddLog(this._timedOutWithoutTalkingToMerchantText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -5);
      }

      private void OnFail1()
      {
        this.ApplyFail1Consequences();
        this.CompleteQuestWithFail();
      }

      private void ApplyFail1Consequences()
      {
        this.AddLog(this._fail1LogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -5);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -5);
      }

      private void OnFail2()
      {
        this.AddLog(this._fail2OutcomeLogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -10);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, 5);
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.Reward2);
        this.CompleteQuestWithBetrayal();
      }

      private void OnFail3()
      {
        this.AddLog(this._fail3OutcomeLogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -200)
        });
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -15);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -20);
        this.CompleteQuestWithBetrayal();
      }

      private void OnFail4()
      {
        this.AddLog(this._fail4LogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -10);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -10);
        this.CompleteQuestWithFail();
      }

      private void OnFail5()
      {
        this.AddLog(this._fail5LogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -100)
        });
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -10);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -10);
        this.CompleteQuestWithBetrayal();
      }

      private void OnFail6()
      {
        this.AddLog(this._fail6LogText);
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -200)
        });
        TraitLevelingHelper.OnIssueFailed(Hero.MainHero, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Calculating, 100)
        });
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -15);
        ChangeRelationAction.ApplyPlayerRelation(this._targetMerchantCharacter.HeroObject, -20);
        this.CompleteQuestWithBetrayal();
      }

      protected override void OnTimedOut()
      {
        if (this._caravanParty == null)
          this.OnTimedOutWithoutTalkingToMerchant();
        else
          this.ApplyFail1Consequences();
      }

      private void OnCancel1()
      {
        this.AddLog(this._warDeclaredBetweenPlayerAndQuestGiverLogText);
        this.CompleteQuestWithCancel();
      }

      private void OnCancel2()
      {
        this.AddLog(this._questSettlementWasCapturedLogText);
        this.CompleteQuestWithCancel();
      }

      private void OnCancel3()
      {
        this.AddLog(this._targetSettlementRaidedLogText);
        this.CompleteQuestWithCancel();
      }

      private void OnCancel4()
      {
        this.AddLog(this._playerCapturedQuestSettlementLogText);
        this.QuestGiver.AddPower(-10f);
        ChangeRelationAction.ApplyPlayerRelation(this.QuestGiver, -5);
        this.CompleteQuestWithCancel();
      }

      private bool IsGangPartyLeader(IAgent agent)
      {
        return agent.Character == ConversationHelper.GetConversationCharacterPartyLeader(this._gangParty.Party);
      }

      private bool IsCaravanMaster(IAgent agent)
      {
        return agent.Character == ConversationHelper.GetConversationCharacterPartyLeader(this._caravanParty.Party);
      }

      private bool IsMainHero(IAgent agent) => agent.Character == CharacterObject.PlayerCharacter;

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._targetMerchantCharacter.HeroObject)
          return;
        result = false;
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.VillageStateChanged.AddNonSerializedListener((object) this, new Action<Village, Village.VillageStates, Village.VillageStates, MobileParty>(this.OnVillageStateChanged));
        CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
        CampaignEvents.OnPartyJoinedArmyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyJoinedArmy));
        CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
        CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
        CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
        CampaignEvents.CanHeroBecomePrisonerEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CanHeroBecomePrisoner));
        CampaignEvents.CanHaveQuestsOrIssuesEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(((QuestBase) this).OnHeroCanHaveQuestOrIssueInfoIsRequested));
      }

      internal static void AutoGeneratedStaticCollectObjectsSnareTheWealthyIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._targetMerchantCharacter);
        collectedObjects.Add((object) this._targetSettlement);
        collectedObjects.Add((object) this._caravanParty);
        collectedObjects.Add((object) this._gangParty);
      }

      internal static object AutoGeneratedGetMemberValue_targetMerchantCharacter(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._targetMerchantCharacter;
      }

      internal static object AutoGeneratedGetMemberValue_targetSettlement(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._targetSettlement;
      }

      internal static object AutoGeneratedGetMemberValue_caravanParty(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._caravanParty;
      }

      internal static object AutoGeneratedGetMemberValue_gangParty(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._gangParty;
      }

      internal static object AutoGeneratedGetMemberValue_questDifficulty(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._questDifficulty;
      }

      internal static object AutoGeneratedGetMemberValue_playerChoice(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._playerChoice;
      }

      internal static object AutoGeneratedGetMemberValue_canEncounterConversationStart(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._canEncounterConversationStart;
      }

      internal static object AutoGeneratedGetMemberValue_isCaravanFollowing(object o)
      {
        return (object) ((SnareTheWealthyIssueBehavior.SnareTheWealthyIssueQuest) o)._isCaravanFollowing;
      }

      internal enum SnareTheWealthyQuestChoice
      {
        None,
        SidedWithCaravan,
        SidedWithGang,
        BetrayedBoth,
      }

      private delegate void QuestEndDelegate();
    }
  }
}
