// Decompiled with JetBrains decompiler
// Type: Helpers.TownHelpers
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace Helpers
{
  public static class TownHelpers
  {
    public static (int, int) GetTownFoodAndMarketStocks(Town town)
    {
      float num1 = town != null ? town.FoodStocks : 0.0f;
      float num2 = 0.0f;
      if (town != null && town.IsTown)
      {
        for (int index = town.Owner.ItemRoster.Count - 1; index >= 0; --index)
        {
          ItemRosterElement elementCopyAtIndex = town.Owner.ItemRoster.GetElementCopyAtIndex(index);
          EquipmentElement equipmentElement = elementCopyAtIndex.EquipmentElement;
          if (equipmentElement.Item != null)
          {
            equipmentElement = elementCopyAtIndex.EquipmentElement;
            if (equipmentElement.Item.ItemCategory.Properties == ItemCategory.Property.BonusToFoodStores)
              num2 += (float) elementCopyAtIndex.Amount;
          }
        }
      }
      return ((int) num1, (int) num2);
    }

    public static bool IsThereAnyoneToMeetInTown(Settlement settlement)
    {
      foreach (MobileParty mobileParty in settlement.Parties.Where<MobileParty>(new Func<MobileParty, bool>(TownHelpers.RequestAMeetingPartyCondition)))
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero)
            return true;
        }
      }
      using (IEnumerator<Hero> enumerator = settlement.HeroesWithoutParty.Where<Hero>(new Func<Hero, bool>(TownHelpers.RequestAMeetingHeroWithoutPartyCondition)).GetEnumerator())
      {
        if (enumerator.MoveNext())
        {
          Hero current = enumerator.Current;
          return true;
        }
      }
      return false;
    }

    public static List<Hero> GetHeroesToMeetInTown(Settlement settlement)
    {
      List<Hero> heroesToMeetInTown = new List<Hero>();
      foreach (MobileParty mobileParty in settlement.Parties.Where<MobileParty>(new Func<MobileParty, bool>(TownHelpers.RequestAMeetingPartyCondition)))
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero)
            heroesToMeetInTown.Add(troopRosterElement.Character.HeroObject);
        }
      }
      foreach (Hero hero in settlement.HeroesWithoutParty.Where<Hero>(new Func<Hero, bool>(TownHelpers.RequestAMeetingHeroWithoutPartyCondition)))
        heroesToMeetInTown.Add(hero);
      return heroesToMeetInTown;
    }

    public static MBList<Hero> GetHeroesInSettlement(
      Settlement settlement,
      Predicate<Hero> predicate = null)
    {
      MBList<Hero> heroesInSettlement = new MBList<Hero>();
      foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) party.MemberRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero && (predicate == null || predicate(troopRosterElement.Character.HeroObject)))
            heroesInSettlement.Add(troopRosterElement.Character.HeroObject);
        }
      }
      foreach (Hero hero in (List<Hero>) settlement.HeroesWithoutParty)
      {
        if (predicate == null || predicate(hero))
          heroesInSettlement.Add(hero);
      }
      return heroesInSettlement;
    }

    public static bool RequestAMeetingPartyCondition(MobileParty party)
    {
      if (!party.IsLordParty || party.IsMainParty)
        return false;
      return party.Army == null || party.Army != MobileParty.MainParty.Army;
    }

    public static bool RequestAMeetingHeroWithoutPartyCondition(Hero hero)
    {
      return hero.CharacterObject.Occupation == Occupation.Lord && !hero.IsPrisoner && (double) hero.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge;
    }
  }
}
