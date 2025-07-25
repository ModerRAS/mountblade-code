// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.BoardGame.BoardGameInstructionVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.ViewModelCollection.BoardGame
{
  public class BoardGameInstructionVM : ViewModel
  {
    private readonly CultureObject.BoardGameType _game;
    private readonly int _instructionIndex;
    private bool _isEnabled;
    private string _titleText;
    private string _descriptionText;
    private string _gameType;

    public BoardGameInstructionVM(CultureObject.BoardGameType game, int instructionIndex)
    {
      this._game = game;
      this._instructionIndex = instructionIndex;
      this.GameType = this._game.ToString();
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      GameTexts.SetVariable("newline", "\n");
      this.TitleText = GameTexts.FindText("str_board_game_title", this._game.ToString() + "_" + (object) this._instructionIndex).ToString();
      this.DescriptionText = GameTexts.FindText("str_board_game_instruction", this._game.ToString() + "_" + (object) this._instructionIndex).ToString();
    }

    [DataSourceProperty]
    public bool IsEnabled
    {
      get => this._isEnabled;
      set
      {
        if (value == this._isEnabled)
          return;
        this._isEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsEnabled));
      }
    }

    [DataSourceProperty]
    public string TitleText
    {
      get => this._titleText;
      set
      {
        if (!(value != this._titleText))
          return;
        this._titleText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TitleText));
      }
    }

    [DataSourceProperty]
    public string DescriptionText
    {
      get => this._descriptionText;
      set
      {
        if (!(value != this._descriptionText))
          return;
        this._descriptionText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (DescriptionText));
      }
    }

    [DataSourceProperty]
    public string GameType
    {
      get => this._gameType;
      set
      {
        if (!(value != this._gameType))
          return;
        this._gameType = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (GameType));
      }
    }
  }
}
