// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.LeaveTroopsToSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class LeaveTroopsToSettlementAction
  {
    private static void ApplyInternal(
      MobileParty mobileParty,
      Settlement settlement,
      int numberOfTroopsWillBeLeft,
      bool archersAreHighPriority)
    {
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      int num1 = numberOfTroopsWillBeLeft;
      for (int index1 = 0; index1 < MathF.Abs(numberOfTroopsWillBeLeft); ++index1)
      {
        CharacterObject characterObject = (CharacterObject) null;
        --num1;
        int num2 = archersAreHighPriority ? 4 : 1;
        PartyBase party;
        int stackIndex;
        for (int index2 = 0; index2 < num2; ++index2)
        {
          if (numberOfTroopsWillBeLeft > 0)
          {
            int partyRank = MBRandom.RandomInt(mobileParty.MemberRoster.TotalRegulars);
            CharacterObject character = (CharacterObject) null;
            mobileParty.Party.GetCharacterFromPartyRank(partyRank, out character, out party, out stackIndex, true);
            if (character.IsRanged)
            {
              characterObject = character;
              break;
            }
            if (!archersAreHighPriority || !character.IsMounted || characterObject == null)
              characterObject = character;
          }
          else
          {
            int partyRank = settlement.Town.GarrisonParty.MemberRoster.TotalHeroes + MBRandom.RandomInt(settlement.Town.GarrisonParty.MemberRoster.TotalRegulars);
            CharacterObject character = (CharacterObject) null;
            settlement.Town.GarrisonParty.Party.GetCharacterFromPartyRank(partyRank, out character, out party, out stackIndex, true);
            characterObject = character;
          }
        }
        if (numberOfTroopsWillBeLeft > 0)
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.Party.MemberRoster.GetTroopRoster())
          {
            if (troopRosterElement.Character == characterObject)
            {
              if (troopRosterElement.WoundedNumber > 0)
              {
                dummyTroopRoster.AddToCounts(characterObject, 1, woundedCount: 1);
                mobileParty.MemberRoster.AddToCounts(characterObject, -1, woundedCount: -1);
                break;
              }
              dummyTroopRoster.AddToCounts(characterObject, 1);
              mobileParty.AddElementToMemberRoster(characterObject, -1);
              break;
            }
          }
        }
        else
        {
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) settlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
          {
            if (troopRosterElement.Character == characterObject)
            {
              if (troopRosterElement.Number - troopRosterElement.WoundedNumber > 0)
              {
                dummyTroopRoster.AddToCounts(characterObject, 1);
                settlement.Town.GarrisonParty.MemberRoster.AddToCounts(characterObject, -1);
                break;
              }
              dummyTroopRoster.AddToCounts(characterObject, 1, woundedCount: 1);
              settlement.Town.GarrisonParty.MemberRoster.AddToCounts(characterObject, -1, woundedCount: -1);
              break;
            }
          }
        }
      }
      if (dummyTroopRoster.Count <= 0)
        return;
      if (numberOfTroopsWillBeLeft > 0)
      {
        CampaignEventDispatcher.Instance.OnTroopGivenToSettlement(mobileParty.LeaderHero, settlement, dummyTroopRoster);
        if (settlement.Town.GarrisonParty == null)
          settlement.AddGarrisonParty();
        while (dummyTroopRoster.Count > 0)
        {
          TroopRosterElement elementCopyAtIndex = dummyTroopRoster.GetElementCopyAtIndex(0);
          dummyTroopRoster.AddToCounts(elementCopyAtIndex.Character, -elementCopyAtIndex.Number);
          settlement.Town.GarrisonParty.MemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number);
        }
        if (mobileParty.LeaderHero == null || settlement.OwnerClan == mobileParty.LeaderHero.Clan)
          return;
        float num3 = 0.0f;
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) dummyTroopRoster.GetTroopRoster())
        {
          float troopPower = Campaign.Current.Models.MilitaryPowerModel.GetTroopPower(troopRosterElement.Character, BattleSideEnum.Defender, MapEvent.PowerCalculationContext.Siege, 0.0f);
          num3 += troopPower * (float) troopRosterElement.Number;
        }
        GainKingdomInfluenceAction.ApplyForLeavingTroopToGarrison(mobileParty.LeaderHero, num3 / 3f);
      }
      else
      {
        while (dummyTroopRoster.Count > 0)
        {
          TroopRosterElement elementCopyAtIndex = dummyTroopRoster.GetElementCopyAtIndex(0);
          dummyTroopRoster.AddToCounts(elementCopyAtIndex.Character, -elementCopyAtIndex.Number);
          mobileParty.MemberRoster.AddToCounts(elementCopyAtIndex.Character, elementCopyAtIndex.Number);
        }
      }
    }

    public static void Apply(
      MobileParty mobileParty,
      Settlement settlement,
      int number,
      bool archersAreHighPriority)
    {
      LeaveTroopsToSettlementAction.ApplyInternal(mobileParty, settlement, number, archersAreHighPriority);
    }
  }
}
