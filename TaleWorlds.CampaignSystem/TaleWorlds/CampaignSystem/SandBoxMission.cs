// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SandBoxMission
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class SandBoxMission
  {
    public static IMission OpenTournamentArcheryMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return SandBoxManager.Instance.SandBoxMissionManager.OpenTournamentArcheryMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public static IMission OpenTournamentFightMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return SandBoxManager.Instance.SandBoxMissionManager.OpenTournamentFightMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public static IMission OpenTournamentHorseRaceMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return SandBoxManager.Instance.SandBoxMissionManager.OpenTournamentHorseRaceMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public static IMission OpenTournamentJoustingMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating)
    {
      return SandBoxManager.Instance.SandBoxMissionManager.OpenTournamentJoustingMission(scene, tournamentGame, settlement, culture, isPlayerParticipating);
    }

    public static IMission OpenBattleChallengeMission(
      string scene,
      IList<Hero> priorityCharsAttacker,
      IList<Hero> priorityCharsDefender)
    {
      return SandBoxManager.Instance.SandBoxMissionManager.OpenBattleChallengeMission(scene, priorityCharsAttacker, priorityCharsDefender);
    }
  }
}
