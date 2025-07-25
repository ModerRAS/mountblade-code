// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Election.KingdomElection
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.Election
{
  public class KingdomElection
  {
    [SaveableField(0)]
    private readonly KingdomDecision _decision;
    private MBList<DecisionOutcome> _possibleOutcomes;
    [SaveableField(2)]
    private List<Supporter> _supporters;
    [SaveableField(3)]
    private Clan _chooser;
    [SaveableField(4)]
    private DecisionOutcome _chosenOutcome;
    [SaveableField(5)]
    private bool _ignorePlayerSupport;
    [SaveableField(6)]
    private bool _hasPlayerVoted;

    public MBReadOnlyList<DecisionOutcome> PossibleOutcomes
    {
      get => (MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes;
    }

    [SaveableProperty(7)]
    public bool IsCancelled { get; private set; }

    public bool IsPlayerSupporter => this.PlayerAsSupporter != null;

    private Supporter PlayerAsSupporter
    {
      get => this._supporters.FirstOrDefault<Supporter>((Func<Supporter, bool>) (x => x.IsPlayer));
    }

    public bool IsPlayerChooser => this._chooser.Leader.IsHumanPlayerCharacter;

    public KingdomElection(KingdomDecision decision)
    {
      this._decision = decision;
      this.Setup();
    }

    private void Setup()
    {
      this._possibleOutcomes = this._decision.NarrowDownCandidates(this._decision.DetermineInitialCandidates().ToMBList<DecisionOutcome>(), 3);
      this._supporters = this._decision.DetermineSupporters().ToList<Supporter>();
      this._chooser = this._decision.DetermineChooser();
      this._decision.DetermineSponsors((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes);
      this._hasPlayerVoted = false;
      this.IsCancelled = false;
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
        possibleOutcome.InitialSupport = this.DetermineInitialSupport(possibleOutcome);
      float num = this._possibleOutcomes.Sum<DecisionOutcome>((Func<DecisionOutcome, float>) (x => x.InitialSupport));
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
        possibleOutcome.Likelihood = (double) num == 0.0 ? 0.0f : possibleOutcome.InitialSupport / num;
    }

    public void StartElection()
    {
      this.Setup();
      this.DetermineSupport((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes, false);
      this._decision.DetermineSponsors((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes);
      this.UpdateSupport((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes);
      if (this._decision.ShouldBeCancelled())
      {
        Debug.Print("SELIM_DEBUG - " + (object) this._decision.GetSupportTitle() + " has been cancelled");
        this.IsCancelled = true;
      }
      else if (!this.IsPlayerSupporter || this._ignorePlayerSupport)
      {
        this.ReadyToAiChoose();
      }
      else
      {
        if (!this._decision.IsSingleClanDecision())
          return;
        this._chosenOutcome = this._possibleOutcomes.FirstOrDefault<DecisionOutcome>((Func<DecisionOutcome, bool>) (t => t.SponsorClan != null && t.SponsorClan == Clan.PlayerClan));
        this._chosenOutcome.AddSupport(new Supporter(Clan.PlayerClan)
        {
          SupportWeight = Supporter.SupportWeights.FullyPush
        });
      }
    }

    private float DetermineInitialSupport(DecisionOutcome possibleOutcome)
    {
      float initialSupport = 0.0f;
      foreach (Supporter supporter in this._supporters)
      {
        if (!supporter.IsPlayer)
          initialSupport += MathF.Clamp(this._decision.DetermineSupport(supporter.Clan, possibleOutcome), 0.0f, 100f);
      }
      return initialSupport;
    }

    public void StartElectionWithoutPlayer()
    {
      this._ignorePlayerSupport = true;
      this.StartElection();
    }

    public float GetLikelihoodForOutcome(int outcomeNo)
    {
      return outcomeNo >= 0 && outcomeNo < this._possibleOutcomes.Count ? this._possibleOutcomes[outcomeNo].Likelihood : 0.0f;
    }

    public float GetLikelihoodForSponsor(Clan sponsor)
    {
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
      {
        if (possibleOutcome.SponsorClan == sponsor)
          return possibleOutcome.Likelihood;
      }
      Debug.FailedAssert("This clan is not a sponsor of any of the outcomes.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Election\\KingdomDecisionMaker.cs", nameof (GetLikelihoodForSponsor), 151);
      return -1f;
    }

    private void DetermineSupport(
      MBReadOnlyList<DecisionOutcome> possibleOutcomes,
      bool calculateRelationshipEffect)
    {
      foreach (Supporter supporter in this._supporters)
      {
        if (!supporter.IsPlayer)
        {
          Supporter.SupportWeights supportWeightOfSelectedOutcome = Supporter.SupportWeights.StayNeutral;
          DecisionOutcome supportOption = this._decision.DetermineSupportOption(supporter, possibleOutcomes, out supportWeightOfSelectedOutcome, calculateRelationshipEffect);
          if (supportOption != null)
          {
            supporter.SupportWeight = supportWeightOfSelectedOutcome;
            supportOption.AddSupport(supporter);
          }
        }
      }
    }

    private void UpdateSupport(MBReadOnlyList<DecisionOutcome> possibleOutcomes)
    {
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
      {
        foreach (Supporter supporter in new List<Supporter>((IEnumerable<Supporter>) possibleOutcome.SupporterList))
          possibleOutcome.ResetSupport(supporter);
      }
      this.DetermineSupport(possibleOutcomes, true);
    }

    private void ReadyToAiChoose()
    {
      this._chosenOutcome = this.GetAiChoice((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes);
      if (!this._decision.OnShowDecision())
        return;
      this.ApplyChosenOutcome();
    }

    private void ApplyChosenOutcome()
    {
      this._decision.ApplyChosenOutcome(this._chosenOutcome);
      this._decision.SupportStatusOfFinalDecision = this.GetSupportStatusOfDecisionOutcome(this._chosenOutcome);
      this.HandleInfluenceCosts();
      this.ApplySecondaryEffects((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes, this._chosenOutcome);
      for (int index1 = 0; index1 < this._possibleOutcomes.Count; ++index1)
      {
        if (this._possibleOutcomes[index1].SponsorClan != null)
        {
          foreach (Supporter supporter in this._possibleOutcomes[index1].SupporterList)
          {
            if (supporter.Clan.Leader != this._possibleOutcomes[index1].SponsorClan.Leader && supporter.Clan == Clan.PlayerClan)
            {
              int changeWithSponsor = this.GetRelationChangeWithSponsor(supporter.Clan.Leader, supporter.SupportWeight, false);
              if (changeWithSponsor != 0)
              {
                int relationChange = changeWithSponsor * (this._possibleOutcomes.Count > 2 ? 2 : 1);
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(supporter.Clan.Leader, this._possibleOutcomes[index1].SponsorClan.Leader, relationChange);
              }
            }
          }
          for (int index2 = 0; index2 < this._possibleOutcomes.Count; ++index2)
          {
            if (index1 != index2)
            {
              foreach (Supporter supporter in this._possibleOutcomes[index2].SupporterList)
              {
                if (supporter.Clan.Leader != this._possibleOutcomes[index1].SponsorClan.Leader && supporter.Clan == Clan.PlayerClan)
                {
                  int changeWithSponsor = this.GetRelationChangeWithSponsor(supporter.Clan.Leader, supporter.SupportWeight, true);
                  if (changeWithSponsor != 0)
                    ChangeRelationAction.ApplyRelationChangeBetweenHeroes(supporter.Clan.Leader, this._possibleOutcomes[index1].SponsorClan.Leader, changeWithSponsor);
                }
              }
            }
          }
        }
      }
      this._decision.Kingdom.RemoveDecision(this._decision);
      this._decision.Kingdom.OnKingdomDecisionConcluded();
      CampaignEventDispatcher.Instance.OnKingdomDecisionConcluded(this._decision, this._chosenOutcome, this.IsPlayerChooser || this._hasPlayerVoted);
    }

    public int GetRelationChangeWithSponsor(
      Hero opposerOrSupporter,
      Supporter.SupportWeights supportWeight,
      bool isOpposingSides)
    {
      int num = 0;
      Clan clan = opposerOrSupporter.Clan;
      switch (supportWeight)
      {
        case Supporter.SupportWeights.SlightlyFavor:
          num = (int) ((double) this._decision.GetInfluenceCostOfSupport(clan, Supporter.SupportWeights.SlightlyFavor) / 20.0);
          break;
        case Supporter.SupportWeights.StronglyFavor:
          num = (int) ((double) this._decision.GetInfluenceCostOfSupport(clan, Supporter.SupportWeights.StronglyFavor) / 20.0);
          break;
        case Supporter.SupportWeights.FullyPush:
          num = (int) ((double) this._decision.GetInfluenceCostOfSupport(clan, Supporter.SupportWeights.FullyPush) / 20.0);
          break;
      }
      int changeWithSponsor = isOpposingSides ? num * -1 : num * 2;
      if (isOpposingSides && opposerOrSupporter.Culture.HasFeat(DefaultCulturalFeats.SturgianDecisionPenaltyFeat))
        changeWithSponsor += (int) ((double) changeWithSponsor * (double) DefaultCulturalFeats.SturgianDecisionPenaltyFeat.EffectBonus);
      return changeWithSponsor;
    }

    private void HandleInfluenceCosts()
    {
      DecisionOutcome popularOption = this._possibleOutcomes[0];
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
      {
        if ((double) possibleOutcome.TotalSupportPoints > (double) popularOption.TotalSupportPoints)
          popularOption = possibleOutcome;
        for (int index = 0; index < possibleOutcome.SupporterList.Count; ++index)
        {
          Clan clan = possibleOutcome.SupporterList[index].Clan;
          int num = this._decision.GetInfluenceCost(possibleOutcome, clan, possibleOutcome.SupporterList[index].SupportWeight);
          if (this._supporters.Count == 1)
            num = 0;
          if (this._chosenOutcome != possibleOutcome)
            num /= 2;
          if ((possibleOutcome == this._chosenOutcome ? 0 : (clan.Leader.GetPerkValue(DefaultPerks.Charm.GoodNatured) ? 1 : 0)) == 0)
            ChangeClanInfluenceAction.Apply(clan, (float) -num);
        }
      }
      if (this._chosenOutcome == popularOption)
        return;
      ChangeClanInfluenceAction.Apply(this._chooser, (float) -Campaign.Current.Models.ClanPoliticsModel.GetInfluenceRequiredToOverrideKingdomDecision(popularOption, this._chosenOutcome, this._decision));
    }

    private void ApplySecondaryEffects(
      MBReadOnlyList<DecisionOutcome> possibleOutcomes,
      DecisionOutcome chosenOutcome)
    {
      this._decision.ApplySecondaryEffects(possibleOutcomes, chosenOutcome);
    }

    private int GetInfluenceRequiredToOverrideDecision(
      DecisionOutcome popularOutcome,
      DecisionOutcome overridingOutcome)
    {
      return Campaign.Current.Models.ClanPoliticsModel.GetInfluenceRequiredToOverrideKingdomDecision(popularOutcome, overridingOutcome, this._decision);
    }

    private DecisionOutcome GetAiChoice(MBReadOnlyList<DecisionOutcome> possibleOutcomes)
    {
      this.DetermineOfficialSupport();
      DecisionOutcome decisionOutcome1 = possibleOutcomes.MaxBy<DecisionOutcome, float>((Func<DecisionOutcome, float>) (t => t.TotalSupportPoints));
      DecisionOutcome aiChoice = decisionOutcome1;
      if (this._decision.IsKingsVoteAllowed)
      {
        DecisionOutcome decisionOutcome2 = possibleOutcomes.MaxBy<DecisionOutcome, float>((Func<DecisionOutcome, float>) (t => this._decision.DetermineSupport(this._chooser, t)));
        float num1 = MathF.Min(this._decision.DetermineSupport(this._chooser, decisionOutcome2) - this._decision.DetermineSupport(this._chooser, decisionOutcome1), this._chooser.Influence);
        if ((double) num1 > 10.0)
        {
          float num2 = 300f + (float) this.GetInfluenceRequiredToOverrideDecision(decisionOutcome1, decisionOutcome2);
          if ((double) num1 > (double) num2 && (double) MBRandom.RandomFloat > (double) (num2 / num1))
            aiChoice = decisionOutcome2;
        }
      }
      return aiChoice;
    }

    public TextObject GetChosenOutcomeText()
    {
      return this._decision.GetChosenOutcomeText(this._chosenOutcome, this._decision.SupportStatusOfFinalDecision);
    }

    private KingdomDecision.SupportStatus GetSupportStatusOfDecisionOutcome(
      DecisionOutcome chosenOutcome)
    {
      KingdomDecision.SupportStatus ofDecisionOutcome = KingdomDecision.SupportStatus.Equal;
      float num1 = chosenOutcome.WinChance * 100f;
      int num2 = 50;
      if ((double) num1 > (double) (num2 + 5))
        ofDecisionOutcome = KingdomDecision.SupportStatus.Majority;
      else if ((double) num1 < (double) (num2 - 5))
        ofDecisionOutcome = KingdomDecision.SupportStatus.Minority;
      return ofDecisionOutcome;
    }

    public void DetermineOfficialSupport()
    {
      List<Tuple<DecisionOutcome, float>> tupleList = new List<Tuple<DecisionOutcome, float>>();
      float num1 = 1f / 1000f;
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
      {
        float num2 = 0.0f;
        foreach (Supporter supporter in possibleOutcome.SupporterList)
          num2 += (float) MathF.Max(0, (int) (supporter.SupportWeight - 1));
        possibleOutcome.TotalSupportPoints = num2;
        num1 += possibleOutcome.TotalSupportPoints;
      }
      foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
        possibleOutcome.WinChance = possibleOutcome.TotalSupportPoints / num1;
    }

    public int GetInfluenceCostOfOutcome(
      DecisionOutcome outcome,
      Clan supporter,
      Supporter.SupportWeights weight)
    {
      return this._decision.GetInfluenceCostOfSupport(supporter, weight);
    }

    public TextObject GetSecondaryEffects() => this._decision.GetSecondaryEffects();

    public void OnPlayerSupport(
      DecisionOutcome decisionOutcome,
      Supporter.SupportWeights supportWeight)
    {
      if (!this.IsPlayerChooser)
      {
        foreach (DecisionOutcome possibleOutcome in (List<DecisionOutcome>) this._possibleOutcomes)
          possibleOutcome.ResetSupport(this.PlayerAsSupporter);
        this._hasPlayerVoted = true;
        if (decisionOutcome == null)
          return;
        this.PlayerAsSupporter.SupportWeight = supportWeight;
        decisionOutcome.AddSupport(this.PlayerAsSupporter);
      }
      else
        this._chosenOutcome = decisionOutcome;
    }

    public void ApplySelection()
    {
      if (this.IsCancelled)
        return;
      if (this._chooser != Clan.PlayerClan)
        this.ReadyToAiChoose();
      else
        this.ApplyChosenOutcome();
    }

    public MBList<DecisionOutcome> GetSortedDecisionOutcomes()
    {
      return this._decision.SortDecisionOutcomes((MBReadOnlyList<DecisionOutcome>) this._possibleOutcomes);
    }

    public TextObject GetGeneralTitle() => this._decision.GetGeneralTitle();

    public TextObject GetTitle()
    {
      return this.IsPlayerChooser ? this._decision.GetChooseTitle() : this._decision.GetSupportTitle();
    }

    public TextObject GetDescription()
    {
      return this.IsPlayerChooser ? this._decision.GetChooseDescription() : this._decision.GetSupportDescription();
    }
  }
}
