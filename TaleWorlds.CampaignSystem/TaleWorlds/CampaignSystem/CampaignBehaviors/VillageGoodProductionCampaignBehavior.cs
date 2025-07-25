// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.VillageGoodProductionCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class VillageGoodProductionCampaignBehavior : CampaignBehaviorBase
  {
    public const float DistributingItemsAtWorldConstant = 1.5f;

    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      if (i == 1)
      {
        this.DistributeInitialItemsToTowns();
        this.CalculateInitialAccumulatedTaxes();
        foreach (Village village in (List<Village>) Village.All)
        {
          float num = MBRandom.RandomFloat * 5f;
          for (int index = 0; (double) index < (double) num; ++index)
            this.TickProductions(village.Settlement);
        }
      }
      if (i % 20 != 0)
        return;
      foreach (SettlementComponent settlementComponent in (List<Village>) Village.All)
        this.TickProductions(settlementComponent.Settlement, true);
    }

    private void DailyTickSettlement(Settlement settlement) => this.TickProductions(settlement);

    private void DistributeInitialItemsToTowns()
    {
      int num1 = 25;
      foreach (Town allTown in (List<Town>) Campaign.Current.AllTowns)
      {
        float num2 = 0.0f;
        Settlement settlement = allTown.Settlement;
        foreach (Village allVillage in (List<Village>) Campaign.Current.AllVillages)
        {
          float num3 = 0.0f;
          float num4;
          if (allVillage.TradeBound == settlement)
          {
            num4 = num3 + 1f;
          }
          else
          {
            float num5 = (float) (0.5 * (600.0 / (double) MathF.Pow(Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, allVillage.Settlement), 1.5f)));
            if ((double) num5 > 0.5)
              num5 = 0.5f;
            float num6 = (float) (0.5 * (600.0 / (double) MathF.Pow(Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, allVillage.TradeBound), 1.5f)));
            if ((double) num6 > 0.5)
              num6 = 0.5f;
            num4 = (float) ((allVillage.Settlement.MapFaction == settlement.MapFaction ? 1.0 : 0.60000002384185791) * 0.5 * (((double) num5 + (double) num6) / 2.0));
          }
          num2 += num4;
        }
        foreach (Village allVillage in (List<Village>) Campaign.Current.AllVillages)
        {
          float num7 = 0.0f;
          float num8;
          if (allVillage.TradeBound == settlement)
          {
            num8 = num7 + 1f;
          }
          else
          {
            float num9 = (float) (0.5 * (600.0 / (double) MathF.Pow(Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, allVillage.Settlement), 1.5f)));
            if ((double) num9 > 0.5)
              num9 = 0.5f;
            float num10 = (float) (0.5 * (600.0 / (double) MathF.Pow(Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, allVillage.TradeBound), 1.5f)));
            if ((double) num10 > 0.5)
              num10 = 0.5f;
            num8 = (float) ((allVillage.Settlement.MapFaction == settlement.MapFaction ? 1.0 : 0.60000002384185791) * 0.5 * (((double) num9 + (double) num10) / 2.0));
          }
          foreach ((ItemObject, float) production in (List<(ItemObject, float)>) allVillage.VillageType.Productions)
          {
            ItemObject itemObject = production.Item1;
            double num11 = (double) production.Item2;
            num8 *= 0.12244235f;
            double num12 = (double) num8;
            int num13 = MBRandom.RoundRandomized((float) (num11 * num12 * ((double) num1 * (12.0 / (double) num2))));
            for (int index = 0; index < num13; ++index)
            {
              ItemModifier itemModifier = (ItemModifier) null;
              EquipmentElement rosterElement = new EquipmentElement(itemObject, itemModifier);
              settlement.ItemRoster.AddToCounts(rosterElement, 1);
            }
          }
        }
      }
    }

    private void CalculateInitialAccumulatedTaxes()
    {
      foreach (Village village in (List<Village>) Village.All)
      {
        float num = 0.0f;
        foreach ((ItemObject, float) production in (List<(ItemObject, float)>) village.VillageType.Productions)
        {
          float productionAmount = Campaign.Current.Models.VillageProductionCalculatorModel.CalculateDailyProductionAmount(village, production.Item1);
          num += (float) production.Item1.Value * productionAmount;
        }
        village.TradeTaxAccumulated = (int) ((double) num * (0.60000002384185791 + 0.30000001192092896 * (double) MBRandom.RandomFloat) * (double) Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction());
      }
    }

    private void TickProductions(Settlement settlement, bool initialProductionForTowns = false)
    {
      Village village = settlement.Village;
      if (village == null || village.IsDeserted)
        return;
      int num = 0;
      for (int index = 0; index < village.Owner.ItemRoster.Count; ++index)
        num += village.Owner.ItemRoster[index].Amount;
      int werehouseCapacity = village.GetWerehouseCapacity();
      if ((double) num >= (double) werehouseCapacity * 1.5)
        return;
      this.TickGoodProduction(village, initialProductionForTowns);
      this.TickFoodProduction(village, initialProductionForTowns);
    }

    private void TickGoodProduction(Village village, bool initialProductionForTowns)
    {
      foreach ((ItemObject, float) production in (List<(ItemObject, float)>) village.VillageType.Productions)
      {
        ItemObject itemObject = production.Item1;
        int num = MBRandom.RoundRandomized(Campaign.Current.Models.VillageProductionCalculatorModel.CalculateDailyProductionAmount(village, production.Item1));
        if (num > 0)
        {
          if (!initialProductionForTowns)
          {
            village.Owner.ItemRoster.AddToCounts(itemObject, num);
            CampaignEventDispatcher.Instance.OnItemProduced(itemObject, village.Owner.Settlement, num);
          }
          else if (village.TradeBound != null)
            village.TradeBound.ItemRoster.AddToCounts(itemObject, num);
        }
      }
    }

    private void TickFoodProduction(Village village, bool initialProductionForTowns)
    {
      int num1 = MBRandom.RoundRandomized(Campaign.Current.Models.VillageProductionCalculatorModel.CalculateDailyFoodProductionAmount(village));
      for (int index = 0; index < num1; ++index)
      {
        float num2 = 0.0f;
        foreach (ItemObject consumableRawItem in (IEnumerable<ItemObject>) Campaign.Current.DefaultVillageTypes.ConsumableRawItems)
        {
          float num3 = 1f / (float) consumableRawItem.Value;
          num2 += num3;
        }
        float num4 = MBRandom.RandomFloat * num2;
        foreach (ItemObject consumableRawItem in (IEnumerable<ItemObject>) Campaign.Current.DefaultVillageTypes.ConsumableRawItems)
        {
          float num5 = 1f / (float) consumableRawItem.Value;
          num4 -= num5;
          if ((double) num4 < 9.9999997473787516E-06)
          {
            if (!initialProductionForTowns)
            {
              village.Owner.ItemRoster.AddToCounts(consumableRawItem, 1);
              CampaignEventDispatcher.Instance.OnItemProduced(consumableRawItem, village.Owner.Settlement, 1);
              break;
            }
            if (village.TradeBound != null)
            {
              village.TradeBound.ItemRoster.AddToCounts(consumableRawItem, 1);
              break;
            }
          }
        }
      }
    }
  }
}
