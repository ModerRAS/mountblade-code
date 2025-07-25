// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyTroopUpgradeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyTroopUpgradeModel : PartyTroopUpgradeModel
  {
    public override bool CanPartyUpgradeTroopToTarget(
      PartyBase upgradingParty,
      CharacterObject upgradeableCharacter,
      CharacterObject upgradeTarget)
    {
      bool flag1 = this.DoesPartyHaveRequiredItemsForUpgrade(upgradingParty, upgradeTarget);
      bool flag2 = this.DoesPartyHaveRequiredPerksForUpgrade(upgradingParty, upgradeableCharacter, upgradeTarget, out PerkObject _);
      return ((!this.IsTroopUpgradeable(upgradingParty, upgradeableCharacter) ? 0 : (((IEnumerable<CharacterObject>) upgradeableCharacter.UpgradeTargets).Contains<CharacterObject>(upgradeTarget) ? 1 : 0)) & (flag2 ? 1 : 0) & (flag1 ? 1 : 0)) != 0;
    }

    public override bool IsTroopUpgradeable(PartyBase party, CharacterObject character)
    {
      return !character.IsHero && character.UpgradeTargets.Length != 0;
    }

    public override int GetXpCostForUpgrade(
      PartyBase party,
      CharacterObject characterObject,
      CharacterObject upgradeTarget)
    {
      if ((upgradeTarget == null ? 0 : (((IEnumerable<CharacterObject>) characterObject.UpgradeTargets).Contains<CharacterObject>(upgradeTarget) ? 1 : 0)) == 0)
        return 100000000;
      int tier = upgradeTarget.Tier;
      int xpCostForUpgrade = 0;
      for (int index = characterObject.Tier + 1; index <= tier; ++index)
      {
        if (index <= 1)
          xpCostForUpgrade += 100;
        else if (index == 2)
          xpCostForUpgrade += 300;
        else if (index == 3)
          xpCostForUpgrade += 550;
        else if (index == 4)
          xpCostForUpgrade += 900;
        else if (index == 5)
          xpCostForUpgrade += 1300;
        else if (index == 6)
          xpCostForUpgrade += 1700;
        else if (index == 7)
        {
          xpCostForUpgrade += 2100;
        }
        else
        {
          int num = upgradeTarget.Level + 4;
          xpCostForUpgrade += (int) (1.3329999446868896 * (double) num * (double) num);
        }
      }
      return xpCostForUpgrade;
    }

    public override int GetGoldCostForUpgrade(
      PartyBase party,
      CharacterObject characterObject,
      CharacterObject upgradeTarget)
    {
      PartyWageModel partyWageModel = Campaign.Current.Models.PartyWageModel;
      int troopRecruitmentCost1 = partyWageModel.GetTroopRecruitmentCost(upgradeTarget, (Hero) null, true);
      int troopRecruitmentCost2 = partyWageModel.GetTroopRecruitmentCost(characterObject, (Hero) null, true);
      bool flag = characterObject.Occupation == Occupation.Mercenary || characterObject.Occupation == Occupation.Gangster;
      ExplainedNumber stat = new ExplainedNumber((float) (troopRecruitmentCost1 - troopRecruitmentCost2) / (!flag ? 2f : 3f));
      if (party.MobileParty.HasPerk(DefaultPerks.Steward.SoundReserves))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.SoundReserves, party.MobileParty, true, ref stat);
      if (characterObject.IsRanged && party.MobileParty.HasPerk(DefaultPerks.Bow.RenownedArcher, true))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Bow.RenownedArcher, party.MobileParty, false, ref stat);
      if (characterObject.IsInfantry && party.MobileParty.HasPerk(DefaultPerks.Throwing.ThrowingCompetitions))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Throwing.ThrowingCompetitions, party.MobileParty, true, ref stat);
      if (characterObject.IsMounted && PartyBaseHelper.HasFeat(party, DefaultCulturalFeats.KhuzaitRecruitUpgradeFeat))
        stat.AddFactor(DefaultCulturalFeats.KhuzaitRecruitUpgradeFeat.EffectBonus, GameTexts.FindText("str_culture"));
      else if (characterObject.IsInfantry && PartyBaseHelper.HasFeat(party, DefaultCulturalFeats.SturgianRecruitUpgradeFeat))
        stat.AddFactor(DefaultCulturalFeats.SturgianRecruitUpgradeFeat.EffectBonus, GameTexts.FindText("str_culture"));
      if (flag && party.MobileParty.HasPerk(DefaultPerks.Steward.Contractors))
        PerkHelper.AddPerkBonusForParty(DefaultPerks.Steward.Contractors, party.MobileParty, true, ref stat);
      return (int) stat.ResultNumber;
    }

    public override int GetSkillXpFromUpgradingTroops(
      PartyBase party,
      CharacterObject troop,
      int numberOfTroops)
    {
      return (troop.Level + 10) * numberOfTroops;
    }

    public override bool DoesPartyHaveRequiredItemsForUpgrade(
      PartyBase party,
      CharacterObject upgradeTarget)
    {
      ItemCategory itemFromCategory = upgradeTarget.UpgradeRequiresItemFromCategory;
      if (itemFromCategory == null)
        return true;
      int num = 0;
      for (int index = 0; index < party.ItemRoster.Count; ++index)
      {
        ItemRosterElement itemRosterElement = party.ItemRoster[index];
        if (itemRosterElement.EquipmentElement.Item.ItemCategory == itemFromCategory)
          num += itemRosterElement.Amount;
      }
      return num > 0;
    }

    public override bool DoesPartyHaveRequiredPerksForUpgrade(
      PartyBase party,
      CharacterObject character,
      CharacterObject upgradeTarget,
      out PerkObject requiredPerk)
    {
      requiredPerk = (PerkObject) null;
      if (!character.Culture.IsBandit || upgradeTarget.Culture.IsBandit)
        return true;
      requiredPerk = DefaultPerks.Leadership.VeteransRespect;
      return party.MobileParty.HasPerk(requiredPerk, true);
    }

    public override float GetUpgradeChanceForTroopUpgrade(
      PartyBase party,
      CharacterObject troop,
      int upgradeTargetIndex)
    {
      float chanceForTroopUpgrade = 1f;
      int length = troop.UpgradeTargets.Length;
      if (length > 1 && upgradeTargetIndex >= 0 && upgradeTargetIndex < length)
      {
        if (party.LeaderHero != null && party.LeaderHero.PreferredUpgradeFormation != FormationClass.NumberOfAllFormations)
        {
          FormationClass upgradeFormation = party.LeaderHero.PreferredUpgradeFormation;
          if (CharacterHelper.SearchForFormationInTroopTree(troop.UpgradeTargets[upgradeTargetIndex], upgradeFormation))
            chanceForTroopUpgrade = 9999f;
        }
        else
        {
          Hero leaderHero = party.LeaderHero;
          int num1 = leaderHero != null ? leaderHero.RandomValue : party.Id.GetHashCode();
          int deterministicHashCode = troop.StringId.GetDeterministicHashCode();
          int num2 = troop.Tier * 3 & 31;
          uint num3 = (uint) (num1 >> num2 ^ deterministicHashCode);
          if ((long) upgradeTargetIndex == (long) num3 % (long) length)
            chanceForTroopUpgrade = 9999f;
        }
      }
      return chanceForTroopUpgrade;
    }
  }
}
