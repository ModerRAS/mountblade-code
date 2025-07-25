// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.GiveItemAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class GiveItemAction
  {
    private static void ApplyInternal(
      Hero giver,
      Hero receiver,
      PartyBase giverParty,
      PartyBase receiverParty,
      in ItemRosterElement itemRosterElement)
    {
      bool flag = false;
      if (giver == null && receiver == null)
      {
        ItemRoster itemRoster1 = giverParty.ItemRoster;
        ItemRosterElement itemRosterElement1 = itemRosterElement;
        EquipmentElement equipmentElement1 = itemRosterElement1.EquipmentElement;
        itemRosterElement1 = itemRosterElement;
        int number = -itemRosterElement1.Amount;
        itemRoster1.AddToCounts(equipmentElement1, number);
        ItemRoster itemRoster2 = receiverParty.ItemRoster;
        itemRosterElement1 = itemRosterElement;
        EquipmentElement equipmentElement2 = itemRosterElement1.EquipmentElement;
        itemRosterElement1 = itemRosterElement;
        int amount = itemRosterElement1.Amount;
        itemRoster2.AddToCounts(equipmentElement2, amount);
        flag = true;
      }
      else if (giver.PartyBelongedTo != null && receiver.PartyBelongedTo != null)
      {
        ItemRoster itemRoster = giver.PartyBelongedTo.Party.ItemRoster;
        ItemRosterElement itemRosterElement2 = itemRosterElement;
        EquipmentElement equipmentElement = itemRosterElement2.EquipmentElement;
        itemRosterElement2 = itemRosterElement;
        int number = -itemRosterElement2.Amount;
        itemRoster.AddToCounts(equipmentElement, number);
        receiver.PartyBelongedTo.Party.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, -itemRosterElement.Amount);
        flag = true;
      }
      if (!flag)
        return;
      CampaignEventDispatcher.Instance.OnHeroOrPartyGaveItem((giver, giverParty), (receiver, receiverParty), itemRosterElement, true);
    }

    public static void ApplyForHeroes(
      Hero giver,
      Hero receiver,
      in ItemRosterElement itemRosterElement)
    {
      GiveItemAction.ApplyInternal(giver, receiver, (PartyBase) null, (PartyBase) null, in itemRosterElement);
    }

    public static void ApplyForParties(
      PartyBase giverParty,
      PartyBase receiverParty,
      in ItemRosterElement itemRosterElement)
    {
      GiveItemAction.ApplyInternal((Hero) null, (Hero) null, giverParty, receiverParty, in itemRosterElement);
    }
  }
}
