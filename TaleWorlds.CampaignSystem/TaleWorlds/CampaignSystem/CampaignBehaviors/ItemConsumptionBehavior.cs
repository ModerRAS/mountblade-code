// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.ItemConsumptionBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class ItemConsumptionBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedFollowUp));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedFollowUpEnd));
      CampaignEvents.DailyTickTownEvent.AddNonSerializedListener((object) this, new Action<Town>(this.DailyTickTown));
    }

    private void OnNewGameCreatedFollowUp(CampaignGameStarter starter, int i)
    {
      if (i >= 2)
        return;
      this.MakeConsumptionAllTowns();
    }

    private void OnNewGameCreatedFollowUpEnd(CampaignGameStarter starter)
    {
      Dictionary<ItemCategory, float> categoryBudget = new Dictionary<ItemCategory, float>();
      for (int index = 0; index < 10; ++index)
      {
        foreach (Town allTown in (List<Town>) Town.AllTowns)
        {
          ItemConsumptionBehavior.UpdateSupplyAndDemand(allTown);
          this.UpdateDemandShift(allTown, categoryBudget);
        }
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void DailyTickTown(Town town)
    {
      Dictionary<ItemCategory, int> saleLog = new Dictionary<ItemCategory, int>();
      this.MakeConsumptionInTown(town, saleLog);
    }

    private void MakeConsumptionAllTowns()
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
        this.DailyTickTown(allTown);
    }

    private void MakeConsumptionInTown(Town town, Dictionary<ItemCategory, int> saleLog)
    {
      Dictionary<ItemCategory, float> dictionary = new Dictionary<ItemCategory, float>();
      this.DeleteOverproducedItems(town);
      ItemConsumptionBehavior.UpdateSupplyAndDemand(town);
      this.UpdateDemandShift(town, dictionary);
      ItemConsumptionBehavior.MakeConsumption(town, dictionary, saleLog);
      ItemConsumptionBehavior.GetFoodFromMarket(town, saleLog);
      this.UpdateSellLog(town, saleLog);
      this.UpdateTownGold(town);
    }

    private void UpdateTownGold(Town town)
    {
      int townGoldChange = Campaign.Current.Models.SettlementConsumptionModel.GetTownGoldChange(town);
      town.ChangeGold(townGoldChange);
    }

    private void DeleteOverproducedItems(Town town)
    {
      ItemRoster itemRoster = town.Owner.ItemRoster;
      for (int index = itemRoster.Count - 1; index >= 0; --index)
      {
        ItemRosterElement elementCopyAtIndex = itemRoster.GetElementCopyAtIndex(index);
        EquipmentElement equipmentElement = elementCopyAtIndex.EquipmentElement;
        ItemObject itemObject = equipmentElement.Item;
        int amount = elementCopyAtIndex.Amount;
        if (amount > 0 && (itemObject.IsCraftedByPlayer || itemObject.IsBannerItem))
        {
          itemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, -amount);
        }
        else
        {
          equipmentElement = elementCopyAtIndex.EquipmentElement;
          if (equipmentElement.ItemModifier != null && (double) MBRandom.RandomFloat < 0.5)
            itemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, -1);
        }
      }
    }

    private static void GetFoodFromMarket(Town town, Dictionary<ItemCategory, int> saleLog)
    {
      float foodChange = town.FoodChange;
      (int num1, int num2) = TownHelpers.GetTownFoodAndMarketStocks(town);
      if (!town.IsTown || !town.IsUnderSiege || (double) foodChange >= 0.0 || num1 > 0 || num2 <= 0)
        return;
      ItemConsumptionBehavior.GetFoodFromMarketInternal(town, Math.Abs(MathF.Floor(foodChange)), saleLog);
    }

    private void UpdateSellLog(Town town, Dictionary<ItemCategory, int> saleLog)
    {
      List<Town.SellLog> logList = new List<Town.SellLog>();
      foreach (KeyValuePair<ItemCategory, int> keyValuePair in saleLog)
      {
        if (keyValuePair.Value > 0)
          logList.Add(new Town.SellLog(keyValuePair.Key, keyValuePair.Value));
      }
      town.SetSoldItems((IEnumerable<Town.SellLog>) logList);
    }

    private static void GetFoodFromMarketInternal(
      Town town,
      int amount,
      Dictionary<ItemCategory, int> saleLog)
    {
      ItemRoster itemRoster = town.Owner.ItemRoster;
      for (int index = itemRoster.Count - 1; index >= 0 && amount > 0; --index)
      {
        ItemRosterElement elementCopyAtIndex = itemRoster.GetElementCopyAtIndex(index);
        ItemObject itemObject = elementCopyAtIndex.EquipmentElement.Item;
        if (itemObject.ItemCategory.Properties == ItemCategory.Property.BonusToFoodStores)
        {
          int num1 = elementCopyAtIndex.Amount >= amount ? amount : elementCopyAtIndex.Amount;
          amount -= num1;
          itemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, -num1);
          int num2 = 0;
          saleLog.TryGetValue(itemObject.ItemCategory, out num2);
          saleLog[itemObject.ItemCategory] = num2 + num1;
        }
      }
    }

    private static void MakeConsumption(
      Town town,
      Dictionary<ItemCategory, float> categoryDemand,
      Dictionary<ItemCategory, int> saleLog)
    {
      saleLog.Clear();
      TownMarketData marketData = town.MarketData;
      ItemRoster itemRoster = town.Owner.ItemRoster;
      for (int index = itemRoster.Count - 1; index >= 0; --index)
      {
        ItemRosterElement elementCopyAtIndex = itemRoster.GetElementCopyAtIndex(index);
        ItemObject itemObject = elementCopyAtIndex.EquipmentElement.Item;
        int amount = elementCopyAtIndex.Amount;
        ItemCategory itemCategory = itemObject.GetItemCategory();
        float demand = categoryDemand[itemCategory];
        float budget = ItemConsumptionBehavior.CalculateBudget(town, demand, itemCategory);
        if ((double) budget > 0.0099999997764825821)
        {
          int price = marketData.GetPrice(itemObject);
          float f = budget / (float) price;
          if ((double) f > (double) amount)
            f = (float) amount;
          int num1 = MBRandom.RoundRandomized(f);
          if (num1 > amount)
            num1 = amount;
          itemRoster.AddToCounts(elementCopyAtIndex.EquipmentElement, -num1);
          categoryDemand[itemCategory] = budget - f * (float) price;
          town.ChangeGold(num1 * price);
          int num2 = 0;
          saleLog.TryGetValue(itemCategory, out num2);
          saleLog[itemCategory] = num2 + num1;
        }
      }
    }

    private static float CalculateBudget(Town town, float demand, ItemCategory category)
    {
      return demand * MathF.Pow(town.GetItemCategoryPriceIndex(category), 0.3f);
    }

    private void UpdateDemandShift(Town town, Dictionary<ItemCategory, float> categoryBudget)
    {
      TownMarketData marketData = town.MarketData;
      foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
        categoryBudget[itemCategory] = Campaign.Current.Models.SettlementConsumptionModel.GetDailyDemandForCategory(town, itemCategory);
      foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
      {
        if (itemCategory.CanSubstitute != null)
        {
          ItemData categoryData1 = marketData.GetCategoryData(itemCategory);
          ItemData categoryData2 = marketData.GetCategoryData(itemCategory.CanSubstitute);
          if ((double) categoryData1.Supply / (double) categoryData1.Demand > (double) categoryData2.Supply / (double) categoryData2.Demand && (double) categoryData2.Demand > (double) categoryData1.Demand)
          {
            float num1 = (categoryData2.Demand - categoryData1.Demand) * itemCategory.SubstitutionFactor;
            marketData.SetDemand(itemCategory, categoryData1.Demand + num1);
            marketData.SetDemand(itemCategory.CanSubstitute, categoryData2.Demand - num1);
            float num2;
            float num3;
            if (categoryBudget.TryGetValue(itemCategory, out num2) && categoryBudget.TryGetValue(itemCategory.CanSubstitute, out num3))
            {
              categoryBudget[itemCategory] = num2 + num1;
              categoryBudget[itemCategory.CanSubstitute] = num3 - num1;
            }
          }
        }
      }
    }

    private static void UpdateSupplyAndDemand(Town town)
    {
      TownMarketData marketData = town.MarketData;
      SettlementEconomyModel consumptionModel = Campaign.Current.Models.SettlementConsumptionModel;
      foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
      {
        ItemData categoryData = marketData.GetCategoryData(itemCategory);
        float demandForCategory = consumptionModel.GetEstimatedDemandForCategory(town, categoryData, itemCategory);
        (float supply, float demand) = consumptionModel.GetSupplyDemandForCategory(town, itemCategory, (float) categoryData.InStoreValue, demandForCategory, categoryData.Supply, categoryData.Demand);
        marketData.SetSupplyDemand(itemCategory, supply, demand);
      }
    }
  }
}
