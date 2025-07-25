// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.OtherMissionViews
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;

#nullable disable
namespace SandBox.View.Missions
{
  [ViewCreatorModule]
  public class OtherMissionViews
  {
    [ViewMethod("BattleChallenge")]
    public static MissionView[] OpenBattleChallengeMission(Mission mission)
    {
      return new List<MissionView>()
      {
        ViewCreator.CreateMissionSingleplayerEscapeMenu(CampaignOptions.IsIronmanMode),
        ViewCreator.CreateOptionsUIHandler(),
        ViewCreator.CreateMissionMainAgentEquipDropView(mission),
        (MissionView) new MissionMessageUIHandler(),
        ViewCreator.CreateMissionAgentStatusUIHandler(mission),
        ViewCreator.CreateMissionMainAgentEquipmentController(mission),
        ViewCreator.CreateMissionMainAgentCheerBarkControllerView(mission),
        ViewCreator.CreateMissionAgentLockVisualizerView(mission),
        (MissionView) new MissionSingleplayerViewHandler()
      }.ToArray();
    }
  }
}
