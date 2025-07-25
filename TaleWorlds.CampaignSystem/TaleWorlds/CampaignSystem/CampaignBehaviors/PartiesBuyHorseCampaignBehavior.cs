// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartiesBuyHorseCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartiesBuyHorseCampaignBehavior : CampaignBehaviorBase
  {
    private float _averageHorsePrice;

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameStarted));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameStarted));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnGameStarted(CampaignGameStarter obj) => this.CalculateAverageHorsePrice();

    private void OnDailyTick() => this.CalculateAverageHorsePrice();

    private void CalculateAverageHorsePrice()
    {
      int num1 = 0;
      int num2 = 0;
      for (int index = 0; index < Items.All.Count; ++index)
      {
        ItemObject itemObject = Items.All[index];
        if (itemObject.ItemCategory == DefaultItemCategories.Horse)
        {
          num1 += itemObject.Value;
          ++num2;
        }
      }
      if (num2 == 0)
        this._averageHorsePrice = 0.0f;
      else
        this._averageHorsePrice = (float) (num1 / num2);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (mobileParty != null && mobileParty.MapFaction != null && !mobileParty.MapFaction.IsAtWarWith(settlement.MapFaction) && mobileParty != MobileParty.MainParty && mobileParty.IsLordParty && mobileParty.LeaderHero != null && !mobileParty.IsDisbanding && settlement.IsTown)
      {
        int num1 = MathF.Min(100000, mobileParty.LeaderHero.Gold);
        int numberOfMounts = mobileParty.Party.NumberOfMounts;
        if (numberOfMounts > mobileParty.Party.NumberOfRegularMembers)
          return;
        Town town = settlement.Town;
        if (town.MarketData.GetItemCountOfCategory(DefaultItemCategories.Horse) == 0)
          return;
        float num2 = this._averageHorsePrice * (float) numberOfMounts / (float) num1;
        if ((double) num2 < 0.079999998211860657)
        {
          float randomFloat1 = MBRandom.RandomFloat;
          float randomFloat2 = MBRandom.RandomFloat;
          float randomFloat3 = MBRandom.RandomFloat;
          float budget = (0.08f - num2) * (float) num1 * randomFloat1 * randomFloat2 * randomFloat3;
          if ((double) budget > (double) (mobileParty.Party.NumberOfRegularMembers - numberOfMounts) * (double) this._averageHorsePrice)
            budget = (float) (mobileParty.Party.NumberOfRegularMembers - numberOfMounts) * this._averageHorsePrice;
          this.BuyHorses(mobileParty, town, budget);
        }
      }
      if (mobileParty == null || mobileParty == MobileParty.MainParty || !mobileParty.IsLordParty || mobileParty.LeaderHero == null || mobileParty.IsDisbanding || !settlement.IsTown)
        return;
      float num3 = 0.0f;
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0; --index)
      {
        ItemRosterElement subject = mobileParty.ItemRoster[index];
        if (subject.EquipmentElement.Item.IsMountable)
          num3 += (float) (subject.Amount * subject.EquipmentElement.Item.Value);
        else if (!subject.EquipmentElement.Item.IsFood)
          SellItemsAction.Apply(mobileParty.Party, settlement.Party, subject, subject.Amount, settlement);
      }
      int num4 = MathF.Min(100000, mobileParty.LeaderHero.Gold);
      if ((double) num3 <= (double) num4 * 0.10000000149011612)
        return;
      for (int index1 = 0; index1 < 10; ++index1)
      {
        ItemRosterElement subject = new ItemRosterElement();
        int num5 = 0;
        for (int index2 = 0; index2 < mobileParty.ItemRoster.Count; ++index2)
        {
          ItemRosterElement itemRosterElement = mobileParty.ItemRoster[index2];
          if (itemRosterElement.EquipmentElement.Item.IsMountable && itemRosterElement.EquipmentElement.Item.Value > num5)
          {
            num5 = itemRosterElement.EquipmentElement.Item.Value;
            subject = itemRosterElement;
          }
        }
        if (num5 <= 0)
          break;
        SellItemsAction.Apply(mobileParty.Party, settlement.Party, subject, 1, settlement);
        num3 -= (float) num5;
        if ((double) num3 < (double) num4 * 0.10000000149011612)
          break;
      }
    }

    private void BuyHorses(MobileParty mobileParty, Town town, float budget)
    {
      for (int index1 = 0; index1 < 2; ++index1)
      {
        int index2 = -1;
        int num = 100000;
        ItemRoster itemRoster = town.Owner.ItemRoster;
        for (int index3 = 0; index3 < itemRoster.Count; ++index3)
        {
          if (itemRoster.GetItemAtIndex(index3).ItemCategory == DefaultItemCategories.Horse)
          {
            int itemPrice = town.GetItemPrice(itemRoster.GetElementCopyAtIndex(index3).EquipmentElement, mobileParty, false);
            if (itemPrice < num)
            {
              num = itemPrice;
              index2 = index3;
            }
          }
        }
        if (index2 >= 0)
        {
          ItemRosterElement elementCopyAtIndex = itemRoster.GetElementCopyAtIndex(index2);
          int number = elementCopyAtIndex.Amount;
          if ((double) (number * num) > (double) budget)
            number = MathF.Ceiling(budget / (float) num);
          int numberOfMounts = mobileParty.Party.NumberOfMounts;
          if (number > mobileParty.Party.NumberOfRegularMembers - numberOfMounts)
            number = mobileParty.Party.NumberOfRegularMembers - numberOfMounts;
          if (number > 0)
            SellItemsAction.Apply(town.Owner, mobileParty.Party, elementCopyAtIndex, number, town.Owner.Settlement);
        }
      }
    }
  }
}
