// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.TournamentGames.TournamentMatch
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.TournamentGames
{
  public class TournamentMatch
  {
    private readonly int _numberOfWinnerParticipants;
    public readonly TournamentGame.QualificationMode QualificationMode;
    private readonly TournamentTeam[] _teams;
    private readonly List<TournamentParticipant> _participants;
    private List<TournamentParticipant> _winners;
    private readonly int _participantCount;
    private int _teamSize;

    public IEnumerable<TournamentTeam> Teams
    {
      get => ((IEnumerable<TournamentTeam>) this._teams).AsEnumerable<TournamentTeam>();
    }

    public IEnumerable<TournamentParticipant> Participants
    {
      get => this._participants.AsEnumerable<TournamentParticipant>();
    }

    public TournamentMatch.MatchState State { get; private set; }

    public IEnumerable<TournamentParticipant> Winners
    {
      get => this._winners.AsEnumerable<TournamentParticipant>();
    }

    public bool IsReady => this.State == TournamentMatch.MatchState.Ready;

    public TournamentMatch(
      int participantCount,
      int numberOfTeamsPerMatch,
      int numberOfWinnerParticipants,
      TournamentGame.QualificationMode qualificationMode)
    {
      this._participants = new List<TournamentParticipant>();
      this._participantCount = participantCount;
      this._teams = new TournamentTeam[numberOfTeamsPerMatch];
      this._winners = new List<TournamentParticipant>();
      this._numberOfWinnerParticipants = numberOfWinnerParticipants;
      this.QualificationMode = qualificationMode;
      this._teamSize = participantCount / numberOfTeamsPerMatch;
      int[] numArray = new int[4]{ 119, 118, 120, 121 };
      int index1 = 0;
      for (int index2 = 0; index2 < numberOfTeamsPerMatch; ++index2)
      {
        this._teams[index2] = new TournamentTeam(this._teamSize, BannerManager.GetColor(numArray[index1]), Banner.CreateOneColoredEmptyBanner(numArray[index1]));
        index1 = (index1 + 1) % 4;
      }
      this.State = TournamentMatch.MatchState.Ready;
    }

    public void End()
    {
      this.State = TournamentMatch.MatchState.Finished;
      this._winners = this.GetWinners();
    }

    public void Start()
    {
      if (this.State == TournamentMatch.MatchState.Started)
        return;
      this.State = TournamentMatch.MatchState.Started;
      foreach (TournamentParticipant participant in this.Participants)
        participant.ResetScore();
    }

    public TournamentParticipant GetParticipant(int uniqueSeed)
    {
      return this._participants.FirstOrDefault<TournamentParticipant>((Func<TournamentParticipant, bool>) (p => p.Descriptor.CompareTo(uniqueSeed) == 0));
    }

    public bool IsParticipantRequired() => this._participants.Count < this._participantCount;

    public void AddParticipant(TournamentParticipant participant, bool firstTime)
    {
      this._participants.Add(participant);
      foreach (TournamentTeam team in this.Teams)
      {
        if (team.IsParticipantRequired() && ((participant.Team == null ? 0 : ((int) participant.Team.TeamColor == (int) team.TeamColor ? 1 : 0)) | (firstTime ? 1 : 0)) != 0)
        {
          team.AddParticipant(participant);
          return;
        }
      }
      foreach (TournamentTeam team in this.Teams)
      {
        if (team.IsParticipantRequired())
        {
          team.AddParticipant(participant);
          break;
        }
      }
    }

    public bool IsPlayerParticipating()
    {
      return this.Participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character == CharacterObject.PlayerCharacter));
    }

    public bool IsPlayerWinner()
    {
      return this.IsPlayerParticipating() && this.GetWinners().Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character == CharacterObject.PlayerCharacter));
    }

    private List<TournamentParticipant> GetWinners()
    {
      List<TournamentParticipant> winners = new List<TournamentParticipant>();
      if (this.QualificationMode == TournamentGame.QualificationMode.IndividualScore)
      {
        List<TournamentParticipant> list = this._participants.OrderByDescending<TournamentParticipant, int>((Func<TournamentParticipant, int>) (x => x.Score)).Take<TournamentParticipant>(this._numberOfWinnerParticipants).ToList<TournamentParticipant>();
        foreach (TournamentParticipant participant in this._participants)
        {
          if (list.Contains(participant))
          {
            participant.IsAssigned = false;
            winners.Add(participant);
          }
        }
      }
      else if (this.QualificationMode == TournamentGame.QualificationMode.TeamScore)
      {
        IOrderedEnumerable<TournamentTeam> source1 = ((IEnumerable<TournamentTeam>) this._teams).OrderByDescending<TournamentTeam, int>((Func<TournamentTeam, int>) (x => x.Score));
        List<TournamentTeam> list = source1.Take<TournamentTeam>(this._numberOfWinnerParticipants / this._teamSize).ToList<TournamentTeam>();
        foreach (TournamentTeam team in this._teams)
        {
          if (list.Contains(team))
          {
            foreach (TournamentParticipant participant in team.Participants)
            {
              participant.IsAssigned = false;
              winners.Add(participant);
            }
          }
        }
        foreach (TournamentTeam tournamentTeam in (IEnumerable<TournamentTeam>) source1)
        {
          int count = this._numberOfWinnerParticipants - winners.Count;
          if (tournamentTeam.Participants.Count<TournamentParticipant>() >= count)
          {
            IOrderedEnumerable<TournamentParticipant> source2 = tournamentTeam.Participants.OrderByDescending<TournamentParticipant, int>((Func<TournamentParticipant, int>) (x => x.Score));
            winners.AddRange(source2.Take<TournamentParticipant>(count));
            break;
          }
          winners.AddRange(tournamentTeam.Participants);
        }
      }
      return winners;
    }

    public enum MatchState
    {
      Ready,
      Started,
      Finished,
    }
  }
}
