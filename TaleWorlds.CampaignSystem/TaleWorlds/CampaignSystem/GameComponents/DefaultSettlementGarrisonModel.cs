// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementGarrisonModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementGarrisonModel : SettlementGarrisonModel
  {
    private static readonly TextObject TownWallsText = new TextObject("{=SlmhqqH8}Town Walls");
    private static readonly TextObject MoraleText = new TextObject("{=UjL7jVYF}Morale");
    private static readonly TextObject FoodShortageText = new TextObject("{=qTFKvGSg}Food Shortage");
    private static readonly TextObject SurplusFoodText = GameTexts.FindText("str_surplus_food");
    private static readonly TextObject RecruitFromCenterNotablesText = GameTexts.FindText("str_center_notables");
    private static readonly TextObject RecruitFromVillageNotablesText = GameTexts.FindText("str_village_notables");
    private static readonly TextObject VillageBeingRaided = GameTexts.FindText("str_village_being_raided");
    private static readonly TextObject VillageLooted = GameTexts.FindText("str_village_looted");
    private static readonly TextObject TownIsUnderSiege = GameTexts.FindText("str_villages_under_siege");
    private static readonly TextObject RetiredText = GameTexts.FindText("str_retired");
    private static readonly TextObject PaymentIsLessText = GameTexts.FindText("str_payment_is_less");
    private static readonly TextObject UnpaidWagesText = GameTexts.FindText("str_unpaid_wages");
    private static readonly TextObject RebellionText = GameTexts.FindText("str_rebel_settlement");

    public override ExplainedNumber CalculateGarrisonChange(
      Settlement settlement,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      DefaultSettlementGarrisonModel.CalculateGarrisonChangeInternal(settlement, ref result);
      return result;
    }

    private static void CalculateGarrisonChangeInternal(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      if (settlement.IsTown || settlement.IsCastle)
      {
        if (settlement.Town.GarrisonParty != null && (double) settlement.Town.GarrisonParty.HasUnpaidWages > 0.0)
        {
          int num = MathF.Min(settlement.Town.GarrisonParty.Party.NumberOfHealthyMembers, 5);
          result.Add((float) -num, DefaultSettlementGarrisonModel.UnpaidWagesText);
        }
        if (settlement.Town.GarrisonParty != null && ((double) settlement.Town.GarrisonParty.Party.NumberOfHealthyMembers + (double) result.ResultNumber > (double) settlement.Town.GarrisonParty.LimitedPartySize || settlement.Town.GarrisonParty.IsWageLimitExceeded()))
        {
          int num = MathF.Max(settlement.Town.GarrisonParty.IsWageLimitExceeded() ? MathF.Min(20, MathF.Max(1, (int) ((double) (settlement.Town.GarrisonParty.TotalWage - settlement.Town.GarrisonParty.PaymentLimit) / (double) Campaign.Current.AverageWage / 5.0))) : 0, Campaign.Current.Models.PartyDesertionModel.GetNumberOfDeserters(settlement.Town.GarrisonParty));
          result.Add((float) -num, DefaultSettlementGarrisonModel.PaymentIsLessText);
        }
        if (settlement.OwnerClan.IsRebelClan && (settlement.OwnerClan.MapFaction == null || !settlement.OwnerClan.MapFaction.IsKingdomFaction))
          result.Add(2f, DefaultSettlementGarrisonModel.RebellionText);
        if (settlement.IsFortification && settlement.Town.GarrisonAutoRecruitmentIsEnabled)
          DefaultSettlementGarrisonModel.GetSettlementGarrisonDueToAutoRecruitment(settlement, ref result);
      }
      DefaultSettlementGarrisonModel.GetSettlementGarrisonChangeDueToIssues(settlement, ref result);
    }

    public override ExplainedNumber CalculateGarrisonChangeAutoRecruitment(
      Settlement settlement,
      bool includeDescriptions = false)
    {
      ExplainedNumber result = new ExplainedNumber(includeDescriptions: includeDescriptions);
      DefaultSettlementGarrisonModel.GetSettlementGarrisonDueToAutoRecruitment(settlement, ref result);
      return result;
    }

    private static void GetSettlementGarrisonDueToAutoRecruitment(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      if (settlement.SiegeEvent != null || settlement.OwnerClan == null || !settlement.IsFortification || (double) settlement.Town.FoodChange <= 0.0 || settlement.OwnerClan.Leader.PartyBelongedTo == null || settlement.Town.GarrisonParty == null || !settlement.Town.GarrisonParty.CanPayMoreWage() || settlement.Town.GarrisonParty.Party.MemberRoster.TotalManCount >= settlement.Town.GarrisonParty.LimitedPartySize || !SettlementHelper.IsThereAnyVolunteerCanBeRecruitedForGarrison(settlement))
        return;
      result.Add(1f, DefaultSettlementGarrisonModel.RecruitFromCenterNotablesText);
    }

    private static void GetSettlementGarrisonChangeDueToIssues(
      Settlement settlement,
      ref ExplainedNumber result)
    {
      Campaign.Current.Models.IssueModel.GetIssueEffectsOfSettlement(DefaultIssueEffects.SettlementGarrison, settlement, ref result);
    }

    public override int FindNumberOfTroopsToTakeFromGarrison(
      MobileParty mobileParty,
      Settlement settlement,
      float defaultIdealGarrisonStrengthPerWalledCenter = 0.0f)
    {
      MobileParty garrisonParty = settlement.Town.GarrisonParty;
      if (garrisonParty == null)
        return 0;
      float totalStrength = garrisonParty.Party.TotalStrength;
      float num1 = !garrisonParty.HasLimitedWage() ? ((double) defaultIdealGarrisonStrengthPerWalledCenter > 0.10000000149011612 ? defaultIdealGarrisonStrengthPerWalledCenter : FactionHelper.FindIdealGarrisonStrengthPerWalledCenter(mobileParty.MapFaction as Kingdom, settlement.OwnerClan)) * FactionHelper.OwnerClanEconomyEffectOnGarrisonSizeConstant(settlement.OwnerClan) * (settlement.IsTown ? 2f : 1f) : (float) garrisonParty.PaymentLimit / Campaign.Current.AverageWage / 1.5f;
      float x = (float) mobileParty.LimitedPartySize / (float) mobileParty.Party.NumberOfAllMembers;
      float num2 = MathF.Min(11f, x * MathF.Sqrt(x)) - 1f;
      float num3 = MathF.Pow(totalStrength / num1, 1.5f);
      float num4 = mobileParty.LeaderHero.Clan.Leader == mobileParty.LeaderHero ? 2f : 1f;
      int takeFromGarrison = 0;
      if ((double) num2 * (double) num3 * (double) num4 > 1.0)
        takeFromGarrison = MBRandom.RoundRandomized(num2 * num3 * num4);
      int num5 = 25 * (settlement.IsTown ? 2 : 1);
      if (takeFromGarrison > garrisonParty.Party.MemberRoster.TotalRegulars - num5)
        takeFromGarrison = garrisonParty.Party.MemberRoster.TotalRegulars - num5;
      return takeFromGarrison;
    }

    public override int FindNumberOfTroopsToLeaveToGarrison(
      MobileParty mobileParty,
      Settlement settlement)
    {
      MobileParty garrisonParty = settlement.Town.GarrisonParty;
      float num1 = 0.0f;
      if (garrisonParty != null)
        num1 = garrisonParty.Party.TotalStrength;
      float num2 = garrisonParty == null || !garrisonParty.HasLimitedWage() ? FactionHelper.FindIdealGarrisonStrengthPerWalledCenter(mobileParty.MapFaction as Kingdom, settlement.OwnerClan) * FactionHelper.OwnerClanEconomyEffectOnGarrisonSizeConstant(settlement.OwnerClan) * FactionHelper.SettlementProsperityEffectOnGarrisonSizeConstant(settlement.Town) * FactionHelper.SettlementFoodPotentialEffectOnGarrisonSizeConstant(settlement) : (float) garrisonParty.PaymentLimit / Campaign.Current.AverageWage;
      if ((double) num1 < (double) num2)
      {
        int ofRegularMembers = mobileParty.Party.NumberOfRegularMembers;
        float num3 = (float) (1.0 + (double) mobileParty.Party.MemberRoster.TotalWoundedRegulars / (double) mobileParty.Party.NumberOfRegularMembers);
        int limitedPartySize = mobileParty.LimitedPartySize;
        float num4 = MathF.Pow(MathF.Min(2f, (float) ofRegularMembers / (float) limitedPartySize), 1.2f) * 0.75f;
        float a = (float) ((1.0 - (double) num1 / (double) num2) * (1.0 - (double) num1 / (double) num2));
        float num5 = 1f;
        if (mobileParty.Army != null)
        {
          a = MathF.Min(a, 0.7f);
          num5 = (float) (0.30000001192092896 + (double) mobileParty.Army.TotalStrength / (double) mobileParty.Party.TotalStrength * 0.02500000037252903);
        }
        float num6 = settlement.Town.IsOwnerUnassigned ? 0.75f : 0.5f;
        if (settlement.OwnerClan == mobileParty.LeaderHero.Clan || settlement.OwnerClan == mobileParty.Party.Owner.MapFaction.Leader.Clan)
          num6 = 1f;
        float num7 = MathF.Min(0.7f, num4 * a * num6 * num3 * num5);
        if ((double) ofRegularMembers * (double) num7 > 1.0)
          return MBRandom.RoundRandomized((float) ofRegularMembers * num7);
      }
      return 0;
    }
  }
}
