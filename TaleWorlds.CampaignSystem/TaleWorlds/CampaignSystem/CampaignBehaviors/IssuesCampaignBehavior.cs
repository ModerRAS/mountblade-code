// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IssuesCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class IssuesCampaignBehavior : CampaignBehaviorBase
  {
    private const int MinNotableIssueCountForTowns = 1;
    private const int MaxNotableIssueCountForTowns = 3;
    private const int MinNotableIssueCountForVillages = 1;
    private const int MaxNotableIssueCountForVillages = 2;
    private const float MinIssuePercentageForClanHeroes = 0.1f;
    private const float MaxIssuePercentageForClanHeroes = 0.2f;
    private float _additionalFrequencyScore;
    private Settlement[] _settlements;
    private MBCampaignEvent _periodicEvent;

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyTickClan));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
    }

    private Settlement CurrentTickSettlement
    {
      get
      {
        return this._settlements[(int) (CampaignTime.Now.NumTicks / new CampaignTime(CampaignTime.Days(1f).NumTicks / (long) this._settlements.Length).NumTicks) % this._settlements.Length];
      }
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      Settlement[] array1 = Village.All.Select<Village, Settlement>((Func<Village, Settlement>) (x => x.Settlement)).ToArray<Settlement>();
      int desiredIssueCount1 = MathF.Ceiling(0.7f * (float) array1.Length);
      Settlement[] array2 = Town.AllTowns.Select<Town, Settlement>((Func<Town, Settlement>) (x => x.Settlement)).ToArray<Settlement>();
      int desiredIssueCount2 = MathF.Ceiling(0.8f * (float) array2.Length);
      int desiredIssueCount3 = MathF.Ceiling(0.120000005f * (float) Hero.AllAliveHeroes.Count<Hero>((Func<Hero, bool>) (x => x.IsLord && x.Clan != null && !x.Clan.IsBanditFaction && !x.IsChild)));
      int totalDesiredIssueCount = desiredIssueCount1 + desiredIssueCount2 + desiredIssueCount3;
      Campaign.Current.ConversationManager.DisableSentenceSort();
      this._additionalFrequencyScore = -0.4f;
      ((IList<Settlement>) array1).Shuffle<Settlement>();
      this.CreateRandomSettlementIssues(array1, 2, desiredIssueCount1, totalDesiredIssueCount);
      ((IList<Settlement>) array2).Shuffle<Settlement>();
      this.CreateRandomSettlementIssues(array2, 3, desiredIssueCount2, totalDesiredIssueCount);
      Clan[] array3 = Clan.NonBanditFactions.Where<Clan>((Func<Clan, bool>) (x => x.Heroes.Count != 0)).ToArray<Clan>();
      ((IList<Clan>) array3).Shuffle<Clan>();
      this.CreateRandomClanIssues(array3, desiredIssueCount3, totalDesiredIssueCount);
      this._additionalFrequencyScore = 0.2f;
      Campaign.Current.ConversationManager.EnableSentenceSort();
    }

    private void OnSettlementTick(MBCampaignEvent campaignEvent, object[] delegateParams)
    {
      Settlement currentTickSettlement = this.CurrentTickSettlement;
      int num1 = Campaign.Current.IssueManager.Issues.Count<KeyValuePair<Hero, IssueBase>>((Func<KeyValuePair<Hero, IssueBase>, bool>) (x => !x.Value.IsTriedToSolveBefore));
      int currentIssueCount = currentTickSettlement.HeroesWithoutParty.Count<Hero>((Func<Hero, bool>) (x => x.Issue != null));
      int num2 = currentTickSettlement.IsTown ? 1 : 1;
      int maxIssueCount = currentTickSettlement.IsTown ? 3 : 2;
      if (maxIssueCount <= 0 || currentIssueCount >= maxIssueCount || currentIssueCount >= num2 && (double) MBRandom.RandomFloat >= (double) this.GetIssueGenerationChance(currentIssueCount, maxIssueCount))
        return;
      this.CreateAnIssueForSettlementNotables(currentTickSettlement, num1 + 1);
    }

    private void DailyTickClan(Clan clan)
    {
      if (!this.IsClanSuitableForIssueCreation(clan))
        return;
      int num1 = Campaign.Current.IssueManager.Issues.Count<KeyValuePair<Hero, IssueBase>>((Func<KeyValuePair<Hero, IssueBase>, bool>) (x => !x.Value.IsTriedToSolveBefore));
      int currentIssueCount = clan.Heroes.Count<Hero>((Func<Hero, bool>) (x => x.Issue != null));
      MBReadOnlyList<Hero> heroes = clan.Heroes;
      int num2;
      int num3 = MathF.Ceiling((float) (num2 = heroes.Count<Hero>((Func<Hero, bool>) (x => x.IsAlive && !x.IsChild && x.IsLord))) * 0.1f);
      int maxIssueCount = MathF.Floor((float) num2 * 0.2f);
      if (maxIssueCount <= 0 || currentIssueCount >= maxIssueCount || currentIssueCount >= num3 && (double) MBRandom.RandomFloat >= (double) this.GetIssueGenerationChance(currentIssueCount, maxIssueCount))
        return;
      this.CreateAnIssueForClanNobles(clan, num1 + 1);
    }

    private bool IsClanSuitableForIssueCreation(Clan clan)
    {
      return clan.Heroes.Count > 0 && !clan.IsBanditFaction;
    }

    private void OnGameLoaded(CampaignGameStarter obj)
    {
      this._additionalFrequencyScore = 0.2f;
      List<IssueBase> issueBaseList = new List<IssueBase>();
      foreach (KeyValuePair<Hero, IssueBase> issue in Campaign.Current.IssueManager.Issues)
      {
        if (issue.Key.IsNotable && issue.Key.CurrentSettlement == null)
          issueBaseList.Add(issue.Value);
      }
      foreach (IssueBase issueBase in issueBaseList)
        issueBase.CompleteIssueWithCancel();
    }

    private float GetIssueGenerationChance(int currentIssueCount, int maxIssueCount)
    {
      float num = (float) (1.0 - (double) currentIssueCount / (double) maxIssueCount);
      return 0.3f * num * num;
    }

    private void CreateRandomSettlementIssues(
      Settlement[] shuffledSettlementArray,
      int maxIssueCountPerSettlement,
      int desiredIssueCount,
      int totalDesiredIssueCount)
    {
      int length = shuffledSettlementArray.Length;
      int[] numArray = new int[length];
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      while (num1 < length && num3 < desiredIssueCount)
      {
        int index = (num3 + num1 + num2) % length;
        if (numArray[index] < num4)
          ++num2;
        else if (numArray[index] < maxIssueCountPerSettlement && this.CreateAnIssueForSettlementNotables(shuffledSettlementArray[index], totalDesiredIssueCount))
        {
          ++num3;
          ++numArray[index];
        }
        else
          ++num1;
      }
    }

    private void CreateRandomClanIssues(
      Clan[] shuffledClanArray,
      int desiredIssueCount,
      int totalDesiredIssueCount)
    {
      int length = shuffledClanArray.Length;
      int num1 = 0;
      int num2 = 0;
      while (num1 < length && num2 < desiredIssueCount)
      {
        if (this.CreateAnIssueForClanNobles(shuffledClanArray[(num2 + num1) % length], totalDesiredIssueCount))
          ++num2;
        else
          ++num1;
      }
    }

    private bool CreateAnIssueForSettlementNotables(
      Settlement settlement,
      int totalDesiredIssueCount)
    {
      List<IssuesCampaignBehavior.IssueData> issueDataList = new List<IssuesCampaignBehavior.IssueData>();
      IssueManager issueManager = Campaign.Current.IssueManager;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.Issue == null && notable.CanHaveQuestsOrIssues())
        {
          List<PotentialIssueData> source = Campaign.Current.IssueManager.CheckForIssues(notable);
          int totalFrequencyScore = source.SumQ<PotentialIssueData>((Func<PotentialIssueData, int>) (x => this.GetFrequencyScore(x.Frequency)));
          foreach (PotentialIssueData pid in source)
          {
            if (pid.IsValid)
            {
              float issueScoreForNotable = this.CalculateIssueScoreForNotable(in pid, settlement, totalDesiredIssueCount, totalFrequencyScore);
              if ((double) issueScoreForNotable > 0.0 && !issueManager.HasIssueCoolDown(pid.IssueType, notable))
                issueDataList.Add(new IssuesCampaignBehavior.IssueData(pid, notable, issueScoreForNotable));
            }
          }
        }
      }
      if (issueDataList.Count <= 0)
        return false;
      List<(IssuesCampaignBehavior.IssueData, float)> weightList = new List<(IssuesCampaignBehavior.IssueData, float)>();
      foreach (IssuesCampaignBehavior.IssueData issueData in issueDataList)
        weightList.Add((issueData, issueData.Score));
      IssuesCampaignBehavior.IssueData issueData1 = MBRandom.ChooseWeighted<IssuesCampaignBehavior.IssueData>((IReadOnlyList<(IssuesCampaignBehavior.IssueData, float)>) weightList);
      Campaign.Current.IssueManager.CreateNewIssue(in issueData1.PotentialIssueData, issueData1.Hero);
      return true;
    }

    private bool CreateAnIssueForClanNobles(Clan clan, int totalDesiredIssueCount)
    {
      List<IssuesCampaignBehavior.IssueData> source1 = new List<IssuesCampaignBehavior.IssueData>();
      IssueManager issueManager = Campaign.Current.IssueManager;
      foreach (Hero lord in (List<Hero>) clan.Lords)
      {
        if (lord.Clan != Clan.PlayerClan && lord.CanHaveQuestsOrIssues() && (double) lord.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge && (lord.IsActive || lord.IsPrisoner) && lord.Issue == null)
        {
          List<PotentialIssueData> source2 = Campaign.Current.IssueManager.CheckForIssues(lord);
          int totalFrequencyScore = source2.SumQ<PotentialIssueData>((Func<PotentialIssueData, int>) (x => this.GetFrequencyScore(x.Frequency)));
          foreach (PotentialIssueData pid in source2)
          {
            if (pid.IsValid)
            {
              float issueScoreForClan = this.CalculateIssueScoreForClan(in pid, clan, totalDesiredIssueCount, totalFrequencyScore);
              if ((double) issueScoreForClan > 0.0 && !issueManager.HasIssueCoolDown(pid.IssueType, lord))
                source1.Add(new IssuesCampaignBehavior.IssueData(pid, lord, issueScoreForClan));
            }
          }
        }
      }
      if (source1.Count <= 0)
        return false;
      IssuesCampaignBehavior.IssueData issueData = source1.OrderByDescending<IssuesCampaignBehavior.IssueData, float>((Func<IssuesCampaignBehavior.IssueData, float>) (x => x.Score)).First<IssuesCampaignBehavior.IssueData>();
      Campaign.Current.IssueManager.CreateNewIssue(in issueData.PotentialIssueData, issueData.Hero);
      return true;
    }

    private float CalculateIssueScoreForClan(
      in PotentialIssueData pid,
      Clan clan,
      int totalDesiredIssueCount,
      int totalFrequencyScore)
    {
      foreach (Hero hero in (List<Hero>) clan.Heroes)
      {
        if (hero.Issue != null && hero.Issue.GetType() == pid.IssueType)
          return 0.0f;
      }
      return this.CalculateIssueScoreInternal(in pid, totalDesiredIssueCount, totalFrequencyScore);
    }

    private float CalculateIssueScoreForNotable(
      in PotentialIssueData pid,
      Settlement settlement,
      int totalDesiredIssueCount,
      int totalFrequencyScore)
    {
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.Issue != null && notable.Issue.GetType() == pid.IssueType)
          return 0.0f;
      }
      return this.CalculateIssueScoreInternal(in pid, totalDesiredIssueCount, totalFrequencyScore);
    }

    private float CalculateIssueScoreInternal(
      in PotentialIssueData pid,
      int totalDesiredIssueCount,
      int totalFrequencyScore)
    {
      float num1 = (float) this.GetFrequencyScore(pid.Frequency) / (float) totalFrequencyScore;
      float num2;
      if (totalDesiredIssueCount == 0)
      {
        num2 = 1f;
      }
      else
      {
        int num3 = 0;
        foreach (KeyValuePair<Hero, IssueBase> issue in Campaign.Current.IssueManager.Issues)
        {
          if (issue.Value.GetType() == pid.IssueType)
            ++num3;
        }
        num2 = (float) num3 / (float) totalDesiredIssueCount;
      }
      float num4 = (float) (1.0 + (double) this._additionalFrequencyScore - (double) num2 / (double) num1);
      if ((double) num4 < 0.0)
        num4 = 0.0f;
      else if ((double) num4 < (double) this._additionalFrequencyScore)
        num4 *= 0.01f;
      else if ((double) num4 < (double) this._additionalFrequencyScore + 0.40000000596046448)
        num4 *= 0.1f;
      return num1 * num4;
    }

    private int GetFrequencyScore(IssueBase.IssueFrequency frequency)
    {
      int frequencyScore = 0;
      switch (frequency)
      {
        case IssueBase.IssueFrequency.VeryCommon:
          frequencyScore = 6;
          break;
        case IssueBase.IssueFrequency.Common:
          frequencyScore = 3;
          break;
        case IssueBase.IssueFrequency.Rare:
          frequencyScore = 1;
          break;
      }
      return frequencyScore;
    }

    private void OnSettlementEntered(MobileParty party, Settlement settlement, Hero hero)
    {
      CharacterObject characterObject = party != null ? party.LeaderHero?.CharacterObject : hero.CharacterObject;
      if (characterObject == null || characterObject.IsPlayerCharacter || party?.Army != null || !Campaign.Current.GameStarted)
        return;
      MBList<IssueBase> mbList = IssueManager.GetIssuesInSettlement(settlement).ToMBList<IssueBase>();
      float num = settlement.OwnerClan == characterObject.HeroObject.Clan ? 0.05f : 0.01f;
      if (mbList.Count <= 0 || (double) MBRandom.RandomFloat >= (double) num)
        return;
      IssueBase randomElement = mbList.GetRandomElement<IssueBase>();
      if (!randomElement.CanBeCompletedByAI() || !randomElement.IsOngoingWithoutQuest)
        return;
      randomElement.CompleteIssueWithAiLord(characterObject.HeroObject);
    }

    private void OnIssueUpdated(
      IssueBase issue,
      IssueBase.IssueUpdateDetails details,
      Hero issueSolver = null)
    {
      if (details == IssueBase.IssueUpdateDetails.IssueFinishedWithSuccess && issueSolver != null && issueSolver.GetPerkValue(DefaultPerks.Charm.Oratory))
      {
        GainRenownAction.Apply(issueSolver, (float) MathF.Round(DefaultPerks.Charm.Oratory.PrimaryBonus));
        GainKingdomInfluenceAction.ApplyForDefault(issueSolver, (float) MathF.Round(DefaultPerks.Charm.Oratory.PrimaryBonus));
      }
      if ((details == IssueBase.IssueUpdateDetails.IssueFail || details == IssueBase.IssueUpdateDetails.IssueFinishedWithSuccess || details == IssueBase.IssueUpdateDetails.IssueFinishedWithBetrayal || details == IssueBase.IssueUpdateDetails.IssueTimedOut || details == IssueBase.IssueUpdateDetails.SentTroopsFinishedQuest) && issueSolver != null && issue.IssueOwner != null)
      {
        int relation = issue.IsSolvingWithQuest ? issue.IssueQuest.RelationshipChangeWithQuestGiver : issue.RelationshipChangeWithIssueOwner;
        if (relation > 0)
        {
          if (issueSolver.GetPerkValue(DefaultPerks.Trade.DistributedGoods) && issue.IssueOwner.IsArtisan)
            relation *= (int) DefaultPerks.Trade.DistributedGoods.PrimaryBonus;
          if (issueSolver.GetPerkValue(DefaultPerks.Trade.LocalConnection) && issue.IssueOwner.IsMerchant)
            relation *= (int) DefaultPerks.Trade.LocalConnection.PrimaryBonus;
          ChangeRelationAction.ApplyPlayerRelation(issue.IsSolvingWithQuest ? issue.IssueQuest.QuestGiver : issue.IssueOwner, relation);
        }
        else if (relation < 0)
          ChangeRelationAction.ApplyPlayerRelation(issue.IsSolvingWithQuest ? issue.IssueQuest.QuestGiver : issue.IssueOwner, relation);
      }
      if (details != IssueBase.IssueUpdateDetails.IssueCancel && details != IssueBase.IssueUpdateDetails.IssueFail && details != IssueBase.IssueUpdateDetails.IssueFinishedWithSuccess && details != IssueBase.IssueUpdateDetails.IssueFinishedWithBetrayal && details != IssueBase.IssueUpdateDetails.IssueTimedOut && details != IssueBase.IssueUpdateDetails.SentTroopsFinishedQuest && details != IssueBase.IssueUpdateDetails.SentTroopsFailedQuest && details != IssueBase.IssueUpdateDetails.IssueFinishedByAILord)
        return;
      Campaign.Current.IssueManager.AddIssueCoolDownData(issue.GetType(), (IssueCoolDownData) new HeroRelatedIssueCoolDownData(issue.IssueOwner, CampaignTime.DaysFromNow((float) Campaign.Current.Models.IssueModel.IssueOwnerCoolDownInDays)));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnSessionLaunched(CampaignGameStarter starter)
    {
      List<Settlement> list = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsTown || x.IsVillage)).ToList<Settlement>();
      this.DeterministicShuffle(list);
      this._settlements = list.ToArray();
      CampaignTime triggerPeriod = new CampaignTime(CampaignTime.Days(1f).NumTicks / (long) this._settlements.Length);
      CampaignTime initialWait = triggerPeriod - new CampaignTime(CampaignTime.Now.NumTicks % triggerPeriod.NumTicks);
      this._periodicEvent = CampaignPeriodicEventManager.CreatePeriodicEvent(triggerPeriod, initialWait);
      this._periodicEvent.AddHandler(new MBCampaignEvent.CampaignEventDelegate(this.OnSettlementTick));
      this.AddDialogues(starter);
    }

    private void DeterministicShuffle(List<Settlement> settlements)
    {
      Random random = new Random(53);
      for (int index1 = 0; index1 < settlements.Count; ++index1)
      {
        int index2 = random.Next() % settlements.Count;
        Settlement settlement = settlements[index1];
        settlements[index1] = settlements[index2];
        settlements[index2] = settlement;
      }
    }

    private void AddDialogues(CampaignGameStarter starter)
    {
      starter.AddDialogLine("issue_not_offered", "issue_offer", "hero_main_options", "{=!}{ISSUE_NOT_OFFERED_EXPLANATION}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_not_offered_condition), new ConversationSentence.OnConsequenceDelegate(this.leave_on_conversation_end_consequence));
      starter.AddDialogLine("issue_explanation", "issue_offer", "issue_explanation_player_response", "{=!}{IssueBriefByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offered_begin_condition), new ConversationSentence.OnConsequenceDelegate(this.leave_on_conversation_end_consequence));
      starter.AddPlayerLine("issue_explanation_player_response_pre_lord_solution", "issue_explanation_player_response", "issue_lord_solution_brief", "{=!}{IssueAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(this.issue_explanation_player_response_pre_lord_solution_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("issue_explanation_player_response_pre_quest_solution", "issue_explanation_player_response", "issue_quest_solution_brief", "{=!}{IssueAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(this.issue_explanation_player_response_pre_quest_solution_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_lord_solution_brief", "issue_lord_solution_brief", "issue_lord_solution_player_response", "{=!}{IssueLordSolutionExplanationByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_lord_solution_brief_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("issue_lord_solution_player_response", "issue_lord_solution_player_response", "issue_quest_solution_brief", "{=!}{IssuePlayerResponseAfterLordExplanationText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_lord_solution_player_response_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_quest_solution_brief_pre_alternative_solution", "issue_quest_solution_brief", "issue_alternative_solution_player_response", "{=!}{IssueQuestSolutionExplanationByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_quest_solution_brief_pre_alternative_solution_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_quest_solution_brief_pre_player_response", "issue_quest_solution_brief", "issue_offer_player_response", "{=!}{IssueQuestSolutionExplanationByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_quest_solution_brief_pre_player_response_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("issue_alternative_solution_player_response", "issue_alternative_solution_player_response", "issue_alternative_solution_brief", "{=!}{IssuePlayerResponseAfterAlternativeExplanationText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_alternative_solution_player_response_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_alternative_solution_brief", "issue_alternative_solution_brief", "issue_offer_player_response", "{=!}{IssueAlternativeSolutionExplanationByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_alternative_solution_brief_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_2_consequence));
      starter.AddPlayerLine("issue_offer_player_accept_quest", "issue_offer_player_response", "issue_classic_quest_start", "{=!}{IssueQuestSolutionAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_quest_condition), (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.IssueManager.StartIssueQuest(Hero.OneToOneConversationHero)));
      starter.AddPlayerLine("issue_offer_player_accept_alternative", "issue_offer_player_response", "issue_offer_player_accept_alternative_2", "{=!}{IssueAlternativeSolutionAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_condition), (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_clickable_condition));
      starter.AddPlayerLine("issue_offer_player_accept_lord", "issue_offer_player_response", "issue_offer_player_accept_lord_2", "{=!}{IssueLordSolutionAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(this.issue_offer_player_accept_lord_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_offer_player_accept_lord_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_lord_clickable_condition));
      starter.AddPlayerLine("issue_offer_player_response_reject", "issue_offer_player_response", "issue_offer_hero_response_reject", "{=l549ODcw}Sorry. I can't do that right now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_offer_player_accept_alternative_2", "issue_offer_player_accept_alternative_2", "issue_offer_player_accept_alternative_3", "{=X4ITSQOl}Which of your people can help us?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddRepeatablePlayerLine("issue_offer_player_accept_alternative_3", "issue_offer_player_accept_alternative_3", "issue_offer_player_accept_alternative_4", "{=C2ZGNwwh}{COMPANION.NAME} {COMPANION_SCALED_PARAMETERS}", "{=nomZx5Nw}I am thinking of a different companion.", "issue_offer_player_accept_alternative_2", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_3_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_3_consequence), clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_3_clickable_condition));
      starter.AddPlayerLine("issue_offer_player_accept_go_back", "issue_offer_player_accept_alternative_3", "issue_offer_hero_response_reject", "{=OymJQD7M}Actually, I don't have any available men right now...", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_offer_player_accept_alternative_4", "issue_offer_player_accept_alternative_4", "issue_offer_player_accept_alternative_5", "{=!}Party screen goes here", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.issue_offer_player_accept_alternative_4_consequence));
      starter.AddDialogLine("issue_offer_player_accept_alternative_5_a", "issue_offer_player_accept_alternative_5", "close_window", "{=!}{IssueAlternativeSolutionResponseByIssueGiverText}", new ConversationSentence.OnConditionDelegate(this.issue_offer_player_accept_alternative_5_a_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_5_a_consequence));
      starter.AddDialogLine("issue_offer_player_accept_alternative_5_b", "issue_offer_player_accept_alternative_5", "issue_offer_player_response", "{=!}{IssueGiverResponseToRejection}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_hero_response_reject_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_offer_player_accept_alternative_5_b_consequence));
      starter.AddPlayerLine("issue_offer_player_back", "issue_offer_player_accept_alternative_5", "issue_offer_player_response", GameTexts.FindText("str_back").ToString(), (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_offer_player_accept_lord_2", "issue_offer_player_accept_lord_2", "hero_main_options", "{=!}{IssueLordSolutionResponseByIssueGiverText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_player_accept_lord_2_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_offer_hero_response_reject", "issue_offer_hero_response_reject", "hero_main_options", "{=!}{IssueGiverResponseToRejection}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_offer_hero_response_reject_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_counter_offer_1", "start", "issue_counter_offer_2", "{=!}{IssueLordSolutionCounterOfferBriefByOtherNpcText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_start_condition), (ConversationSentence.OnConsequenceDelegate) null, int.MaxValue);
      starter.AddDialogLine("issue_counter_offer_2", "issue_counter_offer_2", "issue_counter_offer_player_response", "{=!}{IssueLordSolutionCounterOfferExplanationByOtherNpcText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_2_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("issue_counter_offer_player_accept", "issue_counter_offer_player_response", "issue_counter_offer_accepted", "{=!}{IssueLordSolutionCounterOfferAcceptByPlayerText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_player_accept_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_counter_offer_accepted", "issue_counter_offer_accepted", "close_window", "{=!}{IssueLordSolutionCounterOfferAcceptResponseByOtherNpcText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_accepted_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_counter_offer_accepted_consequence));
      starter.AddPlayerLine("issue_counter_offer_player_reject", "issue_counter_offer_player_response", "issue_counter_offer_reject", "{=!}{IssueLordSolutionCounterOfferDeclineByPlayerText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_player_reject_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("issue_counter_offer_reject", "issue_counter_offer_reject", "close_window", "{=!}{IssueLordSolutionCounterOfferDeclineResponseByOtherNpcText}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_counter_offer_reject_condition), new ConversationSentence.OnConsequenceDelegate(IssuesCampaignBehavior.issue_counter_offer_reject_consequence));
      starter.AddDialogLine("issue_alternative_solution_discuss", "issue_discuss_alternative_solution", "close_window", "{=!}{IssueDiscussAlternativeSolution}", new ConversationSentence.OnConditionDelegate(IssuesCampaignBehavior.issue_alternative_solution_discussion_condition), new ConversationSentence.OnConsequenceDelegate(this.issue_alternative_solution_discussion_consequence), int.MaxValue);
    }

    private static bool issue_alternative_solution_discussion_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (issueOwnersIssue == null || !issueOwnersIssue.IsThereAlternativeSolution || !issueOwnersIssue.IsSolvingWithAlternative)
        return false;
      MBTextManager.SetTextVariable("IssueDiscussAlternativeSolution", issueOwnersIssue.IssueDiscussAlternativeSolution, false);
      return true;
    }

    private void issue_alternative_solution_discussion_consequence()
    {
      if (PlayerEncounter.Current == null || Campaign.Current.ConversationManager.ConversationParty != PlayerEncounter.EncounteredMobileParty)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private static void issue_counter_offer_reject_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(IssuesCampaignBehavior.GetCounterOfferersIssue().CompleteIssueWithLordSolutionWithRefuseCounterOffer);
    }

    private static bool issue_counter_offer_reject_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferDeclineResponseByOtherNpcText", IssuesCampaignBehavior.GetCounterOfferersIssue().IssueLordSolutionCounterOfferDeclineResponseByOtherNpc, false);
      return true;
    }

    private static bool issue_counter_offer_player_reject_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferDeclineByPlayerText", IssuesCampaignBehavior.GetCounterOfferersIssue().IssueLordSolutionCounterOfferDeclineByPlayer, false);
      return true;
    }

    private static void issue_counter_offer_accepted_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(IssuesCampaignBehavior.GetCounterOfferersIssue().CompleteIssueWithLordSolutionWithAcceptCounterOffer);
    }

    private static bool issue_counter_offer_accepted_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferAcceptResponseByOtherNpcText", IssuesCampaignBehavior.GetCounterOfferersIssue().IssueLordSolutionCounterOfferAcceptResponseByOtherNpc, false);
      return true;
    }

    private static bool issue_counter_offer_player_accept_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferAcceptByPlayerText", IssuesCampaignBehavior.GetCounterOfferersIssue().IssueLordSolutionCounterOfferAcceptByPlayer, false);
      return true;
    }

    private static bool issue_counter_offer_2_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferExplanationByOtherNpcText", IssuesCampaignBehavior.GetCounterOfferersIssue().IssueLordSolutionCounterOfferExplanationByOtherNpc, false);
      return true;
    }

    private static bool issue_counter_offer_start_condition()
    {
      IssueBase counterOfferersIssue = IssuesCampaignBehavior.GetCounterOfferersIssue();
      if (counterOfferersIssue == null)
        return false;
      MBTextManager.SetTextVariable("IssueLordSolutionCounterOfferBriefByOtherNpcText", counterOfferersIssue.IssueLordSolutionCounterOfferBriefByOtherNpc, false);
      return true;
    }

    private static bool issue_offer_player_accept_lord_2_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionResponseByIssueGiverText", IssuesCampaignBehavior.GetIssueOwnersIssue().IssueLordSolutionResponseByIssueGiver, false);
      return true;
    }

    private void issue_offer_player_accept_alternative_4_consequence()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      int solutionNeededMenCount = issueOwnersIssue.GetTotalAlternativeSolutionNeededMenCount();
      if (solutionNeededMenCount > 1)
        PartyScreenManager.OpenScreenAsQuest(issueOwnersIssue.AlternativeSolutionSentTroops, new TextObject("{=FbLOFO88}Select troops for mission"), solutionNeededMenCount + 1, issueOwnersIssue.GetTotalAlternativeSolutionDurationInDays(), new PartyPresentationDoneButtonConditionDelegate(this.PartyScreenDoneCondition), new PartyScreenClosedDelegate(IssuesCampaignBehavior.PartyScreenDoneClicked), new IsTroopTransferableDelegate(IssuesCampaignBehavior.TroopTransferableDelegate));
      else
        Campaign.Current.ConversationManager.ContinueConversation();
    }

    private static void issue_offer_player_accept_alternative_5_b_consequence()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MobileParty.MainParty.MemberRoster.Add(issueOwnersIssue.AlternativeSolutionSentTroops);
      issueOwnersIssue.AlternativeSolutionSentTroops.Clear();
    }

    private static void issue_offer_player_accept_alternative_5_a_consequence()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      issueOwnersIssue.AlternativeSolutionStartConsequence();
      issueOwnersIssue.StartIssueWithAlternativeSolution();
    }

    private bool issue_offer_player_accept_alternative_5_a_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssueAlternativeSolutionResponseByIssueGiverText", issueOwnersIssue.IssueAlternativeSolutionResponseByIssueGiver, false);
      return IssuesCampaignBehavior.DoTroopsSatisfyAlternativeSolutionInternal(issueOwnersIssue.AlternativeSolutionSentTroops, out TextObject _);
    }

    private static bool issue_offer_player_accept_alternative_3_clickable_condition(
      out TextObject explanation)
    {
      bool flag = true;
      explanation = TextObject.Empty;
      if (!(ConversationSentence.CurrentProcessedRepeatObject is Hero processedRepeatObject) || processedRepeatObject.PartyBelongedTo != MobileParty.MainParty)
        flag = false;
      else if (!processedRepeatObject.CanHaveQuestsOrIssues())
      {
        explanation = new TextObject("{=DBabgrcC}This hero is not available right now.");
        flag = false;
      }
      else if (processedRepeatObject.IsWounded)
      {
        explanation = new TextObject("{=CyrOuz4h}This hero is wounded.");
        flag = false;
      }
      else if (processedRepeatObject.IsPregnant)
      {
        explanation = new TextObject("{=BaKOWJb6}This hero is pregnant.");
        flag = false;
      }
      return flag;
    }

    private static void issue_offer_player_accept_alternative_3_consequence()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (!(ConversationSentence.SelectedRepeatObject is Hero selectedRepeatObject))
        return;
      MobileParty.MainParty.MemberRoster.AddToCounts(selectedRepeatObject.CharacterObject, -1);
      issueOwnersIssue.AlternativeSolutionSentTroops.AddToCounts(selectedRepeatObject.CharacterObject, 1);
      CampaignEventDispatcher.Instance.OnHeroGetsBusy(selectedRepeatObject, HeroGetsBusyReasons.SolvesIssue);
    }

    private static bool TroopTransferableDelegate(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase leftOwnerParty)
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      return !character.IsHero && !character.IsNotTransferableInPartyScreen && type != PartyScreenLogic.TroopType.Prisoner && issueOwnersIssue.IsTroopTypeNeededByAlternativeSolution(character);
    }

    private static void PartyScreenDoneClicked(
      PartyBase leftOwnerParty,
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      PartyBase rightOwnerParty,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      bool fromCancel)
    {
      Campaign.Current.ConversationManager.ContinueConversation();
    }

    private Tuple<bool, TextObject> PartyScreenDoneCondition(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      int leftLimitNum,
      int rightLimitNum)
    {
      TextObject explanation;
      return new Tuple<bool, TextObject>(IssuesCampaignBehavior.DoTroopsSatisfyAlternativeSolutionInternal(leftMemberRoster, out explanation), explanation);
    }

    private static bool DoTroopsSatisfyAlternativeSolutionInternal(
      TroopRoster troopRoster,
      out TextObject explanation)
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      explanation = TextObject.Empty;
      int solutionNeededMenCount = issueOwnersIssue.GetTotalAlternativeSolutionNeededMenCount();
      if (troopRoster.TotalRegulars < solutionNeededMenCount || troopRoster.TotalRegulars - troopRoster.TotalWoundedRegulars >= solutionNeededMenCount)
        return issueOwnersIssue.DoTroopsSatisfyAlternativeSolution(troopRoster, out explanation);
      explanation = new TextObject("{=fjmGXcLW}You have to send healthy troops to this quest.");
      return false;
    }

    private static bool issue_offer_player_accept_alternative_3_condition()
    {
      if (ConversationSentence.CurrentProcessedRepeatObject is Hero processedRepeatObject)
        StringHelpers.SetRepeatableCharacterProperties("COMPANION", processedRepeatObject.CharacterObject);
      List<TextObject> textObjectList = new List<TextObject>();
      IssueModel issueModel = Campaign.Current.Models.IssueModel;
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      bool flag = false;
      if (issueOwnersIssue.AlternativeSolutionHasCasualties)
      {
        (int, int) causalityForHero = issueModel.GetCausalityForHero(processedRepeatObject, issueOwnersIssue);
        if (causalityForHero.Item2 > 0)
        {
          TextObject empty = TextObject.Empty;
          TextObject textObject;
          if (causalityForHero.Item1 == causalityForHero.Item2)
          {
            textObject = new TextObject("{=zPlFvCRm}{NUMBER_OF_TROOPS} troop loss");
            textObject.SetTextVariable("NUMBER_OF_TROOPS", causalityForHero.Item1);
          }
          else
          {
            textObject = new TextObject("{=bdlomGZ1}{MIN_NUMBER_OF_TROOPS} - {MAX_NUMBER_OF_TROOPS_LOST} troop loss");
            textObject.SetTextVariable("MIN_NUMBER_OF_TROOPS", causalityForHero.Item1);
            textObject.SetTextVariable("MAX_NUMBER_OF_TROOPS_LOST", causalityForHero.Item2);
          }
          flag = true;
          textObjectList.Add(textObject);
        }
      }
      if (issueOwnersIssue.AlternativeSolutionHasFailureRisk)
      {
        float failureRiskForHero = issueModel.GetFailureRiskForHero(processedRepeatObject, issueOwnersIssue);
        if ((double) failureRiskForHero > 0.0)
        {
          float variable = (float) (int) ((double) failureRiskForHero * 100.0);
          TextObject textObject = new TextObject("{=9tLYXGGc}{FAILURE_RISK}% risk of failure");
          textObject.SetTextVariable("FAILURE_RISK", variable);
          textObjectList.Add(textObject);
          flag = true;
        }
        else
        {
          TextObject textObject = new TextObject("{=way8jWK8}no risk of failure");
          textObjectList.Add(textObject);
        }
      }
      if (issueOwnersIssue.AlternativeSolutionHasScaledRequiredTroops)
      {
        int troopsRequiredForHero = issueModel.GetTroopsRequiredForHero(processedRepeatObject, issueOwnersIssue);
        if (troopsRequiredForHero > 0)
        {
          TextObject textObject = new TextObject("{=b3bJXMt2}{NUMBER_OF_TROOPS} required troops");
          textObject.SetTextVariable("NUMBER_OF_TROOPS", troopsRequiredForHero);
          textObjectList.Add(textObject);
          flag = true;
        }
      }
      if (issueOwnersIssue.AlternativeSolutionHasScaledDuration)
      {
        CampaignTime resolutionForHero = issueModel.GetDurationOfResolutionForHero(processedRepeatObject, issueOwnersIssue);
        if (resolutionForHero > CampaignTime.Days(0.0f))
        {
          TextObject textObject = new TextObject("{=ImatoO4Y}{DURATION_IN_DAYS} required days to complete");
          textObject.SetTextVariable("DURATION_IN_DAYS", (float) resolutionForHero.ToDays);
          textObjectList.Add(textObject);
          flag = true;
        }
      }
      if (flag)
      {
        (SkillObject, int) alternativeSolutionSkill = issueModel.GetIssueAlternativeSolutionSkill(processedRepeatObject, issueOwnersIssue);
        if (alternativeSolutionSkill.Item1 != null)
        {
          TextObject textObject = new TextObject("{=!}{SKILL}: {NUMBER}");
          textObject.SetTextVariable("SKILL", alternativeSolutionSkill.Item1.Name);
          textObject.SetTextVariable("NUMBER", processedRepeatObject.GetSkillValue(alternativeSolutionSkill.Item1));
          textObjectList.Add(textObject);
        }
      }
      if (textObjectList.IsEmpty<TextObject>())
      {
        ConversationSentence.SelectedRepeatLine.SetTextVariable("COMPANION_SCALED_PARAMETERS", TextObject.Empty);
      }
      else
      {
        TextObject variable = GameTexts.GameTextHelper.MergeTextObjectsWithComma(textObjectList, false);
        TextObject text = GameTexts.FindText("str_STR_in_parentheses");
        text.SetTextVariable("STR", variable);
        ConversationSentence.SelectedRepeatLine.SetTextVariable("COMPANION_SCALED_PARAMETERS", text);
      }
      return true;
    }

    private static void issue_offer_player_accept_alternative_2_consequence()
    {
      List<Hero> objectsToRepeatOver = new List<Hero>();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && !troopRosterElement.Character.IsPlayerCharacter && troopRosterElement.Character.HeroObject.CanHaveQuestsOrIssues())
          objectsToRepeatOver.Add(troopRosterElement.Character.HeroObject);
      }
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) objectsToRepeatOver);
    }

    private static bool issue_offer_hero_response_reject_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.GetPersona() == DefaultTraits.PersonaCurt)
        MBTextManager.SetTextVariable("IssueGiverResponseToRejection", new TextObject("{=h2Wle7ZI}Well. That's a pity."), false);
      else if (CharacterObject.OneToOneConversationCharacter.GetPersona() == DefaultTraits.PersonaIronic)
        MBTextManager.SetTextVariable("IssueGiverResponseToRejection", new TextObject("{=wbLnJrJA}Ah, well. I can look elsewhere for help, I suppose."), false);
      else
        MBTextManager.SetTextVariable("IssueGiverResponseToRejection", new TextObject("{=Uoy2tTZJ}Very well. But perhaps you will reconsider later."), false);
      return true;
    }

    private static bool issue_offer_player_accept_lord_clickable_condition(
      out TextObject explanation)
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (!issueOwnersIssue.LordSolutionCondition(out explanation))
        return false;
      if ((double) Clan.PlayerClan.Influence < (double) issueOwnersIssue.NeededInfluenceForLordSolution)
      {
        explanation = new TextObject("{=hRdhfSs0}You don't have enough influence for this solution. ({NEEDED_INFLUENCE}{INFLUENCE_ICON})");
        explanation.SetTextVariable("NEEDED_INFLUENCE", issueOwnersIssue.NeededInfluenceForLordSolution);
        explanation.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
        return false;
      }
      explanation = new TextObject("{=xbvgc8Sp}This solution will cost {INFLUENCE} influence.");
      explanation.SetTextVariable("INFLUENCE", issueOwnersIssue.NeededInfluenceForLordSolution);
      return true;
    }

    private static void issue_offer_player_accept_lord_consequence()
    {
      Hero.OneToOneConversationHero.Issue.StartIssueWithLordSolution();
    }

    private bool issue_offer_player_accept_lord_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (!issueOwnersIssue.IsThereLordSolution)
        return false;
      MBTextManager.SetTextVariable("IssueLordSolutionAcceptByPlayerText", issueOwnersIssue.IssueLordSolutionAcceptByPlayer, false);
      return IssuesCampaignBehavior.IssueLordSolutionCondition();
    }

    private static bool issue_offer_player_accept_alternative_clickable_condition(
      out TextObject explanation)
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (MobileParty.MainParty.MemberRoster.GetTroopRoster().Where<TroopRosterElement>((Func<TroopRosterElement, bool>) (m => m.Character.IsHero && !m.Character.IsPlayerCharacter && m.Character.HeroObject.CanHaveQuestsOrIssues())).IsEmpty<TroopRosterElement>())
      {
        explanation = new TextObject("{=qjpNREwg}You don't have any companions or family members.");
        return false;
      }
      if (!issueOwnersIssue.AlternativeSolutionCondition(out explanation))
        return false;
      explanation = TextObject.Empty;
      return true;
    }

    private static bool issue_offer_player_accept_alternative_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (!issueOwnersIssue.IsThereAlternativeSolution)
        return false;
      MBTextManager.SetTextVariable("IssueAlternativeSolutionAcceptByPlayerText", issueOwnersIssue.IssueAlternativeSolutionAcceptByPlayer, false);
      return true;
    }

    private static bool issue_offer_player_accept_quest_condition()
    {
      MBTextManager.SetTextVariable("IssueQuestSolutionAcceptByPlayerText", IssuesCampaignBehavior.GetIssueOwnersIssue().IssueQuestSolutionAcceptByPlayer, false);
      return true;
    }

    private static bool issue_alternative_solution_brief_condition()
    {
      MBTextManager.SetTextVariable("IssueAlternativeSolutionExplanationByIssueGiverText", IssuesCampaignBehavior.GetIssueOwnersIssue().IssueAlternativeSolutionExplanationByIssueGiver, false);
      return true;
    }

    private static bool issue_alternative_solution_player_response_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssuePlayerResponseAfterAlternativeExplanationText", issueOwnersIssue.IssuePlayerResponseAfterAlternativeExplanation, false);
      return issueOwnersIssue.IsThereAlternativeSolution;
    }

    private static bool issue_quest_solution_brief_pre_player_response_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssueQuestSolutionExplanationByIssueGiverText", issueOwnersIssue.IssueQuestSolutionExplanationByIssueGiver, false);
      return !issueOwnersIssue.IsThereAlternativeSolution;
    }

    private static bool issue_quest_solution_brief_pre_alternative_solution_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssueQuestSolutionExplanationByIssueGiverText", issueOwnersIssue.IssueQuestSolutionExplanationByIssueGiver, false);
      return issueOwnersIssue.IsThereAlternativeSolution;
    }

    private static bool issue_lord_solution_player_response_condition()
    {
      MBTextManager.SetTextVariable("IssuePlayerResponseAfterLordExplanationText", IssuesCampaignBehavior.GetIssueOwnersIssue().IssuePlayerResponseAfterLordExplanation, false);
      return true;
    }

    private static bool issue_lord_solution_brief_condition()
    {
      MBTextManager.SetTextVariable("IssueLordSolutionExplanationByIssueGiverText", IssuesCampaignBehavior.GetIssueOwnersIssue().IssueLordSolutionExplanationByIssueGiver, false);
      return true;
    }

    private bool issue_explanation_player_response_pre_quest_solution_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssueAcceptByPlayerText", issueOwnersIssue.IssueAcceptByPlayer, false);
      return !issueOwnersIssue.IsThereLordSolution || !IssuesCampaignBehavior.IssueLordSolutionCondition();
    }

    private bool issue_explanation_player_response_pre_lord_solution_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      MBTextManager.SetTextVariable("IssueAcceptByPlayerText", issueOwnersIssue.IssueAcceptByPlayer, false);
      return issueOwnersIssue.IsThereLordSolution && IssuesCampaignBehavior.IssueLordSolutionCondition();
    }

    private static bool IssueLordSolutionCondition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      return issueOwnersIssue.IssueOwner.CurrentSettlement != null && issueOwnersIssue.IssueOwner.CurrentSettlement.OwnerClan == Clan.PlayerClan;
    }

    private static bool issue_offered_begin_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      if (issueOwnersIssue == null || !issueOwnersIssue.CheckPreconditions(Hero.OneToOneConversationHero, out TextObject _))
        return false;
      MBTextManager.SetTextVariable("IssueBriefByIssueGiverText", issueOwnersIssue.IssueBriefByIssueGiver, false);
      return true;
    }

    private static bool issue_not_offered_condition()
    {
      IssueBase issueOwnersIssue = IssuesCampaignBehavior.GetIssueOwnersIssue();
      TextObject explanation;
      if (issueOwnersIssue == null || issueOwnersIssue.CheckPreconditions(Hero.OneToOneConversationHero, out explanation))
        return false;
      MBTextManager.SetTextVariable("ISSUE_NOT_OFFERED_EXPLANATION", explanation, false);
      return true;
    }

    private void leave_on_conversation_end_consequence()
    {
      Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(MapEventHelper.OnConversationEnd);
    }

    private static IssueBase GetIssueOwnersIssue() => Hero.OneToOneConversationHero?.Issue;

    private static IssueBase GetCounterOfferersIssue()
    {
      if (Hero.OneToOneConversationHero != null)
      {
        foreach (IssueBase counterOfferersIssue in Campaign.Current.IssueManager.Issues.Values)
        {
          if (counterOfferersIssue.CounterOfferHero == Hero.OneToOneConversationHero && counterOfferersIssue.IsSolvingWithLordSolution)
            return counterOfferersIssue;
        }
      }
      return (IssueBase) null;
    }

    private struct IssueData
    {
      public readonly PotentialIssueData PotentialIssueData;
      public readonly Hero Hero;
      public readonly float Score;

      public IssueData(PotentialIssueData issueData, Hero hero, float score)
      {
        this.PotentialIssueData = issueData;
        this.Hero = hero;
        this.Score = score;
      }
    }
  }
}
