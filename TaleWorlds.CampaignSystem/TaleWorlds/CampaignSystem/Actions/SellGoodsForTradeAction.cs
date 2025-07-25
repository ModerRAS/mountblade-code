// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.SellGoodsForTradeAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class SellGoodsForTradeAction
  {
    private static void ApplyInternal(
      Settlement settlement,
      MobileParty mobileParty,
      SellGoodsForTradeAction.SellGoodsForTradeActionDetail detail)
    {
      Town town = settlement.Town;
      if (town == null)
        return;
      List<(EquipmentElement, int)> valueTupleList = new List<(EquipmentElement, int)>();
      if (detail != SellGoodsForTradeAction.SellGoodsForTradeActionDetail.VillagerTrade)
        return;
      int num1 = 10000;
      ItemObject itemObject = (ItemObject) null;
      for (int index = 0; index < mobileParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = mobileParty.ItemRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.EquipmentElement.Item.ItemCategory == DefaultItemCategories.PackAnimal && elementCopyAtIndex.EquipmentElement.Item.Value < num1)
        {
          num1 = elementCopyAtIndex.EquipmentElement.Item.Value;
          itemObject = elementCopyAtIndex.EquipmentElement.Item;
        }
      }
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0; --index)
      {
        ItemRosterElement elementCopyAtIndex = mobileParty.ItemRoster.GetElementCopyAtIndex(index);
        int itemPrice = town.GetItemPrice(elementCopyAtIndex.EquipmentElement, mobileParty, true);
        int elementNumber = mobileParty.ItemRoster.GetElementNumber(index);
        if (elementCopyAtIndex.EquipmentElement.Item == itemObject)
        {
          int num2 = (int) (0.5 * (double) mobileParty.MemberRoster.TotalManCount);
          elementNumber -= num2;
        }
        if (elementNumber > 0)
        {
          int number = MathF.Min(elementNumber, town.Gold / itemPrice);
          if (number > 0)
          {
            mobileParty.PartyTradeGold += number * itemPrice;
            EquipmentElement equipmentElement = elementCopyAtIndex.EquipmentElement;
            town.ChangeGold(-number * itemPrice);
            settlement.ItemRoster.AddToCounts(equipmentElement, number);
            mobileParty.ItemRoster.AddToCounts(equipmentElement, -number);
            valueTupleList.Add((equipmentElement, number));
          }
        }
      }
      if (valueTupleList.IsEmpty<(EquipmentElement, int)>())
        return;
      CampaignEventDispatcher.Instance.OnCaravanTransactionCompleted(mobileParty, town, valueTupleList);
    }

    public static void ApplyByVillagerTrade(Settlement settlement, MobileParty villagerParty)
    {
      SellGoodsForTradeAction.ApplyInternal(settlement, villagerParty, SellGoodsForTradeAction.SellGoodsForTradeActionDetail.VillagerTrade);
    }

    private enum SellGoodsForTradeActionDetail
    {
      VillagerTrade,
      LordTrade,
    }
  }
}
