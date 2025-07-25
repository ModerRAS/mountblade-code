// Decompiled with JetBrains decompiler
// Type: Helpers.CharacterHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace Helpers
{
  public static class CharacterHelper
  {
    public static DynamicBodyProperties GetDynamicBodyPropertiesBetweenMinMaxRange(
      CharacterObject character)
    {
      BodyProperties bodyPropertyMin = character.BodyPropertyRange.BodyPropertyMin;
      BodyProperties bodyPropertyMax = character.BodyPropertyRange.BodyPropertyMax;
      double minVal1 = (double) bodyPropertyMin.Age < (double) bodyPropertyMax.Age ? (double) bodyPropertyMin.Age : (double) bodyPropertyMax.Age;
      float num1 = (double) bodyPropertyMin.Age > (double) bodyPropertyMax.Age ? bodyPropertyMin.Age : bodyPropertyMax.Age;
      float minVal2 = (double) bodyPropertyMin.Weight < (double) bodyPropertyMax.Weight ? bodyPropertyMin.Weight : bodyPropertyMax.Weight;
      float maxVal1 = (double) bodyPropertyMin.Weight > (double) bodyPropertyMax.Weight ? bodyPropertyMin.Weight : bodyPropertyMax.Weight;
      float minVal3 = (double) bodyPropertyMin.Build < (double) bodyPropertyMax.Build ? bodyPropertyMin.Build : bodyPropertyMax.Build;
      float maxVal2 = (double) bodyPropertyMin.Build > (double) bodyPropertyMax.Build ? bodyPropertyMin.Build : bodyPropertyMax.Build;
      double maxVal3 = (double) num1;
      double age = (double) MBRandom.RandomFloatRanged((float) minVal1, (float) maxVal3);
      float num2 = MBRandom.RandomFloatRanged(minVal2, maxVal1);
      float num3 = MBRandom.RandomFloatRanged(minVal3, maxVal2);
      double weight = (double) num2;
      double build = (double) num3;
      return new DynamicBodyProperties((float) age, (float) weight, (float) build);
    }

    public static TextObject GetReputationDescription(CharacterObject character)
    {
      CharacterObject character1 = character;
      TextObject reputationDescription = new TextObject("{=!}{REPUTATION_SUMMARY}");
      TextObject matchingTextOrNull = Campaign.Current.ConversationManager.FindMatchingTextOrNull("reputation", character1);
      StringHelpers.SetCharacterProperties("NOTABLE", character, matchingTextOrNull);
      reputationDescription.SetTextVariable("REPUTATION_SUMMARY", matchingTextOrNull);
      return reputationDescription;
    }

    public static (uint color1, uint color2) GetDeterministicColorsForCharacter(
      CharacterObject character)
    {
      CultureObject cultureObject = character.HeroObject?.MapFaction != null ? character.HeroObject.MapFaction.Culture : character.Culture;
      if (!character.IsHero)
        return (cultureObject.Color, cultureObject.Color2);
      if (character.Occupation == Occupation.Lord)
      {
        IFaction mapFaction1 = character.HeroObject.MapFaction;
        int num1 = mapFaction1 != null ? (int) mapFaction1.Color : -3357781;
        IFaction mapFaction2 = character.HeroObject.MapFaction;
        int num2 = mapFaction2 != null ? (int) mapFaction2.Color2 : -3357781;
        return ((uint) num1, (uint) num2);
      }
      switch (cultureObject.StringId)
      {
        case "empire":
          IFaction mapFaction3 = character.HeroObject.MapFaction;
          return (mapFaction3 != null ? mapFaction3.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.EmpireHeroClothColors));
        case "sturgia":
          IFaction mapFaction4 = character.HeroObject.MapFaction;
          return (mapFaction4 != null ? mapFaction4.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.SturgiaHeroClothColors));
        case "aserai":
          IFaction mapFaction5 = character.HeroObject.MapFaction;
          return (mapFaction5 != null ? mapFaction5.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.AseraiHeroClothColors));
        case "vlandia":
          IFaction mapFaction6 = character.HeroObject.MapFaction;
          return (mapFaction6 != null ? mapFaction6.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.VlandiaHeroClothColors));
        case "battania":
          IFaction mapFaction7 = character.HeroObject.MapFaction;
          return (mapFaction7 != null ? mapFaction7.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.BattaniaHeroClothColors));
        case "khuzait":
          IFaction mapFaction8 = character.HeroObject.MapFaction;
          return (mapFaction8 != null ? mapFaction8.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.KhuzaitHeroClothColors));
        default:
          IFaction mapFaction9 = character.HeroObject.MapFaction;
          return (mapFaction9 != null ? mapFaction9.Color : 4291609515U, CharacterHelper.GetDeterministicColorFromListForHero(character.HeroObject, CampaignData.EmpireHeroClothColors));
      }
    }

    private static uint GetDeterministicColorFromListForHero(Hero hero, uint[] colors)
    {
      return ((IEnumerable<uint>) colors).ElementAt<uint>(hero.RandomIntWithSeed(39U) % colors.Length);
    }

    public static IFaceGeneratorCustomFilter GetFaceGeneratorFilter()
    {
      return Campaign.Current.GetCampaignBehavior<IFacegenCampaignBehavior>()?.GetFaceGenFilter();
    }

    public static string GetNonconversationPose(CharacterObject character)
    {
      if (character.HeroObject.IsGangLeader)
        return "aggressive";
      if (!character.HeroObject.IsNoncombatant && character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) <= 0 && character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) < 0)
        return "aggressive2";
      if (!character.HeroObject.IsNoncombatant && character.HeroObject.IsLord && character.GetPersona() == DefaultTraits.PersonaCurt && character.HeroObject.GetTraitLevel(DefaultTraits.Honor) > 0)
        return "warrior2";
      if (character.HeroObject.Clan != null && character.HeroObject.Clan.IsNoble && character.GetPersona() == DefaultTraits.PersonaEarnest && character.HeroObject.GetTraitLevel(DefaultTraits.Generosity) >= 0 && character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) >= 0)
        return "hip2";
      if (character.IsFemale && character.GetPersona() == DefaultTraits.PersonaSoftspoken)
        return "demure";
      if (character.IsFemale && character.GetPersona() == DefaultTraits.PersonaIronic)
        return "confident3";
      if (character.GetPersona() == DefaultTraits.PersonaCurt)
        return "closed2";
      if (character.GetPersona() == DefaultTraits.PersonaSoftspoken)
        return "demure2";
      if (character.GetPersona() == DefaultTraits.PersonaIronic)
        return "confident";
      return character.GetPersona() == DefaultTraits.PersonaEarnest ? "normal2" : "normal";
    }

    public static string GetNonconversationFacialIdle(CharacterObject character)
    {
      string nonconversationFacialIdle1 = "convo_normal";
      string str1 = "convo_bemused";
      string str2 = "convo_mocking_teasing";
      string nonconversationFacialIdle2 = "convo_mocking_revenge";
      string str3 = "convo_delighted";
      string str4 = "convo_approving";
      string str5 = "convo_thinking";
      string nonconversationFacialIdle3 = "convo_focused_happy";
      string nonconversationFacialIdle4 = "convo_calm_friendly";
      string str6 = "convo_annoyed";
      string nonconversationFacialIdle5 = "convo_undecided_closed";
      string nonconversationFacialIdle6 = "convo_bored";
      string str7 = "convo_grave";
      string str8 = "convo_predatory";
      string str9 = "convo_confused_annoyed";
      if (character.HeroObject.IsGangLeader)
        return character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) <= 0 && character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) < 0 ? str8 : str9;
      if (character.GetPersona() == DefaultTraits.PersonaCurt)
      {
        if (character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) < 0)
          return nonconversationFacialIdle6;
        if (character.HeroObject.GetTraitLevel(DefaultTraits.Honor) > 0)
          return nonconversationFacialIdle5;
        return character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) < 0 ? str6 : str7;
      }
      if (character.GetPersona() == DefaultTraits.PersonaEarnest)
      {
        if (character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) > 0)
          return nonconversationFacialIdle3;
        return character.HeroObject.GetTraitLevel(DefaultTraits.Generosity) < 0 ? nonconversationFacialIdle6 : str3;
      }
      if (character.IsFemale && character.GetPersona() == DefaultTraits.PersonaSoftspoken)
      {
        if (character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) > 0)
          return nonconversationFacialIdle4;
        return !character.HeroObject.IsNoncombatant ? str5 : str4;
      }
      if (character.GetPersona() != DefaultTraits.PersonaIronic)
        return nonconversationFacialIdle1;
      if (!character.HeroObject.IsNoncombatant && character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) < 0)
        return nonconversationFacialIdle2;
      return character.HeroObject.GetTraitLevel(DefaultTraits.Generosity) < 0 ? str2 : str1;
    }

    public static string GetStandingBodyIdle(CharacterObject character)
    {
      HeroHelper.WillLordAttack();
      string standingBodyIdle = "normal";
      TraitObject persona = character.GetPersona();
      bool flag1 = Settlement.CurrentSettlement != null;
      if (character.IsHero)
      {
        if (character.HeroObject.IsWounded)
          return (double) MBRandom.RandomFloat <= 0.699999988079071 ? "weary" : "weary2";
        int num = !character.HeroObject.IsHumanPlayerCharacter ? 1 : 0;
        int superiorityState = CharacterHelper.GetSuperiorityState(character);
        if (num != 0)
        {
          int relation = Hero.MainHero.GetRelation(character.HeroObject);
          bool flag2 = CharacterHelper.MorePowerThanPlayer(character);
          if (character.IsFemale && character.HeroObject.IsNoncombatant)
          {
            if (relation < 0)
              standingBodyIdle = "closed";
            else if (persona == DefaultTraits.PersonaIronic)
              standingBodyIdle = (double) MBRandom.RandomFloat <= 0.5 ? "confident" : "confident2";
            else if (persona == DefaultTraits.PersonaCurt)
              standingBodyIdle = (double) MBRandom.RandomFloat <= 0.5 ? "closed" : "confident";
            else if (persona == DefaultTraits.PersonaEarnest || persona == DefaultTraits.PersonaSoftspoken)
              standingBodyIdle = (double) MBRandom.RandomFloat <= 0.699999988079071 ? "demure" : "confident";
          }
          else if (relation <= -20)
          {
            if (superiorityState >= 0)
              standingBodyIdle = persona != DefaultTraits.PersonaSoftspoken ? (persona != DefaultTraits.PersonaIronic ? (character.IsFemale ? "confident2" : "warrior") : (character.IsFemale ? "confident2" : "aggressive")) : (character.IsFemale ? "closed" : "warrior2");
            else if (superiorityState == -1)
              standingBodyIdle = persona != DefaultTraits.PersonaSoftspoken ? (persona != DefaultTraits.PersonaIronic ? (character.IsFemale ? "closed" : "warrior2") : (!flag2 ? "closed" : ((double) MBRandom.RandomFloat <= 0.5 ? "closed" : "warrior"))) : (!flag2 ? (character.IsFemale ? "closed" : "normal") : "closed");
          }
          else if (superiorityState >= 0)
          {
            if (persona == DefaultTraits.PersonaIronic)
              standingBodyIdle = !flag1 ? "confident2" : (!flag2 ? ((double) MBRandom.RandomFloat <= 0.5 ? "hip" : "normal") : ((double) MBRandom.RandomFloat <= 0.699999988079071 ? "confident2" : "normal"));
            else if (persona == DefaultTraits.PersonaSoftspoken)
              standingBodyIdle = !flag1 ? "normal" : (character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) + character.HeroObject.GetTraitLevel(DefaultTraits.Honor) <= 0 ? (!flag2 ? ((double) MBRandom.RandomFloat <= 0.5 ? "normal" : "demure") : ((double) MBRandom.RandomFloat <= 0.5 ? "normal" : "closed")) : ((double) MBRandom.RandomFloat <= 0.5 ? "normal2" : "demure2"));
            else if (persona == DefaultTraits.PersonaCurt)
              standingBodyIdle = !flag1 ? "normal" : (character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) + character.HeroObject.GetTraitLevel(DefaultTraits.Honor) <= 0 ? (!flag2 ? ((double) MBRandom.RandomFloat <= 0.40000000596046448 ? "warrior2" : "closed") : ((double) MBRandom.RandomFloat <= 0.60000002384185791 ? "normal" : "closed2")) : "demure2");
            else if (persona == DefaultTraits.PersonaEarnest)
              standingBodyIdle = !flag1 ? "normal" : (!flag2 ? ((double) MBRandom.RandomFloat <= 0.20000000298023224 ? "normal" : "confident") : ((double) MBRandom.RandomFloat <= 0.60000002384185791 ? "normal" : "confident"));
          }
        }
      }
      if (character.Occupation == Occupation.Bandit || character.Occupation == Occupation.Gangster)
        standingBodyIdle = (double) MBRandom.RandomFloat <= 0.699999988079071 ? "aggressive" : "hip";
      if (character.Occupation == Occupation.Guard || character.Occupation == Occupation.PrisonGuard || character.Occupation == Occupation.Soldier)
        standingBodyIdle = "normal";
      return standingBodyIdle;
    }

    public static string GetDefaultFaceIdle(CharacterObject character)
    {
      string defaultFaceIdle1 = "convo_normal";
      string str1 = "convo_bemused";
      string defaultFaceIdle2 = "convo_mocking_aristocratic";
      string defaultFaceIdle3 = "convo_mocking_teasing";
      string defaultFaceIdle4 = "convo_mocking_revenge";
      string defaultFaceIdle5 = "convo_contemptuous";
      string defaultFaceIdle6 = "convo_delighted";
      string str2 = "convo_approving";
      string defaultFaceIdle7 = "convo_relaxed_happy";
      string defaultFaceIdle8 = "convo_nonchalant";
      string str3 = "convo_thinking";
      string defaultFaceIdle9 = "convo_undecided_closed";
      string str4 = "convo_bored";
      string str5 = "convo_bored2";
      string str6 = "convo_grave";
      string defaultFaceIdle10 = "convo_stern";
      string defaultFaceIdle11 = "convo_very_stern";
      string defaultFaceIdle12 = "convo_beaten";
      string defaultFaceIdle13 = "convo_predatory";
      string defaultFaceIdle14 = "convo_confused_annoyed";
      bool flag1 = false;
      bool flag2 = false;
      if (character.IsHero)
      {
        flag1 = character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) + character.HeroObject.GetTraitLevel(DefaultTraits.Generosity) > 0;
        flag2 = character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) + character.HeroObject.GetTraitLevel(DefaultTraits.Generosity) < 0;
      }
      bool flag3 = (double) Hero.MainHero.Clan.Renown < 0.0;
      bool flag4 = false;
      if (PlayerEncounter.Current != null && PlayerEncounter.Current.PlayerSide == BattleSideEnum.Defender && (PlayerEncounter.EncounteredMobileParty == null || PlayerEncounter.EncounteredMobileParty.Ai.DoNotAttackMainPartyUntil.IsPast) && PlayerEncounter.EncounteredParty.Owner != null && FactionManager.IsAtWarAgainstFaction(PlayerEncounter.EncounteredParty.MapFaction, Hero.MainHero.MapFaction))
        flag4 = true;
      if (Campaign.Current.CurrentConversationContext == ConversationContext.CapturedLord && character.IsHero && character.HeroObject.MapFaction == PlayerEncounter.EncounteredParty.MapFaction)
        return defaultFaceIdle10;
      if (character.HeroObject != null)
      {
        int relation = character.HeroObject.GetRelation(Hero.MainHero);
        if (character.HeroObject != null && character.GetPersona() == DefaultTraits.PersonaIronic)
        {
          if (relation > 4)
            return defaultFaceIdle3;
          if (relation < -10)
            return defaultFaceIdle4;
          if (character.Occupation == Occupation.GangLeader && character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) < 0 || character.Occupation == Occupation.GangLeader & flag3)
            return defaultFaceIdle8;
          Clan clan = character.HeroObject.Clan;
          if ((clan != null ? (!clan.IsNoble ? 1 : 0) : 1) != 0)
            return defaultFaceIdle2;
          return character.HeroObject.GetTraitLevel(DefaultTraits.Calculating) + character.HeroObject.GetTraitLevel(DefaultTraits.Mercy) < 0 ? str4 : str1;
        }
        if (character.HeroObject != null && character.GetPersona() == DefaultTraits.PersonaCurt)
        {
          if (relation > 4)
            return defaultFaceIdle6;
          if (relation < -20)
            return defaultFaceIdle3;
          if (character.Occupation == Occupation.GangLeader & flag3)
            return defaultFaceIdle13;
          return flag2 ? str6 : str5;
        }
        if (character.HeroObject != null && character.GetPersona() == DefaultTraits.PersonaSoftspoken)
        {
          if (relation > 4)
            return defaultFaceIdle6;
          if (relation < -20)
            return defaultFaceIdle14;
          Clan clan1 = character.HeroObject.Clan;
          if (((((clan1 != null ? (!clan1.IsNoble ? 1 : 0) : 1) & (flag3 ? 1 : 0)) == 0 ? 0 : (!character.IsFemale ? 1 : 0)) & (flag2 ? 1 : 0)) != 0)
            return defaultFaceIdle5;
          Clan clan2 = character.HeroObject.Clan;
          if (((((clan2 != null ? (clan2.IsNoble ? 1 : 0) : 0) & (flag3 ? 1 : 0)) == 0 ? 0 : (!character.IsFemale ? 1 : 0)) & (flag2 ? 1 : 0)) != 0)
            return defaultFaceIdle9;
          return flag1 ? str2 : str3;
        }
        if (character.HeroObject != null && character.GetPersona() == DefaultTraits.PersonaEarnest)
        {
          if (relation > 4)
            return defaultFaceIdle6;
          if (relation < -40)
            return defaultFaceIdle11;
          if (relation < -20)
            return defaultFaceIdle10;
          Clan clan = character.HeroObject.Clan;
          if (((clan != null ? (clan.IsNoble ? 1 : 0) : 0) & (flag2 ? 1 : 0)) != 0)
            return defaultFaceIdle8;
          return flag1 ? str2 : defaultFaceIdle1;
        }
      }
      else if (character.Occupation == Occupation.Villager || character.Occupation == Occupation.Townsfolk)
      {
        int deterministicHashCode = character.StringId.GetDeterministicHashCode();
        if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.Town != null && (double) Settlement.CurrentSettlement.Town.Prosperity < (double) (200 * (Settlement.CurrentSettlement.IsTown ? 5 : 1)) && deterministicHashCode % 2 == 0)
          return defaultFaceIdle12;
        if (deterministicHashCode % 2 == 1)
          return defaultFaceIdle7;
      }
      else if (flag4 && character.Occupation == Occupation.Bandit)
        return defaultFaceIdle10;
      return defaultFaceIdle1;
    }

    private static int GetSuperiorityState(CharacterObject character)
    {
      if (Hero.MainHero.MapFaction != null && Hero.MainHero.MapFaction.Leader == Hero.MainHero && character.HeroObject.MapFaction == Hero.MainHero.MapFaction)
        return -1;
      if (character.IsHero && character.HeroObject.MapFaction != null && character.HeroObject.MapFaction.IsKingdomFaction)
      {
        Clan clan = character.HeroObject.Clan;
        if ((clan != null ? (clan.IsNoble ? 1 : 0) : 0) != 0)
          return 1;
      }
      return character.Occupation == Occupation.Villager || character.Occupation == Occupation.Townsfolk || character.Occupation == Occupation.Bandit || character.Occupation == Occupation.Gangster || character.Occupation == Occupation.Wanderer ? -1 : 0;
    }

    private static bool MorePowerThanPlayer(CharacterObject otherCharacter)
    {
      return (otherCharacter.HeroObject.PartyBelongedTo == null ? (double) otherCharacter.HeroObject.Power : (double) otherCharacter.HeroObject.PartyBelongedTo.Party.TotalStrength) > (double) MobileParty.MainParty.Party.TotalStrength;
    }

    public static CharacterObject FindUpgradeRootOf(CharacterObject character)
    {
      foreach (CharacterObject upgradeRootOf in (List<CharacterObject>) CharacterObject.All)
      {
        if (upgradeRootOf.IsBasicTroop && CharacterHelper.UpgradeTreeContains(upgradeRootOf, upgradeRootOf, character))
          return upgradeRootOf;
      }
      return character;
    }

    private static bool UpgradeTreeContains(
      CharacterObject rootTroop,
      CharacterObject baseTroop,
      CharacterObject character)
    {
      if (baseTroop == character)
        return true;
      for (int index = 0; index < baseTroop.UpgradeTargets.Length && baseTroop.UpgradeTargets[index] != rootTroop; ++index)
      {
        if (CharacterHelper.UpgradeTreeContains(rootTroop, baseTroop.UpgradeTargets[index], character))
          return true;
      }
      return false;
    }

    public static ItemObject GetDefaultWeapon(CharacterObject affectorCharacter)
    {
      for (int index = 0; index <= 4; ++index)
      {
        EquipmentElement equipmentFromSlot = affectorCharacter.Equipment.GetEquipmentFromSlot((EquipmentIndex) index);
        if (equipmentFromSlot.Item?.PrimaryWeapon != null && equipmentFromSlot.Item.PrimaryWeapon.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.WeaponMask))
          return equipmentFromSlot.Item;
      }
      return (ItemObject) null;
    }

    public static bool CanUseItemBasedOnSkill(
      BasicCharacterObject currentCharacter,
      EquipmentElement itemRosterElement)
    {
      ItemObject itemObject = itemRosterElement.Item;
      SkillObject relevantSkill = itemObject.RelevantSkill;
      if (relevantSkill != null && currentCharacter.GetSkillValue(relevantSkill) < itemObject.Difficulty || currentCharacter.IsFemale && itemObject.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.NotUsableByFemale))
        return false;
      return currentCharacter.IsFemale || !itemObject.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.NotUsableByMale);
    }

    public static int GetPartyMemberFaceSeed(
      PartyBase party,
      BasicCharacterObject character,
      int rank)
    {
      int num = party.Index * 171 + character.StringId.GetDeterministicHashCode() * 6791 + rank * 197;
      return (num >= 0 ? num : -num) % 2000;
    }

    public static int GetDefaultFaceSeed(BasicCharacterObject character, int rank)
    {
      return character.GetDefaultFaceSeed(rank);
    }

    public static bool SearchForFormationInTroopTree(
      CharacterObject baseTroop,
      FormationClass formation)
    {
      if (baseTroop.UpgradeTargets.Length == 0 && baseTroop.DefaultFormationClass == formation)
        return true;
      foreach (CharacterObject upgradeTarget in baseTroop.UpgradeTargets)
      {
        if (upgradeTarget.Level > baseTroop.Level && CharacterHelper.SearchForFormationInTroopTree(upgradeTarget, formation))
          return true;
      }
      return false;
    }

    public static IEnumerable<CharacterObject> GetTroopTree(
      CharacterObject baseTroop,
      float minTier = -1f,
      float maxTier = 3.40282347E+38f)
    {
      MBQueue<CharacterObject> queue = new MBQueue<CharacterObject>();
      queue.Enqueue(baseTroop);
      while (queue.Count > 0)
      {
        CharacterObject character = queue.Dequeue();
        if ((double) character.Tier >= (double) minTier && (double) character.Tier <= (double) maxTier)
          yield return character;
        foreach (CharacterObject upgradeTarget in character.UpgradeTargets)
          queue.Enqueue(upgradeTarget);
        character = (CharacterObject) null;
      }
    }

    public static void DeleteQuestCharacter(CharacterObject character, Settlement questSettlement)
    {
      if (questSettlement != null)
      {
        IList<LocationCharacter> listOfCharacters = questSettlement.LocationComplex.GetListOfCharacters();
        if (listOfCharacters.Any<LocationCharacter>((Func<LocationCharacter, bool>) (x => x.Character == character)))
        {
          LocationCharacter locationCharacter = listOfCharacters.First<LocationCharacter>((Func<LocationCharacter, bool>) (x => x.Character == character));
          questSettlement.LocationComplex.RemoveCharacterIfExists(locationCharacter);
        }
      }
      Game.Current.ObjectManager.UnregisterObject((MBObjectBase) character);
    }
  }
}
