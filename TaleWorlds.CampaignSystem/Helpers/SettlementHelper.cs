// Decompiled with JetBrains decompiler
// Type: Helpers.SettlementHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace Helpers
{
  public static class SettlementHelper
  {
    private static readonly string[] StuffToCarryForMan = new string[8]
    {
      "_to_carry_foods_basket_apple",
      "_to_carry_merchandise_hides_b",
      "_to_carry_bed_convolute_g",
      "_to_carry_bed_convolute_a",
      "_to_carry_bd_fabric_c",
      "_to_carry_bd_basket_a",
      "practice_spear_t1",
      "simple_sparth_axe_t2"
    };
    private static readonly string[] StuffToCarryForWoman = new string[4]
    {
      "_to_carry_kitchen_pot_c",
      "_to_carry_arm_kitchen_pot_c",
      "_to_carry_foods_basket_apple",
      "_to_carry_bd_basket_a"
    };
    private static int _stuffToCarryIndex = MBRandom.NondeterministicRandomInt % 1024;

    public static string GetRandomStuff(bool isFemale)
    {
      string randomStuff = !isFemale ? SettlementHelper.StuffToCarryForMan[SettlementHelper._stuffToCarryIndex % SettlementHelper.StuffToCarryForMan.Length] : SettlementHelper.StuffToCarryForWoman[SettlementHelper._stuffToCarryIndex % SettlementHelper.StuffToCarryForWoman.Length];
      ++SettlementHelper._stuffToCarryIndex;
      return randomStuff;
    }

    public static Settlement FindNearestSettlement(
      Func<Settlement, bool> condition,
      IMapPoint toMapPoint = null)
    {
      Settlement nearestSettlement = (Settlement) null;
      float maximumDistance = Campaign.MapDiagonal * 2f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (Settlement toSettlement in (List<Settlement>) Settlement.All)
      {
        float distance;
        if ((condition == null || condition(toSettlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, toSettlement, maximumDistance, out distance))
        {
          nearestSettlement = toSettlement;
          maximumDistance = distance;
        }
      }
      return nearestSettlement;
    }

    public static Settlement FindNearestHideout(
      Func<Settlement, bool> condition = null,
      IMapPoint toMapPoint = null)
    {
      Settlement nearestHideout = (Settlement) null;
      float maximumDistance = 1E+09f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (SettlementComponent settlementComponent in (List<Hideout>) Hideout.All)
      {
        Settlement settlement = settlementComponent.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestHideout = settlement;
          maximumDistance = distance;
        }
      }
      return nearestHideout;
    }

    public static Settlement FindNearestTown(Func<Settlement, bool> condition = null, IMapPoint toMapPoint = null)
    {
      Settlement nearestTown = (Settlement) null;
      float maximumDistance = 1E+09f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (SettlementComponent allTown in (List<Town>) Town.AllTowns)
      {
        Settlement settlement = allTown.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestTown = settlement;
          maximumDistance = distance;
        }
      }
      return nearestTown;
    }

    public static Settlement FindNearestFortification(
      Func<Settlement, bool> condition = null,
      IMapPoint toMapPoint = null)
    {
      Settlement nearestFortification = (Settlement) null;
      float maximumDistance = 1E+09f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (SettlementComponent allTown in (List<Town>) Town.AllTowns)
      {
        Settlement settlement = allTown.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestFortification = settlement;
          maximumDistance = distance;
        }
      }
      foreach (SettlementComponent allCastle in (List<Town>) Town.AllCastles)
      {
        Settlement settlement = allCastle.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestFortification = settlement;
          maximumDistance = distance;
        }
      }
      return nearestFortification;
    }

    public static Settlement FindNearestCastle(
      Func<Settlement, bool> condition = null,
      IMapPoint toMapPoint = null)
    {
      Settlement nearestCastle = (Settlement) null;
      float maximumDistance = 1E+09f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (SettlementComponent allCastle in (List<Town>) Town.AllCastles)
      {
        Settlement settlement = allCastle.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestCastle = settlement;
          maximumDistance = distance;
        }
      }
      return nearestCastle;
    }

    public static Settlement FindNearestVillage(
      Func<Settlement, bool> condition = null,
      IMapPoint toMapPoint = null)
    {
      Settlement nearestVillage = (Settlement) null;
      float maximumDistance = 1E+09f;
      IMapPoint fromMapPoint = toMapPoint ?? (IMapPoint) MobileParty.MainParty;
      foreach (SettlementComponent settlementComponent in (List<Village>) Village.All)
      {
        Settlement settlement = settlementComponent.Settlement;
        float distance;
        if ((condition == null || condition(settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(fromMapPoint, settlement, maximumDistance, out distance))
        {
          nearestVillage = settlement;
          maximumDistance = distance;
        }
      }
      return nearestVillage;
    }

    private static SettlementComponent FindNearestSettlementToMapPointInternal(
      IMapPoint mapPoint,
      IEnumerable<SettlementComponent> settlementsToIterate,
      Func<Settlement, bool> condition = null)
    {
      SettlementComponent mapPointInternal = (SettlementComponent) null;
      float maximumDistance = Campaign.MapDiagonal * 2f;
      foreach (SettlementComponent settlementComponent in settlementsToIterate)
      {
        float distance;
        if ((condition == null || condition(settlementComponent.Settlement)) && Campaign.Current.Models.MapDistanceModel.GetDistance(mapPoint, settlementComponent.Settlement, maximumDistance, out distance))
        {
          mapPointInternal = settlementComponent;
          maximumDistance = distance;
        }
      }
      return mapPointInternal;
    }

    public static int FindNextSettlementAroundMapPoint(
      IMapPoint mapPoint,
      float maxDistance,
      int lastIndex)
    {
      for (int index = lastIndex + 1; index < Settlement.All.Count; ++index)
      {
        Settlement toSettlement = Settlement.All[index];
        if (Campaign.Current.Models.MapDistanceModel.GetDistance(mapPoint, toSettlement, maxDistance, out float _))
          return index;
      }
      return -1;
    }

    private static Settlement FindRandomInternal(
      Func<Settlement, bool> condition,
      IEnumerable<Settlement> settlementsToIterate)
    {
      List<Settlement> settlementList = new List<Settlement>();
      foreach (Settlement settlement in settlementsToIterate)
      {
        if (condition(settlement))
          settlementList.Add(settlement);
      }
      return settlementList.Count > 0 ? settlementList[MBRandom.RandomInt(settlementList.Count)] : (Settlement) null;
    }

    public static Settlement FindRandomSettlement(Func<Settlement, bool> condition = null)
    {
      return SettlementHelper.FindRandomInternal(condition, (IEnumerable<Settlement>) Settlement.All);
    }

    public static Settlement FindRandomHideout(Func<Settlement, bool> condition = null)
    {
      return SettlementHelper.FindRandomInternal(condition, Hideout.All.Select<Hideout, Settlement>((Func<Hideout, Settlement>) (x => x.Settlement)));
    }

    public static void TakeEnemyVillagersOutsideSettlements(Settlement settlementWhichChangedFaction)
    {
      if (settlementWhichChangedFaction.IsFortification)
      {
        bool flag1;
        do
        {
          flag1 = false;
          MobileParty mobileParty = (MobileParty) null;
          foreach (MobileParty party in (List<MobileParty>) settlementWhichChangedFaction.Parties)
          {
            if (party.IsVillager && party.HomeSettlement.IsVillage && party.HomeSettlement.Village.Bound == settlementWhichChangedFaction && party.HomeSettlement.MapFaction != settlementWhichChangedFaction.MapFaction)
            {
              mobileParty = party;
              flag1 = true;
              break;
            }
          }
          if (flag1 && mobileParty.MapEvent == null)
          {
            LeaveSettlementAction.ApplyForParty(mobileParty);
            mobileParty.Ai.SetMoveModeHold();
          }
        }
        while (flag1);
        bool flag2;
        do
        {
          flag2 = false;
          MobileParty mobileParty = (MobileParty) null;
          foreach (MobileParty party in (List<MobileParty>) settlementWhichChangedFaction.Parties)
          {
            if (party.IsCaravan && FactionManager.IsAtWarAgainstFaction(party.MapFaction, settlementWhichChangedFaction.MapFaction))
            {
              mobileParty = party;
              flag2 = true;
              break;
            }
          }
          if (flag2 && mobileParty.MapEvent == null)
          {
            LeaveSettlementAction.ApplyForParty(mobileParty);
            mobileParty.Ai.SetMoveModeHold();
          }
        }
        while (flag2);
        foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
        {
          if ((mobileParty.IsVillager || mobileParty.IsCaravan) && mobileParty.TargetSettlement == settlementWhichChangedFaction && mobileParty.CurrentSettlement != settlementWhichChangedFaction)
            mobileParty.Ai.SetMoveModeHold();
        }
      }
      if (!settlementWhichChangedFaction.IsVillage)
        return;
      foreach (MobileParty allVillagerParty in (List<MobileParty>) MobileParty.AllVillagerParties)
      {
        if (allVillagerParty.HomeSettlement == settlementWhichChangedFaction && allVillagerParty.CurrentSettlement != settlementWhichChangedFaction)
        {
          if (allVillagerParty.CurrentSettlement != null && allVillagerParty.MapEvent == null)
          {
            LeaveSettlementAction.ApplyForParty(allVillagerParty);
            allVillagerParty.Ai.SetMoveModeHold();
          }
          else
            allVillagerParty.Ai.SetMoveModeHold();
        }
      }
    }

    public static Settlement GetRandomTown(Clan fromFaction = null)
    {
      int num1 = 0;
      foreach (Settlement settlement in (List<Settlement>) Campaign.Current.Settlements)
      {
        if ((fromFaction == null || settlement.MapFaction == fromFaction) && (settlement.IsTown || settlement.IsVillage))
          ++num1;
      }
      int num2 = MBRandom.RandomInt(0, num1 - 1);
      foreach (Settlement settlement in (List<Settlement>) Campaign.Current.Settlements)
      {
        if ((fromFaction == null || settlement.MapFaction == fromFaction) && (settlement.IsTown || settlement.IsVillage))
        {
          --num2;
          if (num2 < 0)
            return settlement;
        }
      }
      return (Settlement) null;
    }

    public static Settlement GetBestSettlementToSpawnAround(Hero hero)
    {
      Settlement settlementToSpawnAround = (Settlement) null;
      float num1 = -1f;
      uint seed = 0;
      foreach (Hero lord in (List<Hero>) hero.Clan.Lords)
      {
        if (lord != hero)
          ++seed;
        else
          break;
      }
      IFaction mapFaction1 = hero.MapFaction;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.Party.MapEvent == null)
        {
          IFaction mapFaction2 = settlement.MapFaction;
          float num2 = 0.0001f;
          if (mapFaction2 == mapFaction1)
            num2 = 1f;
          else if (FactionManager.IsAlliedWithFaction(mapFaction2, mapFaction1))
            num2 = 0.01f;
          else if (FactionManager.IsNeutralWithFaction(mapFaction2, mapFaction1))
            num2 = 0.0005f;
          float num3 = 0.0f;
          if (settlement.IsTown)
            num3 = 1f;
          else if (settlement.IsCastle)
            num3 = 0.9f;
          else if (settlement.IsVillage)
            num3 = 0.8f;
          else if (settlement.IsHideout)
            num3 = mapFaction2 == mapFaction1 ? 0.2f : 0.0f;
          float num4 = settlement.Town == null || settlement.Town.GarrisonParty == null || settlement.OwnerClan != hero.Clan ? 1f : settlement.Town.GarrisonParty.Party.TotalStrength / (settlement.IsTown ? 60f : 30f);
          float num5 = settlement.IsUnderRaid || settlement.IsUnderSiege ? 0.1f : 1f;
          float num6 = settlement.OwnerClan == hero.Clan ? 1f : 0.25f;
          float num7 = settlement.RandomFloatWithSeed(seed, 0.5f, 1f);
          float num8 = (float) (1.0 - (double) hero.MapFaction.InitialPosition.Distance(settlement.Position2D) / (double) Campaign.MapDiagonal);
          float num9 = num8 * num8;
          float num10 = num2 * num3 * num5 * num6 * num4 * num7 * num9;
          if ((double) num10 > (double) num1)
          {
            num1 = num10;
            settlementToSpawnAround = settlement;
          }
        }
      }
      return settlementToSpawnAround;
    }

    public static IEnumerable<Hero> GetAllHeroesOfSettlement(
      Settlement settlement,
      bool includePrisoners)
    {
      foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
      {
        if (party.LeaderHero != null)
          yield return party.LeaderHero;
      }
      foreach (Hero hero in (List<Hero>) settlement.HeroesWithoutParty)
        yield return hero;
      if (includePrisoners)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) settlement.Party.PrisonRoster.GetTroopRoster())
        {
          if (troopRosterElement.Character.IsHero)
            yield return troopRosterElement.Character.HeroObject;
        }
      }
    }

    public static int NumberOfVolunteersCanBeRecruitedForGarrison(Settlement settlement)
    {
      int num1 = 0;
      Hero leader = settlement.OwnerClan.Leader;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsAlive)
        {
          int num2 = Campaign.Current.Models.VolunteerModel.MaximumIndexHeroCanRecruitFromHero(leader, notable);
          for (int index = 0; index < num2; ++index)
          {
            if (notable.VolunteerTypes[index] != null)
              ++num1;
          }
        }
      }
      foreach (Village boundVillage in (List<Village>) settlement.BoundVillages)
      {
        if (boundVillage.VillageState == Village.VillageStates.Normal)
          num1 += SettlementHelper.NumberOfVolunteersCanBeRecruitedForGarrison(boundVillage.Settlement);
      }
      return num1;
    }

    public static bool IsThereAnyVolunteerCanBeRecruitedForGarrison(Settlement settlement)
    {
      Hero leader = settlement.OwnerClan.Leader;
      foreach (Hero notable in (List<Hero>) settlement.Notables)
      {
        if (notable.IsAlive)
        {
          int num = Campaign.Current.Models.VolunteerModel.MaximumIndexHeroCanRecruitFromHero(leader, notable);
          for (int index = 0; index < num; ++index)
          {
            if (notable.VolunteerTypes[index] != null)
              return true;
          }
        }
      }
      foreach (Village boundVillage in (List<Village>) settlement.BoundVillages)
      {
        if (boundVillage.VillageState == Village.VillageStates.Normal && SettlementHelper.IsThereAnyVolunteerCanBeRecruitedForGarrison(boundVillage.Settlement))
          return true;
      }
      return false;
    }

    public static bool IsGarrisonStarving(Settlement settlement)
    {
      bool flag = false;
      if (settlement.IsStarving)
        flag = (double) settlement.Town.FoodChange < -((double) settlement.Town.Prosperity / (double) Campaign.Current.Models.SettlementFoodModel.NumberOfProsperityToEatOneFood);
      return flag;
    }

    public static void SpawnNotablesIfNeeded(Settlement settlement)
    {
      if (!settlement.IsTown && !settlement.IsVillage)
        return;
      List<Occupation> occupationList = new List<Occupation>();
      if (settlement.IsTown)
        occupationList = new List<Occupation>()
        {
          Occupation.GangLeader,
          Occupation.Artisan,
          Occupation.Merchant
        };
      else if (settlement.IsVillage)
        occupationList = new List<Occupation>()
        {
          Occupation.RuralNotable,
          Occupation.Headman
        };
      float randomFloat = MBRandom.RandomFloat;
      int num1 = 0;
      foreach (Occupation occupation in occupationList)
        num1 += Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, occupation);
      float x = settlement.Notables.Count > 0 ? (float) (num1 - settlement.Notables.Count) / (float) num1 : 1f;
      float num2 = x * MathF.Pow(x, 0.36f);
      if ((double) randomFloat > (double) num2)
        return;
      MBList<Occupation> e = new MBList<Occupation>();
      foreach (Occupation occupation in occupationList)
      {
        int num3 = 0;
        foreach (Hero notable in (List<Hero>) settlement.Notables)
        {
          if (notable.CharacterObject.Occupation == occupation)
            ++num3;
        }
        int countForSettlement = Campaign.Current.Models.NotableSpawnModel.GetTargetNotableCountForSettlement(settlement, occupation);
        if (num3 < countForSettlement)
          e.Add(occupation);
      }
      if (e.Count <= 0)
        return;
      EnterSettlementAction.ApplyForCharacterOnly(HeroCreator.CreateHeroAtOccupation(e.GetRandomElement<Occupation>(), settlement), settlement);
    }
  }
}
