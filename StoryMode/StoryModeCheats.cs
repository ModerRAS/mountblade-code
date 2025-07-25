// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeCheats
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.Quests.SecondPhase;
using StoryMode.Quests.SecondPhase.ConspiracyQuests;
using StoryMode.StoryModeObjects;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace StoryMode
{
  public static class StoryModeCheats
  {
    public static bool CheckGameMode(out string message)
    {
      message = string.Empty;
      if (StoryModeManager.Current != null)
        return false;
      message = "Game mode is not correct!";
      return true;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("activate_conspiracy_quest", "storymode")]
    public static string ActivateConspiracyQuest(List<string> strings)
    {
      string message;
      if (StoryModeCheats.CheckGameMode(out message))
        return message;
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"storymode.activate_conspiracy_quest\".";
      if (StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom == null)
        return " Player supported kingdom doesn't exist.";
      foreach (QuestBase questBase in Campaign.Current.QuestManager.Quests.Where<QuestBase>((Func<QuestBase, bool>) (t => t is WeakenEmpireQuestBehavior.WeakenEmpireQuest || t is AssembleEmpireQuestBehavior.AssembleEmpireQuest)).ToList<QuestBase>())
        questBase.CompleteQuestWithCancel();
      StoryModeManager.Current.MainStoryLine.CompleteSecondPhase();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_family_members", "storymode")]
    public static string AddFamilyMembers(List<string> strings)
    {
      string message;
      if (StoryModeCheats.CheckGameMode(out message))
        return message;
      foreach (Hero hero in new List<Hero>()
      {
        StoryModeHeroes.LittleBrother,
        StoryModeHeroes.ElderBrother,
        StoryModeHeroes.LittleSister
      })
      {
        AddHeroToPartyAction.Apply(hero, MobileParty.MainParty);
        hero.Clan = Clan.PlayerClan;
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("weaken_kingdom", "storymode")]
    public static string WeakenKingdom(List<string> strings)
    {
      string message;
      if (StoryModeCheats.CheckGameMode(out message))
        return message;
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"storymode.weaken_kingdom [KingdomName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings);
      Kingdom kingdom1 = (Kingdom) null;
      foreach (Kingdom kingdom2 in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom2.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          kingdom1 = kingdom2;
          break;
        }
        if (str2.Length >= 2 && kingdom2.Name.ToString().ToLower().Substring(0, 2).Equals(str2.ToLower().Substring(0, 2)))
        {
          kingdom1 = kingdom2;
          break;
        }
      }
      if (kingdom1 == null)
        return "Kingdom is not found\n" + str1;
      foreach (Settlement settlement in kingdom1.Settlements.Where<Settlement>((Func<Settlement, bool>) (t => t.IsTown || t.IsCastle)).Take<Settlement>(3).ToList<Settlement>())
        ChangeOwnerOfSettlementAction.ApplyByDefault(Hero.MainHero, settlement);
      foreach (MobileParty mobileParty in kingdom1.AllParties.Where<MobileParty>((Func<MobileParty, bool>) (t => t.MapEvent == null)))
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
          mobileParty.MemberRoster.RemoveTroop(troopRosterElement.Character, mobileParty.MemberRoster.GetTroopCount(troopRosterElement.Character) / 2);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("reinforce_kingdom", "storymode")]
    public static string ReinforceKingdom(List<string> strings)
    {
      string message;
      if (StoryModeCheats.CheckGameMode(out message))
        return message;
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"storymode.reinforce_kingdom [KingdomName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings);
      Kingdom kingdom = (Kingdom) null;
      foreach (Kingdom kingdom1 in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom1.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          kingdom = kingdom1;
          break;
        }
      }
      if (kingdom == null)
        return "Kingdom is not found\n" + str1;
      foreach (Settlement settlement in Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => (t.IsTown || t.IsCastle) && t.MapFaction != kingdom)).Take<Settlement>(3).ToList<Settlement>())
        ChangeOwnerOfSettlementAction.ApplyByDefault(kingdom.Leader, settlement);
      foreach (MobileParty mobileParty in kingdom.AllParties.Where<MobileParty>((Func<MobileParty, bool>) (t => t.MapEvent == null)))
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.MemberRoster.GetTroopRoster())
          mobileParty.MemberRoster.AddToCounts(troopRosterElement.Character, 200);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_conspiracy_quest_destroy_raiders", "storymode")]
    public static string StartDestroyRaidersConspiracyQuest(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      new DestroyRaidersConspiracyQuest("cheat_quest", StoryModeHeroes.ImperialMentor).StartQuest();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_next_second_phase_quest", "storymode")]
    public static string SecondPhaseStartNextQuest(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      if (StoryMode.StoryModePhases.SecondPhase.Instance == null)
        return "Second phase not found.";
      StoryMode.StoryModePhases.SecondPhase.Instance.CreateNextConspiracyQuest();
      return "Success";
    }
  }
}
