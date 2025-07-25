// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BannerlordMissions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.MissionSpawnHandlers;
using TaleWorlds.MountAndBlade.Source.Missions;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [MissionManager]
  public static class BannerlordMissions
  {
    private const string Level1Tag = "level_1";
    private const string Level2Tag = "level_2";
    private const string Level3Tag = "level_3";
    private const string SiegeTag = "siege";
    private const string SallyOutTag = "sally";

    private static System.Type GetSiegeWeaponType(SiegeEngineType siegeWeaponType)
    {
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ladder)
        return typeof (SiegeLadder);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ballista)
        return typeof (Ballista);
      if (siegeWeaponType == DefaultSiegeEngineTypes.FireBallista)
        return typeof (FireBallista);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Ram || siegeWeaponType == DefaultSiegeEngineTypes.ImprovedRam)
        return typeof (BatteringRam);
      if (siegeWeaponType == DefaultSiegeEngineTypes.SiegeTower || siegeWeaponType == DefaultSiegeEngineTypes.HeavySiegeTower)
        return typeof (SiegeTower);
      if (siegeWeaponType == DefaultSiegeEngineTypes.Onager || siegeWeaponType == DefaultSiegeEngineTypes.Catapult)
        return typeof (Mangonel);
      if (siegeWeaponType == DefaultSiegeEngineTypes.FireOnager || siegeWeaponType == DefaultSiegeEngineTypes.FireCatapult)
        return typeof (FireMangonel);
      return siegeWeaponType == DefaultSiegeEngineTypes.Trebuchet || siegeWeaponType == DefaultSiegeEngineTypes.Bricole ? typeof (Trebuchet) : (System.Type) null;
    }

    private static Dictionary<System.Type, int> GetSiegeWeaponTypes(
      Dictionary<SiegeEngineType, int> values)
    {
      Dictionary<System.Type, int> siegeWeaponTypes = new Dictionary<System.Type, int>();
      foreach (KeyValuePair<SiegeEngineType, int> keyValuePair in values)
        siegeWeaponTypes.Add(BannerlordMissions.GetSiegeWeaponType(keyValuePair.Key), keyValuePair.Value);
      return siegeWeaponTypes;
    }

    private static AtmosphereInfo CreateAtmosphereInfoForMission(string seasonId, int timeOfDay)
    {
      Dictionary<string, int> dictionary1 = new Dictionary<string, int>();
      dictionary1.Add("spring", 0);
      dictionary1.Add("summer", 1);
      dictionary1.Add("fall", 2);
      dictionary1.Add("winter", 3);
      int num = 0;
      dictionary1.TryGetValue(seasonId, out num);
      Dictionary<int, string> dictionary2 = new Dictionary<int, string>();
      dictionary2.Add(6, "TOD_06_00_SemiCloudy");
      dictionary2.Add(12, "TOD_12_00_SemiCloudy");
      dictionary2.Add(15, "TOD_04_00_SemiCloudy");
      dictionary2.Add(18, "TOD_03_00_SemiCloudy");
      dictionary2.Add(22, "TOD_01_00_SemiCloudy");
      string str = "field_battle";
      dictionary2.TryGetValue(timeOfDay, out str);
      return new AtmosphereInfo()
      {
        AtmosphereName = str,
        TimeInfo = new TimeInformation() { Season = num }
      };
    }

    [MissionMethod]
    public static Mission OpenCustomBattleMission(
      string scene,
      BasicCharacterObject playerCharacter,
      CustomBattleCombatant playerParty,
      CustomBattleCombatant enemyParty,
      bool isPlayerGeneral,
      BasicCharacterObject playerSideGeneralCharacter,
      string sceneLevels = "",
      string seasonString = "",
      float timeOfDay = 6f)
    {
      BattleSideEnum playerSide = playerParty.Side;
      bool isPlayerAttacker = playerSide == BattleSideEnum.Attacker;
      IMissionTroopSupplier[] troopSuppliers = new IMissionTroopSupplier[2];
      CustomBattleTroopSupplier battleTroopSupplier1 = new CustomBattleTroopSupplier(playerParty, true, isPlayerGeneral, false);
      troopSuppliers[(int) playerParty.Side] = (IMissionTroopSupplier) battleTroopSupplier1;
      CustomBattleTroopSupplier battleTroopSupplier2 = new CustomBattleTroopSupplier(enemyParty, false, false, false);
      troopSuppliers[(int) enemyParty.Side] = (IMissionTroopSupplier) battleTroopSupplier2;
      bool isPlayerSergeant = !isPlayerGeneral;
      return MissionState.OpenNew("CustomBattle", new MissionInitializerRecord(scene)
      {
        DoNotUseLoadingScreen = false,
        PlayingInCampaignMode = false,
        AtmosphereOnCampaign = BannerlordMissions.CreateAtmosphereInfoForMission(seasonString, (int) timeOfDay),
        SceneLevels = sceneLevels,
        TimeOfDay = timeOfDay,
        DecalAtlasGroup = 2
      }, (InitializeMissionBehaviorsDelegate) (missionController => (IEnumerable<MissionBehavior>) new MissionBehavior[25]
      {
        (MissionBehavior) new MissionAgentSpawnLogic(troopSuppliers, playerSide, Mission.BattleSizeType.Battle),
        (MissionBehavior) new BattlePowerCalculationLogic(),
        (MissionBehavior) new CustomBattleAgentLogic(),
        (MissionBehavior) new BannerBearerLogic(),
        (MissionBehavior) new CustomBattleMissionSpawnHandler(!isPlayerAttacker ? playerParty : enemyParty, isPlayerAttacker ? playerParty : enemyParty),
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new BattleReinforcementsSpawnController(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) null, (IBattleCombatant) playerParty, !isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, Mission.MissionTeamAITypeEnum.FieldBattle, isPlayerSergeant),
        (MissionBehavior) new BattleObserverMissionLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new AgentVictoryLogic(),
        (MissionBehavior) new MissionAgentPanicHandler(),
        (MissionBehavior) new BattleMissionAgentInteractionLogic(),
        (MissionBehavior) new AgentMoraleInteractionLogic(),
        (MissionBehavior) new AssignPlayerRoleInTeamMissionController(isPlayerGeneral, isPlayerSergeant, false, isPlayerSergeant ? Enumerable.Repeat<string>(playerCharacter.StringId, 1).ToList<string>() : new List<string>()),
        (MissionBehavior) new GeneralsAndCaptainsAssignmentLogic(isPlayerAttacker & isPlayerGeneral ? playerCharacter.GetName() : (isPlayerAttacker & isPlayerSergeant ? playerSideGeneralCharacter.GetName() : (TextObject) null), !isPlayerAttacker & isPlayerGeneral ? playerCharacter.GetName() : (!isPlayerAttacker & isPlayerSergeant ? playerSideGeneralCharacter.GetName() : (TextObject) null)),
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
    public static Mission OpenSiegeMissionWithDeployment(
      string scene,
      BasicCharacterObject playerCharacter,
      CustomBattleCombatant playerParty,
      CustomBattleCombatant enemyParty,
      bool isPlayerGeneral,
      float[] wallHitPointPercentages,
      bool hasAnySiegeTower,
      List<MissionSiegeWeapon> siegeWeaponsOfAttackers,
      List<MissionSiegeWeapon> siegeWeaponsOfDefenders,
      bool isPlayerAttacker,
      int sceneUpgradeLevel = 0,
      string seasonString = "",
      bool isSallyOut = false,
      bool isReliefForceAttack = false,
      float timeOfDay = 6f)
    {
      string str1;
      switch (sceneUpgradeLevel)
      {
        case 1:
          str1 = "level_1";
          break;
        case 2:
          str1 = "level_2";
          break;
        default:
          str1 = "level_3";
          break;
      }
      string str2 = str1 + " siege";
      BattleSideEnum playerSide = playerParty.Side;
      IMissionTroopSupplier[] troopSuppliers = new IMissionTroopSupplier[2];
      CustomBattleTroopSupplier battleTroopSupplier1 = new CustomBattleTroopSupplier(playerParty, true, isPlayerGeneral, isSallyOut);
      troopSuppliers[(int) playerParty.Side] = (IMissionTroopSupplier) battleTroopSupplier1;
      CustomBattleTroopSupplier battleTroopSupplier2 = new CustomBattleTroopSupplier(enemyParty, false, false, isSallyOut);
      troopSuppliers[(int) enemyParty.Side] = (IMissionTroopSupplier) battleTroopSupplier2;
      bool isPlayerSergeant = !isPlayerGeneral;
      return MissionState.OpenNew("CustomSiegeBattle", new MissionInitializerRecord(scene)
      {
        PlayingInCampaignMode = false,
        AtmosphereOnCampaign = BannerlordMissions.CreateAtmosphereInfoForMission(seasonString, (int) timeOfDay),
        SceneLevels = str2,
        TimeOfDay = timeOfDay
      }, (InitializeMissionBehaviorsDelegate) (mission =>
      {
        List<MissionBehavior> missionBehaviorList = new List<MissionBehavior>();
        missionBehaviorList.Add((MissionBehavior) new BattleSpawnLogic(isSallyOut ? "sally_out_set" : (isReliefForceAttack ? "relief_force_attack_set" : "battle_set")));
        missionBehaviorList.Add((MissionBehavior) new MissionOptionsComponent());
        missionBehaviorList.Add((MissionBehavior) new BattleEndLogic());
        missionBehaviorList.Add((MissionBehavior) new BattleReinforcementsSpawnController());
        missionBehaviorList.Add((MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) null, (IBattleCombatant) playerParty, !isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, !isSallyOut ? Mission.MissionTeamAITypeEnum.Siege : Mission.MissionTeamAITypeEnum.SallyOut, isPlayerSergeant));
        missionBehaviorList.Add((MissionBehavior) new SiegeMissionPreparationHandler(isSallyOut, isReliefForceAttack, wallHitPointPercentages, hasAnySiegeTower));
        Mission.BattleSizeType battleSizeType = isSallyOut ? Mission.BattleSizeType.SallyOut : Mission.BattleSizeType.Siege;
        missionBehaviorList.Add((MissionBehavior) new MissionAgentSpawnLogic(troopSuppliers, playerSide, battleSizeType));
        missionBehaviorList.Add((MissionBehavior) new BattlePowerCalculationLogic());
        if (isSallyOut)
          missionBehaviorList.Add((MissionBehavior) new CustomSallyOutMissionController(!isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty));
        else if (isReliefForceAttack)
          missionBehaviorList.Add((MissionBehavior) new CustomSallyOutMissionController(!isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty));
        else
          missionBehaviorList.Add((MissionBehavior) new CustomSiegeMissionSpawnHandler(!isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, false));
        missionBehaviorList.Add((MissionBehavior) new BattleObserverMissionLogic());
        missionBehaviorList.Add((MissionBehavior) new CustomBattleAgentLogic());
        missionBehaviorList.Add((MissionBehavior) new BannerBearerLogic());
        missionBehaviorList.Add((MissionBehavior) new AgentHumanAILogic());
        if (!isSallyOut)
          missionBehaviorList.Add((MissionBehavior) new AmmoSupplyLogic(new List<BattleSideEnum>()
          {
            BattleSideEnum.Defender
          }));
        missionBehaviorList.Add((MissionBehavior) new AgentVictoryLogic());
        missionBehaviorList.Add((MissionBehavior) new AssignPlayerRoleInTeamMissionController(isPlayerGeneral, isPlayerSergeant, false));
        missionBehaviorList.Add((MissionBehavior) new GeneralsAndCaptainsAssignmentLogic(isPlayerAttacker & isPlayerGeneral ? playerCharacter.GetName() : (TextObject) null, (TextObject) null, createBodyguard: false));
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
    public static Mission OpenCustomBattleLordsHallMission(
      string scene,
      BasicCharacterObject playerCharacter,
      CustomBattleCombatant playerParty,
      CustomBattleCombatant enemyParty,
      BasicCharacterObject playerSideGeneralCharacter,
      string sceneLevels = "",
      int sceneUpgradeLevel = 0,
      string seasonString = "",
      float timeOfDay = 6f)
    {
      int remainingDefenderArcherCount = MathF.Round(18.9f);
      BattleSideEnum playerSide = BattleSideEnum.Attacker;
      bool isPlayerAttacker = playerSide == BattleSideEnum.Attacker;
      IMissionTroopSupplier[] troopSuppliers = new IMissionTroopSupplier[2];
      CustomBattleTroopSupplier battleTroopSupplier1 = new CustomBattleTroopSupplier(playerParty, true, playerCharacter == playerSideGeneralCharacter, false);
      troopSuppliers[(int) playerParty.Side] = (IMissionTroopSupplier) battleTroopSupplier1;
      CustomBattleTroopSupplier battleTroopSupplier2 = new CustomBattleTroopSupplier(enemyParty, false, false, false, (Func<BasicCharacterObject, bool>) (basicCharacterObject =>
      {
        bool flag = true;
        if (basicCharacterObject.IsRanged)
        {
          if (remainingDefenderArcherCount > 0)
            --remainingDefenderArcherCount;
          else
            flag = false;
        }
        return flag;
      }));
      troopSuppliers[(int) enemyParty.Side] = (IMissionTroopSupplier) battleTroopSupplier2;
      return MissionState.OpenNew("CustomBattleLordsHall", new MissionInitializerRecord(scene)
      {
        DoNotUseLoadingScreen = false,
        PlayingInCampaignMode = false,
        SceneLevels = "siege",
        TimeOfDay = timeOfDay
      }, (InitializeMissionBehaviorsDelegate) (missionController => (IEnumerable<MissionBehavior>) new MissionBehavior[17]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new BattleEndLogic(),
        (MissionBehavior) new MissionCombatantsLogic((IEnumerable<IBattleCombatant>) null, (IBattleCombatant) playerParty, !isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, isPlayerAttacker ? (IBattleCombatant) playerParty : (IBattleCombatant) enemyParty, Mission.MissionTeamAITypeEnum.NoTeamAI, false),
        (MissionBehavior) new BattleMissionStarterLogic(),
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new LordsHallFightMissionController(troopSuppliers, 3f, 0.7f, 19, 27, playerSide),
        (MissionBehavior) new BattleObserverMissionLogic(),
        (MissionBehavior) new CustomBattleAgentLogic(),
        (MissionBehavior) new AgentVictoryLogic(),
        (MissionBehavior) new AmmoSupplyLogic(new List<BattleSideEnum>()
        {
          BattleSideEnum.Defender
        }),
        (MissionBehavior) new EquipmentControllerLeaveLogic(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new BattleMissionAgentInteractionLogic(),
        (MissionBehavior) new HighlightsController(),
        (MissionBehavior) new BattleHighlightsController()
      }));
    }

    private enum CustomBattleGameTypes
    {
      AttackerGeneral,
      DefenderGeneral,
      AttackerSergeant,
      DefenderSergeant,
    }
  }
}
