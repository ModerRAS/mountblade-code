// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.ITournamentGameBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.TournamentGames;

#nullable disable
namespace SandBox.Tournaments
{
  public interface ITournamentGameBehavior
  {
    void StartMatch(TournamentMatch match, bool isLastRound);

    void SkipMatch(TournamentMatch match);

    bool IsMatchEnded();

    void OnMatchEnded();
  }
}
