// Decompiled with JetBrains decompiler
// Type: StoryMode.View.Missions.StoryModeMissionViews
// Assembly: StoryMode.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0D42E731-85DE-4B91-B7A6-53726B566D9F
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.View.dll

using SandBox.View;
using SandBox.View.Missions;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace StoryMode.View.Missions
{
  [ViewCreatorModule]
  public class StoryModeMissionViews
  {
    [ViewMethod("TrainingField")]
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
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionBoundaryCrossingView(),
        SandBoxViewCreator.CreateMissionBarterView(),
        ViewCreator.CreateMissionLeaveView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new MissionBoundaryWallView(),
        SandBoxViewCreator.CreateMissionNameMarkerUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionAgentContourControllerView(),
        StoryModeViewCreator.CreateTrainingFieldObjectiveView(mission),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler()
      }.ToArray();
    }
  }
}
