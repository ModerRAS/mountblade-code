// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultVillageProductionCalculatorModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultVillageProductionCalculatorModel : VillageProductionCalculatorModel
  {
    public override float CalculateDailyProductionAmount(Village village, ItemObject item)
    {
      ExplainedNumber bonuses = new ExplainedNumber();
      if (village.VillageState == Village.VillageStates.Normal)
      {
        foreach ((ItemObject itemObject, float num1) in (List<(ItemObject, float)>) village.VillageType.Productions)
        {
          if (itemObject == item)
          {
            if (village.TradeBound != null)
            {
              float num2 = (float) (village.GetHearthLevel() + 1) * 0.5f;
              if (item.IsMountable && item.Tier == ItemObject.ItemTiers.Tier2 && PerkHelper.GetPerkValueForTown(DefaultPerks.Riding.Shepherd, village.TradeBound.Town) && (double) MBRandom.RandomFloat < (double) DefaultPerks.Riding.Shepherd.SecondaryBonus)
                ++num1;
              bonuses.Add(num1 * num2);
              if (item.ItemCategory == DefaultItemCategories.Grain || item.ItemCategory == DefaultItemCategories.Olives || item.ItemCategory == DefaultItemCategories.Fish || item.ItemCategory == DefaultItemCategories.DateFruit)
                PerkHelper.AddPerkBonusForTown(DefaultPerks.Trade.GranaryAccountant, village.TradeBound.Town, ref bonuses);
              else if (item.ItemCategory == DefaultItemCategories.Clay || item.ItemCategory == DefaultItemCategories.Iron || item.ItemCategory == DefaultItemCategories.Cotton || item.ItemCategory == DefaultItemCategories.Silver)
                PerkHelper.AddPerkBonusForTown(DefaultPerks.Trade.TradeyardForeman, village.TradeBound.Town, ref bonuses);
              if (item.IsTradeGood)
                PerkHelper.AddPerkBonusForTown(DefaultPerks.Athletics.Steady, village.TradeBound.Town, ref bonuses);
              if (item.IsAnimal)
                PerkHelper.AddPerkBonusForTown(DefaultPerks.Medicine.PerfectHealth, village.TradeBound.Town, ref bonuses);
              PerkHelper.AddPerkBonusForTown(DefaultPerks.Riding.Breeder, village.TradeBound.Town, ref bonuses);
            }
            if (village.Settlement.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.KhuzaitAnimalProductionFeat) && (item.ItemCategory == DefaultItemCategories.Sheep || item.ItemCategory == DefaultItemCategories.Cow || item.ItemCategory == DefaultItemCategories.WarHorse || item.ItemCategory == DefaultItemCategories.Horse || item.ItemCategory == DefaultItemCategories.PackAnimal))
              bonuses.AddFactor(DefaultCulturalFeats.KhuzaitAnimalProductionFeat.EffectBonus, GameTexts.FindText("str_culture"));
            if (village.Bound.IsCastle && village.Settlement.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.VlandianCastleVillageProductionFeat))
              bonuses.AddFactor(DefaultCulturalFeats.VlandianCastleVillageProductionFeat.EffectBonus, GameTexts.FindText("str_culture"));
          }
        }
      }
      return bonuses.ResultNumber;
    }

    public override float CalculateDailyFoodProductionAmount(Village village)
    {
      if (village.VillageState != Village.VillageStates.Normal)
        return 0.0f;
      float productionAmount = (float) (village.GetHearthLevel() + 1);
      float issueEffect;
      if (this.GetIssueEffectOnFoodProduction(village.Settlement, out issueEffect))
        productionAmount *= issueEffect;
      return productionAmount;
    }

    private bool GetIssueEffectOnFoodProduction(Settlement settlement, out float issueEffect)
    {
      issueEffect = 1f;
      if (settlement.IsVillage)
      {
        foreach (Hero hero in SettlementHelper.GetAllHeroesOfSettlement(settlement, false))
        {
          if (hero.Issue != null && hero.MapFaction == settlement.MapFaction)
          {
            float issueEffectAmount = hero.Issue.GetActiveIssueEffectAmount(DefaultIssueEffects.HalfVillageProduction);
            if ((double) issueEffectAmount != 0.0)
              issueEffect *= issueEffectAmount;
          }
        }
      }
      return !issueEffect.ApproximatelyEqualsTo(1f);
    }

    public override float CalculateProductionSpeedOfItemCategory(ItemCategory item)
    {
      float speedOfItemCategory = 0.0f;
      foreach (VillageType villageType in (List<VillageType>) VillageType.All)
      {
        float productionPerDay = villageType.GetProductionPerDay(item);
        if ((double) productionPerDay > (double) speedOfItemCategory)
          speedOfItemCategory = productionPerDay;
      }
      return speedOfItemCategory;
    }
  }
}
