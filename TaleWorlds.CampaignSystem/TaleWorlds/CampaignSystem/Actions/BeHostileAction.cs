// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.BeHostileAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class BeHostileAction
  {
    private const float MinorCoercionValue = 1f;
    private const float MajorCoercionValue = 2f;
    private const float EncounterValue = 6f;

    private static void ApplyInternal(
      PartyBase attackerParty,
      PartyBase defenderParty,
      float value)
    {
      if (defenderParty.IsMobile && defenderParty.MobileParty.ActualClan == null)
        return;
      int relationChange1 = (int) (-1.0 * (double) value);
      int relationChange2 = (int) (-5.0 * (double) value);
      int relationChange3 = (int) (-1.0 * (double) value);
      int relationChange4 = (int) (-4.0 * (double) value);
      int relationChange5 = (int) (-4.0 * (double) value);
      int relationChange6 = (int) (-10.0 * (double) value);
      int relationChange7 = (int) (-2.0 * (double) value);
      bool flag = attackerParty.MapFaction.IsAtWarWith(defenderParty.MapFaction);
      Hero leaderHero = attackerParty.LeaderHero;
      if (defenderParty.IsSettlement)
      {
        if (!defenderParty.Settlement.IsVillage || flag)
          return;
        if (relationChange4 < 0)
        {
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, defenderParty.Settlement.OwnerClan.Leader, relationChange4);
          foreach (Hero notable in (List<Hero>) defenderParty.Settlement.Notables)
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, notable, relationChange5);
        }
        BeHostileAction.ApplyGeneralConsequencesOnPeace(attackerParty, defenderParty, value);
      }
      else
      {
        if (defenderParty.MobileParty == null)
          return;
        if (defenderParty.MobileParty.IsVillager)
        {
          if (flag)
          {
            foreach (Hero notable in (List<Hero>) defenderParty.MobileParty.HomeSettlement.Notables)
              ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, notable, relationChange3);
          }
          else
          {
            if (relationChange1 < 0)
            {
              ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, defenderParty.MobileParty.HomeSettlement.OwnerClan.Leader, relationChange1);
              foreach (Hero notable in (List<Hero>) defenderParty.MobileParty.HomeSettlement.Notables)
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, notable, relationChange2);
            }
            BeHostileAction.ApplyGeneralConsequencesOnPeace(attackerParty, defenderParty, value);
          }
        }
        else
        {
          if (!defenderParty.MobileParty.IsCaravan)
            return;
          if (flag)
          {
            if (relationChange7 >= 0 || defenderParty.Owner == null)
              return;
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, defenderParty.Owner, relationChange7);
          }
          else
          {
            if (relationChange6 < 0 && defenderParty.Owner != null)
              ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, defenderParty.Owner, relationChange6);
            BeHostileAction.ApplyGeneralConsequencesOnPeace(attackerParty, defenderParty, value);
          }
        }
      }
    }

    private static void ApplyGeneralConsequencesOnPeace(
      PartyBase attackerParty,
      PartyBase defenderParty,
      float value)
    {
      float amount = -25f * value;
      float deltaCrimeRating = 10f * value;
      int relationChange = (int) (-2.0 * (double) value);
      float num1 = -50f * value;
      int num2 = attackerParty.MapFaction.IsClan ? 1 : 0;
      bool isKingdomLeader = attackerParty.LeaderHero.IsKingdomLeader;
      bool mercenaryService = attackerParty.LeaderHero.Clan.IsUnderMercenaryService;
      Hero leaderHero = attackerParty.LeaderHero;
      if (leaderHero.Equals((object) Hero.MainHero))
      {
        if ((double) amount < 0.0)
          TraitLevelingHelper.OnHostileAction((int) amount);
        if ((double) deltaCrimeRating > 0.0)
          ChangeCrimeRatingAction.Apply(defenderParty.MapFaction, deltaCrimeRating);
      }
      if (num2 != 0)
        return;
      if (isKingdomLeader)
      {
        if ((double) num1 >= 0.0)
          return;
        GainKingdomInfluenceAction.ApplyForDefault(attackerParty.MobileParty.LeaderHero, num1);
      }
      else if (mercenaryService)
      {
        if (relationChange < 0)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, leaderHero.MapFaction.Leader, relationChange);
        if ((double) value != 6.0)
          return;
        ChangeKingdomAction.ApplyByLeaveKingdomAsMercenary(leaderHero.Clan);
      }
      else
      {
        if (relationChange < 0 && attackerParty.MapFaction != null && defenderParty.MapFaction != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(leaderHero, defenderParty.MapFaction.Leader, relationChange);
        if ((double) num1 >= 0.0)
          return;
        GainKingdomInfluenceAction.ApplyForDefault(attackerParty.MobileParty.LeaderHero, num1);
      }
    }

    public static void ApplyHostileAction(
      PartyBase attackerParty,
      PartyBase defenderParty,
      float value)
    {
      if (attackerParty == null || defenderParty == null || (double) value == 0.0)
        Debug.FailedAssert("BeHostileAction, attackerParty and/or defenderParty is null or value is 0.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\BeHostileAction.cs", nameof (ApplyHostileAction), 199);
      else
        BeHostileAction.ApplyInternal(attackerParty, defenderParty, value);
    }

    public static void ApplyMinorCoercionHostileAction(
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (attackerParty == null || defenderParty == null)
        Debug.FailedAssert("BeHostileAction, attackerParty and/or defenderParty is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\BeHostileAction.cs", nameof (ApplyMinorCoercionHostileAction), 211);
      else
        BeHostileAction.ApplyInternal(attackerParty, defenderParty, 1f);
    }

    public static void ApplyMajorCoercionHostileAction(
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (attackerParty == null || defenderParty == null)
        Debug.FailedAssert("BeHostileAction, attackerParty and/or defenderParty is null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\BeHostileAction.cs", nameof (ApplyMajorCoercionHostileAction), 223);
      else
        BeHostileAction.ApplyInternal(attackerParty, defenderParty, 2f);
    }

    public static void ApplyEncounterHostileAction(PartyBase attackerParty, PartyBase defenderParty)
    {
      if (Campaign.Current.Models.EncounterModel.IsEncounterExemptFromHostileActions(attackerParty, defenderParty))
        return;
      BeHostileAction.ApplyInternal(attackerParty, defenderParty, 6f);
      if (attackerParty != PartyBase.MainParty || attackerParty.MapFaction == defenderParty.MapFaction || FactionManager.IsAtWarAgainstFaction(attackerParty.MapFaction, defenderParty.MapFaction))
        return;
      ChangeRelationAction.ApplyPlayerRelation(defenderParty.MapFaction.Leader, -10);
      DeclareWarAction.ApplyByPlayerHostility(attackerParty.MapFaction, defenderParty.MapFaction);
    }
  }
}
