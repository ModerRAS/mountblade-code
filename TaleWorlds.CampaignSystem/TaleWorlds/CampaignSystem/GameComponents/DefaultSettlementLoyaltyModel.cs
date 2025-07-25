// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementLoyaltyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementLoyaltyModel : SettlementLoyaltyModel
  {
    private const float StarvationLoyaltyEffect = -1f;
    private const int AdditionalStarvationLoyaltyEffectAfterDays = 14;
    private const float NotableSupportsOwnerLoyaltyEffect = 0.5f;
    private const float NotableSupportsEnemyLoyaltyEffect = -0.5f;
    private static readonly TextObject StarvingText = GameTexts.FindText("str_starving");
    private static readonly TextObject CultureText = new TextObject("{=YjoXyFDX}Owner Culture");
    private static readonly TextObject NotableText = GameTexts.FindText("str_notable_relations");
    private static readonly TextObject CrimeText = GameTexts.FindText("str_governor_criminal");
    private static readonly TextObject GovernorText = GameTexts.FindText("str_notable_governor");
    private static readonly TextObject GovernorCultureText = new TextObject("{=5Vo8dJub}Governor's Culture");
    private static readonly TextObject NoGovernorText = new TextObject("{=NH5N3kP5}No governor");
    private static readonly TextObject SecurityText = GameTexts.FindText("str_security");
    private static readonly TextObject LoyaltyText = GameTexts.FindText("str_loyalty");
    private static readonly TextObject LoyaltyDriftText = GameTexts.FindText("str_loyalty_drift");
    private static readonly TextObject CorruptionText = GameTexts.FindText("str_corruption");

    public override float HighLoyaltyProsperityEffect => 0.5f;

    public override int LowLoyaltyProsperityEffect => -1;

    public override int ThresholdForTaxBoost => 75;

    public override int ThresholdForTaxCorruption => 50;

    public override int ThresholdForHigherTaxCorruption => 25;

    public override int ThresholdForProsperityBoost => 75;

    public override int ThresholdForProsperityPenalty => 25;

    public override int AdditionalStarvationPenaltyStartDay => 14;

    public override int AdditionalStarvationLoyaltyEffect => -1;

    public override int RebellionStartLoyaltyThreshold => 15;

    public override int RebelliousStateStartLoyaltyThreshold => 25;

    public override int LoyaltyBoostAfterRebellionStartValue => 5;

    public override int MilitiaBoostPercentage => 200;

    public override float ThresholdForNotableRelationBonus => 75f;

    public override int DailyNotableRelationBonus => 1;

    public override int SettlementLoyaltyChangeDueToSecurityThreshold => 50;

    public override int MaximumLoyaltyInSettlement => 100;

    public override int LoyaltyDriftMedium => 50;

    public override float HighSecurityLoyaltyEffect => 1f;

    public override float LowSecurityLoyaltyEffect => -2f;

    public override float GovernorSameCultureLoyaltyEffect => 1f;

    public override float GovernorDifferentCultureLoyaltyEffect => -1f;

    public override float SettlementOwnerDifferentCultureLoyaltyEffect => -3f;

    public override ExplainedNumber CalculateLoyaltyChange(Town town, bool includeDescriptions = false)
    {
      return this.CalculateLoyaltyChangeInternal(town, includeDescriptions);
    }

    public override void CalculateGoldGainDueToHighLoyalty(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = MBMath.Map(town.Loyalty, (float) this.ThresholdForTaxBoost, 100f, 0.0f, 20f);
      explainedNumber.AddFactor(num * 0.01f, DefaultSettlementLoyaltyModel.LoyaltyText);
    }

    public override void CalculateGoldCutDueToLowLoyalty(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = MBMath.Map(town.Loyalty, (float) this.ThresholdForHigherTaxCorruption, (float) this.ThresholdForTaxCorruption, 50f, 0.0f);
      explainedNumber.AddFactor((float) (-1.0 * (double) num * 0.0099999997764825821), DefaultSettlementLoyaltyModel.CorruptionText);
    }

    private ExplainedNumber CalculateLoyaltyChangeInternal(Town town, bool includeDescriptions = false)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.GetSettlementLoyaltyChangeDueToFoodStocks(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToGovernorCulture(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToOwnerCulture(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToPolicies(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToProjects(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToIssues(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToSecurity(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToNotableRelations(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToGovernorPerks(town, ref explainedNumber);
      this.GetSettlementLoyaltyChangeDueToLoyaltyDrift(town, ref explainedNumber);
      return explainedNumber;
    }

    private void GetSettlementLoyaltyChangeDueToGovernorPerks(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Leadership.HeroicLeader, town, ref explainedNumber);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.PhysicianOfPeople, town, ref explainedNumber);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Athletics.Durable, town, ref explainedNumber);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Bow.Discipline, town, ref explainedNumber);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Riding.WellStraped, town, ref explainedNumber);
      float num = 0.0f;
      for (int index1 = 0; index1 < town.Settlement.Parties.Count; ++index1)
      {
        MobileParty party = town.Settlement.Parties[index1];
        if (party.ActualClan == town.OwnerClan)
        {
          if (party.IsMainParty)
          {
            for (int index2 = 0; index2 < party.MemberRoster.Count; ++index2)
            {
              CharacterObject characterAtIndex = party.MemberRoster.GetCharacterAtIndex(index2);
              if (characterAtIndex.IsHero && characterAtIndex.HeroObject.GetPerkValue(DefaultPerks.Charm.Parade))
                num += DefaultPerks.Charm.Parade.PrimaryBonus;
            }
          }
          else if (party.LeaderHero != null && party.LeaderHero.GetPerkValue(DefaultPerks.Charm.Parade))
            num += DefaultPerks.Charm.Parade.PrimaryBonus;
        }
      }
      foreach (Hero hero in (List<Hero>) town.Settlement.HeroesWithoutParty)
      {
        if (hero.Clan == town.OwnerClan && hero.GetPerkValue(DefaultPerks.Charm.Parade))
          num += DefaultPerks.Charm.Parade.PrimaryBonus;
      }
      if ((double) num <= 0.0)
        return;
      explainedNumber.Add(num, DefaultPerks.Charm.Parade.Name);
    }

    private void GetSettlementLoyaltyChangeDueToNotableRelations(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float f = 0.0f;
      foreach (Hero notable in (List<Hero>) town.Settlement.Notables)
      {
        if (notable.SupporterOf != null)
        {
          if (notable.SupporterOf == town.Settlement.OwnerClan)
            f += 0.5f;
          else if (town.Settlement.OwnerClan.IsAtWarWith((IFaction) notable.SupporterOf))
            f += -0.5f;
        }
      }
      if (f.ApproximatelyEqualsTo(0.0f))
        return;
      explainedNumber.Add(f, DefaultSettlementLoyaltyModel.NotableText);
    }

    private void GetSettlementLoyaltyChangeDueToOwnerCulture(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      if (town.Settlement.OwnerClan.Culture == town.Settlement.Culture)
        return;
      explainedNumber.Add(this.SettlementOwnerDifferentCultureLoyaltyEffect, DefaultSettlementLoyaltyModel.CultureText);
    }

    private void GetSettlementLoyaltyChangeDueToPolicies(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      Kingdom kingdom = town.Owner.Settlement.OwnerClan.Kingdom;
      if (kingdom == null)
        return;
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.Citizenship))
      {
        if (town.Settlement.OwnerClan.Culture == town.Settlement.Culture)
          explainedNumber.Add(0.5f, DefaultPolicies.Citizenship.Name);
        else
          explainedNumber.Add(-0.5f, DefaultPolicies.Citizenship.Name);
      }
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.HuntingRights))
        explainedNumber.Add(-0.2f, DefaultPolicies.HuntingRights.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.GrazingRights))
        explainedNumber.Add(0.5f, DefaultPolicies.GrazingRights.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.TrialByJury))
        explainedNumber.Add(0.5f, DefaultPolicies.TrialByJury.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.ImperialTowns))
      {
        if (kingdom.RulingClan == town.Settlement.OwnerClan)
          explainedNumber.Add(1f, DefaultPolicies.ImperialTowns.Name);
        else
          explainedNumber.Add(-0.3f, DefaultPolicies.ImperialTowns.Name);
      }
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.ForgivenessOfDebts))
        explainedNumber.Add(2f, DefaultPolicies.ForgivenessOfDebts.Name);
      if (kingdom.ActivePolicies.Contains(DefaultPolicies.TribunesOfThePeople))
        explainedNumber.Add(1f, DefaultPolicies.TribunesOfThePeople.Name);
      if (!kingdom.ActivePolicies.Contains(DefaultPolicies.DebasementOfTheCurrency))
        return;
      explainedNumber.Add(-1f, DefaultPolicies.DebasementOfTheCurrency.Name);
    }

    private void GetSettlementLoyaltyChangeDueToGovernorCulture(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      if (town.Governor == null)
        return;
      explainedNumber.Add(town.Governor.Culture == town.Culture ? this.GovernorSameCultureLoyaltyEffect : this.GovernorDifferentCultureLoyaltyEffect, DefaultSettlementLoyaltyModel.GovernorCultureText);
    }

    private void GetSettlementLoyaltyChangeDueToFoodStocks(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      if (!town.Settlement.IsStarving)
        return;
      float num = -1f;
      if ((double) town.Settlement.Party.DaysStarving > 14.0)
        num += -1f;
      explainedNumber.Add(num, DefaultSettlementLoyaltyModel.StarvingText);
    }

    private void GetSettlementLoyaltyChangeDueToSecurity(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      float num = (double) town.Security > (double) this.SettlementLoyaltyChangeDueToSecurityThreshold ? MBMath.Map(town.Security, (float) this.SettlementLoyaltyChangeDueToSecurityThreshold, (float) this.MaximumLoyaltyInSettlement, 0.0f, this.HighSecurityLoyaltyEffect) : MBMath.Map(town.Security, 0.0f, (float) this.SettlementLoyaltyChangeDueToSecurityThreshold, this.LowSecurityLoyaltyEffect, 0.0f);
      explainedNumber.Add(num, DefaultSettlementLoyaltyModel.SecurityText);
    }

    private void GetSettlementLoyaltyChangeDueToProjects(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      if (town.BuildingsInProgress.IsEmpty<Building>())
        BuildingHelper.AddDefaultDailyBonus(town, BuildingEffectEnum.LoyaltyDaily, ref explainedNumber);
      foreach (Building building in (List<Building>) town.Buildings)
      {
        float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.Loyalty);
        if (!building.BuildingType.IsDefaultProject && (double) buildingEffectAmount > 0.0)
          explainedNumber.Add(buildingEffectAmount, building.Name);
      }
    }

    private void GetSettlementLoyaltyChangeDueToIssues(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementLoyalty, town.Settlement, ref explainedNumber);
    }

    private void GetSettlementLoyaltyChangeDueToLoyaltyDrift(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      explainedNumber.Add((float) (-1.0 * ((double) town.Loyalty - (double) this.LoyaltyDriftMedium) * 0.10000000149011612), DefaultSettlementLoyaltyModel.LoyaltyDriftText);
    }
  }
}
