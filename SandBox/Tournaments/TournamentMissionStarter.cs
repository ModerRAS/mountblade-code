// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.TournamentMissionStarter
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using SandBox.Missions.MissionLogics.Arena;
using SandBox.Tournaments.MissionLogics;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Missions;

#nullable disable
namespace SandBox.Tournaments
{
  [MissionManager]
  public static class TournamentMissionStarter
  {
    [MissionMethod]
    public static Mission OpenTournamentArcheryMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return MissionState.OpenNew("TournamentArchery", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (missionController =>
      {
        TournamentArcheryMissionController gameBehavior = new TournamentArcheryMissionController(culture);
        return (IEnumerable<MissionBehavior>) new MissionBehavior[12]
        {
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) gameBehavior,
          (MissionBehavior) new TournamentBehavior(tournamentGame, settlement, (ITournamentGameBehavior) gameBehavior, isPlayerParticipating),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new MissionAgentPanicHandler(),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new ArenaAgentStateDeciderLogic(),
          (MissionBehavior) new BasicLeaveMissionLogic(true),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionOptionsComponent()
        };
      }));
    }

    [MissionMethod]
    public static Mission OpenTournamentFightMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return MissionState.OpenNew("TournamentFight", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (missionController =>
      {
        TournamentFightMissionController gameBehavior = new TournamentFightMissionController(culture);
        return (IEnumerable<MissionBehavior>) new MissionBehavior[13]
        {
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) gameBehavior,
          (MissionBehavior) new TournamentBehavior(tournamentGame, settlement, (ITournamentGameBehavior) gameBehavior, isPlayerParticipating),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new MissionAgentPanicHandler(),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new ArenaAgentStateDeciderLogic(),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionOptionsComponent(),
          (MissionBehavior) new HighlightsController(),
          (MissionBehavior) new SandboxHighlightsController()
        };
      }));
    }

    [MissionMethod]
    public static Mission OpenTournamentHorseRaceMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return MissionState.OpenNew("TournamentHorseRace", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (missionController =>
      {
        TownHorseRaceMissionController gameBehavior = new TownHorseRaceMissionController(culture);
        return (IEnumerable<MissionBehavior>) new MissionBehavior[11]
        {
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) gameBehavior,
          (MissionBehavior) new TournamentBehavior(tournamentGame, settlement, (ITournamentGameBehavior) gameBehavior, isPlayerParticipating),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new MissionAgentPanicHandler(),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new ArenaAgentStateDeciderLogic(),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionOptionsComponent()
        };
      }));
    }

    [MissionMethod]
    public static Mission OpenTournamentJoustingMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return MissionState.OpenNew("TournamentJousting", SandBoxMissions.CreateSandBoxMissionInitializerRecord(scene, decalAtlasGroup: DecalAtlasGroup.Town), (InitializeMissionBehaviorsDelegate) (missionController =>
      {
        TournamentJoustingMissionController gameBehavior = new TournamentJoustingMissionController(culture);
        return (IEnumerable<MissionBehavior>) new MissionBehavior[12]
        {
          (MissionBehavior) new CampaignMissionComponent(),
          (MissionBehavior) new EquipmentControllerLeaveLogic(),
          (MissionBehavior) gameBehavior,
          (MissionBehavior) new TournamentBehavior(tournamentGame, settlement, (ITournamentGameBehavior) gameBehavior, isPlayerParticipating),
          (MissionBehavior) new AgentVictoryLogic(),
          (MissionBehavior) new MissionAgentPanicHandler(),
          (MissionBehavior) new AgentHumanAILogic(),
          (MissionBehavior) new ArenaAgentStateDeciderLogic(),
          (MissionBehavior) new MissionHardBorderPlacer(),
          (MissionBehavior) new MissionBoundaryPlacer(),
          (MissionBehavior) new MissionBoundaryCrossingHandler(),
          (MissionBehavior) new MissionOptionsComponent()
        };
      }));
    }

    [MissionMethod]
    public static Mission OpenBattleChallengeMission(
      string scene,
      IList<Hero> priorityCharsAttacker,
      IList<Hero> priorityCharsDefender)
    {
      return (Mission) null;
    }
  }
}
