// Decompiled with JetBrains decompiler
// Type: Helpers.MobilePartyHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace Helpers
{
  public static class MobilePartyHelper
  {
    public static MobileParty SpawnLordParty(Hero hero, Settlement spawnSettlement)
    {
      return MobilePartyHelper.SpawnLordPartyAux(hero, spawnSettlement.GatePosition, 0.0f, spawnSettlement);
    }

    public static MobileParty SpawnLordParty(Hero hero, Vec2 position, float spawnRadius)
    {
      return MobilePartyHelper.SpawnLordPartyAux(hero, position, spawnRadius, (Settlement) null);
    }

    private static MobileParty SpawnLordPartyAux(
      Hero hero,
      Vec2 position,
      float spawnRadius,
      Settlement spawnSettlement)
    {
      return LordPartyComponent.CreateLordParty(hero.CharacterObject.StringId, hero, position, spawnRadius, spawnSettlement, hero);
    }

    public static void CreateNewClanMobileParty(
      Hero partyLeader,
      Clan clan,
      out bool leaderCameFromMainParty)
    {
      leaderCameFromMainParty = PartyBase.MainParty.MemberRoster.Contains(partyLeader.CharacterObject);
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, partyLeader, 3000, true);
      clan.CreateNewMobileParty(partyLeader).Ai.SetMoveModeHold();
    }

    public static void DesertTroopsFromParty(
      MobileParty party,
      int stackNo,
      int numberOfDeserters,
      int numberOfWoundedDeserters,
      ref TroopRoster desertedTroopList)
    {
      TroopRosterElement elementCopyAtIndex = party.MemberRoster.GetElementCopyAtIndex(stackNo);
      party.MemberRoster.AddToCounts(elementCopyAtIndex.Character, -(numberOfDeserters + numberOfWoundedDeserters), woundedCount: -numberOfWoundedDeserters);
      if (desertedTroopList == (TroopRoster) null)
        desertedTroopList = TroopRoster.CreateDummyTroopRoster();
      desertedTroopList.AddToCounts(elementCopyAtIndex.Character, numberOfDeserters + numberOfWoundedDeserters, woundedCount: numberOfWoundedDeserters);
    }

    public static bool IsHeroAssignableForScoutInParty(Hero hero, MobileParty party)
    {
      return hero.PartyBelongedTo == party && hero != party.GetRoleHolder(SkillEffect.PerkRole.Scout) && hero.GetSkillValue(DefaultSkills.Scouting) >= 0;
    }

    public static bool IsHeroAssignableForEngineerInParty(Hero hero, MobileParty party)
    {
      return hero.PartyBelongedTo == party && hero != party.GetRoleHolder(SkillEffect.PerkRole.Engineer) && hero.GetSkillValue(DefaultSkills.Engineering) >= 0;
    }

    public static bool IsHeroAssignableForSurgeonInParty(Hero hero, MobileParty party)
    {
      return hero.PartyBelongedTo == party && hero != party.GetRoleHolder(SkillEffect.PerkRole.Surgeon) && hero.GetSkillValue(DefaultSkills.Medicine) >= 0;
    }

    public static bool IsHeroAssignableForQuartermasterInParty(Hero hero, MobileParty party)
    {
      return hero.PartyBelongedTo == party && hero != party.GetRoleHolder(SkillEffect.PerkRole.Quartermaster) && hero.GetSkillValue(DefaultSkills.Trade) >= 0;
    }

    public static Hero GetHeroWithHighestSkill(MobileParty party, SkillObject skill)
    {
      Hero withHighestSkill = (Hero) null;
      int num = -1;
      for (int index = 0; index < party.MemberRoster.Count; ++index)
      {
        CharacterObject characterAtIndex = party.MemberRoster.GetCharacterAtIndex(index);
        if (characterAtIndex.HeroObject != null && characterAtIndex.HeroObject.GetSkillValue(skill) > num)
        {
          num = characterAtIndex.HeroObject.GetSkillValue(skill);
          withHighestSkill = characterAtIndex.HeroObject;
        }
      }
      return withHighestSkill;
    }

    public static TroopRoster GetStrongestAndPriorTroops(
      MobileParty mobileParty,
      int maxTroopCount,
      bool includePlayer)
    {
      FlattenedTroopRoster flattenedRoster = mobileParty.MemberRoster.ToFlattenedRoster();
      flattenedRoster.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => x.IsWounded));
      return MobilePartyHelper.GetStrongestAndPriorTroops(flattenedRoster, maxTroopCount, includePlayer);
    }

    public static TroopRoster GetStrongestAndPriorTroops(
      FlattenedTroopRoster roster,
      int maxTroopCount,
      bool includePlayer)
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      List<CharacterObject> list1 = roster.Select<FlattenedTroopRosterElement, CharacterObject>((Func<FlattenedTroopRosterElement, CharacterObject>) (x => x.Troop)).OrderByDescending<CharacterObject, int>((Func<CharacterObject, int>) (x => x.Level)).ToList<CharacterObject>();
      if (list1.Any<CharacterObject>((Func<CharacterObject, bool>) (x => x.IsPlayerCharacter)))
      {
        list1.Remove(CharacterObject.PlayerCharacter);
        if (includePlayer)
        {
          dummyTroopRoster.AddToCounts(CharacterObject.PlayerCharacter, 1);
          --maxTroopCount;
        }
      }
      List<CharacterObject> list2 = list1.Where<CharacterObject>((Func<CharacterObject, bool>) (x => x.IsNotTransferableInPartyScreen && x.IsHero)).ToList<CharacterObject>();
      int num = MathF.Min(list2.Count, maxTroopCount);
      for (int index = 0; index < num; ++index)
      {
        dummyTroopRoster.AddToCounts(list2[index], 1);
        list1.Remove(list2[index]);
      }
      int count = list1.Count;
      for (int index = num; index < maxTroopCount && index < count; ++index)
        dummyTroopRoster.AddToCounts(list1[index], 1);
      return dummyTroopRoster;
    }

    public static int GetMaximumXpAmountPartyCanGet(MobileParty party)
    {
      TroopRoster memberRoster = party.MemberRoster;
      int amountPartyCanGet = 0;
      for (int index = 0; index < memberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = memberRoster.GetElementCopyAtIndex(index);
        int gainableMaxXp;
        if (MobilePartyHelper.CanTroopGainXp(party.Party, elementCopyAtIndex.Character, out gainableMaxXp))
          amountPartyCanGet += gainableMaxXp;
      }
      return amountPartyCanGet;
    }

    public static void PartyAddSharedXp(MobileParty party, float xpToDistribute)
    {
      if ((double) xpToDistribute <= 0.0)
        return;
      TroopRoster memberRoster = party.MemberRoster;
      int num = 0;
      for (int index = 0; index < memberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = memberRoster.GetElementCopyAtIndex(index);
        int gainableMaxXp;
        if (MobilePartyHelper.CanTroopGainXp(party.Party, elementCopyAtIndex.Character, out gainableMaxXp))
          num += gainableMaxXp;
      }
      for (int index = 0; index < memberRoster.Count && (double) xpToDistribute >= 1.0 && num > 0; ++index)
      {
        TroopRosterElement elementCopyAtIndex = memberRoster.GetElementCopyAtIndex(index);
        int gainableMaxXp;
        if (MobilePartyHelper.CanTroopGainXp(party.Party, elementCopyAtIndex.Character, out gainableMaxXp))
        {
          int xpAmount = MathF.Floor(MathF.Max(1f, xpToDistribute * (float) gainableMaxXp / (float) num));
          memberRoster.AddXpToTroopAtIndex(xpAmount, index);
          xpToDistribute -= (float) xpAmount;
          num -= gainableMaxXp;
        }
      }
    }

    public static bool CanTroopGainXp(
      PartyBase owner,
      CharacterObject character,
      out int gainableMaxXp)
    {
      bool flag = false;
      gainableMaxXp = 0;
      int indexOfTroop = owner.MemberRoster.FindIndexOfTroop(character);
      int elementNumber = owner.MemberRoster.GetElementNumber(indexOfTroop);
      int elementXp = owner.MemberRoster.GetElementXp(indexOfTroop);
      for (int index = 0; index < character.UpgradeTargets.Length; ++index)
      {
        int upgradeXpCost = character.GetUpgradeXpCost(owner, index);
        if (elementXp < upgradeXpCost * elementNumber)
        {
          flag = true;
          int num = upgradeXpCost * elementNumber - elementXp;
          if (num > gainableMaxXp)
            gainableMaxXp = num;
        }
      }
      return flag;
    }

    public static Vec2 FindReachablePointAroundPosition(
      Vec2 centerPosition,
      float maxDistance,
      float minDistance = 0.0f)
    {
      Vec2 vec2_1 = new Vec2(centerPosition.x, centerPosition.y);
      PathFaceRecord faceIndex1 = Campaign.Current.MapSceneWrapper.GetFaceIndex(centerPosition);
      Vec2 pointAroundPosition = centerPosition;
      if ((double) maxDistance > 0.0)
      {
        int num = 0;
        do
        {
          ++num;
          Vec2 vec2_2 = Vec2.One.Normalized();
          vec2_2.RotateCCW(MBRandom.RandomFloatRanged(0.0f, 6.28318548f));
          Vec2 vec2_3 = vec2_2 * MBRandom.RandomFloatRanged(minDistance, maxDistance);
          Vec2 position = centerPosition + vec2_3;
          PathFaceRecord faceIndex2 = Campaign.Current.MapSceneWrapper.GetFaceIndex(position);
          if (faceIndex2.IsValid() && Campaign.Current.MapSceneWrapper.AreFacesOnSameIsland(faceIndex2, faceIndex1, false))
            pointAroundPosition = position;
        }
        while (pointAroundPosition == centerPosition && num < 250);
      }
      return pointAroundPosition;
    }

    public static void TryMatchPartySpeedWithItemWeight(
      MobileParty party,
      float targetPartySpeed,
      ItemObject itemToUse = null)
    {
      targetPartySpeed = MathF.Max(1f, targetPartySpeed);
      ItemObject itemObject = itemToUse ?? DefaultItems.HardWood;
      float speed = party.Speed;
      int num = MathF.Sign(speed - targetPartySpeed);
      for (int index = 0; index < 200 && (double) MathF.Abs(speed - targetPartySpeed) >= 0.10000000149011612 && MathF.Sign(speed - targetPartySpeed) == num; ++index)
      {
        if ((double) speed >= (double) targetPartySpeed)
        {
          party.ItemRoster.AddToCounts(itemObject, 1);
        }
        else
        {
          if (party.ItemRoster.GetItemNumber(itemObject) <= 0)
            break;
          party.ItemRoster.AddToCounts(itemObject, -1);
        }
        speed = party.Speed;
      }
    }

    public static void UtilizePartyEscortBehavior(
      MobileParty escortedParty,
      MobileParty escortParty,
      ref bool isWaitingForEscortParty,
      float innerRadius,
      float outerRadius,
      MobilePartyHelper.ResumePartyEscortBehaviorDelegate onPartyEscortBehaviorResumed,
      bool showDebugSpheres = false)
    {
      if (!isWaitingForEscortParty)
      {
        int num = showDebugSpheres ? 1 : 0;
        if ((double) escortParty.Position2D.DistanceSquared(escortedParty.Position2D) < (double) outerRadius * (double) outerRadius)
          return;
        escortedParty.Ai.SetMoveGoToPoint(escortedParty.Position2D);
        escortedParty.Ai.CheckPartyNeedsUpdate();
        isWaitingForEscortParty = true;
      }
      else
      {
        int num = showDebugSpheres ? 1 : 0;
        if ((double) escortParty.Position2D.DistanceSquared(escortedParty.Position2D) > (double) innerRadius * (double) innerRadius)
          return;
        onPartyEscortBehaviorResumed();
        escortedParty.Ai.CheckPartyNeedsUpdate();
        isWaitingForEscortParty = false;
      }
    }

    public static Hero GetMainPartySkillCounsellor(SkillObject skill)
    {
      PartyBase mainParty = PartyBase.MainParty;
      Hero hero = (Hero) null;
      int num = 0;
      for (int index = 0; index < mainParty.MemberRoster.Count; ++index)
      {
        CharacterObject characterAtIndex = mainParty.MemberRoster.GetCharacterAtIndex(index);
        if (characterAtIndex.IsHero && !characterAtIndex.HeroObject.IsWounded)
        {
          int skillValue = characterAtIndex.GetSkillValue(skill);
          if (skillValue >= num)
          {
            num = skillValue;
            hero = characterAtIndex.HeroObject;
          }
        }
      }
      return hero ?? mainParty.LeaderHero;
    }

    public static Settlement GetCurrentSettlementOfMobilePartyForAICalculation(
      MobileParty mobileParty)
    {
      Settlement currentSettlement = mobileParty.CurrentSettlement;
      if (currentSettlement != null)
        return currentSettlement;
      return mobileParty.LastVisitedSettlement == null || (double) mobileParty.LastVisitedSettlement.Position2D.DistanceSquared(mobileParty.Position2D) >= 1.0 ? (Settlement) null : mobileParty.LastVisitedSettlement;
    }

    public static TroopRoster GetPlayerPrisonersPlayerCanSell()
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      List<string> list = Campaign.Current.GetCampaignBehavior<IViewDataTracker>().GetPartyPrisonerLocks().ToList<string>();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) MobileParty.MainParty.PrisonRoster.GetTroopRoster())
      {
        if (!list.Contains(troopRosterElement.Character.StringId))
          dummyTroopRoster.Add(troopRosterElement);
      }
      return dummyTroopRoster;
    }

    public delegate void ResumePartyEscortBehaviorDelegate();
  }
}
