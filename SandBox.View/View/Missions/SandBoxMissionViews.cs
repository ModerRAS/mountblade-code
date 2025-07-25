// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.SandBoxMissionViews
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.AgentControllers;
using SandBox.View.Missions.Sound.Components;
using SandBox.View.Missions.Tournaments;
using SandBox.ViewModelCollection;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Order;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;
using TaleWorlds.MountAndBlade.View.MissionViews.Sound;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;
using TaleWorlds.MountAndBlade.ViewModelCollection.Scoreboard;

#nullable disable
namespace SandBox.View.Missions
{
  [ViewCreatorModule]
  public class SandBoxMissionViews
  {
    [ViewMethod("TownCenter")]
    public static MissionView[] OpenTownCenterMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        ViewCreator.CreateMissionLeaveView(),
        ViewCreator.CreatePhotoModeView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView()
      }.ToArray();
    }

    [ViewMethod("TownAmbush")]
    public static MissionView[] OpenTownAmbushMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("FacialAnimationTest")]
    public static MissionView[] OpenFacialAnimationTest(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("Indoor")]
    public static MissionView[] OpenTavernMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MusicSilencedMissionView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionLeaveView(),
        SandBoxViewCreator.CreateBoardGameView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("PrisonBreak")]
    public static MissionView[] OpenPrisonBreakMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        (MissionView) new MusicSilencedMissionView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionLeaveView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("Village")]
    public static MissionView[] OpenVillageMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionLeaveView(),
        (MissionView) new MissionBoundaryWallView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("Retirement")]
    public static MissionView[] OpenRetirementMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionLeaveView(),
        (MissionView) new MissionBoundaryWallView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("ArenaPracticeFight")]
    public static MissionView[] OpenArenaStartMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.30000001192092896)),
        SandBoxViewCreator.CreateMissionArenaPracticeFightView(),
        ViewCreator.CreateMissionLeaveView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        (MissionView) new MusicArenaPracticeMissionView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new ArenaPreloadView()
      }.ToArray();
    }

    [ViewMethod("ArenaDuelMission")]
    public static MissionView[] OpenArenaDuelMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionLeaveView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        (MissionView) new MissionSingleplayerViewHandler(),
        (MissionView) new MusicSilencedMissionView(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.30000001192092896)),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("TownMerchant")]
    public static MissionView[] OpenTownMerchantMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionLeaveView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("Alley")]
    public static MissionView[] OpenAlleyMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateMissionLeaveView(),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("SneakTeam3")]
    public static MissionView[] OpenSneakTeam3Mission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("SimpleMountedPlayer")]
    public static MissionView[] OpenSimpleMountedPlayerMission(Mission mission)
    {
      return new List<MissionView>().ToArray();
    }

    [ViewMethod("Battle")]
    public static MissionView[] OpenBattleMission(Mission mission)
    {
      List<MissionView> missionViewList = new List<MissionView>();
      missionViewList.Add((MissionView) new MissionCampaignView());
      missionViewList.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode));
      missionViewList.Add(ViewCreator.CreateMissionAgentLabelUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)));
      missionViewList.Add(ViewCreator.CreateOptionsUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
      MissionView missionOrderUiHandler = ViewCreator.CreateMissionOrderUIHandler();
      missionViewList.Add(missionOrderUiHandler);
      missionViewList.Add((MissionView) new OrderTroopPlacer());
      missionViewList.Add((MissionView) new MissionSingleplayerViewHandler());
      missionViewList.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
      missionViewList.Add((MissionView) new MusicBattleMissionView(false));
      missionViewList.Add((MissionView) new DeploymentMissionView());
      missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add(ViewCreator.CreateMissionBoundaryCrossingView());
      missionViewList.Add((MissionView) new MissionBoundaryWallView());
      missionViewList.Add(ViewCreator.CreateMissionFormationMarkerUIHandler(mission));
      missionViewList.Add((MissionView) new MissionFormationTargetSelectionHandler());
      missionViewList.Add(ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
      missionViewList.Add((MissionView) new MissionItemContourControllerView());
      missionViewList.Add((MissionView) new MissionAgentContourControllerView());
      missionViewList.Add((MissionView) new MissionPreloadView());
      missionViewList.Add((MissionView) new MissionCampaignBattleSpectatorView());
      missionViewList.Add(ViewCreator.CreatePhotoModeView());
      ISiegeDeploymentView siegeDeploymentView = missionOrderUiHandler as ISiegeDeploymentView;
      missionViewList.Add((MissionView) new MissionEntitySelectionUIHandler(new Action<GameEntity>(siegeDeploymentView.OnEntitySelection), new Action<GameEntity>(siegeDeploymentView.OnEntityHover)));
      missionViewList.Add(ViewCreator.CreateMissionOrderOfBattleUIHandler(mission, (OrderOfBattleVM) new SPOrderOfBattleVM()));
      return missionViewList.ToArray();
    }

    [ViewMethod("AlleyFight")]
    public static MissionView[] OpenAlleyFightMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("HideoutBattle")]
    public static MissionView[] OpenHideoutBattleMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        (MissionView) new MissionHideoutCinematicView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        (MissionView) new MusicSilencedMissionView(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        (MissionView) new MissionPreloadView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("EnteringSettlementBattle")]
    public static MissionView[] OpenBattleMissionWhileEnteringSettlement(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("CombatWithDialogue")]
    public static MissionView[] OpenCombatMissionWithDialogue(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("SiegeEngine")]
    public static MissionView[] OpenTestSiegeEngineMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer()
      }.ToArray();
    }

    [ViewMethod("CustomCameraMission")]
    public static MissionView[] OpenCustomCameraMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        (MissionView) new MissionCustomCameraView()
      }.ToArray();
    }

    [ViewMethod("AmbushBattle")]
    public static MissionView[] OpenAmbushBattleMission(Mission mission)
    {
      throw new NotImplementedException("Ambush battle is not implemented.");
    }

    [ViewMethod("Ambush")]
    public static MissionView[] OpenAmbushMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionAmbushView(),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("Camp")]
    public static MissionView[] OpenCampMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("SiegeMissionWithDeployment")]
    public static MissionView[] OpenSiegeMissionWithDeployment(Mission mission)
    {
      List<MissionView> missionViewList = new List<MissionView>();
      mission.GetMissionBehavior<SiegeDeploymentHandler>();
      missionViewList.Add((MissionView) new MissionCampaignView());
      missionViewList.Add((MissionView) new MissionConversationCameraView());
      missionViewList.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode));
      missionViewList.Add(ViewCreator.CreateOptionsUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
      missionViewList.Add(ViewCreator.CreateMissionAgentLabelUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)));
      MissionView missionOrderUiHandler = ViewCreator.CreateMissionOrderUIHandler();
      missionViewList.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
      missionViewList.Add(missionOrderUiHandler);
      missionViewList.Add((MissionView) new OrderTroopPlacer());
      missionViewList.Add((MissionView) new MissionSingleplayerViewHandler());
      missionViewList.Add((MissionView) new MusicBattleMissionView(true));
      missionViewList.Add((MissionView) new DeploymentMissionView());
      missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add(ViewCreator.CreateMissionBoundaryCrossingView());
      missionViewList.Add(ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler());
      missionViewList.Add(ViewCreator.CreatePhotoModeView());
      missionViewList.Add(ViewCreator.CreateMissionFormationMarkerUIHandler(mission));
      missionViewList.Add((MissionView) new MissionFormationTargetSelectionHandler());
      ISiegeDeploymentView siegeDeploymentView = missionOrderUiHandler as ISiegeDeploymentView;
      missionViewList.Add((MissionView) new MissionEntitySelectionUIHandler(new Action<GameEntity>(siegeDeploymentView.OnEntitySelection), new Action<GameEntity>(siegeDeploymentView.OnEntityHover)));
      missionViewList.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
      missionViewList.Add((MissionView) new MissionItemContourControllerView());
      missionViewList.Add((MissionView) new MissionAgentContourControllerView());
      missionViewList.Add((MissionView) new MissionPreloadView());
      missionViewList.Add((MissionView) new MissionCampaignBattleSpectatorView());
      missionViewList.Add(ViewCreator.CreateMissionOrderOfBattleUIHandler(mission, (OrderOfBattleVM) new SPOrderOfBattleVM()));
      missionViewList.Add(ViewCreator.CreateMissionSiegeEngineMarkerView(mission));
      return missionViewList.ToArray();
    }

    [ViewMethod("SiegeMissionNoDeployment")]
    public static MissionView[] OpenSiegeMissionNoDeployment(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        (MissionView) new MusicBattleMissionView(true),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionPreloadView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreateMissionSiegeEngineMarkerView(mission)
      }.ToArray();
    }

    [ViewMethod("SiegeLordsHallFightMission")]
    public static MissionView[] OpenSiegeLordsHallFightMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionPreloadView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("Siege")]
    public static MissionView[] OpenSiegeMission(Mission mission)
    {
      List<MissionView> missionViewList = new List<MissionView>();
      mission.GetMissionBehavior<SiegeDeploymentHandler>();
      missionViewList.Add((MissionView) new MissionCampaignView());
      missionViewList.Add((MissionView) new MissionConversationCameraView());
      missionViewList.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode));
      missionViewList.Add(ViewCreator.CreateOptionsUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
      MissionView missionOrderUiHandler = ViewCreator.CreateMissionOrderUIHandler();
      missionViewList.Add(missionOrderUiHandler);
      missionViewList.Add((MissionView) new OrderTroopPlacer());
      missionViewList.Add((MissionView) new MissionSingleplayerViewHandler());
      missionViewList.Add((MissionView) new DeploymentMissionView());
      missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add(ViewCreator.CreateMissionBoundaryCrossingView());
      missionViewList.Add(ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
      missionViewList.Add(ViewCreator.CreatePhotoModeView());
      ISiegeDeploymentView siegeDeploymentView = missionOrderUiHandler as ISiegeDeploymentView;
      missionViewList.Add((MissionView) new MissionEntitySelectionUIHandler(new Action<GameEntity>(siegeDeploymentView.OnEntitySelection), new Action<GameEntity>(siegeDeploymentView.OnEntityHover)));
      missionViewList.Add(ViewCreator.CreateMissionFormationMarkerUIHandler(mission));
      missionViewList.Add((MissionView) new MissionFormationTargetSelectionHandler());
      missionViewList.Add((MissionView) new MissionItemContourControllerView());
      missionViewList.Add((MissionView) new MissionAgentContourControllerView());
      missionViewList.Add((MissionView) new MissionCampaignBattleSpectatorView());
      missionViewList.Add(ViewCreator.CreateMissionSiegeEngineMarkerView(mission));
      return missionViewList.ToArray();
    }

    [ViewMethod("SiegeMissionForTutorial")]
    public static MissionView[] OpenSiegeMissionForTutorial(Mission mission)
    {
      Debug.FailedAssert("Do not use SiegeForTutorial! Use campaign!", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.View\\Missions\\SandBoxMissionViews.cs", nameof (OpenSiegeMissionForTutorial), 876);
      List<MissionView> missionViewList = new List<MissionView>();
      missionViewList.Add((MissionView) new MissionConversationCameraView());
      missionViewList.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode));
      missionViewList.Add(ViewCreator.CreateOptionsUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
      MissionView missionOrderUiHandler = ViewCreator.CreateMissionOrderUIHandler();
      missionViewList.Add(missionOrderUiHandler);
      missionViewList.Add((MissionView) new OrderTroopPlacer());
      missionViewList.Add((MissionView) new MissionSingleplayerViewHandler());
      missionViewList.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
      missionViewList.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
      missionViewList.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
      missionViewList.Add(ViewCreator.CreatePhotoModeView());
      missionViewList.Add(ViewCreator.CreateMissionSiegeEngineMarkerView(mission));
      ISiegeDeploymentView siegeDeploymentView = missionOrderUiHandler as ISiegeDeploymentView;
      missionViewList.Add((MissionView) new MissionEntitySelectionUIHandler(new Action<GameEntity>(siegeDeploymentView.OnEntitySelection), new Action<GameEntity>(siegeDeploymentView.OnEntityHover)));
      missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add((MissionView) new MissionCampaignBattleSpectatorView());
      return missionViewList.ToArray();
    }

    [ViewMethod("AmbushBattleForTutorial")]
    public static MissionView[] OpenAmbushMissionForTutorial(Mission mission)
    {
      List<MissionView> missionViewList = new List<MissionView>();
      missionViewList.Add((MissionView) new MissionCampaignView());
      missionViewList.Add((MissionView) new MissionConversationCameraView());
      if (mission.GetMissionBehavior<AmbushMissionController>().IsPlayerAmbusher)
        missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode));
      missionViewList.Add(ViewCreator.CreateOptionsUIHandler());
      missionViewList.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
      missionViewList.Add(ViewCreator.CreateMissionOrderUIHandler());
      missionViewList.Add((MissionView) new OrderTroopPlacer());
      missionViewList.Add((MissionView) new MissionSingleplayerViewHandler());
      missionViewList.Add((MissionView) new MissionAmbushView());
      missionViewList.Add(ViewCreator.CreatePhotoModeView());
      missionViewList.Add((MissionView) new MissionAmbushIntroView());
      missionViewList.Add((MissionView) new MissionDeploymentBoundaryMarker((IEntityFactory) new BorderFlagEntityFactory("swallowtail_banner")));
      missionViewList.Add((MissionView) new MissionCampaignBattleSpectatorView());
      return missionViewList.ToArray();
    }

    [ViewMethod("FormationTest")]
    public static MissionView[] OpenFormationTestMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer()
      }.ToArray();
    }

    [ViewMethod("VillageBattle")]
    public static MissionView[] OpenVillageBattleMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionBattleScoreUIHandler(mission, (ScoreboardBaseVM) new SPScoreboardVM((BattleSimulation) null)),
        ViewCreator.CreateMissionOrderUIHandler(),
        (MissionView) new OrderTroopPlacer(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
        (MissionView) new MissionFormationTargetSelectionHandler(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }

    [ViewMethod("SettlementTest")]
    public static MissionView[] OpenSettlementTestMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("EquipmentTest")]
    public static MissionView[] OpenEquipmentTestMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("FacialAnimTest")]
    public static MissionView[] OpenFacialAnimTestMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        SandBoxViewCreator.CreateMissionBarterView(),
        (MissionView) new MissionBoundaryWallView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }

    [ViewMethod("EquipItemTool")]
    public static MissionView[] OpenEquipItemToolMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionEquipItemToolView(),
        ViewCreator.CreateMissionLeaveView()
      }.ToArray();
    }

    [ViewMethod("Conversation")]
    public static MissionView[] OpenConversationMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        (MissionView) new MissionSingleplayerViewHandler(),
        SandBoxViewCreator.CreateMissionConversationView(mission),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView()
      }.ToArray();
    }
  }
}
