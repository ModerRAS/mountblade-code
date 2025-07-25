// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.BreakInOutBesiegedSettlementAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class BreakInOutBesiegedSettlementAction
  {
    public static void ApplyBreakIn(out TroopRoster casualties, out int armyCasualtiesCount)
    {
      BreakInOutBesiegedSettlementAction.ApplyInternal(true, out casualties, out armyCasualtiesCount);
    }

    public static void ApplyBreakOut(out TroopRoster casualties, out int armyCasualtiesCount)
    {
      BreakInOutBesiegedSettlementAction.ApplyInternal(false, out casualties, out armyCasualtiesCount);
    }

    private static void ApplyInternal(
      bool breakIn,
      out TroopRoster casualties,
      out int armyCasualtiesCount)
    {
      casualties = TroopRoster.CreateDummyTroopRoster();
      armyCasualtiesCount = -1;
      MobileParty mainParty = MobileParty.MainParty;
      SiegeEvent siegeEvent = Settlement.CurrentSettlement.SiegeEvent;
      int num1 = !breakIn ? Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingOutOfBesiegedSettlement(mainParty, siegeEvent) : Campaign.Current.Models.TroopSacrificeModel.GetLostTroopCountForBreakingInBesiegedSettlement(mainParty, siegeEvent);
      if (mainParty.Army == null || mainParty.Army.LeaderParty != mainParty)
      {
        TroopRoster memberRoster = mainParty.MemberRoster;
        for (int index1 = 0; index1 < num1; ++index1)
        {
          int index2 = MBRandom.RandomInt(memberRoster.Count);
          CharacterObject characterAtIndex = memberRoster.GetCharacterAtIndex(index2);
          if (!characterAtIndex.IsRegular || memberRoster.GetElementNumber(index2) == 0)
          {
            --index1;
          }
          else
          {
            memberRoster.AddToCountsAtIndex(index2, -1);
            casualties.AddToCounts(characterAtIndex, 1);
          }
        }
        if (mainParty.Army == null || mainParty.Army.LeaderParty == MobileParty.MainParty)
          return;
        TroopSacrificeModel troopSacrificeModel = Campaign.Current.Models.TroopSacrificeModel;
        ChangeRelationAction.ApplyPlayerRelation(mainParty.Army.LeaderParty.LeaderHero, troopSacrificeModel.BreakOutArmyLeaderRelationPenalty);
        foreach (MobileParty attachedParty in (List<MobileParty>) mainParty.Army.LeaderParty.AttachedParties)
        {
          if (attachedParty.LeaderHero != null && attachedParty != mainParty)
            ChangeRelationAction.ApplyPlayerRelation(attachedParty.LeaderHero, troopSacrificeModel.BreakOutArmyMemberRelationPenalty);
        }
        MobileParty.MainParty.Army = (Army) null;
      }
      else
      {
        armyCasualtiesCount = 0;
        Army army = mainParty.Army;
        int num2 = 0;
        foreach (MobileParty party in (List<MobileParty>) army.Parties)
          num2 += party.MemberRoster.TotalManCount - party.MemberRoster.TotalHeroes;
        for (int index3 = 0; index3 < num1; ++index3)
        {
          float num3 = MBRandom.RandomFloat * (float) num2;
          foreach (MobileParty party in (List<MobileParty>) army.Parties)
          {
            num3 -= (float) (party.MemberRoster.TotalManCount - party.MemberRoster.TotalHeroes);
            if ((double) num3 < 0.0)
            {
              num3 += (float) (party.MemberRoster.TotalManCount - party.MemberRoster.TotalHeroes);
              int index4 = -1;
              for (int index5 = 0; index5 < party.MemberRoster.Count; ++index5)
              {
                if (!party.MemberRoster.GetCharacterAtIndex(index5).IsHero)
                {
                  num3 -= (float) (party.MemberRoster.GetElementNumber(index5) + party.MemberRoster.GetElementWoundedNumber(index5));
                  if ((double) num3 < 0.0)
                  {
                    index4 = index5;
                    break;
                  }
                }
              }
              if (index4 >= 0)
              {
                CharacterObject characterAtIndex = party.MemberRoster.GetCharacterAtIndex(index4);
                party.MemberRoster.AddToCountsAtIndex(index4, -1);
                --num2;
                if (party == MobileParty.MainParty)
                {
                  casualties.AddToCounts(characterAtIndex, 1);
                  break;
                }
                ++armyCasualtiesCount;
                break;
              }
            }
          }
        }
      }
    }
  }
}
