// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxMissionManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;

#nullable disable
namespace SandBox
{
  public class SandBoxMissionManager : ISandBoxMissionManager
  {
    public IMission OpenTournamentFightMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return (IMission) TournamentMissionStarter.OpenTournamentFightMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public IMission OpenTournamentHorseRaceMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return (IMission) TournamentMissionStarter.OpenTournamentHorseRaceMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public IMission OpenTournamentJoustingMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return (IMission) TournamentMissionStarter.OpenTournamentJoustingMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public IMission OpenTournamentArcheryMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return (IMission) TournamentMissionStarter.OpenTournamentArcheryMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    IMission ISandBoxMissionManager.OpenBattleChallengeMission(
      string scene,
      IList<Hero> priorityCharsAttacker,
      IList<Hero> priorityCharsDefender)
    {
      return (IMission) TournamentMissionStarter.OpenBattleChallengeMission(scene, priorityCharsAttacker, priorityCharsDefender);
    }
  }
}
