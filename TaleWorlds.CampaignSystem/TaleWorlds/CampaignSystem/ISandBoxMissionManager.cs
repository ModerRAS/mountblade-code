// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ISandBoxMissionManager
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
  public interface ISandBoxMissionManager
  {
    IMission OpenTournamentFightMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating);

    IMission OpenTournamentHorseRaceMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating);

    IMission OpenTournamentJoustingMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating);

    IMission OpenTournamentArcheryMission(
      string scene,
      TournamentGame tournamentGame,
      Settlement settlement,
      CultureObject culture,
      bool isPlayerParticipating);

    IMission OpenBattleChallengeMission(
      string scene,
      IList<Hero> priorityCharsAttacker,
      IList<Hero> priorityCharsDefender);
  }
}
