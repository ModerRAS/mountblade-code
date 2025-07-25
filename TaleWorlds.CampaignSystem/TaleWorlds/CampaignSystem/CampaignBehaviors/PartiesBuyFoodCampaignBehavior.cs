// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartiesBuyFoodCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartiesBuyFoodCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void TryBuyingFood(MobileParty mobileParty, Settlement settlement)
    {
      if (!Campaign.Current.GameStarted || mobileParty.LeaderHero == null || !settlement.IsTown && !settlement.IsVillage || !Campaign.Current.Models.MobilePartyFoodConsumptionModel.DoesPartyConsumeFood(mobileParty) || mobileParty.Army != null && mobileParty.Army.LeaderParty != mobileParty || !settlement.IsVillage && (mobileParty.MapFaction == null || mobileParty.MapFaction.IsAtWarWith(settlement.MapFaction)) || settlement.ItemRoster.TotalFood <= 0)
        return;
      PartyFoodBuyingModel partyFoodBuyingModel = Campaign.Current.Models.PartyFoodBuyingModel;
      float minimumDaysToLast = settlement.IsVillage ? partyFoodBuyingModel.MinimumDaysFoodToLastWhileBuyingFoodFromVillage : partyFoodBuyingModel.MinimumDaysFoodToLastWhileBuyingFoodFromTown;
      if (mobileParty.Army == null)
        this.BuyFoodInternal(mobileParty, settlement, this.CalculateFoodCountToBuy(mobileParty, minimumDaysToLast));
      else
        this.BuyFoodForArmy(mobileParty, settlement, minimumDaysToLast);
    }

    private int CalculateFoodCountToBuy(MobileParty mobileParty, float minimumDaysToLast)
    {
      float num1 = (float) mobileParty.TotalFoodAtInventory / -mobileParty.FoodChange;
      float num2 = minimumDaysToLast - num1;
      return (double) num2 > 0.0 ? (int) (-(double) mobileParty.FoodChange * (double) num2) : 0;
    }

    private void BuyFoodInternal(
      MobileParty mobileParty,
      Settlement settlement,
      int numberOfFoodItemsNeededToBuy)
    {
      if (mobileParty.IsMainParty)
        return;
      for (int index = 0; index < numberOfFoodItemsNeededToBuy; ++index)
      {
        ItemRosterElement itemRosterElement;
        float itemElementsPrice;
        Campaign.Current.Models.PartyFoodBuyingModel.FindItemToBuy(mobileParty, settlement, out itemRosterElement, out itemElementsPrice);
        EquipmentElement equipmentElement = itemRosterElement.EquipmentElement;
        if (equipmentElement.Item == null)
          break;
        if ((double) itemElementsPrice <= (double) mobileParty.LeaderHero.Gold)
          SellItemsAction.Apply(settlement.Party, mobileParty.Party, itemRosterElement, 1);
        equipmentElement = itemRosterElement.EquipmentElement;
        if (equipmentElement.Item.HasHorseComponent)
        {
          equipmentElement = itemRosterElement.EquipmentElement;
          if (equipmentElement.Item.HorseComponent.IsLiveStock)
          {
            int num1 = index;
            equipmentElement = itemRosterElement.EquipmentElement;
            int num2 = equipmentElement.Item.HorseComponent.MeatCount - 1;
            index = num1 + num2;
          }
        }
      }
    }

    private void BuyFoodForArmy(
      MobileParty mobileParty,
      Settlement settlement,
      float minimumDaysToLast)
    {
      float foodChange = mobileParty.Army.LeaderParty.FoodChange;
      foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
        foodChange += attachedParty.FoodChange;
      List<(int, int)> valueTupleList = new List<(int, int)>(mobileParty.Army.Parties.Count);
      float num1 = mobileParty.Army.LeaderParty.FoodChange / foodChange;
      int foodCountToBuy1 = this.CalculateFoodCountToBuy(mobileParty.Army.LeaderParty, minimumDaysToLast);
      valueTupleList.Add(((int) ((double) settlement.ItemRoster.TotalFood * (double) num1), foodCountToBuy1));
      int num2 = foodCountToBuy1;
      foreach (MobileParty attachedParty in (List<MobileParty>) mobileParty.Army.LeaderParty.AttachedParties)
      {
        float num3 = attachedParty.FoodChange / foodChange;
        int foodCountToBuy2 = this.CalculateFoodCountToBuy(attachedParty, minimumDaysToLast);
        valueTupleList.Add(((int) ((double) settlement.ItemRoster.TotalFood * (double) num3), foodCountToBuy2));
        num2 += foodCountToBuy2;
      }
      bool flag = settlement.ItemRoster.TotalFood < num2;
      int num4 = 0;
      foreach ((int, int) valueTuple in valueTupleList)
      {
        int numberOfFoodItemsNeededToBuy = flag ? valueTuple.Item1 : valueTuple.Item2;
        MobileParty mobileParty1 = num4 == 0 ? mobileParty.Army.LeaderParty : mobileParty.Army.LeaderParty.AttachedParties[num4 - 1];
        if (!mobileParty1.IsMainParty)
          this.BuyFoodInternal(mobileParty1, settlement, numberOfFoodItemsNeededToBuy);
        ++num4;
      }
    }

    public void HourlyTickParty(MobileParty mobileParty)
    {
      Settlement forAiCalculation = MobilePartyHelper.GetCurrentSettlementOfMobilePartyForAICalculation(mobileParty);
      if (forAiCalculation == null)
        return;
      this.TryBuyingFood(mobileParty, forAiCalculation);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (mobileParty == null)
        return;
      this.TryBuyingFood(mobileParty, settlement);
    }
  }
}
