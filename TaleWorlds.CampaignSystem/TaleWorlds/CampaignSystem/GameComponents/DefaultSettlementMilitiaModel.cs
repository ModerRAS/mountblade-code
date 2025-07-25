// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementMilitiaModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementMilitiaModel : SettlementMilitiaModel
  {
    private static readonly TextObject BaseText = new TextObject("{=militarybase}Base");
    private static readonly TextObject FromHearthsText = new TextObject("{=ecdZglky}From Hearths");
    private static readonly TextObject FromProsperityText = new TextObject("{=cTmiNAlI}From Prosperity");
    private static readonly TextObject RetiredText = new TextObject("{=gHnfFi1s}Retired");
    private static readonly TextObject MilitiaFromMarketText = new TextObject("{=7ve3bQxg}Weapons From Market");
    private static readonly TextObject FoodShortageText = new TextObject("{=qTFKvGSg}Food Shortage");
    private static readonly TextObject LowLoyaltyText = new TextObject("{=SJ2qsRdF}Low Loyalty");
    private static readonly TextObject CultureText = GameTexts.FindText("str_culture");
    private const int AutoSpawnMilitiaDayMultiplierAfterSiege = 20;
    private const int MinimumAutoSpawnedMilitiaAfterSiege = 30;

    public override int MilitiaToSpawnAfterSiege(Town town)
    {
      return Math.Max(30, (int) ((double) town.MilitiaChange * 20.0));
    }

    public override ExplainedNumber CalculateMilitiaChange(
      Settlement settlement,
      bool includeDescriptions = false)
    {
      return DefaultSettlementMilitiaModel.CalculateMilitiaChangeInternal(settlement, includeDescriptions);
    }

    public override float CalculateEliteMilitiaSpawnChance(Settlement settlement)
    {
      float militiaSpawnChance = 0.0f;
      Hero hero = (Hero) null;
      if (settlement.IsFortification && settlement.Town.Governor != null)
        hero = settlement.Town.Governor;
      else if (settlement.IsVillage && settlement.Village.TradeBound?.Town.Governor != null)
        hero = settlement.Village.TradeBound.Town.Governor;
      if (hero != null && hero.GetPerkValue(DefaultPerks.Leadership.CitizenMilitia))
        militiaSpawnChance += DefaultPerks.Leadership.CitizenMilitia.PrimaryBonus;
      return militiaSpawnChance;
    }

    public override void CalculateMilitiaSpawnRate(
      Settlement settlement,
      out float meleeTroopRate,
      out float rangedTroopRate)
    {
      meleeTroopRate = 0.5f;
      rangedTroopRate = 1f - meleeTroopRate;
    }

    private static ExplainedNumber CalculateMilitiaChangeInternal(
      Settlement settlement,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      double militia = (double) settlement.Militia;
      if (settlement.IsFortification)
        result.Add(2f, DefaultSettlementMilitiaModel.BaseText);
      float num1 = (float) (-militia * 0.02500000037252903);
      result.Add(num1, DefaultSettlementMilitiaModel.RetiredText);
      if (settlement.IsVillage)
      {
        float num2 = settlement.Village.Hearth / 400f;
        result.Add(num2, DefaultSettlementMilitiaModel.FromHearthsText);
      }
      else if (settlement.IsFortification)
      {
        float num3 = settlement.Town.Prosperity / 1000f;
        result.Add(num3, DefaultSettlementMilitiaModel.FromProsperityText);
        if (settlement.Town.InRebelliousState)
        {
          float num4 = MBMath.Map(settlement.Town.Loyalty, 0.0f, (float) Campaign.Current.Models.SettlementLoyaltyModel.RebelliousStateStartLoyaltyThreshold, (float) Campaign.Current.Models.SettlementLoyaltyModel.MilitiaBoostPercentage, 0.0f);
          float num5 = MathF.Abs(num3 * (num4 * 0.01f));
          result.Add(num5, DefaultSettlementMilitiaModel.LowLoyaltyText);
        }
      }
      if (settlement.IsTown)
      {
        int num6 = settlement.Town.SoldItems.Sum<Town.SellLog>((Func<Town.SellLog, int>) (x => x.Category.Properties != ItemCategory.Property.BonusToMilitia ? 0 : x.Number));
        if (num6 > 0)
          result.Add(0.2f * (float) num6, DefaultSettlementMilitiaModel.MilitiaFromMarketText);
        if (settlement.OwnerClan.Kingdom != null)
        {
          if (settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Serfdom) && settlement.IsTown)
            result.Add(-1f, DefaultPolicies.Serfdom.Name);
          if (settlement.OwnerClan.Kingdom.ActivePolicies.Contains(DefaultPolicies.Cantons))
            result.Add(1f, DefaultPolicies.Cantons.Name);
        }
        if (settlement.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.BattanianMilitiaFeat))
          result.Add(DefaultCulturalFeats.BattanianMilitiaFeat.EffectBonus, DefaultSettlementMilitiaModel.CultureText);
      }
      if (settlement.IsCastle || settlement.IsTown)
      {
        if (settlement.Town.BuildingsInProgress.IsEmpty<Building>())
          BuildingHelper.AddDefaultDailyBonus(settlement.Town, BuildingEffectEnum.MilitiaDaily, ref result);
        foreach (Building building in (List<Building>) settlement.Town.Buildings)
        {
          if (!building.BuildingType.IsDefaultProject)
          {
            float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.Militia);
            if ((double) buildingEffectAmount > 0.0)
              result.Add(buildingEffectAmount, building.Name);
          }
        }
        if (settlement.IsCastle && settlement.Town.InRebelliousState)
        {
          float resultNumber = result.ResultNumber;
          float num7 = 0.0f;
          foreach (Building building in (List<Building>) settlement.Town.Buildings)
          {
            if ((double) num7 < 1.0 && (!building.BuildingType.IsDefaultProject || settlement.Town.CurrentBuilding == building))
            {
              float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.ReduceMilitia);
              if ((double) buildingEffectAmount > 0.0)
              {
                float num8 = buildingEffectAmount * 0.01f;
                num7 += num8;
                if ((double) num7 > 1.0)
                  num8 -= num7 - 1f;
                float num9 = resultNumber * -num8;
                result.Add(num9, building.Name);
              }
            }
          }
        }
        DefaultSettlementMilitiaModel.GetSettlementMilitiaChangeDueToPolicies(settlement, ref result);
        DefaultSettlementMilitiaModel.GetSettlementMilitiaChangeDueToPerks(settlement, ref result);
        DefaultSettlementMilitiaModel.GetSettlementMilitiaChangeDueToIssues(settlement, ref result);
      }
      return result;
    }

    private static void GetSettlementMilitiaChangeDueToPerks(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      if (settlement.Town == null || settlement.Town.Governor == null)
        return;
      PerkHelper.AddPerkBonusForTown(DefaultPerks.OneHanded.SwiftStrike, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Polearm.KeepAtBay, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Polearm.Drills, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Bow.MerryMen, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Crossbow.LongShots, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Throwing.ThrowingCompetitions, settlement.Town, ref result);
      if (settlement.IsUnderSiege)
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Roguery.ArmsDealer, settlement.Town, ref result);
      PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.SevenVeterans, settlement.Town, ref result);
    }

    private static void GetSettlementMilitiaChangeDueToPolicies(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      Kingdom kingdom = settlement.OwnerClan.Kingdom;
      if (kingdom == null || !kingdom.ActivePolicies.Contains(DefaultPolicies.Citizenship))
        return;
      result.Add(1f, DefaultPolicies.Citizenship.Name);
    }

    private static void GetSettlementMilitiaChangeDueToIssues(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementMilitia, settlement, ref result);
    }
  }
}
