// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SceneInformationPopupTypes.CampaignSceneNotificationHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.SceneInformationPopupTypes
{
  public static class CampaignSceneNotificationHelper
  {
    public static SceneNotificationData.SceneNotificationCharacter GetBodyguardOfCulture(
      CultureObject culture)
    {
      string objectName;
      switch (culture.StringId)
      {
        case "battania":
          objectName = "battanian_fian_champion";
          break;
        case "khuzait":
          objectName = "khuzait_khans_guard";
          break;
        case "vlandia":
          objectName = "vlandian_banner_knight";
          break;
        case "aserai":
          objectName = "mamluke_palace_guard";
          break;
        case "sturgia":
          objectName = "sturgian_veteran_warrior";
          break;
        case "empire":
          objectName = "imperial_legionary";
          break;
        default:
          objectName = "fighter_sturgia";
          break;
      }
      return new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) MBObjectManager.Instance.GetObject<CharacterObject>(objectName));
    }

    public static void RemoveWeaponsFromEquipment(
      ref Equipment equipment,
      bool removeHelmet = false,
      bool removeShoulder = false)
    {
      for (int index = 0; index < 5; ++index)
        equipment[index] = EquipmentElement.Invalid;
      if (removeHelmet)
        equipment[5] = EquipmentElement.Invalid;
      if (!removeShoulder)
        return;
      equipment[9] = EquipmentElement.Invalid;
    }

    public static string GetChildStageEquipmentIDFromCulture(CultureObject childCulture)
    {
      switch (childCulture.StringId)
      {
        case "empire":
          return "comingofage_kid_emp_cutscene_template";
        case "aserai":
          return "comingofage_kid_ase_cutscene_template";
        case "battania":
          return "comingofage_kid_bat_cutscene_template";
        case "khuzait":
          return "comingofage_kid_khu_cutscene_template";
        case "sturgia":
          return "comingofage_kid_stu_cutscene_template";
        case "vlandia":
          return "comingofage_kid_vla_cutscene_template";
        default:
          return "comingofage_kid_emp_cutscene_template";
      }
    }

    public static CharacterObject GetRandomTroopForCulture(CultureObject culture)
    {
      string objectName = "imperial_recruit";
      if (culture != null)
      {
        List<CharacterObject> characterObjectList = new List<CharacterObject>();
        if (culture.BasicTroop != null)
          characterObjectList.Add(culture.BasicTroop);
        if (culture.EliteBasicTroop != null)
          characterObjectList.Add(culture.EliteBasicTroop);
        if (culture.MeleeMilitiaTroop != null)
          characterObjectList.Add(culture.MeleeMilitiaTroop);
        if (culture.MeleeEliteMilitiaTroop != null)
          characterObjectList.Add(culture.MeleeEliteMilitiaTroop);
        if (culture.RangedMilitiaTroop != null)
          characterObjectList.Add(culture.RangedMilitiaTroop);
        if (culture.RangedEliteMilitiaTroop != null)
          characterObjectList.Add(culture.RangedEliteMilitiaTroop);
        if (characterObjectList.Count > 0)
          return characterObjectList[MBRandom.RandomInt(characterObjectList.Count)];
      }
      return Game.Current.ObjectManager.GetObject<CharacterObject>(objectName);
    }

    public static IEnumerable<Hero> GetMilitaryAudienceForHero(
      Hero hero,
      bool includeClanLeader = true,
      bool onlyClanMembers = false)
    {
      if (hero.Clan != null)
      {
        if (includeClanLeader)
        {
          Hero leader = hero.Clan.Leader;
          if ((leader != null ? (leader.IsAlive ? 1 : 0) : 0) != 0 && hero != hero.Clan.Leader)
            yield return hero.Clan.Leader;
        }
        foreach (Hero hero1 in (IEnumerable<Hero>) hero.Clan.Heroes.OrderBy<Hero, int>((Func<Hero, int>) (h => h.Level)))
        {
          if (hero1 != hero.Clan.Leader && hero1.IsAlive && !hero1.IsChild && hero1 != hero)
            yield return hero1;
        }
      }
      if (!onlyClanMembers)
      {
        foreach (Hero otherHero in (IEnumerable<Hero>) Hero.AllAliveHeroes.OrderBy<Hero, int>((Func<Hero, int>) (h => CharacterRelationManager.GetHeroRelation(hero, h))))
        {
          bool flag = otherHero != null && otherHero.Clan != hero.Clan;
          if (otherHero.IsFriend(otherHero) && otherHero.IsLord && !otherHero.IsChild && otherHero != hero && !flag)
            yield return otherHero;
        }
      }
    }

    public static IEnumerable<Hero> GetMilitaryAudienceForKingdom(
      Kingdom kingdom,
      bool includeKingdomLeader = true)
    {
      if (includeKingdomLeader)
      {
        Hero leader = kingdom.Leader;
        if ((leader != null ? (leader.IsAlive ? 1 : 0) : 0) != 0)
          yield return kingdom.Leader;
      }
      Hero leader1 = kingdom.Leader;
      foreach (Hero hero in leader1 != null ? (IEnumerable<Hero>) leader1.Clan.Heroes.WhereQ<Hero>((Func<Hero, bool>) (h => h != h.Clan.Kingdom.Leader)).OrderBy<Hero, float>((Func<Hero, float>) (h => h.GetRelationWithPlayer())) : (IEnumerable<Hero>) null)
      {
        if (!hero.IsChild && hero != Hero.MainHero && hero.IsAlive)
          yield return hero;
      }
    }

    public static TextObject GetFormalDayAndSeasonText(CampaignTime time)
    {
      TextObject dayAndSeasonText = new TextObject("{=CpsPq6WD}the {DAY_ORDINAL} day of {SEASON_NAME}");
      TextObject text1 = GameTexts.FindText("str_season_" + (object) time.GetSeasonOfYear);
      TextObject text2 = GameTexts.FindText("str_ordinal_number", (time.GetDayOfSeason + 1).ToString());
      dayAndSeasonText.SetTextVariable("SEASON_NAME", text1);
      dayAndSeasonText.SetTextVariable("DAY_ORDINAL", text2);
      return dayAndSeasonText;
    }

    public static TextObject GetFormalNameForKingdom(Kingdom kingdom)
    {
      return !kingdom.Culture.StringId.Equals("empire", StringComparison.InvariantCultureIgnoreCase) ? (kingdom.Leader != Hero.MainHero ? FactionHelper.GetFormalNameForFactionCulture(kingdom.Culture) : kingdom.InformalName) : kingdom.Name;
    }

    public static SceneNotificationData.SceneNotificationCharacter CreateNotificationCharacterFromHero(
      Hero hero,
      Equipment overridenEquipment = null,
      bool useCivilian = false,
      BodyProperties overriddenBodyProperties = default (BodyProperties),
      uint overriddenColor1 = 4294967295,
      uint overriddenColor2 = 4294967295,
      bool useHorse = false)
    {
      if (overriddenColor1 == uint.MaxValue)
      {
        IFaction mapFaction = hero.MapFaction;
        overriddenColor1 = mapFaction != null ? mapFaction.Color : hero.CharacterObject.Culture.Color;
      }
      if (overriddenColor2 == uint.MaxValue)
      {
        IFaction mapFaction = hero.MapFaction;
        overriddenColor2 = mapFaction != null ? mapFaction.Color2 : hero.CharacterObject.Culture.Color2;
      }
      if (overridenEquipment == null)
        overridenEquipment = useCivilian ? hero.CivilianEquipment : hero.BattleEquipment;
      return new SceneNotificationData.SceneNotificationCharacter((BasicCharacterObject) hero.CharacterObject, overridenEquipment, overriddenBodyProperties, useCivilian, overriddenColor1, overriddenColor2, useHorse);
    }

    public static ItemObject GetDefaultHorseItem()
    {
      return Game.Current.ObjectManager.GetObjectTypeList<ItemObject>().First<ItemObject>((Func<ItemObject, bool>) (i => i.ItemType == ItemObject.ItemTypeEnum.Horse && i.HasHorseComponent && i.HorseComponent.IsMount && i.HorseComponent.Monster.StringId == "horse"));
    }
  }
}
