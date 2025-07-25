// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.HeroCreator
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public static class HeroCreator
  {
    public static Hero CreateHeroAtOccupation(
      Occupation neededOccupation,
      Settlement forcedHomeSettlement = null)
    {
      Settlement settlement = forcedHomeSettlement ?? SettlementHelper.GetRandomTown();
      IEnumerable<CharacterObject> source = settlement.Culture.NotableAndWandererTemplates.Where<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == neededOccupation));
      int max = 0;
      foreach (CharacterObject characterObject in source)
      {
        int num = characterObject.GetTraitLevel(DefaultTraits.Frequency) * 10;
        max += num > 0 ? num : 100;
      }
      if (!source.Any<CharacterObject>())
        return (Hero) null;
      CharacterObject template = (CharacterObject) null;
      int num1 = settlement.RandomIntWithSeed((uint) settlement.Notables.Count, 1, max);
      foreach (CharacterObject characterObject in source)
      {
        int num2 = characterObject.GetTraitLevel(DefaultTraits.Frequency) * 10;
        num1 -= num2 > 0 ? num2 : 100;
        if (num1 < 0)
        {
          template = characterObject;
          break;
        }
      }
      Hero specialHero = HeroCreator.CreateSpecialHero(template, settlement);
      if (specialHero.HomeSettlement.IsVillage && specialHero.HomeSettlement.Village.Bound != null && specialHero.HomeSettlement.Village.Bound.IsCastle)
      {
        float num3 = MBRandom.RandomFloat * 20f;
        specialHero.AddPower(num3);
      }
      if (neededOccupation != Occupation.Wanderer)
        specialHero.ChangeState(Hero.CharacterStates.Active);
      if (neededOccupation != Occupation.Wanderer)
        EnterSettlementAction.ApplyForCharacterOnly(specialHero, settlement);
      if (neededOccupation != Occupation.Wanderer)
      {
        int amount = 10000;
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, specialHero, amount, true);
      }
      Hero heroObject = specialHero.Template?.HeroObject;
      specialHero.SupporterOf = heroObject == null || specialHero.Template.HeroObject.Clan == null || !specialHero.Template.HeroObject.Clan.IsMinorFaction ? HeroHelper.GetRandomClanForNotable(specialHero) : specialHero.Template.HeroObject.Clan;
      if (neededOccupation != Occupation.Wanderer)
        HeroCreator.AddRandomVarianceToTraits(specialHero);
      return specialHero;
    }

    private static Hero CreateNewHero(CharacterObject template, int age = -1)
    {
      Debug.Print("creating hero from template with id: " + template.StringId);
      CharacterObject newCharacter = CharacterObject.CreateFrom(template);
      Hero hero = Hero.CreateHero(newCharacter.StringId);
      hero.SetCharacterObject(newCharacter);
      newCharacter.HeroObject = hero;
      CampaignTime birthday;
      switch (age)
      {
        case -1:
          birthday = HeroHelper.GetRandomBirthDayForAge((float) (Campaign.Current.Models.AgeModel.HeroComesOfAge + MBRandom.RandomInt(30)));
          break;
        case 0:
          birthday = CampaignTime.Now;
          break;
        default:
          if (hero.IsWanderer)
          {
            age = (int) template.Age;
            if (age < 20)
            {
              foreach (TraitObject trait in (List<TraitObject>) TraitObject.All)
              {
                int num = 12 + 4 * template.GetTraitLevel(trait);
                if (age < num)
                  age = num;
              }
            }
            birthday = HeroHelper.GetRandomBirthDayForAge((float) age);
            break;
          }
          birthday = HeroHelper.GetRandomBirthDayForAge((float) age);
          break;
      }
      newCharacter.HeroObject.SetBirthDay(birthday);
      Settlement settlement = SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (x =>
      {
        if (!x.IsTown)
          return false;
        return newCharacter.Culture.StringId == "neutral_culture" || x.Culture == newCharacter.Culture;
      })) ?? SettlementHelper.FindRandomSettlement((Func<Settlement, bool>) (x => x.IsTown));
      newCharacter.HeroObject.BornSettlement = settlement;
      newCharacter.HeroObject.StaticBodyProperties = BodyProperties.GetRandomBodyProperties(template.Race, template.IsFemale, template.GetBodyPropertiesMin(false), template.GetBodyPropertiesMax(), 0, MBRandom.RandomInt(), newCharacter.HairTags, newCharacter.BeardTags, newCharacter.TattooTags).StaticProperties;
      newCharacter.HeroObject.Weight = 0.0f;
      newCharacter.HeroObject.Build = 0.0f;
      if ((double) newCharacter.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge)
        newCharacter.HeroObject.HeroDeveloper.InitializeHeroDeveloper();
      hero.PreferredUpgradeFormation = HeroCreator.GetRandomPreferredUpgradeFormation();
      return newCharacter.HeroObject;
    }

    public static Hero CreateSpecialHero(
      CharacterObject template,
      Settlement bornSettlement = null,
      Clan faction = null,
      Clan supporterOfClan = null,
      int age = -1)
    {
      Hero newHero = HeroCreator.CreateNewHero(template, age);
      CultureObject culture = template.Culture;
      if (culture == null && bornSettlement != null)
        culture = bornSettlement.Culture;
      else if (culture == null && faction != null)
        culture = faction.Culture;
      if (faction != null)
        newHero.Clan = faction;
      if (supporterOfClan != null)
        newHero.SupporterOf = supporterOfClan;
      if (bornSettlement != null)
        newHero.BornSettlement = bornSettlement;
      newHero.CharacterObject.Culture = culture;
      TextObject firstName;
      TextObject fullName;
      NameGenerator.Current.GenerateHeroNameAndHeroFullName(newHero, out firstName, out fullName, false);
      newHero.SetName(fullName, firstName);
      HeroCreator.ModifyAppearanceByTraits(newHero);
      CampaignEventDispatcher.Instance.OnHeroCreated(newHero, false);
      return newHero;
    }

    public static Hero CreateRelativeNotableHero(Hero relative)
    {
      Hero heroAtOccupation = HeroCreator.CreateHeroAtOccupation(relative.CharacterObject.Occupation, relative.HomeSettlement);
      heroAtOccupation.Culture = relative.Culture;
      BodyProperties bodyPropertiesMin1 = relative.CharacterObject.GetBodyPropertiesMin(false);
      BodyProperties bodyPropertiesMin2 = heroAtOccupation.CharacterObject.GetBodyPropertiesMin(false);
      int defaultFaceSeed = relative.CharacterObject.GetDefaultFaceSeed(1);
      string hairTags = relative.HairTags;
      string tattooTags = relative.TattooTags;
      heroAtOccupation.StaticBodyProperties = BodyProperties.GetRandomBodyProperties(heroAtOccupation.CharacterObject.Race, heroAtOccupation.IsFemale, bodyPropertiesMin1, bodyPropertiesMin2, 1, defaultFaceSeed, hairTags, relative.BeardTags, tattooTags).StaticProperties;
      return heroAtOccupation;
    }

    public static bool CreateBasicHero(CharacterObject character, out Hero hero, string stringId = "")
    {
      if (string.IsNullOrEmpty(stringId))
      {
        hero = HeroCreator.CreateNewHero(character);
        CampaignEventDispatcher.Instance.OnHeroCreated(hero, false);
        return true;
      }
      hero = Campaign.Current.CampaignObjectManager.Find<Hero>(stringId);
      if (hero != null)
        return false;
      hero = Hero.CreateHero(stringId);
      hero.SetCharacterObject(character);
      hero.HeroDeveloper.InitializeHeroDeveloper(template: hero.Template);
      hero.StaticBodyProperties = character.GetBodyPropertiesMin(false).StaticProperties;
      hero.Weight = 0.0f;
      hero.Build = 0.0f;
      character.HeroObject = hero;
      hero.PreferredUpgradeFormation = HeroCreator.GetRandomPreferredUpgradeFormation();
      CampaignEventDispatcher.Instance.OnHeroCreated(hero, false);
      return true;
    }

    private static void ModifyAppearanceByTraits(Hero hero)
    {
      int num1 = MBRandom.RandomInt(0, 100);
      int num2 = MBRandom.RandomInt(0, 100);
      if ((double) hero.Age >= 40.0)
      {
        num1 -= 30;
        num2 += 30;
      }
      int hair = -1;
      int beard = -1;
      int tattoo = -1;
      bool flag = hero.HairTags.IsEmpty<char>() && hero.BeardTags.IsEmpty<char>();
      if (((hero.GetTraitLevel(DefaultTraits.RomanHair) <= 0 ? 0 : (!hero.IsFemale ? 1 : 0)) & (flag ? 1 : 0)) != 0)
      {
        hair = num1 >= 0 ? (num1 >= 20 ? (num1 >= 70 ? 6 : 8) : 13) : 0;
        beard = num2 >= 60 ? (num2 >= 110 ? 14 : 13) : 0;
      }
      else if (((hero.GetTraitLevel(DefaultTraits.CelticHair) <= 0 ? 0 : (!hero.IsFemale ? 1 : 0)) & (flag ? 1 : 0)) != 0)
      {
        hair = num1 >= 0 ? (num1 >= 20 ? (num1 >= 40 ? (num1 >= 60 ? (num1 >= 85 ? 7 : 2) : 14) : 6) : 13) : 0;
        beard = num2 >= 40 ? (num2 >= 60 ? (num2 >= 110 ? 5 : 3) : 2) : 1;
      }
      else if (((hero.GetTraitLevel(DefaultTraits.ArabianHair) <= 0 ? 0 : (!hero.IsFemale ? 1 : 0)) & (flag ? 1 : 0)) != 0)
      {
        hair = num1 >= 0 ? (num1 >= 20 ? (num1 >= 40 ? (num1 >= 60 ? (num1 >= 85 ? 7 : 11) : 2) : 6) : 13) : 0;
        beard = num2 >= 40 ? (num2 >= 50 ? (num2 >= 60 ? (num2 >= 70 ? (num2 >= 80 ? (num2 >= 100 ? 17 : 9) : 15) : 8) : 12) : 6) : 0;
      }
      else if (((hero.GetTraitLevel(DefaultTraits.RusHair) <= 0 ? 0 : (!hero.IsFemale ? 1 : 0)) & (flag ? 1 : 0)) != 0)
      {
        hair = num1 >= 0 ? (num1 >= 40 ? (num1 >= 60 ? (num1 >= 85 ? 2 : 11) : 12) : 6) : 0;
        beard = num2 >= 30 ? (num2 >= 60 ? (num2 >= 70 ? (num2 >= 90 ? 19 : 18) : 17) : 13) : 0;
      }
      hero.ModifyHair(hair, beard, tattoo);
    }

    private static void AddRandomVarianceToTraits(Hero hero)
    {
      foreach (TraitObject trait in (List<TraitObject>) TraitObject.All)
      {
        if (trait == DefaultTraits.Honor || trait == DefaultTraits.Mercy || trait == DefaultTraits.Generosity || trait == DefaultTraits.Valor || trait == DefaultTraits.Calculating)
        {
          int num1 = hero.CharacterObject.GetTraitLevel(trait);
          float num2 = MBRandom.RandomFloat;
          if (hero.IsPreacher && trait == DefaultTraits.Generosity)
            num2 = 0.5f;
          if (hero.IsMerchant && trait == DefaultTraits.Calculating)
            num2 = 0.5f;
          if ((double) num2 < 0.25)
          {
            --num1;
            if (num1 < -1)
              num1 = -1;
          }
          if ((double) num2 > 0.75)
          {
            ++num1;
            if (num1 > 1)
              num1 = 1;
          }
          if (hero.IsGangLeader && (trait == DefaultTraits.Mercy || trait == DefaultTraits.Honor) && num1 > 0)
            num1 = 0;
          int num3 = MBMath.ClampInt(num1, trait.MinValue, trait.MaxValue);
          hero.SetTraitLevel(trait, num3);
        }
      }
    }

    public static Hero DeliverOffSpring(Hero mother, Hero father, bool isOffspringFemale)
    {
      Debug.SilentAssert(mother.CharacterObject.Race == father.CharacterObject.Race, callerFile: "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\HeroCreator.cs", callerMethod: nameof (DeliverOffSpring), callerLine: 484);
      Hero newHero = HeroCreator.CreateNewHero(isOffspringFemale ? mother.CharacterObject : father.CharacterObject, 0);
      newHero.ClearTraits();
      float randomFloat = MBRandom.RandomFloat;
      int val2 = (double) randomFloat >= 0.1 ? ((double) randomFloat >= 0.5 ? ((double) randomFloat >= 0.9 ? 3 : 2) : 1) : 0;
      List<TraitObject> list = DefaultTraits.Personality.ToList<TraitObject>();
      list.Shuffle<TraitObject>();
      for (int index = 0; index < Math.Min(list.Count, val2); ++index)
      {
        int num = (double) MBRandom.RandomFloat < 0.5 ? MBRandom.RandomInt(list[index].MinValue, 0) : MBRandom.RandomInt(1, list[index].MaxValue + 1);
        newHero.SetTraitLevel(list[index], num);
      }
      foreach (TraitObject trait in TraitObject.All.Except<TraitObject>(DefaultTraits.Personality))
        newHero.SetTraitLevel(trait, (double) MBRandom.RandomFloat < 0.5 ? mother.GetTraitLevel(trait) : father.GetTraitLevel(trait));
      newHero.SetNewOccupation(isOffspringFemale ? mother.Occupation : father.Occupation);
      int becomeChildAge = Campaign.Current.Models.AgeModel.BecomeChildAge;
      newHero.CharacterObject.IsFemale = isOffspringFemale;
      newHero.Mother = mother;
      newHero.Father = father;
      MBEquipmentRoster elementInefficiently1 = Campaign.Current.Models.EquipmentSelectionModel.GetEquipmentRostersForDeliveredOffspring(newHero).GetRandomElementInefficiently<MBEquipmentRoster>();
      if (elementInefficiently1 != null)
      {
        Equipment elementInefficiently2 = elementInefficiently1.GetCivilianEquipments().GetRandomElementInefficiently<Equipment>();
        EquipmentHelper.AssignHeroEquipmentFromEquipment(newHero, elementInefficiently2);
        Equipment equipment = new Equipment(false);
        equipment.FillFrom(elementInefficiently2, false);
        EquipmentHelper.AssignHeroEquipmentFromEquipment(newHero, equipment);
      }
      else
        Debug.FailedAssert("Equipment template not found", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\HeroCreator.cs", nameof (DeliverOffSpring), 549);
      TextObject firstName;
      TextObject fullName;
      NameGenerator.Current.GenerateHeroNameAndHeroFullName(newHero, out firstName, out fullName, false);
      newHero.SetName(fullName, firstName);
      newHero.HeroDeveloper.InitializeHeroDeveloper(true);
      BodyProperties bodyProperties1 = mother.BodyProperties;
      BodyProperties bodyProperties2 = father.BodyProperties;
      int seed = MBRandom.RandomInt();
      string hairTags = isOffspringFemale ? mother.HairTags : father.HairTags;
      string tattooTags = isOffspringFemale ? mother.TattooTags : father.TattooTags;
      newHero.StaticBodyProperties = BodyProperties.GetRandomBodyProperties(mother.CharacterObject.Race, isOffspringFemale, bodyProperties1, bodyProperties2, 1, seed, hairTags, father.BeardTags, tattooTags).StaticProperties;
      newHero.BornSettlement = HeroCreator.DecideBornSettlement(newHero);
      if (mother == Hero.MainHero || father == Hero.MainHero)
      {
        newHero.Clan = Clan.PlayerClan;
        newHero.Culture = Hero.MainHero.Culture;
      }
      else
      {
        newHero.Clan = father.Clan;
        newHero.Culture = (double) MBRandom.RandomFloat < 0.5 ? father.Culture : mother.Culture;
      }
      CampaignEventDispatcher.Instance.OnHeroCreated(newHero, true);
      int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
      CampaignTime campaignTime;
      if ((double) newHero.Age <= (double) becomeChildAge)
      {
        if ((double) newHero.Age == (double) becomeChildAge)
        {
          campaignTime = newHero.BirthDay;
          int getDayOfYear1 = campaignTime.GetDayOfYear;
          campaignTime = CampaignTime.Now;
          int getDayOfYear2 = campaignTime.GetDayOfYear;
          if (getDayOfYear1 >= getDayOfYear2)
            goto label_20;
        }
        else
          goto label_20;
      }
      CampaignEventDispatcher.Instance.OnHeroGrowsOutOfInfancy(newHero);
label_20:
      if ((double) newHero.Age <= (double) heroComesOfAge)
      {
        if ((double) newHero.Age == (double) heroComesOfAge)
        {
          campaignTime = newHero.BirthDay;
          int getDayOfYear3 = campaignTime.GetDayOfYear;
          campaignTime = CampaignTime.Now;
          int getDayOfYear4 = campaignTime.GetDayOfYear;
          if (getDayOfYear3 >= getDayOfYear4)
            goto label_24;
        }
        else
          goto label_24;
      }
      CampaignEventDispatcher.Instance.OnHeroComesOfAge(newHero);
label_24:
      return newHero;
    }

    private static Settlement DecideBornSettlement(Hero child)
    {
      return (child.Mother.CurrentSettlement == null || !child.Mother.CurrentSettlement.IsTown && !child.Mother.CurrentSettlement.IsVillage ? (child.Mother.PartyBelongedTo != null || child.Mother.PartyBelongedToAsPrisoner != null ? SettlementHelper.FindNearestTown(toMapPoint: child.Mother.PartyBelongedToAsPrisoner == null ? (IMapPoint) child.Mother.PartyBelongedTo : (child.Mother.PartyBelongedToAsPrisoner.IsMobile ? (IMapPoint) child.Mother.PartyBelongedToAsPrisoner.MobileParty : (IMapPoint) child.Mother.PartyBelongedToAsPrisoner.Settlement)) : child.Mother.HomeSettlement) : child.Mother.CurrentSettlement) ?? (child.Mother.Clan.Settlements.Count > 0 ? child.Mother.Clan.Settlements.GetRandomElement<Settlement>() : Town.AllTowns.GetRandomElement<Town>().Settlement);
    }

    private static FormationClass GetRandomPreferredUpgradeFormation()
    {
      int num = MBRandom.RandomInt(10);
      return num < 4 ? (FormationClass) num : FormationClass.NumberOfAllFormations;
    }
  }
}
