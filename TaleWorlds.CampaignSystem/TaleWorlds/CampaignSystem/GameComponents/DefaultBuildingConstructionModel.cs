// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBuildingConstructionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBuildingConstructionModel : BuildingConstructionModel
  {
    private const float HammerMultiplier = 0.01f;
    private const int VeryLowLoyaltyValue = 25;
    private const float MediumLoyaltyValue = 50f;
    private const float HighLoyaltyValue = 75f;
    private const float HighestLoyaltyValue = 100f;
    private static readonly TextObject ProductionFromMarketText = new TextObject("{=vaZDJGMx}Construction from Market");
    private static readonly TextObject BoostText = new TextObject("{=yX1RycON}Boost from Reserve");
    private static readonly TextObject HighLoyaltyBonusText = new TextObject("{=aSniKUJv}High Loyalty");
    private static readonly TextObject LowLoyaltyPenaltyText = new TextObject("{=SJ2qsRdF}Low Loyalty");
    private static readonly TextObject VeryLowLoyaltyPenaltyText = new TextObject("{=CcQzFnpN}Very Low Loyalty");
    private static readonly TextObject CultureText = GameTexts.FindText("str_culture");

    public override int TownBoostCost => 500;

    public override int TownBoostBonus => 50;

    public override int CastleBoostCost => 250;

    public override int CastleBoostBonus => 20;

    public override ExplainedNumber CalculateDailyConstructionPower(
      Town town,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      this.CalculateDailyConstructionPowerInternal(town, ref result);
      return result;
    }

    public override int CalculateDailyConstructionPowerWithoutBoost(Town town)
    {
      ExplainedNumber result = new ExplainedNumber();
      return this.CalculateDailyConstructionPowerInternal(town, ref result, true);
    }

    public override int GetBoostAmount(Town town)
    {
      int num1 = town.IsCastle ? this.CastleBoostBonus : this.TownBoostBonus;
      float num2 = 0.0f;
      if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Steward.Relocation))
        num2 += DefaultPerks.Steward.Relocation.SecondaryBonus;
      if (town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Trade.SpringOfGold))
        num2 += DefaultPerks.Trade.SpringOfGold.SecondaryBonus;
      return num1 + (int) ((double) num1 * (double) num2);
    }

    public override int GetBoostCost(Town town)
    {
      return !town.IsCastle ? this.TownBoostCost : this.CastleBoostCost;
    }

    private int CalculateDailyConstructionPowerInternal(
      Town town,
      ref ExplainedNumber result,
      bool omitBoost = false)
    {
      float num1 = town.Prosperity * 0.01f;
      result.Add(num1, GameTexts.FindText("str_prosperity"));
      if (!omitBoost && town.BoostBuildingProcess > 0)
      {
        int num2 = town.IsCastle ? this.CastleBoostCost : this.TownBoostCost;
        int boostAmount = this.GetBoostAmount(town);
        float num3 = MathF.Min(1f, (float) town.BoostBuildingProcess / (float) num2);
        float num4 = 0.0f;
        if (town.IsTown && town.Governor != null && town.Governor.GetPerkValue(DefaultPerks.Engineering.Clockwork))
          num4 += DefaultPerks.Engineering.Clockwork.SecondaryBonus;
        int num5 = boostAmount + MathF.Round((float) boostAmount * num4);
        result.Add((float) num5 * num3, DefaultBuildingConstructionModel.BoostText);
      }
      if (town.Governor != null && town.Governor.CurrentSettlement?.Town == town)
      {
        SkillHelper.AddSkillBonusForTown(DefaultSkills.Engineering, DefaultSkillEffects.TownProjectBuildingBonus, town, ref result);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.ForcedLabor, town, ref result);
      }
      if (town.Governor != null && town.Governor.CurrentSettlement?.Town == town && !town.BuildingsInProgress.IsEmpty<Building>())
      {
        if (town.Governor.GetPerkValue(DefaultPerks.Steward.ForcedLabor) && town.Settlement.Party.PrisonRoster.TotalManCount > 0)
        {
          float num6 = MathF.Min(0.3f, (float) (town.Settlement.Party.PrisonRoster.TotalManCount / 3) * DefaultPerks.Steward.ForcedLabor.SecondaryBonus);
          result.AddFactor(num6, DefaultPerks.Steward.ForcedLabor.Name);
        }
        if (town.IsCastle && town.Governor.GetPerkValue(DefaultPerks.Engineering.MilitaryPlanner))
          result.AddFactor(DefaultPerks.Engineering.MilitaryPlanner.SecondaryBonus, DefaultPerks.Engineering.MilitaryPlanner.Name);
        else if (town.IsTown && town.Governor.GetPerkValue(DefaultPerks.Engineering.Carpenters))
          result.AddFactor(DefaultPerks.Engineering.Carpenters.SecondaryBonus, DefaultPerks.Engineering.Carpenters.Name);
        Building building = town.BuildingsInProgress.Peek();
        if ((building.BuildingType == DefaultBuildingTypes.Fortifications || building.BuildingType == DefaultBuildingTypes.CastleBarracks || building.BuildingType == DefaultBuildingTypes.CastleMilitiaBarracks || building.BuildingType == DefaultBuildingTypes.SettlementGarrisonBarracks || building.BuildingType == DefaultBuildingTypes.SettlementMilitiaBarracks || building.BuildingType == DefaultBuildingTypes.SettlementAquaducts) && town.Governor.GetPerkValue(DefaultPerks.Engineering.Stonecutters))
          result.AddFactor(DefaultPerks.Engineering.Stonecutters.PrimaryBonus, DefaultPerks.Engineering.Stonecutters.Name);
      }
      SettlementLoyaltyModel settlementLoyaltyModel = Campaign.Current.Models.SettlementLoyaltyModel;
      int num7 = town.SoldItems.Sum<Town.SellLog>((Func<Town.SellLog, int>) (x => x.Category.Properties != ItemCategory.Property.BonusToProduction ? 0 : x.Number));
      if (num7 > 0)
        result.Add(0.25f * (float) num7, DefaultBuildingConstructionModel.ProductionFromMarketText);
      BuildingType buildingType = town.BuildingsInProgress.IsEmpty<Building>() ? (BuildingType) null : town.BuildingsInProgress.Peek().BuildingType;
      if (DefaultBuildingTypes.MilitaryBuildings.Contains<BuildingType>(buildingType))
        PerkHelper.AddPerkBonusForTown(DefaultPerks.TwoHanded.Confidence, town, ref result);
      if (buildingType == DefaultBuildingTypes.SettlementMarketplace || buildingType == DefaultBuildingTypes.SettlementAquaducts || buildingType == DefaultBuildingTypes.SettlementLimeKilns)
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Trade.SelfMadeMan, town, ref result);
      float effectOfBuildings = town.GetEffectOfBuildings(BuildingEffectEnum.Construction);
      if ((double) effectOfBuildings > 0.0)
        result.Add(effectOfBuildings, GameTexts.FindText("str_building_bonus"));
      if ((double) town.Loyalty >= 75.0)
      {
        float num8 = MBMath.Map(town.Loyalty, 75f, 100f, 0.0f, 20f);
        float num9 = result.ResultNumber * (num8 / 100f);
        result.Add(num9, DefaultBuildingConstructionModel.HighLoyaltyBonusText);
      }
      else if ((double) town.Loyalty > 25.0 && (double) town.Loyalty <= 50.0)
      {
        float num10 = MBMath.Map(town.Loyalty, 25f, 50f, 50f, 0.0f);
        float num11 = result.ResultNumber * (num10 / 100f);
        result.Add(-num11, DefaultBuildingConstructionModel.LowLoyaltyPenaltyText);
      }
      else if ((double) town.Loyalty <= 25.0)
      {
        result.Add(-result.ResultNumber, DefaultBuildingConstructionModel.VeryLowLoyaltyPenaltyText);
        result.LimitMax(0.0f);
      }
      if ((double) town.Loyalty > 25.0 && town.OwnerClan.Culture.HasFeat(DefaultCulturalFeats.BattanianConstructionFeat))
        result.AddFactor(DefaultCulturalFeats.BattanianConstructionFeat.EffectBonus, DefaultBuildingConstructionModel.CultureText);
      result.LimitMin(0.0f);
      return (int) result.ResultNumber;
    }
  }
}
