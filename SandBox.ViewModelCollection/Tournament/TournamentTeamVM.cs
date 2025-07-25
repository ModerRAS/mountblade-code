// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Tournament.TournamentTeamVM
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
  public class TournamentTeamVM : ViewModel
  {
    private TournamentTeam _team;
    private int _count = -1;
    private TournamentParticipantVM _participant1;
    private TournamentParticipantVM _participant2;
    private TournamentParticipantVM _participant3;
    private TournamentParticipantVM _participant4;
    private TournamentParticipantVM _participant5;
    private TournamentParticipantVM _participant6;
    private TournamentParticipantVM _participant7;
    private TournamentParticipantVM _participant8;
    private int _score;
    private bool _isValid;

    public List<TournamentParticipantVM> Participants { get; }

    public TournamentTeamVM()
    {
      this.Participant1 = new TournamentParticipantVM();
      this.Participant2 = new TournamentParticipantVM();
      this.Participant3 = new TournamentParticipantVM();
      this.Participant4 = new TournamentParticipantVM();
      this.Participant5 = new TournamentParticipantVM();
      this.Participant6 = new TournamentParticipantVM();
      this.Participant7 = new TournamentParticipantVM();
      this.Participant8 = new TournamentParticipantVM();
      this.Participants = new List<TournamentParticipantVM>()
      {
        this.Participant1,
        this.Participant2,
        this.Participant3,
        this.Participant4,
        this.Participant5,
        this.Participant6,
        this.Participant7,
        this.Participant8
      };
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Participants.ForEach((Action<TournamentParticipantVM>) (x => x.RefreshValues()));
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
    public int Score
    {
      get => this._score;
      set
      {
        if (value == this._score)
          return;
        this._score = value;
        this.OnPropertyChangedWithValue(value, nameof (Score));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant1
    {
      get => this._participant1;
      set
      {
        if (value == this._participant1)
          return;
        this._participant1 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant1));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant2
    {
      get => this._participant2;
      set
      {
        if (value == this._participant2)
          return;
        this._participant2 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant2));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant3
    {
      get => this._participant3;
      set
      {
        if (value == this._participant3)
          return;
        this._participant3 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant3));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant4
    {
      get => this._participant4;
      set
      {
        if (value == this._participant4)
          return;
        this._participant4 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant4));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant5
    {
      get => this._participant5;
      set
      {
        if (value == this._participant5)
          return;
        this._participant5 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant5));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant6
    {
      get => this._participant6;
      set
      {
        if (value == this._participant6)
          return;
        this._participant6 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant6));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant7
    {
      get => this._participant7;
      set
      {
        if (value == this._participant7)
          return;
        this._participant7 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant7));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM Participant8
    {
      get => this._participant8;
      set
      {
        if (value == this._participant8)
          return;
        this._participant8 = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (Participant8));
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

    public void Initialize()
    {
      this.IsValid = this._team != null;
      for (int index = 0; index < this.Count; ++index)
      {
        TournamentParticipant participant = this._team.Participants.ElementAtOrDefault<TournamentParticipant>(index);
        this.Participants[index].Refresh(participant, Color.FromUint(this._team.TeamColor));
      }
    }

    public void Initialize(TournamentTeam team)
    {
      this._team = team;
      this.Count = team.TeamSize;
      this.IsValid = this._team != null;
      this.Initialize();
    }

    public void Refresh()
    {
      this.IsValid = this._team != null;
      this.OnPropertyChanged("Count");
      int num = 0;
      foreach (TournamentParticipantVM tournamentParticipantVm in this.Participants.Where<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.IsValid)))
      {
        this.OnPropertyChanged("Participant" + (object) num);
        tournamentParticipantVm.Refresh();
        ++num;
      }
    }

    public IEnumerable<TournamentParticipantVM> GetParticipants()
    {
      if (this.Participant1.IsValid)
        yield return this.Participant1;
      if (this.Participant2.IsValid)
        yield return this.Participant2;
      if (this.Participant3.IsValid)
        yield return this.Participant3;
      if (this.Participant4.IsValid)
        yield return this.Participant4;
      if (this.Participant5.IsValid)
        yield return this.Participant5;
      if (this.Participant6.IsValid)
        yield return this.Participant6;
      if (this.Participant7.IsValid)
        yield return this.Participant7;
      if (this.Participant8.IsValid)
        yield return this.Participant8;
    }
  }
}
