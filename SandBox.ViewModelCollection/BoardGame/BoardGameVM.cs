// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.BoardGame.BoardGameVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.BoardGames;
using SandBox.BoardGames.MissionLogics;
using SandBox.ViewModelCollection.Input;
using System;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.BoardGame
{
  public class BoardGameVM : ViewModel
  {
    private readonly MissionBoardGameLogic _missionBoardGameHandler;
    private BoardGameInstructionsVM _instructions;
    private string _turnOwnerText;
    private string _boardGameType;
    private bool _isGameUsingDice;
    private bool _isPlayersTurn;
    private bool _canRoll;
    private string _diceResult;
    private string _rollDiceText;
    private string _closeText;
    private string _forfeitText;
    private InputKeyItemVM _rollDiceKey;

    public BoardGameVM()
    {
      this._missionBoardGameHandler = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      this.BoardGameType = this._missionBoardGameHandler.CurrentBoardGame.ToString();
      this.IsGameUsingDice = this._missionBoardGameHandler.RequiresDiceRolling();
      this.DiceResult = "-";
      this.Instructions = new BoardGameInstructionsVM(this._missionBoardGameHandler.CurrentBoardGame);
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.RollDiceText = GameTexts.FindText("str_roll_dice").ToString();
      this.CloseText = GameTexts.FindText("str_close").ToString();
      this.ForfeitText = GameTexts.FindText("str_forfeit").ToString();
    }

    public void Activate() => this.SwitchTurns();

    public void DiceRoll(int roll) => this.DiceResult = roll.ToString();

    public void SwitchTurns()
    {
      this.IsPlayersTurn = this._missionBoardGameHandler.Board.PlayerTurn == PlayerTurn.PlayerOne || this._missionBoardGameHandler.Board.PlayerTurn == PlayerTurn.PlayerOneWaiting;
      this.TurnOwnerText = this.IsPlayersTurn ? GameTexts.FindText("str_your_turn").ToString() : GameTexts.FindText("str_opponents_turn").ToString();
      this.DiceResult = "-";
      this.CanRoll = this.IsPlayersTurn && this.IsGameUsingDice;
    }

    public void ExecuteRoll()
    {
      if (!this.CanRoll)
        return;
      this._missionBoardGameHandler.RollDice();
      this.CanRoll = false;
    }

    public void ExecuteForfeit()
    {
      if (!this._missionBoardGameHandler.Board.IsReady || !this._missionBoardGameHandler.IsGameInProgress)
        return;
      TextObject textObject = new TextObject("{=azJulvrp}{?IS_BETTING}You are going to lose {BET_AMOUNT}{GOLD_ICON} if you forfeit.{newline}{?}{\\?}Do you really want to forfeit?");
      textObject.SetTextVariable("IS_BETTING", this._missionBoardGameHandler.BetAmount > 0 ? 1 : 0);
      textObject.SetTextVariable("BET_AMOUNT", this._missionBoardGameHandler.BetAmount);
      textObject.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      textObject.SetTextVariable("newline", "{=!}\n");
      InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_forfeit").ToString(), textObject.ToString(), true, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=8OkPHu4f}No").ToString(), new Action(this._missionBoardGameHandler.ForfeitGame), (Action) null), true);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.RollDiceKey?.OnFinalize();
    }

    [DataSourceProperty]
    public BoardGameInstructionsVM Instructions
    {
      get => this._instructions;
      set
      {
        if (value == this._instructions)
          return;
        this._instructions = value;
        this.OnPropertyChangedWithValue<BoardGameInstructionsVM>(value, nameof (Instructions));
      }
    }

    [DataSourceProperty]
    public bool CanRoll
    {
      get => this._canRoll;
      set
      {
        if (value == this._canRoll)
          return;
        this._canRoll = value;
        this.OnPropertyChangedWithValue(value, nameof (CanRoll));
      }
    }

    [DataSourceProperty]
    public bool IsPlayersTurn
    {
      get => this._isPlayersTurn;
      set
      {
        if (value == this._isPlayersTurn)
          return;
        this._isPlayersTurn = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPlayersTurn));
      }
    }

    [DataSourceProperty]
    public bool IsGameUsingDice
    {
      get => this._isGameUsingDice;
      set
      {
        if (value == this._isGameUsingDice)
          return;
        this._isGameUsingDice = value;
        this.OnPropertyChangedWithValue(value, nameof (IsGameUsingDice));
      }
    }

    [DataSourceProperty]
    public string DiceResult
    {
      get => this._diceResult;
      set
      {
        if (!(value != this._diceResult))
          return;
        this._diceResult = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (DiceResult));
      }
    }

    [DataSourceProperty]
    public string RollDiceText
    {
      get => this._rollDiceText;
      set
      {
        if (!(value != this._rollDiceText))
          return;
        this._rollDiceText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (RollDiceText));
      }
    }

    [DataSourceProperty]
    public string TurnOwnerText
    {
      get => this._turnOwnerText;
      set
      {
        if (!(value != this._turnOwnerText))
          return;
        this._turnOwnerText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TurnOwnerText));
      }
    }

    [DataSourceProperty]
    public string BoardGameType
    {
      get => this._boardGameType;
      set
      {
        if (!(value != this._boardGameType))
          return;
        this._boardGameType = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BoardGameType));
      }
    }

    [DataSourceProperty]
    public string CloseText
    {
      get => this._closeText;
      set
      {
        if (!(value != this._closeText))
          return;
        this._closeText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CloseText));
      }
    }

    [DataSourceProperty]
    public string ForfeitText
    {
      get => this._forfeitText;
      set
      {
        if (!(value != this._forfeitText))
          return;
        this._forfeitText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ForfeitText));
      }
    }

    public void SetRollDiceKey(HotKey key)
    {
      this.RollDiceKey = InputKeyItemVM.CreateFromHotKey(key, false);
    }

    [DataSourceProperty]
    public InputKeyItemVM RollDiceKey
    {
      get => this._rollDiceKey;
      set
      {
        if (value == this._rollDiceKey)
          return;
        this._rollDiceKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (RollDiceKey));
      }
    }
  }
}
