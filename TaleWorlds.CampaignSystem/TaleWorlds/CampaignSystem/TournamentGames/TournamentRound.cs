// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.TournamentRound
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public class TournamentRound
  {
    public TournamentMatch[] Matches { get; private set; }

    public int CurrentMatchIndex { get; private set; }

    public TournamentMatch CurrentMatch
    {
      get
      {
        return this.CurrentMatchIndex >= this.Matches.Length ? (TournamentMatch) null : this.Matches[this.CurrentMatchIndex];
      }
    }

    public TournamentRound(
      int participantCount,
      int numberOfMatches,
      int numberOfTeamsPerMatch,
      int numberOfWinnerParticipants,
      TournamentGame.QualificationMode qualificationMode)
    {
      this.Matches = new TournamentMatch[numberOfMatches];
      this.CurrentMatchIndex = 0;
      int participantCount1 = participantCount / numberOfMatches;
      for (int index = 0; index < numberOfMatches; ++index)
        this.Matches[index] = new TournamentMatch(participantCount1, numberOfTeamsPerMatch, numberOfWinnerParticipants / numberOfMatches, qualificationMode);
    }

    public void OnMatchEnded() => ++this.CurrentMatchIndex;

    public void EndMatch()
    {
      this.CurrentMatch.End();
      ++this.CurrentMatchIndex;
    }

    public void AddParticipant(TournamentParticipant participant, bool firstTime = false)
    {
      foreach (TournamentMatch match in this.Matches)
      {
        if (match.IsParticipantRequired())
        {
          match.AddParticipant(participant, firstTime);
          break;
        }
      }
    }
  }
}
