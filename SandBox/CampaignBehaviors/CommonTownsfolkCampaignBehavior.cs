// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.CommonTownsfolkCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class CommonTownsfolkCampaignBehavior : CampaignBehaviorBase
  {
    public const float TownsmanSpawnPercentageMale = 0.2f;
    public const float TownsmanSpawnPercentageFemale = 0.15f;
    public const float TownsmanSpawnPercentageLimitedMale = 0.15f;
    public const float TownsmanSpawnPercentageLimitedFemale = 0.1f;
    public const float TownOtherPeopleSpawnPercentage = 0.05f;
    public const float TownsmanSpawnPercentageTavernMale = 0.3f;
    public const float TownsmanSpawnPercentageTavernFemale = 0.1f;
    public const float BeggarSpawnPercentage = 0.33f;

    private float GetSpawnRate(Settlement settlement)
    {
      return this.TimeOfDayPercentage() * this.GetProsperityMultiplier(settlement.SettlementComponent) * this.GetWeatherEffectMultiplier(settlement);
    }

    private float GetConfigValue() => BannerlordConfig.CivilianAgentCount;

    private float GetProsperityMultiplier(SettlementComponent settlement)
    {
      return (float) (((double) settlement.GetProsperityLevel() + 1.0) / 3.0);
    }

    private float GetWeatherEffectMultiplier(Settlement settlement)
    {
      switch (Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(settlement.GatePosition))
      {
        case MapWeatherModel.WeatherEvent.HeavyRain:
          return 0.15f;
        case MapWeatherModel.WeatherEvent.Blizzard:
          return 0.4f;
        default:
          return 1f;
      }
    }

    private float TimeOfDayPercentage()
    {
      return (float) (1.0 - (double) MathF.Abs(CampaignTime.Now.CurrentHourInDay - 15f) / 15.0);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (settlement.IsCastle)
        return;
      Location locationWithId1 = settlement.LocationComplex.GetLocationWithId("center");
      Location locationWithId2 = settlement.LocationComplex.GetLocationWithId("tavern");
      if (CampaignMission.Current.Location == locationWithId1)
        this.AddPeopleToTownCenter(settlement, unusedUsablePointCount, CampaignTime.Now.IsDayTime);
      if (CampaignMission.Current.Location != locationWithId2)
        return;
      this.AddPeopleToTownTavern(settlement, unusedUsablePointCount);
    }

    private void AddPeopleToTownTavern(
      Settlement settlement,
      Dictionary<string, int> unusedUsablePointCount)
    {
      Location locationWithId = settlement.LocationComplex.GetLocationWithId("tavern");
      int num;
      unusedUsablePointCount.TryGetValue("npc_common", out num);
      MapWeatherModel.WeatherEvent weatherEventInPosition = Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(settlement.GatePosition);
      bool flag = weatherEventInPosition == MapWeatherModel.WeatherEvent.HeavyRain || weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard;
      if (num <= 0)
        return;
      int count1 = (int) ((double) num * (0.30000001192092896 + (flag ? 0.20000000298023224 : 0.0)));
      if (count1 > 0)
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsManForTavern), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count1);
      int count2 = (int) ((double) num * (0.10000000149011612 + (flag ? 0.20000000298023224 : 0.0)));
      if (count2 <= 0)
        return;
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsWomanForTavern), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count2);
    }

    private void AddPeopleToTownCenter(
      Settlement settlement,
      Dictionary<string, int> unusedUsablePointCount,
      bool isDayTime)
    {
      Location locationWithId = settlement.LocationComplex.GetLocationWithId("center");
      CultureObject culture = settlement.Culture;
      int num1;
      unusedUsablePointCount.TryGetValue("npc_common", out num1);
      int num2;
      unusedUsablePointCount.TryGetValue("npc_common_limited", out num2);
      float num3 = (float) (num1 + num2) * 0.650000036f;
      if ((double) num3 == 0.0)
        return;
      float num4 = MBMath.ClampFloat(this.GetConfigValue() / num3, 0.0f, 1f);
      float num5 = this.GetSpawnRate(settlement) * num4;
      if (num1 > 0)
      {
        int count1 = (int) ((double) num1 * 0.20000000298023224 * (double) num5);
        if (count1 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsMan), culture, LocationCharacter.CharacterRelations.Neutral, count1);
        int count2 = (int) ((double) num1 * 0.15000000596046448 * (double) num5);
        if (count2 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsWoman), culture, LocationCharacter.CharacterRelations.Neutral, count2);
      }
      MapWeatherModel.WeatherEvent weatherEventInPosition = Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(settlement.GatePosition);
      bool flag = weatherEventInPosition == MapWeatherModel.WeatherEvent.HeavyRain || weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard;
      if (!isDayTime || flag)
        return;
      if (num2 > 0)
      {
        int count3 = (int) ((double) num2 * 0.15000000596046448 * (double) num5);
        if (count3 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsManCarryingStuff), culture, LocationCharacter.CharacterRelations.Neutral, count3);
        int count4 = (int) ((double) num2 * 0.10000000149011612 * (double) num5);
        if (count4 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateTownsWomanCarryingStuff), culture, LocationCharacter.CharacterRelations.Neutral, count4);
        int count5 = (int) ((double) num2 * 0.05000000074505806 * (double) num5);
        if (count5 > 0)
        {
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateMaleChild), culture, LocationCharacter.CharacterRelations.Neutral, count5);
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateFemaleChild), culture, LocationCharacter.CharacterRelations.Neutral, count5);
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateMaleTeenager), culture, LocationCharacter.CharacterRelations.Neutral, count5);
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateFemaleTeenager), culture, LocationCharacter.CharacterRelations.Neutral, count5);
        }
      }
      int count = 0;
      if (unusedUsablePointCount.TryGetValue("spawnpoint_cleaner", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateBroomsWoman), culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (unusedUsablePointCount.TryGetValue("npc_dancer", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateDancer), culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (!settlement.IsTown || !unusedUsablePointCount.TryGetValue("npc_beggar", out count))
        return;
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateFemaleBeggar), culture, LocationCharacter.CharacterRelations.Neutral, count == 1 ? 0 : count / 2);
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateMaleBeggar), culture, LocationCharacter.CharacterRelations.Neutral, count == 1 ? 1 : count / 2);
    }

    public static string GetActionSetSuffixAndMonsterForItem(
      string itemId,
      int race,
      bool isFemale,
      out Monster monster)
    {
      monster = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement");
      switch (itemId)
      {
        case "_to_carry_arm_kitchen_pot_c":
          return "_villager_carry_right_arm";
        case "_to_carry_bd_basket_a":
          return "_villager_with_backpack";
        case "_to_carry_bd_fabric_c":
        case "_to_carry_foods_watermelon_a":
          return "_villager_carry_right_side";
        case "_to_carry_bed_convolute_a":
          return "_villager_carry_front";
        case "_to_carry_bed_convolute_g":
          return "_villager_carry_on_shoulder";
        case "_to_carry_foods_basket_apple":
          return "_villager_carry_over_head_v2";
        case "_to_carry_foods_pumpkin_a":
          return "_villager_carry_front_v2";
        case "_to_carry_kitchen_pitcher_a":
          return "_villager_carry_over_head";
        case "_to_carry_kitchen_pot_c":
          return "_villager_carry_right_hand";
        case "_to_carry_merchandise_hides_b":
          return "_villager_with_backpack";
        case "practice_spear_t1":
          return "_villager_with_staff";
        case "simple_sparth_axe_t2":
          return "_villager_carry_axe";
        default:
          return "_villager_carry_right_hand";
      }
    }

    public static Tuple<string, Monster> GetRandomTownsManActionSetAndMonster(int race)
    {
      switch (MBRandom.RandomInt(3))
      {
        case 0:
          Monster monsterWithSuffix1 = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement");
          return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix1, false, "_villager"), monsterWithSuffix1);
        case 1:
          Monster monsterWithSuffix2 = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement_slow");
          return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix2, false, "_villager_2"), monsterWithSuffix2);
        default:
          Monster monsterWithSuffix3 = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement");
          return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix3, false, "_villager_3"), monsterWithSuffix3);
      }
    }

    public static Tuple<string, Monster> GetRandomTownsWomanActionSetAndMonster(int race)
    {
      if (MBRandom.RandomInt(4) == 0)
      {
        Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement_fast");
        return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, true, "_villager"), monsterWithSuffix);
      }
      Monster monsterWithSuffix1 = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(race, "_settlement_slow");
      return new Tuple<string, Monster>(ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix1, true, "_villager_2"), monsterWithSuffix1);
    }

    private static LocationCharacter CreateTownsMan(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townsman = culture.Townsman;
      Tuple<string, Monster> actionSetAndMonster = CommonTownsfolkCampaignBehavior.GetRandomTownsManActionSetAndMonster(townsman.Race);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townsman, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townsman)).Monster(actionSetAndMonster.Item2).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common", false, relation, actionSetAndMonster.Item1, true);
    }

    private static LocationCharacter CreateTownsManForTavern(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townsman = culture.Townsman;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townsman.Race, "_settlement_slow");
      string actionSetCode = culture.StringId.ToLower() == "aserai" || culture.StringId.ToLower() == "khuzait" ? ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, townsman.IsFemale, "_villager_in_aserai_tavern") : ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, townsman.IsFemale, "_villager_in_tavern");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townsman, out minimumAge, out maximumAge, "TavernVisitor");
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townsman)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common", true, relation, actionSetCode, true);
    }

    private static LocationCharacter CreateTownsWomanForTavern(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswoman = culture.Townswoman;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townswoman.Race, "_settlement_slow");
      string actionSetCode = culture.StringId.ToLower() == "aserai" || culture.StringId.ToLower() == "khuzait" ? ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, townswoman.IsFemale, "_warrior_in_aserai_tavern") : ActionSetCode.GenerateActionSetNameWithSuffix(monsterWithSuffix, townswoman.IsFemale, "_warrior_in_tavern");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswoman, out minimumAge, out maximumAge, "TavernVisitor");
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswoman)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common", true, relation, actionSetCode, true);
    }

    private static LocationCharacter CreateTownsManCarryingStuff(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townsman = culture.Townsman;
      string randomStuff = SettlementHelper.GetRandomStuff(false);
      Monster monster;
      string andMonsterForItem = CommonTownsfolkCampaignBehavior.GetActionSetSuffixAndMonsterForItem(randomStuff, townsman.Race, false, out monster);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townsman, out minimumAge, out maximumAge, "TownsfolkCarryingStuff");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townsman)).Monster(monster).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      ItemObject specialItem = Game.Current.ObjectManager.GetObject<ItemObject>(randomStuff);
      LocationCharacter manCarryingStuff = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townsman.IsFemale, andMonsterForItem), true, specialItem: specialItem);
      if (specialItem == null)
        manCarryingStuff.PrefabNamesForBones.Add(agentData.AgentMonster.MainHandItemBoneIndex, randomStuff);
      return manCarryingStuff;
    }

    private static LocationCharacter CreateTownsWoman(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswoman = culture.Townswoman;
      Tuple<string, Monster> actionSetAndMonster = CommonTownsfolkCampaignBehavior.GetRandomTownsWomanActionSetAndMonster(townswoman.Race);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswoman, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswoman)).Monster(actionSetAndMonster.Item2).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common", false, relation, actionSetAndMonster.Item1, true);
    }

    private static LocationCharacter CreateMaleChild(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townsmanChild = culture.TownsmanChild;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townsmanChild.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townsmanChild, out minimumAge, out maximumAge, "Child");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townsmanChild)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townsmanChild.IsFemale, "_child"), true);
    }

    private static LocationCharacter CreateFemaleChild(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswomanChild = culture.TownswomanChild;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townswomanChild.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswomanChild, out minimumAge, out maximumAge, "Child");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswomanChild)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townswomanChild.IsFemale, "_child"), true);
    }

    private static LocationCharacter CreateMaleTeenager(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townsmanTeenager = culture.TownsmanTeenager;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townsmanTeenager.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townsmanTeenager, out minimumAge, out maximumAge, "Teenager");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townsmanTeenager)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townsmanTeenager.IsFemale, "_villager"), true);
    }

    private static LocationCharacter CreateFemaleTeenager(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswomanTeenager = culture.TownswomanTeenager;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townswomanTeenager.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswomanTeenager, out minimumAge, out maximumAge, "Teenager");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswomanTeenager)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townswomanTeenager.IsFemale, "_villager"), true);
    }

    private static LocationCharacter CreateTownsWomanCarryingStuff(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswoman = culture.Townswoman;
      string randomStuff = SettlementHelper.GetRandomStuff(true);
      Monster monster;
      string andMonsterForItem = CommonTownsfolkCampaignBehavior.GetActionSetSuffixAndMonsterForItem(randomStuff, townswoman.Race, false, out monster);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswoman, out minimumAge, out maximumAge, "TownsfolkCarryingStuff");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswoman)).Monster(monster).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      ItemObject specialItem = Game.Current.ObjectManager.GetObject<ItemObject>(randomStuff);
      LocationCharacter womanCarryingStuff = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, townswoman.IsFemale, andMonsterForItem), true, specialItem: specialItem);
      if (specialItem == null)
        womanCarryingStuff.PrefabNamesForBones.Add(agentData.AgentMonster.MainHandItemBoneIndex, randomStuff);
      return womanCarryingStuff;
    }

    public static LocationCharacter CreateBroomsWoman(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject townswoman = culture.Townswoman;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(townswoman.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(townswoman, out minimumAge, out maximumAge, "BroomsWoman");
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) townswoman)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "spawnpoint_cleaner", false, relation, (string) null, true);
    }

    private static LocationCharacter CreateDancer(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject femaleDancer = culture.FemaleDancer;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(femaleDancer.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(femaleDancer, out minimumAge, out maximumAge, "Dancer");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) femaleDancer)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_dancer", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_dancer"), true);
    }

    public static LocationCharacter CreateMaleBeggar(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject beggar = culture.Beggar;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(beggar.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(beggar, out minimumAge, out maximumAge, "Beggar");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) beggar)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_beggar", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_beggar"), true);
    }

    public static LocationCharacter CreateFemaleBeggar(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject femaleBeggar = culture.FemaleBeggar;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(femaleBeggar.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(femaleBeggar, out minimumAge, out maximumAge, "Beggar");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) femaleBeggar)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_beggar", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_beggar"), true);
    }
  }
}
