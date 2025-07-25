// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultTradeItemPriceFactorModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0AEFBEDB-349E-40CC-B41E-2BD5A1A37AD3
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultTradeItemPriceFactorModel : TradeItemPriceFactorModel
  {
    private const float MinPriceFactor = 0.1f;
    private const float MaxPriceFactor = 10f;
    private const float MinPriceFactorNonTrade = 0.8f;
    private const float MaxPriceFactorNonTrade = 1.3f;
    private const float HighTradePenaltyBaseValue = 1.5f;
    private const float PackAnimalTradePenalty = 0.8f;
    private const float MountTradePenalty = 0.8f;

    public override float GetTradePenalty(
      ItemObject item,
      MobileParty clientParty,
      PartyBase merchant,
      bool isSelling,
      float inStore,
      float supply,
      float demand)
    {
      Settlement settlement = merchant?.Settlement;
      float num1 = 0.06f;
      bool flag1 = clientParty != null && clientParty.IsCaravan;
      int num2;
      if (merchant == null)
      {
        num2 = 0;
      }
      else
      {
        bool? isCaravan = merchant.MobileParty?.IsCaravan;
        bool flag2 = true;
        num2 = isCaravan.GetValueOrDefault() == flag2 & isCaravan.HasValue ? 1 : 0;
      }
      if ((clientParty == null || merchant == null ? 0 : (clientParty.MapFaction.IsAtWarWith(merchant.MapFaction) ? 1 : 0)) != 0)
        num1 += 0.5f;
      if (((item.IsTradeGood || item.IsAnimal || item.HasHorseComponent ? 0 : (!flag1 ? 1 : 0)) & (isSelling ? 1 : 0)) != 0)
      {
        ExplainedNumber explainedNumber = new ExplainedNumber((float) (1.5 + (double) Math.Max(0.0f, item.Tierf - 1f) * 0.25));
        if (item.IsCraftedWeapon && item.IsCraftedByPlayer && clientParty != null && clientParty.HasPerk(DefaultPerks.Crafting.ArtisanSmith))
          explainedNumber.AddFactor(DefaultPerks.Crafting.ArtisanSmith.PrimaryBonus);
        num1 += explainedNumber.ResultNumber;
      }
      if (((!item.HasHorseComponent || !item.HorseComponent.IsPackAnimal ? 0 : (!flag1 ? 1 : 0)) & (isSelling ? 1 : 0)) != 0)
        num1 += 0.8f;
      if (((!item.HasHorseComponent || !item.HorseComponent.IsMount ? 0 : (!flag1 ? 1 : 0)) & (isSelling ? 1 : 0)) != 0)
        num1 += 0.8f;
      if (settlement != null && settlement.IsVillage)
        num1 += isSelling ? 1f : 0.1f;
      if (num2 != 0)
      {
        if (item.ItemCategory == DefaultItemCategories.PackAnimal && !isSelling)
          num1 += 2f;
        num1 += isSelling ? 1f : 0.1f;
      }
      bool flag3 = clientParty == null;
      if (flag1)
        num1 *= 0.5f;
      else if (flag3)
        num1 *= 0.2f;
      float num3 = clientParty != null ? Campaign.Current.Models.PartyTradeModel.GetTradePenaltyFactor(clientParty) : 1f;
      ExplainedNumber explainedNumber1 = new ExplainedNumber(num1 * num3);
      if (clientParty != null)
      {
        if (settlement != null && clientParty.MapFaction == settlement.MapFaction)
        {
          if (settlement.IsVillage)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.VillageNetwork, clientParty, true, ref explainedNumber1);
          else if (settlement.IsTown)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.RumourNetwork, clientParty, true, ref explainedNumber1);
        }
        if (item.IsTradeGood)
        {
          if (clientParty.HasPerk(DefaultPerks.Trade.WholeSeller) & isSelling)
            PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.WholeSeller, clientParty, true, ref explainedNumber1);
          if (isSelling && item.IsFood && clientParty.LeaderHero != null)
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Trade.GranaryAccountant, clientParty.LeaderHero.CharacterObject, true, ref explainedNumber1);
        }
        else if (!item.IsTradeGood && clientParty.HasPerk(DefaultPerks.Trade.Appraiser) & isSelling)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.Appraiser, clientParty, true, ref explainedNumber1);
        if (PartyBaseHelper.HasFeat(clientParty.Party, DefaultCulturalFeats.AseraiTraderFeat))
          explainedNumber1.AddFactor(-0.1f);
        if (item.WeaponComponent != null & isSelling)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Roguery.ArmsDealer, clientParty, true, ref explainedNumber1);
        if (!isSelling && item.IsFood)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.InsurancePlans, clientParty, false, ref explainedNumber1);
        if (item.HorseComponent != null && item.HorseComponent.IsPackAnimal && clientParty.HasPerk(DefaultPerks.Steward.ArenicosMules, true))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.ArenicosMules, clientParty, false, ref explainedNumber1);
        if (item.IsMountable)
        {
          if (clientParty.HasPerk(DefaultPerks.Riding.DeeperSacks, true))
            explainedNumber1.AddFactor(DefaultPerks.Riding.DeeperSacks.SecondaryBonus, DefaultPerks.Riding.DeeperSacks.Name);
          if (clientParty.LeaderHero != null && clientParty.LeaderHero.GetPerkValue(DefaultPerks.Steward.ArenicosHorses))
            PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Steward.ArenicosHorses, clientParty.LeaderHero.CharacterObject, false, ref explainedNumber1);
        }
        if (clientParty.IsMainParty && Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.SmugglerConnections) && merchant?.MapFaction != null && (double) merchant.MapFaction.MainHeroCrimeRating > 0.0)
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Roguery.SmugglerConnections, clientParty, false, ref explainedNumber1);
        if (!isSelling && merchant != null && merchant.IsSettlement && merchant.Settlement.IsVillage && clientParty.HasPerk(DefaultPerks.Trade.DistributedGoods, true))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.DistributedGoods, clientParty, false, ref explainedNumber1);
        if (isSelling && item.HasHorseComponent && clientParty.HasPerk(DefaultPerks.Trade.LocalConnection, true))
          explainedNumber1.AddFactor(DefaultPerks.Trade.LocalConnection.SecondaryBonus, DefaultPerks.Trade.LocalConnection.Name);
        if (isSelling && (item.ItemCategory == DefaultItemCategories.Pottery || item.ItemCategory == DefaultItemCategories.Tools || item.ItemCategory == DefaultItemCategories.Jewelry || item.ItemCategory == DefaultItemCategories.Cotton) && clientParty.LeaderHero != null)
          PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Trade.TradeyardForeman, clientParty.LeaderHero.CharacterObject, true, ref explainedNumber1);
        if (!isSelling && (item.ItemCategory == DefaultItemCategories.Clay || item.ItemCategory == DefaultItemCategories.Iron || item.ItemCategory == DefaultItemCategories.Silver || item.ItemCategory == DefaultItemCategories.Cotton) && clientParty.HasPerk(DefaultPerks.Trade.RapidDevelopment))
          PerkHelper.AddPerkBonusForParty(DefaultPerks.Trade.RapidDevelopment, clientParty, false, ref explainedNumber1);
      }
      return explainedNumber1.ResultNumber;
    }

    private float GetPriceFactor(
      ItemObject item,
      MobileParty tradingParty,
      PartyBase merchant,
      float inStoreValue,
      float supply,
      float demand,
      bool isSelling)
    {
      float basePriceFactor = this.GetBasePriceFactor(item.GetItemCategory(), inStoreValue, supply, demand, isSelling, item.Value);
      float tradePenalty = this.GetTradePenalty(item, tradingParty, merchant, isSelling, inStoreValue, supply, demand);
      return !isSelling ? basePriceFactor * (1f + tradePenalty) : (float) ((double) basePriceFactor * 1.0 / (1.0 + (double) tradePenalty));
    }

    public override float GetBasePriceFactor(
      ItemCategory itemCategory,
      float inStoreValue,
      float supply,
      float demand,
      bool isSelling,
      int transferValue)
    {
      if (isSelling)
        inStoreValue += (float) transferValue;
      float num = MathF.Pow(demand / (float) (0.10000000149011612 * (double) supply + (double) inStoreValue * 0.03999999910593033 + 2.0), itemCategory.IsAnimal ? 0.3f : 0.6f);
      return itemCategory.IsTradeGood ? MathF.Clamp(num, 0.1f, 10f) : MathF.Clamp(num, 0.8f, 1.3f);
    }

    public override int GetPrice(
      EquipmentElement itemRosterElement,
      MobileParty clientParty,
      PartyBase merchant,
      bool isSelling,
      float inStoreValue,
      float supply,
      float demand)
    {
      float priceFactor = this.GetPriceFactor(itemRosterElement.Item, clientParty, merchant, inStoreValue, supply, demand, isSelling);
      float f = (float) itemRosterElement.ItemValue * priceFactor;
      int a = isSelling ? MathF.Floor(f) : MathF.Ceiling(f);
      if (!isSelling && merchant?.MobileParty != null && merchant.MobileParty.IsCaravan && clientParty.HasPerk(DefaultPerks.Trade.SilverTongue, true))
        a = MathF.Ceiling((float) a * (1f - DefaultPerks.Trade.SilverTongue.SecondaryBonus));
      return MathF.Max(a, 1);
    }

    public override int GetTheoreticalMaxItemMarketValue(ItemObject item)
    {
      return item.IsTradeGood || item.IsAnimal ? MathF.Round((float) item.Value * 10f) : MathF.Round((float) item.Value * 1.3f);
    }
  }
}
