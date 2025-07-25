// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DiscardItemsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class DiscardItemsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnItemsDiscardedByPlayerEvent.AddNonSerializedListener((object) this, new Action<ItemRoster>(this.OnItemsDiscardedByPlayer));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnHourlyTickParty));
    }

    private void OnHourlyTickParty(MobileParty mobileParty)
    {
      if (!mobileParty.IsLordParty || mobileParty.IsMainParty || mobileParty.LeaderHero == null)
        return;
      this.HandlePartyInventory(mobileParty.Party);
    }

    private void OnItemsDiscardedByPlayer(ItemRoster roster)
    {
      int forDiscardingItems = Campaign.Current.Models.ItemDiscardModel.GetXpBonusForDiscardingItems(roster);
      if ((double) forDiscardingItems <= 0.0)
        return;
      MobilePartyHelper.PartyAddSharedXp(MobileParty.MainParty, (float) forDiscardingItems);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void HandlePartyInventory(PartyBase party)
    {
      if (!party.IsMobile || !party.MobileParty.IsLordParty || party.MobileParty.IsMainParty)
        return;
      int num = party.ItemRoster.NumberOfLivestockAnimals + party.ItemRoster.NumberOfPackAnimals + MathF.Max(0, party.ItemRoster.NumberOfMounts - party.NumberOfMenWithHorse);
      if (num > party.MemberRoster.TotalManCount)
        this.DiscardAnimalsCausingHerdingPenalty(party.MobileParty, num - MathF.Max(0, party.ItemRoster.NumberOfMounts - party.NumberOfMenWithHorse));
      if ((double) party.MobileParty.TotalWeightCarried <= (double) party.InventoryCapacity)
        return;
      this.DiscardOverburdeningItemsForParty(party.MobileParty, party.MobileParty.TotalWeightCarried - (float) party.InventoryCapacity);
    }

    private void DiscardAnimalsCausingHerdingPenalty(MobileParty mobileParty, int amount)
    {
      int numberOfAnimalsToDiscard = amount;
      EquipmentElement equipmentElement;
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0 && numberOfAnimalsToDiscard > 0; --index)
      {
        equipmentElement = mobileParty.ItemRoster[index].EquipmentElement;
        if (equipmentElement.Item.IsAnimal)
          this.DiscardAnimal(mobileParty, mobileParty.ItemRoster[index], ref numberOfAnimalsToDiscard);
      }
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0 && numberOfAnimalsToDiscard > 0; --index)
      {
        equipmentElement = mobileParty.ItemRoster[index].EquipmentElement;
        if (equipmentElement.Item.IsMountable)
        {
          equipmentElement = mobileParty.ItemRoster[index].EquipmentElement;
          if (equipmentElement.Item.HorseComponent.IsPackAnimal)
            this.DiscardAnimal(mobileParty, mobileParty.ItemRoster[index], ref numberOfAnimalsToDiscard);
        }
      }
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0 && numberOfAnimalsToDiscard > 0; --index)
      {
        equipmentElement = mobileParty.ItemRoster[index].EquipmentElement;
        if (equipmentElement.Item.IsMountable)
          this.DiscardAnimal(mobileParty, mobileParty.ItemRoster[index], ref numberOfAnimalsToDiscard);
      }
    }

    private void DiscardOverburdeningItemsForParty(
      MobileParty mobileParty,
      float totalWeightToDiscard)
    {
      int num1 = (int) ((double) mobileParty.FoodChange * -20.0);
      float weightLeftToDiscard = totalWeightToDiscard;
      for (int index = mobileParty.ItemRoster.Count - 1; index >= 0 && (double) weightLeftToDiscard > 0.0; --index)
      {
        if (num1 > 0)
        {
          ItemRosterElement itemRosterElement = mobileParty.ItemRoster[index];
          if (itemRosterElement.EquipmentElement.Item.IsFood)
          {
            itemRosterElement = mobileParty.ItemRoster[index];
            if (itemRosterElement.Amount > num1)
            {
              itemRosterElement = mobileParty.ItemRoster[index];
              int discardLimit = itemRosterElement.Amount - num1;
              num1 = 0;
              this.DiscardNecessaryAmountOfItems(mobileParty, mobileParty.ItemRoster[index], ref weightLeftToDiscard, discardLimit);
              continue;
            }
            int num2 = num1;
            itemRosterElement = mobileParty.ItemRoster[index];
            int amount = itemRosterElement.Amount;
            num1 = num2 - amount;
            continue;
          }
        }
        this.DiscardNecessaryAmountOfItems(mobileParty, mobileParty.ItemRoster[index], ref weightLeftToDiscard);
      }
    }

    private void DiscardNecessaryAmountOfItems(
      MobileParty mobileParty,
      ItemRosterElement itemRosterElement,
      ref float weightLeftToDiscard,
      int discardLimit = 2147483647)
    {
      float equipmentElementWeight = itemRosterElement.EquipmentElement.GetEquipmentElementWeight();
      int num = MBMath.ClampInt((double) itemRosterElement.GetRosterElementWeight() <= (double) weightLeftToDiscard ? itemRosterElement.Amount : MathF.Ceiling(weightLeftToDiscard / equipmentElementWeight), 0, discardLimit);
      weightLeftToDiscard -= equipmentElementWeight * (float) num;
      mobileParty.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, -num);
    }

    private void DiscardAnimal(
      MobileParty mobileParty,
      ItemRosterElement itemRosterElement,
      ref int numberOfAnimalsToDiscard)
    {
      int num = itemRosterElement.Amount > numberOfAnimalsToDiscard ? numberOfAnimalsToDiscard : itemRosterElement.Amount;
      numberOfAnimalsToDiscard -= num;
      mobileParty.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, -num);
    }
  }
}
