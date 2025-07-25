// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Tournament.TournamentParticipantVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.Tournament
{
  public class TournamentParticipantVM : ViewModel
  {
    private TournamentParticipant _latestParticipant;
    private bool _isInitialized;
    private bool _isValid;
    private string _name = "";
    private string _score = "-";
    private bool _isQualifiedForNextRound;
    private int _state = -1;
    private ImageIdentifierVM _visual;
    private Color _teamColor;
    private bool _isDead;
    private bool _isMainHero;
    private CharacterViewModel _character;

    public TournamentParticipant Participant { get; private set; }

    public TournamentParticipantVM()
    {
      this._visual = new ImageIdentifierVM(ImageIdentifierType.Null);
      this._character = new CharacterViewModel((CharacterViewModel.StanceTypes) 3);
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      if (!this.IsInitialized)
        return;
      this.Refresh(this.Participant, this.TeamColor);
    }

    public void Refresh(TournamentParticipant participant, Color teamColor)
    {
      this.Participant = participant;
      this.TeamColor = teamColor;
      this.State = participant == null ? 0 : (participant.Character == CharacterObject.PlayerCharacter ? 2 : 1);
      this.IsInitialized = true;
      this._latestParticipant = participant;
      if (participant == null)
        return;
      this.Name = participant.Character.Name.ToString();
      CharacterCode characterCode = SandBoxUIHelper.GetCharacterCode(participant.Character);
      this.Character = new CharacterViewModel((CharacterViewModel.StanceTypes) 3);
      this.Character.FillFrom((BasicCharacterObject) participant.Character, -1);
      this.Visual = new ImageIdentifierVM(characterCode);
      this.IsValid = true;
      this.IsMainHero = participant.Character.IsPlayerCharacter;
    }

    public void ExecuteOpenEncyclopedia()
    {
      if (this.Participant?.Character == null)
        return;
      Campaign.Current.EncyclopediaManager.GoToLink(this.Participant.Character.EncyclopediaLink);
    }

    public void Refresh()
    {
      this.OnPropertyChanged("Name");
      this.OnPropertyChanged("Visual");
      this.OnPropertyChanged("Score");
      this.OnPropertyChanged("State");
      this.OnPropertyChanged("TeamColor");
      this.OnPropertyChanged("IsDead");
      TournamentParticipant latestParticipant = this._latestParticipant;
      this.IsMainHero = latestParticipant != null && latestParticipant.Character.IsPlayerCharacter;
    }

    [DataSourceProperty]
    public bool IsInitialized
    {
      get => this._isInitialized;
      set
      {
        if (value == this._isInitialized)
          return;
        this._isInitialized = value;
        this.OnPropertyChangedWithValue(value, nameof (IsInitialized));
      }
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
    public bool IsDead
    {
      get => this._isDead;
      set
      {
        if (value == this._isDead)
          return;
        this._isDead = value;
        this.OnPropertyChangedWithValue(value, nameof (IsDead));
      }
    }

    [DataSourceProperty]
    public bool IsMainHero
    {
      get => this._isMainHero;
      set
      {
        if (value == this._isMainHero)
          return;
        this._isMainHero = value;
        this.OnPropertyChangedWithValue(value, nameof (IsMainHero));
      }
    }

    [DataSourceProperty]
    public Color TeamColor
    {
      get => this._teamColor;
      set
      {
        if (!(value != this._teamColor))
          return;
        this._teamColor = value;
        this.OnPropertyChangedWithValue(value, nameof (TeamColor));
      }
    }

    [DataSourceProperty]
    public ImageIdentifierVM Visual
    {
      get => this._visual;
      set
      {
        if (value == this._visual)
          return;
        this._visual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (Visual));
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
    public bool IsQualifiedForNextRound
    {
      get => this._isQualifiedForNextRound;
      set
      {
        if (value == this._isQualifiedForNextRound)
          return;
        this._isQualifiedForNextRound = value;
        this.OnPropertyChangedWithValue(value, nameof (IsQualifiedForNextRound));
      }
    }

    [DataSourceProperty]
    public string Score
    {
      get => this._score;
      set
      {
        if (!(value != this._score))
          return;
        this._score = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (Score));
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
    public CharacterViewModel Character
    {
      get => this._character;
      set
      {
        if (value == this._character)
          return;
        this._character = value;
        this.OnPropertyChangedWithValue<CharacterViewModel>(value, nameof (Character));
      }
    }

    public enum TournamentPlayerState
    {
      EmptyPlayer,
      GenericPlayer,
      MainPlayer,
    }
  }
}
