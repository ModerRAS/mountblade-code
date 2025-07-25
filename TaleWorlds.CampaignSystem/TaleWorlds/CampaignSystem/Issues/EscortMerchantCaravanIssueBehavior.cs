// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.EscortMerchantCaravanIssueBehavior
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
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Map;
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
  public class EscortMerchantCaravanIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency EscortMerchantCaravanIssueFrequency = IssueBase.IssueFrequency.VeryCommon;
    internal readonly List<ItemObject> DefaultCaravanItems = new List<ItemObject>();

    private static EscortMerchantCaravanIssueBehavior Instance
    {
      get => Campaign.Current.GetCampaignBehavior<EscortMerchantCaravanIssueBehavior>();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeOnStart();
      if (!MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("e1.9.1")))
        return;
      for (int index = MobileParty.All.Count - 1; index >= 0; --index)
      {
        MobileParty mobileParty = MobileParty.All[index];
        if (mobileParty.StringId.Contains("defend_caravan_quest"))
        {
          if (mobileParty.MapEvent != null)
            mobileParty.MapEvent.FinalizeEvent();
          DestroyPartyAction.Apply((PartyBase) null, MobileParty.All[index]);
        }
      }
    }

    private void InitializeOnStart()
    {
      if ((MBObjectManager.Instance.GetObject<ItemObject>("hardwood") == null ? 1 : (MBObjectManager.Instance.GetObject<ItemObject>("sumpter_horse") == null ? 1 : 0)) != 0)
      {
        CampaignEventDispatcher.Instance.RemoveListeners((object) this);
        foreach (KeyValuePair<Hero, IssueBase> keyValuePair in Campaign.Current.IssueManager.Issues.Where<KeyValuePair<Hero, IssueBase>>((Func<KeyValuePair<Hero, IssueBase>, bool>) (x => x.Value.GetType() == typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue))).ToList<KeyValuePair<Hero, IssueBase>>())
          keyValuePair.Value.CompleteIssueWithStayAliveConditionsFailed();
      }
      else
      {
        this.DefaultCaravanItems.Add(DefaultItems.Grain);
        string[] strArray = new string[5]
        {
          "cotton",
          "velvet",
          "oil",
          "linen",
          "date_fruit"
        };
        foreach (string objectName in strArray)
        {
          ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(objectName);
          if (itemObject != null)
            this.DefaultCaravanItems.Add(itemObject);
        }
      }
    }

    private void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeOnStart();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private bool ConditionsHold(Hero issueGiver)
    {
      return issueGiver.IsMerchant && issueGiver.CurrentSettlement != null && issueGiver.CurrentSettlement.IsTown && (double) issueGiver.CurrentSettlement.Town.Security <= 50.0 && issueGiver.OwnedCaravans.Count < 2;
    }

    public void OnCheckForIssue(Hero hero)
    {
      if (this.ConditionsHold(hero))
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnSelected), typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue), IssueBase.IssueFrequency.VeryCommon));
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue), IssueBase.IssueFrequency.VeryCommon));
    }

    private IssueBase OnSelected(in PotentialIssueData pid, Hero issueOwner)
    {
      return (IssueBase) new EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue(issueOwner);
    }

    public class EscortMerchantCaravanIssue : IssueBase
    {
      private const int MinimumRequiredMenCount = 20;
      private const int AlternativeSolutionTroopTierRequirement = 2;
      private const int NeededCompanionSkillAmount = 120;
      private const int QuestTimeLimit = 30;
      private const int IssueDuration = 30;
      [SaveableField(10)]
      private int _companionRewardRandom;

      internal static void AutoGeneratedStaticCollectObjectsEscortMerchantCaravanIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValue_companionRewardRandom(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue) o)._companionRewardRandom;
      }

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get
        {
          return IssueBase.AlternativeSolutionScaleFlag.Casualties | IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
        }
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 10 + MathF.Ceiling(16f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 6 + MathF.Ceiling(10f * this.IssueDifficultyMultiplier);
      }

      protected int DailyQuestRewardGold
      {
        get => 250 + MathF.Ceiling(1000f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get => Math.Min(this.DailyQuestRewardGold * this._companionRewardRandom, 8000);
      }

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject briefByIssueGiver = new TextObject("{=CSqaF7tz}There's been a real surge of banditry around here recently. I don't know if it's because the lords are away fighting or something else, but it's a miracle if a traveler can make three leagues beyond the gates without being set upon by highwaymen.[if:convo_annoyed][ib:hip]");
          if (this.IssueOwner.CharacterObject.GetPersona() == DefaultTraits.PersonaCurt || this.IssueOwner.CharacterObject.GetPersona() == DefaultTraits.PersonaSoftspoken)
            briefByIssueGiver = new TextObject("{=xwc9mJdC}Things have gotten a lot worse recently with the brigands on the roads around town. My caravans get looted as soon as they're out of sight of the gates.[if:convo_stern][ib:hip]");
          return briefByIssueGiver;
        }
      }

      public override TextObject IssueAcceptByPlayer => new TextObject("{=TGYJUUn0}Go on.");

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          return new TextObject("{=8ym6UvxE}I'm of a mind to send out a new caravan but I fear it will be plundered before it can turn a profit. So I am looking for some good fighters who can escort it until it finds its footing and visits a couple of settlements.");
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=ytdZutjw}I will be willing to pay generously {BASE_REWARD}{GOLD_ICON} for each day the caravan is on the road. It will be more than I usually pay for caravan guards, but you look like the type who send a message to these brigands, that my caravans aren't to be messed with.[if:convo_undecided_closed]");
          if (this.IssueOwner.CharacterObject.GetPersona() == DefaultTraits.PersonaCurt || this.IssueOwner.CharacterObject.GetPersona() == DefaultTraits.PersonaSoftspoken)
            explanationByIssueGiver = new TextObject("{=YbbfaHqd}I will be willing to pay generously {BASE_REWARD}{GOLD_ICON} for each day the caravan is on the road. It will be more than I usually pay for guards, but figure maybe you can scare these bandits off. I'm sick of choosing between sending my men to the their deaths or letting them go because I've lost my goods and can't pay their wages.[if:convo_undecided_closed]");
          explanationByIssueGiver.SetTextVariable("BASE_REWARD", this.DailyQuestRewardGold);
          return explanationByIssueGiver;
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=a7fEPW5Y}Don't worry, I'll escort the caravan myself.");
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=N4p2GCsG}I'll assign one of my companions and {NEEDED_MEN_COUNT} of my men to protect your caravan for {RETURN_DAYS} days.");
          solutionAcceptByPlayer.SetTextVariable("NEEDED_MEN_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          solutionAcceptByPlayer.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          return new TextObject("{=hU5j7b3e}I am sure your men are as capable as you are and will look after my caravan. Thanks again for your help, my friend.[if:convo_focused_happy]");
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          return new TextObject("{=iny76Ifh}Thank you, {?PLAYER.GENDER}madam{?}sir{\\?}, I think they will be enough.");
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => false;

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=6y59FBgL}{ISSUEGIVER.LINK}, a merchant from {SETTLEMENT}, has told you about {?ISSUEGIVER.GENDER}her{?}his{\\?} recent problems with bandits. {?ISSUEGIVER.GENDER}She{?}he{\\?} asked you to guard {?ISSUEGIVER.GENDER}her{?}his{\\?} caravan for a while and deal with any attackers. In return {?ISSUEGIVER.GENDER}she{?}he{\\?} offered you {GOLD}{GOLD_ICON} for each day your troops spend on escort duty.{newline}You agreed to lend {?ISSUEGIVER.GENDER}her{?}him{\\?} {NEEDED_MEN_COUNT} men. They should be enough to turn away most of the bandits. Your troops should return after {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("ISSUEGIVER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.IssueOwner.CurrentSettlement.Name);
          parent.SetTextVariable("NEEDED_MEN_COUNT", this.AlternativeSolutionSentTroops.TotalManCount);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          parent.SetTextVariable("GOLD", this.DailyQuestRewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      public override TextObject Title => new TextObject("{=VpLzd69e}Escort Merchant Caravan");

      public override TextObject Description
      {
        get
        {
          return new TextObject("{=8RNueEmy}A merchant caravan needs an escort for protection against bandits and brigands.");
        }
      }

      public override TextObject IssueAlternativeSolutionFailLog
      {
        get
        {
          return new TextObject("{=KLauwaRJ}The caravan was destroyed despite your companion's efforts. Quest failed.");
        }
      }

      public override TextObject IssueAlternativeSolutionSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=3NX8H4TJ}Your companion has protected the caravan that belongs to {ISSUE_GIVER.LINK} from {SETTLEMENT} as promised. {?ISSUE_GIVER.GENDER}She{?}He{\\?} was happy with your work.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.IssueSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      public EscortMerchantCaravanIssue(Hero issueOwner)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
        this._companionRewardRandom = MBRandom.RandomInt(3, 10);
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.SettlementProsperity)
          return -0.4f;
        return issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.2f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Scouting) >= hero.GetSkillValue(DefaultSkills.Riding) ? DefaultSkills.Scouting : DefaultSkills.Riding, 120);
      }

      public override bool DoTroopsSatisfyAlternativeSolution(
        TroopRoster troopRoster,
        out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(troopRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      public override bool AlternativeSolutionCondition(out TextObject explanation)
      {
        explanation = TextObject.Empty;
        return QuestHelper.CheckRosterForAlternativeSolution(MobileParty.MainParty.MemberRoster, this.GetTotalAlternativeSolutionNeededMenCount(), ref explanation, 2);
      }

      protected override int CompanionSkillRewardXP
      {
        get => (int) (800.0 + 1000.0 * (double) this.IssueDifficultyMultiplier);
      }

      public override bool IsTroopTypeNeededByAlternativeSolution(CharacterObject character)
      {
        return character.Tier >= 2;
      }

      public override IssueBase.IssueFrequency GetFrequency()
      {
        return IssueBase.IssueFrequency.VeryCommon;
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
        if (issueGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          flags |= IssueBase.PreconditionFlags.AtWar;
        if (MobileParty.MainParty.MemberRoster.TotalHealthyCount < 20)
          flags |= IssueBase.PreconditionFlags.NotEnoughTroops;
        return flags == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions()
      {
        return this.IssueOwner.OwnedCaravans.Count < 2 && (double) this.IssueOwner.CurrentSettlement.Town.Security <= 80.0;
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(30f), this.IssueDifficultyMultiplier, this.DailyQuestRewardGold);
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.IssueOwner.AddPower(-5f);
        this.RelationshipChangeWithIssueOwner = -5;
        TraitLevelingHelper.OnIssueFailed(this.IssueOwner, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -20)
        });
        this.IssueSettlement.Town.Prosperity -= 20f;
      }

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.IssueOwner.AddPower(10f);
        this.RelationshipChangeWithIssueOwner = 5;
        this.IssueSettlement.Town.Prosperity += 10f;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }
    }

    public class EscortMerchantCaravanIssueQuest : QuestBase
    {
      private const int BanditPartyAttackRadiusMin = 8;
      private const int BattleFakeSimulationDuration = 3;
      private const int QuestBanditPartySpawnDistance = 80;
      private const string CustomPartyComponentTalkId = "escort_caravan_talk";
      [SaveableField(2)]
      private readonly int _requiredSettlementNumber;
      [SaveableField(3)]
      private List<Settlement> _visitedSettlements;
      [SaveableField(4)]
      private MobileParty _questCaravanMobileParty;
      [SaveableField(5)]
      private MobileParty _questBanditMobileParty;
      [SaveableField(7)]
      private readonly float _difficultyMultiplier;
      [SaveableField(12)]
      private bool _isPlayerNotifiedForDanger;
      [SaveableField(26)]
      private MobileParty _otherBanditParty;
      [SaveableField(30)]
      private int _questBanditPartyFollowDuration;
      [SaveableField(31)]
      private int _otherBanditPartyFollowDuration;
      [SaveableField(11)]
      private int _daysSpentForEscorting = 1;
      private int _caravanWaitedInSettlementForHours;
      [SaveableField(23)]
      private bool _questBanditPartyAlreadyAttacked;
      private CustomPartyComponent _customPartyComponent;
      [SaveableField(1)]
      private JournalLog _playerStartsQuestLog;

      internal static void AutoGeneratedStaticCollectObjectsEscortMerchantCaravanIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._visitedSettlements);
        collectedObjects.Add((object) this._questCaravanMobileParty);
        collectedObjects.Add((object) this._questBanditMobileParty);
        collectedObjects.Add((object) this._otherBanditParty);
        collectedObjects.Add((object) this._playerStartsQuestLog);
      }

      internal static object AutoGeneratedGetMemberValue_requiredSettlementNumber(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._requiredSettlementNumber;
      }

      internal static object AutoGeneratedGetMemberValue_visitedSettlements(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._visitedSettlements;
      }

      internal static object AutoGeneratedGetMemberValue_questCaravanMobileParty(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._questCaravanMobileParty;
      }

      internal static object AutoGeneratedGetMemberValue_questBanditMobileParty(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._questBanditMobileParty;
      }

      internal static object AutoGeneratedGetMemberValue_difficultyMultiplier(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._difficultyMultiplier;
      }

      internal static object AutoGeneratedGetMemberValue_isPlayerNotifiedForDanger(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._isPlayerNotifiedForDanger;
      }

      internal static object AutoGeneratedGetMemberValue_otherBanditParty(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._otherBanditParty;
      }

      internal static object AutoGeneratedGetMemberValue_questBanditPartyFollowDuration(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._questBanditPartyFollowDuration;
      }

      internal static object AutoGeneratedGetMemberValue_otherBanditPartyFollowDuration(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._otherBanditPartyFollowDuration;
      }

      internal static object AutoGeneratedGetMemberValue_daysSpentForEscorting(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._daysSpentForEscorting;
      }

      internal static object AutoGeneratedGetMemberValue_questBanditPartyAlreadyAttacked(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._questBanditPartyAlreadyAttacked;
      }

      internal static object AutoGeneratedGetMemberValue_playerStartsQuestLog(object o)
      {
        return (object) ((EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest) o)._playerStartsQuestLog;
      }

      public override TextObject Title => new TextObject("{=VpLzd69e}Escort Merchant Caravan");

      public override bool IsRemainingTimeHidden => false;

      private int BanditPartyTroopCount
      {
        get
        {
          return (int) MathF.Min(40f, (float) (MobileParty.MainParty.MemberRoster.TotalHealthyCount + this._questCaravanMobileParty.MemberRoster.TotalHealthyCount) * 0.7f);
        }
      }

      private int CaravanPartyTroopCount => MBRandom.RandomInt(10, 14);

      private bool CaravanIsInsideSettlement
      {
        get => this._questCaravanMobileParty.CurrentSettlement != null;
      }

      private int TotalRewardGold => MathF.Min(8000, this.RewardGold * this._daysSpentForEscorting);

      private CustomPartyComponent CaravanCustomPartyComponent
      {
        get
        {
          if (this._customPartyComponent == null)
            this._customPartyComponent = this._questCaravanMobileParty.PartyComponent as CustomPartyComponent;
          return this._customPartyComponent;
        }
      }

      private TextObject _playerStartsQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=YXbKXUDu}{ISSUE_GIVER.LINK}, a merchant from {SETTLEMENT}, has told you about {?ISSUE_GIVER.GENDER}her{?}his{\\?} recent problems with bandits. {?ISSUE_GIVER.GENDER}She{?}He{\\?} asked you to guard {?ISSUE_GIVER.GENDER}her{?}his{\\?} caravan for a while and deal with any attackers. In return {?ISSUE_GIVER.GENDER}she{?}he{\\?} offered you {GOLD}{GOLD_ICON} denars for each day you spend on escort duty.{newline}You have agreed to guard it yourself until it visits {NUMBER_OF_SETTLEMENTS} settlements.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", Settlement.CurrentSettlement.Name);
          parent.SetTextVariable("NUMBER_OF_SETTLEMENTS", this._requiredSettlementNumber);
          parent.SetTextVariable("GOLD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject _caravanDestroyedQuestLogText
      {
        get => new TextObject("{=zk9QyKIz}The caravan was destroyed. Quest failed.");
      }

      private TextObject _caravanLostTheTrackLogText
      {
        get
        {
          TextObject parent = new TextObject("{=y62dyzH6}You have lost the track of caravan. Your agreement with {ISSUE_GIVER.LINK} is failed.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _caravanDestroyedByBanditsLogText
      {
        get
        {
          TextObject parent = new TextObject("{=MhvyTcrH}The caravan is destroyed by some bandits. Your agreement with {ISSUE_GIVER.LINK} is failed.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject _caravanDestroyedByPlayerQuestLogText
      {
        get => new TextObject("{=Rd3m5kyk}You have attacked the caravan.");
      }

      private TextObject _successQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=dKEADOhG}You have protected the caravan belonging to {QUEST_GIVER.LINK} from {SETTLEMENT} as promised. {?QUEST_GIVER.GENDER}She{?}He{\\?} was happy with your work.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("SETTLEMENT", this.QuestGiver.CurrentSettlement.Name);
          return parent;
        }
      }

      private TextObject _cancelByWarQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=KhNkBd9O}Your clan is now at war with the {QUEST_GIVER.LINK}’s lord. Your agreement with {QUEST_GIVER.LINK} was canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public EscortMerchantCaravanIssueQuest(
        string questId,
        Hero giverHero,
        CampaignTime duration,
        float difficultyMultiplier,
        int rewardGold)
        : base(questId, giverHero, duration, rewardGold)
      {
        this._difficultyMultiplier = difficultyMultiplier;
        this._requiredSettlementNumber = MathF.Round((float) (2.0 + 4.0 * (double) this._difficultyMultiplier));
        this._visitedSettlements = new List<Settlement>();
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=TdwKwExD}Thank you. You can find the caravan just outside the settlement.[if:convo_grateful]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=vtZYmAaR}I feel good knowing that you're looking after my caravan. Safe journeys, my friend![if:convo_grateful]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).CloseDialog();
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCaravanPartyDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCaravanGreetingDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCaravanTradeDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCaravanLootDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCaravanFarewellDialogFlow(), (object) this);
      }

      private TextObject _caravanNoTargetLogText
      {
        get
        {
          TextObject parent = new TextObject("{=1FOmvEdf}All profitable trade routes of the caravan are blocked by recent wars. {QUEST_GIVER.LINK} decided to recall the caravan until the situation gets better. {?QUEST_GIVER.GENDER}She{?}He{\\?} was happy with your service and sent you {REWARD}{GOLD_ICON} as promised.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("REWARD", this.TotalRewardGold);
          return parent;
        }
      }

      private DialogFlow GetCaravanPartyDialogFlow()
      {
        TextObject textObject = new TextObject("{=ZAqEJI9T}About the task {QUEST_GIVER.LINK} gave me.");
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        return DialogFlow.CreateDialogFlow("escort_caravan_talk", 125).BeginPlayerOptions().PlayerOption(textObject).Condition(new ConversationSentence.OnConditionDelegate(this.caravan_talk_on_condition)).NpcLine("{=heWYa9Oq}I feel safe knowing that you're looking after us. Please continue to follow us my friend!").Consequence((ConversationSentence.OnConsequenceDelegate) (() => PlayerEncounter.LeaveEncounter = true)).CloseDialog().EndPlayerOptions();
      }

      private bool caravan_talk_on_condition()
      {
        int num = !this._questCaravanMobileParty.MemberRoster.Contains(CharacterObject.OneToOneConversationCharacter) || this._questCaravanMobileParty != MobileParty.ConversationParty || MobileParty.ConversationParty == null || !MobileParty.ConversationParty.IsCustomParty || CharacterObject.OneToOneConversationCharacter.IsHero ? 0 : (MobileParty.ConversationParty.Party.Owner != Hero.MainHero ? 1 : 0);
        if (num == 0)
          return num != 0;
        MBTextManager.SetTextVariable("HOMETOWN", MobileParty.ConversationParty.HomeSettlement.EncyclopediaLinkWithName, false);
        StringHelpers.SetCharacterProperties("MERCHANT", MobileParty.ConversationParty.Party.Owner.CharacterObject);
        StringHelpers.SetCharacterProperties("PROTECTOR", MobileParty.ConversationParty.HomeSettlement.OwnerClan.Leader.CharacterObject);
        return num != 0;
      }

      private DialogFlow GetCaravanFarewellDialogFlow()
      {
        TextObject text = new TextObject("{=1IJouNaM}Carry on, then. Farewell.");
        return DialogFlow.CreateDialogFlow("escort_caravan_talk", 125).BeginPlayerOptions().PlayerOption(text).Condition(new ConversationSentence.OnConditionDelegate(this.caravan_talk_on_condition)).NpcLine("{=heWYa9Oq}I feel safe knowing that you're looking after us. Please continue to follow us my friend!").Consequence((ConversationSentence.OnConsequenceDelegate) (() => PlayerEncounter.LeaveEncounter = true)).CloseDialog().EndPlayerOptions();
      }

      private DialogFlow GetCaravanLootDialogFlow()
      {
        TextObject text = new TextObject("{=WOBy5UfY}Hand over your goods, or die!");
        return DialogFlow.CreateDialogFlow("escort_caravan_talk", 125).BeginPlayerOptions().PlayerOption(text).Condition(new ConversationSentence.OnConditionDelegate(this.caravan_loot_on_condition)).NpcLine("{=QNaKmkt9}We're paid to guard this caravan. If you want to rob it, it's going to be over our dead bodies![if:convo_angry][ib:aggressive]").BeginPlayerOptions().PlayerOption("{=EhxS7NQ4}So be it. Attack!").Consequence(new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_fight_on_consequence)).CloseDialog().PlayerOption("{=bfPsE9M1}You must have misunderstood me. Go in peace.").Consequence(new ConversationSentence.OnConsequenceDelegate(this.caravan_talk_leave_on_consequence)).CloseDialog().EndPlayerOptions().EndPlayerOptions();
      }

      private void conversation_caravan_fight_on_consequence()
      {
        PlayerEncounter.Current.IsEnemy = true;
      }

      private void caravan_talk_leave_on_consequence()
      {
        if (PlayerEncounter.Current == null)
          return;
        PlayerEncounter.LeaveEncounter = true;
      }

      private DialogFlow GetCaravanTradeDialogFlow()
      {
        TextObject text = new TextObject("{=t0UGXPV4}I'm interested in trading. What kind of products do you have?");
        return DialogFlow.CreateDialogFlow("escort_caravan_talk", 125).BeginPlayerOptions().PlayerOption(text).Condition(new ConversationSentence.OnConditionDelegate(this.caravan_buy_products_on_condition)).NpcLine("{=tlLDHAIu}Very well. A pleasure doing business with you.[if:convo_relaxed_happy][ib:demure]").Condition(new ConversationSentence.OnConditionDelegate(this.conversation_caravan_player_trade_end_on_condition)).NpcLine("{=DQBaaC0e}Is there anything else?").GotoDialogState("escort_caravan_talk").EndPlayerOptions();
      }

      private bool caravan_buy_products_on_condition()
      {
        if (MobileParty.ConversationParty != null && MobileParty.ConversationParty == this._questCaravanMobileParty && !MobileParty.ConversationParty.IsCaravan)
        {
          for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count; ++index)
          {
            if (MobileParty.ConversationParty.ItemRoster.GetElementNumber(index) > 0)
              return true;
          }
        }
        return false;
      }

      private bool conversation_caravan_player_trade_end_on_condition()
      {
        if (MobileParty.ConversationParty != null && MobileParty.ConversationParty == this._questCaravanMobileParty && !MobileParty.ConversationParty.IsCaravan)
          InventoryManager.OpenTradeWithCaravanOrAlleyParty(MobileParty.ConversationParty);
        return true;
      }

      private DialogFlow GetCaravanGreetingDialogFlow()
      {
        TextObject npcText = new TextObject("{=FpUybbSk}Greetings. This caravan is owned by {MERCHANT.LINK}. We trade under the protection of {PROTECTOR.LINK}, master of {HOMETOWN}. How may we help you?[if:convo_normal]");
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(npcText).Condition(new ConversationSentence.OnConditionDelegate(this.caravan_talk_on_condition)).GotoDialogState("escort_caravan_talk");
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.SpawnCaravan();
        this._playerStartsQuestLog = this.AddDiscreteLog(this._playerStartsQuestLogText, new TextObject("{=r2y3n7dR}Visited Settlements"), this._visitedSettlements.Count, this._requiredSettlementNumber);
      }

      private bool caravan_loot_on_condition()
      {
        int num = MobileParty.ConversationParty == null || MobileParty.ConversationParty.Party.MapFaction == Hero.MainHero.MapFaction || MobileParty.ConversationParty.IsCaravan ? 0 : (MobileParty.ConversationParty == this._questCaravanMobileParty ? 1 : 0);
        if (num == 0)
          return num != 0;
        MBTextManager.SetTextVariable("HOMETOWN", MobileParty.ConversationParty.HomeSettlement.EncyclopediaLinkWithName, false);
        StringHelpers.SetCharacterProperties("MERCHANT", MobileParty.ConversationParty.Party.Owner.CharacterObject);
        StringHelpers.SetCharacterProperties("PROTECTOR", MobileParty.ConversationParty.HomeSettlement.OwnerClan.Leader.CharacterObject);
        return num != 0;
      }

      private void SpawnCaravan()
      {
        ItemRoster caravanItems = new ItemRoster();
        foreach (ItemObject defaultCaravanItem in EscortMerchantCaravanIssueBehavior.Instance.DefaultCaravanItems)
          caravanItems.AddToCounts(defaultCaravanItem, 7);
        string mountStringId;
        string harnessStringId;
        this.GetAdditionalVisualsForParty(this.QuestGiver.Culture, out mountStringId, out harnessStringId);
        TextObject text = GameTexts.FindText("str_caravan_party_name");
        text.SetCharacterProperties("OWNER", this.QuestGiver.CharacterObject);
        this._questCaravanMobileParty = CustomPartyComponent.CreateQuestParty(this.QuestGiver.CurrentSettlement.GatePosition, 0.0f, this.QuestGiver.CurrentSettlement, text, this.QuestGiver.Clan, TroopRoster.CreateDummyTroopRoster(), TroopRoster.CreateDummyTroopRoster(), this.QuestGiver, mountStringId, harnessStringId, 4f);
        this.InitializeCaravanOnCreation(this._questCaravanMobileParty, this.QuestGiver, this.QuestGiver.CurrentSettlement, caravanItems, this.CaravanPartyTroopCount, false);
        this.AddTrackedObject((ITrackableCampaignObject) this._questCaravanMobileParty);
        this._questCaravanMobileParty.SetPartyUsedByQuest(true);
        this._questCaravanMobileParty.Ai.SetDoNotMakeNewDecisions(true);
        this._questCaravanMobileParty.IgnoreByOtherPartiesTill(this.QuestDueTime);
        this._caravanWaitedInSettlementForHours = 4;
      }

      private bool ProperSettlementCondition(Settlement settlement)
      {
        return settlement != Settlement.CurrentSettlement && settlement.IsTown && !settlement.IsUnderSiege && !this._visitedSettlements.Contains(settlement);
      }

      private void InitializeCaravanOnCreation(
        MobileParty mobileParty,
        Hero owner,
        Settlement settlement,
        ItemRoster caravanItems,
        int troopToBeGiven,
        bool isElite)
      {
        mobileParty.Aggressiveness = 0.0f;
        if (troopToBeGiven == 0)
        {
          float num1 = (double) MBRandom.RandomFloat >= 0.67000001668930054 ? 1f : (float) ((1.0 - (double) MBRandom.RandomFloat * (double) MBRandom.RandomFloat) * 0.5 + 0.5);
          int num2 = (int) ((double) mobileParty.Party.PartySizeLimit * (double) num1);
          if (num2 >= 10)
            --num2;
          troopToBeGiven = num2;
        }
        PartyTemplateObject pt = isElite ? settlement.Culture.EliteCaravanPartyTemplate : settlement.Culture.CaravanPartyTemplate;
        mobileParty.InitializeMobilePartyAtPosition(pt, settlement.GatePosition, troopToBeGiven);
        CharacterObject character1 = CharacterObject.All.First<CharacterObject>((Func<CharacterObject, bool>) (character => character.Occupation == Occupation.CaravanGuard && character.IsInfantry && character.Level == 26 && character.Culture == mobileParty.Party.Owner.Culture));
        mobileParty.MemberRoster.AddToCounts(character1, 1, true);
        mobileParty.Party.SetVisualAsDirty();
        mobileParty.InitializePartyTrade(10000 + (owner.Clan == Clan.PlayerClan ? 5000 : 0));
        if (caravanItems != null)
        {
          mobileParty.ItemRoster.Add((IEnumerable<ItemRosterElement>) caravanItems);
        }
        else
        {
          float num = 10000f;
          ItemObject itemObject1 = (ItemObject) null;
          foreach (ItemObject itemObject2 in (List<ItemObject>) Items.All)
          {
            if (itemObject2.ItemCategory == DefaultItemCategories.PackAnimal && !itemObject2.NotMerchandise && (double) itemObject2.Value < (double) num)
            {
              itemObject1 = itemObject2;
              num = (float) itemObject2.Value;
            }
          }
          if (itemObject1 == null)
            return;
          mobileParty.ItemRoster.Add(new ItemRosterElement(itemObject1, (int) ((double) mobileParty.MemberRoster.TotalManCount * 0.5)));
        }
      }

      private void GetAdditionalVisualsForParty(
        CultureObject culture,
        out string mountStringId,
        out string harnessStringId)
      {
        if (culture.StringId == "aserai" || culture.StringId == "khuzait")
        {
          mountStringId = "camel";
          harnessStringId = (double) MBRandom.RandomFloat > 0.5 ? "camel_saddle_a" : "camel_saddle_b";
        }
        else
        {
          mountStringId = "mule";
          harnessStringId = (double) MBRandom.RandomFloat > 0.5 ? "mule_load_a" : ((double) MBRandom.RandomFloat > 0.5 ? "mule_load_b" : "mule_load_c");
        }
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
        CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
        CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
        CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
        CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
        CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
        CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyHourlyTick));
        CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      }

      private void OnPartyHourlyTick(MobileParty mobileParty)
      {
        this.CheckPartyAndMakeItAttackTheCaravan(mobileParty);
        this.CheckEncounterForBanditParty(this._questBanditMobileParty);
        this.CheckEncounterForBanditParty(this._otherBanditParty);
        this.CheckOtherBanditPartyDistance();
      }

      private void CheckOtherBanditPartyDistance()
      {
        if (!this.IsOngoing)
          return;
        if (this._otherBanditParty != null && this._otherBanditParty.IsActive && this._otherBanditParty.TargetParty == this._questCaravanMobileParty && this._otherBanditPartyFollowDuration < 0)
        {
          if (this.IsTracked((ITrackableCampaignObject) this._otherBanditParty))
            this.RemoveTrackedObject((ITrackableCampaignObject) this._otherBanditParty);
          this._otherBanditParty.Ai.SetMoveModeHold();
          this._otherBanditParty.Ai.SetDoNotMakeNewDecisions(false);
          this._otherBanditParty = (MobileParty) null;
        }
        if (this._questBanditMobileParty == null || !this._questBanditMobileParty.IsActive || this._questBanditMobileParty.MapEvent != null || this._questBanditMobileParty.TargetParty != this._questCaravanMobileParty || this._questBanditPartyFollowDuration >= 0 || this._questBanditMobileParty.IsVisible)
          return;
        if (this.IsTracked((ITrackableCampaignObject) this._questBanditMobileParty))
          this.RemoveTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
        this._questBanditMobileParty.Ai.SetMoveModeHold();
        this._questBanditMobileParty.Ai.SetDoNotMakeNewDecisions(false);
      }

      private void CheckEncounterForBanditParty(MobileParty mobileParty)
      {
        if (!this.IsOngoing || mobileParty == null || !mobileParty.IsActive || mobileParty.MapEvent != null || !this._questCaravanMobileParty.IsActive || this._questCaravanMobileParty.MapEvent != null || this._questCaravanMobileParty.CurrentSettlement != null || (double) mobileParty.Position2D.DistanceSquared(this._questCaravanMobileParty.Position2D) > 1.0)
          return;
        EncounterManager.StartPartyEncounter(mobileParty.Party, this._questCaravanMobileParty.Party);
        MBInformationManager.AddQuickInformation(new TextObject("{=o8uAzFaJ}The caravan you are protecting is ambushed by raiders!"));
        this._questCaravanMobileParty.MapEvent.IsInvulnerable = true;
      }

      private void CheckPartyAndMakeItAttackTheCaravan(MobileParty mobileParty)
      {
        if (this._otherBanditParty != null || mobileParty.MapEvent != null || !mobileParty.IsBandit || mobileParty.IsCurrentlyUsedByAQuest || mobileParty == this._questBanditMobileParty || mobileParty.Party.NumberOfHealthyMembers <= this._questCaravanMobileParty.Party.NumberOfHealthyMembers || (double) mobileParty.Speed <= (double) this._questCaravanMobileParty.Speed && (double) mobileParty.Position2D.DistanceSquared(this._questCaravanMobileParty.Position2D) >= 9.0)
          return;
        Settlement toSettlement = this._visitedSettlements.LastOrDefault<Settlement>() ?? this._questCaravanMobileParty.HomeSettlement;
        Settlement targetSettlement = this._questCaravanMobileParty.TargetSettlement;
        if (targetSettlement == null)
        {
          this.TryToFindAndSetTargetToNextSettlement();
        }
        else
        {
          double distance1 = (double) Campaign.Current.Models.MapDistanceModel.GetDistance(this._questCaravanMobileParty, targetSettlement);
          float distance2 = Campaign.Current.Models.MapDistanceModel.GetDistance(this._questCaravanMobileParty, toSettlement);
          float num1 = mobileParty.Position2D.DistanceSquared(this._questCaravanMobileParty.Position2D);
          if (distance1 <= 5.0 || (double) distance2 <= 5.0 || (double) num1 >= 64.0)
            return;
          SetPartyAiAction.GetActionForEngagingParty(mobileParty, this._questCaravanMobileParty);
          mobileParty.Ai.SetDoNotMakeNewDecisions(true);
          if (!this.IsTracked((ITrackableCampaignObject) mobileParty))
            this.AddTrackedObject((ITrackableCampaignObject) mobileParty);
          float num2 = mobileParty.Speed + this._questCaravanMobileParty.Speed;
          this._otherBanditPartyFollowDuration = (int) ((double) num1 / (double) num2) + 5;
          this._otherBanditParty = mobileParty;
        }
      }

      private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
      {
        if (party != this._questCaravanMobileParty || settlement == this._questCaravanMobileParty.HomeSettlement || !settlement.GatePosition.NearlyEquals(MobileParty.MainParty.Position2D, MobileParty.MainParty.SeeingRange + 2f) || settlement != this._questCaravanMobileParty.TargetSettlement)
          return;
        this._visitedSettlements.Add(settlement);
        this.UpdateQuestTaskStage(this._playerStartsQuestLog, this._visitedSettlements.Count);
        TextObject text = new TextObject("{=0wj3HIbh}Caravan entered {SETTLEMENT_LINK}.");
        text.SetTextVariable("SETTLEMENT_LINK", settlement.EncyclopediaLinkWithName);
        this.AddLog(text, true);
        if (this._questBanditMobileParty != null && this._questBanditMobileParty.IsActive)
        {
          if (this.IsTracked((ITrackableCampaignObject) this._questBanditMobileParty))
            this.RemoveTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
          this._questBanditMobileParty.Ai.SetDoNotMakeNewDecisions(false);
          this._questBanditMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
          if (this._questBanditMobileParty.MapEvent == null)
            SetPartyAiAction.GetActionForPatrollingAroundSettlement(this._questBanditMobileParty, settlement);
        }
        if (this._otherBanditParty != null)
        {
          if (this.IsTracked((ITrackableCampaignObject) this._otherBanditParty))
            this.RemoveTrackedObject((ITrackableCampaignObject) this._otherBanditParty);
          this._otherBanditParty.Ai.SetMoveModeHold();
          this._otherBanditParty.Ai.SetDoNotMakeNewDecisions(false);
          this._otherBanditParty = (MobileParty) null;
        }
        if (this._visitedSettlements.Count != this._requiredSettlementNumber)
          return;
        this.SuccessConsequences(false);
      }

      private void OnDailyTick() => ++this._daysSpentForEscorting;

      private void OnSettlementOwnerChanged(
        Settlement settlement,
        bool openToClaim,
        Hero newOwner,
        Hero oldOwner,
        Hero capturerHero,
        ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
      {
        this.CheckWarDeclaration();
      }

      private void OnClanChangedKingdom(
        Clan clan,
        Kingdom oldKingdom,
        Kingdom newKingdom,
        ChangeKingdomAction.ChangeKingdomActionDetail detail,
        bool showNotification = true)
      {
        this.CheckWarDeclaration();
      }

      private void CheckWarDeclaration()
      {
        if (!this.QuestGiver.CurrentSettlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
          return;
        this.CompleteQuestWithCancel(this._cancelByWarQuestLogText);
      }

      private void OnWarDeclared(
        IFaction faction1,
        IFaction faction2,
        DeclareWarAction.DeclareWarDetail detail)
      {
        if (detail == DeclareWarAction.DeclareWarDetail.CausedByPlayerHostility && (faction1 == this._questCaravanMobileParty.MapFaction || faction2 == this._questCaravanMobileParty.MapFaction) && PlayerEncounter.Battle != null && this._questCaravanMobileParty.MapEvent == PlayerEncounter.Battle)
          this.FailByPlayerHostileConsequences();
        else
          this.CheckWarDeclaration();
        if (this._questCaravanMobileParty == null || this._questCaravanMobileParty.TargetSettlement != null && !this._questCaravanMobileParty.TargetSettlement.MapFaction.IsAtWarWith(this._questCaravanMobileParty.MapFaction) || !this.IsOngoing)
          return;
        this.TryToFindAndSetTargetToNextSettlement();
      }

      protected override void HourlyTick()
      {
        if (this.IsOngoing && this._questCaravanMobileParty.TargetSettlement == null)
          this.TryToFindAndSetTargetToNextSettlement();
        if (!this.IsOngoing)
          return;
        if (this.CaravanIsInsideSettlement)
          this.SimulateSettlementWaitForCaravan();
        else if (this._questCaravanMobileParty.MapEvent == null)
          this.AdjustCaravansSpeed();
        this.NotifyPlayerOrCancelTheQuestIfCaravanIsFar();
        if (!this.IsOngoing)
          return;
        this.ThinkAboutSpawningBanditParty();
        this.CheckCaravanMapEvent();
        --this._otherBanditPartyFollowDuration;
        --this._questBanditPartyFollowDuration;
      }

      private void CheckCaravanMapEvent()
      {
        if (this._questCaravanMobileParty.MapEvent == null || !this._questCaravanMobileParty.MapEvent.IsInvulnerable || (double) this._questCaravanMobileParty.MapEvent.BattleStartTime.ElapsedHoursUntilNow <= 3.0)
          return;
        this._questCaravanMobileParty.MapEvent.IsInvulnerable = false;
      }

      private void AdjustCaravansSpeed()
      {
        float speed1 = MobileParty.MainParty.Speed;
        for (float speed2 = this._questCaravanMobileParty.Speed; (double) speed1 < (double) speed2 || (double) speed1 - (double) speed2 > 1.0; speed2 = this._questCaravanMobileParty.Speed)
        {
          if ((double) speed2 >= (double) speed1)
            this.CaravanCustomPartyComponent.SetBaseSpeed(this.CaravanCustomPartyComponent.BaseSpeed - 0.05f);
          else if ((double) speed1 - (double) speed2 > 1.0)
            this.CaravanCustomPartyComponent.SetBaseSpeed(this.CaravanCustomPartyComponent.BaseSpeed + 0.05f);
          speed1 = MobileParty.MainParty.Speed;
        }
      }

      private void ThinkAboutSpawningBanditParty()
      {
        if (this._questBanditPartyAlreadyAttacked || this._questBanditMobileParty != null)
          return;
        Settlement targetSettlement = this._questCaravanMobileParty.TargetSettlement;
        if (targetSettlement == null)
          return;
        float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(this._questCaravanMobileParty, targetSettlement);
        if ((double) distance <= 10.0 || (double) distance >= 80.0)
          return;
        this.ActivateBanditParty();
        this._questBanditPartyFollowDuration = (int) (80.0 / (double) (this._questBanditMobileParty.Speed + this._questCaravanMobileParty.Speed)) + 5;
        this._questBanditPartyAlreadyAttacked = true;
      }

      private void SimulateSettlementWaitForCaravan()
      {
        ++this._caravanWaitedInSettlementForHours;
        if (this._caravanWaitedInSettlementForHours < 5)
          return;
        LeaveSettlementAction.ApplyForParty(this._questCaravanMobileParty);
        this._caravanWaitedInSettlementForHours = 0;
      }

      private void NotifyPlayerOrCancelTheQuestIfCaravanIsFar()
      {
        if (!this._questCaravanMobileParty.IsActive || this._questCaravanMobileParty.IsVisible)
          return;
        float num = this._questCaravanMobileParty.Position2D.Distance(MobileParty.MainParty.Position2D);
        if (!this._isPlayerNotifiedForDanger && (double) num >= (double) MobileParty.MainParty.SeeingRange + 3.0)
        {
          MBInformationManager.AddQuickInformation(new TextObject("{=2y9DhzCR}You are about to lose sight of the caravan. Find the caravan before they are in danger!"));
          this._isPlayerNotifiedForDanger = true;
        }
        else
        {
          if ((double) num < (double) MobileParty.MainParty.SeeingRange + 20.0)
            return;
          this.AddLog(this._caravanLostTheTrackLogText);
          this.FailConsequences();
        }
      }

      private void OnSettlementLeft(MobileParty party, Settlement settlement)
      {
        if (party != this._questCaravanMobileParty)
          return;
        this.AdjustCaravansSpeed();
        if (party.TargetSettlement == null || party.TargetSettlement == settlement)
          this.TryToFindAndSetTargetToNextSettlement();
        this._caravanWaitedInSettlementForHours = 0;
        this._questBanditPartyAlreadyAttacked = false;
        this._questCaravanMobileParty.Party.SetAsCameraFollowParty();
        if (!this.IsTracked((ITrackableCampaignObject) settlement))
          return;
        this.RemoveTrackedObject((ITrackableCampaignObject) settlement);
      }

      private void TryToFindAndSetTargetToNextSettlement()
      {
        int maxValue = 0;
        int num1 = -1;
        do
        {
          num1 = SettlementHelper.FindNextSettlementAroundMapPoint((IMapPoint) this._questCaravanMobileParty, 150f, num1);
          if (num1 >= 0)
          {
            Settlement settlement = Settlement.All[num1];
            if (this.ProperSettlementCondition(settlement) && settlement != this._questCaravanMobileParty.HomeSettlement && (this._visitedSettlements.Count == 0 || settlement != this._visitedSettlements[this._visitedSettlements.Count - 1]) && !settlement.MapFaction.IsAtWarWith(this._questCaravanMobileParty.MapFaction))
              ++maxValue;
          }
        }
        while (num1 >= 0);
        if (maxValue > 0)
        {
          int num2 = MBRandom.RandomInt(maxValue);
          int num3 = -1;
          do
          {
            num3 = SettlementHelper.FindNextSettlementAroundMapPoint((IMapPoint) this._questCaravanMobileParty, 150f, num3);
            if (num3 >= 0)
            {
              Settlement settlement1 = Settlement.All[num3];
              if (this.ProperSettlementCondition(settlement1) && settlement1 != this._questCaravanMobileParty.HomeSettlement && (this._visitedSettlements.Count == 0 || settlement1 != this._visitedSettlements[this._visitedSettlements.Count - 1]) && !settlement1.MapFaction.IsAtWarWith(this._questCaravanMobileParty.MapFaction))
              {
                --num2;
                if (num2 < 0)
                {
                  Settlement settlement2 = settlement1;
                  SetPartyAiAction.GetActionForVisitingSettlement(this._questCaravanMobileParty, settlement2);
                  this._questCaravanMobileParty.Ai.SetDoNotMakeNewDecisions(true);
                  TextObject message = new TextObject("{=OjI8uGFa}We are traveling to {SETTLEMENT_NAME}.");
                  message.SetTextVariable("SETTLEMENT_NAME", settlement2.Name);
                  MBInformationManager.AddQuickInformation(message, 100, (BasicCharacterObject) PartyBaseHelper.GetVisualPartyLeader(this._questCaravanMobileParty.Party));
                  TextObject text = new TextObject("{=QDpfYm4c}The caravan is moving to {SETTLEMENT_NAME}.");
                  text.SetTextVariable("SETTLEMENT_NAME", settlement2.EncyclopediaLinkWithName);
                  this.AddLog(text, true);
                  if (!this.IsTracked((ITrackableCampaignObject) settlement2))
                    this.AddTrackedObject((ITrackableCampaignObject) settlement2);
                  if (this._questBanditMobileParty != null && ((double) this._questBanditMobileParty.Speed < (double) this._questCaravanMobileParty.Speed || (double) Campaign.Current.Models.MapDistanceModel.GetDistance(this._questCaravanMobileParty, this._questBanditMobileParty) > 10.0))
                  {
                    this._questBanditMobileParty.Ai.SetDoNotMakeNewDecisions(false);
                    this._questBanditMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
                    if (this.IsTracked((ITrackableCampaignObject) this._questBanditMobileParty))
                      this.RemoveTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
                    this._questBanditMobileParty = (MobileParty) null;
                    return;
                  }
                  goto label_17;
                }
              }
            }
          }
          while (num3 >= 0);
          goto label_19;
label_17:
          return;
label_19:;
        }
        else
          this.CaravanNoTargetQuestSuccess();
      }

      private void CaravanNoTargetQuestSuccess() => this.SuccessConsequences(true);

      private void OnMapEventEnded(MapEvent mapEvent)
      {
        if (this._questCaravanMobileParty == null || !mapEvent.InvolvedParties.Contains<PartyBase>(this._questCaravanMobileParty.Party))
          return;
        if (mapEvent.HasWinner)
        {
          bool flag1 = this._questCaravanMobileParty.MapEventSide == MobileParty.MainParty.MapEventSide && mapEvent.IsPlayerMapEvent;
          int num = mapEvent.Winner == this._questCaravanMobileParty.MapEventSide ? 1 : 0;
          bool flag2 = mapEvent.InvolvedParties.Contains<PartyBase>(PartyBase.MainParty);
          if (num == 0)
          {
            if (flag2)
            {
              if (flag1)
              {
                this.AddLog(this._caravanDestroyedQuestLogText);
                this.FailConsequences(true);
              }
              else
                this.FailByPlayerHostileConsequences();
            }
            else
            {
              this.AddLog(this._caravanDestroyedByBanditsLogText);
              this.FailConsequences(true);
            }
          }
          else
          {
            if (this._questBanditMobileParty != null && this._questBanditMobileParty.IsActive && mapEvent.InvolvedParties.Contains<PartyBase>(this._questBanditMobileParty.Party))
              DestroyPartyAction.Apply(MobileParty.MainParty.Party, this._questBanditMobileParty);
            if (this._otherBanditParty != null && this._otherBanditParty.IsActive && mapEvent.InvolvedParties.Contains<PartyBase>(this._otherBanditParty.Party))
              DestroyPartyAction.Apply(MobileParty.MainParty.Party, this._otherBanditParty);
            if (this._questCaravanMobileParty.MemberRoster.TotalManCount <= 0)
              this.FailConsequences(true);
            if ((double) this._questCaravanMobileParty.Speed >= 2.0)
              return;
            this._questCaravanMobileParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("sumpter_horse"), 5);
          }
        }
        else
        {
          if (this._questCaravanMobileParty.MemberRoster.TotalManCount > 0)
            return;
          this.FailConsequences(true);
        }
      }

      private void SuccessConsequences(bool isNoTargetLeftSuccess)
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.TotalRewardGold);
        this.QuestGiver.AddPower(10f);
        this.RelationshipChangeWithQuestGiver = 5;
        TraitLevelingHelper.OnIssueSolvedThroughQuest(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, 50)
        });
        this.QuestGiver.CurrentSettlement.Town.Prosperity += 10f;
        if (isNoTargetLeftSuccess)
          this.AddLog(this._caravanNoTargetLogText);
        else
          this.AddLog(this._successQuestLogText, true);
        this._questBanditMobileParty?.Ai.SetDoNotMakeNewDecisions(false);
        this.CompleteQuestWithSuccess();
      }

      private void FailConsequences(bool banditsWon = false)
      {
        this.QuestGiver.AddPower(-10f);
        this.RelationshipChangeWithQuestGiver = -5;
        TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -20)
        });
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 10f;
        if (this._questBanditMobileParty != null)
        {
          this._questBanditMobileParty.Ai.SetDoNotMakeNewDecisions(false);
          this._questBanditMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
          if (this.IsTracked((ITrackableCampaignObject) this._questBanditMobileParty))
            this.RemoveTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
        }
        if (this._questCaravanMobileParty != null)
        {
          this._questCaravanMobileParty.Ai.SetDoNotMakeNewDecisions(false);
          this._questCaravanMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
        }
        if (this._questBanditMobileParty != null && !banditsWon)
        {
          if (this.IsTracked((ITrackableCampaignObject) this._questBanditMobileParty))
            this.RemoveTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
          this._questBanditMobileParty.SetPartyUsedByQuest(false);
          this._questBanditMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
          if (this._questBanditMobileParty.IsActive && this._questBanditMobileParty.IsVisible)
            DestroyPartyAction.Apply((PartyBase) null, this._questBanditMobileParty);
        }
        this.CompleteQuestWithFail();
      }

      private void FailByPlayerHostileConsequences()
      {
        this.QuestGiver.AddPower(-10f);
        this.RelationshipChangeWithQuestGiver = -10;
        TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -80)
        });
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 20f;
        this.AddLog(this._caravanDestroyedByPlayerQuestLogText, true);
        this._questBanditMobileParty?.Ai.SetDoNotMakeNewDecisions(false);
        this.CompleteQuestWithFail();
      }

      protected override void InitializeQuestOnGameLoad()
      {
        MobileParty caravanMobileParty = this._questCaravanMobileParty;
        if ((caravanMobileParty != null ? (caravanMobileParty.IsCaravan ? 1 : 0) : 0) != 0)
          this.CompleteQuestWithCancel();
        this.SetDialogs();
      }

      private void ActivateBanditParty()
      {
        Settlement closestHideout = SettlementHelper.FindNearestHideout((Func<Settlement, bool>) (x => x.IsActive));
        Clan clan = Clan.BanditFactions.FirstOrDefault<Clan>((Func<Clan, bool>) (t => t.Culture == closestHideout.Culture));
        this._questBanditMobileParty = BanditPartyComponent.CreateBanditParty("escort_caravan_quest_" + this.StringId, clan, closestHideout.Hideout, false);
        PartyTemplateObject pt = Campaign.Current.ObjectManager.GetObject<PartyTemplateObject>("kingdom_hero_party_caravan_ambushers") ?? clan.DefaultPartyTemplate;
        this._questBanditMobileParty.InitializeMobilePartyAroundPosition(pt, this._questCaravanMobileParty.TargetSettlement.GatePosition, 1f, 0.5f);
        this._questBanditMobileParty.SetCustomName(new TextObject("{=u1Pkt4HC}Raiders"));
        Campaign.Current.MobilePartyLocator.UpdateLocator(this._questBanditMobileParty);
        this._questBanditMobileParty.ActualClan = clan;
        this._questBanditMobileParty.MemberRoster.Clear();
        for (int index = 0; index < this.BanditPartyTroopCount; ++index)
        {
          List<(PartyTemplateStack, float)> weightList = new List<(PartyTemplateStack, float)>();
          foreach (PartyTemplateStack stack in (List<PartyTemplateStack>) pt.Stacks)
            weightList.Add((stack, (float) (64 - stack.Character.Level)));
          this._questBanditMobileParty.MemberRoster.AddToCounts(MBRandom.ChooseWeighted<PartyTemplateStack>((IReadOnlyList<(PartyTemplateStack, float)>) weightList).Character, 1);
        }
        this._questBanditMobileParty.ItemRoster.AddToCounts(DefaultItems.Grain, this.BanditPartyTroopCount);
        this._questBanditMobileParty.ItemRoster.AddToCounts(MBObjectManager.Instance.GetObject<ItemObject>("sumpter_horse"), this.BanditPartyTroopCount);
        this._questBanditMobileParty.IgnoreByOtherPartiesTill(this.QuestDueTime);
        SetPartyAiAction.GetActionForEngagingParty(this._questBanditMobileParty, this._questCaravanMobileParty);
        this._questBanditMobileParty.Ai.SetDoNotMakeNewDecisions(true);
        this.AddTrackedObject((ITrackableCampaignObject) this._questBanditMobileParty);
      }

      protected override void OnFinalize()
      {
        if (this._questCaravanMobileParty != null && this._questCaravanMobileParty.IsActive && this._questCaravanMobileParty.IsCustomParty)
        {
          this._questCaravanMobileParty.PartyComponent = (PartyComponent) new CaravanPartyComponent(this.QuestGiver.CurrentSettlement, this.QuestGiver, (Hero) null);
          this._questCaravanMobileParty.Ai.SetDoNotMakeNewDecisions(false);
          this._questCaravanMobileParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
        }
        if (this._questCaravanMobileParty != null)
          this.RemoveTrackedObject((ITrackableCampaignObject) this._questCaravanMobileParty);
        if (this._otherBanditParty == null || !this._otherBanditParty.IsActive)
          return;
        this._otherBanditParty.Ai.SetDoNotMakeNewDecisions(false);
        this._otherBanditParty.IgnoreByOtherPartiesTill(CampaignTime.Now);
      }

      protected override void OnTimedOut()
      {
        this.QuestGiver.AddPower(-5f);
        this.RelationshipChangeWithQuestGiver = -5;
        TraitLevelingHelper.OnIssueFailed(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -20)
        });
        this.QuestGiver.CurrentSettlement.Town.Prosperity -= 20f;
        this.AddLog(new TextObject("{=pUrSIed8}You have failed to escort the caravan to its destination."));
      }
    }

    public class EscortMerchantCaravanIssueTypeDefiner : SaveableTypeDefiner
    {
      public EscortMerchantCaravanIssueTypeDefiner()
        : base(450000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssue), 1);
        this.AddClassDefinition(typeof (EscortMerchantCaravanIssueBehavior.EscortMerchantCaravanIssueQuest), 2);
      }
    }
  }
}
