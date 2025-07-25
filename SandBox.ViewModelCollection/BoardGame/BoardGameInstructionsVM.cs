// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.BoardGame.BoardGameInstructionsVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.BoardGame
{
  public class BoardGameInstructionsVM : ViewModel
  {
    private readonly CultureObject.BoardGameType _boardGameType;
    private int _currentInstructionIndex;
    private bool _isPreviousButtonEnabled;
    private bool _isNextButtonEnabled;
    private string _instructionsText;
    private string _previousText;
    private string _nextText;
    private string _currentPageText;
    private MBBindingList<BoardGameInstructionVM> _instructionList;

    public BoardGameInstructionsVM(CultureObject.BoardGameType boardGameType)
    {
      this._boardGameType = boardGameType;
      this.InstructionList = new MBBindingList<BoardGameInstructionVM>();
      for (int instructionIndex = 0; instructionIndex < this.GetNumberOfInstructions(this._boardGameType); ++instructionIndex)
        this.InstructionList.Add(new BoardGameInstructionVM(this._boardGameType, instructionIndex));
      this._currentInstructionIndex = 0;
      if (this.InstructionList.Count > 0)
        this.InstructionList[0].IsEnabled = true;
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.InstructionsText = GameTexts.FindText("str_how_to_play").ToString();
      this.PreviousText = GameTexts.FindText("str_previous").ToString();
      this.NextText = GameTexts.FindText("str_next").ToString();
      this.InstructionList.ApplyActionOnAllItems((Action<BoardGameInstructionVM>) (x => x.RefreshValues()));
      if (this._currentInstructionIndex < 0 || this._currentInstructionIndex >= this.InstructionList.Count)
        return;
      TextObject textObject = new TextObject("{=hUSmlhNh}{CURRENT_PAGE}/{TOTAL_PAGES}");
      textObject.SetTextVariable("CURRENT_PAGE", (this._currentInstructionIndex + 1).ToString());
      textObject.SetTextVariable("TOTAL_PAGES", this.InstructionList.Count.ToString());
      this.CurrentPageText = textObject.ToString();
      this.IsPreviousButtonEnabled = this._currentInstructionIndex != 0;
      this.IsNextButtonEnabled = this._currentInstructionIndex < this.InstructionList.Count - 1;
    }

    public void ExecuteShowPrevious()
    {
      if (this._currentInstructionIndex <= 0 || this._currentInstructionIndex >= this.InstructionList.Count)
        return;
      this.InstructionList[this._currentInstructionIndex].IsEnabled = false;
      --this._currentInstructionIndex;
      this.InstructionList[this._currentInstructionIndex].IsEnabled = true;
      this.RefreshValues();
    }

    public void ExecuteShowNext()
    {
      if (this._currentInstructionIndex < 0 || this._currentInstructionIndex >= this.InstructionList.Count - 1)
        return;
      this.InstructionList[this._currentInstructionIndex].IsEnabled = false;
      ++this._currentInstructionIndex;
      this.InstructionList[this._currentInstructionIndex].IsEnabled = true;
      this.RefreshValues();
    }

    private int GetNumberOfInstructions(CultureObject.BoardGameType game)
    {
      switch (game)
      {
        case CultureObject.BoardGameType.Seega:
          return 4;
        case CultureObject.BoardGameType.Puluc:
          return 5;
        case CultureObject.BoardGameType.Konane:
          return 3;
        case CultureObject.BoardGameType.MuTorere:
          return 2;
        case CultureObject.BoardGameType.Tablut:
          return 4;
        case CultureObject.BoardGameType.BaghChal:
          return 4;
        default:
          return 0;
      }
    }

    [DataSourceProperty]
    public bool IsPreviousButtonEnabled
    {
      get => this._isPreviousButtonEnabled;
      set
      {
        if (value == this._isPreviousButtonEnabled)
          return;
        this._isPreviousButtonEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPreviousButtonEnabled));
      }
    }

    [DataSourceProperty]
    public bool IsNextButtonEnabled
    {
      get => this._isNextButtonEnabled;
      set
      {
        if (value == this._isNextButtonEnabled)
          return;
        this._isNextButtonEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsNextButtonEnabled));
      }
    }

    [DataSourceProperty]
    public string InstructionsText
    {
      get => this._instructionsText;
      set
      {
        if (!(value != this._instructionsText))
          return;
        this._instructionsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (InstructionsText));
      }
    }

    [DataSourceProperty]
    public string PreviousText
    {
      get => this._previousText;
      set
      {
        if (!(value != this._previousText))
          return;
        this._previousText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (PreviousText));
      }
    }

    [DataSourceProperty]
    public string NextText
    {
      get => this._nextText;
      set
      {
        if (!(value != this._nextText))
          return;
        this._nextText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (NextText));
      }
    }

    [DataSourceProperty]
    public string CurrentPageText
    {
      get => this._currentPageText;
      set
      {
        if (!(value != this._currentPageText))
          return;
        this._currentPageText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CurrentPageText));
      }
    }

    [DataSourceProperty]
    public MBBindingList<BoardGameInstructionVM> InstructionList
    {
      get => this._instructionList;
      set
      {
        if (value == this._instructionList)
          return;
        this._instructionList = value;
        this.OnPropertyChangedWithValue<MBBindingList<BoardGameInstructionVM>>(value, nameof (InstructionList));
      }
    }
  }
}
