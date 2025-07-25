// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementProsperityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementProsperityModel : SettlementProsperityModel
  {
    private static readonly TextObject LoyaltyText = GameTexts.FindText("str_loyalty");
    private static readonly TextObject FoodShortageText = new TextObject("{=qTFKvGSg}Food Shortage");
    private static readonly TextObject ProsperityFromMarketText = new TextObject("{=RNT5hMVb}Goods From Market");
    private static readonly TextObject SurplusFoodText = GameTexts.FindText("str_surplus_food");
    private static readonly TextObject RaidedText = new TextObject("{=RVas572P}Raided");
    private static readonly TextObject HousingCostsText = new TextObject("{=ByRAgJy4}Housing Costs");

    public override ExplainedNumber CalculateProsperityChange(
      Town fortification,
      bool includeDescriptions = false)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateProsperityChangeInternal(fortification, ref explainedNumber);
      return explainedNumber;
    }

    public override ExplainedNumber CalculateHearthChange(Village village, bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateHearthChangeInternal(village, ref result, includeDescriptions);
      return result;
    }

    private void CalculateHearthChangeInternal(
      Village village,
      ref ExplainedNumber result,
      bool includeDescriptions)
    {
      if (village.VillageState == Village.VillageStates.Normal)
        result = new ExplainedNumber((double) village.Hearth < 300.0 ? 0.6f : ((double) village.Hearth < 600.0 ? 0.4f : 0.2f), includeDescriptions);
      if (village.VillageState == Village.VillageStates.Looted)
        result.Add(-1f, DefaultSettlementProsperityModel.RaidedText);
      if (village.Settlement.OwnerClan != null && village.Settlement.OwnerClan.Kingdom != null && village.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.GrazingRights))
        result.Add(-0.25f, DefaultPolicies.GrazingRights.Name);
      if (village.Bound != null && village.VillageState == Village.VillageStates.Normal)
      {
        if (village.Bound.Town.CurrentDefaultBuilding != null && village.Bound.Town.BuildingsInProgress.IsEmpty<Building>())
          BuildingHelper.AddDefaultDailyBonus(village.Bound.Town, BuildingEffectEnum.VillageDevelopmentDaily, ref result);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.BushDoctor, village.Bound.Town, ref result);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Athletics.Energetic, village.Bound.Town, ref result);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.AidCorps, village.Bound.Town, ref result);
      }
      if (village.Settlement.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.EmpireVillageHearthFeat) && (double) result.ResultNumber >= 0.0)
        result.AddFactor(DefaultCulturalFeats.EmpireVillageHearthFeat.EffectBonus, GameTexts.FindText("str_culture"));
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.VillageHearth, village.Settlement, ref result);
    }

    private void CalculateProsperityChangeInternal(
      Town fortification,
      ref ExplainedNumber explainedNumber)
    {
      float foodChange = fortification.FoodChange;
      if (fortification.Owner.IsStarving)
      {
        ExplainedNumber bonuses = new ExplainedNumber((double) foodChange < 0.0 ? (float) (int) foodChange : 0.0f);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.HelpingHands, fortification, ref bonuses);
        explainedNumber.Add(bonuses.ResultNumber * 0.5f, DefaultSettlementProsperityModel.FoodShortageText);
      }
      if (fortification.IsTown)
      {
        if ((double) fortification.Prosperity < 250.0)
          explainedNumber.Add(6f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity < 500.0)
          explainedNumber.Add(5f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity < 750.0)
          explainedNumber.Add(4f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity < 1000.0)
          explainedNumber.Add(3f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity < 1250.0)
          explainedNumber.Add(2f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity < 1500.0)
          explainedNumber.Add(1f, DefaultSettlementProsperityModel.HousingCostsText);
        if ((double) fortification.Prosperity > 21000.0)
          explainedNumber.Add(-6f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity > 18000.0)
          explainedNumber.Add(-5f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity > 15000.0)
          explainedNumber.Add(-4f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity > 12000.0)
          explainedNumber.Add(-3f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity > 9000.0)
          explainedNumber.Add(-2f, DefaultSettlementProsperityModel.HousingCostsText);
        else if ((double) fortification.Prosperity > 6000.0)
          explainedNumber.Add(-1f, DefaultSettlementProsperityModel.HousingCostsText);
      }
      int num1 = fortification.FoodStocksUpperLimit();
      int num2 = (int) ((double) fortification.FoodStocks + (double) foodChange) - num1;
      if (num2 > 0)
        explainedNumber.Add((float) num2 * 0.1f, DefaultSettlementProsperityModel.SurplusFoodText);
      if (fortification.IsTown)
      {
        int num3 = fortification.SoldItems.Sum<Town.SellLog>((Func<Town.SellLog, int>) (x => x.Category.Properties != ItemCategory.Property.BonusToProsperity ? 0 : x.Number));
        if (num3 > 0)
          explainedNumber.Add((float) num3 * 0.1f, DefaultSettlementProsperityModel.ProsperityFromMarketText);
      }
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.PristineStreets, fortification, ref explainedNumber);
      if (PerkHelper.GetPerkValueForTown(DefaultPerks.Engineering.Apprenticeship, fortification))
      {
        float num4 = 0.0f;
        foreach (Building building in fortification.Buildings.Where<Building>((Func<Building, bool>) (x => !x.BuildingType.IsDefaultProject && x.CurrentLevel > 0)))
          num4 += DefaultPerks.Engineering.Apprenticeship.SecondaryBonus;
        if ((double) num4 > 0.0 && (double) explainedNumber.ResultNumber > 0.0)
          explainedNumber.AddFactor(num4, DefaultPerks.Engineering.Apprenticeship.Name);
      }
      if (fortification.BuildingsInProgress.IsEmpty<Building>())
        BuildingHelper.AddDefaultDailyBonus(fortification, BuildingEffectEnum.ProsperityDaily, ref explainedNumber);
      foreach (Building building in (List<Building>) fortification.Buildings)
      {
        float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.Prosperity);
        if (!building.BuildingType.IsDefaultProject && (double) buildingEffectAmount > 0.0 && (double) foodChange > 0.0)
          explainedNumber.Add(buildingEffectAmount, building.Name);
        if (building.CurrentLevel > 0 && (building.BuildingType == DefaultBuildingTypes.SettlementAquaducts || building.BuildingType == DefaultBuildingTypes.CastleGranary || building.BuildingType == DefaultBuildingTypes.SettlementGranary))
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.CleanInfrastructure, fortification, ref explainedNumber);
      }
      if ((double) fortification.Loyalty > (double) Campaign.Current.Models.SettlementLoyaltyModel.ThresholdForProsperityBoost && (double) foodChange > 0.0)
        explainedNumber.Add(Campaign.Current.Models.SettlementLoyaltyModel.HighLoyaltyProsperityEffect, DefaultSettlementProsperityModel.LoyaltyText);
      else if ((double) fortification.Loyalty <= (double) Campaign.Current.Models.SettlementLoyaltyModel.ThresholdForProsperityPenalty)
        explainedNumber.Add((float) Campaign.Current.Models.SettlementLoyaltyModel.LowLoyaltyProsperityEffect, DefaultSettlementProsperityModel.LoyaltyText);
      if (fortification.IsTown && !fortification.CurrentBuilding.IsCurrentlyDefault && fortification.Governor != null && fortification.Governor.GetPerkValue(DefaultPerks.Trade.TrickleDown))
        explainedNumber.Add(DefaultPerks.Trade.TrickleDown.SecondaryBonus, DefaultPerks.Trade.TrickleDown.Name);
      if (fortification.Settlement.OwnerClan.Kingdom != null)
      {
        if (fortification.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.RoadTolls))
          explainedNumber.Add(-0.2f, DefaultPolicies.RoadTolls.Name);
        if (fortification.Settlement.OwnerClan.Kingdom.RulingClan == fortification.Settlement.OwnerClan && fortification.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.ImperialTowns))
          explainedNumber.Add(1f, DefaultPolicies.ImperialTowns.Name);
        if (fortification.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.CrownDuty))
          explainedNumber.Add(-1f, DefaultPolicies.CrownDuty.Name);
        if (fortification.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.WarTax))
          explainedNumber.Add(-1f, DefaultPolicies.WarTax.Name);
      }
      this.GetSettlementProsperityChangeDueToIssues(fortification.Settlement, ref explainedNumber);
    }

    private void GetSettlementProsperityChangeDueToIssues(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementProsperity, settlement, ref result);
    }
  }
}
