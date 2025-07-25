// Decompiled with JetBrains decompiler
// Type: Helpers.PerkHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class PerkHelper
  {
    public static IEnumerable<PerkObject> GetCaptainPerksForTroopUsages(
      TroopUsageFlags troopUsageFlags)
    {
      List<PerkObject> perksForTroopUsages = new List<PerkObject>();
      foreach (PerkObject perkObject in (List<PerkObject>) PerkObject.All)
      {
        if (((perkObject.PrimaryTroopUsageMask == TroopUsageFlags.Undefined ? 0 : (troopUsageFlags.HasAllFlags<TroopUsageFlags>(perkObject.PrimaryTroopUsageMask) ? 1 : 0)) | (perkObject.SecondaryTroopUsageMask == TroopUsageFlags.Undefined ? (false ? 1 : 0) : (troopUsageFlags.HasAllFlags<TroopUsageFlags>(perkObject.SecondaryTroopUsageMask) ? 1 : 0))) != 0)
          perksForTroopUsages.Add(perkObject);
      }
      return (IEnumerable<PerkObject>) perksForTroopUsages;
    }

    public static bool PlayerHasAnyItemDonationPerk()
    {
      return MobileParty.MainParty.HasPerk(DefaultPerks.Steward.GivingHands) || MobileParty.MainParty.HasPerk(DefaultPerks.Steward.PaidInPromise, true);
    }

    public static void AddPerkBonusForParty(
      PerkObject perk,
      MobileParty party,
      bool isPrimaryBonus,
      ref ExplainedNumber stat)
    {
      Hero leaderHero = party?.LeaderHero;
      if (leaderHero == null)
        return;
      bool flag1 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.PartyLeader;
      bool flag2 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.PartyLeader;
      if (flag1 | flag2 && leaderHero.GetPerkValue(perk))
      {
        float number = flag1 ? perk.PrimaryBonus : perk.SecondaryBonus;
        if (leaderHero.Clan != Clan.PlayerClan)
          number *= 1.8f;
        if (flag1)
          PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, number, perk.Name);
        else
          PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, number, perk.Name);
      }
      bool flag3 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.ClanLeader;
      bool flag4 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.ClanLeader;
      if (flag3 | flag4 && leaderHero.Clan.Leader != null && leaderHero.Clan.Leader.GetPerkValue(perk))
      {
        if (flag3)
          PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
        else
          PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
      }
      bool flag5 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.PartyMember;
      bool flag6 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.PartyMember;
      if (flag5 | flag6)
      {
        if (leaderHero.Clan != Clan.PlayerClan)
        {
          if (leaderHero.GetPerkValue(perk))
            PerkHelper.AddToStat(ref stat, flag5 ? perk.PrimaryIncrementType : perk.SecondaryIncrementType, flag5 ? perk.PrimaryBonus : perk.SecondaryBonus, perk.Name);
        }
        else
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
          {
            if (troopRosterElement.Character.IsHero && troopRosterElement.Character.GetPerkValue(perk))
              PerkHelper.AddToStat(ref stat, flag5 ? perk.PrimaryIncrementType : perk.SecondaryIncrementType, flag5 ? perk.PrimaryBonus : perk.SecondaryBonus, perk.Name);
          }
        }
      }
      if (leaderHero.Clan != Clan.PlayerClan)
        return;
      bool flag7 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.Engineer;
      bool flag8 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.Engineer;
      if (flag7 | flag8)
      {
        Hero effectiveEngineer = party.EffectiveEngineer;
        if (effectiveEngineer != null && effectiveEngineer.GetPerkValue(perk))
        {
          if (flag7)
            PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
          else
            PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
        }
      }
      bool flag9 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.Scout;
      bool flag10 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.Scout;
      if (flag9 | flag10)
      {
        Hero effectiveScout = party.EffectiveScout;
        if (effectiveScout != null && effectiveScout.GetPerkValue(perk))
        {
          if (flag9)
            PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
          else
            PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
        }
      }
      bool flag11 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.Surgeon;
      bool flag12 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.Surgeon;
      if (flag11 | flag12)
      {
        Hero effectiveSurgeon = party.EffectiveSurgeon;
        if (effectiveSurgeon != null && effectiveSurgeon.GetPerkValue(perk))
        {
          if (flag11)
            PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
          else
            PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
        }
      }
      bool flag13 = isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.Quartermaster;
      bool flag14 = !isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.Quartermaster;
      if (!(flag13 | flag14))
        return;
      Hero effectiveQuartermaster = party.EffectiveQuartermaster;
      if (effectiveQuartermaster == null || !effectiveQuartermaster.GetPerkValue(perk))
        return;
      if (flag13)
        PerkHelper.AddToStat(ref stat, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
      else
        PerkHelper.AddToStat(ref stat, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
    }

    private static void AddToStat(
      ref ExplainedNumber stat,
      SkillEffect.EffectIncrementType effectIncrementType,
      float number,
      TextObject text)
    {
      if (effectIncrementType == SkillEffect.EffectIncrementType.Add)
      {
        stat.Add(number, text);
      }
      else
      {
        if (effectIncrementType != SkillEffect.EffectIncrementType.AddFactor)
          return;
        stat.AddFactor(number, text);
      }
    }

    public static void AddPerkBonusForCharacter(
      PerkObject perk,
      CharacterObject character,
      bool isPrimaryBonus,
      ref ExplainedNumber bonuses)
    {
      if (isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.Personal)
      {
        if (character.GetPerkValue(perk))
          PerkHelper.AddToStat(ref bonuses, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
      }
      else if (!isPrimaryBonus && perk.SecondaryRole == SkillEffect.PerkRole.Personal && character.GetPerkValue(perk))
        PerkHelper.AddToStat(ref bonuses, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
      if (isPrimaryBonus && perk.PrimaryRole == SkillEffect.PerkRole.ClanLeader)
      {
        if (!character.IsHero || character.HeroObject.Clan?.Leader == null || !character.HeroObject.Clan.Leader.GetPerkValue(perk))
          return;
        PerkHelper.AddToStat(ref bonuses, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
      }
      else
      {
        if (isPrimaryBonus || perk.SecondaryRole != SkillEffect.PerkRole.ClanLeader || !character.IsHero || character.HeroObject.Clan.Leader == null || !character.HeroObject.Clan.Leader.GetPerkValue(perk))
          return;
        PerkHelper.AddToStat(ref bonuses, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
      }
    }

    public static void AddEpicPerkBonusForCharacter(
      PerkObject perk,
      CharacterObject character,
      SkillObject skillType,
      bool applyPrimaryBonus,
      ref ExplainedNumber bonuses,
      int skillRequired)
    {
      if (!character.GetPerkValue(perk))
        return;
      int skillValue = character.GetSkillValue(skillType);
      if (skillValue <= skillRequired)
        return;
      if (applyPrimaryBonus)
        PerkHelper.AddToStat(ref bonuses, perk.PrimaryIncrementType, perk.PrimaryBonus * (float) (skillValue - skillRequired), perk.Name);
      else
        PerkHelper.AddToStat(ref bonuses, perk.SecondaryIncrementType, perk.SecondaryBonus * (float) (skillValue - skillRequired), perk.Name);
    }

    public static void AddPerkBonusFromCaptain(
      PerkObject perk,
      CharacterObject captainCharacter,
      ref ExplainedNumber bonuses)
    {
      if (perk.PrimaryRole == SkillEffect.PerkRole.Captain)
      {
        if (captainCharacter == null || !captainCharacter.GetPerkValue(perk))
          return;
        PerkHelper.AddToStat(ref bonuses, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
      }
      else
      {
        if (perk.SecondaryRole != SkillEffect.PerkRole.Captain || captainCharacter == null || !captainCharacter.GetPerkValue(perk))
          return;
        PerkHelper.AddToStat(ref bonuses, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
      }
    }

    public static void AddPerkBonusForTown(PerkObject perk, Town town, ref ExplainedNumber bonuses)
    {
      bool flag1 = perk.PrimaryRole == SkillEffect.PerkRole.Governor;
      bool flag2 = perk.SecondaryRole == SkillEffect.PerkRole.Governor;
      if (!(flag1 | flag2))
        return;
      Hero governor = town.Governor;
      if (governor == null || !governor.GetPerkValue(perk) || governor.CurrentSettlement == null || governor.CurrentSettlement != town.Settlement)
        return;
      if (flag1)
        PerkHelper.AddToStat(ref bonuses, perk.PrimaryIncrementType, perk.PrimaryBonus, perk.Name);
      else
        PerkHelper.AddToStat(ref bonuses, perk.SecondaryIncrementType, perk.SecondaryBonus, perk.Name);
    }

    public static bool GetPerkValueForTown(PerkObject perk, Town town)
    {
      if (perk.PrimaryRole == SkillEffect.PerkRole.ClanLeader || perk.SecondaryRole == SkillEffect.PerkRole.ClanLeader)
      {
        Hero leader = town.Owner.Settlement.OwnerClan?.Leader;
        if (leader != null && leader.GetPerkValue(perk))
          return true;
      }
      if (perk.PrimaryRole == SkillEffect.PerkRole.Governor || perk.SecondaryRole == SkillEffect.PerkRole.Governor)
      {
        Hero governor = town.Governor;
        if (governor != null && governor.GetPerkValue(perk) && governor.CurrentSettlement != null && governor.CurrentSettlement == town.Settlement)
          return true;
      }
      return false;
    }

    public static List<PerkObject> GetGovernorPerksForHero(Hero hero)
    {
      List<PerkObject> governorPerksForHero = new List<PerkObject>();
      foreach (PerkObject perk in (List<PerkObject>) PerkObject.All)
      {
        if ((perk.PrimaryRole == SkillEffect.PerkRole.Governor || perk.SecondaryRole == SkillEffect.PerkRole.Governor) && hero.GetPerkValue(perk))
          governorPerksForHero.Add(perk);
      }
      return governorPerksForHero;
    }

    public static (TextObject, TextObject) GetGovernorEngineeringSkillEffectForHero(Hero governor)
    {
      if (governor == null || governor.GetSkillValue(DefaultSkills.Engineering) <= 0)
        return (TextObject.Empty, new TextObject("{=0rBsbw1T}No effect"));
      SkillEffect projectBuildingBonus = DefaultSkillEffects.TownProjectBuildingBonus;
      TextObject description = projectBuildingBonus.Description;
      float num = projectBuildingBonus.PrimaryRole == SkillEffect.PerkRole.Governor ? projectBuildingBonus.PrimaryBonus : projectBuildingBonus.SecondaryBonus;
      description.SetTextVariable("a0", (float) governor.GetSkillValue(DefaultSkills.Engineering) * num);
      return (DefaultSkills.Engineering.Name, description);
    }

    public static void SetDescriptionTextVariable(
      TextObject description,
      float bonus,
      SkillEffect.EffectIncrementType effectIncrementType)
    {
      string str = string.Format("{0:0.#}", (object) (float) (effectIncrementType == SkillEffect.EffectIncrementType.AddFactor ? (double) bonus * 100.0 : (double) bonus));
      if ((double) bonus > 0.0)
        description.SetTextVariable("VALUE", "+" + str);
      else
        description.SetTextVariable("VALUE", str ?? "");
    }

    public static int AvailablePerkCountOfHero(Hero hero)
    {
      MBList<PerkObject> mbList = new MBList<PerkObject>();
      foreach (PerkObject perk in (List<PerkObject>) PerkObject.All)
      {
        SkillObject skill = perk.Skill;
        if ((double) hero.GetSkillValue(skill) >= (double) perk.RequiredSkillValue && !hero.GetPerkValue(perk) && (perk.AlternativePerk == null || !hero.GetPerkValue(perk.AlternativePerk)) && !mbList.Contains(perk.AlternativePerk))
          mbList.Add(perk);
      }
      return mbList.Count;
    }
  }
}
