// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCompanionHiringPriceCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCompanionHiringPriceCalculationModel : CompanionHiringPriceCalculationModel
  {
    public override int GetCompanionHiringPrice(Hero companion)
    {
      ExplainedNumber stat = new ExplainedNumber();
      Town town = companion.CurrentSettlement?.Town ?? SettlementHelper.FindNearestTown().Town;
      float num = 0.0f;
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumEquipmentSetSlots; ++index)
      {
        EquipmentElement itemRosterElement = companion.CharacterObject.Equipment[index];
        if (itemRosterElement.Item != null)
          num += (float) town.GetItemPrice(itemRosterElement, (MobileParty) null, false);
      }
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumEquipmentSetSlots; ++index)
      {
        EquipmentElement itemRosterElement = companion.CharacterObject.FirstCivilianEquipment[index];
        if (itemRosterElement.Item != null)
          num += (float) town.GetItemPrice(itemRosterElement, (MobileParty) null, false);
      }
      stat.Add(num / 2f);
      stat.Add((float) (companion.CharacterObject.Level * 10));
      if (Hero.MainHero.IsPartyLeader && Hero.MainHero.GetPerkValue(DefaultPerks.Steward.PaidInPromise))
        stat.AddFactor(DefaultPerks.Steward.PaidInPromise.PrimaryBonus);
      if (Hero.MainHero.PartyBelongedTo != null)
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.GreatInvestor, Hero.MainHero.PartyBelongedTo, false, ref stat);
      return (int) stat.ResultNumber;
    }
  }
}
