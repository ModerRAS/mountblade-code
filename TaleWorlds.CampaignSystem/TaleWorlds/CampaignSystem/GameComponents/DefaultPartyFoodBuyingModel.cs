// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyFoodBuyingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyFoodBuyingModel : PartyFoodBuyingModel
  {
    public override float MinimumDaysFoodToLastWhileBuyingFoodFromTown => 30f;

    public override float MinimumDaysFoodToLastWhileBuyingFoodFromVillage => 8f;

    public override float LowCostFoodPriceAverage => 30f;

    public override void FindItemToBuy(
      MobileParty mobileParty,
      Settlement settlement,
      out ItemRosterElement itemElement,
      out float itemElementsPrice)
    {
      itemElement = ItemRosterElement.Invalid;
      itemElementsPrice = 0.0f;
      float num1 = 0.0f;
      SettlementComponent settlementComponent = settlement.SettlementComponent;
      int index1 = -1;
      for (int index2 = 0; index2 < settlement.ItemRoster.Count; ++index2)
      {
        ItemRosterElement elementCopyAtIndex = settlement.ItemRoster.GetElementCopyAtIndex(index2);
        if (elementCopyAtIndex.Amount > 0)
        {
          EquipmentElement equipmentElement = elementCopyAtIndex.EquipmentElement;
          int num2;
          if (equipmentElement.Item.HasHorseComponent)
          {
            equipmentElement = elementCopyAtIndex.EquipmentElement;
            num2 = equipmentElement.Item.HorseComponent.IsLiveStock ? 1 : 0;
          }
          else
            num2 = 0;
          bool flag = num2 != 0;
          equipmentElement = elementCopyAtIndex.EquipmentElement;
          if (equipmentElement.Item.IsFood | flag)
          {
            int itemPrice = settlementComponent.GetItemPrice(elementCopyAtIndex.EquipmentElement, mobileParty);
            equipmentElement = elementCopyAtIndex.EquipmentElement;
            int itemValue = equipmentElement.ItemValue;
            if (itemPrice < 120 | flag && mobileParty.LeaderHero.Gold >= itemPrice)
            {
              double num3;
              if (!flag)
              {
                num3 = (double) (120 - itemPrice) * 0.0082999998703598976;
              }
              else
              {
                int num4 = itemPrice;
                equipmentElement = elementCopyAtIndex.EquipmentElement;
                int meatCount = equipmentElement.Item.HorseComponent.MeatCount;
                num3 = (120.0 - (double) (num4 / meatCount)) * 0.0082999998703598976;
              }
              double num5;
              if (!flag)
              {
                num5 = (double) (100 - itemValue) * 0.0099999997764825821;
              }
              else
              {
                int num6 = itemValue;
                equipmentElement = elementCopyAtIndex.EquipmentElement;
                int meatCount = equipmentElement.Item.HorseComponent.MeatCount;
                num5 = (100.0 - (double) (num6 / meatCount)) * 0.0099999997764825821;
              }
              float num7 = (float) num5;
              float num8 = (float) (num3 * num3) * num7 * num7;
              if ((double) num8 > 0.0)
              {
                if ((double) MBRandom.RandomFloat * ((double) num1 + (double) num8) >= (double) num1)
                {
                  index1 = index2;
                  itemElementsPrice = (float) itemPrice;
                }
                num1 += num8;
              }
            }
          }
        }
      }
      if (index1 == -1)
        return;
      itemElement = settlement.ItemRoster.GetElementCopyAtIndex(index1);
    }
  }
}
