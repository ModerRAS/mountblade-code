// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.SellItemsAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class SellItemsAction
  {
    private static void ApplyInternal(
      PartyBase sellerParty,
      PartyBase buyerParty,
      ItemRosterElement itemRosterElement,
      int number,
      Settlement currentSettlement)
    {
      if (currentSettlement == null)
      {
        if (sellerParty.Settlement != null)
          currentSettlement = sellerParty.Settlement;
        else
          currentSettlement = buyerParty.Settlement != null ? buyerParty.Settlement : throw new MBInvalidParameterException(nameof (currentSettlement));
      }
      Town town = currentSettlement.Town;
      if (town == null)
      {
        if (!currentSettlement.IsVillage)
          throw new MBException();
        town = currentSettlement.Village.TradeBound != null ? currentSettlement.Village.TradeBound.Town : currentSettlement.Village.Bound.Town;
      }
      MobileParty mobileParty = buyerParty?.MobileParty;
      bool isSelling = false;
      if (mobileParty == null)
      {
        mobileParty = sellerParty?.MobileParty;
        isSelling = true;
      }
      if (mobileParty == null)
        return;
      int num = 0;
      for (int index = 0; index < number; ++index)
      {
        int itemPrice = town.GetItemPrice(itemRosterElement.EquipmentElement, mobileParty, isSelling);
        num += itemPrice;
        sellerParty.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, -1);
        buyerParty?.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, 1);
      }
      if (buyerParty != null && buyerParty.IsSettlement)
      {
        if (mobileParty.IsCaravan)
        {
          if (!Campaign.Current.GameStarted)
            return;
          GiveGoldAction.ApplyForSettlementToParty(buyerParty.Settlement, sellerParty, num);
        }
        else
          GiveGoldAction.ApplyForSettlementToCharacter(buyerParty.Settlement, sellerParty.LeaderHero, num);
      }
      else if (sellerParty != null && sellerParty.IsSettlement)
      {
        int commission = MBRandom.RoundRandomized((float) num * (sellerParty.Settlement.IsTown ? Campaign.Current.Models.SettlementTaxModel.GetTownTaxRatio(sellerParty.Settlement.Town) : Campaign.Current.Models.SettlementTaxModel.GetVillageTaxRatio()));
        if (mobileParty.IsCaravan)
        {
          if (Campaign.Current.GameStarted)
            GiveGoldAction.ApplyForPartyToSettlement(buyerParty, sellerParty.Settlement, num);
        }
        else if (buyerParty != null)
          GiveGoldAction.ApplyForCharacterToSettlement(buyerParty.LeaderHero, sellerParty.Settlement, num);
        else
          sellerParty.Settlement.SettlementComponent.ChangeGold(num);
        sellerParty.Settlement.SettlementComponent.ChangeGold(-commission);
        if (sellerParty.Settlement.Town == null)
          return;
        float changeBasedOnSecurity = Campaign.Current.Models.SettlementTaxModel.GetTownCommissionChangeBasedOnSecurity(sellerParty.Settlement.Town, (float) commission);
        sellerParty.Settlement.Town.TradeTaxAccumulated += (int) changeBasedOnSecurity;
      }
      else
      {
        if (sellerParty.MobileParty.CurrentSettlement == null)
          return;
        if (sellerParty.IsMobile && sellerParty.MobileParty.IsCaravan && sellerParty.Owner != null)
        {
          GiveGoldAction.ApplyForPartyToParty(buyerParty, sellerParty, num);
        }
        else
        {
          if (buyerParty == null)
            return;
          GiveGoldAction.ApplyBetweenCharacters(buyerParty.LeaderHero, sellerParty.LeaderHero, num);
        }
      }
    }

    public static void Apply(
      PartyBase receiverParty,
      PartyBase payerParty,
      ItemRosterElement subject,
      int number,
      Settlement currentSettlement = null)
    {
      SellItemsAction.ApplyInternal(receiverParty, payerParty, subject, number, currentSettlement);
    }
  }
}
