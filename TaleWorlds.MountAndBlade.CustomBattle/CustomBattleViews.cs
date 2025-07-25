using System;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Order;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;
using TaleWorlds.MountAndBlade.View.MissionViews.Sound;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;
using TaleWorlds.MountAndBlade.ViewModelCollection.Scoreboard;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000006 RID: 6
	[ViewCreatorModule]
	public class CustomBattleViews
	{
		// Token: 0x0600001A RID: 26 RVA: 0x0000489C File Offset: 0x00002A9C
		[ViewMethod("CustomBattle")]
		public static MissionView[] OpenCustomBattleMission(Mission mission)
		{
			List<MissionView> list = new List<MissionView>();
			list.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(false));
			list.Add(ViewCreator.CreateMissionAgentLabelUIHandler(mission));
			list.Add(ViewCreator.CreateMissionBattleScoreUIHandler(mission, new CustomBattleScoreboardVM()));
			list.Add(ViewCreator.CreateOptionsUIHandler());
			list.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
			MissionView missionView = ViewCreator.CreateMissionOrderUIHandler(null);
			list.Add(missionView);
			list.Add(new OrderTroopPlacer());
			list.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
			list.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
			list.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
			list.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
			list.Add(new MusicBattleMissionView(false));
			list.Add(new DeploymentMissionView());
			ISiegeDeploymentView @object = missionView as ISiegeDeploymentView;
			list.Add(new MissionEntitySelectionUIHandler(new Action<GameEntity>(@object.OnEntitySelection), new Action<GameEntity>(@object.OnEntityHover)));
			list.Add(new MissionFormationTargetSelectionHandler());
			list.Add(ViewCreator.CreateMissionBoundaryCrossingView());
			list.Add(new MissionBoundaryWallView());
			list.Add(new MissionDeploymentBoundaryMarker(new BorderFlagEntityFactory("swallowtail_banner"), 2f));
			list.Add(ViewCreator.CreateMissionFormationMarkerUIHandler(mission));
			list.Add(ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler());
			list.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
			list.Add(ViewCreator.CreatePhotoModeView());
			list.Add(new MissionItemContourControllerView());
			list.Add(new MissionAgentContourControllerView());
			list.Add(new MissionCustomBattlePreloadView());
			list.Add(ViewCreator.CreateMissionOrderOfBattleUIHandler(mission, new OrderOfBattleVM()));
			return list.ToArray();
		}

		// Token: 0x0600001B RID: 27 RVA: 0x00004A1C File Offset: 0x00002C1C
		[ViewMethod("CustomSiegeBattle")]
		public static MissionView[] OpenCustomSiegeBattleMission(Mission mission)
		{
			List<MissionView> list = new List<MissionView>();
			mission.GetMissionBehavior<SiegeDeploymentHandler>();
			list.Add(ViewCreator.CreateMissionSingleplayerEscapeMenu(false));
			list.Add(ViewCreator.CreateMissionAgentLabelUIHandler(mission));
			list.Add(ViewCreator.CreateMissionBattleScoreUIHandler(mission, new CustomBattleScoreboardVM()));
			list.Add(ViewCreator.CreateOptionsUIHandler());
			list.Add(ViewCreator.CreateMissionMainAgentEquipDropView(mission));
			MissionView missionView = ViewCreator.CreateMissionOrderUIHandler(null);
			list.Add(missionView);
			list.Add(new OrderTroopPlacer());
			list.Add(ViewCreator.CreateMissionAgentStatusUIHandler(mission));
			list.Add(ViewCreator.CreateMissionMainAgentEquipmentController(mission));
			list.Add(ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission));
			list.Add(ViewCreator.CreateMissionAgentLockVisualizerView(mission));
			list.Add(new MusicBattleMissionView(true));
			list.Add(new DeploymentMissionView());
			ISiegeDeploymentView @object = missionView as ISiegeDeploymentView;
			list.Add(new MissionEntitySelectionUIHandler(new Action<GameEntity>(@object.OnEntitySelection), new Action<GameEntity>(@object.OnEntityHover)));
			list.Add(new MissionFormationTargetSelectionHandler());
			list.Add(ViewCreator.CreateMissionBoundaryCrossingView());
			list.Add(new MissionDeploymentBoundaryMarker(new BorderFlagEntityFactory("swallowtail_banner"), 2f));
			list.Add(ViewCreator.CreateMissionFormationMarkerUIHandler(mission));
			list.Add(ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler());
			list.Add(ViewCreator.CreateMissionSpectatorControlView(mission));
			list.Add(ViewCreator.CreatePhotoModeView());
			list.Add(new SiegeDeploymentVisualizationMissionView());
			list.Add(new MissionItemContourControllerView());
			list.Add(new MissionAgentContourControllerView());
			list.Add(new MissionCustomBattlePreloadView());
			list.Add(ViewCreator.CreateMissionSiegeEngineMarkerView(mission));
			list.Add(ViewCreator.CreateMissionOrderOfBattleUIHandler(mission, new OrderOfBattleVM()));
			return list.ToArray();
		}

		// Token: 0x0600001C RID: 28 RVA: 0x00004BB0 File Offset: 0x00002DB0
		[ViewMethod("CustomBattleLordsHall")]
		public static MissionView[] OpenCustomBattleLordsHallMission(Mission mission)
		{
			return new List<MissionView>
			{
				ViewCreator.CreateMissionSingleplayerEscapeMenu(false),
				ViewCreator.CreateOptionsUIHandler(),
				ViewCreator.CreateMissionBattleScoreUIHandler(mission, new CustomBattleScoreboardVM()),
				ViewCreator.CreateMissionAgentLabelUIHandler(mission),
				ViewCreator.CreateMissionOrderUIHandler(null),
				new OrderTroopPlacer(),
				ViewCreator.CreateMissionAgentStatusUIHandler(mission),
				ViewCreator.CreateMissionMainAgentEquipmentController(mission),
				ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
				ViewCreator.CreateMissionBoundaryCrossingView(),
				new MissionBoundaryWallView(),
				ViewCreator.CreateMissionFormationMarkerUIHandler(mission),
				ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
				ViewCreator.CreateMissionSpectatorControlView(mission),
				new MissionItemContourControllerView(),
				new MissionAgentContourControllerView(),
				ViewCreator.CreatePhotoModeView(),
				new MissionCustomBattlePreloadView()
			}.ToArray();
		}
	}
}
