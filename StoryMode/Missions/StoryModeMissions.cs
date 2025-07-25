// Decompiled with JetBrains decompiler
// Type: StoryMode.Missions.StoryModeMissions
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using SandBox;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.MissionLogics;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Missions;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;

#nullable disable
namespace StoryMode.Missions
{
  [MissionManager]
  public static class StoryModeMissions
  {
    [MissionMethod]
    public static Mission OpenTrainingFieldMission(
      string scene,
      Location location,
      CharacterObject talkToChar = null,
      string sceneLevels = null)
    {
      return MissionState.OpenNew("TrainingField", SandBoxMissions.CreateSandBoxTrainingMissionInitializerRecord(scene, sceneLevels), (InitializeMissionBehaviorsDelegate) (mission => (IEnumerable<MissionBehavior>) new MissionBehavior[23]
      {
        (MissionBehavior) new MissionOptionsComponent(),
        (MissionBehavior) new CampaignMissionComponent(),
        (MissionBehavior) new MissionBasicTeamLogic(),
        (MissionBehavior) new TrainingFieldMissionController(),
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
        (MissionBehavior) new AgentHumanAILogic(),
        (MissionBehavior) new MissionCrimeHandler(),
        (MissionBehavior) new MissionHardBorderPlacer(),
        (MissionBehavior) new MissionBoundaryPlacer(),
        (MissionBehavior) new MissionBoundaryCrossingHandler(),
        (MissionBehavior) new VisualTrackerMissionBehavior(),
        (MissionBehavior) new EquipmentControllerLeaveLogic()
      }));
    }
  }
}
