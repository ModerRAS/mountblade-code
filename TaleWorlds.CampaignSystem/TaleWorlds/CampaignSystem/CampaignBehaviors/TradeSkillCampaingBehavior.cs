// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TradeSkillCampaingBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TradeSkillCampaingBehavior : CampaignBehaviorBase, IPlayerTradeBehavior
  {
    private Dictionary<ItemObject, TradeSkillCampaingBehavior.ItemTradeData> ItemsTradeData = new Dictionary<ItemObject, TradeSkillCampaingBehavior.ItemTradeData>();

    private void RecordPurchases(ItemRosterElement itemRosterElement, int totalPrice)
    {
      TradeSkillCampaingBehavior.ItemTradeData itemTradeData;
      if (!this.ItemsTradeData.TryGetValue(itemRosterElement.EquipmentElement.Item, out itemTradeData))
        itemTradeData = new TradeSkillCampaingBehavior.ItemTradeData();
      int num = itemTradeData.NumItemsPurchased + itemRosterElement.Amount;
      float averagePrice = (itemTradeData.AveragePrice * (float) itemTradeData.NumItemsPurchased + (float) totalPrice) / MathF.Max(0.0001f, (float) num);
      this.ItemsTradeData[itemRosterElement.EquipmentElement.Item] = new TradeSkillCampaingBehavior.ItemTradeData(averagePrice, num);
    }

    private int RecordSales(ItemRosterElement itemRosterElement, int totalPrice)
    {
      bool flag = false;
      TradeSkillCampaingBehavior.ItemTradeData itemTradeData;
      if (this.ItemsTradeData.TryGetValue(itemRosterElement.EquipmentElement.Item, out itemTradeData))
        flag = true;
      else
        itemTradeData = new TradeSkillCampaingBehavior.ItemTradeData();
      int num1 = MathF.Min(itemTradeData.NumItemsPurchased, itemRosterElement.Amount);
      int numItemsPurchased = itemTradeData.NumItemsPurchased - num1;
      float f = (float) num1 * itemTradeData.AveragePrice;
      float num2 = (float) totalPrice / MathF.Max(1f / 1000f, (float) itemRosterElement.Amount);
      int num3 = MathF.Max(0, MathF.Round((float) num1 * num2) - MathF.Floor(f));
      if (numItemsPurchased == 0)
      {
        if (!flag)
          return num3;
        this.ItemsTradeData.Remove(itemRosterElement.EquipmentElement.Item);
        return num3;
      }
      this.ItemsTradeData[itemRosterElement.EquipmentElement.Item] = new TradeSkillCampaingBehavior.ItemTradeData(itemTradeData.AveragePrice, numItemsPurchased);
      return num3;
    }

    private int GetAveragePriceForItem(ItemRosterElement itemRosterElement)
    {
      TradeSkillCampaingBehavior.ItemTradeData itemTradeData;
      return !this.ItemsTradeData.TryGetValue(itemRosterElement.EquipmentElement.Item, out itemTradeData) ? 0 : MathF.Round(itemTradeData.AveragePrice);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.PlayerInventoryExchangeEvent.AddNonSerializedListener((object) this, new Action<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool>(this.InventoryUpdated));
    }

    private void InventoryUpdated(
      List<(ItemRosterElement, int)> purchasedItems,
      List<(ItemRosterElement, int)> soldItems,
      bool isTrading)
    {
      if (!isTrading)
        return;
      foreach ((ItemRosterElement, int) purchasedItem in purchasedItems)
        this.ProcessPurchases(purchasedItem.Item1, purchasedItem.Item2);
      int num = 0;
      foreach ((ItemRosterElement, int) soldItem in soldItems)
        num += this.ProcessSales(soldItem.Item1, soldItem.Item2);
      SkillLevelingManager.OnTradeProfitMade(PartyBase.MainParty, num);
      CampaignEventDispatcher.Instance.OnPlayerTradeProfit(num);
    }

    private int ProcessSales(ItemRosterElement itemRosterElement, int totalPrice)
    {
      return itemRosterElement.EquipmentElement.ItemModifier == null ? this.RecordSales(itemRosterElement, totalPrice) : 0;
    }

    private void ProcessPurchases(ItemRosterElement itemRosterElement, int totalPrice)
    {
      if (itemRosterElement.EquipmentElement.ItemModifier != null)
        return;
      this.RecordPurchases(itemRosterElement, totalPrice);
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<ItemObject, TradeSkillCampaingBehavior.ItemTradeData>>("ItemsTradeData", ref this.ItemsTradeData);
    }

    public int GetProjectedProfit(ItemRosterElement itemRosterElement, int itemCost)
    {
      if (itemRosterElement.EquipmentElement.ItemModifier != null)
        return 0;
      int averagePriceForItem = this.GetAveragePriceForItem(itemRosterElement);
      return itemCost - averagePriceForItem;
    }

    public class TradeSkillCampaingBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public TradeSkillCampaingBehaviorTypeDefiner()
        : base(150794)
      {
      }

      protected override void DefineStructTypes()
      {
        this.AddStructDefinition(typeof (TradeSkillCampaingBehavior.ItemTradeData), 10);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<ItemObject, TradeSkillCampaingBehavior.ItemTradeData>));
      }
    }

    internal struct ItemTradeData
    {
      [SaveableField(10)]
      public readonly float AveragePrice;
      [SaveableField(20)]
      public readonly int NumItemsPurchased;

      public ItemTradeData(float averagePrice, int numItemsPurchased)
      {
        this.AveragePrice = averagePrice;
        this.NumItemsPurchased = numItemsPurchased;
      }

      public static void AutoGeneratedStaticCollectObjectsItemTradeData(
        object o,
        List<object> collectedObjects)
      {
        ((TradeSkillCampaingBehavior.ItemTradeData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      private void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
      }

      internal static object AutoGeneratedGetMemberValueAveragePrice(object o)
      {
        return (object) ((TradeSkillCampaingBehavior.ItemTradeData) o).AveragePrice;
      }

      internal static object AutoGeneratedGetMemberValueNumItemsPurchased(object o)
      {
        return (object) ((TradeSkillCampaingBehavior.ItemTradeData) o).NumItemsPurchased;
      }
    }
  }
}
