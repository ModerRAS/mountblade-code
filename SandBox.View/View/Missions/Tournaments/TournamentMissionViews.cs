// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.Tournaments.TournamentMissionViews
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.View.Missions.Sound.Components;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;

#nullable disable
namespace SandBox.View.Missions.Tournaments
{
  [ViewCreatorModule]
  public class TournamentMissionViews
  {
    [ViewMethod("TournamentArchery")]
    public static MissionView[] OpenTournamentArcheryMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        SandBoxViewCreator.CreateMissionTournamentView(),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.60000002384185791)),
        (MissionView) new MissionSingleplayerViewHandler(),
        (MissionView) new MissionMessageUIHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new ArenaPreloadView()
      }.ToArray();
    }

    [ViewMethod("TournamentFight")]
    public static MissionView[] OpenTournamentFightMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        SandBoxViewCreator.CreateMissionTournamentView(),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.60000002384185791)),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MusicTournamentMissionView(),
        (MissionView) new MissionSingleplayerViewHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new ArenaPreloadView()
      }.ToArray();
    }

    [ViewMethod("TournamentHorseRace")]
    public static MissionView[] OpenTournamentHorseRaceMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        (MissionView) new MissionTournamentView(),
        (MissionView) new MissionSingleplayerViewHandler(),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.60000002384185791)),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new ArenaPreloadView()
      }.ToArray();
    }

    [ViewMethod("TournamentJousting")]
    public static MissionView[] OpenTournamentJoustingMission(Mission mission)
    {
      return new List<MissionView>()
      {
        (MissionView) new MissionCampaignView(),
        (MissionView) new MissionConversationCameraView(),
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        ViewCreator.CreateMissionSpectatorControlView(mission),
        SandBoxViewCreator.CreateMissionTournamentView(),
        (MissionView) new MissionAudienceHandler((float) (0.40000000596046448 + (double) MBRandom.RandomFloat * 0.60000002384185791)),
        (MissionView) new MissionSingleplayerViewHandler(),
        (MissionView) new MissionMessageUIHandler(),
        (MissionView) new MissionScoreUIHandler(),
        ViewCreator.CreateSingleplayerMissionKillNotificationUIHandler(),
        (MissionView) new MissionTournamentJoustingView(),
        ViewCreator.CreateMissionAgentLabelUIHandler(mission),
        (MissionView) new MissionItemContourControllerView(),
        (MissionView) new MissionCampaignBattleSpectatorView(),
        ViewCreator.CreatePhotoModeView(),
        (MissionView) new ArenaPreloadView()
      }.ToArray();
    }
  }
}
