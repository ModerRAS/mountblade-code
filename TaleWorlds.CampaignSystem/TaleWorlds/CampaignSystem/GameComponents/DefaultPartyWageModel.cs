// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyWageModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyWageModel : PartyWageModel
  {
    private static readonly TextObject _cultureText = GameTexts.FindText("str_culture");
    private static readonly TextObject _buildingEffects = GameTexts.FindText("str_building_effects");
    private const float MercenaryWageFactor = 1.5f;

    public override int MaxWage => 10000;

    public override int GetCharacterWage(CharacterObject character)
    {
      int characterWage;
      switch (character.Tier)
      {
        case 0:
          characterWage = 1;
          break;
        case 1:
          characterWage = 2;
          break;
        case 2:
          characterWage = 3;
          break;
        case 3:
          characterWage = 5;
          break;
        case 4:
          characterWage = 8;
          break;
        case 5:
          characterWage = 12;
          break;
        case 6:
          characterWage = 17;
          break;
        default:
          characterWage = 23;
          break;
      }
      if (character.Occupation == Occupation.Mercenary)
        characterWage = (int) ((double) characterWage * 1.5);
      return characterWage;
    }

    public override ExplainedNumber GetTotalWage(MobileParty mobileParty, bool includeDescriptions = false)
    {
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      int num5 = 0;
      int num6 = 0;
      int num7 = 0;
      int num8 = 0;
      int num9 = 0;
      int num10 = 0;
      int num11 = 0;
      bool flag = !mobileParty.HasPerk(DefaultPerks.Steward.AidCorps);
      int num12 = 0;
      int num13 = 0;
      for (int index = 0; index < mobileParty.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = mobileParty.MemberRoster.GetElementCopyAtIndex(index);
        CharacterObject character = elementCopyAtIndex.Character;
        int num14 = flag ? elementCopyAtIndex.Number : elementCopyAtIndex.Number - elementCopyAtIndex.WoundedNumber;
        if (character.IsHero)
        {
          if (elementCopyAtIndex.Character.HeroObject != character.HeroObject.Clan?.Leader)
          {
            if (mobileParty.LeaderHero != null && mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Steward.PaidInPromise))
              num3 += MathF.Round((float) elementCopyAtIndex.Character.TroopWage * (1f + DefaultPerks.Steward.PaidInPromise.PrimaryBonus));
            else
              num3 += elementCopyAtIndex.Character.TroopWage;
          }
        }
        else
        {
          if (character.Tier < 4)
          {
            if (character.Culture.IsBandit)
              num9 += elementCopyAtIndex.Character.TroopWage * elementCopyAtIndex.Number;
            num1 += elementCopyAtIndex.Character.TroopWage * num14;
          }
          else if (character.Tier == 4)
          {
            if (character.Culture.IsBandit)
              num10 += elementCopyAtIndex.Character.TroopWage * elementCopyAtIndex.Number;
            num2 += elementCopyAtIndex.Character.TroopWage * num14;
          }
          else if (character.Tier > 4)
          {
            if (character.Culture.IsBandit)
              num11 += elementCopyAtIndex.Character.TroopWage * elementCopyAtIndex.Number;
            num3 += elementCopyAtIndex.Character.TroopWage * num14;
          }
          if (character.IsInfantry)
            num4 += num14;
          if (character.IsMounted)
            num5 += num14;
          if (character.Occupation == Occupation.CaravanGuard)
            num12 += elementCopyAtIndex.Number;
          if (character.Occupation == Occupation.Mercenary)
            num13 += elementCopyAtIndex.Number;
          if (character.IsRanged)
          {
            num6 += num14;
            if (character.Tier >= 4)
            {
              num7 += num14;
              num8 += elementCopyAtIndex.Character.TroopWage * elementCopyAtIndex.Number;
            }
          }
        }
      }
      ExplainedNumber bonuses = new ExplainedNumber();
      if (mobileParty.LeaderHero != null && mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Roguery.DeepPockets))
      {
        num1 -= num9;
        num2 -= num10;
        num3 -= num11;
        int num15 = num9 + num10 + num11;
        bonuses.Add((float) num15);
        PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Roguery.DeepPockets, mobileParty.LeaderHero.CharacterObject, false, ref bonuses);
      }
      int baseNumber = num1 + num2 + num3;
      if (mobileParty.HasPerk(DefaultPerks.Crossbow.PickedShots) && num7 > 0)
      {
        float num16 = (float) num8 * DefaultPerks.Crossbow.PickedShots.PrimaryBonus;
        baseNumber += (int) num16;
      }
      ExplainedNumber totalWage = new ExplainedNumber((float) baseNumber, includeDescriptions);
      ExplainedNumber explainedNumber = new ExplainedNumber(1f);
      if (mobileParty.IsGarrison && mobileParty.CurrentSettlement?.Town != null)
      {
        if (mobileParty.CurrentSettlement.IsTown)
        {
          PerkHelper.AddPerkBonusForTown(DefaultPerks.OneHanded.MilitaryTradition, mobileParty.CurrentSettlement.Town, ref totalWage);
          PerkHelper.AddPerkBonusForTown(DefaultPerks.TwoHanded.Berserker, mobileParty.CurrentSettlement.Town, ref totalWage);
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Bow.HunterClan, mobileParty.CurrentSettlement.Town, ref totalWage);
          this.CalculatePartialGarrisonWageReduction((float) num4 / (float) mobileParty.MemberRoster.TotalRegulars, mobileParty, DefaultPerks.Polearm.StandardBearer, ref totalWage, true);
          this.CalculatePartialGarrisonWageReduction((float) num5 / (float) mobileParty.MemberRoster.TotalRegulars, mobileParty, DefaultPerks.Riding.CavalryTactics, ref totalWage, true);
          this.CalculatePartialGarrisonWageReduction((float) num6 / (float) mobileParty.MemberRoster.TotalRegulars, mobileParty, DefaultPerks.Crossbow.PeasantLeader, ref totalWage, true);
        }
        else if (mobileParty.CurrentSettlement.IsCastle)
          PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.StiffUpperLip, mobileParty.CurrentSettlement.Town, ref totalWage);
        PerkHelper.AddPerkBonusForTown(DefaultPerks.Steward.DrillSergant, mobileParty.CurrentSettlement.Town, ref totalWage);
        if (mobileParty.CurrentSettlement.Culture.HasFeat(DefaultCulturalFeats.EmpireGarrisonWageFeat))
          totalWage.AddFactor(DefaultCulturalFeats.EmpireGarrisonWageFeat.EffectBonus, GameTexts.FindText("str_culture"));
        foreach (Building building in (List<Building>) mobileParty.CurrentSettlement.Town.Buildings)
        {
          float buildingEffectAmount = building.GetBuildingEffectAmount(BuildingEffectEnum.GarrisonWageReduce);
          if ((double) buildingEffectAmount > 0.0)
            explainedNumber.AddFactor((float) -((double) buildingEffectAmount / 100.0), building.Name);
        }
      }
      totalWage.Add(bonuses.ResultNumber);
      float num17 = mobileParty.LeaderHero == null || mobileParty.LeaderHero.Clan.Kingdom == null || mobileParty.LeaderHero.Clan.IsUnderMercenaryService || !mobileParty.LeaderHero.Clan.Kingdom.ActivePolicies.Contains(DefaultPolicies.MilitaryCoronae) ? 0.0f : 0.1f;
      if (mobileParty.HasPerk(DefaultPerks.Trade.SwordForBarter, true))
      {
        float num18 = (float) num12 / (float) mobileParty.MemberRoster.TotalRegulars;
        if ((double) num18 > 0.0)
        {
          float num19 = DefaultPerks.Trade.SwordForBarter.SecondaryBonus * num18;
          totalWage.AddFactor(num19, DefaultPerks.Trade.SwordForBarter.Name);
        }
      }
      if (mobileParty.HasPerk(DefaultPerks.Steward.Contractors))
      {
        float num20 = (float) num13 / (float) mobileParty.MemberRoster.TotalRegulars;
        if ((double) num20 > 0.0)
        {
          float num21 = DefaultPerks.Steward.Contractors.PrimaryBonus * num20;
          totalWage.AddFactor(num21, DefaultPerks.Steward.Contractors.Name);
        }
      }
      if (mobileParty.HasPerk(DefaultPerks.Trade.MercenaryConnections, true))
      {
        float num22 = (float) num13 / (float) mobileParty.MemberRoster.TotalRegulars;
        if ((double) num22 > 0.0)
        {
          float num23 = DefaultPerks.Trade.MercenaryConnections.SecondaryBonus * num22;
          totalWage.AddFactor(num23, DefaultPerks.Trade.MercenaryConnections.Name);
        }
      }
      totalWage.AddFactor(num17, DefaultPolicies.MilitaryCoronae.Name);
      totalWage.AddFactor(explainedNumber.ResultNumber - 1f, DefaultPartyWageModel._buildingEffects);
      if (PartyBaseHelper.HasFeat(mobileParty.Party, DefaultCulturalFeats.AseraiIncreasedWageFeat))
        totalWage.AddFactor(DefaultCulturalFeats.AseraiIncreasedWageFeat.EffectBonus, DefaultPartyWageModel._cultureText);
      if (mobileParty.HasPerk(DefaultPerks.Steward.Frugal))
        totalWage.AddFactor(DefaultPerks.Steward.Frugal.PrimaryBonus, DefaultPerks.Steward.Frugal.Name);
      if (mobileParty.Army != null && mobileParty.HasPerk(DefaultPerks.Steward.EfficientCampaigner, true))
        totalWage.AddFactor(DefaultPerks.Steward.EfficientCampaigner.SecondaryBonus, DefaultPerks.Steward.EfficientCampaigner.Name);
      if (mobileParty.SiegeEvent != null && mobileParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(mobileParty.Party, MapEvent.BattleTypes.Siege) && mobileParty.HasPerk(DefaultPerks.Steward.MasterOfWarcraft))
        totalWage.AddFactor(DefaultPerks.Steward.MasterOfWarcraft.PrimaryBonus, DefaultPerks.Steward.MasterOfWarcraft.Name);
      if (mobileParty.EffectiveQuartermaster != null)
        PerkHelper.AddEpicPerkBonusForCharacter(DefaultPerks.Steward.PriceOfLoyalty, mobileParty.EffectiveQuartermaster.CharacterObject, DefaultSkills.Steward, true, ref totalWage, Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus);
      if (mobileParty.CurrentSettlement != null && mobileParty.LeaderHero != null && mobileParty.LeaderHero.GetPerkValue(DefaultPerks.Trade.ContentTrades))
        totalWage.AddFactor(DefaultPerks.Trade.ContentTrades.SecondaryBonus, DefaultPerks.Trade.ContentTrades.Name);
      return totalWage;
    }

    private void CalculatePartialGarrisonWageReduction(
      float troopRatio,
      MobileParty mobileParty,
      PerkObject perk,
      ref ExplainedNumber garrisonWageReductionMultiplier,
      bool isSecondaryEffect)
    {
      if ((double) troopRatio <= 0.0 || mobileParty.CurrentSettlement.Town.Governor == null || !PerkHelper.GetPerkValueForTown(perk, mobileParty.CurrentSettlement.Town))
        return;
      garrisonWageReductionMultiplier.AddFactor(isSecondaryEffect ? perk.SecondaryBonus * troopRatio : perk.PrimaryBonus * troopRatio, perk.Name);
    }

    public override int GetTroopRecruitmentCost(
      CharacterObject troop,
      Hero buyerHero,
      bool withoutItemCost = false)
    {
      int num = 10 * MathF.Round((float) ((double) troop.Level * (double) MathF.Pow((float) troop.Level, 0.65f) * 0.20000000298023224));
      int troopRecruitmentCost = troop.Level > 1 ? (troop.Level > 6 ? (troop.Level > 11 ? (troop.Level > 16 ? (troop.Level > 21 ? (troop.Level > 26 ? (troop.Level > 31 ? (troop.Level > 36 ? 1500 : 1000) : 600) : 400) : 200) : 100) : 50) : 20) : 10;
      if (troop.Equipment.Horse.Item != null && !withoutItemCost)
      {
        if (troop.Level < 26)
          troopRecruitmentCost += 150;
        else
          troopRecruitmentCost += 500;
      }
      bool flag = troop.Occupation == Occupation.Mercenary || troop.Occupation == Occupation.Gangster || troop.Occupation == Occupation.CaravanGuard;
      if (flag)
        troopRecruitmentCost = MathF.Round((float) troopRecruitmentCost * 2f);
      if (buyerHero != null)
      {
        ExplainedNumber explainedNumber = new ExplainedNumber(1f);
        if (troop.Tier >= 2 && buyerHero.GetPerkValue(DefaultPerks.Throwing.HeadHunter))
          explainedNumber.AddFactor(DefaultPerks.Throwing.HeadHunter.SecondaryBonus);
        if (troop.IsInfantry)
        {
          if (buyerHero.GetPerkValue(DefaultPerks.OneHanded.ChinkInTheArmor))
            explainedNumber.AddFactor(DefaultPerks.OneHanded.ChinkInTheArmor.SecondaryBonus);
          if (buyerHero.GetPerkValue(DefaultPerks.TwoHanded.ShowOfStrength))
            explainedNumber.AddFactor(DefaultPerks.TwoHanded.ShowOfStrength.SecondaryBonus);
          if (buyerHero.GetPerkValue(DefaultPerks.Polearm.HardyFrontline))
            explainedNumber.AddFactor(DefaultPerks.Polearm.HardyFrontline.SecondaryBonus);
          if (buyerHero.Culture.HasFeat(DefaultCulturalFeats.SturgianRecruitUpgradeFeat))
            explainedNumber.AddFactor(DefaultCulturalFeats.SturgianRecruitUpgradeFeat.EffectBonus, GameTexts.FindText("str_culture"));
        }
        else if (troop.IsRanged)
        {
          if (buyerHero.GetPerkValue(DefaultPerks.Bow.RenownedArcher))
            explainedNumber.AddFactor(DefaultPerks.Bow.RenownedArcher.SecondaryBonus);
          if (buyerHero.GetPerkValue(DefaultPerks.Crossbow.Piercer))
            explainedNumber.AddFactor(DefaultPerks.Crossbow.Piercer.SecondaryBonus);
        }
        if (troop.IsMounted && buyerHero.Culture.HasFeat(DefaultCulturalFeats.KhuzaitRecruitUpgradeFeat))
          explainedNumber.AddFactor(DefaultCulturalFeats.KhuzaitRecruitUpgradeFeat.EffectBonus, GameTexts.FindText("str_culture"));
        if (buyerHero.IsPartyLeader && buyerHero.GetPerkValue(DefaultPerks.Steward.Frugal))
          explainedNumber.AddFactor(DefaultPerks.Steward.Frugal.SecondaryBonus);
        if (flag)
        {
          if (buyerHero.GetPerkValue(DefaultPerks.Trade.SwordForBarter))
            explainedNumber.AddFactor(DefaultPerks.Trade.SwordForBarter.PrimaryBonus);
          if (buyerHero.GetPerkValue(DefaultPerks.Charm.SlickNegotiator))
            explainedNumber.AddFactor(DefaultPerks.Charm.SlickNegotiator.PrimaryBonus);
        }
        troopRecruitmentCost = MathF.Max(1, MathF.Round((float) troopRecruitmentCost * explainedNumber.ResultNumber));
      }
      return troopRecruitmentCost;
    }
  }
}
