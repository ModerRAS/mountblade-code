// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxMissions
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using SandBox.Missions.AgentControllers;
using SandBox.Missions.Handlers;
using SandBox.Missions.MissionLogics;
using SandBox.Missions.MissionLogics.Arena;
using SandBox.Missions.MissionLogics.Towns;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.TroopSuppliers;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.Source.Missions;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic;

#nullable disable
namespace SandBox
{
  [MissionManager]
  public static class SandBoxMissions
  {
    public static MissionInitializerRecord CreateSandBoxMissionInitializerRecord(
      string sceneName,
      string sceneLevels = "",
      bool doNotUseLoadingScreen = false,
      DecalAtlasGroup decalAtlasGroup = DecalAtlasGroup.All)
    {
      return new MissionInitializerRecord(sceneName)
      {
        DamageToPlayerMultiplier = Campaign.Current.Models.DifficultyModel.GetDamageToPlayerMultiplier(),
        DamageToFriendsMultiplier = Campaign.Current.Models.DifficultyModel.GetPlayerTroopsReceivedDamageMultiplier(),
        DamageFromPlayerToFriendsMultiplier = Campaign.Current.Models.DifficultyModel.GetPlayerTroopsReceivedDamageMultiplier(),
        PlayingInCampaignMode = Campaign.Current.GameMode == CampaignGameMode.Campaign,
        AtmosphereOnCampaign = Campaign.Current.GameMode == CampaignGameMode.Campaign ? Campaign.Current.Models.MapWeatherModel.GetAtmosphereModel(MobileParty.MainParty.GetLogicalPosition()) : AtmosphereInfo.GetInvalidAtmosphereInfo(),
        TerrainType = (int) Campaign.Current.MapSceneWrapper.GetFaceTerrainType(MobileParty.MainParty.CurrentNavigationFace),
        SceneLevels = sceneLevels,
        DoNotUseLoadingScreen = doNotUseLoadingScreen,
        DecalAtlasGroup = (int) decalAtlasGroup
      };
    }

    public static MissionInitializerRecord CreateSandBoxTrainingMissionInitializerRecord(
      string sceneName,
      string sceneLevels = "",
      bool doNotUseLoadingScreen = false)
    {
      return new MissionInitializerRecord(sceneName)
      {
        DamageToPlayerMultiplier = Campaign.Current.Models.DifficultyModel.GetDamageToPlayerMultiplier(),
        DamageToFriendsMultiplier = Campaign.Current.Models.DifficultyModel.GetPlayerTroopsReceivedDamageMultiplier(),
        DamageFromPlayerToFriendsMultiplier = 1f,
        PlayingInCampaignMode = Campaign.Current.GameMode == CampaignGameMode.Campaign,
        AtmosphereOnCampaign = Campaign.Current.GameMode == CampaignGameMode.Campaign ? Campaign.Current.Models.MapWeatherModel.GetAtmosphereModel(MobileParty.MainParty.GetLogicalPosition()) : AtmosphereInfo.GetInvalidAtmosphereInfo(),
        TerrainType = (int) Campaign.Current.MapSceneWrapper.GetFaceTerrainType(MobileParty.MainParty.CurrentNavigationFace),
        SceneLevels = sceneLevels,
        DoNotUseLoadingScreen = doNotUseLoadingScreen
      };
    }

    [MissionMethod]
    public static Mission OpenTownCenterMission(
      string scene,
      int townUpgradeLevel,
      Location location,
      CharacterObject talkToChar,
      string playerSpawnTag)
    {
      string civilianUpgradeLevelTag = Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(townUpgradeLevel);
      return SandBoxMissions.OpenTownCenterMission(scene, civilianUpgradeLevelTag, location, talkToChar, playerSpawnTag);
    }

    [MissionMethod]
    public static Mission OpenTownCenterMission(
      string scene,
      string sceneLevels,
      Location location,
      CharacterObject talkToChar,
      string playerSpawnTag)
    {
      return MissionState.OpenNew("TownCenter", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[27]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionBasicTeamLogic(),
        (MissionBehavior) new MissionSettlementPrepareLogic(),
        (MissionBehavior) new TownCenterMissionController(),
        (MissionBehavior) new MissionAgentLookHandler(),
        (MissionBehavior) new SandBoxMissionHandler(),
        (MissionBehavior) new WorkshopMissionHandler(SandBoxMissions.GetCurrentTown()),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new LeaveMissionLogic(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new NotableSpawnPointHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionAlleyHandler(),
        (MissionBehavior) new MissionCrimeHandler(),
        (MissionBehavior) new MissionConversationLogic(talkToChar),
        (MissionBehavior) new MissionAgentHandler(location, talkToChar, playerSpawnTag),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFightHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenCastleCourtyardMission(
      string scene,
      int castleUpgradeLevel,
      Location location,
      CharacterObject talkToChar)
    {
      string civilianUpgradeLevelTag = Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(castleUpgradeLevel);
      return SandBoxMissions.OpenCastleCourtyardMission(scene, civilianUpgradeLevelTag, location, talkToChar);
    }

    [MissionMethod]
    public static Mission OpenCastleCourtyardMission(
      string scene,
      string sceneLevels,
      Location location,
      CharacterObject talkToChar)
    {
      return MissionState.OpenNew("TownCenter", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        missionBehaviorList.Add((MissionBehavior) new MissionBasicTeamLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionSettlementPrepareLogic());
        missionBehaviorList.Add((MissionBehavior) new TownCenterMissionController());
        missionBehaviorList.Add((MissionBehavior) new MissionAgentLookHandler());
        missionBehaviorList.Add((MissionBehavior) new SandBoxMissionHandler());
        missionBehaviorList.Add((MissionBehavior) new BasicLeaveMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new LeaveMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new MountAgentLogic());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentPanicHandler());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new MissionConversationLogic(talkToChar));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentHandler(location, talkToChar));
        missionBehaviorList.Add((MissionBehavior) new HeroSkillHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionFightHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionFacialAnimationHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionHardBorderPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new VisualTrackerMissionBehavior());
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenIndoorMission(
      string scene,
      int townUpgradeLevel,
      Location location,
      CharacterObject talkToChar)
    {
      string civilianUpgradeLevelTag = Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(townUpgradeLevel);
      return SandBoxMissions.OpenIndoorMission(scene, location, talkToChar, civilianUpgradeLevelTag);
    }

    [MissionMethod]
    public static Mission OpenIndoorMission(
      string scene,
      Location location,
      CharacterObject talkToChar = null,
      string sceneLevels = "")
    {
      return MissionState.OpenNew("Indoor", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, true, DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[21]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionBasicTeamLogic(),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new LeaveMissionLogic(),
        (MissionBehavior) new SandBoxMissionHandler(),
        (MissionBehavior) new MissionAgentLookHandler(),
        (MissionBehavior) new MissionConversationLogic(talkToChar),
        (MissionBehavior) new MissionAgentHandler(location, talkToChar),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFightHandler(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionCrimeHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new LocationItemSpawnHandler(),
        (MissionBehavior) new IndoorMissionController(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new BattleSurgeonLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenPrisonBreakMission(
      string scene,
      Location location,
      CharacterObject prisonerCharacter,
      CharacterObject companionCharacter = null)
    {
      Mission mission1 = MissionState.OpenNew("PrisonBreak", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, "prison_break", true, DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        missionBehaviorList.Add((MissionBehavior) new MissionBasicTeamLogic());
        missionBehaviorList.Add((MissionBehavior) new BasicLeaveMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new LeaveMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new SandBoxMissionHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionAgentLookHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionAgentHandler(location, (CharacterObject) null, "sp_prison_break"));
        missionBehaviorList.Add((MissionBehavior) new HeroSkillHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionFightHandler());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new MissionCrimeHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionFacialAnimationHandler());
        missionBehaviorList.Add((MissionBehavior) new LocationItemSpawnHandler());
        missionBehaviorList.Add((MissionBehavior) new PrisonBreakMissionController(prisonerCharacter, companionCharacter));
        missionBehaviorList.Add((MissionBehavior) new VisualTrackerMissionBehavior());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleSurgeonLogic());
        int num = Game.Current.IsDevelopmentMode ? 1 : 0;
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
      mission1.ForceNoFriendlyFire = true;
      return mission1;
    }

    [MissionMethod]
    public static Mission OpenVillageMission(
      string scene,
      Location location,
      CharacterObject talkToChar = null,
      string sceneLevels = null)
    {
      return MissionState.OpenNew("Village", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[26]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionBasicTeamLogic(),
        (MissionBehavior) new VillageMissionController(),
        (MissionBehavior) new NotableSpawnPointHandler(),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new LeaveMissionLogic(),
        (MissionBehavior) new MissionAgentLookHandler(),
        (MissionBehavior) new SandBoxMissionHandler(),
        (MissionBehavior) new MissionConversationLogic(talkToChar),
        (MissionBehavior) new MissionFightHandler(),
        (MissionBehavior) new MissionAgentHandler(location, talkToChar),
        (MissionBehavior) new MissionAlleyHandler(),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionCrimeHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new BattleSurgeonLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenArenaStartMission(
      string scene,
      Location location,
      CharacterObject talkToChar = null,
      string sceneLevels = "")
    {
      return MissionState.OpenNew("ArenaPracticeFight", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[13]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new ArenaPracticeFightMissionController(),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new MissionConversationLogic(talkToChar),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new ArenaAgentStateDeciderLogic(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionAgentHandler(location, talkToChar)
      }));
    }

    [MissionMethod]
    public static Mission OpenRetirementMission(
      string scene,
      Location location,
      CharacterObject talkToChar = null,
      string sceneLevels = null)
    {
      return MissionState.OpenNew("Retirement", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[25]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionBasicTeamLogic(),
        (MissionBehavior) new VillageMissionController(),
        (MissionBehavior) new NotableSpawnPointHandler(),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new MissionAgentLookHandler(),
        (MissionBehavior) new MissionConversationLogic(talkToChar),
        (MissionBehavior) new MissionFightHandler(),
        (MissionBehavior) new MissionAgentHandler(location, talkToChar),
        (MissionBehavior) new MissionAlleyHandler(),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionCrimeHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new BattleSurgeonLogic(),
        (MissionBehavior) new RetirementMissionLogic(),
        (MissionBehavior) new LeaveMissionLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenArenaDuelMission(
      string scene,
      Location location,
      CharacterObject duelCharacter,
      bool requireCivilianEquipment,
      bool spawnBOthSidesWithHorse,
      Action<CharacterObject> onDuelEnd,
      float customAgentHealth,
      string sceneLevels = "")
    {
      return MissionState.OpenNew("ArenaDuelMission", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[10]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new ArenaDuelMissionController(duelCharacter, requireCivilianEquipment, spawnBOthSidesWithHorse, onDuelEnd, customAgentHealth),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new ArenaAgentStateDeciderLogic(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionAgentHandler(location, (CharacterObject) null)
      }));
    }

    [MissionMethod]
    public static Mission OpenArenaDuelMission(string scene, Location location)
    {
      return MissionState.OpenNew("ArenaDuel", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[11]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new ArenaDuelMissionBehavior(),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new MissionAgentHandler(location, (CharacterObject) null),
        (MissionBehavior) new HeroSkillHandler(),
        (MissionBehavior) new MissionFacialAnimationHandler(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new ArenaAgentStateDeciderLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenBattleMission(MissionInitializerRecord rec)
    {
      bool isPlayerSergeant = MobileParty.MainParty.MapEvent.IsPlayerSergeant();
      bool isPlayerInArmy = MobileParty.MainParty.Army != null;
      List<string> heroesOnPlayerSideByPriority = HeroHelper.OrderHeroesOnPlayerSideByPriority();
      bool isPlayerAttacker = !MobileParty.MainParty.MapEvent.AttackerSide.Parties.Where<MapEventParty>((Func<MapEventParty, bool>) (p => p.Party == MobileParty.MainParty.Party)).IsEmpty<MapEventParty>();
      return MissionState.OpenNew("Battle", rec, (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[29]
      {
        (MissionBehavior) SandBoxMissions.CreateCampaignMissionAgentSpawnLogic(Mission.BattleSizeType.Battle),
        (MissionBehavior) new BattlePowerCalculationLogic(),
        (MissionBehavior) new BattleSpawnLogic("battle_set"),
        (MissionBehavior) new SandBoxBattleMissionSpawnHandler(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new BannerBearerLogic(),
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new BattleReinforcementsSpawnController(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.FieldBattle, isPlayerSergeant),
        (MissionBehavior) new BattleObserverMissionLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new AgentVictoryLogic(),
        (MissionBehavior) new BattleSurgeonLogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new BattleMissionAgentInteractionLogic(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new AssignPlayerRoleInTeamMissionController(!isPlayerSergeant, isPlayerSergeant, isPlayerInArmy, heroesOnPlayerSideByPriority),
        (MissionBehavior) new SandboxGeneralsAndCaptainsAssignmentLogic(MapEvent.PlayerMapEvent.AttackerSide.LeaderParty.LeaderHero?.Name, MapEvent.PlayerMapEvent.DefenderSide.LeaderParty.LeaderHero?.Name),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new HighlightsController(),
        (MissionBehavior) new BattleHighlightsController(),
        (MissionBehavior) new DeploymentMissionController(isPlayerAttacker),
        (MissionBehavior) new BattleDeploymentHandler(isPlayerAttacker)
      }));
    }

    [MissionMethod]
    public static Mission OpenCaravanBattleMission(MissionInitializerRecord rec, bool isCaravan)
    {
      bool isPlayerAttacker = !MobileParty.MainParty.MapEvent.AttackerSide.Parties.Where<MapEventParty>((Func<MapEventParty, bool>) (p => p.Party == MobileParty.MainParty.Party)).IsEmpty<MapEventParty>();
      bool isPlayerSergeant = MobileParty.MainParty.MapEvent.IsPlayerSergeant();
      bool isPlayerInArmy = MobileParty.MainParty.Army != null;
      return MissionState.OpenNew("Battle", rec, (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[31]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new BattleReinforcementsSpawnController(),
        (MissionBehavior) new BannerBearerLogic(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.FieldBattle, isPlayerSergeant),
        (MissionBehavior) new BattleSpawnLogic("battle_set"),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) SandBoxMissions.CreateCampaignMissionAgentSpawnLogic(Mission.BattleSizeType.Battle),
        (MissionBehavior) new BattlePowerCalculationLogic(),
        (MissionBehavior) new SandBoxBattleMissionSpawnHandler(),
        (MissionBehavior) new BattleObserverMissionLogic(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new AgentVictoryLogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new BattleMissionAgentInteractionLogic(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new HighlightsController(),
        (MissionBehavior) new BattleHighlightsController(),
        (MissionBehavior) new AssignPlayerRoleInTeamMissionController(!isPlayerSergeant, isPlayerSergeant, isPlayerInArmy),
        (MissionBehavior) new SandboxGeneralsAndCaptainsAssignmentLogic(MapEvent.PlayerMapEvent.AttackerSide.LeaderParty.LeaderHero?.Name, MapEvent.PlayerMapEvent.DefenderSide.LeaderParty.LeaderHero?.Name),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionCaravanOrVillagerTacticsHandler(),
        (MissionBehavior) new CaravanBattleMissionHandler(MathF.Min(MapEvent.PlayerMapEvent.InvolvedParties.Where<PartyBase>((Func<PartyBase, bool>) (ip => ip.Side == BattleSideEnum.Attacker)).Sum<PartyBase>((Func<PartyBase, int>) (ip => ip.MobileParty.Party.MemberRoster.TotalManCount - ip.MobileParty.Party.MemberRoster.TotalWounded)), MapEvent.PlayerMapEvent.InvolvedParties.Where<PartyBase>((Func<PartyBase, bool>) (ip => ip.Side == BattleSideEnum.Defender)).Sum<PartyBase>((Func<PartyBase, int>) (ip => ip.MobileParty.Party.MemberRoster.TotalManCount - ip.MobileParty.Party.MemberRoster.TotalWounded))), MapEvent.PlayerMapEvent.InvolvedParties.Any<PartyBase>((Func<PartyBase, bool>) (ip =>
        {
          if (!ip.MobileParty.IsCaravan && !ip.MobileParty.IsVillager)
            return false;
          return ip.Culture.StringId == "aserai" || ip.Culture.StringId == "khuzait";
        })), isCaravan),
        (MissionBehavior) new BattleDeploymentHandler(isPlayerAttacker),
        (MissionBehavior) new DeploymentMissionController(isPlayerAttacker),
        (MissionBehavior) new BattleSurgeonLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenAlleyFightMission(
      MissionInitializerRecord rec,
      Location location,
      TroopRoster playerSideTroops,
      TroopRoster rivalSideTroops)
    {
      return MissionState.OpenNew("AlleyFight", rec, (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new BattleEndLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new BattlePowerCalculationLogic());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        missionBehaviorList.Add((MissionBehavior) new AlleyFightMissionHandler(playerSideTroops, rivalSideTroops));
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionHardBorderPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionAgentHandler(location, (CharacterObject) null));
        missionBehaviorList.Add((MissionBehavior) new MissionFightHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new BattleMissionAgentInteractionLogic());
        missionBehaviorList.Add((MissionBehavior) new HighlightsController());
        missionBehaviorList.Add((MissionBehavior) new BattleHighlightsController());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenCombatMissionWithDialogue(
      MissionInitializerRecord rec,
      CharacterObject characterToTalkTo)
    {
      return MissionState.OpenNew("CombatWithDialogue", rec, (InitializeMissionBehaviorsDelegate) (mission =>
      {
        IMissionTroopSupplier[] suppliers = new IMissionTroopSupplier[2]
        {
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(PlayerEncounter.Battle, BattleSideEnum.Defender),
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(PlayerEncounter.Battle, BattleSideEnum.Attacker)
        };
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        missionBehaviorList.Add((MissionBehavior) new BattleEndLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.NoTeamAI, false));
        missionBehaviorList.Add((MissionBehavior) new BattleSpawnLogic("battle_set"));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentPanicHandler());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new CombatMissionWithDialogueController(suppliers, (BasicCharacterObject) characterToTalkTo));
        missionBehaviorList.Add((MissionBehavior) new MissionConversationLogic((CharacterObject) null));
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionHardBorderPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new BattleMissionAgentInteractionLogic());
        missionBehaviorList.Add((MissionBehavior) new HighlightsController());
        missionBehaviorList.Add((MissionBehavior) new BattleHighlightsController());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleSurgeonLogic());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenBattleMissionWhileEnteringSettlement(
      string scene,
      int upgradeLevel,
      int numberOfMaxTroopToBeSpawnedForPlayer,
      int numberOfMaxTroopToBeSpawnedForOpponent)
    {
      return MissionState.OpenNew("EnteringSettlementBattle", new MissionInitializerRecord(scene)
      {
        PlayingInCampaignMode = Campaign.Current.GameMode == CampaignGameMode.Campaign,
        AtmosphereOnCampaign = Campaign.Current.GameMode == CampaignGameMode.Campaign ? Campaign.Current.Models.MapWeatherModel.GetAtmosphereModel(MobileParty.MainParty.GetLogicalPosition()) : AtmosphereInfo.GetInvalidAtmosphereInfo(),
        DecalAtlasGroup = 3,
        SceneLevels = Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(upgradeLevel)
      }, (InitializeMissionBehaviorsDelegate) (mission =>
      {
        IMissionTroopSupplier[] suppliers = new IMissionTroopSupplier[2]
        {
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(PlayerEncounter.Battle, BattleSideEnum.Defender),
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(PlayerEncounter.Battle, BattleSideEnum.Attacker)
        };
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        missionBehaviorList.Add((MissionBehavior) new BattleEndLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.NoTeamAI, false));
        missionBehaviorList.Add((MissionBehavior) new BattleSpawnLogic("battle_set"));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentPanicHandler());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new WhileEnteringSettlementBattleMissionController(suppliers, numberOfMaxTroopToBeSpawnedForPlayer, numberOfMaxTroopToBeSpawnedForOpponent));
        missionBehaviorList.Add((MissionBehavior) new MissionFightHandler());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new MountAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionHardBorderPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new BattleMissionAgentInteractionLogic());
        missionBehaviorList.Add((MissionBehavior) new HighlightsController());
        missionBehaviorList.Add((MissionBehavior) new BattleHighlightsController());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleSurgeonLogic());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenBattleMission(string scene, bool usesTownDecalAtlas)
    {
      return SandBoxMissions.OpenBattleMission(SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: usesTownDecalAtlas ? DecalAtlasGroup.Town : DecalAtlasGroup.Battle));
    }

    [MissionMethod]
    public static Mission OpenAlleyFightMission(
      string scene,
      int upgradeLevel,
      Location location,
      TroopRoster playerSideTroops,
      TroopRoster rivalSideTroops)
    {
      return SandBoxMissions.OpenAlleyFightMission(SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(upgradeLevel), decalAtlasGroup: DecalAtlasGroup.Town), location, playerSideTroops, rivalSideTroops);
    }

    [MissionMethod]
    public static Mission OpenCombatMissionWithDialogue(
      string scene,
      CharacterObject characterToTalkTo,
      int upgradeLevel)
    {
      return SandBoxMissions.OpenCombatMissionWithDialogue(SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, Campaign.Current.Models.LocationModel.GetCivilianUpgradeLevelTag(upgradeLevel), decalAtlasGroup: DecalAtlasGroup.Town), characterToTalkTo);
    }

    [MissionMethod]
    public static Mission OpenHideoutBattleMission(string scene, FlattenedTroopRoster playerTroops)
    {
      int firstPhaseEnemySideTroopCount;
      FlattenedTroopRoster banditPriorityList = SandBoxMissions.GetPriorityListForHideoutMission(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, out firstPhaseEnemySideTroopCount);
      FlattenedTroopRoster playerPriorityList = playerTroops ?? MobilePartyHelper.GetStrongestAndPriorTroops(MobileParty.MainParty, Campaign.Current.Models.BanditDensityModel.GetPlayerMaximumTroopCountForHideoutMission(MobileParty.MainParty), true).ToFlattenedRoster();
      int firstPhasePlayerSideTroopCount = playerPriorityList.Count<FlattenedTroopRosterElement>();
      return MissionState.OpenNew("HideoutBattle", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        IMissionTroopSupplier[] suppliers = new IMissionTroopSupplier[2]
        {
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, banditPriorityList),
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Attacker, playerPriorityList)
        };
        return (IEnumerable<MissionBehavior>) new MissionBehavior[21]
        {
          (MissionBehavior) new MissionOptionsComponent(),
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new BattleEndLogic(),
          (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.NoTeamAI, false),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new HideoutCinematicController(),
          (MissionBehavior) new MissionConversationLogic(),
          (MissionBehavior) new HideoutMissionController(suppliers, PartyBase.MainParty.Side, firstPhaseEnemySideTroopCount, firstPhasePlayerSideTroopCount),
          (MissionBehavior) new BattleObserverMissionLogic(),
          (MissionBehavior) new BattleAgentLogic(),
          (MissionBehavior) new MountAgentLogic(),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new MissionAgentPanicHandler(),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionBoundaryCrossingHandler(),
          (MissionBehavior) new AgentMoraleInteractionLogic(),
          (MissionBehavior) new HighlightsController(),
          (MissionBehavior) new BattleHighlightsController(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) new BattleSurgeonLogic()
        };
      }));
    }

    private static FlattenedTroopRoster GetPriorityListForHideoutMission(
      MapEvent playerMapEvent,
      BattleSideEnum side,
      out int firstPhaseTroopCount)
    {
      List<MapEventParty> list = playerMapEvent.PartiesOnSide(side).WhereQ<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.IsMobile)).ToList<MapEventParty>();
      int count1 = list.SumQ<MapEventParty>((Func<MapEventParty, int>) (x => x.Party.MemberRoster.TotalHealthyCount));
      firstPhaseTroopCount = MathF.Min(MathF.Floor((float) count1 * Campaign.Current.Models.BanditDensityModel.SpawnPercentageForFirstFightInHideoutMission), Campaign.Current.Models.BanditDensityModel.NumberOfMaximumTroopCountForFirstFightInHideout);
      int num1 = count1 - firstPhaseTroopCount;
      FlattenedTroopRoster source = new FlattenedTroopRoster(count1);
      foreach (MapEventParty mapEventParty in list)
        source.Add(mapEventParty.Party.MemberRoster.GetTroopRoster());
      source.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => x.IsWounded));
      int count2 = source.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => x.Troop.IsHero || x.Troop.Culture.BanditBoss == x.Troop)).ToList<FlattenedTroopRosterElement>().Count;
      int num2 = 0;
      int count3 = num1 - count2;
      if (count3 > 0)
      {
        IEnumerable<FlattenedTroopRosterElement> selectedRegularTroops = source.OrderByDescending<FlattenedTroopRosterElement, int>((Func<FlattenedTroopRosterElement, int>) (x => x.Troop.Level)).Take<FlattenedTroopRosterElement>(count3);
        source.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => selectedRegularTroops.Contains<FlattenedTroopRosterElement>(x)));
        num2 += selectedRegularTroops.Count<FlattenedTroopRosterElement>();
      }
      Debug.Print("Picking bandit troops for hideout mission...", color: Debug.DebugColor.Yellow, debugFilter: 256UL);
      Debug.Print("- First phase troop count: " + (object) firstPhaseTroopCount, color: Debug.DebugColor.Yellow, debugFilter: 256UL);
      Debug.Print("- Second phase boss troop count: " + (object) count2, color: Debug.DebugColor.Yellow, debugFilter: 256UL);
      Debug.Print("- Second phase regular troop count: " + (object) num2, color: Debug.DebugColor.Yellow, debugFilter: 256UL);
      return source;
    }

    [MissionMethod]
    public static Mission OpenAmbushMission(string scene, MissionResult oldResult)
    {
      Debug.FailedAssert("This mission was broken", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\SandBoxMissions.cs", nameof (OpenAmbushMission), 850);
      return MissionState.OpenNew("Ambush", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[19]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new BattleReinforcementsSpawnController(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.FieldBattle, false),
        (MissionBehavior) new BattleObserverMissionLogic(),
        (MissionBehavior) new BattleAgentLogic(),
        (MissionBehavior) new MountAgentLogic(),
        (MissionBehavior) new AgentVictoryLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new HighlightsController(),
        (MissionBehavior) new BattleHighlightsController(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new BattleSurgeonLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenCampMission(string scene)
    {
      return MissionState.OpenNew("Camp", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[9]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.NoTeamAI, false),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenSiegeMissionWithDeployment(
      string scene,
      float[] wallHitPointPercentages,
      bool hasAnySiegeTower,
      List<MissionSiegeWeapon> siegeWeaponsOfAttackers,
      List<MissionSiegeWeapon> siegeWeaponsOfDefenders,
      bool isPlayerAttacker,
      int sceneUpgradeLevel = 0,
      bool isSallyOut = false,
      bool isReliefForceAttack = false)
    {
      string sceneLevels = Campaign.Current.Models.LocationModel.GetUpgradeLevelTag(sceneUpgradeLevel) + " siege";
      bool isPlayerSergeant = MobileParty.MainParty.MapEvent.IsPlayerSergeant();
      bool isPlayerInArmy = MobileParty.MainParty.Army != null;
      List<string> heroesOnPlayerSideByPriority = HeroHelper.OrderHeroesOnPlayerSideByPriority();
      return MissionState.OpenNew("SiegeMissionWithDeployment", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new BattleSpawnLogic(isSallyOut ? "sally_out_set" : (isReliefForceAttack ? "relief_force_attack_set" : "battle_set")));
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        BattleEndLogic battleEndLogic = new BattleEndLogic();
        if (MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker)
          battleEndLogic.EnableEnemyDefenderPullBack(Campaign.Current.Models.SiegeLordsHallFightModel.DefenderTroopNumberForSuccessfulPullBack);
        missionBehaviorList.Add((MissionBehavior) battleEndLogic);
        missionBehaviorList.Add((MissionBehavior) new BattleReinforcementsSpawnController());
        missionBehaviorList.Add((MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), isSallyOut ? Mission.MissionTeamAITypeEnum.SallyOut : Mission.MissionTeamAITypeEnum.Siege, isPlayerSergeant));
        missionBehaviorList.Add((MissionBehavior) new SiegeMissionPreparationHandler(isSallyOut, isReliefForceAttack, wallHitPointPercentages, hasAnySiegeTower));
        missionBehaviorList.Add((MissionBehavior) new CampaignSiegeStateHandler());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        Mission.BattleSizeType battleSizeType1 = Mission.BattleSizeType.Siege;
        if (isSallyOut)
        {
          Mission.BattleSizeType battleSizeType2 = Mission.BattleSizeType.SallyOut;
          FlattenedTroopRoster forSallyOutAmbush = Campaign.Current.Models.SiegeEventModel.GetPriorityTroopsForSallyOutAmbush();
          missionBehaviorList.Add((MissionBehavior) new SandBoxSallyOutMissionController());
          missionBehaviorList.Add((MissionBehavior) SandBoxMissions.CreateCampaignMissionAgentSpawnLogic(battleSizeType2, forSallyOutAmbush));
        }
        else
        {
          if (isReliefForceAttack)
            missionBehaviorList.Add((MissionBehavior) new SandBoxSallyOutMissionController());
          else
            missionBehaviorList.Add((MissionBehavior) new SandBoxSiegeMissionSpawnHandler());
          missionBehaviorList.Add((MissionBehavior) SandBoxMissions.CreateCampaignMissionAgentSpawnLogic(battleSizeType1));
        }
        missionBehaviorList.Add((MissionBehavior) new BattlePowerCalculationLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleSurgeonLogic());
        missionBehaviorList.Add((MissionBehavior) new MountAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new BannerBearerLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new AmmoSupplyLogic(new List<BattleSideEnum>()
        {
          BattleSideEnum.Defender
        }));
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new AssignPlayerRoleInTeamMissionController(!isPlayerSergeant, isPlayerSergeant, isPlayerInArmy, heroesOnPlayerSideByPriority));
        missionBehaviorList.Add((MissionBehavior) new SandboxGeneralsAndCaptainsAssignmentLogic(MapEvent.PlayerMapEvent.AttackerSide.LeaderParty.LeaderHero?.Name, MapEvent.PlayerMapEvent.DefenderSide.LeaderParty.LeaderHero?.Name, createBodyguard: false));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentPanicHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new AgentMoraleInteractionLogic());
        missionBehaviorList.Add((MissionBehavior) new HighlightsController());
        missionBehaviorList.Add((MissionBehavior) new BattleHighlightsController());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        if (isSallyOut)
          missionBehaviorList.Add((MissionBehavior) new MissionSiegeEnginesLogic(new List<MissionSiegeWeapon>(), siegeWeaponsOfAttackers));
        else
          missionBehaviorList.Add((MissionBehavior) new MissionSiegeEnginesLogic(siegeWeaponsOfDefenders, siegeWeaponsOfAttackers));
        missionBehaviorList.Add((MissionBehavior) new SiegeDeploymentHandler(isPlayerAttacker));
        missionBehaviorList.Add((MissionBehavior) new SiegeDeploymentMissionController(isPlayerAttacker));
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenSiegeMissionNoDeployment(
      string scene,
      bool isSallyOut = false,
      bool isReliefForceAttack = false)
    {
      string sceneLevels = Campaign.Current.Models.LocationModel.GetUpgradeLevelTag(3) + " siege";
      bool isPlayerSergeant = MobileParty.MainParty.MapEvent.IsPlayerSergeant();
      bool isPlayerInArmy = MobileParty.MainParty.Army != null;
      List<string> heroesOnPlayerSideByPriority = HeroHelper.OrderHeroesOnPlayerSideByPriority();
      return MissionState.OpenNew("SiegeMissionNoDeployment", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, sceneLevels, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new BattleSpawnLogic(isSallyOut ? "sally_out_set" : (isReliefForceAttack ? "relief_force_attack_set" : "battle_set")));
        missionBehaviorList.Add((MissionBehavior) new CampaignMissionComponent());
        BattleEndLogic battleEndLogic = new BattleEndLogic();
        if (!isSallyOut && !isReliefForceAttack && MobileParty.MainParty.MapEvent.PlayerSide == BattleSideEnum.Attacker)
          battleEndLogic.EnableEnemyDefenderPullBack(Campaign.Current.Models.SiegeLordsHallFightModel.DefenderTroopNumberForSuccessfulPullBack);
        missionBehaviorList.Add((MissionBehavior) battleEndLogic);
        missionBehaviorList.Add((MissionBehavior) new BattleReinforcementsSpawnController());
        missionBehaviorList.Add((MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.FieldBattle, isPlayerSergeant));
        missionBehaviorList.Add((MissionBehavior) new CampaignSiegeStateHandler());
        Mission.BattleSizeType battleSizeType = isSallyOut ? Mission.BattleSizeType.SallyOut : Mission.BattleSizeType.Siege;
        missionBehaviorList.Add((MissionBehavior) SandBoxMissions.CreateCampaignMissionAgentSpawnLogic(battleSizeType));
        missionBehaviorList.Add((MissionBehavior) new BattlePowerCalculationLogic());
        missionBehaviorList.Add((MissionBehavior) new SandBoxBattleMissionSpawnHandler());
        Settlement currentTown = SandBoxMissions.GetCurrentTown();
        if (currentTown != null)
          missionBehaviorList.Add((MissionBehavior) new WorkshopMissionHandler(currentTown));
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleSurgeonLogic());
        missionBehaviorList.Add((MissionBehavior) new MountAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new AmmoSupplyLogic(new List<BattleSideEnum>()
        {
          BattleSideEnum.Defender
        }));
        missionBehaviorList.Add((MissionBehavior) new MissionAgentPanicHandler());
        missionBehaviorList.Add((MissionBehavior) new MissionHardBorderPlacer());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryPlacer());
        missionBehaviorList.Add((MissionBehavior) new EquipmentControllerLeaveLogic());
        missionBehaviorList.Add((MissionBehavior) new MissionBoundaryCrossingHandler());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        missionBehaviorList.Add((MissionBehavior) new AgentMoraleInteractionLogic());
        missionBehaviorList.Add((MissionBehavior) new HighlightsController());
        missionBehaviorList.Add((MissionBehavior) new BattleHighlightsController());
        missionBehaviorList.Add((MissionBehavior) new AssignPlayerRoleInTeamMissionController(!isPlayerSergeant, isPlayerSergeant, isPlayerInArmy, heroesOnPlayerSideByPriority));
        missionBehaviorList.Add((MissionBehavior) new SandboxGeneralsAndCaptainsAssignmentLogic(MapEvent.PlayerMapEvent.AttackerSide.LeaderParty.LeaderHero?.Name, MapEvent.PlayerMapEvent.DefenderSide.LeaderParty.LeaderHero?.Name, createBodyguard: false));
        return (IEnumerable<MissionBehavior>) missionBehaviorList.ToArray();
      }));
    }

    [MissionMethod]
    public static Mission OpenSiegeLordsHallFightMission(
      string scene,
      FlattenedTroopRoster attackerPriorityList)
    {
      int remainingDefenderArcherCount = Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderArcherCount;
      FlattenedTroopRoster defenderPriorityList = Campaign.Current.Models.SiegeLordsHallFightModel.GetPriorityListForLordsHallFightMission(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderSideTroopCount);
      int attackerSideTroopCountMax = MathF.Min(Campaign.Current.Models.SiegeLordsHallFightModel.MaxAttackerSideTroopCount, attackerPriorityList.Troops.Count<CharacterObject>());
      int defenderSideTroopCountMax = MathF.Min(Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderSideTroopCount, defenderPriorityList.Troops.Count<CharacterObject>());
      return MissionState.OpenNew("SiegeLordsHallFightMission", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, "siege", decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission =>
      {
        IMissionTroopSupplier[] suppliers = new IMissionTroopSupplier[2]
        {
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, defenderPriorityList, (Func<UniqueTroopDescriptor, MapEventParty, bool>) ((uniqueTroopDescriptor, mapEventParty) =>
          {
            bool flag = true;
            if (mapEventParty.GetTroop(uniqueTroopDescriptor).IsRanged)
            {
              if (remainingDefenderArcherCount > 0)
                --remainingDefenderArcherCount;
              else
                flag = false;
            }
            return flag;
          })),
          (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Attacker, attackerPriorityList)
        };
        return (IEnumerable<MissionBehavior>) new MissionBehavior[19]
        {
          (MissionBehavior) new MissionOptionsComponent(),
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new BattleEndLogic(),
          (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.NoTeamAI, false),
          (MissionBehavior) new CampaignSiegeStateHandler(),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new LordsHallFightMissionController(suppliers, Campaign.Current.Models.SiegeLordsHallFightModel.AreaLostRatio, Campaign.Current.Models.SiegeLordsHallFightModel.AttackerDefenderTroopCountRatio, attackerSideTroopCountMax, defenderSideTroopCountMax, PartyBase.MainParty.Side),
          (MissionBehavior) new BattleObserverMissionLogic(),
          (MissionBehavior) new BattleAgentLogic(),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new AmmoSupplyLogic(new List<BattleSideEnum>()
          {
            BattleSideEnum.Defender
          }),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionBoundaryCrossingHandler(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) new BattleMissionAgentInteractionLogic(),
          (MissionBehavior) new HighlightsController(),
          (MissionBehavior) new BattleHighlightsController(),
          (MissionBehavior) new BattleSurgeonLogic()
        };
      }));
    }

    [MissionMethod]
    public static Mission OpenAmbushMissionForTutorial(string scene, bool isPlayerAttacker)
    {
      return MissionState.OpenNew("AmbushMissionForTutorial", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (missionController => (IEnumerable<MissionBehavior>) new List<MissionBehavior>()
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new AmbushMissionController(isPlayerAttacker),
        (MissionBehavior) new AmbushBattleDeploymentHandler(isPlayerAttacker),
        (MissionBehavior) new BasicLeaveMissionLogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }.ToArray()));
    }

    [MissionMethod]
    public static Mission OpenVillageBattleMission(string scene)
    {
      bool isPlayerSergeant = MobileParty.MainParty.MapEvent.IsPlayerSergeant();
      bool isPlayerInArmy = MobileParty.MainParty.Army != null;
      return MissionState.OpenNew("VillageBattle", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[17]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new BattleReinforcementsSpawnController(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) MobileParty.MainParty.MapEvent.InvolvedParties, (IBattleCombatant) PartyBase.MainParty, (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Defender), (IBattleCombatant) MobileParty.MainParty.MapEvent.GetLeaderParty(BattleSideEnum.Attacker), Mission.MissionTeamAITypeEnum.FieldBattle, isPlayerSergeant),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new HighlightsController(),
        (MissionBehavior) new BattleHighlightsController(),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new AssignPlayerRoleInTeamMissionController(!isPlayerSergeant, isPlayerSergeant, isPlayerInArmy),
        (MissionBehavior) new SandboxGeneralsAndCaptainsAssignmentLogic(MapEvent.PlayerMapEvent.AttackerSide.LeaderParty.LeaderHero?.Name, MapEvent.PlayerMapEvent.DefenderSide.LeaderParty.LeaderHero?.Name),
        (MissionBehavior) new BattleSurgeonLogic()
      }));
    }

    [MissionMethod]
    public static Mission OpenConversationMission(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData,
      string specialScene = "",
      string sceneLevels = "")
    {
      return MissionState.OpenNew("Conversation", SandBoxMissions.CreateSandBoxMissionInitializerRecord(specialScene.IsEmpty<char>() ? PlayerEncounter.GetConversationSceneForMapPosition(PartyBase.MainParty.Position2D) : specialScene, sceneLevels, true, DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[5]
      {
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionConversationLogic(),
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new ConversationMissionLogic(playerCharacterData, conversationPartnerData),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }), needsMemoryCleanup: false);
    }

    [MissionMethod]
    public static Mission OpenMeetingMission(string scene, CharacterObject character)
    {
      Debug.FailedAssert("This mission was broken", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\Missions\\SandBoxMissions.cs", nameof (OpenMeetingMission), 1268);
      return MissionState.OpenNew("Conversation", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[5]
      {
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionSettlementPrepareLogic(),
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new MissionConversationLogic(),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }), needsMemoryCleanup: false);
    }

    private static Settlement GetCurrentTown()
    {
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsTown)
        return Settlement.CurrentSettlement;
      return MapEvent.PlayerMapEvent != null && MapEvent.PlayerMapEvent.MapEventSettlement != null && MapEvent.PlayerMapEvent.MapEventSettlement.IsTown ? MapEvent.PlayerMapEvent.MapEventSettlement : (Settlement) null;
    }

    private static MissionAgentSpawnLogic CreateCampaignMissionAgentSpawnLogic(
      Mission.BattleSizeType battleSizeType,
      FlattenedTroopRoster priorTroopsForDefenders = null,
      FlattenedTroopRoster priorTroopsForAttackers = null)
    {
      return new MissionAgentSpawnLogic(new IMissionTroopSupplier[2]
      {
        (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Defender, priorTroopsForDefenders),
        (IMissionTroopSupplier) new PartyGroupTroopSupplier(MapEvent.PlayerMapEvent, BattleSideEnum.Attacker, priorTroopsForAttackers)
      }, PartyBase.MainParty.Side, battleSizeType);
    }
  }
}
