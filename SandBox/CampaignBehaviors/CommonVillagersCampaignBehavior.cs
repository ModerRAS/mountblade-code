// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.CommonVillagersCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class CommonVillagersCampaignBehavior : CampaignBehaviorBase
  {
    public const float VillagerSpawnPercentageMale = 0.25f;
    public const float VillagerSpawnPercentageFemale = 0.2f;
    public const float VillagerSpawnPercentageLimited = 0.2f;
    public const float VillageOtherPeopleSpawnPercentage = 0.05f;
    private readonly Dictionary<int, string> _rumorsGiven = new Dictionary<int, string>();
    private CampaignTime _lastEnteredTime;

    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private float GetSpawnRate(Settlement settlement)
    {
      return this.TimeOfDayPercentage() * this.GetProsperityMultiplier(settlement.SettlementComponent);
    }

    private float GetConfigValue() => BannerlordConfig.CivilianAgentCount;

    private float GetProsperityMultiplier(SettlementComponent settlement)
    {
      return (float) (((double) settlement.GetProsperityLevel() + 1.0) / 3.0);
    }

    private float TimeOfDayPercentage()
    {
      return (float) (1.0 - (double) MathF.Abs(CampaignTime.Now.CurrentHourInDay - 15f) / 15.0);
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (CampaignMission.Current.Location != settlement.LocationComplex.GetLocationWithId("village_center"))
        return;
      this.AddVillageCenterCharacters(settlement, unusedUsablePointCount, !CampaignTime.Now.IsDayTime);
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

    private void AddVillageCenterCharacters(
      Settlement settlement,
      Dictionary<string, int> unusedUsablePointCount,
      bool isNight)
    {
      Location locationWithId = settlement.LocationComplex.GetLocationWithId("village_center");
      CultureObject culture = settlement.Culture;
      int num1;
      unusedUsablePointCount.TryGetValue("npc_common", out num1);
      int num2;
      unusedUsablePointCount.TryGetValue("npc_common_limited", out num2);
      float num3 = (float) (num1 + num2) * 0.65f;
      float num4 = MBMath.ClampFloat(this.GetConfigValue() / num3, 0.0f, 1f);
      float num5 = this.GetSpawnRate(settlement) * num4 * this.GetWeatherEffectMultiplier(settlement);
      if (locationWithId == null || CampaignMission.Current.Location != locationWithId)
        return;
      if (num1 > 0)
      {
        int count1 = (int) ((double) num1 * 0.25 * (double) num5);
        if (count1 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateVillageMan), culture, LocationCharacter.CharacterRelations.Neutral, count1);
        int count2 = (int) ((double) num1 * 0.20000000298023224 * (double) num5);
        if (count2 > 0)
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateVillageWoman), culture, LocationCharacter.CharacterRelations.Neutral, count2);
        if (!isNight)
        {
          int count3 = (int) ((double) num1 * 0.05000000074505806 * (double) num5);
          if (count3 > 0)
          {
            locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateMaleChild), culture, LocationCharacter.CharacterRelations.Neutral, count3);
            locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateFemaleChild), culture, LocationCharacter.CharacterRelations.Neutral, count3);
            locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateMaleTeenager), culture, LocationCharacter.CharacterRelations.Neutral, count3);
            locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateFemaleTeenager), culture, LocationCharacter.CharacterRelations.Neutral, count3);
          }
        }
      }
      if (num2 > 0)
      {
        int num6 = (int) ((double) num2 * 0.20000000298023224 * (double) num5);
        if (num6 > 0)
        {
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateVillageManCarryingStuff), culture, LocationCharacter.CharacterRelations.Neutral, num6 / 2);
          locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateVillageWomanCarryingStuff), culture, LocationCharacter.CharacterRelations.Neutral, num6 / 2);
        }
      }
      int count = 0;
      if (unusedUsablePointCount.TryGetValue("spawnpoint_cleaner", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateBroomsWoman), culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (!unusedUsablePointCount.TryGetValue("npc_beggar", out count))
        return;
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateFemaleBeggar), culture, LocationCharacter.CharacterRelations.Neutral, count / 2);
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(CommonTownsfolkCampaignBehavior.CreateMaleBeggar), culture, LocationCharacter.CharacterRelations.Neutral, count / 2);
    }

    public void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (!settlement.IsVillage && !settlement.IsFortification)
        return;
      SettlementHelper.TakeEnemyVillagersOutsideSettlements(settlement);
    }

    private LocationCharacter CreateVillageMan(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villager = culture.Villager;
      Tuple<string, Monster> actionSetAndMonster = CommonTownsfolkCampaignBehavior.GetRandomTownsManActionSetAndMonster(villager.Race);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villager, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villager)).Monster(actionSetAndMonster.Item2).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common", false, relation, actionSetAndMonster.Item1, true);
    }

    private LocationCharacter CreateMaleChild(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villagerMaleChild = culture.VillagerMaleChild;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(villagerMaleChild.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villagerMaleChild, out minimumAge, out maximumAge, "Child");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villagerMaleChild)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villagerMaleChild.IsFemale, "_child"), true);
    }

    private LocationCharacter CreateFemaleChild(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villagerFemaleChild = culture.VillagerFemaleChild;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(villagerFemaleChild.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villagerFemaleChild, out minimumAge, out maximumAge, "Child");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villagerFemaleChild)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villagerFemaleChild.IsFemale, "_child"), true);
    }

    private LocationCharacter CreateMaleTeenager(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villagerMaleTeenager = culture.VillagerMaleTeenager;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(villagerMaleTeenager.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villagerMaleTeenager, out minimumAge, out maximumAge, "Teenager");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villagerMaleTeenager)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villagerMaleTeenager.IsFemale, "_villager"), true);
    }

    private LocationCharacter CreateFemaleTeenager(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villagerFemaleTeenager = culture.VillagerFemaleTeenager;
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(villagerFemaleTeenager.Race, "_child");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villagerFemaleTeenager, out minimumAge, out maximumAge, "Teenager");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villagerFemaleTeenager)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villagerFemaleTeenager.IsFemale, "_villager"), true);
    }

    private LocationCharacter CreateVillageManCarryingStuff(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villager = culture.Villager;
      string randomStuff = SettlementHelper.GetRandomStuff(false);
      Monster monster;
      string andMonsterForItem = CommonTownsfolkCampaignBehavior.GetActionSetSuffixAndMonsterForItem(randomStuff, villager.Race, false, out monster);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villager, out minimumAge, out maximumAge, "TownsfolkCarryingStuff");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villager)).Monster(monster).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      ItemObject specialItem = Game.Current.ObjectManager.GetObject<ItemObject>(randomStuff);
      LocationCharacter manCarryingStuff = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villager.IsFemale, andMonsterForItem), true, specialItem: specialItem);
      if (specialItem == null)
        manCarryingStuff.PrefabNamesForBones.Add(agentData.AgentMonster.MainHandItemBoneIndex, randomStuff);
      return manCarryingStuff;
    }

    private LocationCharacter CreateVillageWoman(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villageWoman = culture.VillageWoman;
      Tuple<string, Monster> actionSetAndMonster = CommonTownsfolkCampaignBehavior.GetRandomTownsWomanActionSetAndMonster(villageWoman.Race);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villageWoman, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villageWoman)).Monster(actionSetAndMonster.Item2).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "npc_common", false, relation, actionSetAndMonster.Item1, true);
    }

    private LocationCharacter CreateVillageWomanCarryingStuff(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject villageWoman = culture.VillageWoman;
      string randomStuff = SettlementHelper.GetRandomStuff(true);
      Monster monster;
      string andMonsterForItem = CommonTownsfolkCampaignBehavior.GetActionSetSuffixAndMonsterForItem(randomStuff, villageWoman.Race, false, out monster);
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(villageWoman, out minimumAge, out maximumAge, "TownsfolkCarryingStuff");
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) villageWoman)).Monster(monster).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      ItemObject specialItem = Game.Current.ObjectManager.GetObject<ItemObject>(randomStuff);
      LocationCharacter womanCarryingStuff = new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "npc_common_limited", false, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, villageWoman.IsFemale, andMonsterForItem), true, specialItem: specialItem);
      if (specialItem == null)
        womanCarryingStuff.PrefabNamesForBones.Add(agentData.AgentMonster.MainHandItemBoneIndex, randomStuff);
      return womanCarryingStuff;
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      this.AddTownspersonAndVillagerDialogs(campaignGameStarter);
    }

    private void AddTownspersonAndVillagerDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("town_beggar_to_disguised_character", "start", "close_window", "{=iVJlUlOg}Look, friend, we'll both eat better tonight if you move to a different spot. Too many of us, and the masters and ladies give a wide berth.", new ConversationSentence.OnConditionDelegate(this.conversation_beggar_to_disguise_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_talk_to_disguised_character", "start", "close_window", "{=qGIFpahv}Can't spare any coins for you. Sorry. May Heaven provide.", new ConversationSentence.OnConditionDelegate(this.conversation_townsperson_to_disguise_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start", "start", "town_or_village_talk", "{=!}{CONVERSATION_SCRAP}", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_talk_beggar", "town_or_village_talk", "close_window", "{=kFWmcRpV}The Heavens repay kindness with kindness, my {?PLAYER.GENDER}lady{?}lord{\\?}.", new ConversationSentence.OnConditionDelegate(this.conversation_beggar_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_talk", "town_or_village_talk", "town_or_village_player_children_post_rhyme", "{=jZF4l0jY}Oh, sorry, {?PLAYER.GENDER}madam{?}sir{\\?}. May I be of service?", new ConversationSentence.OnConditionDelegate(this.conversation_children_rhymes_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_talk_children", "town_or_village_talk", "town_or_village_player", "{=KPfs7L7B}Ah, my apologies, {?PLAYER.GENDER}madam{?}sir{\\?}. May I help you with something?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start_2", "start", "close_window", "{=IrsaIJ4u}Ay, these are hard days indeed...", new ConversationSentence.OnConditionDelegate(this.conversation_beggar_delivered_line_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start_postrumor_liege", "start", "town_or_village_player", "{=eKLH9fOb}May I be of service, {?PLAYER.GENDER}your ladyship{?}your lordship{\\?}?", new ConversationSentence.OnConditionDelegate(this.conversation_liege_delivered_line_on_street_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start_postrumor_children", "start", "town_or_village_children_player_no_rhyme", "{=Osaupw6M}Beg pardon, {?PLAYER.GENDER}madam{?}sir{\\?}, I need to get back to my parents. Is there anything you need?", new ConversationSentence.OnConditionDelegate(this.conversation_children_already_delivered_line_on_street_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start_postrumor_tavern", "start", "town_or_village_player", "{=X1A4r7wY}Your good health, {?PLAYER.GENDER}madam{?}sir{\\?}. May I help you?", new ConversationSentence.OnConditionDelegate(this.conversation_already_delivered_line_in_tavern_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_start_postrumor", "start", "town_or_village_player", "{=P99OLPWU}Excuse me, {?PLAYER.GENDER}madam{?}sir{\\?}, but I must shortly go about my business. Is there anything you need?", new ConversationSentence.OnConditionDelegate(this.conversation_already_delivered_line_on_street_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_run_along_children_1", "town_or_village_player_children_post_rhyme", "close_window", "{=7kn4Jmdl}Ah, yes! We had such rhymes when I was young.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_run_along_children_2", "town_or_village_player_children_post_rhyme", "close_window", "{=jGxotDqF}Best not sing that to every stranger you meet, child.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_run_along_children_3", "town_or_village_player_children_post_rhyme", "close_window", "{=bhkC3kcQ}Speak respectfully about your elders, you filthy ragamuffin!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_run_along_children", "town_or_village_children_player_no_rhyme", "close_window", "{=PV56VAFg}Run along now, child.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_ask_hero_location", "town_or_village_player", "player_ask_hero_location", "{=urieibC4}I'm looking for someone.", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_player_ask_location_of_hero_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_town_or_village_player_ask_location_of_hero_on_consequence));
      campaignGameStarter.AddDialogLine("player_ask_hero_location_di1", "player_ask_hero_location", "player_ask_hero_location_2", "{=cqlV1YLO}Whom are you looking for?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddRepeatablePlayerLine("player_ask_hero_location_2", "player_ask_hero_location_2", "player_ask_hero_location_3", "{=obY78MnQ}{HERO.LINK}", "{=4hDu8rDF}I am thinking of a different person.", "player_ask_hero_location", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_player_ask_location_of_hero_2_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_town_or_village_player_ask_location_of_hero_2_on_consequence));
      campaignGameStarter.AddPlayerLine("player_ask_hero_location_2_2", "player_ask_hero_location_2", "town_or_village_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("town_or_village_pretalk", "town_or_village_pretalk", "town_or_village_player", "{=ds294zxi}Anything else?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("player_ask_hero_location_3", "player_ask_hero_location_3", "player_ask_hero_location_4", "{=qN2LYVIO}Yes, I know {HERO.LINK}.", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_player_ask_location_of_hero_3_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("player_ask_hero_location_4_di", "player_ask_hero_location_3", "town_or_village_pretalk", "{=woMdU4Xl}I don't know where {?HERO.GENDER}she{?}he{\\?} is.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_ask_hero_location_4", "player_ask_hero_location_4", "player_ask_hero_location_5", "{=a1FeLSbH}Can you take me to {?HERO.GENDER}her{?}him{\\?}?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_ask_hero_location_4_2", "player_ask_hero_location_4", "town_or_village_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("player_ask_hero_location_5", "player_ask_hero_location_5", "close_window", "{=mhgUwwZb}Sure. Follow me.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_town_or_village_player_ask_location_of_hero_5_on_consequence));
      campaignGameStarter.AddDialogLine("town_or_village_escort_complete", "start", "town_or_village_pretalk", "{=9PBA2OJz}Here {?HERO.GENDER}she{?}he{\\?} is.", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_escort_complete_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_town_or_village_escort_complete_on_consequence));
      campaignGameStarter.AddDialogLine("town_or_village_start_3", "start", "town_or_village_escorting", "{=ym6bSrNo}{STILL_ESCORTING_ANSWER}", new ConversationSentence.OnConditionDelegate(this.conversation_town_or_village_talk_escorting_commoner_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("town_or_village_escorting_changed_my_mind", "town_or_village_escorting", "town_or_village_pretalk", "{=fkkYatnM}Actually, I've changed my mind. I'll talk to {?HERO.GENDER}her{?}him{\\?} later...", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_town_or_village_talk_stop_escorting_on_consequence));
      campaignGameStarter.AddPlayerLine("town_or_village_escorting_keep_going", "town_or_village_escorting", "close_window", "{=QTZjjOXb}Let us keep going.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("town_or_village_player", "town_or_village_player", "close_window", "{=OlOhuO7X}No thank you. Good day to you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool CheckIfConversationAgentIsEscortingTheMainAgent()
    {
      return Agent.Main != null && Agent.Main.IsActive() && Settlement.CurrentSettlement != null && ConversationMission.OneToOneConversationAgent != null && EscortAgentBehavior.CheckIfAgentIsEscortedBy(ConversationMission.OneToOneConversationAgent, Agent.Main);
    }

    private bool CheckIfTheMainAgentIsBeingEscorted()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (EscortAgentBehavior.CheckIfAgentIsEscortedBy(agent, Agent.Main))
          return true;
      }
      return false;
    }

    private bool conversation_town_or_village_player_ask_location_of_hero_on_condition()
    {
      return !this.CheckIfTheMainAgentIsBeingEscorted() && this.heroes_to_look_for().Count != 0;
    }

    private void conversation_town_or_village_player_ask_location_of_hero_on_consequence()
    {
      ConversationSentence.SetObjectsToRepeatOver((IReadOnlyList<object>) this.heroes_to_look_for());
    }

    private List<Hero> heroes_to_look_for()
    {
      List<Hero> lookFor = new List<Hero>();
      Vec3 position = ConversationMission.OneToOneConversationAgent.Position;
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (agent.IsHuman && agent.IsHero && agent.State == AgentState.Active)
        {
          Hero heroObject = ((CharacterObject) agent.Character).HeroObject;
          if (heroObject.HasMet && !heroObject.IsLord && (double) position.Distance(agent.Position) > 6.0)
            lookFor.Add(heroObject);
        }
      }
      return lookFor;
    }

    private bool conversation_town_or_village_player_ask_location_of_hero_2_on_condition()
    {
      if (this.CheckIfTheMainAgentIsBeingEscorted() || !(ConversationSentence.CurrentProcessedRepeatObject is Hero processedRepeatObject))
        return false;
      StringHelpers.SetRepeatableCharacterProperties("HERO", processedRepeatObject.CharacterObject);
      return true;
    }

    private void conversation_town_or_village_player_ask_location_of_hero_2_on_consequence()
    {
      ConversationHelper.AskedLord = ((Hero) ConversationSentence.SelectedRepeatObject).CharacterObject;
    }

    private bool conversation_town_or_village_player_ask_location_of_hero_3_on_condition()
    {
      Hero heroObject = ConversationHelper.AskedLord.HeroObject;
      Location locationOfCharacter1 = LocationComplex.Current.GetLocationOfCharacter(heroObject);
      Location locationOfCharacter2 = LocationComplex.Current.GetLocationOfCharacter(LocationComplex.Current.FindCharacter((IAgent) ConversationMission.OneToOneConversationAgent));
      StringHelpers.SetCharacterProperties("HERO", heroObject.CharacterObject);
      Location location = locationOfCharacter2;
      return locationOfCharacter1 == location;
    }

    private void conversation_town_or_village_player_ask_location_of_hero_5_on_consequence()
    {
      Hero heroObject = ConversationHelper.AskedLord.HeroObject;
      Agent conversationAgent = ConversationMission.OneToOneConversationAgent;
      Agent targetAgent1 = (Agent) null;
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (agent.Character == heroObject.CharacterObject)
        {
          targetAgent1 = agent;
          break;
        }
      }
      EscortAgentBehavior.AddEscortAgentBehavior(conversationAgent, targetAgent1, (EscortAgentBehavior.OnTargetReachedDelegate) ((Agent agent, ref Agent escortedAgent, ref Agent targetAgent, ref UsableMachine targetMachine, ref Vec3? targetPosition) =>
      {
        MissionConversationLogic.Current.StartConversation(conversationAgent, false);
        return false;
      }));
    }

    public bool conversation_town_or_village_escort_complete_on_condition()
    {
      if (this.CheckIfConversationAgentIsEscortingTheMainAgent())
      {
        EscortAgentBehavior behavior = ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>().GetBehavior<EscortAgentBehavior>();
        if (behavior.IsEscortFinished())
        {
          MBTextManager.SetTextVariable("HERO_GENDER", behavior.TargetAgent.Character.IsFemale ? 1 : 0);
          return true;
        }
      }
      return false;
    }

    public void conversation_town_or_village_escort_complete_on_consequence()
    {
      Agent conversationAgent = ConversationMission.OneToOneConversationAgent;
      if (conversationAgent?.GetComponent<CampaignAgentComponent>().AgentNavigator == null)
        return;
      EscortAgentBehavior.RemoveEscortBehaviorOfAgent(conversationAgent);
    }

    private bool conversation_town_or_village_talk_escorting_commoner_on_condition()
    {
      if (!this.CheckIfConversationAgentIsEscortingTheMainAgent())
        return false;
      EscortAgentBehavior behavior = ConversationMission.OneToOneConversationAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>().GetBehavior<EscortAgentBehavior>();
      float randomFloat = MBRandom.RandomFloat;
      TextObject textObject = (double) randomFloat >= 0.33000001311302185 ? ((double) randomFloat >= 0.6600000262260437 ? new TextObject("{=fasAZDvM}We're on our way to {HERO.LINK}...[ib:demure]") : new TextObject("{=uhwoWUyR}Still haven't taken you to {HERO.LINK}...[ib:demure]")) : new TextObject("{=Eb7KG1bi}{HERO.LINK} should be just around the corner...[ib:normal]");
      textObject.SetCharacterProperties("HERO", (CharacterObject) behavior.TargetAgent.Character);
      MBTextManager.SetTextVariable("STILL_ESCORTING_ANSWER", textObject, false);
      return true;
    }

    private void conversation_town_or_village_talk_stop_escorting_on_consequence()
    {
      if (!this.CheckIfConversationAgentIsEscortingTheMainAgent())
        return;
      EscortAgentBehavior.RemoveEscortBehaviorOfAgent(ConversationMission.OneToOneConversationAgent);
    }

    private bool conversation_liege_delivered_line_on_street_on_condition()
    {
      if (!this.conversation_already_delivered_line_on_street_on_condition())
        return false;
      return Settlement.CurrentSettlement.MapFaction.Leader == Hero.MainHero || Settlement.CurrentSettlement.OwnerClan == Hero.MainHero.Clan;
    }

    private bool conversation_children_already_delivered_line_on_street_on_condition()
    {
      IAgent conversationAgent = Campaign.Current.ConversationManager.OneToOneConversationAgent;
      return this.conversation_already_delivered_line_on_street_on_condition() && this.conversation_children_rhymes_on_condition();
    }

    private bool conversation_already_delivered_line_on_street_on_condition()
    {
      return !this.CheckIfConversationAgentIsEscortingTheMainAgent() && (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Villager || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk) && PlayerEncounter.InsideSettlement;
    }

    private bool conversation_already_delivered_line_in_tavern_on_condition()
    {
      return (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Villager || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk) && PlayerEncounter.InsideSettlement && CampaignMission.Current != null && CampaignMission.Current.Location.StringId == "tavern" && !this.CheckIfConversationAgentIsEscortingTheMainAgent();
    }

    private bool conversation_children_rhymes_on_condition()
    {
      return (double) Campaign.Current.ConversationManager.OneToOneConversationAgent.Age <= 14.0;
    }

    private bool conversation_townsperson_to_disguise_start_on_condition()
    {
      return !this.CheckIfConversationAgentIsEscortingTheMainAgent() && Campaign.Current.ConversationManager.OneToOneConversationAgent != null && (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Villager || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk) && PlayerEncounter.Current != null && PlayerEncounter.InsideSettlement && Campaign.Current.IsMainHeroDisguised;
    }

    private bool conversation_beggar_to_disguise_start_on_condition()
    {
      return this.conversation_beggar_start_on_condition() && Campaign.Current.IsMainHeroDisguised;
    }

    private bool conversation_beggar_start_on_condition()
    {
      return !this.CheckIfConversationAgentIsEscortingTheMainAgent() && Campaign.Current.ConversationManager.OneToOneConversationAgent != null && Settlement.CurrentSettlement != null && (Campaign.Current.ConversationManager.OneToOneConversationCharacter == Settlement.CurrentSettlement.Culture.Beggar || Campaign.Current.ConversationManager.OneToOneConversationCharacter == Settlement.CurrentSettlement.Culture.FemaleBeggar);
    }

    private bool conversation_beggar_delivered_line_on_condition()
    {
      return !this.CheckIfConversationAgentIsEscortingTheMainAgent() && Campaign.Current.ConversationManager.OneToOneConversationAgent != null && Settlement.CurrentSettlement != null && (Campaign.Current.ConversationManager.OneToOneConversationCharacter == Settlement.CurrentSettlement.Culture.Beggar || Campaign.Current.ConversationManager.OneToOneConversationCharacter == Settlement.CurrentSettlement.Culture.FemaleBeggar) && this.conversation_already_delivered_line_on_street_on_condition();
    }

    private bool conversation_beggar_info_on_condition()
    {
      MBTextManager.SetTextVariable("BEGGAR_INFO", "{=zJReEB8Z}Sitting in the marketplace all day one learns many things if one keeps one's ears open... But alas, I have heard nothing recently that might interest your worshipful self.", false);
      return true;
    }

    private bool conversation_town_or_village_start_on_condition()
    {
      if (this.CheckIfConversationAgentIsEscortingTheMainAgent() || Campaign.Current.ConversationManager.OneToOneConversationAgent == null || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Villager && CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Townsfolk || PlayerEncounter.Current == null || !PlayerEncounter.InsideSettlement)
        return false;
      if (this._lastEnteredTime != CampaignTime.Now)
      {
        this._lastEnteredTime = CampaignTime.Now;
        this._rumorsGiven.Clear();
      }
      int key = MathF.Abs(Campaign.Current.ConversationManager.OneToOneConversationAgent.GetHashCode());
      if (this._rumorsGiven.ContainsKey(key))
        return false;
      List<TextObject> conversationScraps = new List<TextObject>();
      if (this.conversation_children_rhymes_on_condition())
      {
        conversationScraps.Add(new TextObject("{=aLAyJPrI}Garios Garios brave and strong... Always right and never wrong...{newline}The men all trust him with their lives.. But not their daughters or their wives."));
        conversationScraps.Add(new TextObject("{=5ZbsASDx}Emp'ror Arenicos feeling fine. Went to bed with a cup of wine.{newline}In the morning he was dead. Now his wife rules in his stead!"));
        conversationScraps.Add(new TextObject("{=FxKgQECI}Lucon Lucon I've been told, sir. Was born old and just got older.{newline}Lives in a palace made of gold. Where it's always dark and it's always cold."));
        conversationScraps.Add(new TextObject("{=YDMlCaaz}Great Khan Monchug lifts his hand. We all hark to his command!{newline}Great Khan Monchug rides away. We go back to nap and play."));
        conversationScraps.Add(new TextObject("{=wrEKw6ip}Cuckoo bird, cuckoo bird, tell me no lies. 'I snuck into another bird's tree'.{newline}Cuckoo bird, cuckoo bird, say something wise. 'There's a king in Battania who's just like me.'"));
        conversationScraps.Add(new TextObject("{=2WI066bI}Nimr Nimr he was killed. Died in the cage of the Banu Qild.{newline}All the ladies cry their grief. All the husbands sigh in relief."));
        conversationScraps.Add(new TextObject("{=Jc8OiSZg}Olek Olek fought a bear. Took it down, fair and square.{newline}Not with his sword and not with his spear. But with his breath of garlic and beer."));
        conversationScraps.Add(new TextObject("{=TCIaDC9X}The foes of Vlandia came a-plundering. King Derthert summoned his men to the keep!{newline}They rode to his muster with their hooves a-thundering. But Derthert had already gone to sleep."));
      }
      else if (this.conversation_beggar_start_on_condition())
        conversationScraps = this.GetBeggarStories();
      else if (this.GetPossibleIssueRumors().Count > 0)
        conversationScraps = this.GetPossibleIssueRumors();
      else
        this.GetPossibleRumors(conversationScraps);
      for (int index = 0; index < conversationScraps.Count; ++index)
      {
        TextObject textObject = conversationScraps[MBRandom.RandomInt(conversationScraps.Count)];
        string str = this.RumorIdentifier(textObject);
        if (!this._rumorsGiven.ContainsValue(str))
        {
          MBTextManager.SetTextVariable("CONVERSATION_SCRAP", textObject, false);
          this._rumorsGiven.Add(key, str);
          return true;
        }
      }
      return false;
    }

    private string RumorIdentifier(TextObject conversationScrap)
    {
      string str = conversationScrap.CopyTextObject().ToString();
      return str.Substring(0, str.Length < 12 ? str.Length : 12);
    }

    private List<TextObject> GetPossibleIssueRumors()
    {
      List<TextObject> possibleIssueRumors = new List<TextObject>();
      foreach (Hero notable in (List<Hero>) Settlement.CurrentSettlement.Notables)
      {
        IssueBase issue = notable.Issue;
        if (issue != null)
        {
          TextObject rumorInSettlement = issue.IssueAsRumorInSettlement;
          if (rumorInSettlement != TextObject.Empty && !this._rumorsGiven.ContainsValue(this.RumorIdentifier(rumorInSettlement)))
            possibleIssueRumors.Add(rumorInSettlement);
        }
      }
      return possibleIssueRumors;
    }

    private List<TextObject> GetBeggarStories()
    {
      List<TextObject> beggarStories = new List<TextObject>();
      beggarStories.Add(new TextObject("{=EiiHoraV}Hard times... Hard times indeed."));
      CharacterObject character1 = (CharacterObject) null;
      CharacterObject character2 = (CharacterObject) null;
      foreach (SettlementComponent boundVillage in (List<Village>) Settlement.CurrentSettlement.BoundVillages)
      {
        foreach (Hero notable in (List<Hero>) boundVillage.Settlement.Notables)
        {
          if (notable.Occupation == Occupation.RuralNotable && notable.GetTraitLevel(DefaultTraits.Mercy) < 0 && notable.GetTraitLevel(DefaultTraits.Generosity) <= 0)
            character1 = notable.CharacterObject;
        }
      }
      foreach (Hero notable in (List<Hero>) Settlement.CurrentSettlement.Notables)
      {
        if (notable.Occupation == Occupation.Merchant && notable.GetTraitLevel(DefaultTraits.Mercy) < 0 && notable.GetTraitLevel(DefaultTraits.Generosity) <= 0)
          character2 = notable.CharacterObject;
      }
      if (CharacterObject.OneToOneConversationCharacter.IsFemale)
      {
        beggarStories.Add(new TextObject("{=ZVbQemrz}My husband was wounded in the wars, and now can't pull a plow. So he lost his tenancy, and now I must beg in the marketplace."));
        beggarStories.Add(new TextObject("{=olKsdJmv}I married bad. That was my misfortune. Drinks his wages and beats me when I say a word, so now I must beg for bread for our children. "));
        beggarStories.Add(new TextObject("{=3kHmtbVZ}What my man did was wrong, there's no denying. But they hanged him, and now what am I to do? Do his children bear his guilt?"));
        beggarStories.Add(new TextObject("{=agL4RTbB}My man and I, we never wed proper. So he made a bit of money in the wars and wanted to marry a rich man's daughter. 'Cast her out,' she told him, and that's what he did."));
        beggarStories.Add(new TextObject("{=k18dhQA1}The plague took my parents and my uncle took their land. But I'd rather beg than be a servant in a rich man's home!"));
      }
      else
      {
        beggarStories.Add(new TextObject("{=oaFFW2bo}The demons come at night and taunt me until dawn. What am I to do?"));
        beggarStories.Add(new TextObject("{=b3MBZKuQ}We came here looking for work, as there was none in the village. But the masters want skilled hands only. With a few coins, I could go home."));
        beggarStories.Add(new TextObject("{=mrtdsccq}My own people chased me from the village. It weren't true, what they said about me. Coveted my land, I'll warrant."));
        beggarStories.Add(new TextObject("{=GKl8U04i}Lamed by an arrow in the leg, and now I can't work a field and I'm no use to anyone, they say."));
        if (character2 != null)
        {
          TextObject to = new TextObject("{=yj0VZ8IZ}I lost a mule loaded with wares when it slid into the river, and {HARSH_MERCHANT.NAME} said he'd take it from my wages for the next year, didn't care if I starved. If I didn't like it then I could go beg on the street, he said to me. So look at me. I stood up to him and look at me now.");
          to.SetCharacterProperties("HARSH_MERCHANT", character2);
          beggarStories.Add(to);
        }
        if (character1 != null)
        {
          TextObject to = new TextObject("{=SGoz7xvk}I tilled the land of {CRUEL_LANDOWNER.NAME}, and paid my rent, and earned him a pretty penny. But the times changed, the prices changed, he took my tenancy from me and said he'd raise sheep there instead. Where was I to go? What I am to do?");
          to.SetCharacterProperties("CRUEL_LANDOWNER", character1);
          beggarStories.Add(to);
        }
      }
      return beggarStories;
    }

    private void GetPossibleRumors(List<TextObject> conversationScraps)
    {
      List<string> stringList = new List<string>();
      stringList.Add("{=8XM8CHIm}brother-in-law");
      stringList.Add("{=VDfyzs5v}nephew");
      stringList.Add("{=NPuHiggC}cousin");
      stringList.Add("{=Mf3vLIQp}uncle");
      int num1 = CampaignTime.Now.GetDayOfYear / 21;
      Town town1 = Settlement.CurrentSettlement.Town;
      float num2 = town1 != null ? town1.Loyalty : 50f;
      bool flag = false;
      Location location = CampaignMission.Current.Location;
      Location locationWithId = LocationComplex.Current.GetLocationWithId("tavern");
      if (Settlement.CurrentSettlement != null && locationWithId == location)
        flag = true;
      if (flag)
      {
        if (num1 == 0)
          conversationScraps.Add(new TextObject("{=sm6ckPnp}It's springtime, my friend. The season of the winds. The season of madness. Now then, I believe I'll have another drink."));
        if (num1 == 1 && !CharacterObject.OneToOneConversationCharacter.IsFemale)
          conversationScraps.Add(new TextObject("{=se2EXQu8}When the heat's this bad, a fellow can build up quite a thirst."));
        if (num1 == 3)
          conversationScraps.Add(new TextObject("{=kDItfaaN}I'll just have one more to keep me warm on the way home."));
        if (Settlement.CurrentSettlement.Culture.StringId == "empire")
          conversationScraps.Add(new TextObject("{=5EXL1MiE}Sometimes I feel like running off to join those hermits over on Mount Erithrys and putting my worries behind me. Even better, maybe some of these great lords would go there. They can retire and live out their days in the sun, not worrying about being beheaded or betrayed, and they wouldn't need to tax us any. Be better for everyone."));
        conversationScraps.Add(new TextObject("{=bFjtk0Op}Well.. Sometimes when you learn a skill, you pick up a certain way of doing it that can help you in some circumstances and hurt you in others. If you wanted to retrain yourself, your companions, or members of your clan to do things a different way, you might try the tournament master at the arena. They'll help you - for a price, of course."));
      }
      conversationScraps.Add(new TextObject("{=U79CXBbj}Heaven watch over us. Heaven give us strength."));
      SettlementComponent.ProsperityLevel prosperityLevel = Settlement.CurrentSettlement.SettlementComponent.GetProsperityLevel();
      if (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Villager)
      {
        if (prosperityLevel > SettlementComponent.ProsperityLevel.Mid)
          conversationScraps.Add(new TextObject("{=KeIGtpxb}Just glad to have full bellies this year in my household. Can't say that for every year."));
        if (num1 == 0 && prosperityLevel < SettlementComponent.ProsperityLevel.Mid)
          conversationScraps.Add(new TextObject("{=dlOCK6Ro}After that winter, the cow's too thin to pull the plough. Don't know where I'll get the money to rent one.[rf:convo_grave]"));
        if (num1 == 1 && prosperityLevel < SettlementComponent.ProsperityLevel.Mid)
          conversationScraps.Add(new TextObject("{=usMQ64pf}Hope there's enough hands for the harvest."));
        if (num1 == 2 && prosperityLevel < SettlementComponent.ProsperityLevel.Mid)
          conversationScraps.Add(new TextObject("{=46Q5MQHK}It was a thin harvest. It will be a lean winter and a cruel spring. You mark my words.[rf:convo_grave]"));
        if (prosperityLevel < SettlementComponent.ProsperityLevel.Mid)
          conversationScraps.Add(new TextObject("{=MuzS4Et1}Heaven help us. If I can't pay the rent, I'll end up on the side of the road with the landless, hoping for a day's work.[rf:confused_annoyed]"));
        if (num1 == 0)
          conversationScraps.Add(new TextObject("{=8bnlS0IV}Ploughing, sowing... Got many weeks of that ahead of us still."));
        if (num1 == 1)
          conversationScraps.Add(new TextObject("{=CSqHz4EG}It's almost harvesting season."));
        if (num1 == 2)
          conversationScraps.Add(new TextObject("{=FNLtDFbn}Time to butcher and salt our meat for the winter."));
        if (num1 == 3)
          conversationScraps.Add(new TextObject("{=TDgoyFBi}Not much work to be done... Sewing and mending and what."));
      }
      if (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk)
      {
        if (prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
          conversationScraps.Add(new TextObject("{=Emw9ut4A}Hard times... Can't find good help these days. Half of 'em are too hungry to work. The other half are thieves. Smart ones all left weeks ago.[rf:confused_annoyed]"));
        if (prosperityLevel > SettlementComponent.ProsperityLevel.Mid && (double) num2 < 50.0)
          conversationScraps.Add(new TextObject("{=mimt3Qph}Every day... More people in the markets... More people at the well... Where do they all come from?"));
        if (prosperityLevel > SettlementComponent.ProsperityLevel.Mid && (double) num2 < 60.0)
          conversationScraps.Add(new TextObject("{=RUZKiW0u}Business is good. Can't deny that. But prices are high and getting higher."));
        if (prosperityLevel < SettlementComponent.ProsperityLevel.Low)
          conversationScraps.Add(new TextObject("{=LKGivHYp}The pittance they call a wage these days... I don't want to leave my kin, but I'm thinking I might have to try my luck in some other town."));
        if (Settlement.CurrentSettlement.Culture.GetCultureCode() == CultureCode.Aserai)
        {
          if (num1 == 1 && prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
            conversationScraps.Add(new TextObject("{=3zZ8ZIca}Damn the summer. Can't sleep at night for the heat. And now they say the well's running low..."));
        }
        else
        {
          if (num1 == 3 && prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
            conversationScraps.Add(new TextObject("{=Tol5zRgG}This winter... Kids are all coughing and wheezing. My old ma's been bed-bound for a month. Can't afford coals for the stove at night. Spring thaw can't come fast enough for me."));
          if (num1 == 2 && prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
            conversationScraps.Add(new TextObject("{=ZVItXrnG}It's a lean autumn, this one. Heaven help us lay in enough wood before the winter."));
        }
      }
      Settlement settlement1 = Settlement.CurrentSettlement.IsTown || Settlement.CurrentSettlement.IsCastle ? Settlement.CurrentSettlement : Settlement.CurrentSettlement.Village.Bound;
      Town town2 = settlement1.Town;
      if ((town2 != null ? ((double) town2.Loyalty < 20.0 ? 1 : 0) : 0) != 0 || settlement1.Town.InRebelliousState)
      {
        conversationScraps.Add(new TextObject("{=ftyp2ul1}Those troublemakers - they're not from around here. I can't believe it's anyone from around here. You hear people talking foreign more and more these days - I'm sure it's them."));
        conversationScraps.Add(new TextObject("{=J1TykdEn}I hear there have been secret meetings in the woods. Solemn oaths, signed in blood. A great wind is going to blow soon - you mark my words."));
      }
      Town town = Settlement.CurrentSettlement.Town;
      if (town == null && Settlement.CurrentSettlement.IsVillage)
        town = Settlement.CurrentSettlement.Village.TradeBound != null ? Settlement.CurrentSettlement.Village.TradeBound.Town : Settlement.CurrentSettlement.Village.Bound.Town;
      IOrderedEnumerable<ItemRosterElement> orderedEnumerable = Settlement.CurrentSettlement.ItemRoster.OrderBy<ItemRosterElement, float>((Func<ItemRosterElement, float>) (x => town.GetItemCategoryPriceIndex(x.EquipmentElement.Item.ItemCategory)));
      List<Town> list1 = Campaign.Current.Settlements.Where<Settlement>((Func<Settlement, bool>) (settlement => settlement.IsTown && settlement != Settlement.CurrentSettlement && Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, Settlement.CurrentSettlement, 80f, out float _))).Select<Settlement, Town>((Func<Settlement, Town>) (settlement => settlement.Town)).ToList<Town>();
      int num3 = 0;
      foreach (ItemRosterElement itemRosterElement in (IEnumerable<ItemRosterElement>) orderedEnumerable)
      {
        ItemObject targetItem = itemRosterElement.EquipmentElement.Item;
        if (targetItem.IsTradeGood)
        {
          int price = town.MarketData.GetPrice(targetItem);
          if (list1.Count > 0)
          {
            Town town3 = list1.MaxBy<Town, int>((Func<Town, int>) (t => t.GetItemPrice(targetItem, (MobileParty) null, false)));
            int variable = town3.GetItemPrice(new EquipmentElement(targetItem), (MobileParty) null, true) - price;
            if (variable > 1)
            {
              ++num3;
              if (num3 <= 4)
              {
                TextObject textObject = TextObject.Empty;
                switch (num3)
                {
                  case 1:
                    textObject = new TextObject("{=8NDuezga}Now, I was talking to my {RANDOM_RELATIVE}, and he tells me he bought some {._}{PLURAL(ITEM_NAME)} around here for cheap and took it to {TOWN_NAME}. Said he made {PRICE_DIFF}{GOLD_ICON} of profit on each one.");
                    break;
                  case 2:
                    textObject = new TextObject("{=ubnVca4L}So, yeah... My {RANDOM_RELATIVE} says he took some {._}{PLURAL(ITEM_NAME)} to {TOWN_NAME} and made {PRICE_DIFF}{GOLD_ICON} in profit. Course he might be talking out of his arse.");
                    break;
                  case 3:
                    textObject = new TextObject("{=4Slck7UB}So, I heard from my {RANDOM_RELATIVE} that he took some {._}{PLURAL(ITEM_NAME)} over to {TOWN_NAME}, and made a profit of {PRICE_DIFF}{GOLD_ICON}.");
                    break;
                  case 4:
                    textObject = new TextObject("{=rTrGXB1o}Yeah.. Word is that {._}{ITEM_NAME} sells well in {TOWN_NAME}. A profit of {PRICE_DIFF}{GOLD_ICON} a load, they say.");
                    break;
                }
                textObject.SetTextVariable("RANDOM_RELATIVE", new TextObject(stringList[MBRandom.RandomInt(0, stringList.Count)]));
                textObject.SetTextVariable("ITEM_NAME", targetItem.Name);
                textObject.SetTextVariable("TOWN_NAME", town3.Name);
                textObject.SetTextVariable("PRICE_DIFF", variable);
                conversationScraps.Add(textObject);
              }
              else
                break;
            }
          }
        }
      }
      Hero leader1 = Settlement.CurrentSettlement.OwnerClan.Leader;
      Hero leader2 = Settlement.CurrentSettlement.MapFaction.Leader;
      int num4 = 0;
      foreach (Hero notable in (List<Hero>) Settlement.CurrentSettlement.Notables)
      {
        if (HeroHelper.DefaultRelation(notable, leader1) < -10)
          ++num4;
      }
      if (leader1.GetTraitLevel(DefaultTraits.Honor) > 0 && prosperityLevel >= SettlementComponent.ProsperityLevel.Low)
      {
        TextObject textObject = new TextObject("{=ztiax0Sn}Say what you will about {?OWNER.GENDER}lady{?}lord{\\?} {OWNER.LINK}... {?OWNER.GENDER}She{?}He{\\?}'ll give the lowest wretch in the realm a fair hearing in {?OWNER.GENDER}her{?}his{\\?} court. Can't deny that.");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (leader1.GetTraitLevel(DefaultTraits.Mercy) < 0 && leader1.GetTraitLevel(DefaultTraits.Generosity) < 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Mid)
      {
        TextObject textObject = new TextObject("{=mfVJBFUD}The tax on this, the tax on that... Now just what do we think our beloved {?OWNER.GENDER}lady{?}lord{\\?} {OWNER.LINK} does with it all?");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (leader1.GetTraitLevel(DefaultTraits.Mercy) > 0 && Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security < 40.0)
      {
        TextObject textObject = new TextObject("{=ZO5RaXMW}Spare us from {?OWNER.GENDER}ladies{?}lords{\\?} like {OWNER.LINK}, whose hearts are too tender to punish the thieves and rogues who terrorize honest folk.");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (leader1.GetTraitLevel(DefaultTraits.Honor) < 0 && Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security < 40.0)
      {
        TextObject textObject = new TextObject("{=bUweVtkk}Why doesn't {OWNER.LINK} do anything about the thieves plying their trade out on the street? Could it be that {?OWNER.GENDER}she{?}he{\\?} is getting a cut of their take?");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security < 40.0 && leader1.GetTraitLevel(DefaultTraits.Honor) > 0)
      {
        TextObject textObject = new TextObject("{=OwnoJUkn}They say that {OWNER.LINK} is an honest {?OWNER.GENDER}woman{?}man{\\?}. But even {?OWNER.GENDER}she{?}he{\\?} can't stop all the thieving and corruption around here.");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security < 40.0 && prosperityLevel >= SettlementComponent.ProsperityLevel.High)
      {
        TextObject textObject = new TextObject("{=wqzyHirl}Look all around you. People making money hand over fist, draped in silks, smelling of wine and perfume. But is it the honest folk? I think not.");
        conversationScraps.Add(textObject);
      }
      if (leader1.GetTraitLevel(DefaultTraits.Mercy) + leader1.GetTraitLevel(DefaultTraits.Generosity) < 0 && prosperityLevel >= SettlementComponent.ProsperityLevel.Mid)
      {
        TextObject textObject = new TextObject("{=7uFFaSHv}Now some people say our {?OWNER.GENDER}lady{?}lord{\\?} {OWNER.LINK} is as mean as a scalded cat. But I say most people are villains, and it's good they feel a little fear. Anyway, there's meat on the table these days, and who can argue with that?");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (leader2.GetTraitLevel(DefaultTraits.Honor) < 0 && leader2.GetTraitLevel(DefaultTraits.Calculating) < 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Mid)
      {
        TextObject textObject = new TextObject("{=nMFY2Pb0}We are doomed I say, doomed. A ruler who cannot control {?RULER.GENDER}her{?}his{\\?} passions brings ruin on the realm.");
        leader2.SetPropertiesToTextObject(textObject, "RULER");
        conversationScraps.Add(textObject);
      }
      if ((double) num2 < 40.0)
        conversationScraps.Add(new TextObject("{=RyAH9Zvk}Now the man in the market said, 'All this trouble and woe means the Heavens aren't pleased with the one on the throne.' 'That's treason talk!' I told him. Of course I did."));
      foreach (LogEntry gameActionLog in (List<LogEntry>) Campaign.Current.LogEntryHistory.GameActionLogs)
      {
        if ((double) gameActionLog.GameTime.ElapsedDaysUntilNow < 60.0)
        {
          if (gameActionLog is VillageStateChangedLogEntry)
          {
            VillageStateChangedLogEntry stateChangedLogEntry = (VillageStateChangedLogEntry) gameActionLog;
            Village village = stateChangedLogEntry.Village;
            if (stateChangedLogEntry.NewState == Village.VillageStates.BeingRaided && village.Settlement.MapFaction == Settlement.CurrentSettlement.MapFaction && village.Settlement != Settlement.CurrentSettlement)
            {
              TextObject textObject = new TextObject("{=JQuCuaVv}I've heard that {ENEMY_NAME} have been raiding across the border... People around here better wake up.");
              textObject.SetTextVariable("ENEMY_NAME", FactionHelper.GetTermUsedByOtherFaction(stateChangedLogEntry.RaiderPartyMapFaction, Settlement.CurrentSettlement.MapFaction, false));
              conversationScraps.Add(textObject);
            }
          }
          TextObject empty = TextObject.Empty;
          if (gameActionLog.GetAsRumor(Settlement.CurrentSettlement, ref empty) > 0)
            conversationScraps.Add(empty);
        }
      }
      int num5 = 0;
      foreach (MobileParty allBanditParty in (List<MobileParty>) MobileParty.AllBanditParties)
      {
        if (Campaign.Current.Models.MapDistanceModel.GetDistance(allBanditParty, Settlement.CurrentSettlement, 15f, out float _))
          ++num5;
      }
      if (num5 > 1 && Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security < 50.0)
      {
        TextObject textObject = new TextObject("{=NPhnQgQS}There's bandits lurking just beyond the walls these days. What about the taxes we pay, I ask you? Why aren't {?OWNER.GENDER}Lady{?}Lord{\\?} {OWNER.LINK}'s men doing their jobs?");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      if (num5 > 1 && Settlement.CurrentSettlement.IsVillage && Settlement.CurrentSettlement.Village.TradeBound != null && (double) Settlement.CurrentSettlement.Village.TradeBound.Town.Security < 50.0)
      {
        TextObject textObject = new TextObject("{=64p9ULVu}There's bandits lurking just beyond the outermost fields, I hear. What about the taxes we pay, I ask you? Why aren't {?OWNER.GENDER}Lady{?}Lord{\\?} {OWNER.LINK}'s men doing their jobs?");
        leader1.SetPropertiesToTextObject(textObject, "OWNER");
        conversationScraps.Add(textObject);
      }
      List<Hero> list2 = Settlement.CurrentSettlement.HeroesWithoutParty.ToList<Hero>();
      list2.Add(Settlement.CurrentSettlement.OwnerClan.Leader);
      foreach (Hero hero in list2)
      {
        Hero character = hero;
        int traitLevel1 = character.GetTraitLevel(DefaultTraits.Mercy);
        int traitLevel2 = character.GetTraitLevel(DefaultTraits.Valor);
        int traitLevel3 = character.GetTraitLevel(DefaultTraits.Generosity);
        int traitLevel4 = character.GetTraitLevel(DefaultTraits.Calculating);
        int traitLevel5 = character.GetTraitLevel(DefaultTraits.Honor);
        if (MathF.Abs(traitLevel1) + MathF.Abs(traitLevel2) + MathF.Abs(traitLevel3) + MathF.Abs(traitLevel5) + MathF.Abs(traitLevel4) >= 2)
        {
          TextObject textObject1 = new TextObject("{=Rvt11UBE}{BASIC_EVAL} {REPUTATION}");
          int num6 = traitLevel1 + traitLevel5 + traitLevel3;
          TextObject textObject2 = !character.IsLord ? new TextObject("{=CkaSSJz1}{NOTABLE.LINK}...") : (num6 <= 0 ? (num6 == 0 || traitLevel1 >= 0 ? new TextObject("{=DgxVa0OP}The {?NOTABLE.GENDER}lady{?}lord{\\?} {NOTABLE.LINK}...") : new TextObject("{=aEL2S1PZ}Heavens protect us from the {?NOTABLE.GENDER}lady{?}lord{\\?} {NOTABLE.LINK}...")) : new TextObject("{=9Box0Yj7}The {?NOTABLE.GENDER}lady{?}lord{\\?} {NOTABLE.LINK}... We're blessed."));
          character.SetPropertiesToTextObject(textObject2, "NOTABLE");
          character.SetPropertiesToTextObject(textObject1, "NOTABLE");
          textObject1.SetTextVariable("BASIC_EVAL", textObject2);
          TextObject matchingTextOrNull = Campaign.Current.ConversationManager.FindMatchingTextOrNull("informal_reputation", character.CharacterObject);
          character.SetPropertiesToTextObject(matchingTextOrNull, "NOTABLE");
          textObject1.SetTextVariable("REPUTATION", matchingTextOrNull.ToString());
          conversationScraps.Add(textObject1);
        }
        int num7 = HeroHelper.DefaultRelation(character, leader1);
        if (character.IsGangLeader && character.GetTraitLevel(DefaultTraits.Mercy) < 0)
        {
          TextObject textObject = new TextObject("{=Xqx0uZva}I told that silly {RANDOM_RELATIVE} of mine. I told him. I said, 'You take money from {NOTABLE.LINK}, {?NOTABLE.GENDER}she{?}he{\\?}'ll want back double. And if you value the bones in your hands, you'll pay.' I told him, I did.");
          textObject.SetTextVariable("RANDOM_RELATIVE", new TextObject(stringList[MBRandom.RandomInt(0, stringList.Count)]));
          character.SetPropertiesToTextObject(textObject, "NOTABLE");
          conversationScraps.Add(textObject);
        }
        if (character.IsGangLeader && character.GetTraitLevel(DefaultTraits.Generosity) - character.GetTraitLevel(DefaultTraits.Mercy) >= 0)
        {
          TextObject textObject = new TextObject("{=PJ7BhyOy}I said to that good-for-nothing... I said to him, 'You leave my daughter alone, or {NOTABLE.LINK} will hear about it.' Hah! I don't see him tomcatting around outside my home any more, that's for sure.");
          character.SetPropertiesToTextObject(textObject, "NOTABLE");
          conversationScraps.Add(textObject);
        }
        if (character.IsGangLeader && character.GetTraitLevel(DefaultTraits.Honor) + character.GetTraitLevel(DefaultTraits.Generosity) + character.GetTraitLevel(DefaultTraits.Mercy) < -1)
        {
          TextObject textObject = new TextObject("{=ZhCRL9mY}All those bastards walking around drunk and bothering folks.. But they work for {NOTABLE.LINK} and you can't say a thing if you value your head.");
          character.SetPropertiesToTextObject(textObject, "NOTABLE");
          conversationScraps.Add(textObject);
        }
        if (character.IsGangLeader && character.GetTraitLevel(DefaultTraits.Mercy) >= 0)
        {
          TextObject textObject = new TextObject("{=GeJuBar0}Now, some will tell you that {NOTABLE.LINK} is no better than a common thief who deserves the gallows, but my cousin says {NOTABLE.FIRSTNAME} did him a good turn. So I don't know what to believe...");
          character.SetPropertiesToTextObject(textObject, "NOTABLE");
          conversationScraps.Add(textObject);
        }
        if (character.IsMerchant && Settlement.CurrentSettlement.IsTown)
        {
          List<Workshop> list3 = ((IEnumerable<Workshop>) Settlement.CurrentSettlement.Town.Workshops).Where<Workshop>((Func<Workshop, bool>) (x => x.Owner == character)).OrderByDescending<Workshop, int>((Func<Workshop, int>) (x => x.ProfitMade)).ToList<Workshop>();
          if (list3.Count > 0)
          {
            Workshop workshop = list3[0];
            if (traitLevel3 > 0 && traitLevel1 < 0)
            {
              TextObject textObject = new TextObject("{=xP8cKZFE}They say the merchant {NOTABLE.LINK} is hiring at {?NOTABLE.GENDER}her{?}his{\\?} {.%}{SHOP_TYPE}{.%}. {?NOTABLE.GENDER}She{?}He{\\?}'s a harsh master but a fair one, they say.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel3 + traitLevel1 > 0)
            {
              TextObject textObject = new TextObject("{=9O8a1Yz8}I heard in the market that {NOTABLE.LINK} is hiring at {?NOTABLE.GENDER}her{?}his{\\?} {.%}{SHOP_TYPE}{.%}. Treats {?NOTABLE.GENDER}her{?}his{\\?} workers well, they say.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel5 < 0 && traitLevel1 + traitLevel3 < 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
            {
              TextObject textObject = new TextObject("{=8N3cs42a}So... The word is that {NOTABLE.LINK} is looking to cut costs at {?NOTABLE.GENDER}her{?}his{\\?} {.%}{SHOP_TYPE}{.%}. They say {?NOTABLE.GENDER}she{?}he{\\?}'s been docking the men's wages right and left.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel5 < 0)
            {
              TextObject textObject = new TextObject("{=e9bLGCQu}They say {NOTABLE.LINK} is hiring at {?NOTABLE.GENDER}her{?}his{\\?} {.%}{SHOP_TYPE}{.%}. {?NOTABLE.GENDER}She{?}He{\\?}'s a slippery one.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel1 + traitLevel3 < 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Low)
            {
              TextObject textObject = new TextObject("{=LM1yg5tI}They say {NOTABLE.LINK} turned one of {?NOTABLE.GENDER}her{?}his{\\?} artisans at the {.%}{SHOP_TYPE}{.%} out on the street for not showing up to work at first light. Hard times, these.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel1 + traitLevel3 < 0)
            {
              TextObject textObject = new TextObject("{=dmaCQda0}Yeah. About that {NOTABLE.LINK}. A hard {?NOTABLE.GENDER}one{?}master{\\?} to work for, they say. One mistake and you're out on the street.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
            if (traitLevel4 > 0 && prosperityLevel >= SettlementComponent.ProsperityLevel.High)
            {
              TextObject textObject = new TextObject("{=TMhUM4tz}Heard that {NOTABLE.LINK} is making money hand over fist from {?NOTABLE.GENDER}her{?}his{\\?} {.%}{SHOP_TYPE}{.%}. A cunning one, {?NOTABLE.GENDER}she{?}he{\\?} is.");
              textObject.SetTextVariable("SHOP_TYPE", workshop.WorkshopType.Name);
              character.SetPropertiesToTextObject(textObject, "NOTABLE");
              conversationScraps.Add(textObject);
            }
          }
        }
        if (character.IsHeadman || character.IsArtisan)
        {
          if (prosperityLevel <= SettlementComponent.ProsperityLevel.Low && num7 >= 10)
          {
            TextObject textObject = new TextObject("{=ko2Nb5im}I know times are hard, but {NOTABLE.LINK} says {?OWNER.GENDER}lady{?}lord{\\?} {OWNER.LINK} is doing what {?OWNER.GENDER}she{?}he{\\?} can, and I trust {NOTABLE.FIRSTNAME}.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            leader1.SetPropertiesToTextObject(textObject, "OWNER");
            conversationScraps.Add(textObject);
          }
          if (prosperityLevel >= SettlementComponent.ProsperityLevel.High && num7 >= 10)
          {
            TextObject textObject = new TextObject("{=CdRtnwwX}Things are good, and {NOTABLE.LINK} says we should credit this to the wisdom of {?OWNER.GENDER}lady{?}lord{\\?} {OWNER.LINK}.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            leader1.SetPropertiesToTextObject(textObject, "OWNER");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Honor) > 0)
          {
            TextObject textObject = new TextObject("{=Ku49Ipkf}I'll tell anyone who asks: {NOTABLE.LINK} is a righteous {?NOTABLE.GENDER}woman{?}man{\\?}, and speaks for the poor folk. The lords of this land must listen to {?NOTABLE.GENDER}her{?}him{\\?}, or misfortune will fall upon us.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Mercy) > 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Mid)
          {
            TextObject textObject = new TextObject("{=P7aRBg2h}Thank the heavens we have {?NOTABLE.GENDER}women{?}men{\\?} like {NOTABLE.LINK} to help the poor in these hard times.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Mercy) <= 0 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=Fu47uNh4}My sister's husband is in the tavern with all the layabouts, throwing away his wages on drinking and dice while his family weeps. I hope {NOTABLE.LINK} gathers some righteous folk and sets fire to it! I'd carry a torch myself, I would.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (leader1.GetTraitLevel(DefaultTraits.Honor) >= 0 && num7 > 0 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=NOb4GcOT}{NOTABLE.LINK} says we must trust in the wisdom of the authorities, so long as they follow the laws of the Heavens.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (num7 < -10 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=LaBQQ7ue}{NOTABLE.LINK} says that a fish rots from the head. Well, look around this place. I think we know what he's getting at.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
        }
        if (character.IsPreacher)
        {
          if (character.GetTraitLevel(DefaultTraits.Honor) > 0)
          {
            TextObject textObject = new TextObject("{=9XijWk1o}I'll tell anyone who asks: {NOTABLE.LINK} is a righteous {?NOTABLE.GENDER}woman{?}man{\\?}, and the Heavens speak through {?NOTABLE.GENDER}her{?}his{\\?} mouth. The lords of this land must listen to {?NOTABLE.GENDER}her{?}him{\\?}, or misfortune will fall upon us.");
            conversationScraps.Add(new TextObject(textObject.ToString()));
          }
          if (character.GetTraitLevel(DefaultTraits.Mercy) > 0 && prosperityLevel <= SettlementComponent.ProsperityLevel.Mid)
          {
            TextObject textObject = new TextObject("{=P7aRBg2h}Thank the heavens we have {?NOTABLE.GENDER}women{?}men{\\?} like {NOTABLE.LINK} to help the poor in these hard times.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(new TextObject(textObject.ToString()));
          }
          if (character.GetTraitLevel(DefaultTraits.Mercy) <= 0 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=Fu47uNh4}My sister's husband is in the tavern with all the layabouts, throwing away his wages on drinking and dice while his family weeps. I hope {NOTABLE.LINK} gathers some righteous folk and sets fire to it! I'd carry a torch myself, I would.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (leader1.GetTraitLevel(DefaultTraits.Honor) >= 0 && num7 > 0 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=NOb4GcOT}{NOTABLE.LINK} says we must trust in the wisdom of the authorities, so long as they follow the laws of the Heavens.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (num7 < -10 && Settlement.CurrentSettlement.IsTown && !flag)
          {
            TextObject textObject = new TextObject("{=LaBQQ7ue}{NOTABLE.LINK} says that a fish rots from the head. Well, look around this place. I think we know what he's getting at.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
        }
        if (character.IsRuralNotable)
        {
          if (character.GetTraitLevel(DefaultTraits.Honor) < 0 && character.GetTraitLevel(DefaultTraits.Generosity) <= 0 && character.GetTraitLevel(DefaultTraits.Mercy) <= 0)
          {
            TextObject textObject = new TextObject("{=avk9kNn1}Funny how the boundary stones on {NOTABLE.FIRSTNAME}'s land always seem a little bit closer every time you look at them.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Generosity) < 0 && character.GetTraitLevel(DefaultTraits.Mercy) <= 0)
          {
            TextObject textObject = new TextObject("{=Ckou6bfg}Old skinflint {NOTABLE.FIRSTNAME} is my great-uncle's son, and not a blessed penny will {?NOTABLE.GENDER}she{?}he{\\?} give me in hard times.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Calculating) > 0 && character.GetTraitLevel(DefaultTraits.Generosity) <= 0)
          {
            TextObject textObject = new TextObject("{=Xo5lc6sz}If you've got more mouths in your house than your land will feed, {NOTABLE.FIRSTNAME} will let you work a bit of {?NOTABLE.GENDER}her{?}his{\\?} property - but he'll take a third of your harvest, even if you're kin.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Generosity) > 0)
          {
            TextObject textObject = new TextObject("{=DeoalRXY}One of {NOTABLE.FIRSTNAME}'s hunting hounds took down my cousin's sheep, but {NOTABLE.FIRSTNAME} paid twice the beast's value in compensation -- very fair, I say, very fair indeed.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Calculating) - character.GetTraitLevel(DefaultTraits.Mercy) < 0)
          {
            TextObject textObject = new TextObject("{=o3MDpesZ}The way {NOTABLE.FIRSTNAME} helps out {?NOTABLE.GENDER}her{?}his{\\?} good-for-nothing relatives, {?NOTABLE.GENDER}she{?}he{\\?} won't have any seed grain for the next sewing -- and I, for one, will laugh.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Honor) > 0 && character.GetTraitLevel(DefaultTraits.Generosity) < 0)
          {
            TextObject textObject = new TextObject("{=QyGQanO7}There's no doubt that {NOTABLE.FIRSTNAME} is a stiff-necked old goat, but you can't say {?NOTABLE.GENDER}she{?}he{\\?}'s not honest as the day is long.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
          if (character.GetTraitLevel(DefaultTraits.Generosity) + character.GetTraitLevel(DefaultTraits.Mercy) + character.GetTraitLevel(DefaultTraits.Calculating) > 0)
          {
            TextObject textObject = new TextObject("{=NazK9rwF}A decent {?NOTABLE.GENDER}woman{?}man{\\?}, {NOTABLE.FIRSTNAME} is, as rich folk go. Always keeps a bit of grain to help out any of those who ate their seed over the winter. Knows the worth of a good name, {?NOTABLE.GENDER}she{?}he{\\?} does.");
            character.SetPropertiesToTextObject(textObject, "NOTABLE");
            conversationScraps.Add(textObject);
          }
        }
      }
    }

    private bool conversation_villager_talk_start_on_condition()
    {
      return (CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Villager || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Townsfolk) && PlayerEncounter.Current != null && PlayerEncounter.InsideSettlement;
    }

    private bool conversation_townsfolk_ask_asses_prices_on_condition()
    {
      return Settlement.CurrentSettlement.IsTown;
    }

    private void conversation_townsfolk_ask_asses_prices_on_consequence()
    {
    }
  }
}
