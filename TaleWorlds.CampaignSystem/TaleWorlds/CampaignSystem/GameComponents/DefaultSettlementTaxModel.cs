// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementTaxModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementTaxModel : SettlementTaxModel
  {
    private static readonly TextObject ProsperityText = GameTexts.FindText("str_prosperity");
    private static readonly TextObject VeryLowSecurity = new TextObject("{=IaJ4lhzx}Very Low Security");
    private static readonly TextObject VeryLowLoyalty = new TextObject("{=CcQzFnpN}Very Low Loyalty");

    public override float SettlementCommissionRateTown => 0.06f;

    public override float SettlementCommissionRateVillage => 0.7f;

    public override int SettlementCommissionDecreaseSecurityThreshold => 75;

    public override int MaximumDecreaseBasedOnSecuritySecurity => 10;

    public override float GetTownTaxRatio(Town town)
    {
      float num = 1f;
      if (town.Settlement.OwnerClan.Kingdom != null && town.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.CrownDuty))
        num += 0.05f;
      return this.SettlementCommissionRateTown * num;
    }

    public override float GetVillageTaxRatio() => this.SettlementCommissionRateVillage;

    public override float GetTownCommissionChangeBasedOnSecurity(Town town, float commission)
    {
      if ((double) town.Security >= (double) this.SettlementCommissionDecreaseSecurityThreshold)
        return commission;
      float num = MBMath.Map((float) this.SettlementCommissionDecreaseSecurityThreshold - town.Security, 0.0f, (float) this.SettlementCommissionDecreaseSecurityThreshold, (float) this.MaximumDecreaseBasedOnSecuritySecurity, 0.0f);
      commission -= commission * (num * 0.01f);
      return commission;
    }

    public override ExplainedNumber CalculateTownTax(Town town, bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateDailyTaxInternal(town, ref result);
      return result;
    }

    private float CalculateDailyTax(Town town, ref ExplainedNumber explainedNumber)
    {
      double prosperity = (double) town.Prosperity;
      float num1 = 1f;
      if (town.Settlement.OwnerClan.Kingdom != null && town.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.CouncilOfTheCommons))
        num1 -= 0.05f;
      float num2 = (float) (prosperity * 0.34999999403953552) * num1;
      explainedNumber.Add(num2, DefaultSettlementTaxModel.ProsperityText);
      return explainedNumber.ResultNumber;
    }

    private void CalculateDailyTaxInternal(Town town, ref ExplainedNumber result)
    {
      float dailyTax = this.CalculateDailyTax(town, ref result);
      this.CalculatePolicyGoldCut(town, dailyTax, ref result);
      if (town.IsTown || town.IsCastle)
      {
        if (PerkHelper.GetPerkValueForTown(DefaultPerks.Bow.QuickDraw, town))
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Bow.QuickDraw, town, ref result);
        Hero governor = town.Governor;
        if ((governor != null ? (governor.GetPerkValue(DefaultPerks.Steward.Logistician) ? 1 : 0) : 0) != 0)
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.Logistician, town, ref result);
      }
      if (town.IsTown)
      {
        if (PerkHelper.GetPerkValueForTown(DefaultPerks.Scouting.DesertBorn, town))
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Scouting.DesertBorn, town, ref result);
        if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Steward.PriceOfLoyalty))
        {
          int num = town.Governor.GetSkillValue(DefaultSkills.Steward) - Campaign.Current.Models.CharacterDevelopmentModel.MinSkillRequiredForEpicPerkBonus;
          result.AddFactor(DefaultPerks.Steward.PriceOfLoyalty.SecondaryBonus * (float) num, DefaultPerks.Steward.PriceOfLoyalty.Name);
        }
        if (town.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.KhuzaitDecreasedTaxFeat))
          result.AddFactor(DefaultCulturalFeats.KhuzaitDecreasedTaxFeat.EffectBonus, GameTexts.FindText("str_culture"));
      }
      this.GetSettlementTaxChangeDueToIssues(town, ref result);
      this.CalculateSettlementTaxDueToSecurity(town, ref result);
      this.CalculateSettlementTaxDueToLoyalty(town, ref result);
      this.CalculateSettlementTaxDueToBuildings(town, ref result);
      result.Clamp(0.0f, float.MaxValue);
    }

    private void CalculateSettlementTaxDueToSecurity(Town town, ref ExplainedNumber explainedNumber)
    {
      SettlementSecurityModel settlementSecurityModel = Campaign.Current.Models.SettlementSecurityModel;
      if ((double) town.Security >= (double) settlementSecurityModel.ThresholdForTaxBoost)
      {
        settlementSecurityModel.CalculateGoldGainDueToHighSecurity(town, ref explainedNumber);
      }
      else
      {
        if ((double) town.Security < (double) settlementSecurityModel.ThresholdForHigherTaxCorruption || (double) town.Security >= (double) settlementSecurityModel.ThresholdForTaxCorruption)
          return;
        settlementSecurityModel.CalculateGoldCutDueToLowSecurity(town, ref explainedNumber);
      }
    }

    private void CalculateSettlementTaxDueToLoyalty(Town town, ref ExplainedNumber explainedNumber)
    {
      SettlementLoyaltyModel settlementLoyaltyModel = Campaign.Current.Models.SettlementLoyaltyModel;
      if ((double) town.Loyalty >= (double) settlementLoyaltyModel.ThresholdForTaxBoost)
        settlementLoyaltyModel.CalculateGoldGainDueToHighLoyalty(town, ref explainedNumber);
      else if ((double) town.Loyalty >= (double) settlementLoyaltyModel.ThresholdForHigherTaxCorruption && (double) town.Loyalty <= (double) settlementLoyaltyModel.ThresholdForTaxCorruption)
      {
        settlementLoyaltyModel.CalculateGoldCutDueToLowLoyalty(town, ref explainedNumber);
      }
      else
      {
        if ((double) town.Loyalty >= (double) settlementLoyaltyModel.ThresholdForHigherTaxCorruption)
          return;
        explainedNumber.AddFactor(-1f, DefaultSettlementTaxModel.VeryLowLoyalty);
      }
    }

    private void CalculateSettlementTaxDueToBuildings(Town town, ref ExplainedNumber result)
    {
      if (!town.IsTown && !town.IsCastle)
        return;
      foreach (Building building in (List<Building>) town.Buildings)
      {
        float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.Tax);
        result.AddFactor(buildingEffectAmount * 0.01f, building.Name);
      }
    }

    private void CalculatePolicyGoldCut(
      Town town,
      float rawTax,
      ref ExplainedNumber explainedNumber)
    {
      if (!town.MapFaction.IsKingdomFaction)
        return;
      Kingdom mapFaction = (Kingdom) town.MapFaction;
      if (mapFaction.ActivePolicies.Contains(DefaultPolicies.Magistrates))
        explainedNumber.Add(-0.05f * rawTax, DefaultPolicies.Magistrates.Name);
      if (mapFaction.ActivePolicies.Contains(DefaultPolicies.Cantons))
        explainedNumber.Add(-0.1f * rawTax, DefaultPolicies.Cantons.Name);
      if (mapFaction.ActivePolicies.Contains(DefaultPolicies.Bailiffs))
        explainedNumber.Add(-0.05f * rawTax, DefaultPolicies.Bailiffs.Name);
      if (!mapFaction.ActivePolicies.Contains(DefaultPolicies.TribunesOfThePeople))
        return;
      explainedNumber.Add(-0.05f * rawTax, DefaultPolicies.TribunesOfThePeople.Name);
    }

    private void GetSettlementTaxChangeDueToIssues(Town center, ref ExplainedNumber result)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementTax, center.Owner.Settlement, ref result);
    }

    public override int CalculateVillageTaxFromIncome(Village village, int marketIncome)
    {
      return (int) ((double) marketIncome * (double) this.GetVillageTaxRatio());
    }
  }
}
