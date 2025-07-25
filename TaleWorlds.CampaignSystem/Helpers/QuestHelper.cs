// Decompiled with JetBrains decompiler
// Type: Helpers.QuestHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class QuestHelper
  {
    public static void AddMapArrowFromPointToTarget(
      TextObject name,
      Vec2 sourcePosition,
      Vec2 targetPosition,
      float life,
      float error)
    {
      Vec2 trackDirection = targetPosition - sourcePosition;
      double num1 = (double) trackDirection.Normalize();
      trackDirection.x += error * (MBRandom.RandomFloat - 0.5f);
      trackDirection.y += error * (MBRandom.RandomFloat - 0.5f);
      double num2 = (double) trackDirection.Normalize();
      Vec2 trackPosition = sourcePosition + trackDirection * 4f;
      Campaign.Current.GetCampaignBehavior<IMapTracksCampaignBehavior>()?.AddMapArrow(name, trackPosition, trackDirection, life);
    }

    public static bool CheckGoldForAlternativeSolution(int requiredGold, ref TextObject explanation)
    {
      if (Hero.MainHero.Gold >= requiredGold)
        return true;
      explanation = new TextObject("{=jkYQmtIF}You need to have at least {GOLD_AMOUNT}{GOLD_ICON} to pay for the expenses beforehand.");
      explanation.SetTextVariable("GOLD_AMOUNT", requiredGold);
      return false;
    }

    public static List<SkillObject> GetAlternativeSolutionMeleeSkills()
    {
      return new List<SkillObject>()
      {
        DefaultSkills.OneHanded,
        DefaultSkills.TwoHanded,
        DefaultSkills.Polearm
      };
    }

    public static bool CheckRosterForAlternativeSolution(
      TroopRoster troopRoster,
      int requiredTroopCount,
      ref TextObject explanation,
      int minimumTier = 0,
      bool mountedRequired = false)
    {
      int num = 0;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) troopRoster.GetTroopRoster())
      {
        if (!troopRosterElement.Character.IsHero && !troopRosterElement.Character.IsNotTransferableInPartyScreen && (!mountedRequired || troopRosterElement.Character.IsMounted) && (minimumTier == 0 || troopRosterElement.Character.Tier >= minimumTier))
          num += troopRosterElement.Number - troopRosterElement.WoundedNumber;
      }
      if (num >= requiredTroopCount)
        return true;
      if (minimumTier == 0)
      {
        explanation = new TextObject("{=AdkSktd2}You have to send {NUMBER} {?MOUNTED}cavalry {?}{\\?}troops to this quest.");
      }
      else
      {
        explanation = new TextObject("{=Cg3hH8gN}You have to send {NUMBER} {?MOUNTED}cavalry {?}{\\?}troops with at least tier {TIER} to this quest.");
        explanation.SetTextVariable("TIER", minimumTier);
      }
      explanation.SetTextVariable("MOUNTED", mountedRequired ? 1 : 0);
      explanation.SetTextVariable("NUMBER", requiredTroopCount);
      return false;
    }

    public static List<SkillObject> GetAlternativeSolutionRangedSkills()
    {
      return new List<SkillObject>()
      {
        DefaultSkills.Bow,
        DefaultSkills.Crossbow,
        DefaultSkills.Throwing
      };
    }

    public static bool CheckMinorMajorCoercion(
      QuestBase questToCheck,
      MapEvent mapEvent,
      PartyBase attackerParty)
    {
      if (!mapEvent.IsForcingSupplies && !mapEvent.IsForcingVolunteers || attackerParty != PartyBase.MainParty || !mapEvent.MapEventSettlement.IsVillage)
        return false;
      return QuestManager.QuestExistInClan(questToCheck, mapEvent.MapEventSettlement.OwnerClan) || QuestManager.QuestExistInSettlementNotables(questToCheck, mapEvent.MapEventSettlement);
    }

    public static void ApplyGenericMinorMajorCoercionConsequences(
      QuestBase quest,
      MapEvent mapEvent)
    {
      TextObject textObject = new TextObject("{=tWZ4a8Ih}You are accused in {SETTLEMENT} of a crime and {QUEST_GIVER.LINK} no longer trusts you in this matter.");
      textObject.SetTextVariable("SETTLEMENT", mapEvent.MapEventSettlement.EncyclopediaLinkWithName);
      StringHelpers.SetCharacterProperties("QUEST_GIVER", quest.QuestGiver.CharacterObject, textObject);
      quest.CompleteQuestWithFail(textObject);
      ChangeRelationAction.ApplyPlayerRelation(quest.QuestGiver, -10);
      quest.QuestGiver.AddPower(-10f);
      TraitLevelingHelper.OnIssueSolvedThroughAlternativeSolution(Hero.MainHero, new Tuple<TraitObject, int>[1]
      {
        new Tuple<TraitObject, int>(DefaultTraits.Honor, -50)
      });
    }

    public static int GetAveragePriceOfItemInTheWorld(ItemObject item)
    {
      int num1 = 0;
      int num2 = 0;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown)
        {
          num2 += settlement.Town.GetItemPrice(item, (MobileParty) null, false);
          ++num1;
        }
        else if (settlement.IsVillage)
        {
          num2 += settlement.Village.GetItemPrice(item, (MobileParty) null, false);
          ++num1;
        }
      }
      return num2 / num1;
    }

    public static void CheckWarDeclarationAndFailOrCancelTheQuest(
      QuestBase questToCheck,
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail,
      TextObject failLog,
      TextObject cancelLog,
      bool forceCancel = false)
    {
      if (!questToCheck.QuestGiver.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
        return;
      if (!forceCancel && DiplomacyHelper.IsWarCausedByPlayer(faction1, faction2, detail))
        questToCheck.CompleteQuestWithFail(failLog);
      else
        questToCheck.CompleteQuestWithCancel(cancelLog);
    }
  }
}
