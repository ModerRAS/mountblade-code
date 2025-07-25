// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PartiesSellLootCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PartiesSellLootCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (!Campaign.Current.GameStarted || mobileParty == null || FactionManager.IsAtWarAgainstFaction(mobileParty.MapFaction, settlement.MapFaction) || mobileParty.IsMainParty || !mobileParty.IsLordParty || mobileParty.IsDisbanding || !settlement.IsTown)
        return;
      int gold = settlement.SettlementComponent.Gold;
      for (int index = 0; index < mobileParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement subject = mobileParty.ItemRoster[index];
        ItemObject itemObject = subject.EquipmentElement.Item;
        ItemModifier itemModifier = subject.EquipmentElement.ItemModifier;
        int amount = subject.Amount;
        if (!itemObject.IsFood && (itemObject.ItemType != ItemObject.ItemTypeEnum.Horse || !itemObject.HorseComponent.IsRideable || itemModifier != null || itemObject.HorseComponent.IsPackAnimal))
        {
          int itemPrice = settlement.Town.GetItemPrice(subject.EquipmentElement, mobileParty, true);
          int number = itemPrice * amount < gold ? amount : gold / itemPrice;
          if (number > 0)
            SellItemsAction.Apply(mobileParty.Party, settlement.Party, subject, number, settlement);
        }
      }
    }
  }
}
