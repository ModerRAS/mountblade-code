// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementFoodModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementFoodModel : SettlementFoodModel
  {
    private static readonly TextObject ProsperityText = GameTexts.FindText("str_prosperity");
    private static readonly TextObject GarrisonText = GameTexts.FindText("str_garrison");
    private static readonly TextObject LandsAroundSettlementText = GameTexts.FindText("str_lands_around_settlement");
    private static readonly TextObject NormalVillagesText = GameTexts.FindText("str_normal_villages");
    private static readonly TextObject RaidedVillagesText = GameTexts.FindText("str_raided_villages");
    private static readonly TextObject VillagesUnderSiegeText = GameTexts.FindText("str_villages_under_siege");
    private static readonly TextObject FoodBoughtByCiviliansText = GameTexts.FindText("str_food_bought_by_civilians");
    private const int FoodProductionPerVillage = 10;

    public override int FoodStocksUpperLimit => 100;

    public override int NumberOfProsperityToEatOneFood => 40;

    public override int NumberOfMenOnGarrisonToEatOneFood => 20;

    public override int CastleFoodStockUpperLimitBonus => 150;

    public override ExplainedNumber CalculateTownFoodStocksChange(
      Town town,
      bool includeMarketStocks = true,
      bool includeDescriptions = false)
    {
      return this.CalculateTownFoodChangeInternal(town, includeMarketStocks, includeDescriptions);
    }

    private ExplainedNumber CalculateTownFoodChangeInternal(
      Town town,
      bool includeMarketStocks,
      bool includeDescriptions)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(includeDescriptions: includeDescriptions);
      float num1;
      if (!town.IsUnderSiege)
      {
        int num2 = town.IsTown ? 15 : 10;
        explainedNumber.Add((float) num2, DefaultSettlementFoodModel.LandsAroundSettlementText);
        num1 = -town.Prosperity / (float) this.NumberOfProsperityToEatOneFood;
      }
      else
        num1 = -town.Prosperity / (float) this.NumberOfProsperityToEatOneFood;
      MobileParty garrisonParty = town.GarrisonParty;
      int num3 = -(garrisonParty != null ? garrisonParty.Party.NumberOfAllMembers : 0) / this.NumberOfMenOnGarrisonToEatOneFood;
      float num4 = 0.0f;
      float num5 = 0.0f;
      if (town.Governor != null)
      {
        if (town.IsUnderSiege)
        {
          if (town.Governor.GetPerkValue(DefaultPerks.Steward.Gourmet))
            num5 += DefaultPerks.Steward.Gourmet.SecondaryBonus;
          if (town.Governor.GetPerkValue(DefaultPerks.Medicine.TriageTent))
            num4 += DefaultPerks.Medicine.TriageTent.SecondaryBonus;
        }
        if (town.Governor.GetPerkValue(DefaultPerks.Steward.MasterOfWarcraft))
          num4 += DefaultPerks.Steward.MasterOfWarcraft.SecondaryBonus;
      }
      float num6 = num1 + num1 * num4;
      int num7 = num3 + (int) ((double) num3 * ((double) num4 + (double) num5));
      explainedNumber.Add(num6, DefaultSettlementFoodModel.ProsperityText);
      explainedNumber.Add((float) num7, DefaultSettlementFoodModel.GarrisonText);
      if (town.Settlement.OwnerClan?.Kingdom != null && town.Settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.HuntingRights))
        explainedNumber.Add(2f, DefaultPolicies.HuntingRights.Name);
      if (!town.IsUnderSiege)
      {
        foreach (Village boundVillage in (List<Village>) town.Owner.Settlement.BoundVillages)
        {
          if (boundVillage.VillageState == Village.VillageStates.Normal)
          {
            int num8 = (boundVillage.GetHearthLevel() + 1) * 6;
            explainedNumber.Add((float) num8, boundVillage.Name);
          }
          else
          {
            int num9 = 0;
            explainedNumber.Add((float) num9, boundVillage.Name);
          }
        }
        float effectOfBuildings = town.GetEffectOfBuildings(BuildingEffectEnum.FoodProduction);
        if ((double) effectOfBuildings > 0.0)
          explainedNumber.Add(effectOfBuildings, includeDescriptions ? GameTexts.FindText("str_building_bonus") : TextObject.Empty);
      }
      else if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Roguery.DirtyFighting))
        explainedNumber.Add(DefaultPerks.Roguery.DirtyFighting.SecondaryBonus, DefaultPerks.Roguery.DirtyFighting.Name);
      else
        explainedNumber.Add(0.0f, DefaultSettlementFoodModel.VillagesUnderSiegeText);
      if (includeMarketStocks)
      {
        foreach (Town.SellLog soldItem in (IEnumerable<Town.SellLog>) town.SoldItems)
        {
          if (soldItem.Category.Properties == ItemCategory.Property.BonusToFoodStores)
            explainedNumber.Add((float) soldItem.Number, includeDescriptions ? soldItem.Category.GetName() : TextObject.Empty);
        }
      }
      DefaultSettlementFoodModel.GetSettlementFoodChangeDueToIssues(town, ref explainedNumber);
      return explainedNumber;
    }

    private int CalculateFoodPurchasedFromMarket(Town town)
    {
      return town.SoldItems.Sum<Town.SellLog>((Func<Town.SellLog, int>) (x => x.Category.Properties != ItemCategory.Property.BonusToFoodStores ? 0 : x.Number));
    }

    private static void GetSettlementFoodChangeDueToIssues(
      Town town,
      ref ExplainedNumber explainedNumber)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementFood, town.Settlement, ref explainedNumber);
    }
  }
}
