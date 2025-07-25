// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.GuardsCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation;
using SandBox.Missions.AgentBehaviors;
using SandBox.Missions.MissionLogics;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class GuardsCampaignBehavior : CampaignBehaviorBase
  {
    public const float UnarmedTownGuardSpawnRate = 0.4f;
    private readonly List<(CharacterObject, int)> _garrisonTroops = new List<(CharacterObject, int)>();

    public override void RegisterEvents()
    {
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

    private float GetProsperityMultiplier(SettlementComponent settlement)
    {
      return (float) (((double) settlement.GetProsperityLevel() + 1.0) / 3.0);
    }

    private void AddGarrisonAndPrisonCharacters(Settlement settlement)
    {
      this.InitializeGarrisonCharacters(settlement);
      Location locationWithId = settlement.LocationComplex.GetLocationWithId("center");
      CultureObject cultureObject = Campaign.Current.GameMode == CampaignGameMode.Campaign ? settlement.MapFaction.Culture : settlement.Culture;
      CreateLocationCharacterDelegate createDelegate = new CreateLocationCharacterDelegate(this.CreatePrisonGuard);
      CultureObject culture = cultureObject;
      locationWithId.AddLocationCharacters(createDelegate, culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    private void InitializeGarrisonCharacters(Settlement settlement)
    {
      this._garrisonTroops.Clear();
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      MobileParty garrisonParty = settlement.Town.GarrisonParty;
      if (garrisonParty == null)
        return;
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) garrisonParty.MemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.Occupation == Occupation.Soldier)
          this._garrisonTroops.Add((troopRosterElement.Character, troopRosterElement.Number - troopRosterElement.WoundedNumber));
      }
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      Settlement settlement = PlayerEncounter.LocationEncounter.Settlement;
      if (!settlement.IsFortification)
        return;
      this.AddGarrisonAndPrisonCharacters(settlement);
      if (!settlement.IsTown && !settlement.IsCastle || CampaignMission.Current == null)
        return;
      Location location = CampaignMission.Current.Location;
      this.AddGuardsFromGarrison(settlement, unusedUsablePointCount, location);
    }

    private void AddGuardsFromGarrison(
      Settlement settlement,
      Dictionary<string, int> unusedUsablePointCount,
      Location location)
    {
      int num1;
      unusedUsablePointCount.TryGetValue("sp_guard", out num1);
      int num2;
      unusedUsablePointCount.TryGetValue("sp_guard_with_spear", out num2);
      int num3;
      unusedUsablePointCount.TryGetValue("sp_guard_patrol", out num3);
      int num4;
      unusedUsablePointCount.TryGetValue("sp_guard_unarmed", out num4);
      int count1;
      unusedUsablePointCount.TryGetValue("sp_guard_castle", out count1);
      float prosperityMultiplier = this.GetProsperityMultiplier(settlement.SettlementComponent);
      float num5 = settlement.IsCastle ? 1.6f : 0.4f;
      int count2 = (int) ((double) num1 * (double) prosperityMultiplier);
      int count3 = (int) ((double) num2 * (double) prosperityMultiplier);
      int count4 = (int) ((double) num3 * (double) prosperityMultiplier);
      int count5 = (int) ((double) num4 * (double) prosperityMultiplier * (double) num5);
      if (count1 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateCastleGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count1);
      if (count2 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateStandGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count2);
      if (count3 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateStandGuardWithSpear), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count3);
      if (count4 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreatePatrollingGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count4);
      if (count5 > 0 && location != settlement.LocationComplex.GetLocationWithId("lordshall"))
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateUnarmedGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, count5);
      if (!(location.StringId == "prison"))
        return;
      int num6;
      if (unusedUsablePointCount.TryGetValue("area_marker_1", out num6) && num6 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateStandGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
      if (unusedUsablePointCount.TryGetValue("area_marker_2", out num6) && num6 > 0)
        location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateStandGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
      if (!unusedUsablePointCount.TryGetValue("area_marker_3", out num6) || num6 <= 0)
        return;
      location.AddLocationCharacters(new CreateLocationCharacterDelegate(this.CreateStandGuard), settlement.Culture, LocationCharacter.CharacterRelations.Neutral, 1);
    }

    private static ItemObject GetSuitableSpear(CultureObject culture)
    {
      return MBObjectManager.Instance.GetObject<ItemObject>(culture.StringId == "battania" ? "northern_spear_2_t3" : "western_spear_3_t3");
    }

    private AgentData TakeGuardAgentDataFromGarrisonTroopList(
      CultureObject culture,
      bool overrideWeaponWithSpear = false,
      bool unarmed = false)
    {
      CharacterObject guardRosterElement;
      if (this._garrisonTroops.Count > 0)
      {
        List<((CharacterObject, int), float)> weightList = new List<((CharacterObject, int), float)>();
        foreach ((CharacterObject, int) garrisonTroop in this._garrisonTroops)
          weightList.Add(((garrisonTroop.Item1, garrisonTroop.Item2), (float) garrisonTroop.Item1.Level));
        int chosenIndex;
        (CharacterObject, int) tuple = MBRandom.ChooseWeighted<(CharacterObject, int)>((IReadOnlyList<((CharacterObject, int), float)>) weightList, out chosenIndex);
        guardRosterElement = tuple.Item1;
        if (tuple.Item2 <= 1)
          this._garrisonTroops.RemoveAt(chosenIndex);
        else
          this._garrisonTroops[chosenIndex] = (tuple.Item1, tuple.Item2 - 1);
      }
      else
        guardRosterElement = culture.Guard;
      return GuardsCampaignBehavior.PrepareGuardAgentDataFromGarrison(guardRosterElement, overrideWeaponWithSpear, unarmed);
    }

    public static AgentData PrepareGuardAgentDataFromGarrison(
      CharacterObject guardRosterElement,
      bool overrideWeaponWithSpear = false,
      bool unarmed = false)
    {
      Banner banner = Campaign.Current.GameMode == CampaignGameMode.Campaign ? PlayerEncounter.LocationEncounter.Settlement.OwnerClan.Banner : (Banner) null;
      Equipment equipmentElements = Equipment.GetRandomEquipmentElements((BasicCharacterObject) guardRosterElement, false);
      Dictionary<ItemObject.ItemTypeEnum, int> dictionary1 = new Dictionary<ItemObject.ItemTypeEnum, int>()
      {
        {
          ItemObject.ItemTypeEnum.Polearm,
          0
        },
        {
          ItemObject.ItemTypeEnum.Crossbow,
          0
        },
        {
          ItemObject.ItemTypeEnum.Bolts,
          0
        },
        {
          ItemObject.ItemTypeEnum.Bow,
          0
        },
        {
          ItemObject.ItemTypeEnum.Arrows,
          0
        },
        {
          ItemObject.ItemTypeEnum.Thrown,
          0
        },
        {
          ItemObject.ItemTypeEnum.Shield,
          0
        }
      };
      int num1 = 0;
      EquipmentElement equipmentElement;
      for (int index = 0; index <= 4; ++index)
      {
        equipmentElement = equipmentElements[index];
        if (equipmentElement.Item != null)
        {
          Dictionary<ItemObject.ItemTypeEnum, int> dictionary2 = dictionary1;
          equipmentElement = equipmentElements[index];
          int itemType1 = (int) equipmentElement.Item.ItemType;
          if (dictionary2.ContainsKey((ItemObject.ItemTypeEnum) itemType1))
          {
            Dictionary<ItemObject.ItemTypeEnum, int> dictionary3 = dictionary1;
            equipmentElement = equipmentElements[index];
            ItemObject.ItemTypeEnum itemType2 = equipmentElement.Item.ItemType;
            dictionary3[itemType2]++;
          }
          else
            ++num1;
        }
      }
      if (overrideWeaponWithSpear && dictionary1[ItemObject.ItemTypeEnum.Polearm] > 0)
        --dictionary1[ItemObject.ItemTypeEnum.Polearm];
      if (num1 > 0)
        --num1;
      else if (dictionary1[ItemObject.ItemTypeEnum.Polearm] > 0)
        --dictionary1[ItemObject.ItemTypeEnum.Polearm];
      else if (dictionary1[ItemObject.ItemTypeEnum.Bow] > 0)
      {
        --dictionary1[ItemObject.ItemTypeEnum.Arrows];
        --dictionary1[ItemObject.ItemTypeEnum.Bow];
      }
      else if (dictionary1[ItemObject.ItemTypeEnum.Crossbow] > 0)
      {
        --dictionary1[ItemObject.ItemTypeEnum.Crossbow];
        --dictionary1[ItemObject.ItemTypeEnum.Bolts];
      }
      for (int index = 4; index >= 0; --index)
      {
        equipmentElement = equipmentElements[index];
        if (equipmentElement.Item != null)
        {
          bool flag = false;
          Dictionary<ItemObject.ItemTypeEnum, int> dictionary4 = dictionary1;
          equipmentElement = equipmentElements[index];
          int itemType3 = (int) equipmentElement.Item.ItemType;
          int num2;
          ref int local = ref num2;
          if (dictionary4.TryGetValue((ItemObject.ItemTypeEnum) itemType3, out local))
          {
            if (num2 > 0)
            {
              flag = true;
              Dictionary<ItemObject.ItemTypeEnum, int> dictionary5 = dictionary1;
              equipmentElement = equipmentElements[index];
              ItemObject.ItemTypeEnum itemType4 = equipmentElement.Item.ItemType;
              dictionary5[itemType4]--;
            }
          }
          else if (num1 > 0)
          {
            flag = true;
            --num1;
          }
          if (flag)
          {
            Equipment equipment = equipmentElements;
            int num3 = index;
            equipmentElement = new EquipmentElement();
            EquipmentElement itemRosterElement = equipmentElement;
            equipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) num3, itemRosterElement);
          }
        }
      }
      if (overrideWeaponWithSpear)
      {
        if (!GuardsCampaignBehavior.IfEquipmentHasSpearSwapSlots(equipmentElements))
        {
          ItemObject suitableSpear = GuardsCampaignBehavior.GetSuitableSpear(guardRosterElement.Culture);
          equipmentElements.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon3, new EquipmentElement(suitableSpear));
          GuardsCampaignBehavior.IfEquipmentHasSpearSwapSlots(equipmentElements);
        }
      }
      else if (unarmed)
      {
        Equipment equipment1 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement1 = equipmentElement;
        equipment1.AddEquipmentToSlotWithoutAgent(EquipmentIndex.WeaponItemBeginSlot, itemRosterElement1);
        Equipment equipment2 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement2 = equipmentElement;
        equipment2.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon1, itemRosterElement2);
        Equipment equipment3 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement3 = equipmentElement;
        equipment3.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon2, itemRosterElement3);
        Equipment equipment4 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement4 = equipmentElement;
        equipment4.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Weapon3, itemRosterElement4);
        Equipment equipment5 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement5 = equipmentElement;
        equipment5.AddEquipmentToSlotWithoutAgent(EquipmentIndex.ExtraWeaponSlot, itemRosterElement5);
        Equipment equipment6 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement6 = equipmentElement;
        equipment6.AddEquipmentToSlotWithoutAgent(EquipmentIndex.NumAllWeaponSlots, itemRosterElement6);
        Equipment equipment7 = equipmentElements;
        equipmentElement = new EquipmentElement();
        EquipmentElement itemRosterElement7 = equipmentElement;
        equipment7.AddEquipmentToSlotWithoutAgent(EquipmentIndex.Gloves, itemRosterElement7);
      }
      Monster monsterWithSuffix = TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(guardRosterElement.Race, "_settlement");
      return new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) guardRosterElement, banner: banner)).Equipment(equipmentElements).Monster(monsterWithSuffix).NoHorses(true);
    }

    private static bool IfEquipmentHasSpearSwapSlots(Equipment equipment)
    {
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
      {
        ItemObject itemObject = equipment[equipmentIndex].Item;
        if (itemObject != null && itemObject.WeaponComponent.PrimaryWeapon.IsPolearm)
        {
          Equipment.SwapWeapons(equipment, equipmentIndex, EquipmentIndex.WeaponItemBeginSlot);
          return true;
        }
      }
      return false;
    }

    private void RemoveShields(Equipment equipment)
    {
      for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
      {
        ItemObject itemObject = equipment[equipmentIndex].Item;
        if (itemObject != null && itemObject.WeaponComponent.PrimaryWeapon.IsShield)
          equipment.AddEquipmentToSlotWithoutAgent(equipmentIndex, new EquipmentElement());
      }
    }

    private LocationCharacter CreateCastleGuard(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      AgentData garrisonTroopList = this.TakeGuardAgentDataFromGarrisonTroopList(culture, true);
      return new LocationCharacter(garrisonTroopList, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddStandGuardBehaviors), "sp_guard_castle", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(garrisonTroopList.AgentMonster, garrisonTroopList.AgentIsFemale, "_guard"), false);
    }

    private LocationCharacter CreateStandGuard(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      AgentData garrisonTroopList = this.TakeGuardAgentDataFromGarrisonTroopList(culture);
      return new LocationCharacter(garrisonTroopList, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddStandGuardBehaviors), "sp_guard", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(garrisonTroopList.AgentMonster, garrisonTroopList.AgentIsFemale, "_guard"), false);
    }

    private LocationCharacter CreateStandGuardWithSpear(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      AgentData garrisonTroopList = this.TakeGuardAgentDataFromGarrisonTroopList(culture, true);
      return new LocationCharacter(garrisonTroopList, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddStandGuardBehaviors), "sp_guard_with_spear", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(garrisonTroopList.AgentMonster, garrisonTroopList.AgentIsFemale, "_guard"), false);
    }

    private LocationCharacter CreateUnarmedGuard(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      AgentData garrisonTroopList = this.TakeGuardAgentDataFromGarrisonTroopList(culture, unarmed: true);
      return new LocationCharacter(garrisonTroopList, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddOutdoorWandererBehaviors), "sp_guard_unarmed", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(garrisonTroopList.AgentMonster, garrisonTroopList.AgentIsFemale, "_unarmed_guard"), false);
    }

    private LocationCharacter CreatePatrollingGuard(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      AgentData garrisonTroopList = this.TakeGuardAgentDataFromGarrisonTroopList(culture);
      return new LocationCharacter(garrisonTroopList, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddPatrollingGuardBehaviors), "sp_guard_patrol", true, LocationCharacter.CharacterRelations.Neutral, ActionSetCode.GenerateActionSetNameWithSuffix(garrisonTroopList.AgentMonster, garrisonTroopList.AgentIsFemale, "_guard"), false);
    }

    private LocationCharacter CreatePrisonGuard(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject prisonGuard = culture.PrisonGuard;
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) prisonGuard)).Monster(TaleWorlds.Core.FaceGen.GetMonsterWithSuffix(prisonGuard.Race, "_settlement"));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddStandGuardBehaviors), "sp_prison_guard", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_guard"), false, true);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("disguise_start_conversation_alt", "start", "close_window", "{=uTycGRdI}You need to move along. I'm on duty right now and I can't spare any coin. May Heaven provide.", new ConversationSentence.OnConditionDelegate(this.conversation_disguised_start_on_condition_alt), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("disguise_start_conversation", "start", "close_window", "{=P98iCLjl}Get out of my face, you vile beggar.[if:convo_angry]", new ConversationSentence.OnConditionDelegate(this.conversation_disguised_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_start_criminal", "start", "prison_guard_talk_criminal", "{=0UUCTaEj}We hear a lot of complaints about you lately. You better start behaving or you'll get yourself a good flogging.[if:convo_mocking_revenge]", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_criminal_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_ask_criminal", "prison_guard_talk_criminal", "prison_guard_talk", "{=XqTa0iQZ}What do you want, you degenerate?[if:convo_stern]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_start", "start", "prison_guard_talk", "{=6SppoTum}Yes? What do you want?", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_ask_prisoners", "prison_guard_talk", "prison_guard_ask_prisoners", "{=av0bRae8}Who is imprisoned here?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_ask_prisoner_talk", "prison_guard_talk", "close_window", "{=QxIXbHai}I want to speak with a prisoner (Cheat).", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_visit_prison_cheat_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_prison_guard_visit_prison_on_consequence));
      campaignGameStarter.AddPlayerLine("prison_guard_ask_prisoner_talk_2", "prison_guard_talk", "prison_guard_visit_prison", "{=EGI6ztlH}I want to speak with a prisoner.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_talk_end", "prison_guard_talk", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_talk_about_prisoners", "prison_guard_ask_prisoners", "prison_guard_talk", "{=2eydhtcz}Currently, {PRISONER_NAMES} {?IS_PLURAL}are{?}is{\\?} imprisoned here.", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_talk_about_prisoners_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_prison_ask_for_permission", "prison_guard_visit_prison", "prison_guard_visit_prison_ask_for_permission_answer", "{=XN0XZAkI}I can't let you in. My {?SETTLEMENT_OWNER.GENDER}Lady{?}Lord{\\?} {SETTLEMENT_OWNER.NAME} would be furious.", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_reject_visit_prison_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_prison", "prison_guard_visit_prison", "close_window", "{=XWpEpaQ4}Of course, {?PLAYER.GENDER}madam{?}sir{\\?}. Go in.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_prison_guard_visit_prison_on_consequence));
      campaignGameStarter.AddPlayerLine("prison_guard_visit_prison_ask_answer", "prison_guard_visit_prison_ask_for_permission_answer", "prison_guard_visit_prison_ask_for_permission_guard_answer", "{=k3b5KqSc}Come on now. I thought you were the boss here.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_prison_ask_answer_3", "prison_guard_visit_prison_ask_for_permission_guard_answer", "prison_guard_visit_prison_ask_for_permission_answer_options", "{=JaAltoKP}Um... What are you saying?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_visit_permission_try_bribe", "prison_guard_visit_prison_ask_for_permission_answer_options", "prison_guard_bribe_answer_satisfied", "{=dY3Vazug}I found a purse with {AMOUNT}{GOLD_ICON} a few paces away. I reckon it belongs to you.", new ConversationSentence.OnConditionDelegate(this.prison_guard_visit_permission_try_bribe_on_condition), (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.can_player_bribe_to_prison_guard_clickable));
      campaignGameStarter.AddPlayerLine("prison_guard_visit_prison_ask_answer_3_2", "prison_guard_visit_prison_ask_for_permission_answer_options", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_prison_nobody_inside", "prison_guard_visit_prison", "prison_guard_talk", "{=rVHbbrCQ}We're not holding anyone in here right now. There's no reason for you to go in.[ib:closed]", new ConversationSentence.OnConditionDelegate(this.conversation_prison_guard_visit_prison_nobody_inside_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_visit_empty_prison", "prison_guard_visit_prison_nobody_1", "close_window", "{=b3KFoJJ8}All right then. I'll have a look at the prison.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_prison_guard_visit_prison_on_consequence));
      campaignGameStarter.AddPlayerLine("prison_guard_visit_empty_prison_2", "prison_guard_visit_prison_nobody_2", "close_window", "{=b3KFoJJ8}All right then. I'll have a look at the prison.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_not_visit_empty_prison", "prison_guard_visit_prison_nobody_1", "close_window", "{=L5vAhxhO}I have more important business to do.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_not_visit_empty_prison_2", "prison_guard_visit_prison_nobody_2", "close_window", "{=L5vAhxhO}I have more important business to do.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("prison_guard_visit_permission_leave", "prison_guard_visit_prison_2", "close_window", "{=qPRl07mD}All right then. I'll try that.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_permission_bribe", "prison_guard_bribe_answer_satisfied", "close_window", "{=fCrVeHP3}Ah! I was looking for this all day. How good of you to bring it back {?PLAYER.GENDER}madam{?}sir{\\?}. Well, now that I know what an honest {?PLAYER.GENDER}lady{?}man{\\?} you are, there can be no harm in letting you inside for a look. Go in.... Just so you know, though -- I'll be hanging onto the keys, in case you were thinking about undoing anyone's chains.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_prison_guard_visit_permission_bribe_on_consequence));
      campaignGameStarter.AddPlayerLine("prison_guard_visit_permission_try_break", "prison_guard_visit_prison_4", "prison_guard_visit_break", "{=htfLEQlf}Give me the keys to the cells -- now!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("prison_guard_visit_break", "prison_guard_visit_break", "close_window", "{=Kto7RWKE}Help! Help! Prison break!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_prison_guard_visit_break_on_consequence));
      campaignGameStarter.AddDialogLine("castle_guard_start_criminal", "start", "castle_guard_talk_criminal", "{=0UUCTaEj}We hear a lot of complaints about you lately. You better start behaving or you'll get yourself a good flogging.[if:convo_mocking_revenge]", new ConversationSentence.OnConditionDelegate(this.conversation_castle_guard_criminal_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("castle_guard_ask_criminal", "castle_guard_talk_criminal", "castle_guard_talk", "{=XqTa0iQZ}What do you want, you degenerate?[if:convo_stern]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("castle_guard_start", "start", "castle_guard_talk", "{=6SppoTum}Yes? What do you want?", new ConversationSentence.OnConditionDelegate(this.conversation_castle_guard_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("guard_start", "start", "close_window", "{=!}{GUARD_COMMENT}", new ConversationSentence.OnConditionDelegate(this.conversation_guard_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_ask_for_permission_to_enter_lords_hall", "castle_guard_talk", "player_ask_permission_to_lords_hall", "{=b2h3r1kL}I want to visit the lord's hall.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_ask_for_permission_to_enter_lords_hall_2", "castle_guard_talk", "close_window", "{=never_mind}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("castle_guard_no_permission_nobody_inside", "player_ask_permission_to_lords_hall", "permisson_for_lords_hall", "{=RJtCakaG}There is nobody inside to receive you right now.", new ConversationSentence.OnConditionDelegate(this.conversation_castle_guard_nobody_inside_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("castle_guard_player_can_enter", "player_ask_permission_to_lords_hall", "close_window", "{=bbroVUrD}Of course, my {?PLAYER.GENDER}lady{?}lord{\\?}.", new ConversationSentence.OnConditionDelegate(this.conversation_castle_guard_player_can_enter_lordshall_condition), (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OpenLordsHallMission)));
      campaignGameStarter.AddDialogLine("castle_guard_no_permission", "player_ask_permission_to_lords_hall", "permisson_for_lords_hall", "{=rcoESVVz}Sorry, but we don't know you. We can't just let anyone in. (Not enough renown)", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("player_bribe_to_enter_lords_hall", "permisson_for_lords_hall", "player_bribe_to_castle_guard", "{=7wkHMnNM}Maybe {AMOUNT}{GOLD_ICON} will help you to remember me.", new ConversationSentence.OnConditionDelegate(this.conversation_player_bribe_to_enter_lords_hall_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_player_bribe_to_enter_lords_hall_on_consequence));
      campaignGameStarter.AddPlayerLine("player_not_bribe_to_enter_lords_hall", "permisson_for_lords_hall", "close_window", "{=xatWDriV}Never mind then.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("castle_guard_let_player_in", "player_bribe_to_castle_guard", "close_window", "{=g5ofoKa8}Yeah... Now I remember you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.OpenLordsHallMission)));
    }

    private bool conversation_prison_guard_criminal_start_on_condition()
    {
      if (Campaign.Current.IsMainHeroDisguised || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.PrisonGuard || Settlement.CurrentSettlement.MapFaction == Hero.MainHero.MapFaction)
        return false;
      return Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(Settlement.CurrentSettlement.MapFaction) || Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(Settlement.CurrentSettlement.MapFaction) || Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingMild(Settlement.CurrentSettlement.MapFaction);
    }

    private bool conversation_prison_guard_start_on_condition()
    {
      if (Campaign.Current.IsMainHeroDisguised || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.PrisonGuard)
        return false;
      if (Settlement.CurrentSettlement.MapFaction == Hero.MainHero.MapFaction)
        return true;
      return Settlement.CurrentSettlement.MapFaction != Hero.MainHero.MapFaction && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(Settlement.CurrentSettlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(Settlement.CurrentSettlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingMild(Settlement.CurrentSettlement.MapFaction);
    }

    private bool conversation_prison_guard_talk_about_prisoners_on_condition()
    {
      List<CharacterObject> prisonerHeroes = Settlement.CurrentSettlement.SettlementComponent.GetPrisonerHeroes();
      if (prisonerHeroes.Count == 0)
      {
        MBTextManager.SetTextVariable("PRISONER_NAMES", GameTexts.FindText("str_nobody"), false);
        MBTextManager.SetTextVariable("IS_PLURAL", "0", false);
      }
      else
      {
        for (int index = 0; index < prisonerHeroes.Count; ++index)
        {
          if (index == 0)
          {
            MBTextManager.SetTextVariable("LEFT", prisonerHeroes[index].Name, false);
          }
          else
          {
            MBTextManager.SetTextVariable("RIGHT", prisonerHeroes[index].Name, false);
            MBTextManager.SetTextVariable("LEFT", GameTexts.FindText("str_LEFT_comma_RIGHT").ToString(), false);
          }
        }
        MBTextManager.SetTextVariable("IS_PLURAL", prisonerHeroes.Count > 1 ? 1 : 0);
        MBTextManager.SetTextVariable("PRISONER_NAMES", GameTexts.FindText("str_LEFT_ONLY").ToString(), false);
      }
      return true;
    }

    private bool conversation_prison_guard_visit_prison_cheat_on_condition()
    {
      return Game.Current.IsDevelopmentMode;
    }

    private bool can_player_bribe_to_prison_guard_clickable(out TextObject explanation)
    {
      explanation = TextObject.Empty;
      int bribeToEnterDungeon = Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterDungeon(Settlement.CurrentSettlement);
      if (Hero.MainHero.Gold < bribeToEnterDungeon)
      {
        explanation = new TextObject("{=TP7rZTKs}You don't have {DENAR_AMOUNT}{GOLD_ICON} denars.");
        explanation.SetTextVariable("DENAR_AMOUNT", bribeToEnterDungeon);
        explanation.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
        return false;
      }
      explanation = new TextObject("{=hCavIm4G}You will pay {AMOUNT}{GOLD_ICON} denars.");
      explanation.SetTextVariable("AMOUNT", bribeToEnterDungeon);
      explanation.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      return true;
    }

    private bool conversation_prison_guard_reject_visit_prison_on_condition()
    {
      int num = Settlement.CurrentSettlement.BribePaid >= Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterDungeon(Settlement.CurrentSettlement) ? 1 : 0;
      StringHelpers.SetCharacterProperties("SETTLEMENT_OWNER", Settlement.CurrentSettlement.OwnerClan.Leader.CharacterObject);
      SettlementAccessModel.AccessDetails accessDetails;
      Campaign.Current.Models.SettlementAccessModel.CanMainHeroEnterDungeon(Settlement.CurrentSettlement, out accessDetails);
      return num == 0 && accessDetails.AccessLevel != SettlementAccessModel.AccessLevel.FullAccess;
    }

    private void conversation_prison_guard_visit_prison_on_consequence()
    {
      if (Settlement.CurrentSettlement.IsFortification)
      {
        Campaign.Current.GameMenuManager.NextLocation = LocationComplex.Current.GetLocationWithId("prison");
        Campaign.Current.GameMenuManager.PreviousLocation = LocationComplex.Current.GetLocationWithId("center");
      }
      Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => Mission.Current.EndMission());
    }

    private bool conversation_guard_start_on_condition()
    {
      if (Campaign.Current.ConversationManager.OneToOneConversationAgent == null || this.CheckIfConversationAgentIsEscortingTheMainAgent() || CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Soldier || PlayerEncounter.Current == null || !PlayerEncounter.InsideSettlement)
        return false;
      TextObject text = new TextObject("{=6JL4GyKC}Can't talk right now. Got to keep my eye on things around here.");
      if (Settlement.CurrentSettlement.OwnerClan == Hero.MainHero.Clan || Settlement.CurrentSettlement.MapFaction.Leader == Hero.MainHero)
      {
        text = new TextObject("{=xizHRti3}Nothing to report, your lordship.");
        if (Hero.MainHero.IsFemale)
          text = new TextObject("{=sIfL5Vnx}Nothing to report, your ladyship.");
      }
      else if (Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security <= 20.0)
        text = new TextObject("{=3sfjBnaJ}It's quiet. Too quiet. Things never stay quiet around here for long.");
      else if (Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security <= 40.0)
        text = new TextObject("{=jjkOBPkY}Can't let down your guard around here. Too many bastards up to no good.");
      else if (Settlement.CurrentSettlement.IsTown && (double) Settlement.CurrentSettlement.Town.Security >= 70.0)
      {
        text = new TextObject("{=AHg5k9q2}Welcome to {SETTLEMENT_NAME}. I think you'll find these are good, law-abiding folk, for the most part.");
        text.SetTextVariable("SETTLEMENT_NAME", Settlement.CurrentSettlement.Name);
      }
      MBTextManager.SetTextVariable("GUARD_COMMENT", text, false);
      return true;
    }

    private bool CheckIfConversationAgentIsEscortingTheMainAgent()
    {
      return Agent.Main != null && Agent.Main.IsActive() && Settlement.CurrentSettlement != null && ConversationMission.OneToOneConversationAgent != null && EscortAgentBehavior.CheckIfAgentIsEscortedBy(ConversationMission.OneToOneConversationAgent, Agent.Main);
    }

    private bool conversation_prison_guard_visit_prison_nobody_inside_condition()
    {
      return Settlement.CurrentSettlement.SettlementComponent.GetPrisonerHeroes().Count == 0;
    }

    private bool prison_guard_visit_permission_try_bribe_on_condition()
    {
      int bribeToEnterDungeon = Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterDungeon(Settlement.CurrentSettlement);
      MBTextManager.SetTextVariable("AMOUNT", bribeToEnterDungeon);
      MBTextManager.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">", false);
      return Hero.MainHero.Gold >= bribeToEnterDungeon && !Campaign.Current.IsMainHeroDisguised;
    }

    private void conversation_prison_guard_visit_permission_bribe_on_consequence()
    {
      BribeGuardsAction.Apply(Settlement.CurrentSettlement, Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterDungeon(Settlement.CurrentSettlement));
      this.conversation_prison_guard_visit_prison_on_consequence();
    }

    private void conversation_prison_guard_visit_break_on_consequence()
    {
    }

    private bool IsCastleGuard()
    {
      Agent conversationAgent = ConversationMission.OneToOneConversationAgent;
      AgentNavigator agentNavigator = conversationAgent?.GetComponent<CampaignAgentComponent>().AgentNavigator;
      bool flag = false;
      if (agentNavigator != null)
      {
        flag = agentNavigator.TargetUsableMachine != null && conversationAgent.IsUsingGameObject && agentNavigator.TargetUsableMachine.GameEntity.HasTag("sp_guard_castle");
        if (!flag && (agentNavigator.SpecialTargetTag == "sp_guard_castle" || agentNavigator.SpecialTargetTag == "sp_guard"))
        {
          Location lordsHallLocation = LocationComplex.Current.GetLocationWithId("lordshall");
          MissionAgentHandler missionBehavior = Mission.Current.GetMissionBehavior<MissionAgentHandler>();
          if (missionBehavior != null)
          {
            UsableMachine usableMachine = missionBehavior.TownPassageProps.Find((Predicate<UsableMachine>) (x => ((Passage) x).ToLocation == lordsHallLocation));
            if (usableMachine != null && (double) usableMachine.GameEntity.GlobalPosition.DistanceSquared(conversationAgent.Position) < 100.0)
              flag = true;
          }
        }
      }
      return flag;
    }

    private bool conversation_castle_guard_start_on_condition()
    {
      if (Campaign.Current.IsMainHeroDisguised || !this.IsCastleGuard())
        return false;
      if (Settlement.CurrentSettlement.MapFaction == Hero.MainHero.MapFaction)
        return true;
      return Settlement.CurrentSettlement.MapFaction != Hero.MainHero.MapFaction && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(Settlement.CurrentSettlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(Settlement.CurrentSettlement.MapFaction) && !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingMild(Settlement.CurrentSettlement.MapFaction);
    }

    private bool conversation_castle_guard_criminal_start_on_condition()
    {
      if (Campaign.Current.IsMainHeroDisguised || !this.IsCastleGuard() || Settlement.CurrentSettlement.MapFaction == Hero.MainHero.MapFaction)
        return false;
      return Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingModerate(Settlement.CurrentSettlement.MapFaction) || Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(Settlement.CurrentSettlement.MapFaction) || Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingMild(Settlement.CurrentSettlement.MapFaction);
    }

    private bool conversation_castle_guard_nobody_inside_condition()
    {
      return !LocationComplex.Current.GetLocationWithId("lordshall").GetCharacterList().Any<LocationCharacter>((Func<LocationCharacter, bool>) (c => c.Character.IsHero && c.Character.HeroObject.IsLord)) && Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterLordsHall(Settlement.CurrentSettlement) > 0 && Settlement.CurrentSettlement.OwnerClan != Clan.PlayerClan;
    }

    private bool conversation_castle_guard_player_can_enter_lordshall_condition()
    {
      return Campaign.Current.Models.SettlementAccessModel.CanMainHeroAccessLocation(Settlement.CurrentSettlement, "lordshall", out bool _, out TextObject _);
    }

    private bool conversation_player_bribe_to_enter_lords_hall_on_condition()
    {
      int toEnterLordsHall = Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterLordsHall(Settlement.CurrentSettlement);
      MBTextManager.SetTextVariable("AMOUNT", toEnterLordsHall);
      MBTextManager.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">", false);
      return toEnterLordsHall > 0 && Hero.MainHero.Gold >= toEnterLordsHall && !Campaign.Current.IsMainHeroDisguised && !this.conversation_castle_guard_nobody_inside_condition();
    }

    private void conversation_player_bribe_to_enter_lords_hall_on_consequence()
    {
      BribeGuardsAction.Apply(Settlement.CurrentSettlement, Campaign.Current.Models.BribeCalculationModel.GetBribeToEnterLordsHall(Settlement.CurrentSettlement));
    }

    private void OpenLordsHallMission()
    {
      Campaign.Current.GameMenuManager.NextLocation = LocationComplex.Current.GetLocationWithId("lordshall");
      Campaign.Current.GameMenuManager.PreviousLocation = LocationComplex.Current.GetLocationWithId("center");
      Mission.Current.EndMission();
    }

    private bool conversation_disguised_start_on_condition()
    {
      if (!Campaign.Current.IsMainHeroDisguised)
        return false;
      return this.IsCastleGuard() || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.PrisonGuard || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Guard || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.ArenaMaster || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Soldier;
    }

    private bool conversation_disguised_start_on_condition_alt()
    {
      if (!Campaign.Current.IsMainHeroDisguised || MBRandom.RandomInt(2) != 0)
        return false;
      return this.IsCastleGuard() || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.PrisonGuard || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Guard || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.ArenaMaster || CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Soldier;
    }
  }
}
