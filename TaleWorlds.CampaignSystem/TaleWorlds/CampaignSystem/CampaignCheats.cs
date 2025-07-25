// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignCheats
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public static class CampaignCheats
  {
    public const string CampaignNotStarted = "Campaign was not started.";
    public const string CheatmodeDisabled = "Cheat mode is disabled!";
    public const string AchievementsAreDisabled = "Achievements are disabled!";
    public const string Help = "help";
    public const string EnterNumber = "Please enter a number";
    public const string EnterPositiveNumber = "Please enter a positive number";
    public const string SettlementNotFound = "Settlement is not found";
    public const string HeroNotFound = "Hero is not found";
    public const string KingdomNotFound = "Kingdom is not found";
    public const string VillageNotFound = "Village is not found";
    public const string FactionNotFound = "Faction is not found";
    public const string PartyNotFound = "Party is not found";
    public const string OK = "Success";
    public const string CheatNameSeparator = "|";
    public const string AiDisabledHelper = "Party AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"";
    public static string ErrorType = "";
    public const int MaxSkillValue = 300;
    private static bool _mainPartyIsAttackable = true;

    public static bool CheckCheatUsage(ref string ErrorType)
    {
      if (Campaign.Current == null)
      {
        ErrorType = "Campaign was not started.";
        return false;
      }
      if (!Game.Current.CheatMode)
      {
        ErrorType = "Cheat mode is disabled!";
        return false;
      }
      ErrorType = "";
      return true;
    }

    public static bool CheckParameters(List<string> strings, int ParameterCount)
    {
      return strings.Count == 0 ? ParameterCount == 0 : strings.Count == ParameterCount;
    }

    public static bool CheckHelp(List<string> strings)
    {
      return strings.Count != 0 && strings[0].ToLower() == "help";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_hero_crafting_stamina", "campaign")]
    public static string SetCraftingStamina(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_hero_crafting_stamina [HeroName] | [Stamina]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      ICraftingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<ICraftingCampaignBehavior>();
      if (campaignBehavior == null)
        return "Can not found ICrafting Campaign Behavior!\n" + str;
      int result = 0;
      if (!int.TryParse(separatedNames[1], out result) || result < 0 || result > 100)
        return "Please enter a valid number between 0-100 number is: " + (object) result + "\n" + str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      if (hero == null)
        return "Hero is not found\n" + str;
      int num = (int) ((double) (campaignBehavior.GetMaxHeroCraftingStamina(hero) * result) / 100.0);
      campaignBehavior.SetHeroCraftingStamina(hero, num);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_hero_culture", "campaign")]
    public static string SetHeroCulture(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_hero_culture [HeroName] | [CultureName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      CultureObject cultureObject = Campaign.Current.ObjectManager.GetObject<CultureObject>(separatedNames[1].ToLower().Replace(" ", ""));
      if (cultureObject == null)
        return "Culture couldn't be found!\n" + str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (hero.Culture == cultureObject)
        return string.Format("Hero culture is already {0}", (object) cultureObject.Name);
      hero.Culture = cultureObject;
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_clan_culture", "campaign")]
    public static string SetClanCulture(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_clan_culture [ClanName] | [CultureName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> parameters = CampaignCheats.GetSeparatedNames(strings, "|");
      if (parameters.Count != 2)
        return str;
      CultureObject cultureObject = Campaign.Current.ObjectManager.GetObject<CultureObject>(parameters[1].ToLower().Replace(" ", ""));
      if (cultureObject == null)
        return "Culture couldn't be found!\n" + str;
      Clan clan = Campaign.Current.Clans.FirstOrDefault<Clan>((Func<Clan, bool>) (x => string.Equals(x.Name.ToString().Replace(" ", ""), parameters[0].Replace(" ", ""), StringComparison.OrdinalIgnoreCase) && !x.IsEliminated));
      if (clan == null)
        return "Clan couldn't be found\n" + str;
      if (clan.Culture == cultureObject)
        return string.Format("Clan culture is already {0}", (object) cultureObject.Name);
      clan.Culture = cultureObject;
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("make_hero_wounded", "campaign")]
    public static string MakeHeroWounded(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.make_hero_wounded [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      Hero hero = CampaignCheats.GetHero(CampaignCheats.ConcatenateString(strings));
      if (hero == null)
        return "Hero is not found\n" + str;
      hero.MakeWounded();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("reset_player_skills_level_and_perks", "campaign")]
    public static string ResetPlayerSkillsLevelAndPerk(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.reset_player_skills_level_and_perks\".";
      Hero.MainHero.CharacterObject.Level = 0;
      Hero.MainHero.HeroDeveloper.ClearHero();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_skills_of_hero", "campaign")]
    public static string SetSkillsOfGivenHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_skills_of_hero [HeroName] | [Level]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      int result = -1;
      if (!int.TryParse(separatedNames[1], out result))
        return "Level must be a number\n" + str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (result <= 0 || result > 300)
        return string.Format("Level must be between 0 - {0}.", (object) 300);
      hero.CharacterObject.Level = 0;
      hero.HeroDeveloper.ClearHero();
      int changeAmount = MathF.Min(result / 25 + 1, 10);
      int maxFocusPerSkill = Campaign.Current.Models.CharacterDevelopmentModel.MaxFocusPerSkill;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        if (hero.HeroDeveloper.GetFocus(skill) + changeAmount > maxFocusPerSkill)
          changeAmount = maxFocusPerSkill;
        hero.HeroDeveloper.AddFocus(skill, changeAmount, false);
        hero.HeroDeveloper.SetInitialSkillLevel(skill, result);
      }
      hero.HeroDeveloper.UnspentFocusPoints = 0;
      return string.Format("{0}'s skills are set to level {1}.", (object) hero.Name, (object) result);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_settlements_visible", "campaign")]
    public static string SetAllSettlementsVisible(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      int result;
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings) || !int.TryParse(strings[0], out result) || result != 2 && result != 1 && result != 0)
        return "Format is \"campaign.set_settlements_visible [2(no hideouts)/1(all)/0(none)]\".";
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        bool flag = result != 0 && (!settlement.IsHideout || result == 1);
        settlement.IsVisible = flag;
        settlement.IsInspected = flag;
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_skill_main_hero", "campaign")]
    public static string SetSkillMainHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_skill_main_hero [SkillName] | [LevelValue]\".";
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2 || CampaignCheats.CheckHelp(strings))
        return str;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        if (string.Equals(skill.Name.ToString().Replace(" ", ""), separatedNames[0].Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          int result = 1;
          if (!int.TryParse(separatedNames[1], out result))
            return "Please enter a number\n" + str;
          if (result <= 0 || result > 300)
            return string.Format("Level must be between 0 - {0}.", (object) 300);
          Hero.MainHero.HeroDeveloper.SetInitialSkillLevel(skill, result);
          Hero.MainHero.HeroDeveloper.InitializeSkillXp(skill);
          return "Success";
        }
      }
      return "Skill is not found.\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_all_skills_main_hero", "campaign")]
    public static string SetAllSkillsMainHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      int result = 1;
      string str = "Format is \"campaign.set_all_skills_main_hero [LevelValue]\".";
      if (strings.IsEmpty<string>() || !int.TryParse(strings[0], out result))
        return "Please enter a number\n" + str;
      if (result <= 0 || result > 300)
        return string.Format("Level must be between 0 - {0}.", (object) 300);
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        Hero.MainHero.HeroDeveloper.SetInitialSkillLevel(skill, result);
        Hero.MainHero.HeroDeveloper.InitializeSkillXp(skill);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_skill_of_all_companions", "campaign")]
    public static string SetSkillCompanion(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_skill_of_all_companions [SkillName] | [LevelValue]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        if (string.Equals(skill.Name.ToString().Replace(" ", ""), separatedNames[0].Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          int result = 1;
          if (!int.TryParse(separatedNames[1], out result))
            return "Please enter a number\n" + str;
          if (result <= 0 || result > 300)
            return string.Format("Level must be between 0 - {0}.", (object) 300);
          foreach (Hero companion in (List<Hero>) Clan.PlayerClan.Companions)
          {
            companion.HeroDeveloper.SetInitialSkillLevel(skill, result);
            companion.HeroDeveloper.InitializeSkillXp(skill);
          }
          return "Success";
        }
      }
      return "Skill is not found.\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_all_companion_skills", "campaign")]
    public static string SetAllSkillsOfAllCompanions(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_all_companion_skills [LevelValue]\".";
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        int result = 1;
        if (strings.Count == 0 || !int.TryParse(strings[0], out result))
          return "Please enter a number\n" + str;
        if (result <= 0 || result > 300)
          return string.Format("Level must be between 0 - {0}.", (object) 300);
        foreach (Hero companion in (List<Hero>) Clan.PlayerClan.Companions)
        {
          companion.HeroDeveloper.SetInitialSkillLevel(skill, result);
          companion.HeroDeveloper.InitializeSkillXp(skill);
        }
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_all_heroes_skills", "campaign")]
    public static string SetAllHeroSkills(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_all_heroes_skills [LevelValue]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      int result;
      if (strings.Count == 0 || !int.TryParse(strings[0], out result))
        return "Please enter a positive number\n" + str;
      foreach (Hero hero in Hero.AllAliveHeroes.Where<Hero>((Func<Hero, bool>) (x => x.IsActive && x.PartyBelongedTo != null)).ToList<Hero>())
      {
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          if (result <= 0 || result > 300)
            return string.Format("Level must be between 0 - {0}.", (object) 300);
          hero.HeroDeveloper.SetInitialSkillLevel(skill, result);
          hero.HeroDeveloper.InitializeSkillXp(skill);
        }
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_loyalty_of_settlement", "campaign")]
    public static string SetLoyaltyOfSettlement(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_loyalty_of_settlement [SettlementName] | [loyalty]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      int result = 0;
      if (!int.TryParse(separatedNames[1], out result))
        return "Please enter a positive number\n" + str;
      if (result > 100 || result < 0)
        return "Loyalty has to be in the range of 0 to 100";
      string settlementName = separatedNames[0];
      Settlement settlement = CampaignCheats.GetSettlement(settlementName);
      if (settlement == null)
        return "Settlement is not found: " + settlementName + "\n" + str;
      if (settlement.IsVillage)
        return "Settlement must be castle or town";
      settlement.Town.Loyalty = (float) result;
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_main_party_position", "campaign")]
    public static string PrintMainPartyPosition(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      return !CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) ? "Format is \"campaign.print_main_party_position\"." : MobileParty.MainParty.Position2D.x.ToString() + " " + (object) MobileParty.MainParty.Position2D.y;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_world_war", "campaign")]
    public static string StartWorldWar(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.start_world_war\".";
      foreach (Kingdom faction1 in (List<Kingdom>) Kingdom.All)
      {
        foreach (Kingdom faction2 in (List<Kingdom>) Kingdom.All)
        {
          if (faction1 != faction2 && !FactionManager.IsAtWarAgainstFaction((IFaction) faction1, (IFaction) faction2))
            DeclareWarAction.ApplyByDefault((IFaction) faction1, (IFaction) faction2);
        }
      }
      return "All kingdoms are at war with each other!";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_world_peace", "campaign")]
    public static string StartWorldPeace(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.start_world_peace\".";
      foreach (Kingdom faction1 in (List<Kingdom>) Kingdom.All)
      {
        foreach (Kingdom faction2 in (List<Kingdom>) Kingdom.All)
        {
          if (faction1 != faction2 && FactionManager.IsAtWarAgainstFaction((IFaction) faction1, (IFaction) faction2))
            MakePeaceAction.Apply((IFaction) faction1, (IFaction) faction2);
        }
      }
      return "All kingdoms are at peace with each other!";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_modified_item", "campaign")]
    public static string AddModifiedItem(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_modified_item [ItemName] | [ModifierName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      string itemObjectName = separatedNames[0];
      string itemModifierName = separatedNames[1];
      ItemObject itemObject = CampaignCheats.GetItemObject(itemObjectName);
      if (itemObject == null)
        return "Cant find the item.\n" + str;
      ItemModifier itemModifier = CampaignCheats.GetItemModifier(itemModifierName);
      if (itemModifier == null)
        return "Cant find the modifier.\n" + str;
      MobileParty.MainParty.ItemRoster.AddToCounts(new EquipmentElement(itemObject, itemModifier), 5);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_player_name", "campaign")]
    public static string SetPlayerName(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.set_player_name [HeroName]\".";
      string str = CampaignCheats.ConcatenateString(strings);
      TextObject text1 = GameTexts.FindText("str_generic_character_firstname");
      text1.SetTextVariable("CHARACTER_FIRSTNAME", new TextObject(str));
      TextObject text2 = GameTexts.FindText("str_generic_character_name");
      text2.SetTextVariable("CHARACTER_NAME", new TextObject(str));
      Hero.MainHero.SetName(text2, text1);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_crafting_materials", "campaign")]
    public static string AddCraftingMaterials(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.add_crafting_materials\".";
      for (int craftingMaterial = 0; craftingMaterial < 9; ++craftingMaterial)
        PartyBase.MainParty.ItemRoster.AddToCounts(Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem((CraftingMaterials) craftingMaterial), 100);
      return "100 pieces for each crafting material is added to the player inventory.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_hero_relation", "campaign")]
    public static string AddHeroRelation(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.add_hero_relation [HeroName]/All | [Value] \".\n";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str1;
      int result;
      if (!int.TryParse(separatedNames[1], out result))
        return "Please enter a number\n" + str1;
      string str2 = separatedNames[0];
      Hero hero = CampaignCheats.GetHero(str2);
      if (hero == Hero.MainHero)
        return "Can not add relation with yourself.";
      if (hero != null)
      {
        ChangeRelationAction.ApplyPlayerRelation(hero, result);
        return "Success";
      }
      if (!string.Equals(str2, "all", StringComparison.OrdinalIgnoreCase))
        return "Hero is not found\n" + str1;
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (!allAliveHero.IsHumanPlayerCharacter)
          ChangeRelationAction.ApplyPlayerRelation(allAliveHero, result);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("heal_main_party", "campaign")]
    public static string HealMainParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.heal_main_party\".";
      if (MobileParty.MainParty.MapEvent != null)
        return "Main party shouldn't be in a map event.";
      for (int index = 0; index < PartyBase.MainParty.MemberRoster.Count; ++index)
      {
        TroopRosterElement elementCopyAtIndex = PartyBase.MainParty.MemberRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.Character.IsHero)
          elementCopyAtIndex.Character.HeroObject.Heal(elementCopyAtIndex.Character.HeroObject.MaxHitPoints);
        else
          MobileParty.MainParty.Party.AddToMemberRosterElementAtIndex(index, 0, -PartyBase.MainParty.MemberRoster.GetElementWoundedNumber(index));
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("declare_war", "campaign")]
    public static string DeclareWar(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is campaign.declare_war [Faction1] | [Faction2]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str1;
      string str2 = separatedNames[0].ToLower().Replace(" ", "");
      string str3 = separatedNames[1].ToLower().Replace(" ", "");
      IFaction faction1 = (IFaction) null;
      IFaction faction2 = (IFaction) null;
      foreach (IFaction faction in Campaign.Current.Factions)
      {
        string str4 = faction.Name.ToString().ToLower().Replace(" ", "");
        if (str4 == str2)
          faction1 = faction;
        else if (str4 == str3)
          faction2 = faction;
      }
      if (faction1 != null && faction2 != null)
      {
        if (faction1 != Hero.MainHero.MapFaction && (!faction1.IsClan || (faction1 as Clan).Kingdom != null) || faction2 != Hero.MainHero.MapFaction && (!faction2.IsClan || (faction2 as Clan).Kingdom != null))
          return "Factions should be kingdom faction.";
        DeclareWarAction.ApplyByDefault(faction1, faction2);
        return "War declared between " + (object) faction1.Name + " and " + (object) faction2.Name;
      }
      return faction1 == null ? "Faction is not found: " + str2 + "\n" + str1 : "Faction is not found: " + str3 + "\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("declare_peace", "campaign")]
    public static string DeclarePeace(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "campaign.declare_peace [Faction1] | [Faction2]";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str1;
      string str2 = separatedNames[0].ToLower().Replace(" ", "");
      string str3 = separatedNames[1].ToLower().Replace(" ", "");
      IFaction faction1 = (IFaction) null;
      IFaction faction2 = (IFaction) null;
      foreach (IFaction faction3 in Campaign.Current.Factions)
      {
        string str4 = faction3.Name.ToString().ToLower().Replace(" ", "");
        if (str4 == str2)
          faction1 = faction3;
        else if (str4 == str3)
          faction2 = faction3;
      }
      if (faction1 != null && faction2 != null)
      {
        if (faction1 != Hero.MainHero.MapFaction && (!faction1.IsClan || (faction1 as Clan).Kingdom != null) || faction2 != Hero.MainHero.MapFaction && (!faction2.IsClan || (faction2 as Clan).Kingdom != null))
          return "Factions should be kingdom faction.";
        if (faction1.GetStanceWith(faction2).IsAtConstantWar)
          return "Can't declare peace between factions that are at constant war";
        MakePeaceAction.Apply(faction1, faction2);
        return "Peace declared between " + (object) faction1.Name + " and " + (object) faction2.Name;
      }
      return faction1 == null ? "Faction is not found: " + (object) faction1 + "\n" + str1 : "Faction is not found: " + (object) faction2 + "\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_item_to_main_party", "campaign")]
    public static string AddItemToMainParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string mainParty = "Format is \"campaign.add_item_to_main_party [ItemObject] | [Amount]\"\n If amount is not entered only 1 item will be given.";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return mainParty;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      ItemObject itemObject = CampaignCheats.GetItemObject(separatedNames[0]);
      if (itemObject == null)
        return "Item is not found\n" + mainParty;
      int result = 1;
      if (strings.Count == 1)
      {
        PartyBase.MainParty.ItemRoster.AddToCounts(itemObject, result);
        return itemObject.Name.ToString() + " has been given to the main party.";
      }
      if (separatedNames.Count == 2 && (!int.TryParse(separatedNames[1], out result) || result < 1))
        return "Please enter a positive number\n" + mainParty;
      PartyBase.MainParty.ItemRoster.AddToCounts(itemObject, result);
      return itemObject.Name.ToString() + " has been given to the main party.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_all_crafting_materials_to_main_party", "campaign")]
    public static string AddCraftingMaterialItemsToMainParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string mainParty = "Format is \"campaign.add_all_crafting_materials_to_main_party [Amount]\n If amount is not entered only 1 item per material will be given.\".";
      if (strings.Count > 1 || CampaignCheats.CheckHelp(strings))
        return mainParty;
      int result = 1;
      if (strings.Count == 1 && (!int.TryParse(strings[0], out result) || result < 1))
        return "Please enter a positive number\n" + mainParty;
      for (CraftingMaterials craftingMaterial = CraftingMaterials.IronOre; craftingMaterial < CraftingMaterials.NumCraftingMats; ++craftingMaterial)
        PartyBase.MainParty.ItemRoster.AddToCounts(Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(craftingMaterial), result);
      return "Crafting materials have been given to the main party.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("kill_capturer_party", "campaign")]
    public static string KillCapturerParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.kill_capturer_party\".";
      if (!PlayerCaptivity.IsCaptive)
        return "Player is not captive.";
      if (PlayerCaptivity.CaptorParty.IsSettlement)
        return "Can't destroy settlement";
      GameMenu.SwitchToMenu("menu_captivity_end_by_party_removed");
      DestroyPartyAction.Apply((PartyBase) null, PlayerCaptivity.CaptorParty.MobileParty);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_influence", "campaign")]
    public static string AddInfluence(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.add_influence [Number]\". If Number is not entered, 100 influence will be added.";
      int result = 100;
      bool flag = false;
      if (!CampaignCheats.CheckParameters(strings, 0))
        flag = int.TryParse(strings[0], out result);
      if (!flag && !CampaignCheats.CheckParameters(strings, 0))
        return "Please enter a positive number\nFormat is \"campaign.add_influence [Number]\".";
      float amount = MBMath.ClampFloat(Hero.MainHero.Clan.Influence + (float) result, 0.0f, float.MaxValue);
      float num = amount - Hero.MainHero.Clan.Influence;
      ChangeClanInfluenceAction.Apply(Clan.PlayerClan, amount);
      return string.Format("The influence of player is changed by {0}.", (object) num);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_renown_to_clan", "campaign")]
    public static string AddRenown(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_renown [ClanName] | [PositiveNumber]\". \n If number is not specified, 100 will be added. \n If clan name is not specified, player clan will get the renown.";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      int result = 100;
      string clanName = "";
      Hero hero = Hero.MainHero;
      bool flag = false;
      if (CampaignCheats.CheckParameters(strings, 1))
      {
        if (!int.TryParse(strings[0], out result))
        {
          result = 100;
          clanName = CampaignCheats.ConcatenateString(strings);
          hero = CampaignCheats.GetClanLeader(clanName);
          flag = true;
        }
      }
      else if (!CampaignCheats.CheckParameters(strings, 0))
      {
        List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
        if (separatedNames.Count == 2 && !int.TryParse(separatedNames[1], out result))
          return "Please enter a positive number\n" + str;
        clanName = separatedNames[0];
        hero = CampaignCheats.GetClanLeader(clanName);
        flag = true;
      }
      if (hero != null)
      {
        if (result <= 0)
          return "Please enter a positive number\n" + str;
        GainRenownAction.Apply(hero, (float) result);
        return string.Format("Added {0} renown to ", (object) result) + (object) hero.Clan.Name;
      }
      return flag ? "Clan: " + clanName + " not found.\n" + str : "Wrong Input.\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_gold_to_hero", "campaign")]
    public static string AddGoldToHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string hero = "Format is \"campaign.add_gold_to_hero [HeroName] | [PositiveNumber]\".\n If number is not specified, 1000 will be added. \n If hero name is not specified, player's gold will change.";
      if (CampaignCheats.CheckHelp(strings))
        return hero;
      int result = 1000;
      Hero recipientHero = Hero.MainHero;
      if (CampaignCheats.CheckParameters(strings, 0))
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, recipientHero, result, true);
        return "Success";
      }
      if (CampaignCheats.CheckParameters(strings, 1) && !int.TryParse(strings[0], out result))
      {
        result = 1000;
        recipientHero = CampaignCheats.GetHero(CampaignCheats.ConcatenateString(strings));
      }
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count == 2)
      {
        if (!int.TryParse(separatedNames[1], out result))
          return "Please enter a number\n" + hero;
        recipientHero = CampaignCheats.GetHero(separatedNames[0]);
      }
      if (separatedNames.Count == 1 && !int.TryParse(separatedNames[0], out result))
        recipientHero = CampaignCheats.GetHero(separatedNames[0]);
      if (recipientHero == null)
        return "Hero is not found\n" + hero;
      if (recipientHero.Gold + result < 0 || recipientHero.Gold + result > 100000000)
        return "Hero's gold must be between 0-100000000.";
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, recipientHero, result, true);
      return string.Format("{0}'s denars changed by {1}.", (object) recipientHero.Name, (object) result);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_gold_to_all_heroes", "campaign")]
    public static string AddGoldToAllHeroes(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string allHeroes = "Format is \"campaign.add_gold_to_all_heroes [PositiveNumber]\".\n If number is not specified, 100 will be added.";
      if (CampaignCheats.CheckHelp(strings))
        return allHeroes;
      int result = 1000;
      bool flag = false;
      if (!CampaignCheats.CheckParameters(strings, 0))
        flag = int.TryParse(strings[0], out result);
      if (!flag && !CampaignCheats.CheckParameters(strings, 0))
        return "Wrong input.\nFormat is \"campaign.add_gold_to_all_heroes [Number]\".";
      if (result < 1)
        return "Please enter a positive number\n" + allHeroes;
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero != null)
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, allAliveHero, result, true);
      }
      return string.Format("All party's denars changed by {0}.", (object) result);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("activate_all_policies_for_player_kingdom", "campaign")]
    public static string ActivateAllPolicies(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.activate_all_policies_for_player_kingdom";
      if (Clan.PlayerClan.Kingdom == null)
        return "Player is not in a kingdom.";
      Kingdom kingdom = Clan.PlayerClan.Kingdom;
      foreach (PolicyObject policy in (List<PolicyObject>) PolicyObject.All)
      {
        if (!kingdom.ActivePolicies.Contains(policy))
          kingdom.AddPolicy(policy);
      }
      return "All policies are now active for player kingdom.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_building_level", "campaign")]
    public static string AddDevelopment(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_building_level [SettlementName] | [Building]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[0]);
      if (settlement != null && settlement.IsFortification)
      {
        BuildingType buildingType1 = (BuildingType) null;
        foreach (BuildingType buildingType2 in (List<BuildingType>) BuildingType.All)
        {
          if (buildingType2.Name.ToString().ToLower().Replace(" ", "").Equals(separatedNames[1].ToString().ToLower().Replace(" ", "")))
          {
            if (buildingType2.BuildingLocation == BuildingLocation.Castle && settlement.IsCastle)
            {
              buildingType1 = buildingType2;
              break;
            }
            if (settlement.IsTown && (buildingType2.BuildingLocation == BuildingLocation.Settlement || buildingType2.BuildingLocation == BuildingLocation.Daily))
            {
              buildingType1 = buildingType2;
              break;
            }
          }
        }
        if (buildingType1 == null)
          return "Development could not be found.\n" + str;
        foreach (Building building in (List<Building>) settlement.Town.Buildings)
        {
          if (building.BuildingType == buildingType1)
          {
            if (building.CurrentLevel >= 3)
              return buildingType1.Name.ToString() + " is already at top level!";
            ++building.CurrentLevel;
            return buildingType1.Name.ToString() + " level increased to " + (object) building.CurrentLevel + " at " + (object) settlement.Name;
          }
        }
      }
      return "Settlement is not found\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_progress_to_current_building", "campaign")]
    public static string AddDevelopmentProgress(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_progress_to_current_building [SettlementName] | [Progress (0-100)]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      int result;
      if (!int.TryParse(separatedNames[1], out result))
        return "Please enter a positive number\n" + str;
      if (result > 100 || result < 0)
        return "Progress must be between 0 and 100.";
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[0]);
      if (settlement != null && settlement.IsFortification)
      {
        Building currentBuilding = settlement.Town.CurrentBuilding;
        if (currentBuilding != null)
        {
          if (currentBuilding.BuildingType.IsDefaultProject)
            return "Currently there are no buildings in queue.";
          settlement.Town.BuildingsInProgress.Peek().BuildingProgress += (float) (((double) currentBuilding.GetConstructionCost() - (double) currentBuilding.BuildingProgress) * (double) result / 100.0);
          return "Development progress increased to " + (object) (int) ((double) settlement.Town.BuildingsInProgress.Peek().BuildingProgress * 100.0) + " at " + (object) settlement.Name;
        }
      }
      return "Settlement is not found\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_current_building", "campaign")]
    public static string SetCurrentDevelopment(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_current_building [SettlementName] | [BuildingTypeName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[0]);
      if (settlement == null || !settlement.IsFortification)
        return "Settlement is not found\n" + str;
      BuildingType buildingType1 = (BuildingType) null;
      bool flag = true;
      foreach (BuildingType buildingType2 in (List<BuildingType>) BuildingType.All)
      {
        if (separatedNames[1].Replace(" ", "").Equals(buildingType2.Name.ToString().Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          buildingType1 = buildingType2;
          flag = false;
          break;
        }
      }
      if (!flag)
      {
        foreach (Building building in (List<Building>) settlement.Town.Buildings)
        {
          if (building.BuildingType == buildingType1 && building.CurrentLevel < 3)
          {
            BuildingHelper.ChangeCurrentBuilding(buildingType1, settlement.Town);
            return "Current building changed to " + (object) building.BuildingType.Name + " at " + (object) settlement.Name;
          }
        }
      }
      return "Building type is not found.\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_skill_xp_to_hero", "campaign")]
    public static string AddSkillXpToHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      Hero mainHero1 = Hero.MainHero;
      int result = 100;
      string hero1 = "Format is \"campaign.add_skill_xp_to_hero [HeroName] | [SkillName] | [PositiveNumber]\".";
      if (CampaignCheats.CheckHelp(strings))
        return hero1;
      if (CampaignCheats.CheckParameters(strings, 0))
      {
        if (mainHero1 == null)
          return "Wrong Input.\n" + hero1;
        string hero2 = "";
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          mainHero1.HeroDeveloper.AddSkillXp(skill, (float) result);
          int num = (int) ((double) mainHero1.HeroDeveloper.GetFocusFactor(skill) * (double) result);
          hero2 += string.Format("{0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill.\n", (object) result, (object) num, (object) mainHero1.Name, (object) skill.Name);
        }
        return hero2;
      }
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count == 1)
      {
        string hero3 = "";
        if (int.TryParse(separatedNames[0], out result))
        {
          if (result <= 0)
            return "Please enter a positive number\n" + hero1;
          foreach (SkillObject skill in (List<SkillObject>) Skills.All)
          {
            mainHero1.HeroDeveloper.AddSkillXp(skill, (float) result);
            int num = (int) ((double) mainHero1.HeroDeveloper.GetFocusFactor(skill) * (double) result);
            hero3 += string.Format("{0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill.\n", (object) result, (object) num, (object) mainHero1.Name, (object) skill.Name);
          }
          return hero3;
        }
        Hero hero4 = CampaignCheats.GetHero(separatedNames[0]);
        int rawXp = 100;
        if (hero4 == null)
        {
          Hero mainHero2 = Hero.MainHero;
          string str = separatedNames[0];
          foreach (SkillObject skill in (List<SkillObject>) Skills.All)
          {
            if (skill.Name.ToString().Replace(" ", "").Equals(str.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || skill.StringId == str.Replace(" ", ""))
            {
              if (mainHero2.GetSkillValue(skill) >= 300)
                return string.Format("{0} value for {1} is already at max.. ", (object) skill, (object) mainHero2);
              mainHero2.HeroDeveloper.AddSkillXp(skill, (float) rawXp);
              int num = (int) ((double) mainHero2.HeroDeveloper.GetFocusFactor(skill) * (double) rawXp);
              return string.Format("Input {0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill. ", (object) rawXp, (object) num, (object) mainHero2.Name, (object) skill.Name);
            }
          }
          return hero1;
        }
        foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        {
          hero4.HeroDeveloper.AddSkillXp(skill, (float) rawXp);
          int num = (int) ((double) hero4.HeroDeveloper.GetFocusFactor(skill) * (double) rawXp);
          hero3 += string.Format("{0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill.\n", (object) rawXp, (object) num, (object) hero4.Name, (object) skill.Name);
        }
        return hero3;
      }
      if (separatedNames.Count == 2)
      {
        Hero hero5 = CampaignCheats.GetHero(separatedNames[0]);
        if (hero5 == null)
        {
          Hero mainHero3 = Hero.MainHero;
          if (!int.TryParse(separatedNames[1], out result))
            return hero1;
          if (result <= 0)
            return "Please enter a positive number\n" + hero1;
          string str = separatedNames[0];
          foreach (SkillObject skill in (List<SkillObject>) Skills.All)
          {
            if (skill.Name.ToString().Replace(" ", "").Equals(str.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || skill.StringId == str.Replace(" ", ""))
            {
              if (mainHero3.GetSkillValue(skill) >= 300)
                return string.Format("{0} value for {1} is already at max.. ", (object) skill, (object) mainHero3);
              mainHero3.HeroDeveloper.AddSkillXp(skill, (float) result);
              int num = (int) ((double) mainHero3.HeroDeveloper.GetFocusFactor(skill) * (double) result);
              return string.Format("Input {0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill. ", (object) result, (object) num, (object) mainHero3.Name, (object) skill.Name);
            }
          }
          return "Skill not found.\n" + hero1;
        }
        if (int.TryParse(separatedNames[1], out result))
        {
          if (result <= 0)
            return "Please enter a positive number\n" + hero1;
          using (List<SkillObject>.Enumerator enumerator = Skills.All.GetEnumerator())
          {
            if (enumerator.MoveNext())
            {
              SkillObject current = enumerator.Current;
              if (hero5.GetSkillValue(current) >= 300)
                return string.Format("{0} value for {1} is already at max.. ", (object) current, (object) hero5);
              hero5.HeroDeveloper.AddSkillXp(current, (float) result);
              int num = (int) ((double) hero5.HeroDeveloper.GetFocusFactor(current) * (double) result);
              return string.Format("Input {0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill. ", (object) result, (object) num, (object) hero5.Name, (object) current.Name);
            }
          }
        }
        else
        {
          int rawXp = 100;
          string str = separatedNames[1];
          foreach (SkillObject skill in (List<SkillObject>) Skills.All)
          {
            if (skill.Name.ToString().Replace(" ", "").Equals(str.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || skill.StringId == str.Replace(" ", ""))
            {
              if (hero5.GetSkillValue(skill) >= 300)
                return string.Format("{0} value for {1} is already at max.. ", (object) skill, (object) hero5);
              hero5.HeroDeveloper.AddSkillXp(skill, (float) rawXp);
              int num = (int) ((double) hero5.HeroDeveloper.GetFocusFactor(skill) * (double) rawXp);
              return string.Format("Input {0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill. ", (object) rawXp, (object) num, (object) hero5.Name, (object) skill.Name);
            }
          }
          return "Skill not found.\n" + hero1;
        }
      }
      if (separatedNames.Count != 3)
        return hero1;
      if (!int.TryParse(separatedNames[2], out result) || result < 0)
        return "Please enter a positive number\n" + hero1;
      Hero hero6 = CampaignCheats.GetHero(separatedNames[0]);
      if (hero6 == null)
        return "Hero is not found\n" + hero1;
      string str1 = separatedNames[1];
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        if (skill.Name.ToString().Replace(" ", "").Equals(str1.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || skill.StringId == str1.Replace(" ", ""))
        {
          if (hero6.GetSkillValue(skill) >= 300)
            return string.Format("{0} value for {1} is already at max.. ", (object) skill, (object) hero6);
          hero6.HeroDeveloper.AddSkillXp(skill, (float) result);
          int num = (int) ((double) hero6.HeroDeveloper.GetFocusFactor(skill) * (double) result);
          return string.Format("Input {0} xp is modified to {1} xp due to focus point factor \nand added to the {2}'s {3} skill. ", (object) result, (object) num, (object) hero6.Name, (object) skill.Name);
        }
      }
      return "Skill not found.\n" + hero1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_prisoners", "campaign")]
    public static string PrintPrisoners(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.print_prisoners\".";
      string str = "";
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.IsPrisoner)
          str = str + (object) allAliveHero.Name + "    (captor: " + (object) allAliveHero.PartyBelongedToAsPrisoner.Name + ")\n";
      }
      return str + "\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_companions", "campaign")]
    public static string AddCompanions(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_companions [Number]\".";
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      int result;
      if (!int.TryParse(strings[0], out result))
        return "Invalid number.\n" + str;
      if (result <= 0)
        return "Please enter a positive number\n" + str;
      for (int index = 0; index < result; ++index)
        CampaignCheats.AddCompanion(new List<string>());
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_companion", "campaign")]
    public static string AddCompanion(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.add_companion\".";
      CharacterObject wanderer = CharacterObject.PlayerCharacter.Culture.NotableAndWandererTemplates.GetRandomElementWithPredicate<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.Wanderer));
      Settlement elementWithPredicate = Settlement.All.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (settlement => settlement.Culture == wanderer.Culture && settlement.IsTown));
      Hero specialHero = HeroCreator.CreateSpecialHero(wanderer, elementWithPredicate);
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, specialHero, 20000, true);
      specialHero.SetHasMet();
      specialHero.ChangeState(Hero.CharacterStates.Active);
      AddCompanionAction.Apply(Clan.PlayerClan, specialHero);
      AddHeroToPartyAction.Apply(specialHero, MobileParty.MainParty);
      return "companion has been added.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_player_reputation_trait", "campaign")]
    public static string SetPlayerReputationTrait(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.set_player_reputation_trait [Trait] | [Number]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str1;
      int result;
      if (!int.TryParse(separatedNames[1], out result))
        return "Please enter a number\n" + str1;
      string str2 = separatedNames[0];
      foreach (TraitObject trait in (List<TraitObject>) TraitObject.All)
      {
        if (trait.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || trait.StringId == str2.Replace(" ", ""))
        {
          if (result < trait.MinValue || result > trait.MaxValue)
            return string.Format("Number must be between {0} and {1}.", (object) trait.MinValue, (object) trait.MaxValue);
          Hero.MainHero.SetTraitLevel(trait, result);
          Campaign.Current.PlayerTraitDeveloper.UpdateTraitXPAccordingToTraitLevels();
          return string.Format("Set {0} to {1}.", (object) trait.Name, (object) result);
        }
      }
      return "Trait not found\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_player_traits", "campaign")]
    public static string PrintPlayerTrait(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.print_player_traits\".";
      string str = "";
      foreach (TraitObject traitObject in (List<TraitObject>) TraitObject.All)
        str = str + traitObject.Name.ToString() + " Trait Level:  " + (object) Hero.MainHero.GetTraitLevel(traitObject) + " Trait Xp: " + (object) Campaign.Current.PlayerTraitDeveloper.GetPropertyValue((PropertyObject) traitObject) + "\n";
      return str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_horse", "campaign")]
    public static string AddHorse(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_horse [Number]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      int result = 1;
      if (!int.TryParse(strings[0], out result))
        return "Please enter a number\n" + str;
      if (result <= 0)
        return "Nothing added.";
      ItemObject itemObject = Items.All.FirstOrDefault<ItemObject>((Func<ItemObject, bool>) (x => x.IsMountable));
      PartyBase.MainParty.ItemRoster.AddToCounts(itemObject, result);
      return string.Format("Added {0} {1} to player inventory.", (object) result, (object) itemObject.Name);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("give_settlement_to_player", "campaign")]
    public static string GiveSettlementToPlayer(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string player1 = "Format is \"campaign.give_settlement_to_player [SettlementName/SettlementId]\nWrite \"campaign.give_settlement_to_player help\" to list available settlements.\nWrite \"campaign.give_settlement_to_player Calradia\" to give all settlements to player.";
      if (CampaignCheats.CheckParameters(strings, 0))
        return player1;
      string settlementName = CampaignCheats.ConcatenateString(strings);
      if (settlementName.ToLower() == "help")
      {
        string player2 = "" + "\n" + "Available settlements" + "\n" + "==============================" + "\n";
        foreach (Settlement objectType in (List<Settlement>) MBObjectManager.Instance.GetObjectTypeList<Settlement>())
          player2 = player2 + "Id: " + objectType.StringId + " Name: " + (object) objectType.Name + "\n";
        return player2;
      }
      string str = settlementName;
      MBReadOnlyList<Settlement> objectTypeList = MBObjectManager.Instance.GetObjectTypeList<Settlement>();
      if (settlementName.ToLower().Replace(" ", "") == "calradia")
      {
        foreach (Settlement settlement in (List<Settlement>) objectTypeList)
        {
          if (settlement.IsCastle || settlement.IsTown)
            ChangeOwnerOfSettlementAction.ApplyByDefault(Hero.MainHero, settlement);
        }
        return "You own all of Calradia now!";
      }
      Settlement settlement1 = CampaignCheats.GetSettlement(settlementName);
      if (settlement1 == null)
      {
        foreach (Settlement settlement2 in (List<Settlement>) objectTypeList)
        {
          if (settlement2.Name.ToString().Equals(str, StringComparison.InvariantCultureIgnoreCase))
          {
            settlement1 = settlement2;
            break;
          }
        }
      }
      if (settlement1 == null)
        return "Given settlement name or id could not be found.\n" + player1;
      if (settlement1.IsVillage)
        return "Settlement must be castle or town.";
      ChangeOwnerOfSettlementAction.ApplyByDefault(Hero.MainHero, settlement1);
      return settlement1.Name.ToString() + " has been given to the player.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("give_settlement_to_kingdom", "campaign")]
    public static string GiveSettlementToKingdom(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string kingdom1 = "Format is \"campaign.give_settlement_to_kingdom [SettlementName] | [KingdomName]";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return kingdom1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return kingdom1;
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[0]);
      if (settlement == null)
        return "Given settlement name could not be found.\n" + kingdom1;
      if (settlement.IsVillage)
        settlement = settlement.Village.Bound;
      Kingdom kingdom2 = CampaignCheats.GetKingdom(separatedNames[1]);
      if (kingdom2 == null)
        return "Given kingdom could not be found.\n" + kingdom1;
      if (settlement.MapFaction == kingdom2)
        return "Kingdom already owns the settlement.";
      if (settlement.IsVillage)
        return "Settlement must be castle or town.";
      ChangeOwnerOfSettlementAction.ApplyByDefault(kingdom2.Leader, settlement);
      return settlement.Name.ToString() + string.Format(" has been given to {0}.", (object) kingdom2.Leader.Name);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_power_to_notable", "campaign")]
    public static string AddPowerToNotable(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string notable = "Format is campaign.add_power_to_notable [HeroName] | [Number]";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return notable;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return notable;
      int result;
      if (!int.TryParse(separatedNames[1], out result) || result <= 0)
        return "Please enter a positive number\n" + notable;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      if (hero == null)
        return "Hero is not found\n" + notable;
      if (!hero.IsNotable)
        return "Hero is not a notable.";
      hero.AddPower((float) result);
      return string.Format("{0} power is {1}", (object) hero.Name, (object) hero.Power);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("kill_hero", "campaign")]
    public static string KillHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.kill_hero [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero is not found: " + heroName.ToLower() + "\n" + str;
      if (!hero.IsAlive)
        return "Hero " + heroName + " is already dead.";
      if (!hero.CanDie(KillCharacterAction.KillCharacterActionDetail.Murdered))
        return "Hero cant die!";
      if (hero == Hero.MainHero)
        return "Hero " + heroName + " is main hero. Use [campaingn.make_main_hero_ill] to kill main hero.";
      KillCharacterAction.ApplyByMurder(hero);
      return "Hero " + heroName.ToLower() + " is killed.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("make_main_hero_ill", "campaign")]
    private static string KillMainHero(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      Campaign.Current.MainHeroIllDays = 500;
      Hero.MainHero.HitPoints = Hero.MainHero.CharacterObject.MaxHitPoints();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_character_feats", "campaign")]
    public static string PrintCharacterFeats(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.print_character_feats [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      string str2 = "";
      if (hero == null)
        return "Hero is not found: " + heroName + "\n" + str1;
      foreach (FeatObject feat in (List<FeatObject>) FeatObject.All)
        str2 = str2 + "\n" + (object) feat.Name + " :" + hero.Culture.HasFeat(feat).ToString();
      return str2;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("make_hero_fugitive", "campaign")]
    public static string MakeHeroFugitive(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.make_hero_fugitive [HeroName]";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero is not found: " + heroName.ToLower() + "\n" + str;
      if (!hero.IsAlive)
        return "Hero " + heroName + " is dead.";
      if (hero.PartyBelongedTo != null)
      {
        if (hero.PartyBelongedTo == MobileParty.MainParty)
          return "You cannot be fugitive when you are in your main party.";
        DestroyPartyAction.Apply((PartyBase) null, hero.PartyBelongedTo);
      }
      MakeHeroFugitiveAction.Apply(hero);
      return "Hero " + heroName.ToLower() + " is now fugitive.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("leave_faction", "campaign")]
    public static string LeaveFaction(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.leave_faction\".";
      if (Hero.MainHero.MapFaction == Clan.PlayerClan)
        return "Function execution failed.";
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
      {
        Hero heroObject = Game.Current.ObjectManager.GetObject<CharacterObject>(!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "empire") ? (!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "sturgia") ? (!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "aserai") ? (!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "vlandia") ? (!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "battania") ? (!(Hero.MainHero.MapFaction.Name.ToString().ToLower() == "khuzait") ? "lord_1_1" : "lord_6_1") : "lord_5_1") : "lord_4_1") : "lord_3_1") : "lord_2_1") : "lord_1_1").HeroObject;
        if (!Hero.MainHero.MapFaction.IsKingdomFaction)
          (Hero.MainHero.MapFaction as Clan).SetLeader(heroObject);
        else
          ChangeRulingClanAction.Apply(Hero.MainHero.MapFaction as Kingdom, heroObject.Clan);
      }
      ChangeKingdomAction.ApplyByLeaveKingdom(Hero.MainHero.Clan);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("lead_your_faction", "campaign")]
    public static string LeadYourFaction(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.lead_your_faction\".";
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
        return "Function execution failed.";
      if (Hero.MainHero.MapFaction.IsKingdomFaction)
        ChangeRulingClanAction.Apply(Hero.MainHero.MapFaction as Kingdom, Clan.PlayerClan);
      else
        (Hero.MainHero.MapFaction as Clan).SetLeader(Hero.MainHero);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_heroes_suitable_for_marriage", "campaign")]
    public static string PrintHeroesSuitableForMarriage(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"print_heroes_suitable_for_marriage\".";
      List<Hero> heroList1 = new List<Hero>();
      List<Hero> heroList2 = new List<Hero>();
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        foreach (Hero lord in (List<Hero>) kingdom.Lords)
        {
          if (lord.CanMarry())
          {
            if (lord.IsFemale)
              heroList1.Add(lord);
            else
              heroList2.Add(lord);
          }
        }
      }
      string str1 = "Maidens:\n";
      string str2 = "Suitors:\n";
      foreach (Hero hero in heroList1)
      {
        TextObject textObject = hero.PartyBelongedTo == null ? TextObject.Empty : hero.PartyBelongedTo.Name;
        str1 = str1 + "Name: " + (object) hero.Name + " --- Clan: " + (object) hero.Clan + " --- Party:" + (object) textObject + "\n";
      }
      foreach (Hero hero in heroList2)
      {
        TextObject textObject = hero.PartyBelongedTo == null ? TextObject.Empty : hero.PartyBelongedTo.Name;
        str2 = str2 + "Name: " + (object) hero.Name + " --- Clan: " + (object) hero.Clan + " --- Party:" + (object) textObject + "\n";
      }
      return str1 + "\n" + str2;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("marry_player_with_hero", "campaign")]
    public static string MarryPlayerWithHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.marry_player_with_hero [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      if (!Campaign.Current.Models.MarriageModel.IsSuitableForMarriage(Hero.MainHero))
        return "Main hero is not suitable for marriage";
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero is not found: " + heroName.ToLower() + "\n" + str;
      MarriageModel marriageModel = Campaign.Current.Models.MarriageModel;
      if (marriageModel.IsCoupleSuitableForMarriage(Hero.MainHero, hero))
      {
        MarriageAction.Apply(Hero.MainHero, hero);
        return "Success";
      }
      if (!marriageModel.IsSuitableForMarriage(hero))
        return string.Format("Hero: {0} is not suitable for marriage.", (object) hero.Name);
      if (!marriageModel.IsClanSuitableForMarriage(hero.Clan))
        return string.Format("{0}'s clan is not suitable for marriage.", (object) hero.Name);
      if (!marriageModel.IsClanSuitableForMarriage(Hero.MainHero.Clan))
        return "Main hero's clan is not suitable for marriage.";
      if (Hero.MainHero.Clan?.Leader == Hero.MainHero && hero.Clan?.Leader == hero)
        return "Clan leaders are not suitable for marriage.";
      if (!hero.IsFemale)
        return "Hero is not female.";
      DefaultMarriageModel defaultMarriageModel = new DefaultMarriageModel();
      if ((bool) typeof (DefaultMarriageModel).GetMethod("AreHeroesRelated", BindingFlags.Instance | BindingFlags.NonPublic).Invoke((object) defaultMarriageModel, new object[2]
      {
        (object) Hero.MainHero,
        (object) hero
      }))
        return "Heroes are related.";
      Hero courtedHeroInOtherClan1 = Romance.GetCourtedHeroInOtherClan(Hero.MainHero, hero);
      if (courtedHeroInOtherClan1 != null && courtedHeroInOtherClan1 != hero)
        return string.Format("{0} has courted {1}.", (object) courtedHeroInOtherClan1.Name, (object) Hero.MainHero.Name);
      Hero courtedHeroInOtherClan2 = Romance.GetCourtedHeroInOtherClan(hero, Hero.MainHero);
      if (courtedHeroInOtherClan2 != null && courtedHeroInOtherClan2 != Hero.MainHero)
        return string.Format("{0} has courted {1}.", (object) courtedHeroInOtherClan2.Name, (object) hero.Name);
      return "Marriage is not suitable between " + (object) Hero.MainHero.Name + " and " + (object) hero.Name + "\n";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("is_hero_suitable_for_marriage_with_player", "campaign")]
    public static string IsHeroSuitableForMarriageWithPlayer(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.is_hero_suitable_for_marriage_with_player [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero is not found: " + heroName.ToLower() + "\n" + str;
      return Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(Hero.MainHero, hero) ? "Marriage is suitable between " + (object) Hero.MainHero.Name + " and " + (object) hero.Name + "\n" : "Marriage is not suitable between " + (object) Hero.MainHero.Name + " and " + (object) hero.Name + "\n";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_player_vs_world_war", "campaign")]
    public static string StartPlayerVsWorldWar(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.start_player_vs_world_war\".";
      foreach (IFaction faction in Campaign.Current.Factions)
      {
        if ((faction != Clan.PlayerClan || faction != Hero.MainHero.MapFaction) && !faction.IsEliminated && (faction.IsKingdomFaction || faction.IsMinorFaction))
          DeclareWarAction.ApplyByDefault(faction, (IFaction) Clan.PlayerClan);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("start_player_vs_world_truce", "campaign")]
    public static string StartPlayerVsWorldTruce(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.start_player_vs_world_truce\".";
      foreach (IFaction faction in Campaign.Current.Factions)
      {
        if (faction != Clan.PlayerClan || faction != Hero.MainHero.MapFaction)
          MakePeaceAction.Apply(faction, (IFaction) Clan.PlayerClan);
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("create_player_kingdom", "campaign")]
    public static string CreatePlayerKingdom(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings) || !CampaignCheats.CheckParameters(strings, 0))
        return "Format is \"campaign.create_player_kingdom\".";
      Campaign.Current.KingdomManager.CreateKingdom(Clan.PlayerClan.Name, Clan.PlayerClan.InformalName, Clan.PlayerClan.Culture, Clan.PlayerClan);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("create_random_clan", "campaign")]
    public static string CreateRandomClan(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string randomClan = "Format is \"campaign.create_random_clan [KingdomName]\".";
      if (CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 0))
        return randomClan;
      Kingdom newKingdom = strings.Count <= 0 ? Kingdom.All.GetRandomElement<Kingdom>() : CampaignCheats.GetKingdom(CampaignCheats.ConcatenateString(strings));
      if (newKingdom == null)
        return "Kingdom is not valid!\n" + randomClan;
      CultureObject culture = newKingdom.Culture;
      Settlement settlement = newKingdom.Settlements.FirstOrDefault<Settlement>((Func<Settlement, bool>) (x => x.IsTown)) ?? newKingdom.Settlements.GetRandomElement<Settlement>() ?? Settlement.All.FirstOrDefault<Settlement>((Func<Settlement, bool>) (x => x.IsTown && x.Culture == culture));
      TextObject clanName = NameGenerator.Current.GenerateClanName(culture, settlement);
      Clan clan = Clan.CreateClan("test_clan_" + (object) Clan.All.Count);
      clan.InitializeClan(clanName, new TextObject("{=!}informal"), Kingdom.All.GetRandomElement<Kingdom>().Culture, Banner.CreateRandomClanBanner());
      CharacterObject template = culture.LordTemplates.FirstOrDefault<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == Occupation.Lord));
      if (template == null)
        return "Can't find a proper lord template.\n" + randomClan;
      Settlement bornSettlement = newKingdom.Settlements.GetRandomElement<Settlement>() ?? Settlement.All.FirstOrDefault<Settlement>((Func<Settlement, bool>) (x => x.IsTown && x.Culture == culture));
      Hero specialHero = HeroCreator.CreateSpecialHero(template, bornSettlement, clan, age: MBRandom.RandomInt(18, 36));
      specialHero.HeroDeveloper.InitializeHeroDeveloper();
      specialHero.ChangeState(Hero.CharacterStates.Active);
      clan.SetLeader(specialHero);
      ChangeKingdomAction.ApplyByJoinToKingdom(clan, newKingdom, false);
      EnterSettlementAction.ApplyForCharacterOnly(specialHero, settlement);
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, specialHero, 15000);
      return string.Format("{0} is added to {1}. Its leader is: {2}", (object) clan.Name, (object) newKingdom.Name, (object) specialHero.Name);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("join_kingdom", "campaign")]
    public static string JoinKingdom(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.join_kingdom[KingdomName / FirstTwoCharactersOfKingdomName]\".\nWrite \"campaign.join_kingdom help\" to list available Kingdoms.";
      if (CampaignCheats.CheckParameters(strings, 0))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings).Replace(" ", "");
      if (str2.ToLower() == "help")
      {
        string str3 = "" + "\n" + "Format is \"campaign.join_kingdom [KingdomName/FirstTwoCharacterOfKingdomName]\"." + "\n" + "Available Kingdoms" + "\n";
        foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
          str3 = str3 + "Kingdom name " + kingdom.Name.ToString() + "\n";
        return str3;
      }
      Kingdom newKingdom = (Kingdom) null;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom.Name.ToString().Equals(str2, StringComparison.OrdinalIgnoreCase))
        {
          newKingdom = kingdom;
          break;
        }
        if (str2.Length >= 2 && kingdom.Name.ToString().ToLower().Substring(0, 2).Equals(str2.ToLower().Substring(0, 2)))
        {
          newKingdom = kingdom;
          break;
        }
      }
      if (newKingdom == null)
        return "Kingdom is not found: " + str2 + "\n" + str1;
      if (Hero.MainHero.Clan.Kingdom == newKingdom)
        return "Already in kingdom";
      ChangeKingdomAction.ApplyByJoinToKingdom(Hero.MainHero.Clan, newKingdom);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("join_kingdom_as_mercenary", "campaign")]
    public static string JoinKingdomAsMercenary(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.join_kingdom_as_mercenary[KingdomName / FirstTwoCharactersOfKingdomName]\".\nWrite \"campaign.join_kingdom_as_mercenary help\" to list available Kingdoms.";
      if (CampaignCheats.CheckParameters(strings, 0))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings).Replace(" ", "");
      if (str2.ToLower() == "help")
      {
        string str3 = "" + "\n" + "Format is \"campaign.join_kingdom_as_mercenary [KingdomName/FirstTwoCharacterOfKingdomName]\"." + "\n" + "Available Kingdoms" + "\n";
        foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
          str3 = str3 + "Kingdom name " + kingdom.Name.ToString() + "\n";
        return str3;
      }
      Kingdom newKingdom = (Kingdom) null;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom.Name.ToString().Equals(str2, StringComparison.OrdinalIgnoreCase))
        {
          newKingdom = kingdom;
          break;
        }
        if (str2.Length >= 2 && kingdom.Name.ToString().ToLower().Substring(0, 2).Equals(str2.ToLower().Substring(0, 2)))
        {
          newKingdom = kingdom;
          break;
        }
      }
      if (newKingdom == null)
        return "Kingdom is not found: " + str2 + "\n" + str1;
      ChangeKingdomAction.ApplyByJoinFactionAsMercenary(Hero.MainHero.Clan, newKingdom);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_criminal_rating", "campaign")]
    public static string SetCriminalRating(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      int result = 0;
      if (CampaignCheats.CheckHelp(strings))
      {
        string str = "" + "\n" + "Format is \"campaign.set_criminal_rating [Faction] | [Gold]\"." + "\n" + "Available Factions" + "\n";
        foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
          str = str + "Faction name " + kingdom.Name.ToString() + "\n";
        foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
          str = str + "Faction name " + nonBanditFaction.Name.ToString() + "\n";
        return str;
      }
      string str1 = "Format is \"campaign.set_criminal_rating [FactionName] | [Value]\".\nWrite \"campaign.set_criminal_rating help\" to list available Factions.";
      if (CampaignCheats.CheckParameters(strings, 0))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2 || !int.TryParse(separatedNames[1], out result))
        return str1;
      string str2 = separatedNames[0];
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (nonBanditFaction.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          ChangeCrimeRatingAction.Apply((IFaction) nonBanditFaction, (float) result - nonBanditFaction.MainHeroCrimeRating);
          return "Success";
        }
      }
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (kingdom.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          ChangeCrimeRatingAction.Apply((IFaction) kingdom, (float) result - kingdom.MainHeroCrimeRating);
          return "Success";
        }
      }
      return "Faction is not found: " + str2 + "\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_criminal_ratings", "campaign")]
    public static string PrintCriminalRatings(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.print_criminal_ratings";
      string str1 = "";
      bool flag = true;
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if ((double) kingdom.MainHeroCrimeRating > 0.0)
        {
          str1 = str1 + (object) kingdom.Name + "   criminal rating: " + (object) kingdom.MainHeroCrimeRating + "\n";
          flag = false;
        }
      }
      string str2 = str1 + "-----------\n";
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if ((double) nonBanditFaction.MainHeroCrimeRating > 0.0)
        {
          str2 = str2 + (object) nonBanditFaction.Name + "   criminal rating: " + (object) nonBanditFaction.MainHeroCrimeRating + "\n";
          flag = false;
        }
      }
      return flag ? "You don't have any criminal rating." : str2;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_main_hero_age", "campaign")]
    public static string SetMainHeroAge(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_main_hero_age [Age]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      int result = 1;
      if (!int.TryParse(strings[0], out result))
        return "Please enter a number\n" + str;
      if (result < Campaign.Current.Models.AgeModel.HeroComesOfAge || result > Campaign.Current.Models.AgeModel.MaxAge)
        return string.Format("Age must be between {0} - {1}", (object) Campaign.Current.Models.AgeModel.HeroComesOfAge, (object) Campaign.Current.Models.AgeModel.MaxAge);
      Hero.MainHero.SetBirthDay(HeroHelper.GetRandomBirthDayForAge((float) result));
      return "Success";
    }

    public static bool MainPartyIsAttackable => CampaignCheats._mainPartyIsAttackable;

    [CommandLineFunctionality.CommandLineArgumentFunction("set_main_party_attackable", "campaign")]
    public static string SetMainPartyAttackable(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is campaign.set_main_party_attackable [1/0]\".";
      if (CampaignCheats.CheckHelp(strings) || !CampaignCheats.CheckParameters(strings, 1))
        return str;
      if (!(strings[0] == "0") && !(strings[0] == "1"))
        return "Wrong input.\n" + str;
      bool flag = strings[0] == "1";
      CampaignCheats._mainPartyIsAttackable = flag;
      return "Main party is" + (flag ? " " : " NOT ") + "attackable.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_morale_to_party", "campaign")]
    public static string AddMoraleToParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string party = "Format is \"campaign.add_morale_to_party [HeroName] | [Number]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return party;
      int result = 10;
      Hero hero = Hero.MainHero;
      string heroName = "";
      bool flag = false;
      if (CampaignCheats.CheckParameters(strings, 1))
      {
        if (!int.TryParse(strings[0], out result))
        {
          result = 10;
          heroName = strings[0];
          hero = CampaignCheats.GetHero(heroName);
          flag = true;
        }
      }
      else
      {
        List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
        if (separatedNames.Count != 2)
          return party;
        if (!int.TryParse(separatedNames[1], out result))
        {
          result = 100;
          heroName = separatedNames[0];
          hero = CampaignCheats.GetHero(heroName);
        }
        else
        {
          heroName = separatedNames[0];
          hero = CampaignCheats.GetHero(heroName);
        }
        flag = true;
      }
      if (hero != null)
      {
        MobileParty partyBelongedTo = hero.PartyBelongedTo;
        if (partyBelongedTo == null)
          return "Hero: " + heroName + " does not belonged to any party.\n" + party;
        float num1 = MBMath.ClampFloat(partyBelongedTo.RecentEventsMorale + (float) result, 0.0f, float.MaxValue);
        float num2 = num1 - partyBelongedTo.RecentEventsMorale;
        partyBelongedTo.RecentEventsMorale = num1;
        return string.Format("The base morale of {0}'s party changed by {1}.", (object) hero.Name, (object) num2);
      }
      return flag ? "Hero: " + heroName + " not found.\n" + party : "Wrong input.\n" + party;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("boost_cohesion_of_army", "campaign")]
    public static string BoostCohesionOfArmy(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"boost_cohesion_of_army [ArmyLeaderName]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      Hero hero = Hero.MainHero;
      Army army = hero.PartyBelongedTo.Army;
      if (!CampaignCheats.CheckParameters(strings, 0))
      {
        string heroName = CampaignCheats.ConcatenateString(strings.GetRange(0, strings.Count));
        hero = CampaignCheats.GetHero(heroName);
        if (hero == null)
          return "Hero: " + heroName + " not found.\n" + str;
        if (hero.PartyBelongedTo == null)
          return "Hero: " + heroName + " does not belong to any army.";
        army = hero.PartyBelongedTo.Army;
        if (army == null)
          return "Hero: " + heroName + " does not belong to any army.";
      }
      if (army == null)
        return "Wrong input.\n" + str;
      army.Cohesion = 100f;
      return string.Format("{0}'s army cohesion is boosted.", (object) hero.Name);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("boost_cohesion_of_all_armies", "campaign")]
    public static string BoostCohersionOfAllArmies(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"boost_cohersion_of_all_armies\".";
      if (!CampaignCheats.CheckParameters(strings, 0))
        return "Wrong input.\nFormat is \"boost_cohesion_of_all_armies\".";
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
      {
        if (mobileParty.Army != null)
          mobileParty.Army.Cohesion = 100f;
      }
      return "All armies cohesion are boosted.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_focus_points_to_hero", "campaign")]
    public static string AddFocusPointCheat(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_focus_points_to_hero [HeroName] | [PositiveNumber]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      bool flag1 = false;
      int num = 1;
      if (CampaignCheats.CheckParameters(strings, 0))
      {
        Hero.MainHero.HeroDeveloper.UnspentFocusPoints = MBMath.ClampInt(Hero.MainHero.HeroDeveloper.UnspentFocusPoints + 1, 0, int.MaxValue);
        Hero mainHero = Hero.MainHero;
        return string.Format("{0} focus points added to the {1}. ", (object) num, (object) mainHero.Name);
      }
      int result = 0;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      Hero hero;
      if (separatedNames.Count == 1)
      {
        bool flag2 = int.TryParse(separatedNames[0], out result);
        if (result <= 0 & flag2)
          return "Please enter a positive number\n" + str;
        Hero.MainHero.HeroDeveloper.UnspentFocusPoints = MBMath.ClampInt(Hero.MainHero.HeroDeveloper.UnspentFocusPoints + result, 0, int.MaxValue);
        hero = Hero.MainHero;
        flag1 = true;
        num = result;
      }
      else
      {
        if (separatedNames.Count != 2)
          return str;
        if (int.TryParse(separatedNames[1], out result))
        {
          hero = CampaignCheats.GetHero(separatedNames[0]);
          if (hero != null)
          {
            hero.HeroDeveloper.UnspentFocusPoints = MBMath.ClampInt(hero.HeroDeveloper.UnspentFocusPoints + result, 0, int.MaxValue);
            flag1 = true;
            num = result;
          }
        }
        else
        {
          hero = CampaignCheats.GetHero(separatedNames[0]);
          if (hero != null)
          {
            hero.HeroDeveloper.UnspentFocusPoints = MBMath.ClampInt(hero.HeroDeveloper.UnspentFocusPoints + 1, 0, int.MaxValue);
            flag1 = true;
          }
        }
      }
      return flag1 ? string.Format("{0} focus points added to the {1}. ", (object) num, (object) hero.Name) : "Hero is not found\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_attribute_points_to_hero", "campaign")]
    public static string AddAttributePointsCheat(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_attribute_points_to_hero [HeroName] | [PositiveNumber]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      bool flag1 = false;
      int num = 1;
      if (CampaignCheats.CheckParameters(strings, 0))
      {
        Hero.MainHero.HeroDeveloper.UnspentAttributePoints = MBMath.ClampInt(Hero.MainHero.HeroDeveloper.UnspentAttributePoints + 1, 0, int.MaxValue);
        Hero mainHero = Hero.MainHero;
        return string.Format("{0} attribute points added to the {1}. ", (object) num, (object) mainHero.Name);
      }
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      Hero hero;
      if (separatedNames.Count == 1)
      {
        int result;
        bool flag2 = int.TryParse(separatedNames[0], out result);
        if (result <= 0 || !flag2)
          return "Please enter a positive number\n" + str;
        Hero.MainHero.HeroDeveloper.UnspentAttributePoints = MBMath.ClampInt(Hero.MainHero.HeroDeveloper.UnspentAttributePoints + result, 0, int.MaxValue);
        hero = Hero.MainHero;
        flag1 = true;
        num = result;
      }
      else
      {
        if (separatedNames.Count != 2)
          return str;
        int result;
        if (int.TryParse(separatedNames[1], out result))
        {
          hero = CampaignCheats.GetHero(separatedNames[1]);
          if (hero != null)
          {
            hero.HeroDeveloper.UnspentAttributePoints = MBMath.ClampInt(hero.HeroDeveloper.UnspentAttributePoints + result, 0, int.MaxValue);
            flag1 = true;
            num = result;
          }
        }
        else
        {
          hero = CampaignCheats.GetHero(separatedNames[0]);
          if (hero != null)
          {
            hero.HeroDeveloper.UnspentAttributePoints = MBMath.ClampInt(hero.HeroDeveloper.UnspentAttributePoints + 1, 0, int.MaxValue);
            flag1 = true;
          }
        }
      }
      return flag1 ? string.Format("{0} attribute points added to the {1}. ", (object) num, (object) hero.Name) : "Hero is not found\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_tournaments", "campaign")]
    public static string PrintSettlementsWithTournament(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      if (!Campaign.Current.IsDay)
        return "Cant print tournaments. Wait day light.";
      string str = "";
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        if (Campaign.Current.TournamentManager.GetTournamentGame(allTown) != null)
          str = str + (object) allTown.Name + "\n";
      }
      return str;
    }

    public static string ConvertListToMultiLine(List<string> strings)
    {
      string multiLine = "";
      foreach (string str in strings)
        multiLine = multiLine + str + "\n";
      return multiLine;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_all_issues", "campaign")]
    public static string PrintAllIssues(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      string str = "Total issue count : " + (object) Campaign.Current.IssueManager.Issues.Count + "\n";
      int num = 0;
      foreach (KeyValuePair<Hero, IssueBase> issue in Campaign.Current.IssueManager.Issues)
        str = str + (object) ++num + ") " + (object) issue.Value.Title + ", " + (object) issue.Key + ": " + (object) issue.Value.IssueSettlement + "\n";
      return str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_issues", "campaign")]
    public static string PrintIssues(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      string str = "";
      Dictionary<Type, string> dictionary = new Dictionary<Type, string>();
      foreach (KeyValuePair<Hero, IssueBase> issue in Campaign.Current.IssueManager.Issues)
      {
        if (!dictionary.ContainsKey(issue.Value.GetType()))
          dictionary.Add(issue.Value.GetType(), issue.Value.Title.ToString() + ", " + (object) issue.Key + ": " + (object) issue.Value.IssueSettlement + "\n");
      }
      foreach (KeyValuePair<Type, string> keyValuePair in dictionary)
        str += keyValuePair.Value;
      return str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("give_workshop_to_player", "campaign")]
    public static string GiveWorkshopToPlayer(List<string> strings)
    {
      string player1 = "Format is \"campaign.give_workshop_to_player [SettlementName] | [workshop_no]\".";
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return player1;
      if (CampaignCheats.CheckHelp(strings) || separatedNames.Count != 2)
      {
        if (Settlement.CurrentSettlement == null)
          return "You need to be in a settlement to see the workshops available.";
        if (Settlement.CurrentSettlement.Town == null)
          return "Settlement should be town\n";
        if (separatedNames.Count == 1)
        {
          int result;
          if (!int.TryParse(strings[0], out result))
            return "Please enter a number\n" + player1;
          if (result <= 0 || result >= Settlement.CurrentSettlement.Town.Workshops.Length)
            return string.Format("There is no workshop with no {0}.", (object) result);
          Workshop workshop = Settlement.CurrentSettlement.Town.Workshops[result];
          ChangeOwnerOfWorkshopAction.ApplyByPlayerBuying(workshop);
          return string.Format("Gave {0} to {1}", (object) workshop.WorkshopType.Name, (object) Hero.MainHero.Name);
        }
        string player2 = player1;
        for (int index = 0; index < Settlement.CurrentSettlement.Town.Workshops.Length; ++index)
        {
          Workshop workshop = Settlement.CurrentSettlement.Town.Workshops[index];
          player2 = player2 + "\n" + (object) index + " : " + (object) workshop.Name + " - owner : " + (workshop.Owner != null ? (object) workshop.Owner.Name.ToString() : (object) "");
          if (workshop.WorkshopType.IsHidden)
            player2 += "(hidden)";
        }
        return player2;
      }
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[0]);
      if (settlement == null || !settlement.IsTown)
        return "Settlement should be a town.";
      int result1;
      if (!int.TryParse(separatedNames[1], out result1))
        return "Please enter a number\n" + player1;
      if (result1 < 0 || result1 >= settlement.Town.Workshops.Length)
        return string.Format("There is no workshop with no {0}.", (object) result1);
      Workshop workshop1 = settlement.Town.Workshops[result1];
      if (workshop1.WorkshopType.IsHidden)
        return "Workshop is hidden.";
      ChangeOwnerOfWorkshopAction.ApplyByPlayerBuying(workshop1);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("conceive_child", "campaign")]
    public static string MakePregnant(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (Hero.MainHero.Spouse == null)
      {
        Hero secondHero = Hero.AllAliveHeroes.FirstOrDefault<Hero>((Func<Hero, bool>) (t => t != Hero.MainHero && Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(Hero.MainHero, t)));
        if (secondHero == null)
          return "error";
        MarriageAction.Apply(Hero.MainHero, secondHero);
        if ((Hero.MainHero.IsFemale ? (!Hero.MainHero.IsPregnant ? 1 : 0) : (!Hero.MainHero.Spouse.IsPregnant ? 1 : 0)) == 0)
          return "You are expecting a child already.";
        MakePregnantAction.Apply(Hero.MainHero.IsFemale ? Hero.MainHero : Hero.MainHero.Spouse);
        return "Success";
      }
      if ((Hero.MainHero.IsFemale ? (!Hero.MainHero.IsPregnant ? 1 : 0) : (!Hero.MainHero.Spouse.IsPregnant ? 1 : 0)) == 0)
        return "You are expecting a child already.";
      MakePregnantAction.Apply(Hero.MainHero.IsFemale ? Hero.MainHero : Hero.MainHero.Spouse);
      return "Success";
    }

    public static Hero GenerateChild(Hero hero, bool isFemale, CultureObject culture)
    {
      if (hero.Spouse == null)
      {
        List<Hero> list = Hero.AllAliveHeroes.ToList<Hero>();
        list.Shuffle<Hero>();
        Hero secondHero = list.FirstOrDefault<Hero>((Func<Hero, bool>) (t => t != hero && Campaign.Current.Models.MarriageModel.IsCoupleSuitableForMarriage(hero, t)));
        if (secondHero != null)
        {
          MarriageAction.Apply(hero, secondHero);
          if ((hero.IsFemale ? (!hero.IsPregnant ? 1 : 0) : (!hero.Spouse.IsPregnant ? 1 : 0)) != 0)
            MakePregnantAction.Apply(hero.IsFemale ? hero : hero.Spouse);
        }
      }
      Hero mother = hero.IsFemale ? hero : hero.Spouse;
      Hero spouse = mother.Spouse;
      Hero child = HeroCreator.DeliverOffSpring(mother, spouse, isFemale);
      child.Culture = culture;
      mother.IsPregnant = false;
      return child;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_prisoner_to_party", "campaign")]
    public static string AddPrisonerToParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string party = "Format is \"campaign.add_prisoner_to_party [PrisonerName] | [CapturerName]\".";
      if (CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1))
        return party;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return party;
      string heroName1 = separatedNames[0].Trim();
      string heroName2 = separatedNames[1].Trim();
      Hero hero1 = CampaignCheats.GetHero(heroName1);
      Hero hero2 = CampaignCheats.GetHero(heroName2);
      if (hero1 == null || hero2 == null)
        return "Can't find one of the heroes.\n" + party;
      if (!hero2.IsActive || hero2.PartyBelongedTo == null)
        return "Capturer hero is not active!";
      if (!hero1.IsActive || hero1.IsHumanPlayerCharacter || hero1.Occupation != Occupation.Lord && hero1.Occupation != Occupation.Wanderer)
        return "Hero can't be taken as a prisoner!";
      if (!FactionManager.IsAtWarAgainstFaction(hero1.MapFaction, hero2.MapFaction))
        return "Factions are not at war!";
      if (hero1.PartyBelongedTo != null)
      {
        if (hero1.PartyBelongedTo.MapEvent != null)
          return "prisoners party shouldn't be in a map event.";
        if (hero1.PartyBelongedTo.LeaderHero == hero1)
          DestroyPartyAction.Apply((PartyBase) null, hero1.PartyBelongedTo);
        else
          hero1.PartyBelongedTo.MemberRoster.RemoveTroop(hero1.CharacterObject);
      }
      if (hero1.IsPrisoner)
        EndCaptivityAction.ApplyByEscape(hero1);
      if (hero1.CurrentSettlement != null)
        LeaveSettlementAction.ApplyForCharacterOnly(hero1);
      if (hero2.IsHumanPlayerCharacter)
        hero1.SetHasMet();
      TakePrisonerAction.Apply(hero2.PartyBelongedTo.Party, hero1);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_random_prisoner_hero", "campaign")]
    public static string AddRandomPrisonerHeroCheat(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.add_random_prisoner_hero\".";
      if (!Hero.MainHero.IsPartyLeader)
        return string.Format("{0} is not a party leader.", (object) Hero.MainHero.Name);
      Hero elementWithPredicate = Hero.AllAliveHeroes.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => !x.CharacterObject.IsPlayerCharacter && x.IsActive && x.PartyBelongedTo == null && !x.IsPrisoner && x.CharacterObject.Occupation == Occupation.Lord));
      if (elementWithPredicate == null)
        return "There is not any available heroes right now.";
      if (elementWithPredicate.CurrentSettlement != null)
        LeaveSettlementAction.ApplyForCharacterOnly(elementWithPredicate);
      int num = elementWithPredicate.PartyBelongedTo?.LeaderHero == elementWithPredicate ? 1 : 0;
      MobileParty partyBelongedTo = elementWithPredicate.PartyBelongedTo;
      TakePrisonerAction.Apply(PartyBase.MainParty, elementWithPredicate);
      elementWithPredicate.SetHasMet();
      if (num != 0)
      {
        DisbandPartyAction.StartDisband(partyBelongedTo);
        partyBelongedTo.IsDisbanding = true;
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("control_party_ai_by_cheats", "campaign")]
    public static string ControlPartyAIByCheats(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.control_party_ai_by_cheats [HeroName] | [0|1] \".";
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || separatedNames.Count == 1 || separatedNames.Count != 2 || separatedNames[1] != "0" && separatedNames[1] != "1")
        return str;
      string resultDescription;
      CampaignCheats.ControlPartyAIByCheatsInternal(CampaignCheats.GetHero(separatedNames[0]), separatedNames[1] == "1", out resultDescription);
      return resultDescription;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("ai_siege_settlement", "campaign")]
    public static string AISiegeSettlement(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.ai_siege_settlement [HeroName] | [SettlementName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 1))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[1]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (settlement == null)
        return "Settlement is not found\n" + str;
      if (!settlement.IsFortification)
        return "Settlement is not a fortification (Town or Castle)";
      if (hero.MapFaction == settlement.MapFaction)
        return string.Format("Hero Faction: {0} and Settlement Faction: {1} are the same", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      if (!FactionManager.IsAtWarAgainstFaction(hero.MapFaction, settlement.MapFaction))
        return string.Format("Hero Faction: {0} and Settlement Faction: {1} are not at war, you can use \"campaign.declare_war\" cheat", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      string resultDescription;
      if (!CampaignCheats.ControlPartyAIByCheatsInternal(hero, true, out resultDescription))
        return resultDescription;
      SetPartyAiAction.GetActionForBesiegingSettlement(hero.PartyBelongedTo, settlement);
      return resultDescription + "\nParty AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("ai_raid_village", "campaign")]
    public static string AIRaidVillage(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.ai_raid_village [HeroName] | [VillageName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 1))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[1]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (settlement == null)
        return "Settlement is not found\n" + str;
      if (!settlement.IsVillage)
        return "Settlement is not a village.";
      if (hero.MapFaction == settlement.MapFaction)
        return string.Format("Hero Faction: {0} and Village Faction: {1} are the same", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      if (!FactionManager.IsAtWarAgainstFaction(hero.MapFaction, settlement.MapFaction))
        return string.Format("Hero Faction: {0} and Village Faction: {1} are not at war, you can use \"campaign.declare_war\" cheat", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      if (settlement.IsUnderRaid)
        return "Village is already under raid.";
      string resultDescription;
      if (!CampaignCheats.ControlPartyAIByCheatsInternal(hero, true, out resultDescription))
        return resultDescription;
      SetPartyAiAction.GetActionForRaidingSettlement(hero.PartyBelongedTo, settlement);
      return resultDescription + "\nParty AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("ai_attack_party", "campaign")]
    public static string AIAttackParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.ai_attack_party [AttackerHeroName] | [HeroName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 1))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Hero hero1 = CampaignCheats.GetHero(separatedNames[0]);
      Hero hero2 = CampaignCheats.GetHero(separatedNames[1]);
      if (hero1 == null || hero2 == null)
        return "Hero is not found\n" + str;
      if (hero2.PartyBelongedTo == null)
        return "Second hero is not in a party";
      if (hero1.MapFaction == hero2.MapFaction)
        return string.Format("Attacker Hero Faction: {0} and Other Hero Faction: {1} are the same", (object) hero1.MapFaction.Name, (object) hero2.MapFaction.Name);
      if (!FactionManager.IsAtWarAgainstFaction(hero1.MapFaction, hero2.MapFaction))
        return string.Format("Attacker Hero Faction: {0} and Other Hero Faction: {1} are not at war, you can use \"campaign.declare_war\" cheat", (object) hero1.MapFaction.Name, (object) hero2.MapFaction.Name);
      string resultDescription;
      if (!CampaignCheats.ControlPartyAIByCheatsInternal(hero1, true, out resultDescription))
        return resultDescription;
      SetPartyAiAction.GetActionForEngagingParty(hero1.PartyBelongedTo, hero2.PartyBelongedTo);
      return resultDescription + "\nParty AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("ai_defend_settlement", "campaign")]
    public static string AIDefendSettlement(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.ai_defend_settlement [HeroName] | [SettlementName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 1))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[1]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (settlement == null)
        return "Settlement is not found\n" + str;
      if (FactionManager.IsAtWarAgainstFaction(hero.MapFaction, settlement.MapFaction))
        return string.Format("Hero Faction: {0} and Settlement Faction: {1} are at war.", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      if (!settlement.IsUnderRaid && !settlement.IsUnderSiege)
        return "Settlement is not under siege nor raid";
      string resultDescription;
      if (!CampaignCheats.ControlPartyAIByCheatsInternal(hero, true, out resultDescription))
        return resultDescription;
      SetPartyAiAction.GetActionForDefendingSettlement(hero.PartyBelongedTo, settlement);
      return resultDescription + "\nParty AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("ai_goto_settlement", "campaign")]
    public static string AIGotoSettlement(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.ai_goto_settlement [HeroName] | [SettlementName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings) || CampaignCheats.CheckParameters(strings, 1))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 2)
        return str;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      Settlement settlement = CampaignCheats.GetSettlement(separatedNames[1]);
      if (hero == null)
        return "Hero is not found\n" + str;
      if (settlement == null)
        return "Settlement is not found\n" + str;
      if (FactionManager.IsAtWarAgainstFaction(hero.MapFaction, settlement.MapFaction))
        return string.Format("Hero Faction: {0} and Settlement Faction: {1} are at war", (object) hero.MapFaction.Name, (object) settlement.MapFaction.Name);
      string resultDescription;
      if (!CampaignCheats.ControlPartyAIByCheatsInternal(hero, true, out resultDescription))
        return resultDescription;
      SetPartyAiAction.GetActionForVisitingSettlement(hero.PartyBelongedTo, settlement);
      return resultDescription + "\nParty AI can be enabled again by using \"campaign.control_party_ai_by_cheats\"\nSuccess";
    }

    public static List<string> GetSeparatedNames(List<string> strings, string separator)
    {
      List<string> separatedNames = new List<string>();
      List<int> intList = new List<int>(strings.Count);
      for (int index = 0; index < strings.Count; ++index)
      {
        if (strings[index] == separator)
          intList.Add(index);
      }
      intList.Add(strings.Count);
      int index1 = 0;
      for (int index2 = 0; index2 < intList.Count; ++index2)
      {
        int num = intList[index2];
        string str = CampaignCheats.ConcatenateString(strings.GetRange(index1, num - index1));
        index1 = num + 1;
        separatedNames.Add(str);
      }
      return separatedNames;
    }

    private static bool ControlPartyAIByCheatsInternal(
      Hero hero,
      bool enable,
      out string resultDescription)
    {
      if (hero == null)
      {
        resultDescription = "Hero is not found";
        return false;
      }
      if (hero == Hero.MainHero)
      {
        resultDescription = "Hero cannot be MainHero";
        return false;
      }
      MobileParty partyBelongedTo = hero.PartyBelongedTo;
      if (partyBelongedTo == null)
      {
        resultDescription = "Hero is not part of a party";
        return false;
      }
      if (partyBelongedTo.Army != null && partyBelongedTo.Army.LeaderParty != partyBelongedTo)
      {
        resultDescription = "Party AI cannot be changed while party is part of an army and not the leader of the army";
        return false;
      }
      partyBelongedTo.Ai.SetDoNotMakeNewDecisions(enable);
      resultDescription = enable ? string.Format("Party AI of {0} is controlled by cheats", (object) hero) : string.Format("Party AI of {0} isn't controlled by cheats", (object) hero);
      return true;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("clear_settlement_defense", "campaign")]
    public static string ClearSettlementDefense(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.clear_settlement_defense [SettlementName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      Settlement settlement = CampaignCheats.GetSettlement(CampaignCheats.ConcatenateString(strings.GetRange(0, strings.Count)));
      if (settlement == null)
        return "Settlement is not found\n" + str;
      settlement.Militia = 0.0f;
      MobileParty garrisonParty = settlement.IsFortification ? settlement.Town.GarrisonParty : (MobileParty) null;
      if (garrisonParty != null)
        DestroyPartyAction.Apply((PartyBase) null, garrisonParty);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_party_prisoners", "campaign")]
    public static string PrintPartyPrisoners(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.print_party_prisoners [PartyName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str1;
      string str2 = CampaignCheats.ConcatenateString(strings);
      foreach (MobileParty mobileParty in (List<MobileParty>) MobileParty.All)
      {
        if (string.Equals(str2.Replace(" ", ""), mobileParty.Name.ToString().Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          string str3 = "";
          foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) mobileParty.PrisonRoster.GetTroopRoster())
            str3 = str3 + (object) troopRosterElement.Character.Name + " count: " + (object) mobileParty.PrisonRoster.GetTroopCount(troopRosterElement.Character) + "\n";
          return string.IsNullOrEmpty(str3) ? "There is not any prisoners in the party right now." : str3;
        }
      }
      return "Party is not found: " + str2 + "\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_prisoners_xp", "campaign")]
    public static string AddPrisonersXp(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_prisoners_xp [Amount]\".";
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      int result = 1;
      if (!int.TryParse(strings[0], out result) || result < 1)
        return "Please enter a positive number\n" + str;
      for (int index = 0; index < MobileParty.MainParty.PrisonRoster.Count; ++index)
      {
        MobileParty.MainParty.PrisonRoster.SetElementXp(index, MobileParty.MainParty.PrisonRoster.GetElementXp(index) + result);
        InformationManager.DisplayMessage(new InformationMessage("[DEBUG] " + (object) result + " xp given to " + (object) MobileParty.MainParty.PrisonRoster.GetElementCopyAtIndex(index).Character.Name));
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_settlement_variable", "campaign")]
    public static string SetSettlementVariable(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.set_settlement_variable [SettlementName/SettlementID] | [VariableName] | [Value]\". Available variables:\nProsperity\nSecurity\nFood\nLoyalty\nMilitia\nHearth";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckParameters(strings, 2) || CampaignCheats.CheckHelp(strings))
        return str;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count != 3)
        return str;
      string lower1 = separatedNames[1].ToLower();
      string lower2 = separatedNames[2].ToLower();
      string settlementName = separatedNames[0];
      Settlement first = Settlement.FindFirst((Func<Settlement, bool>) (x => string.Compare(x.Name.ToString().Replace(" ", ""), settlementName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase) == 0));
      if (first == null)
        return "Settlement is not found: " + settlementName + "\n" + str;
      bool flag = false;
      if (first.IsVillage)
      {
        if (lower1.Equals("hearth") || lower1.Equals("militia"))
          flag = true;
      }
      else if (lower1.Equals("prosperity") || lower1.Equals("militia") || lower1.Equals("security") || lower1.Equals("loyalty") || lower1.Equals("food"))
        flag = true;
      if (!flag)
        return "Settlement don't have variable: " + lower1;
      float result = -333f;
      if (!float.TryParse(lower2, out result))
        return "Please enter a number\n" + str;
      switch (lower1.Replace(" ", ""))
      {
        case "prosperity":
          first.Town.Prosperity = result;
          break;
        case "militia":
          first.Militia = result;
          break;
        case "hearth":
          first.Village.Hearth = result;
          break;
        case "security":
          first.Town.Security = result;
          break;
        case "loyalty":
          first.Town.Loyalty = result;
          break;
        case "food":
          first.Town.FoodStocks = result;
          break;
        default:
          return "Invalid variable: " + lower1 + "\n" + str;
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_hero_trait", "campaign")]
    public static string SetHeroTrait(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.set_hero_trait [HeroName] | [Trait]  | [Value]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str1;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count < 3)
        return str1;
      if (!int.TryParse(separatedNames[2], out int _))
        return "Please enter a number\n" + str1;
      Hero hero = CampaignCheats.GetHero(separatedNames[0]);
      if (hero == null)
        return "Hero: " + separatedNames[0] + " not found.\n" + str1;
      int result;
      if (int.TryParse(separatedNames[2], out result))
      {
        string str2 = separatedNames[1];
        foreach (TraitObject trait in (List<TraitObject>) TraitObject.All)
        {
          if (trait.Name.ToString().Replace(" ", "").Equals(str2.Replace(" ", ""), StringComparison.InvariantCultureIgnoreCase) || trait.StringId == str2.Replace(" ", ""))
          {
            int traitLevel = hero.GetTraitLevel(trait);
            if (result < trait.MinValue || result > trait.MaxValue)
              return string.Format("Number must be between {0} and {1}.", (object) trait.MinValue, (object) trait.MaxValue);
            hero.SetTraitLevel(trait, result);
            if (hero == Hero.MainHero)
            {
              Campaign.Current.PlayerTraitDeveloper.UpdateTraitXPAccordingToTraitLevels();
              CampaignEventDispatcher.Instance.OnPlayerTraitChanged(trait, traitLevel);
            }
            Campaign.Current.PlayerTraitDeveloper.UpdateTraitXPAccordingToTraitLevels();
            CampaignEventDispatcher.Instance.OnPlayerTraitChanged(trait, traitLevel);
            return string.Format("{0} 's {1} trait has been set to {2}.", (object) separatedNames[0], (object) trait.Name, (object) result);
          }
        }
      }
      return "Trait not found.\n" + str1;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_hero_traits", "campaign")]
    public static string PrintHeroTraits(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckParameters(strings, 0))
        return "Format is \"campaign.print_hero_traits [HeroName]\".";
      string heroName = CampaignCheats.ConcatenateString(strings);
      Hero hero = CampaignCheats.GetHero(heroName);
      if (hero == null)
        return "Hero: " + heroName + " not found.\nFormat is \"campaign.print_hero_traits [HeroName]\".";
      string str = (string) null;
      foreach (TraitObject trait in (List<TraitObject>) TraitObject.All)
        str = str + (object) trait.Name + " " + hero.GetTraitLevel(trait).ToString() + "\n";
      return str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("remove_militas_from_settlement", "campaign")]
    public static string RemoveMilitiasFromSettlement(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.remove_militas_from_settlement [SettlementName]\".";
      string concatenated = CampaignCheats.ConcatenateString(strings);
      Settlement settlement = Settlement.FindFirst((Func<Settlement, bool>) (x => string.Compare(x.Name.ToString().Replace(" ", ""), concatenated, StringComparison.OrdinalIgnoreCase) == 0));
      if (settlement == null)
        return "Settlement is not found: " + concatenated;
      if (settlement.Party.MapEvent != null)
        return "Settlement, " + concatenated + " is in a MapEvent, try later to remove them";
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      foreach (MobileParty mobileParty in MobileParty.All.Where<MobileParty>((Func<MobileParty, bool>) (x => x.IsMilitia && x.CurrentSettlement == settlement)))
      {
        if (mobileParty.MapEvent != null)
          return "Milita in " + concatenated + " are in a MapEvent, try later to remove them";
        mobilePartyList.Add(mobileParty);
      }
      foreach (MobileParty mobileParty in mobilePartyList)
        mobileParty.RemoveParty();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("cancel_quest", "campaign")]
    public static string CancelQuestCheat(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.cancel_quest [quest name]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      string source = "";
      for (int index = 0; index < strings.Count; ++index)
      {
        source += strings[index];
        if (index + 1 != strings.Count)
          source += " ";
      }
      if (source.IsEmpty<char>())
        return str;
      QuestBase questBase = (QuestBase) null;
      int num = 0;
      foreach (QuestBase quest in (List<QuestBase>) Campaign.Current.QuestManager.Quests)
      {
        if (source.Replace(" ", "").Equals(quest.Title.ToString().Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
        {
          ++num;
          if (num == 1)
            questBase = quest;
        }
      }
      if (questBase == null)
        return "Quest not found.\n" + str;
      if (num > 1)
        return "There are more than one quest with the name: " + source;
      questBase.CompleteQuestWithCancel(new TextObject("{=!}Quest is canceled by cheat."));
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("kick_companion", "campaign")]
    public static string KickAllCompanionsFromParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.kick_companion [CompanionName] or [all](kicks all companions) or [noargument](kicks first companion if any) \".";
      if (CampaignCheats.CheckHelp(strings))
        return str;
      IEnumerable<TroopRosterElement> source = MobileParty.MainParty.MemberRoster.GetTroopRoster().Where<TroopRosterElement>((Func<TroopRosterElement, bool>) (h => h.Character != null && h.Character.IsHero && h.Character.HeroObject.IsWanderer));
      if (source.IsEmpty<TroopRosterElement>())
        return "There are no companions in your party.";
      if (strings.IsEmpty<string>())
      {
        RemoveCompanionAction.ApplyByFire(Clan.PlayerClan, source.First<TroopRosterElement>().Character.HeroObject);
        return "Success";
      }
      if (strings[0].ToLower() == "all")
      {
        foreach (TroopRosterElement troopRosterElement in source)
          RemoveCompanionAction.ApplyByFire(Clan.PlayerClan, troopRosterElement.Character.HeroObject);
        return "Success";
      }
      foreach (TroopRosterElement troopRosterElement in source)
      {
        if (troopRosterElement.Character.Name.ToString().ToLower().Replace(" ", "").Contains(strings[0].ToLower().Replace(" ", "")))
        {
          RemoveCompanionAction.ApplyByFire(Clan.PlayerClan, troopRosterElement.Character.HeroObject);
          return "Success";
        }
      }
      return "No companion named: " + strings[0] + " is found.\n" + str;
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_money_to_main_party", "campaign")]
    public static string AddMoneyToMainParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string mainParty = "Format is \"campaign.add_money_to_main_party [Amount]\".";
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return mainParty;
      int result;
      if (!int.TryParse(strings[0], out result) || result <= 0)
        return "Please enter a positive number\n" + mainParty;
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, result);
      return "Main hero gained " + (object) result + " gold.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_troops_xp", "campaign")]
    public static string AddTroopsXp(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.add_troops_xp [Amount]\".";
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return str;
      int result = 1;
      if (!int.TryParse(strings[0], out result) || result < 1)
        return "Please enter a positive number\n" + str;
      for (int index = 0; index < MobileParty.MainParty.MemberRoster.Count; ++index)
      {
        MobileParty.MainParty.MemberRoster.SetElementXp(index, MobileParty.MainParty.MemberRoster.GetElementXp(index) + result);
        InformationManager.DisplayMessage(new InformationMessage("[DEBUG] " + (object) result + " xp given to " + (object) MobileParty.MainParty.MemberRoster.GetElementCopyAtIndex(index).Character.Name));
      }
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("toggle_information_restrictions", "campaign")]
    public static string ToggleInformationRestrictions(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.toggle_information_restrictions\".";
      if (!(Campaign.Current.Models.InformationRestrictionModel is DefaultInformationRestrictionModel restrictionModel))
        return "DefaultInformationRestrictionModel is missing.";
      restrictionModel.IsDisabledByCheat = !restrictionModel.IsDisabledByCheat;
      return "Information restrictions are " + (restrictionModel.IsDisabledByCheat ? "disabled" : "enabled") + ".";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_campaign_speed_multiplier", "campaign")]
    public static string SetCampaignSpeed(List<string> strings)
    {
      string str = "Format is \"campaign.set_campaign_speed_multiplier  [positive speedUp multiplier]\".";
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      float result;
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings) || !float.TryParse(strings[0], out result) || (double) result <= 0.0)
        return str;
      if ((double) result <= 15.0)
      {
        Campaign.Current.SpeedUpMultiplier = result;
        return "Success";
      }
      Campaign.Current.SpeedUpMultiplier = 15f;
      return "Campaign speed is set to " + (object) 15f + ". which is the maximum value for speed up multiplier!";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_gameplay_statistics", "campaign")]
    public static string PrintGameplayStatistics(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckHelp(strings))
        return "Format is \"statistics.print_gameplay_statistics\".";
      IStatisticsCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<IStatisticsCampaignBehavior>();
      if (campaignBehavior == null)
        return "Can not find IStatistics Campaign Behavior!";
      return "" + "---------------------------GENERAL---------------------------\n" + "Played Time in Campaign Time(Days): " + (object) campaignBehavior.GetTotalTimePlayed().ToDays + "\n" + "Played Time in Real Time: " + (object) campaignBehavior.GetTotalTimePlayedInSeconds() + "\n" + "Number of children born: " + (object) campaignBehavior.GetNumberOfChildrenBorn() + "\n" + "Total influence earned: " + (object) campaignBehavior.GetTotalInfluenceEarned() + "\n" + "Number of issues solved: " + (object) campaignBehavior.GetNumberOfIssuesSolved() + "\n" + "Number of tournaments won: " + (object) campaignBehavior.GetNumberOfTournamentWins() + "\n" + "Best tournament rank: " + (object) campaignBehavior.GetHighestTournamentRank() + "\n" + "Number of prisoners recruited: " + (object) campaignBehavior.GetNumberOfPrisonersRecruited() + "\n" + "Number of troops recruited: " + (object) campaignBehavior.GetNumberOfTroopsRecruited() + "\n" + "Number of enemy clans defected: " + (object) campaignBehavior.GetNumberOfClansDefected() + "\n" + "Total crime rating gained: " + (object) campaignBehavior.GetTotalCrimeRatingGained() + "\n" + "---------------------------BATTLE---------------------------\n" + "Battles Won / Lost: " + (object) campaignBehavior.GetNumberOfBattlesWon() + " / " + (object) campaignBehavior.GetNumberOfBattlesLost() + "\n" + "Largest battle won as the leader: " + (object) campaignBehavior.GetLargestBattleWonAsLeader() + "\n" + "Largest army formed by the player: " + (object) campaignBehavior.GetLargestArmyFormedByPlayer() + "\n" + "Number of enemy clans destroyed: " + (object) campaignBehavior.GetNumberOfEnemyClansDestroyed() + "\n" + "Heroes killed in battle: " + (object) campaignBehavior.GetNumberOfHeroesKilledInBattle() + "\n" + "Troops killed or knocked out in person: " + (object) campaignBehavior.GetNumberOfTroopsKnockedOrKilledByPlayer() + "\n" + "Troops killed or knocked out by player party: " + (object) campaignBehavior.GetNumberOfTroopsKnockedOrKilledAsParty() + "\n" + "Number of hero prisoners taken: " + (object) campaignBehavior.GetNumberOfHeroPrisonersTaken() + "\n" + "Number of troop prisoners taken: " + (object) campaignBehavior.GetNumberOfTroopPrisonersTaken() + "\n" + "Number of captured towns: " + (object) campaignBehavior.GetNumberOfTownsCaptured() + "\n" + "Number of captured castles: " + (object) campaignBehavior.GetNumberOfCastlesCaptured() + "\n" + "Number of cleared hideouts: " + (object) campaignBehavior.GetNumberOfHideoutsCleared() + "\n" + "Number of raided villages: " + (object) campaignBehavior.GetNumberOfVillagesRaided() + "\n" + "Number of days spent as prisoner: " + (object) campaignBehavior.GetTimeSpentAsPrisoner().ToDays + "\n" + "---------------------------FINANCES---------------------------\n" + "Total denars earned: " + (object) campaignBehavior.GetTotalDenarsEarned() + "\n" + "Total denars earned from caravans: " + (object) campaignBehavior.GetDenarsEarnedFromCaravans() + "\n" + "Total denars earned from workshops: " + (object) campaignBehavior.GetDenarsEarnedFromWorkshops() + "\n" + "Total denars earned from ransoms: " + (object) campaignBehavior.GetDenarsEarnedFromRansoms() + "\n" + "Total denars earned from taxes: " + (object) campaignBehavior.GetDenarsEarnedFromTaxes() + "\n" + "Total denars earned from tributes: " + (object) campaignBehavior.GetDenarsEarnedFromTributes() + "\n" + "Total denars paid in tributes: " + (object) campaignBehavior.GetDenarsPaidAsTributes() + "\n" + "---------------------------CRAFTING---------------------------\n" + "Number of weapons crafted: " + (object) campaignBehavior.GetNumberOfWeaponsCrafted() + "\n" + "Most expensive weapon crafted: " + campaignBehavior.GetMostExpensiveItemCrafted().Item1 + " - " + (object) campaignBehavior.GetMostExpensiveItemCrafted().Item2 + "\n" + "Numbere of crafting parts unlocked: " + (object) campaignBehavior.GetNumberOfCraftingPartsUnlocked() + "\n" + "Number of crafting orders completed: " + (object) campaignBehavior.GetNumberOfCraftingOrdersCompleted() + "\n" + "---------------------------COMPANIONS---------------------------\n" + "Number of hired companions: " + (object) campaignBehavior.GetNumberOfCompanionsHired() + "\n" + "Companion with most issues solved: " + campaignBehavior.GetCompanionWithMostIssuesSolved().name + " - " + (object) campaignBehavior.GetCompanionWithMostIssuesSolved().value + "\n" + "Companion with most kills: " + campaignBehavior.GetCompanionWithMostKills().name + " - " + (object) campaignBehavior.GetCompanionWithMostKills().value + "\n";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("set_armies_and_parties_visible", "campaign")]
    public static string SetAllArmiesAndPartiesVisible(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.set_armies_and_parties_visible [1/0]\".";
      Campaign.Current.TrueSight = strings[0] == "1";
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_strength_of_lord_parties", "campaign")]
    public static string PrintStrengthOfLordParties(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      StringBuilder stringBuilder = new StringBuilder();
      foreach (MobileParty allLordParty in (List<MobileParty>) MobileParty.AllLordParties)
        stringBuilder.AppendLine(allLordParty.Name.ToString() + " strength: " + (object) allLordParty.Party.TotalStrength);
      stringBuilder.AppendLine("Success");
      return stringBuilder.ToString();
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_strength_of_factions", "campaign")]
    public static string PrintStrengthOfFactions(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      StringBuilder stringBuilder = new StringBuilder();
      foreach (Clan clan in (List<Clan>) Clan.All)
        stringBuilder.AppendLine(clan.Name.ToString() + " strength: " + (object) clan.TotalStrength);
      stringBuilder.AppendLine("Success");
      return stringBuilder.ToString();
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("print_influence_change_of_clan", "campaign")]
    public static string PrintInfluenceChangeOfClan(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is \"campaign.print_influence_change_of_clan [ClanName]\".";
      if (CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return str;
      string clanName = CampaignCheats.ConcatenateString(strings);
      StringBuilder stringBuilder = new StringBuilder();
      Clan clan = Campaign.Current.Clans.FirstOrDefault<Clan>((Func<Clan, bool>) (x => string.Equals(x.Name.ToString().Replace(" ", ""), clanName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase) && !x.IsEliminated));
      if (clan == null)
        return str;
      if (clan != null)
      {
        foreach ((string name, float number) line in Campaign.Current.Models.ClanPoliticsModel.CalculateInfluenceChange(clan, true).GetLines())
          stringBuilder.AppendLine(line.name + ": " + (object) line.number);
      }
      stringBuilder.AppendLine("Success");
      return stringBuilder.ToString();
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_supporters_for_main_hero", "campaign")]
    public static string AddSupportersForMainHero(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Usage : campaign.add_supporters_for_main_hero [Number]";
      if (CampaignCheats.CheckHelp(strings) || !CampaignCheats.CheckParameters(strings, 1))
        return "" + "Usage : campaign.add_supporters_for_main_hero [Number]" + "\n";
      string str2 = "";
      int result;
      if (!int.TryParse(strings[0], out result) || result <= 0)
        return "Please enter a positive number\n" + str1;
      for (int index = 0; index < result; ++index)
      {
        Hero elementWithPredicate = Hero.AllAliveHeroes.GetRandomElementWithPredicate<Hero>((Func<Hero, bool>) (x => !x.IsChild && x.SupporterOf != Clan.PlayerClan));
        if (elementWithPredicate != null)
        {
          elementWithPredicate.SupporterOf = Clan.PlayerClan;
          str2 = str2 + "supporter added: " + elementWithPredicate.Name.ToString() + "\n";
        }
      }
      return str2 + "\nSuccess";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("show_hideouts", "campaign")]
    public static string ShowHideouts(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      int result;
      if (!CampaignCheats.CheckParameters(strings, 1) || CampaignCheats.CheckHelp(strings) || !int.TryParse(strings[0], out result) || result != 1 && result != 2)
        return "Format is \"campaign.show_hideouts [1/2]\n 1: Show infested hideouts\n2: Show all hideouts\".";
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsHideout && (result != 1 || settlement.Hideout.IsInfested))
        {
          Hideout hideout = settlement.Hideout;
          hideout.IsSpotted = true;
          hideout.Owner.Settlement.IsVisible = true;
        }
      }
      return (result == 1 ? "Infested" : "All") + " hideouts is visible now.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("hide_hideouts", "campaign")]
    public static string HideHideouts(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsHideout)
        {
          Hideout hideout = settlement.Hideout;
          hideout.IsSpotted = false;
          hideout.Owner.Settlement.IsVisible = false;
        }
      }
      return "All hideouts should be invisible now.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("unlock_all_crafting_pieces", "campaign")]
    public static string UnlockCraftingPieces(List<string> strings)
    {
      string ErrorType = "";
      if (!CampaignCheats.CheckCheatUsage(ref ErrorType))
        return ErrorType;
      if (!CampaignCheats.CheckParameters(strings, 0) || CampaignCheats.CheckHelp(strings))
        return "Format is \"campaign.unlock_all_crafting_pieces\".";
      CraftingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<CraftingCampaignBehavior>();
      if (campaignBehavior == null)
        return "Can not find Crafting Campaign Behavior!";
      Type type = typeof (CraftingCampaignBehavior);
      FieldInfo field1 = type.GetField("_openedPartsDictionary", BindingFlags.Instance | BindingFlags.NonPublic);
      FieldInfo field2 = type.GetField("_openNewPartXpDictionary", BindingFlags.Instance | BindingFlags.NonPublic);
      Dictionary<CraftingTemplate, List<CraftingPiece>> dictionary1 = (Dictionary<CraftingTemplate, List<CraftingPiece>>) field1.GetValue((object) campaignBehavior);
      Dictionary<CraftingTemplate, float> dictionary2 = (Dictionary<CraftingTemplate, float>) field2.GetValue((object) campaignBehavior);
      MethodInfo method = type.GetMethod("OpenPart", BindingFlags.Instance | BindingFlags.NonPublic);
      foreach (CraftingTemplate key in (List<CraftingTemplate>) CraftingTemplate.All)
      {
        if (!dictionary1.ContainsKey(key))
          dictionary1.Add(key, new List<CraftingPiece>());
        if (!dictionary2.ContainsKey(key))
          dictionary2.Add(key, 0.0f);
        foreach (object piece in key.Pieces)
        {
          object[] parameters = new object[3]
          {
            piece,
            (object) key,
            (object) false
          };
          method.Invoke((object) campaignBehavior, parameters);
        }
      }
      field1.SetValue((object) campaignBehavior, (object) dictionary1);
      field2.SetValue((object) campaignBehavior, (object) dictionary2);
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("rebellion_enabled", "campaign")]
    public static string SetRebellionEnabled(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str = "Format is campaign.rebellion_enabled [1/0]\".";
      if (CampaignCheats.CheckHelp(strings) || !CampaignCheats.CheckParameters(strings, 1))
        return str;
      if (!(strings[0] == "0") && !(strings[0] == "1"))
        return "Wrong input.\n" + str;
      RebellionsCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<RebellionsCampaignBehavior>();
      if (campaignBehavior == null)
        return "Rebellions Campaign behavior not found.";
      FieldInfo field = typeof (RebellionsCampaignBehavior).GetField("_rebellionEnabled", BindingFlags.Instance | BindingFlags.NonPublic);
      field.SetValue((object) campaignBehavior, (object) (strings[0] == "1"));
      return "Rebellion is" + ((bool) field.GetValue((object) campaignBehavior) ? " enabled" : " disabled");
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_troops", "campaign")]
    public static string AddTroopsToParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      if (CampaignCheats.CheckParameters(strings, 0))
        return "Write \"campaign.add_troops help\" for help";
      string str = "Usage : \"campaign.add_troops [TroopId] | [Number] | [PartyName]\". Party name is optional.";
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (CampaignCheats.CheckHelp(strings) || separatedNames.Count < 2)
      {
        string party = "" + str + "\n" + "\n" + "Available troops" + "\n" + "==============================" + "\n";
        foreach (CharacterObject objectType in (List<CharacterObject>) MBObjectManager.Instance.GetObjectTypeList<CharacterObject>())
        {
          if (objectType.Occupation == Occupation.Soldier || objectType.Occupation == Occupation.Gangster)
            party = party + "Id: " + objectType.StringId + " Name: " + (object) objectType.Name + "\n";
        }
        return party;
      }
      string objectName = separatedNames[0];
      CharacterObject element = MBObjectManager.Instance.GetObject<CharacterObject>(objectName);
      if (element == null)
      {
        foreach (CharacterObject objectType in (List<CharacterObject>) MBObjectManager.Instance.GetObjectTypeList<CharacterObject>())
        {
          if ((objectType.Occupation == Occupation.Soldier || objectType.Occupation == Occupation.Gangster) && objectType.StringId == objectName.ToLower())
          {
            element = objectType;
            break;
          }
        }
      }
      if (element == null)
        return "Troop with id \"" + objectName + "\" could not be found.\n" + str;
      int result;
      if (!int.TryParse(separatedNames[1], out result) || result < 1)
        return "Please enter a positive number\n" + str;
      MobileParty mobileParty1 = PartyBase.MainParty.MobileParty;
      if (separatedNames.Count == 3)
      {
        foreach (MobileParty mobileParty2 in (List<MobileParty>) MobileParty.All)
        {
          if (string.Equals(separatedNames[2].Replace(" ", ""), mobileParty2.Name.ToString().Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          {
            mobileParty1 = mobileParty2;
            break;
          }
        }
      }
      if (mobileParty1.MapEvent != null)
        return "Party shouldn't be in a map event.";
      typeof (DefaultPartySizeLimitModel).GetField("_addAdditionalPartySizeAsCheat", BindingFlags.Static | BindingFlags.NonPublic).SetValue((object) null, (object) true);
      mobileParty1.AddElementToMemberRoster(element, result);
      return mobileParty1.Name.ToString() + " gained " + (object) result + " of " + (object) element.Name + ".";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_random_hero_to_party", "campaign")]
    public static string AddRandomHeroToParty(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string party = "Format is \"campaign.add_random_hero_to_party [PartyLeaderName]\".";
      if (CampaignCheats.CheckHelp(strings))
        return party;
      Hero hero = Hero.MainHero;
      string heroName = hero.Name.ToString();
      Hero randomElement = Hero.AllAliveHeroes.GetRandomElement<Hero>();
      if (!CampaignCheats.CheckParameters(strings, 0))
      {
        heroName = CampaignCheats.ConcatenateString(strings.GetRange(0, strings.Count));
        hero = CampaignCheats.GetHero(heroName);
      }
      if (hero == null)
        return heroName + " is not found.\n" + party;
      if (!hero.IsPartyLeader)
        return heroName + " is not a party leader.";
      for (int index = 0; index < 1000 && (randomElement.PartyBelongedTo != null || randomElement.PartyBelongedToAsPrisoner != null); ++index)
        randomElement = Hero.AllAliveHeroes.GetRandomElement<Hero>();
      if (randomElement.PartyBelongedTo != null || randomElement.PartyBelongedToAsPrisoner != null)
        return "There is not any suitable hero right now.";
      if (hero.Equals((object) Hero.MainHero))
        typeof (DefaultPartySizeLimitModel).GetField("_addAdditionalPartySizeAsCheat", BindingFlags.Static | BindingFlags.NonPublic).SetValue((object) null, (object) true);
      hero.PartyBelongedTo.AddElementToMemberRoster(randomElement.CharacterObject, 1);
      return string.Format("{0} is added to {1}'s party.", (object) randomElement.Name, (object) hero.Name);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("add_prisoner", "campaign")]
    public static string AddPrisoner(List<string> strings)
    {
      if (!CampaignCheats.CheckCheatUsage(ref CampaignCheats.ErrorType))
        return CampaignCheats.ErrorType;
      string str1 = "Format is \"campaign.add_prisoner [TroopName] | [PositiveNumber]\".";
      if (CampaignCheats.CheckHelp(strings))
        return str1;
      int result = 1;
      string str2 = "looter";
      CharacterObject element = MBObjectManager.Instance.GetObject<CharacterObject>(str2);
      bool flag = false;
      List<string> separatedNames = CampaignCheats.GetSeparatedNames(strings, "|");
      if (separatedNames.Count == 1)
      {
        if (!int.TryParse(separatedNames[0], out result))
        {
          result = 1;
          str2 = separatedNames[0].Replace(" ", "");
          element = MBObjectManager.Instance.GetObject<CharacterObject>(str2);
          flag = true;
        }
      }
      else if (separatedNames.Count == 2)
      {
        if (!int.TryParse(separatedNames[1], out result))
          return "Please enter a positive number\n" + str1;
        str2 = separatedNames[0].Replace(" ", "");
        element = MBObjectManager.Instance.GetObject<CharacterObject>(str2);
        flag = true;
      }
      if (element == null)
      {
        foreach (CharacterObject objectType in (List<CharacterObject>) MBObjectManager.Instance.GetObjectTypeList<CharacterObject>())
        {
          if (objectType.Occupation == Occupation.Soldier && string.Equals(objectType.Name.ToString(), str2, StringComparison.OrdinalIgnoreCase))
          {
            element = objectType;
            break;
          }
        }
      }
      if (element != null)
      {
        if (result <= 0)
          return "Please enter a positive number\n" + str1;
        typeof (DefaultPartySizeLimitModel).GetField("_addAdditionalPartySizeAsCheat", BindingFlags.Static | BindingFlags.NonPublic).SetValue((object) null, (object) true);
        PartyBase.MainParty.AddPrisoner(element, result);
        return "Main hero gained " + (object) result + " of " + (object) element.Name + " as prisoner.";
      }
      return flag ? "Troop: " + str2 + " not found.\n" + str1 : "Wrong input.\n" + str1;
    }

    public static Hero GetHero(string heroName)
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (string.Equals(allAliveHero.Name.ToString().Replace(" ", ""), heroName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return allAliveHero;
      }
      foreach (Hero deadOrDisabledHero in (List<Hero>) Hero.DeadOrDisabledHeroes)
      {
        if (string.Equals(deadOrDisabledHero.Name.ToString(), heroName, StringComparison.OrdinalIgnoreCase))
          return deadOrDisabledHero;
      }
      return (Hero) null;
    }

    public static ItemObject GetItemObject(string itemObjectName)
    {
      foreach (ItemObject objectType in (List<ItemObject>) Campaign.Current.ObjectManager.GetObjectTypeList<ItemObject>())
      {
        if (string.Equals(objectType.Name.ToString().Replace(" ", ""), itemObjectName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return objectType;
      }
      return (ItemObject) null;
    }

    public static Clan GetClan(string clanName)
    {
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (string.Equals(nonBanditFaction.Name.ToString(), clanName, StringComparison.OrdinalIgnoreCase))
          return nonBanditFaction;
      }
      return (Clan) null;
    }

    public static Hero GetClanLeader(string clanName)
    {
      foreach (Clan nonBanditFaction in Clan.NonBanditFactions)
      {
        if (string.Equals(nonBanditFaction.Name.ToString().Replace(" ", ""), clanName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return nonBanditFaction.Leader;
      }
      return (Hero) null;
    }

    public static Kingdom GetKingdom(string kingdomName)
    {
      foreach (Kingdom kingdom in (List<Kingdom>) Kingdom.All)
      {
        if (string.Equals(kingdom.Name.ToString().Replace(" ", ""), kingdomName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return kingdom;
      }
      return (Kingdom) null;
    }

    public static Settlement GetSettlement(string settlementName)
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (string.Equals(settlement.Name.ToString(), settlementName, StringComparison.OrdinalIgnoreCase) || string.Equals(settlement.Name.ToString().Replace(" ", ""), settlementName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return settlement;
      }
      return (Settlement) null;
    }

    public static Settlement GetDefaultSettlement()
    {
      return Hero.MainHero.HomeSettlement ?? Kingdom.All.GetRandomElement<Kingdom>().Settlements.GetRandomElementWithPredicate<Settlement>((Func<Settlement, bool>) (settlement => settlement.IsTown));
    }

    public static string ConcatenateString(List<string> strings)
    {
      if (strings == null || strings.IsEmpty<string>())
        return string.Empty;
      string str = strings[0];
      if (strings.Count > 1)
      {
        for (int index = 1; index < strings.Count; ++index)
          str = str + " " + strings[index];
      }
      return str;
    }

    public static ItemModifier GetItemModifier(string itemModifierName)
    {
      foreach (ItemModifier objectType in (List<ItemModifier>) Campaign.Current.ObjectManager.GetObjectTypeList<ItemModifier>())
      {
        if (string.Equals(objectType.Name.ToString().Replace(" ", ""), itemModifierName.Replace(" ", ""), StringComparison.OrdinalIgnoreCase))
          return objectType;
      }
      return (ItemModifier) null;
    }
  }
}
