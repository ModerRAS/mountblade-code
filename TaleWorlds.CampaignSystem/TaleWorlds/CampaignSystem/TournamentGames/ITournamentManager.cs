// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.ITournamentManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public interface ITournamentManager
  {
    void AddTournament(TournamentGame game);

    TournamentGame GetTournamentGame(Town town);

    void OnPlayerJoinMatch(Type gameType);

    void OnPlayerJoinTournament(Type gameType, Settlement settlement);

    void OnPlayerWatchTournament(Type gameType, Settlement settlement);

    void OnPlayerWinMatch(Type gameType);

    void OnPlayerWinTournament(Type gameType);

    void InitializeLeaderboardEntry(Hero hero, int initialVictories = 0);

    void AddLeaderboardEntry(Hero hero);

    void GivePrizeToWinner(TournamentGame tournament, Hero winner, bool isPlayerParticipated);

    void DeleteLeaderboardEntry(Hero hero);

    List<KeyValuePair<Hero, int>> GetLeaderboard();

    int GetLeaderBoardRank(Hero hero);

    Hero GetLeaderBoardLeader();

    void ResolveTournament(TournamentGame tournament, Town town);
  }
}
