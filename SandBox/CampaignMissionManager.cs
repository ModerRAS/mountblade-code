// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignMissionManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace SandBox
{
  public class CampaignMissionManager : CampaignMission.ICampaignMissionManager
  {
    IMission CampaignMission.ICampaignMissionManager.OpenSiegeMissionWithDeployment(
      string scene,
      float[] wallHitPointsPercentages,
      bool hasAnySiegeTower,
      List<MissionSiegeWeapon> siegeWeaponsOfAttackers,
      List<MissionSiegeWeapon> siegeWeaponsOfDefenders,
      bool isPlayerAttacker,
      int upgradeLevel,
      bool isSallyOut,
      bool isReliefForceAttack)
    {
      return (IMission) SandBoxMissions.OpenSiegeMissionWithDeployment(scene, wallHitPointsPercentages, hasAnySiegeTower, siegeWeaponsOfAttackers, siegeWeaponsOfDefenders, isPlayerAttacker, upgradeLevel, isSallyOut, isReliefForceAttack);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenSiegeMissionNoDeployment(
      string scene,
      bool isSallyOut,
      bool isReliefForceAttack)
    {
      return (IMission) SandBoxMissions.OpenSiegeMissionNoDeployment(scene, isSallyOut, isReliefForceAttack);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenSiegeLordsHallFightMission(
      string scene,
      FlattenedTroopRoster attackerPriorityList)
    {
      return (IMission) SandBoxMissions.OpenSiegeLordsHallFightMission(scene, attackerPriorityList);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenBattleMission(MissionInitializerRecord rec)
    {
      return (IMission) SandBoxMissions.OpenBattleMission(rec);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenCaravanBattleMission(
      MissionInitializerRecord rec,
      bool isCaravan)
    {
      return (IMission) SandBoxMissions.OpenCaravanBattleMission(rec, isCaravan);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenBattleMission(
      string scene,
      bool usesTownDecalAtlas)
    {
      return (IMission) SandBoxMissions.OpenBattleMission(scene, usesTownDecalAtlas);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenAlleyFightMission(
      string scene,
      int upgradeLevel,
      Location location,
      TroopRoster playerSideTroops,
      TroopRoster rivalSideTroops)
    {
      return (IMission) SandBoxMissions.OpenAlleyFightMission(scene, upgradeLevel, location, playerSideTroops, rivalSideTroops);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenCombatMissionWithDialogue(
      string scene,
      CharacterObject characterToTalkTo,
      int upgradeLevel)
    {
      return (IMission) SandBoxMissions.OpenCombatMissionWithDialogue(scene, characterToTalkTo, upgradeLevel);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenBattleMissionWhileEnteringSettlement(
      string scene,
      int upgradeLevel,
      int numberOfMaxTroopToBeSpawnedForPlayer,
      int numberOfMaxTroopToBeSpawnedForOpponent)
    {
      return (IMission) SandBoxMissions.OpenBattleMissionWhileEnteringSettlement(scene, upgradeLevel, numberOfMaxTroopToBeSpawnedForPlayer, numberOfMaxTroopToBeSpawnedForOpponent);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenHideoutBattleMission(
      string scene,
      FlattenedTroopRoster playerTroops)
    {
      return (IMission) SandBoxMissions.OpenHideoutBattleMission(scene, playerTroops);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenTownCenterMission(
      string scene,
      int townUpgradeLevel,
      Location location,
      CharacterObject talkToChar,
      string playerSpawnTag)
    {
      return (IMission) SandBoxMissions.OpenTownCenterMission(scene, townUpgradeLevel, location, talkToChar, playerSpawnTag);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenCastleCourtyardMission(
      string scene,
      int castleUpgradeLevel,
      Location location,
      CharacterObject talkToChar)
    {
      return (IMission) SandBoxMissions.OpenCastleCourtyardMission(scene, castleUpgradeLevel, location, talkToChar);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenVillageMission(
      string scene,
      Location location,
      CharacterObject talkToChar)
    {
      return (IMission) SandBoxMissions.OpenVillageMission(scene, location, talkToChar);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenIndoorMission(
      string scene,
      int upgradeLevel,
      Location location,
      CharacterObject talkToChar)
    {
      return (IMission) SandBoxMissions.OpenIndoorMission(scene, upgradeLevel, location, talkToChar);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenPrisonBreakMission(
      string scene,
      Location location,
      CharacterObject prisonerCharacter,
      CharacterObject companionCharacter)
    {
      return (IMission) SandBoxMissions.OpenPrisonBreakMission(scene, location, prisonerCharacter, companionCharacter);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenArenaStartMission(
      string scene,
      Location location,
      CharacterObject talkToChar)
    {
      return (IMission) SandBoxMissions.OpenArenaStartMission(scene, location, talkToChar);
    }

    public IMission OpenArenaDuelMission(
      string scene,
      Location location,
      CharacterObject duelCharacter,
      bool requireCivilianEquipment,
      bool spawnBOthSidesWithHorse,
      Action<CharacterObject> onDuelEndAction,
      float customAgentHealth)
    {
      return (IMission) SandBoxMissions.OpenArenaDuelMission(scene, location, duelCharacter, requireCivilianEquipment, spawnBOthSidesWithHorse, onDuelEndAction, customAgentHealth);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenConversationMission(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData,
      string specialScene,
      string sceneLevels)
    {
      return (IMission) SandBoxMissions.OpenConversationMission(playerCharacterData, conversationPartnerData, specialScene, sceneLevels);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenMeetingMission(
      string scene,
      CharacterObject character)
    {
      return (IMission) SandBoxMissions.OpenMeetingMission(scene, character);
    }

    IMission CampaignMission.ICampaignMissionManager.OpenRetirementMission(
      string scene,
      Location location,
      CharacterObject talkToChar,
      string sceneLevels)
    {
      return (IMission) SandBoxMissions.OpenRetirementMission(scene, location, talkToChar, sceneLevels);
    }
  }
}
