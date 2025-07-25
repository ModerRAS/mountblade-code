// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.FamilyFeudIssueBehavior
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
using TaleWorlds.CampaignSystem.GameMenus;
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
  public class FamilyFeudIssueBehavior : CampaignBehaviorBase
  {
    private const IssueBase.IssueFrequency FamilyFeudIssueFrequency = IssueBase.IssueFrequency.Rare;

    public override void RegisterEvents()
    {
      CampaignEvents.OnCheckForIssueEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnCheckForIssue));
    }

    public void OnCheckForIssue(Hero hero)
    {
      Settlement otherVillage;
      Hero otherNotable;
      if (this.ConditionsHold(hero, out otherVillage, out otherNotable))
      {
        KeyValuePair<Hero, Settlement> relatedObject = new KeyValuePair<Hero, Settlement>(otherNotable, otherVillage);
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(new PotentialIssueData.StartIssueDelegate(this.OnStartIssue), typeof (FamilyFeudIssueBehavior.FamilyFeudIssue), IssueBase.IssueFrequency.Rare, (object) relatedObject));
      }
      else
        Campaign.Current.IssueManager.AddPotentialIssueData(hero, new PotentialIssueData(typeof (FamilyFeudIssueBehavior.FamilyFeudIssue), IssueBase.IssueFrequency.Rare));
    }

    private bool ConditionsHold(
      Hero issueGiver,
      out Settlement otherVillage,
      out Hero otherNotable)
    {
      otherVillage = (Settlement) null;
      otherNotable = (Hero) null;
      if (!issueGiver.IsNotable || !issueGiver.IsRuralNotable || !issueGiver.CurrentSettlement.IsVillage)
        return false;
      Settlement bound = issueGiver.CurrentSettlement.Village.Bound;
      if (!bound.IsTown)
        return false;
      foreach (Village village in bound.BoundVillages.WhereQ<Village>((Func<Village, bool>) (x => x != issueGiver.CurrentSettlement.Village)))
      {
        Hero hero = village.Settlement.Notables.FirstOrDefaultQ<Hero>((Func<Hero, bool>) (y => y.IsRuralNotable && y.CanHaveQuestsOrIssues() && y.GetTraitLevel(DefaultTraits.Mercy) <= 0));
        if (hero != null)
        {
          otherVillage = village.Settlement;
          otherNotable = hero;
        }
      }
      return otherVillage != null;
    }

    private IssueBase OnStartIssue(in PotentialIssueData pid, Hero issueOwner)
    {
      KeyValuePair<Hero, Settlement> relatedObject = (KeyValuePair<Hero, Settlement>) pid.RelatedObject;
      return (IssueBase) new FamilyFeudIssueBehavior.FamilyFeudIssue(issueOwner, relatedObject.Key, relatedObject.Value);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public class FamilyFeudIssueTypeDefiner : SaveableTypeDefiner
    {
      public FamilyFeudIssueTypeDefiner()
        : base(1087000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (FamilyFeudIssueBehavior.FamilyFeudIssue), 1);
        this.AddClassDefinition(typeof (FamilyFeudIssueBehavior.FamilyFeudIssueQuest), 2);
      }
    }

    public class FamilyFeudIssueMissionBehavior : MissionLogic
    {
      private Action<Agent, Agent, int> OnAgentHitAction;

      public FamilyFeudIssueMissionBehavior(Action<Agent, Agent, int> agentHitAction)
      {
        this.OnAgentHitAction = agentHitAction;
      }

      public override void OnAgentHit(
        Agent affectedAgent,
        Agent affectorAgent,
        in MissionWeapon affectorWeapon,
        in Blow blow,
        in AttackCollisionData attackCollisionData)
      {
        Action<Agent, Agent, int> onAgentHitAction = this.OnAgentHitAction;
        if (onAgentHitAction == null)
          return;
        onAgentHitAction(affectedAgent, affectorAgent, blow.InflictedDamage);
      }
    }

    public class FamilyFeudIssue : IssueBase
    {
      private const int CompanionRequiredSkillLevel = 120;
      private const int QuestTimeLimit = 20;
      private const int IssueDuration = 30;
      private const int TroopTierForAlternativeSolution = 2;
      [SaveableField(10)]
      private Settlement _targetVillage;
      [SaveableField(20)]
      private Hero _targetNotable;

      public override IssueBase.AlternativeSolutionScaleFlag AlternativeSolutionScaleFlags
      {
        get => IssueBase.AlternativeSolutionScaleFlag.FailureRisk;
      }

      public override int AlternativeSolutionBaseNeededMenCount
      {
        get => 3 + MathF.Ceiling(5f * this.IssueDifficultyMultiplier);
      }

      protected override int AlternativeSolutionBaseDurationInDaysInternal
      {
        get => 3 + MathF.Ceiling(7f * this.IssueDifficultyMultiplier);
      }

      protected override int RewardGold
      {
        get => (int) (350.0 + 1500.0 * (double) this.IssueDifficultyMultiplier);
      }

      [SaveableProperty(30)]
      public override Hero CounterOfferHero { get; protected set; }

      public override int NeededInfluenceForLordSolution => 20;

      protected override int CompanionSkillRewardXP
      {
        get => (int) (500.0 + 700.0 * (double) this.IssueDifficultyMultiplier);
      }

      protected override TextObject AlternativeSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=zRJ1bQFO}{ISSUE_GIVER.LINK}, a landowner from {ISSUE_GIVER_SETTLEMENT}, told you about an incident that is about to turn into an ugly feud. One of the youngsters killed another in an accident and the victim's family refused blood money as compensation and wants blood. You decided to leave {COMPANION.LINK} with some men for {RETURN_DAYS} days to let things cool down. They should return with the reward of {REWARD_GOLD}{GOLD_ICON} denars as promised by {ISSUE_GIVER.LINK} after {RETURN_DAYS} days.");
          StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          parent.SetTextVariable("ISSUE_GIVER_SETTLEMENT", this.IssueOwner.CurrentSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          parent.SetTextVariable("REWARD_GOLD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      public override bool IsThereAlternativeSolution => true;

      public override bool IsThereLordSolution => true;

      public override TextObject IssueBriefByIssueGiver
      {
        get
        {
          TextObject briefByIssueGiver = new TextObject("{=7qPda0SA}Yes... We do have a problem. One of my relatives fell victim to his temper during a quarrel and killed a man from {TARGET_VILLAGE}.[ib:normal2][if:convo_dismayed] We offered to pay blood money but the family of the deceased have stubbornly refused it. As it turns out, the deceased is kin to {TARGET_NOTABLE}, an elder of this region and now the men of {TARGET_VILLAGE} have sworn to kill my relative.");
          briefByIssueGiver.SetTextVariable("TARGET_VILLAGE", this._targetVillage.Name);
          briefByIssueGiver.SetTextVariable("TARGET_NOTABLE", this._targetNotable.Name);
          return briefByIssueGiver;
        }
      }

      public override TextObject IssueAcceptByPlayer
      {
        get => new TextObject("{=XX3sWsVX}This sounds pretty serious. Go on.");
      }

      public override TextObject IssueQuestSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=mgUoXwZt}My family is concerned for the boy's life. He has gone hiding around the village commons. We need someone who can protect him until [ib:normal][if:convo_normal]{TARGET_NOTABLE.LINK} sees reason, accepts the blood money and ends the feud. We would be eternally grateful, if you can help my relative and take him with you for a while maybe.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          parent.SetTextVariable("TARGET_VILLAGE", this._targetVillage.Name);
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject explanationByIssueGiver = new TextObject("{=cDYz49kZ}You can keep my relative under your protection for a time until the calls for vengeance die down.[ib:closed][if:convo_pondering] Maybe you can leave one of your warrior companions and {ALTERNATIVE_TROOP_COUNT} men with him to protect him.");
          explanationByIssueGiver.SetTextVariable("ALTERNATIVE_TROOP_COUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          return explanationByIssueGiver;
        }
      }

      protected override TextObject LordSolutionStartLog
      {
        get
        {
          TextObject parent = new TextObject("{=oJt4bemH}{QUEST_GIVER.LINK}, a landowner from {QUEST_SETTLEMENT}, told you about an incident that is about to turn into an ugly feud. One young man killed another in an quarrel and the victim's family refused blood money compensation, demanding vengeance instead.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this.IssueOwner.CurrentSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      protected override TextObject LordSolutionCounterOfferRefuseLog
      {
        get
        {
          TextObject parent = new TextObject("{=JqN5BSjN}As the dispenser of justice in the district, you decided to allow {TARGET_NOTABLE.LINK} to take vengeance for {?TARGET_NOTABLE.GENDER}her{?}his{\\?} kinsman. You failed to protect the culprit as you promised. {QUEST_GIVER.LINK} is furious.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      protected override TextObject LordSolutionCounterOfferAcceptLog
      {
        get
        {
          TextObject parent = new TextObject("{=UxrXNSW7}As the ruler, you have let {TARGET_NOTABLE.LINK} to take {?TARGET_NOTABLE.GENDER}her{?}him{\\?} kinsman's vengeance and failed to protect the boy as you have promised to {QUEST_GIVER.LINK}. {QUEST_GIVER.LINK} is furious.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      public override TextObject IssueLordSolutionExplanationByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=tsjwrZCZ}I am sure that, as {?PLAYER.GENDER}lady{?}lord{\\?} of this district, you will not let these unlawful threats go unpunished. As the lord of the region, you can talk to {TARGET_NOTABLE.LINK} and force him to accept the blood money.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssuePlayerResponseAfterLordExplanation
      {
        get
        {
          return new TextObject("{=A3GfCPUb}I'm not sure about using my authority in this way. Is there any other way to solve this?");
        }
      }

      public override TextObject IssuePlayerResponseAfterAlternativeExplanation
      {
        get => new TextObject("{=8EaCJ2uw}What else can I do?");
      }

      public override TextObject IssueLordSolutionAcceptByPlayer
      {
        get
        {
          TextObject parent = new TextObject("{=Du31GKSb}As the magistrate of this district, I hereby order that blood money shall be accepted. This is a crime of passion, not malice. Tell {TARGET_NOTABLE.LINK} to take the silver or face my wrath!");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueLordSolutionResponseByIssueGiver
      {
        get
        {
          return new TextObject("{=xNyLPMnx}Thank you, my {?PLAYER.GENDER}lady{?}lord{\\?}, thank you.");
        }
      }

      public override TextObject IssueLordSolutionCounterOfferExplanationByOtherNpc
      {
        get
        {
          TextObject parent = new TextObject("{=vjk2q3OT}{?PLAYER.GENDER}Madam{?}Sir{\\?}, {TARGET_NOTABLE.LINK}'s nephew murdered one of my kinsman, [ib:aggressive][if:convo_bared_teeth]and it is our right to take vengeance on the murderer. Custom gives us the right of vengeance. Everyone must know that we are willing to avenge our sons, or others will think little of killing them. Does it do us good to be a clan of old men and women, drowning in silver, if all our sons are slain? Please sir, allow us to take vengeance. We promise we won't let this turn into a senseless blood feud.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          return parent;
        }
      }

      public override TextObject IssueLordSolutionCounterOfferBriefByOtherNpc
      {
        get
        {
          return new TextObject("{=JhbbB2dp}My {?PLAYER.GENDER}lady{?}lord{\\?}, may I have a word please?");
        }
      }

      public override TextObject IssueLordSolutionCounterOfferAcceptByPlayer
      {
        get
        {
          return new TextObject("{=TIVHLAjy}You may have a point. I hereby revoke my previous decision.");
        }
      }

      public override TextObject IssueLordSolutionCounterOfferAcceptResponseByOtherNpc
      {
        get => new TextObject("{=A9uSikTY}Thank you my {?PLAYER.GENDER}lady{?}lord{\\?}.");
      }

      public override TextObject IssueLordSolutionCounterOfferDeclineByPlayer
      {
        get
        {
          return new TextObject("{=Vs9DfZmJ}No. My word is final. You will have to take the blood money.");
        }
      }

      public override TextObject IssueLordSolutionCounterOfferDeclineResponseByOtherNpc
      {
        get
        {
          return new TextObject("{=3oaVUNdr}I hope you won't be [if:convo_disbelief]regret with your decision, my {?PLAYER.GENDER}lady{?}lord{\\?}.");
        }
      }

      public override TextObject IssueQuestSolutionAcceptByPlayer
      {
        get => new TextObject("{=VcfZdKcp}Don't worry, I will protect your relative.");
      }

      public override TextObject Title => new TextObject("{=ZpDQxmzJ}Family Feud");

      public override TextObject Description
      {
        get
        {
          TextObject parent = new TextObject("{=aSZvZRYC}A relative of {QUEST_GIVER.NAME} kills a relative of {TARGET_NOTABLE.NAME}. {QUEST_GIVER.NAME} offers to pay blood money for the crime but {TARGET_NOTABLE.NAME} wants revenge.");
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionAcceptByPlayer
      {
        get
        {
          TextObject solutionAcceptByPlayer = new TextObject("{=9ZngZ6W7}I will have one of my companions and {REQUIRED_TROOP_AMOUNT} of my men protect your kinsman for {RETURN_DAYS} days. ");
          solutionAcceptByPlayer.SetTextVariable("REQUIRED_TROOP_AMOUNT", this.GetTotalAlternativeSolutionNeededMenCount());
          solutionAcceptByPlayer.SetTextVariable("RETURN_DAYS", this.GetTotalAlternativeSolutionDurationInDays());
          return solutionAcceptByPlayer;
        }
      }

      public override TextObject IssueDiscussAlternativeSolution
      {
        get
        {
          TextObject to = new TextObject("{=n9QRnxbC}I have no doubt that {TARGET_NOTABLE.LINK} will have to accept[ib:closed][if:convo_grateful] the offer after seeing the boy with that many armed men behind him. Thank you, {?PLAYER.GENDER}madam{?}sir{\\?}, for helping to ending this without more blood.");
          to.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject);
          return to;
        }
      }

      public override TextObject IssueAlternativeSolutionResponseByIssueGiver
      {
        get
        {
          TextObject parent = new TextObject("{=MaGPKGHA}Thank you my {?PLAYER.GENDER}lady{?}lord{\\?}. [if:convo_pondering]I am sure your men will protect the boy and {TARGET_NOTABLE.LINK} will have nothing to do but to accept the blood money. I have to add, I'm ready to pay you {REWARD_GOLD}{GOLD_ICON} denars for your trouble.");
          StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          parent.SetTextVariable("REWARD_GOLD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      public override TextObject IssueAsRumorInSettlement
      {
        get
        {
          TextObject parent = new TextObject("{=lmVCRD4Q}I hope {QUEST_GIVER.LINK} [if:convo_disbelief]can work out that trouble with {?QUEST_GIVER.GENDER}her{?}his{\\?} kinsman.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          return parent;
        }
      }

      public override TextObject IssueAlternativeSolutionSuccessLog
      {
        get
        {
          TextObject parent = new TextObject("{=vS6oZJPA}Your companion {COMPANION.LINK} and your men returns with the news of their success. Apparently {TARGET_NOTABLE.LINK} and {?TARGET_NOTABLE.GENDER}her{?}his{\\?} thugs finds the culprit and tries to murder him but your men manages to drive them away. {COMPANION.LINK} tells you that they bloodied their noses so badly that they wouldn’t dare to try again. {QUEST_GIVER.LINK} is grateful and sends {?QUEST_GIVER.GENDER}her{?}his{\\?} regards with a purse full of {REWARD}{GOLD_ICON} denars.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.IssueOwner.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("COMPANION", this.AlternativeSolutionHero.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          parent.SetTextVariable("REWARD", this.RewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      public FamilyFeudIssue(Hero issueOwner, Hero targetNotable, Settlement targetVillage)
        : base(issueOwner, CampaignTime.DaysFromNow(30f))
      {
        this._targetNotable = targetNotable;
        this._targetVillage = targetVillage;
      }

      public override void OnHeroCanBeSelectedInInventoryInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonResrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanHavePartyRoleOrBeGovernorInfoIsRequested(
        Hero hero,
        ref bool result)
      {
        this.CommonResrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanLeadPartyInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonResrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonResrictionInfoIsRequested(hero, ref result);
      }

      private void CommonResrictionInfoIsRequested(Hero hero, ref bool result)
      {
        if (this._targetNotable != hero)
          return;
        result = false;
      }

      protected override float GetIssueEffectAmountInternal(IssueEffect issueEffect)
      {
        if (issueEffect == DefaultIssueEffects.SettlementSecurity)
          return -1f;
        return issueEffect == DefaultIssueEffects.IssueOwnerPower ? -0.1f : 0.0f;
      }

      public override (SkillObject, int) GetAlternativeSolutionSkill(Hero hero)
      {
        return (hero.GetSkillValue(DefaultSkills.Athletics) >= hero.GetSkillValue(DefaultSkills.Charm) ? DefaultSkills.Athletics : DefaultSkills.Charm, 120);
      }

      protected override void LordSolutionConsequenceWithAcceptCounterOffer()
      {
        TraitLevelingHelper.OnIssueSolvedThroughBetrayal(this.IssueOwner, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
        });
        this.RelationshipChangeWithIssueOwner = -10;
        ChangeRelationAction.ApplyPlayerRelation(this._targetNotable, 5);
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Security -= 5f;
      }

      protected override void LordSolutionConsequenceWithRefuseCounterOffer()
      {
        this.ApplySuccessRewards();
      }

      public override bool LordSolutionCondition(out TextObject explanation)
      {
        if (this.IssueOwner.CurrentSettlement.OwnerClan == Clan.PlayerClan)
        {
          explanation = TextObject.Empty;
          return true;
        }
        explanation = new TextObject("{=9y0zpKUF}You need to be the owner of this settlement!");
        return false;
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

      protected override void AlternativeSolutionEndWithSuccessConsequence()
      {
        this.ApplySuccessRewards();
        float randomFloat = MBRandom.RandomFloat;
        this.AlternativeSolutionHero.AddSkillXp((double) randomFloat > 0.33000001311302185 ? ((double) randomFloat > 0.6600000262260437 ? DefaultSkills.Polearm : DefaultSkills.TwoHanded) : DefaultSkills.OneHanded, (float) (int) (500.0 + 700.0 * (double) this.IssueDifficultyMultiplier));
      }

      protected override void AlternativeSolutionEndWithFailureConsequence()
      {
        this.RelationshipChangeWithIssueOwner = -10;
        ChangeRelationAction.ApplyPlayerRelation(this._targetNotable, 5);
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Security -= 5f;
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
      }

      private void ApplySuccessRewards()
      {
        GainRenownAction.Apply(Hero.MainHero, 1f);
        this.RelationshipChangeWithIssueOwner = 10;
        ChangeRelationAction.ApplyPlayerRelation(this._targetNotable, -5);
        this.IssueOwner.CurrentSettlement.Village.Bound.Town.Security += 10f;
      }

      protected override void AfterIssueCreation()
      {
        this.CounterOfferHero = this.IssueOwner.CurrentSettlement.Notables.FirstOrDefault<Hero>((Func<Hero, bool>) (x => x.CharacterObject.IsHero && x.CharacterObject.HeroObject != this.IssueOwner));
      }

      protected override void OnGameLoad()
      {
      }

      protected override void HourlyTick()
      {
      }

      protected override QuestBase GenerateIssueQuest(string questId)
      {
        return (QuestBase) new FamilyFeudIssueBehavior.FamilyFeudIssueQuest(questId, this.IssueOwner, CampaignTime.DaysFromNow(20f), this._targetVillage, this._targetNotable, this.RewardGold);
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
        if (FactionManager.IsAtWarAgainstFaction(issueGiver.CurrentSettlement.MapFaction, Hero.MainHero.MapFaction))
          flag |= IssueBase.PreconditionFlags.AtWar;
        return flag == IssueBase.PreconditionFlags.None;
      }

      public override bool IssueStayAliveConditions()
      {
        if (this._targetNotable == null || !this._targetNotable.IsActive)
          return false;
        if (this.CounterOfferHero == null)
          return true;
        return this.CounterOfferHero.IsActive && this.CounterOfferHero.CurrentSettlement == this.IssueSettlement;
      }

      protected override void CompleteIssueWithTimedOutConsequences()
      {
      }

      internal static void AutoGeneratedStaticCollectObjectsFamilyFeudIssue(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._targetVillage);
        collectedObjects.Add((object) this._targetNotable);
        collectedObjects.Add((object) this.CounterOfferHero);
      }

      internal static object AutoGeneratedGetMemberValueCounterOfferHero(object o)
      {
        return (object) ((IssueBase) o).CounterOfferHero;
      }

      internal static object AutoGeneratedGetMemberValue_targetVillage(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssue) o)._targetVillage;
      }

      internal static object AutoGeneratedGetMemberValue_targetNotable(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssue) o)._targetNotable;
      }
    }

    public class FamilyFeudIssueQuest : QuestBase
    {
      private const int CustomCulpritAgentHealth = 350;
      private const int CustomTargetNotableAgentHealth = 350;
      public const string CommonAreaTag = "alley_2";
      [SaveableField(10)]
      private readonly Settlement _targetSettlement;
      [SaveableField(20)]
      private Hero _targetNotable;
      [SaveableField(30)]
      private Hero _culprit;
      [SaveableField(40)]
      private bool _culpritJoinedPlayerParty;
      [SaveableField(50)]
      private bool _checkForMissionEvents;
      [SaveableField(70)]
      private int _rewardGold;
      private bool _isCulpritDiedInMissionFight;
      private bool _isPlayerKnockedOutMissionFight;
      private bool _isNotableKnockedDownInMissionFight;
      private bool _conversationAfterFightIsDone;
      private bool _persuationInDoneAndSuccessfull;
      private bool _playerBetrayedCulprit;
      private Agent _notableAgent;
      private Agent _culpritAgent;
      private CharacterObject _notableGangsterCharacterObject;
      private List<LocationCharacter> _notableThugs;
      private PersuasionTask _task;
      private const PersuasionDifficulty Difficulty = PersuasionDifficulty.MediumHard;

      public override bool IsRemainingTimeHidden => false;

      private bool FightEnded
      {
        get
        {
          return this._isCulpritDiedInMissionFight || this._isNotableKnockedDownInMissionFight || this._persuationInDoneAndSuccessfull;
        }
      }

      public override TextObject Title => new TextObject("{=ZpDQxmzJ}Family Feud");

      private TextObject PlayerStartsQuestLogText1
      {
        get
        {
          TextObject parent = new TextObject("{=rjHQpVDZ}{QUEST_GIVER.LINK} a landowner from {QUEST_GIVER_SETTLEMENT}, told you about an incident that is about to turn into an ugly feud. One of the youngsters killed another during a quarrel and the victim's family refuses the blood money as compensation and wants blood.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("QUEST_GIVER_SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject PlayerStartsQuestLogText2
      {
        get
        {
          TextObject parent = new TextObject("{=fgRq7kF2}You agreed to talk to {CULPRIT.LINK} in {QUEST_GIVER_SETTLEMENT} first and convince him to go to {TARGET_NOTABLE.LINK} with you in {TARGET_SETTLEMENT} and mediate the issue between them peacefully and end unnecessary bloodshed. {QUEST_GIVER.LINK} said {?QUEST_GIVER.GENDER}she{?}he{\\?} will pay you {REWARD_GOLD} once the boy is safe again.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          parent.SetTextVariable("QUEST_GIVER_SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          parent.SetTextVariable("REWARD_GOLD", this._rewardGold);
          return parent;
        }
      }

      private TextObject SuccessQuestSolutionLogText
      {
        get
        {
          TextObject parent = new TextObject("{=KJ61SXEU}You have successfully protected {CULPRIT.LINK} from harm as you have promised. {QUEST_GIVER.LINK} is grateful for your service and sends his regards with a purse full of {REWARD_GOLD}{GOLD_ICON} denars for your trouble.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          parent.SetTextVariable("REWARD_GOLD", this._rewardGold);
          parent.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          return parent;
        }
      }

      private TextObject CulpritJoinedPlayerPartyLogText
      {
        get
        {
          TextObject parent = new TextObject("{=s5fXZf2f}You have convinced {CULPRIT.LINK} to go to {TARGET_SETTLEMENT} to face {TARGET_NOTABLE.LINK} to try to solve this issue peacefully. He agreed on the condition that you protect him from his victim's angry relatives.");
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject QuestGiverVillageRaidedBeforeTalkingToCulpritCancel
      {
        get
        {
          TextObject parent = new TextObject("{=gJG0xmAq}{QUEST_GIVER.LINK}'s village {QUEST_SETTLEMENT} was raided. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          parent.SetTextVariable("QUEST_SETTLEMENT", this.QuestGiver.CurrentSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject TargetVillageRaidedBeforeTalkingToCulpritCancel
      {
        get
        {
          TextObject parent = new TextObject("{=WqY4nvHc}{TARGET_NOTABLE.LINK}'s village {TARGET_SETTLEMENT} was raided. Your agreement with {QUEST_GIVER.LINK} is canceled.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          parent.SetTextVariable("TARGET_SETTLEMENT", this._targetSettlement.EncyclopediaLinkWithName);
          return parent;
        }
      }

      private TextObject CulpritDiedQuestFail
      {
        get
        {
          TextObject parent = new TextObject("{=6zcG8eng}You tried to defend {CULPRIT.LINK} but you were overcome. {NOTABLE.LINK} took {?NOTABLE.GENDER}her{?}his{\\?} revenge. You failed to protect {CULPRIT.LINK} as promised to {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}she{?}he{\\?} is furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("NOTABLE", this._targetNotable.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject PlayerDiedInNotableBattle
      {
        get
        {
          TextObject parent = new TextObject("{=kG92fjCY}You fell unconscious while defending {CULPRIT.LINK}. {TARGET_NOTABLE.LINK} has taken revenge. You failed to protect {CULPRIT.LINK} as you promised {QUEST_GIVER.LINK}. {?QUEST_GIVER.GENDER}She{?}He{\\?} is furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject FailQuestLogText
      {
        get
        {
          TextObject parent = new TextObject("{=LWjIbTBi}You failed to protect {CULPRIT.LINK} as you promised {QUEST_GIVER.LINK}. {QUEST_GIVER.LINK} is furious.");
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          return parent;
        }
      }

      private TextObject CulpritNoLongerAClanMember
      {
        get
        {
          TextObject parent = new TextObject("{=wWrEvkuj}{CULPRIT.LINK} is no longer a member of your clan. Your agreement with {QUEST_GIVER.LINK} was terminated.");
          StringHelpers.SetCharacterProperties("CULPRIT", this._culprit.CharacterObject, parent);
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, parent);
          return parent;
        }
      }

      public FamilyFeudIssueQuest(
        string questId,
        Hero questGiver,
        CampaignTime duration,
        Settlement targetSettlement,
        Hero targetHero,
        int rewardGold)
        : base(questId, questGiver, duration, rewardGold)
      {
        this._targetSettlement = targetSettlement;
        this._targetNotable = targetHero;
        this._culpritJoinedPlayerParty = false;
        this._checkForMissionEvents = false;
        this._culprit = HeroCreator.CreateSpecialHero(MBObjectManager.Instance.GetObject<CharacterObject>("townsman_" + targetSettlement.Culture.StringId), targetSettlement);
        this._culprit.SetNewOccupation(Occupation.Wanderer);
        ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>("pugio");
        this._culprit.CivilianEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(itemObject));
        this._culprit.BattleEquipment.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, new EquipmentElement(itemObject));
        this._notableGangsterCharacterObject = questGiver.CurrentSettlement.MapFaction.Culture.GangleaderBodyguard;
        this._rewardGold = rewardGold;
        this.InitializeQuestDialogs();
        this.SetDialogs();
        this.InitializeQuestOnCreation();
      }

      private void InitializeQuestDialogs()
      {
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCulpritDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableThugDialogFlow(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowBeforeTalkingToCulprit(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowAfterTalkingToCulprit(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowAfterKillingCulprit(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowAfterPlayerBetrayCulprit(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCulpritDialogFlowAfterCulpritJoin(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowAfterNotableKnowdown(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetNotableDialogFlowAfterQuestEnd(), (object) this);
        Campaign.Current.ConversationManager.AddDialogFlow(this.GetCulpritDialogFlowAfterQuestEnd(), (object) this);
      }

      protected override void InitializeQuestOnGameLoad()
      {
        this.SetDialogs();
        this.InitializeQuestDialogs();
        this._notableGangsterCharacterObject = MBObjectManager.Instance.GetObject<CharacterObject>("gangster_1");
      }

      protected override void HourlyTick()
      {
      }

      private DialogFlow GetNotableDialogFlowBeforeTalkingToCulprit()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=dpTHWqwv}Are you the {?PLAYER.GENDER}woman{?}man{\\?} who thinks our blood is cheap, that we will accept silver for the life of one of our own?")).Condition(new ConversationSentence.OnConditionDelegate(this.notable_culprit_is_not_near_on_condition)).NpcLine(new TextObject("{=Vd22iVGE}Well {?PLAYER.GENDER}lady{?}sir{\\?}, sorry to disappoint you, but our people have some self-respect.")).PlayerLine(new TextObject("{=a3AFjfsU}We will see. ")).NpcLine(new TextObject("{=AeJqCMJc}Yes, you will see. Good day to you. ")).CloseDialog();
      }

      private DialogFlow GetNotableDialogFlowAfterKillingCulprit()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=108Dchvt}Stop! We don't need to fight any longer. We have no quarrel with you as justice has been served.")).Condition((ConversationSentence.OnConditionDelegate) (() => this._isCulpritDiedInMissionFight && Hero.OneToOneConversationHero == this._targetNotable && !this._playerBetrayedCulprit)).NpcLine(new TextObject("{=NMrzr7Me}Now, leave peacefully...")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.CulpritDiedInNotableFightFail))).CloseDialog();
      }

      private DialogFlow GetNotableDialogFlowAfterPlayerBetrayCulprit()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=4aiabOd4}I knew you are a reasonable {?PLAYER.GENDER}woman{?}man{\\?}.")).Condition((ConversationSentence.OnConditionDelegate) (() => this._isCulpritDiedInMissionFight && this._playerBetrayedCulprit && Hero.OneToOneConversationHero == this._targetNotable)).NpcLine(new TextObject("{=NMrzr7Me}Now, leave peacefully...")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.CulpritDiedInNotableFightFail))).CloseDialog();
      }

      private DialogFlow GetCulpritDialogFlowAfterCulpritJoin()
      {
        TextObject textObject1 = new TextObject("{=56ynu2bW}Yes, {?PLAYER.GENDER}milady{?}sir{\\?}.");
        TextObject textObject2 = new TextObject("{=c452Kevh}Well I'm anxious, but I am in your hands now. I trust you will protect me {?PLAYER.GENDER}milady{?}sir{\\?}.");
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject1);
        StringHelpers.SetCharacterProperties("PLAYER", CharacterObject.PlayerCharacter, textObject2);
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject1).Condition((ConversationSentence.OnConditionDelegate) (() => !this.FightEnded && this._culpritJoinedPlayerParty && Hero.OneToOneConversationHero == this._culprit)).PlayerLine(new TextObject("{=p1ETQbzg}Just checking on you.")).NpcLine(textObject2).CloseDialog();
      }

      private DialogFlow GetNotableDialogFlowAfterQuestEnd()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=UBFS1JLj}I have no problem with the boy anymore,[ib:closed][if:convo_annoyed] okay? Just leave me alone.")).Condition((ConversationSentence.OnConditionDelegate) (() => this.FightEnded && !this._persuationInDoneAndSuccessfull && Hero.OneToOneConversationHero == this._targetNotable && !this._playerBetrayedCulprit)).CloseDialog().NpcLine(new TextObject("{=adbQR9j0}I got my gold, you got your boy.[if:convo_bored2] Now leave me alone...")).Condition((ConversationSentence.OnConditionDelegate) (() => this.FightEnded && this._persuationInDoneAndSuccessfull && Hero.OneToOneConversationHero == this._targetNotable && !this._playerBetrayedCulprit)).CloseDialog();
      }

      private DialogFlow GetCulpritDialogFlowAfterQuestEnd()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=OybG76Kf}Thank you for saving me, sir.[ib:normal][if:convo_astonished] I won't forget what you did here today.")).Condition((ConversationSentence.OnConditionDelegate) (() => this.FightEnded && Hero.OneToOneConversationHero == this._culprit)).CloseDialog();
      }

      private DialogFlow GetNotableDialogFlowAfterNotableKnowdown()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=c6GbRQlg}Stop. We don’t need to fight any longer. [ib:closed][if:convo_insulted]You have made your point. We will accept the blood money."), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsMainAgent(agent))).Condition(new ConversationSentence.OnConditionDelegate(this.multi_character_conversation_condition_after_fight)).Consequence(new ConversationSentence.OnConsequenceDelegate(this.multi_character_conversation_consequence_after_fight)).NpcLine(new TextObject("{=pS0bBRjt}You! Go to your family and tell [if:convo_angry]them to send us the blood money."), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent))).NpcLine(new TextObject("{=nxs2U0Yk}Leave now and never come back! [if:convo_furious]If we ever see you here we will kill you."), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent))).NpcLine("{=udD7Y7mO}Thank you, my {?PLAYER.GENDER}lady{?}sir{\\?}, for protecting me. I will go and tell {ISSUE_GIVER.LINK} of your success here.", (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsMainAgent(agent))).Condition(new ConversationSentence.OnConditionDelegate(this.AfterNotableKnowdownEndingCondition)).PlayerLine(new TextObject("{=g8qb3Ame}Thank you."), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent))).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.PlayerAndCulpritKnockedDownNotableQuestSuccess))).CloseDialog();
      }

      private bool AfterNotableKnowdownEndingCondition()
      {
        StringHelpers.SetCharacterProperties("ISSUE_GIVER", this.QuestGiver.CharacterObject);
        return true;
      }

      private void PlayerAndCulpritKnockedDownNotableQuestSuccess()
      {
        this._conversationAfterFightIsDone = true;
        this.HandleAgentBehaviorAfterQuestConversations();
      }

      private void HandleAgentBehaviorAfterQuestConversations()
      {
        foreach (AccompanyingCharacter accompanyingCharacter in PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer)
        {
          if (accompanyingCharacter.LocationCharacter.Character == this._culprit.CharacterObject && this._culpritAgent.IsActive())
          {
            accompanyingCharacter.LocationCharacter.SpecialTargetTag = "npc_common";
            accompanyingCharacter.LocationCharacter.CharacterRelation = LocationCharacter.CharacterRelations.Neutral;
            this._culpritAgent.SetMortalityState(Agent.MortalityState.Invulnerable);
            this._culpritAgent.SetTeam(Team.Invalid, false);
            DailyBehaviorGroup behaviorGroup = this._culpritAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
            behaviorGroup.AddBehavior<WalkingBehavior>();
            behaviorGroup.RemoveBehavior<FollowAgentBehavior>();
            this._culpritAgent.ResetEnemyCaches();
            this._culpritAgent.InvalidateTargetAgent();
            this._culpritAgent.InvalidateAIWeaponSelections();
            this._culpritAgent.SetWatchState(Agent.WatchState.Patrolling);
            if (this._notableAgent != null)
            {
              this._notableAgent.ResetEnemyCaches();
              this._notableAgent.InvalidateTargetAgent();
              this._notableAgent.InvalidateAIWeaponSelections();
              this._notableAgent.SetWatchState(Agent.WatchState.Patrolling);
            }
            this._culpritAgent.TryToSheathWeaponInHand(Agent.HandIndex.OffHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
            this._culpritAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimationUninterruptible);
          }
        }
        Mission.Current.SetMissionMode(MissionMode.StartUp, false);
      }

      private void ApplySuccessConsequences()
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this._rewardGold);
        ++Hero.MainHero.Clan.Renown;
        this.RelationshipChangeWithQuestGiver = 10;
        ChangeRelationAction.ApplyPlayerRelation(this._targetNotable, -5);
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security += 10f;
        this.CompleteQuestWithSuccess();
      }

      private bool multi_character_conversation_condition_after_fight()
      {
        return !this._conversationAfterFightIsDone && Hero.OneToOneConversationHero == this._targetNotable && this._isNotableKnockedDownInMissionFight;
      }

      private void multi_character_conversation_consequence_after_fight()
      {
        if (Mission.Current.GetMissionBehavior<MissionConversationLogic>() != null)
          Campaign.Current.ConversationManager.AddConversationAgents((IEnumerable<IAgent>) new List<Agent>()
          {
            this._culpritAgent
          }, true);
        this._conversationAfterFightIsDone = true;
      }

      private DialogFlow GetNotableDialogFlowAfterTalkingToCulprit()
      {
        DialogFlow dialog = DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=nh7a3Nog}Well well. Who did you bring to see us? [ib:confident][if:convo_irritable]Did he bring his funeral shroud with him? I hope so. He's not leaving here alive."), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent))).Condition(new ConversationSentence.OnConditionDelegate(this.multi_character_conversation_on_condition)).NpcLine(new TextObject("{=RsOmvdmU}We have come to talk! Just listen to us please![if:convo_shocked]"), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent))).NpcLine("{=JUjvu4XL}I knew we'd find you eventually. Now you will face justice![if:convo_evil_smile]", (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsCulprit(agent))).PlayerLine("{=UQyCoQCY}Wait! This lad is now under my protection. We have come to talk in peace..", (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent))).NpcLine("{=7AiP4BwY}What there is to talk about? [if:convo_confused_annoyed]This bastard murdered one of my kinsman, and it is our right to take vengeance on him!", (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsTargetNotable(agent)), (ConversationSentence.OnMultipleConversationConsequenceDelegate) (agent => this.IsMainAgent(agent))).BeginPlayerOptions().PlayerOption(new TextObject("{=2iVytG2y}I am not convinced. I will protect the accused until you see reason.")).NpcLine(new TextObject("{=4HokUcma}You will regret pushing [if:convo_very_stern]your nose into issues that do not concern you!")).NpcLine(new TextObject("{=vjOkDM6C}If you defend a murderer [ib:warrior][if:convo_furious]then you die like a murderer. Boys, kill them all!")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => this.StartFightWithNotableGang(false)))).CloseDialog().PlayerOption(new TextObject("{=boAcQxVV}You're breaking the law.")).Condition((ConversationSentence.OnConditionDelegate) (() => this._task == null || !this._task.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)))).GotoDialogState("start_notable_family_feud_persuasion").PlayerOption(new TextObject("{=J5cQPqGQ}You are right. You are free to deliver justice as you see fit.")).NpcLine(new TextObject("{=aRPLW15x}Thank you. I knew you are a reasonable[ib:aggressive][if:convo_evil_smile] {?PLAYER.GENDER}woman{?}man{\\?}.")).NpcLine(new TextObject("{=k5R4qGtL}What? Are you just going [ib:nervous][if:convo_nervous2]to leave me here to be killed? My kin will never forget this!"), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsCulprit), new ConversationSentence.OnMultipleConversationConsequenceDelegate(this.IsMainAgent)).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() =>
        {
          this._playerBetrayedCulprit = true;
          this.StartFightWithNotableGang(this._playerBetrayedCulprit);
        }))).CloseDialog();
        this.AddPersuasionDialogs(dialog);
        return dialog;
      }

      private bool IsMainAgent(IAgent agent) => agent == Mission.Current.MainAgent;

      private bool IsTargetNotable(IAgent agent)
      {
        return agent.Character == this._targetNotable.CharacterObject;
      }

      private bool IsCulprit(IAgent agent) => agent.Character == this._culprit.CharacterObject;

      private bool notable_culprit_is_not_near_on_condition()
      {
        return Hero.OneToOneConversationHero == this._targetNotable && Mission.Current != null && !this.FightEnded && Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 10f, new MBList<Agent>()).All<Agent>((Func<Agent, bool>) (a => a.Character != this._culprit.CharacterObject));
      }

      private bool multi_character_conversation_on_condition()
      {
        if (Hero.OneToOneConversationHero != this._targetNotable || Mission.Current == null || this.FightEnded)
          return false;
        MBList<Agent> nearbyAgents = Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 10f, new MBList<Agent>());
        if (nearbyAgents.IsEmpty<Agent>() || nearbyAgents.All<Agent>((Func<Agent, bool>) (a => a.Character != this._culprit.CharacterObject)))
          return false;
        foreach (Agent agent in (List<Agent>) nearbyAgents)
        {
          if (agent.Character == this._culprit.CharacterObject)
          {
            this._culpritAgent = agent;
            if (Mission.Current.GetMissionBehavior<MissionConversationLogic>() != null)
            {
              Campaign.Current.ConversationManager.AddConversationAgents((IEnumerable<IAgent>) new List<Agent>()
              {
                this._culpritAgent
              }, true);
              break;
            }
            break;
          }
        }
        return true;
      }

      private void AddPersuasionDialogs(DialogFlow dialog)
      {
        dialog.AddDialogLine("family_feud_notable_persuasion_check_accepted", "start_notable_family_feud_persuasion", "family_feud_notable_persuasion_start_reservation", "{=6P1ruzsC}Maybe...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.persuasion_start_with_notable_on_consequence), (object) this);
        dialog.AddDialogLine("family_feud_notable_persuasion_failed", "family_feud_notable_persuasion_start_reservation", "persuation_failed", "{=!}{FAILED_PERSUASION_LINE}", new ConversationSentence.OnConditionDelegate(this.persuasion_failed_with_family_feud_notable_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_failed_with_notable_on_consequence), (object) this);
        dialog.AddDialogLine("family_feud_notable_persuasion_rejected", "persuation_failed", "close_window", "{=vjOkDM6C}If you defend a murderer [ib:warrior][if:convo_furious]then you die like a murderer. Boys, kill them all!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.persuasion_failed_with_notable_start_fight_on_consequence), (object) this);
        dialog.AddDialogLine("family_feud_notable_persuasion_attempt", "family_feud_notable_persuasion_start_reservation", "family_feud_notable_persuasion_select_option", "{CONTINUE_PERSUASION_LINE}", (ConversationSentence.OnConditionDelegate) (() => !this.persuasion_failed_with_family_feud_notable_on_condition()), (ConversationSentence.OnConsequenceDelegate) null, (object) this);
        dialog.AddDialogLine("family_feud_notable_persuasion_success", "family_feud_notable_persuasion_start_reservation", "close_window", "{=qIQbIjVS}All right! I spare the boy's life. Now get out of my sight[ib:closed][if:convo_nonchalant]", new ConversationSentence.OnConditionDelegate(ConversationManager.GetPersuasionProgressSatisfied), new ConversationSentence.OnConsequenceDelegate(this.persuasion_complete_with_notable_on_consequence), (object) this, int.MaxValue);
        DialogFlow dialogFlow1 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate1 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_1_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate1 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_1_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate1 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_1);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate1 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_1_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate2 = persuasionOptionDelegate1;
        dialogFlow1.AddPlayerLine("family_feud_notable_persuasion_select_option_1", "family_feud_notable_persuasion_select_option", "family_feud_notable_persuasion_selected_option_response", "{=!}{FAMILY_FEUD_PERSUADE_ATTEMPT_1}", conditionDelegate1, consequenceDelegate1, (object) this, clickableConditionDelegate: clickableConditionDelegate1, persuasionOptionDelegate: persuasionOptionDelegate2);
        DialogFlow dialogFlow2 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate2 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_2_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate2 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_2_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate3 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_2);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate2 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_2_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate4 = persuasionOptionDelegate3;
        dialogFlow2.AddPlayerLine("family_feud_notable_persuasion_select_option_2", "family_feud_notable_persuasion_select_option", "family_feud_notable_persuasion_selected_option_response", "{=!}{FAMILY_FEUD_PERSUADE_ATTEMPT_2}", conditionDelegate2, consequenceDelegate2, (object) this, clickableConditionDelegate: clickableConditionDelegate2, persuasionOptionDelegate: persuasionOptionDelegate4);
        DialogFlow dialogFlow3 = dialog;
        ConversationSentence.OnConditionDelegate conditionDelegate3 = new ConversationSentence.OnConditionDelegate(this.persuasion_select_option_3_on_condition);
        ConversationSentence.OnConsequenceDelegate consequenceDelegate3 = new ConversationSentence.OnConsequenceDelegate(this.persuasion_select_option_3_on_consequence);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate5 = new ConversationSentence.OnPersuasionOptionDelegate(this.persuasion_setup_option_3);
        ConversationSentence.OnClickableConditionDelegate clickableConditionDelegate3 = new ConversationSentence.OnClickableConditionDelegate(this.persuasion_clickable_option_3_on_condition);
        ConversationSentence.OnPersuasionOptionDelegate persuasionOptionDelegate6 = persuasionOptionDelegate5;
        dialogFlow3.AddPlayerLine("family_feud_notable_persuasion_select_option_3", "family_feud_notable_persuasion_select_option", "family_feud_notable_persuasion_selected_option_response", "{=!}{FAMILY_FEUD_PERSUADE_ATTEMPT_3}", conditionDelegate3, consequenceDelegate3, (object) this, clickableConditionDelegate: clickableConditionDelegate3, persuasionOptionDelegate: persuasionOptionDelegate6);
        dialog.AddDialogLine("family_feud_notable_persuasion_select_option_reaction", "family_feud_notable_persuasion_selected_option_response", "family_feud_notable_persuasion_start_reservation", "{=D0xDRqvm}{PERSUASION_REACTION}", new ConversationSentence.OnConditionDelegate(this.persuasion_selected_option_response_on_condition), new ConversationSentence.OnConsequenceDelegate(this.persuasion_selected_option_response_on_consequence), (object) this);
      }

      private void persuasion_complete_with_notable_on_consequence()
      {
        ConversationManager.EndPersuasion();
        this._persuationInDoneAndSuccessfull = true;
        this.HandleAgentBehaviorAfterQuestConversations();
      }

      private void persuasion_failed_with_notable_on_consequence()
      {
        ConversationManager.EndPersuasion();
      }

      private void persuasion_failed_with_notable_start_fight_on_consequence()
      {
        Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => this.StartFightWithNotableGang(false));
      }

      private bool persuasion_failed_with_family_feud_notable_on_condition()
      {
        MBTextManager.SetTextVariable("CONTINUE_PERSUASION_LINE", "{=7B7BhVhV}Let's see what you will come up with...[if:convo_confused_annoyed]", false);
        if (this._task.Options.Any<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)))
          MBTextManager.SetTextVariable("CONTINUE_PERSUASION_LINE", "{=wvbiyZfp}What else do you have to say?[if:convo_confused_annoyed]", false);
        if (!this._task.Options.All<PersuasionOptionArgs>((Func<PersuasionOptionArgs, bool>) (x => x.IsBlocked)) || ConversationManager.GetPersuasionProgressSatisfied())
          return false;
        MBTextManager.SetTextVariable("FAILED_PERSUASION_LINE", this._task.FinalFailLine, false);
        return true;
      }

      private void persuasion_selected_option_response_on_consequence()
      {
        Tuple<PersuasionOptionArgs, PersuasionOptionResult> tuple = ConversationManager.GetPersuasionChosenOptions().Last<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>();
        float difficulty = Campaign.Current.Models.PersuasionModel.GetDifficulty(PersuasionDifficulty.MediumHard);
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

      private void persuasion_start_with_notable_on_consequence()
      {
        this._task = this.GetPersuasionTask();
        ConversationManager.StartPersuasion(2f, 1f, 0.0f, 2f, 2f, 0.0f, PersuasionDifficulty.MediumHard);
      }

      private bool persuasion_select_option_1_on_condition()
      {
        if (this._task.Options.Count <= 0)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(0), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(0).Line);
        MBTextManager.SetTextVariable("FAMILY_FEUD_PERSUADE_ATTEMPT_1", text, false);
        return true;
      }

      private bool persuasion_select_option_2_on_condition()
      {
        if (this._task.Options.Count <= 1)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(1), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(1).Line);
        MBTextManager.SetTextVariable("FAMILY_FEUD_PERSUADE_ATTEMPT_2", text, false);
        return true;
      }

      private bool persuasion_select_option_3_on_condition()
      {
        if (this._task.Options.Count <= 2)
          return false;
        TextObject text = new TextObject("{=bSo9hKwr}{PERSUASION_OPTION_LINE} {SUCCESS_CHANCE}");
        text.SetTextVariable("SUCCESS_CHANCE", PersuasionHelper.ShowSuccess(this._task.Options.ElementAt<PersuasionOptionArgs>(2), false));
        text.SetTextVariable("PERSUASION_OPTION_LINE", this._task.Options.ElementAt<PersuasionOptionArgs>(2).Line);
        MBTextManager.SetTextVariable("FAMILY_FEUD_PERSUADE_ATTEMPT_3", text, false);
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

      private bool persuasion_clickable_option_1_on_condition(out TextObject hintText)
      {
        hintText = new TextObject("{=9ACJsI6S}Blocked");
        if (!this._task.Options.Any<PersuasionOptionArgs>())
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

      private PersuasionTask GetPersuasionTask()
      {
        PersuasionTask persuasionTask = new PersuasionTask(0);
        persuasionTask.FinalFailLine = new TextObject("{=rzGqa5oD}Revenge will be taken. Save your breath for the fight...");
        persuasionTask.TryLaterLine = new TextObject("{=!}IF YOU SEE THIS. CALL CAMPAIGN TEAM.");
        persuasionTask.SpokenLine = new TextObject("{=6P1ruzsC}Maybe...");
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Calculating, TraitEffect.Positive, PersuasionArgumentStrength.Easy, false, new TextObject("{=K9i5SaDc}Blood money is appropriate for a crime of passion. But you kill this boy in cold blood, you will be a real murderer in the eyes of the law, and will no doubt die.")));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Roguery, DefaultTraits.Valor, TraitEffect.Positive, PersuasionArgumentStrength.ExtremelyHard, true, new TextObject("{=FUL8TcYa}I promised to protect the boy at the cost of my life. If you try to harm him, you will bleed for it."), canBlockOtherOption: true));
        persuasionTask.AddOptionToTask(new PersuasionOptionArgs(DefaultSkills.Charm, DefaultTraits.Mercy, TraitEffect.Positive, PersuasionArgumentStrength.Normal, false, new TextObject("{=Ytws5O9S}Some day you may wish to save the life of one of your sons through blood money. If you refuse mercy, mercy may be refused you.")));
        return persuasionTask;
      }

      private void StartFightWithNotableGang(bool playerBetrayedCulprit)
      {
        this._notableAgent = (Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents[0];
        List<Agent> playerSideAgents = new List<Agent>()
        {
          this._culpritAgent
        };
        List<Agent> opponentSideAgents = new List<Agent>()
        {
          this._notableAgent
        };
        foreach (Agent nearbyAgent in (List<Agent>) Mission.Current.GetNearbyAgents(Agent.Main.Position.AsVec2, 30f, new MBList<Agent>()))
        {
          if ((CharacterObject) nearbyAgent.Character == this._notableGangsterCharacterObject)
            opponentSideAgents.Add(nearbyAgent);
        }
        if (playerBetrayedCulprit)
        {
          Agent.Main.SetTeam(Mission.Current.SpectatorTeam, false);
        }
        else
        {
          playerSideAgents.Add(Agent.Main);
          foreach (Agent agent in opponentSideAgents)
            agent.Defensiveness = 2f;
          this._culpritAgent.Health = 350f;
          this._culpritAgent.BaseHealthLimit = 350f;
          this._culpritAgent.HealthLimit = 350f;
        }
        this._notableAgent.Health = 350f;
        this._notableAgent.BaseHealthLimit = 350f;
        this._notableAgent.HealthLimit = 350f;
        Mission.Current.GetMissionBehavior<MissionFightHandler>().StartCustomFight(playerSideAgents, opponentSideAgents, false, false, (MissionFightHandler.OnFightEndDelegate) (isPlayerSideWon =>
        {
          if (this._isNotableKnockedDownInMissionFight)
          {
            if (Agent.Main != null && (double) this._notableAgent.Position.DistanceSquared(Agent.Main.Position) < 49.0)
              MissionConversationLogic.Current.StartConversation(this._notableAgent, false);
            else
              this.PlayerAndCulpritKnockedDownNotableQuestSuccess();
          }
          else if (Agent.Main != null && (double) this._notableAgent.Position.DistanceSquared(Agent.Main.Position) < 49.0)
            MissionConversationLogic.Current.StartConversation(this._notableAgent, false);
          else
            this.CulpritDiedInNotableFightFail();
        }));
      }

      private void OnAgentHit(Agent affectedAgent, Agent affectorAgent, int damage)
      {
        if (!this.IsOngoing || this._persuationInDoneAndSuccessfull || (double) affectedAgent.Health > (double) damage || Agent.Main == null)
          return;
        if (affectedAgent == this._notableAgent && !this._isNotableKnockedDownInMissionFight)
        {
          affectedAgent.Health = 50f;
          this._isNotableKnockedDownInMissionFight = true;
          Mission.Current.GetMissionBehavior<MissionFightHandler>().EndFight();
        }
        if (affectedAgent != this._culpritAgent || this._isCulpritDiedInMissionFight)
          return;
        Blow b = new Blow()
        {
          DamageCalculated = true,
          BaseMagnitude = (float) damage,
          InflictedDamage = damage,
          DamagedPercentage = 1f,
          OwnerId = affectorAgent != null ? affectorAgent.Index : -1
        };
        affectedAgent.Die(b);
        this._isCulpritDiedInMissionFight = true;
      }

      protected override void SetDialogs()
      {
        this.OfferDialogFlow = DialogFlow.CreateDialogFlow("issue_classic_quest_start").NpcLine(new TextObject("{=JjXETjYb}Thank you.[ib:demure][if:convo_thinking] I have to add, I'm ready to pay you {REWARD_GOLD}{GOLD_ICON} denars for your trouble. He is hiding somewhere nearby. Go talk to him, and tell him that you're here to sort things out.")).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          MBTextManager.SetTextVariable("REWARD_GOLD", this._rewardGold);
          MBTextManager.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">", false);
          return Hero.OneToOneConversationHero == this.QuestGiver;
        })).Consequence(new ConversationSentence.OnConsequenceDelegate(this.QuestAcceptedConsequences)).CloseDialog();
        this.DiscussDialogFlow = DialogFlow.CreateDialogFlow("quest_discuss").NpcLine(new TextObject("{=ndDpjT8s}Have you been able to talk with my boy yet?[if:convo_innocent_smile]")).Condition((ConversationSentence.OnConditionDelegate) (() => Hero.OneToOneConversationHero == this.QuestGiver)).BeginPlayerOptions().PlayerOption(new TextObject("{=ETiAbgHa}I will talk with them right away")).NpcLine(new TextObject("{=qmqTLZ9R}Thank you {?PLAYER.GENDER}madam{?}sir{\\?}. You are a savior.")).CloseDialog().PlayerOption(new TextObject("{=18NtjryL}Not yet, but I will soon.")).NpcLine(new TextObject("{=HeIIW3EH}We are waiting for your good news {?PLAYER.GENDER}milady{?}sir{\\?}.")).CloseDialog().EndPlayerOptions().CloseDialog();
      }

      private void QuestAcceptedConsequences()
      {
        this.StartQuest();
        this.AddLog(this.PlayerStartsQuestLogText1);
        this.AddLog(this.PlayerStartsQuestLogText2);
        this.AddTrackedObject((ITrackableCampaignObject) this._targetNotable);
        this.AddTrackedObject((ITrackableCampaignObject) this._culprit);
        Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("village_center");
        Settlement.CurrentSettlement.LocationComplex.ChangeLocation(this.CreateCulpritLocationCharacter(Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral), (Location) null, locationWithId);
      }

      private DialogFlow GetCulpritDialogFlow()
      {
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(new TextObject("{=w0HPC53e}Who are you? What do you want from me?[ib:nervous][if:convo_bared_teeth]")).Condition((ConversationSentence.OnConditionDelegate) (() => !this._culpritJoinedPlayerParty && Hero.OneToOneConversationHero == this._culprit)).PlayerLine(new TextObject("{=UGTCe2qP}Relax. I've talked with your relative, {QUEST_GIVER.NAME}. I know all about your situation. I'm here to help.")).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject);
          return Hero.OneToOneConversationHero == this._culprit;
        })).Consequence((ConversationSentence.OnConsequenceDelegate) (() => this._culprit.SetHasMet())).NpcLine(new TextObject("{=45llLiYG}How will you help? Will you protect me?[ib:normal][if:convo_astonished]")).PlayerLine(new TextObject("{=4mwSvCgG}Yes I will. Come now, I will take you with me to {TARGET_NOTABLE.NAME} to resolve this issue peacefully.")).Condition((ConversationSentence.OnConditionDelegate) (() =>
        {
          StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject);
          return Hero.OneToOneConversationHero == this._culprit;
        })).NpcLine(new TextObject("{=bHRZhYzd}No! I won't go anywhere near them! They'll kill me![ib:closed2][if:convo_stern]")).PlayerLine(new TextObject("{=sakSp6H8}You can't hide in the shadows forever. I pledge on my honor to protect you if things turn ugly.")).NpcLine(new TextObject("{=4CFOH0kB}I'm still not sure about all this, but I suppose you're right that I don't have much choice. Let's go get this over.[ib:closed][if:convo_pondering]")).Consequence((ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.CulpritJoinedPlayersArmy))).CloseDialog();
      }

      private DialogFlow GetNotableThugDialogFlow()
      {
        TextObject textObject1 = new TextObject("{=QMaYa25R}If you dare to even breathe a word against {TARGET_NOTABLE.LINK},[ib:aggressive2][if:convo_furious] it will be your last. You got it scum?");
        StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, textObject1);
        TextObject textObject2 = new TextObject("{=vGnY4KBO}I care very little for your threats. My business is with {TARGET_NOTABLE.LINK}.");
        StringHelpers.SetCharacterProperties("TARGET_NOTABLE", this._targetNotable.CharacterObject, textObject2);
        return DialogFlow.CreateDialogFlow("start", 125).NpcLine(textObject1).Condition((ConversationSentence.OnConditionDelegate) (() => this._notableThugs != null && this._notableThugs.Exists((Predicate<LocationCharacter>) (x => x.AgentOrigin == Campaign.Current.ConversationManager.ConversationAgents[0].Origin)))).PlayerLine(textObject2).CloseDialog();
      }

      private void CulpritJoinedPlayersArmy()
      {
        AddCompanionAction.Apply(Clan.PlayerClan, this._culprit);
        AddHeroToPartyAction.Apply(this._culprit, MobileParty.MainParty);
        this.AddLog(this.CulpritJoinedPlayerPartyLogText);
        if (Mission.Current != null)
        {
          DailyBehaviorGroup behaviorGroup = ((Agent) MissionConversationLogic.Current.ConversationManager.ConversationAgents[0]).GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<DailyBehaviorGroup>();
          FollowAgentBehavior followAgentBehavior = behaviorGroup.AddBehavior<FollowAgentBehavior>();
          behaviorGroup.SetScriptedBehavior<FollowAgentBehavior>();
          followAgentBehavior.SetTargetAgent(Agent.Main);
        }
        this._culpritJoinedPlayerParty = true;
      }

      protected override void RegisterEvents()
      {
        CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
        CampaignEvents.VillageBeingRaided.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageRaid));
        CampaignEvents.BeforeMissionOpenedEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeMissionOpened));
        CampaignEvents.GameMenuOpened.AddNonSerializedListener((object) this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
        CampaignEvents.OnMissionEndedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionEnd));
        CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
        CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
        CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.OnCompanionRemoved));
        CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnPrisonerTaken));
        CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
        CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
        CampaignEvents.CanMoveToSettlementEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, bool>(this.CanMoveToSettlement));
        CampaignEvents.CanHeroDieEvent.AddNonSerializedListener((object) this, new ReferenceAction<Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.CanHeroDie));
        CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
      }

      private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
      {
        if (this._culpritJoinedPlayerParty || Settlement.CurrentSettlement != this.QuestGiver.CurrentSettlement)
          return;
        Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("village_center").AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateCulpritLocationCharacter), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
      }

      private void CanMoveToSettlement(Hero hero, ref bool result)
      {
        this.CommonRestrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanBeSelectedInInventoryInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonRestrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanHavePartyRoleOrBeGovernorInfoIsRequested(
        Hero hero,
        ref bool result)
      {
        this.CommonRestrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanLeadPartyInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonRestrictionInfoIsRequested(hero, ref result);
      }

      public override void OnHeroCanHaveQuestOrIssueInfoIsRequested(Hero hero, ref bool result)
      {
        this.CommonRestrictionInfoIsRequested(hero, ref result);
      }

      private void CommonRestrictionInfoIsRequested(Hero hero, ref bool result)
      {
        if (hero != this._culprit && this._targetNotable != hero)
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

      private void CanHeroDie(
        Hero hero,
        KillCharacterAction.KillCharacterActionDetail causeOfDeath,
        ref bool result)
      {
        if (hero == this._targetNotable)
        {
          result = false;
        }
        else
        {
          if (hero != Hero.MainHero || Settlement.CurrentSettlement != this._targetSettlement || Mission.Current == null)
            return;
          result = false;
        }
      }

      private void OnHeroKilled(
        Hero victim,
        Hero killer,
        KillCharacterAction.KillCharacterActionDetail detail,
        bool showNotification = true)
      {
        if (victim != this._targetNotable)
          return;
        TextObject textObject = detail == KillCharacterAction.KillCharacterActionDetail.Lost ? this.TargetHeroDisappearedLogText : this.TargetHeroDiedLogText;
        StringHelpers.SetCharacterProperties("QUEST_TARGET", this._targetNotable.CharacterObject, textObject);
        StringHelpers.SetCharacterProperties("QUEST_GIVER", this.QuestGiver.CharacterObject, textObject);
        this.AddLog(textObject);
        this.CompleteQuestWithCancel();
      }

      private void OnPrisonerTaken(PartyBase capturer, Hero prisoner)
      {
        if (prisoner != this._culprit)
          return;
        this.AddLog(this.FailQuestLogText);
        this.TiemoutFailConsequences();
        this.CompleteQuestWithFail();
      }

      private void OnVillageRaid(Village village)
      {
        if (village == this._targetSettlement.Village)
        {
          this.AddLog(this.TargetVillageRaidedBeforeTalkingToCulpritCancel);
          this.CompleteQuestWithCancel();
        }
        else
        {
          if (village != this.QuestGiver.CurrentSettlement.Village || this._culpritJoinedPlayerParty)
            return;
          this.AddLog(this.QuestGiverVillageRaidedBeforeTalkingToCulpritCancel);
          this.CompleteQuestWithCancel();
        }
      }

      private void OnCompanionRemoved(
        Hero companion,
        RemoveCompanionAction.RemoveCompanionDetail detail)
      {
        if (!this.IsOngoing || this._isCulpritDiedInMissionFight || this._isPlayerKnockedOutMissionFight || companion != this._culprit)
          return;
        this.AddLog(this.CulpritNoLongerAClanMember);
        this.TiemoutFailConsequences();
        this.CompleteQuestWithFail();
      }

      public void OnMissionStarted(IMission iMission)
      {
        if (!this._checkForMissionEvents)
          return;
        if (PlayerEncounter.LocationEncounter.CharactersAccompanyingPlayer.All<AccompanyingCharacter>((Func<AccompanyingCharacter, bool>) (x => x.LocationCharacter.Character != this._culprit.CharacterObject)))
        {
          LocationCharacter locationCharacterOfHero = LocationComplex.Current.GetLocationCharacterOfHero(this._culprit);
          if (locationCharacterOfHero != null)
            PlayerEncounter.LocationEncounter.AddAccompanyingCharacter(locationCharacterOfHero, true);
        }
        Mission.Current.AddMissionBehavior((MissionBehavior) new FamilyFeudIssueBehavior.FamilyFeudIssueMissionBehavior(new Action<Agent, Agent, int>(this.OnAgentHit)));
        Mission.Current.GetMissionBehavior<MissionConversationLogic>().SetSpawnArea("alley_2");
      }

      private void OnMissionEnd(IMission mission)
      {
        if (!this._checkForMissionEvents)
          return;
        this._notableAgent = (Agent) null;
        this._culpritAgent = (Agent) null;
        if (Agent.Main == null)
        {
          this.AddLog(this.PlayerDiedInNotableBattle);
          this.RelationshipChangeWithQuestGiver = -10;
          this.QuestGiver.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
          this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security -= 5f;
          this._isPlayerKnockedOutMissionFight = true;
          this.CompleteQuestWithFail();
        }
        else if (this._isCulpritDiedInMissionFight)
        {
          if (this._playerBetrayedCulprit)
          {
            this.AddLog(this.FailQuestLogText);
            TraitLevelingHelper.OnIssueSolvedThroughBetrayal(Hero.MainHero, new Tuple<TraitObject, int>[1]
            {
              new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
            });
            ChangeRelationAction.ApplyPlayerRelation(this._targetNotable, 5);
          }
          else
            this.AddLog(this.CulpritDiedQuestFail);
          this.RelationshipChangeWithQuestGiver = -10;
          this.QuestGiver.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
          this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security -= 5f;
          this.CompleteQuestWithFail();
        }
        else if (this._persuationInDoneAndSuccessfull)
        {
          this.AddLog(this.SuccessQuestSolutionLogText);
          this.ApplySuccessConsequences();
        }
        else
        {
          if (!this._isNotableKnockedDownInMissionFight)
            return;
          this.AddLog(this.SuccessQuestSolutionLogText);
          this.ApplySuccessConsequences();
        }
      }

      private void OnGameMenuOpened(MenuCallbackArgs args)
      {
        if (!this._culpritJoinedPlayerParty || Hero.MainHero.CurrentSettlement != this._targetSettlement)
          return;
        this._checkForMissionEvents = args.MenuContext.GameMenu.StringId == "village";
      }

      public void OnSettlementLeft(MobileParty party, Settlement settlement)
      {
        if (party != MobileParty.MainParty)
          return;
        if (settlement == this._targetSettlement)
          this._checkForMissionEvents = false;
        if (settlement != this.QuestGiver.CurrentSettlement || !this._culpritJoinedPlayerParty)
          return;
        this.AddTrackedObject((ITrackableCampaignObject) this._targetSettlement);
      }

      public void OnBeforeMissionOpened()
      {
        if (!this._checkForMissionEvents)
          return;
        Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("village_center");
        if (locationWithId == null)
          return;
        locationWithId.GetLocationCharacter(this._targetNotable).SpecialTargetTag = "alley_2";
        if (this._notableThugs == null)
          this._notableThugs = new List<LocationCharacter>();
        else
          this._notableThugs.Clear();
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateNotablesThugs), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, MathF.Ceiling(Campaign.Current.Models.IssueModel.GetIssueDifficultyMultiplier() * 3f));
      }

      private LocationCharacter CreateCulpritLocationCharacter(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(this._culprit.CharacterObject.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, this._culprit.CharacterObject.IsFemale, "_villager"), monsterWithSuffix);
        return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) this._culprit.CharacterObject)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFirstCompanionBehavior), "alley_2", true, relation, tuple.Item1, true);
      }

      private LocationCharacter CreateNotablesThugs(
        CultureObject culture,
        LocationCharacter.CharacterRelations relation)
      {
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(this._notableGangsterCharacterObject.Race, "_settlement");
        Tuple<string, Monster> tuple = new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, this._notableGangsterCharacterObject.IsFemale, "_villain"), monsterWithSuffix);
        LocationCharacter notablesThugs = new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) this._notableGangsterCharacterObject)).Monster(tuple.Item2), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddFixedCharacterBehaviors), "alley_2", true, relation, tuple.Item1, true);
        this._notableThugs.Add(notablesThugs);
        return notablesThugs;
      }

      private void OnMapEventEnded(MapEvent mapEvent)
      {
        if (!mapEvent.IsPlayerMapEvent || !this._culpritJoinedPlayerParty || MobileParty.MainParty.MemberRoster.GetTroopRoster().Exists((Predicate<TroopRosterElement>) (x => x.Character == this._culprit.CharacterObject)))
          return;
        this.AddLog(this.FailQuestLogText);
        this.TiemoutFailConsequences();
        this.CompleteQuestWithFail();
      }

      private void CulpritDiedInNotableFightFail()
      {
        this._conversationAfterFightIsDone = true;
        this.HandleAgentBehaviorAfterQuestConversations();
      }

      protected override void OnFinalize()
      {
        if (this._culprit.IsPlayerCompanion)
        {
          if (this._culprit.IsPrisoner)
            EndCaptivityAction.ApplyByEscape(this._culprit);
          RemoveCompanionAction.ApplyAfterQuest(Clan.PlayerClan, this._culprit);
        }
        if (!this._culprit.IsAlive)
          return;
        this._culprit.Clan = (Clan) null;
        KillCharacterAction.ApplyByRemove(this._culprit);
      }

      protected override void OnTimedOut()
      {
        this.AddLog(this.FailQuestLogText);
        this.TiemoutFailConsequences();
      }

      private void TiemoutFailConsequences()
      {
        TraitLevelingHelper.OnIssueSolvedThroughBetrayal(this.QuestGiver, new Tuple<TraitObject, int>[1]
        {
          new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
        });
        this.RelationshipChangeWithQuestGiver = -10;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Prosperity -= 5f;
        this.QuestGiver.CurrentSettlement.Village.Bound.Town.Security -= 5f;
      }

      internal static void AutoGeneratedStaticCollectObjectsFamilyFeudIssueQuest(
        object o,
        List<object> collectedObjects)
      {
        ((MBObjectBase) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        base.AutoGeneratedInstanceCollectObjects(collectedObjects);
        collectedObjects.Add((object) this._targetSettlement);
        collectedObjects.Add((object) this._targetNotable);
        collectedObjects.Add((object) this._culprit);
      }

      internal static object AutoGeneratedGetMemberValue_targetSettlement(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._targetSettlement;
      }

      internal static object AutoGeneratedGetMemberValue_targetNotable(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._targetNotable;
      }

      internal static object AutoGeneratedGetMemberValue_culprit(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._culprit;
      }

      internal static object AutoGeneratedGetMemberValue_culpritJoinedPlayerParty(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._culpritJoinedPlayerParty;
      }

      internal static object AutoGeneratedGetMemberValue_checkForMissionEvents(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._checkForMissionEvents;
      }

      internal static object AutoGeneratedGetMemberValue_rewardGold(object o)
      {
        return (object) ((FamilyFeudIssueBehavior.FamilyFeudIssueQuest) o)._rewardGold;
      }
    }
  }
}
