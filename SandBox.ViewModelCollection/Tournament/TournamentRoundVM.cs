// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Tournament.TournamentRoundVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.Tournament
{
  public class TournamentRoundVM : ViewModel
  {
    private TournamentMatchVM _match1;
    private TournamentMatchVM _match2;
    private TournamentMatchVM _match3;
    private TournamentMatchVM _match4;
    private TournamentMatchVM _match5;
    private TournamentMatchVM _match6;
    private TournamentMatchVM _match7;
    private TournamentMatchVM _match8;
    private int _count = -1;
    private string _name;
    private bool _isValid;

    public TournamentRound Round { get; private set; }

    public List<TournamentMatchVM> Matches { get; }

    public TournamentRoundVM()
    {
      this.Match1 = new TournamentMatchVM();
      this.Match2 = new TournamentMatchVM();
      this.Match3 = new TournamentMatchVM();
      this.Match4 = new TournamentMatchVM();
      this.Match5 = new TournamentMatchVM();
      this.Match6 = new TournamentMatchVM();
      this.Match7 = new TournamentMatchVM();
      this.Match8 = new TournamentMatchVM();
      this.Matches = new List<TournamentMatchVM>()
      {
        this.Match1,
        this.Match2,
        this.Match3,
        this.Match4,
        this.Match5,
        this.Match6,
        this.Match7,
        this.Match8
      };
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.Matches.ForEach((Action<TournamentMatchVM>) (x => x.RefreshValues()));
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
    public string Name
    {
      get => this._name;
      set
      {
        if (!(value != this._name))
          return;
        this._name = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Name));
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
    public TournamentMatchVM Match1
    {
      get => this._match1;
      set
      {
        if (value == this._match1)
          return;
        this._match1 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match1));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match2
    {
      get => this._match2;
      set
      {
        if (value == this._match2)
          return;
        this._match2 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match2));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match3
    {
      get => this._match3;
      set
      {
        if (value == this._match3)
          return;
        this._match3 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match3));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match4
    {
      get => this._match4;
      set
      {
        if (value == this._match4)
          return;
        this._match4 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match4));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match5
    {
      get => this._match5;
      set
      {
        if (value == this._match5)
          return;
        this._match5 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match5));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match6
    {
      get => this._match6;
      set
      {
        if (value == this._match6)
          return;
        this._match6 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match6));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match7
    {
      get => this._match7;
      set
      {
        if (value == this._match7)
          return;
        this._match7 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match7));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM Match8
    {
      get => this._match8;
      set
      {
        if (value == this._match8)
          return;
        this._match8 = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (Match8));
      }
    }

    public void Initialize()
    {
      for (int index = 0; index < this.Count; ++index)
        this.Matches[index].Initialize();
    }

    public void Initialize(TournamentRound round, TextObject name)
    {
      this.IsValid = true;
      this.Round = round;
      this.Count = round.Matches.Length;
      for (int index = 0; index < round.Matches.Length; ++index)
        this.Matches[index].Initialize(round.Matches[index]);
      this.Name = name.ToString();
    }

    public IEnumerable<TournamentParticipantVM> GetParticipants()
    {
      foreach (TournamentMatchVM match in this.Matches)
      {
        if (match.IsValid)
        {
          foreach (TournamentParticipantVM participant in match.GetParticipants())
            yield return participant;
        }
      }
    }
  }
}
