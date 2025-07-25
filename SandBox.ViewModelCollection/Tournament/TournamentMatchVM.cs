// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Tournament.TournamentMatchVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Tournament
{
  public class TournamentMatchVM : ViewModel
  {
    private TournamentTeamVM _team1;
    private TournamentTeamVM _team2;
    private TournamentTeamVM _team3;
    private TournamentTeamVM _team4;
    private int _count = -1;
    private int _state = -1;
    private bool _isValid;

    public TournamentMatch Match { get; private set; }

    public List<TournamentTeamVM> Teams { get; }

    public TournamentMatchVM()
    {
      this.Team1 = new TournamentTeamVM();
      this.Team2 = new TournamentTeamVM();
      this.Team3 = new TournamentTeamVM();
      this.Team4 = new TournamentTeamVM();
      this.Teams = new List<TournamentTeamVM>()
      {
        this.Team1,
        this.Team2,
        this.Team3,
        this.Team4
      };
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Teams.ForEach((Action<TournamentTeamVM>) (x => x.RefreshValues()));
    }

    public void Initialize()
    {
      foreach (TournamentTeamVM team in this.Teams)
      {
        if (team.IsValid)
          team.Initialize();
      }
    }

    public void Initialize(TournamentMatch match)
    {
      int index = 0;
      this.Match = match;
      this.IsValid = this.Match != null;
      this.Count = match.Teams.Count<TournamentTeam>();
      foreach (TournamentTeam team in match.Teams)
      {
        this.Teams[index].Initialize(team);
        ++index;
      }
      this.State = 0;
    }

    public void Refresh(bool forceRefresh)
    {
      if (forceRefresh)
        this.OnPropertyChanged("Count");
      for (int index1 = 0; index1 < this.Count; ++index1)
      {
        TournamentTeamVM team = this.Teams[index1];
        if (forceRefresh)
          this.OnPropertyChanged("Team" + (object) index1 + (object) 1);
        team.Refresh();
        for (int index2 = 0; index2 < team.Count; ++index2)
        {
          TournamentParticipantVM participant = team.Participants[index2];
          participant.Score = participant.Participant.Score.ToString();
          participant.IsQualifiedForNextRound = this.Match.Winners.Contains<TournamentParticipant>(participant.Participant);
        }
      }
    }

    public void RefreshActiveMatch()
    {
      for (int index1 = 0; index1 < this.Count; ++index1)
      {
        TournamentTeamVM team = this.Teams[index1];
        for (int index2 = 0; index2 < team.Count; ++index2)
        {
          TournamentParticipantVM participant = team.Participants[index2];
          participant.Score = participant.Participant.Score.ToString();
        }
      }
    }

    public void Refresh(TournamentMatchVM target)
    {
      this.OnPropertyChanged("Count");
      int num = 0;
      foreach (TournamentTeamVM tournamentTeamVm in this.Teams.Where<TournamentTeamVM>((Func<TournamentTeamVM, bool>) (t => t.IsValid)))
      {
        this.OnPropertyChanged("Team" + (object) num + (object) 1);
        tournamentTeamVm.Refresh();
        ++num;
      }
    }

    public IEnumerable<TournamentParticipantVM> GetParticipants()
    {
      List<TournamentParticipantVM> participants = new List<TournamentParticipantVM>();
      if (this.Team1.IsValid)
        participants.AddRange(this.Team1.GetParticipants());
      if (this.Team2.IsValid)
        participants.AddRange(this.Team2.GetParticipants());
      if (this.Team3.IsValid)
        participants.AddRange(this.Team3.GetParticipants());
      if (this.Team4.IsValid)
        participants.AddRange(this.Team4.GetParticipants());
      return (IEnumerable<TournamentParticipantVM>) participants;
    }

    [DataSourceProperty]
    public bool IsValid
    {
      get => this._isValid;
      set
      {
        if (value == this._isValid)
          return;
        this._isValid = value;
        this.OnPropertyChangedWithValue(value, nameof (IsValid));
      }
    }

    [DataSourceProperty]
    public int State
    {
      get => this._state;
      set
      {
        if (value == this._state)
          return;
        this._state = value;
        this.OnPropertyChangedWithValue(value, nameof (State));
      }
    }

    [DataSourceProperty]
    public int Count
    {
      get => this._count;
      set
      {
        if (value == this._count)
          return;
        this._count = value;
        this.OnPropertyChangedWithValue(value, nameof (Count));
      }
    }

    [DataSourceProperty]
    public TournamentTeamVM Team1
    {
      get => this._team1;
      set
      {
        if (value == this._team1)
          return;
        this._team1 = value;
        this.OnPropertyChangedWithValue<TournamentTeamVM>(value, nameof (Team1));
      }
    }

    [DataSourceProperty]
    public TournamentTeamVM Team2
    {
      get => this._team2;
      set
      {
        if (value == this._team2)
          return;
        this._team2 = value;
        this.OnPropertyChangedWithValue<TournamentTeamVM>(value, nameof (Team2));
      }
    }

    [DataSourceProperty]
    public TournamentTeamVM Team3
    {
      get => this._team3;
      set
      {
        if (value == this._team3)
          return;
        this._team3 = value;
        this.OnPropertyChangedWithValue<TournamentTeamVM>(value, nameof (Team3));
      }
    }

    [DataSourceProperty]
    public TournamentTeamVM Team4
    {
      get => this._team4;
      set
      {
        if (value == this._team4)
          return;
        this._team4 = value;
        this.OnPropertyChangedWithValue<TournamentTeamVM>(value, nameof (Team4));
      }
    }

    public enum TournamentMatchState
    {
      Unfinished,
      Current,
      Over,
      Active,
    }
  }
}
