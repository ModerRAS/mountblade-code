// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.GameOverVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.ViewModelCollection.Input;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class GameOverVM : ViewModel
  {
    private readonly Action _onClose;
    private readonly GameOverStatsProvider _statsProvider;
    private readonly GameOverState.GameOverReason _reason;
    private GameOverStatCategoryVM _currentCategory;
    private string _closeText;
    private string _titleText;
    private string _reasonAsString;
    private string _statisticsTitle;
    private bool _isPositiveGameOver;
    private InputKeyItemVM _closeInputKey;
    private ImageIdentifierVM _clanBanner;
    private MBBindingList<GameOverStatCategoryVM> _categories;

    public GameOverVM(GameOverState.GameOverReason reason, Action onClose)
    {
      this._onClose = onClose;
      this._reason = reason;
      this._statsProvider = new GameOverStatsProvider();
      this.Categories = new MBBindingList<GameOverStatCategoryVM>();
      this.IsPositiveGameOver = this._reason == GameOverState.GameOverReason.Victory;
      this.ClanBanner = new ImageIdentifierVM(BannerCode.CreateFrom(Hero.MainHero.ClanBanner), true);
      this.ReasonAsString = Enum.GetName(typeof (GameOverState.GameOverReason), (object) this._reason);
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.CloseText = this.IsPositiveGameOver ? new TextObject("{=DM6luo3c}Continue").ToString() : GameTexts.FindText("str_main_menu").ToString();
      this.TitleText = GameTexts.FindText("str_game_over_title", this.ReasonAsString).ToString();
      this.StatisticsTitle = GameTexts.FindText("str_statistics").ToString();
      this.Categories.Clear();
      foreach (StatCategory gameOverStat in this._statsProvider.GetGameOverStats())
        this.Categories.Add(new GameOverStatCategoryVM(gameOverStat, new Action<GameOverStatCategoryVM>(this.OnCategorySelection)));
      this.OnCategorySelection(this.Categories[0]);
    }

    private void OnCategorySelection(GameOverStatCategoryVM newCategory)
    {
      if (this._currentCategory != null)
        this._currentCategory.IsSelected = false;
      this._currentCategory = newCategory;
      if (this._currentCategory == null)
        return;
      this._currentCategory.IsSelected = true;
    }

    public void ExecuteClose()
    {
      Action onClose = this._onClose;
      if (onClose == null)
        return;
      onClose.DynamicInvokeWithLog();
    }

    public void SetCloseInputKey(HotKey hotKey)
    {
      this.CloseInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
    }

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.CloseInputKey?.OnFinalize();
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
    public string StatisticsTitle
    {
      get => this._statisticsTitle;
      set
      {
        if (!(value != this._statisticsTitle))
          return;
        this._statisticsTitle = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (StatisticsTitle));
      }
    }

    [DataSourceProperty]
    public string ReasonAsString
    {
      get => this._reasonAsString;
      set
      {
        if (!(value != this._reasonAsString))
          return;
        this._reasonAsString = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (ReasonAsString));
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
    public ImageIdentifierVM ClanBanner
    {
      get => this._clanBanner;
      set
      {
        if (value == this._clanBanner)
          return;
        this._clanBanner = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (ClanBanner));
      }
    }

    [DataSourceProperty]
    public bool IsPositiveGameOver
    {
      get => this._isPositiveGameOver;
      set
      {
        if (value == this._isPositiveGameOver)
          return;
        this._isPositiveGameOver = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPositiveGameOver));
      }
    }

    [DataSourceProperty]
    public InputKeyItemVM CloseInputKey
    {
      get => this._closeInputKey;
      set
      {
        if (value == this._closeInputKey)
          return;
        this._closeInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (CloseInputKey));
      }
    }

    [DataSourceProperty]
    public MBBindingList<GameOverStatCategoryVM> Categories
    {
      get => this._categories;
      set
      {
        if (value == this._categories)
          return;
        this._categories = value;
        this.OnPropertyChangedWithValue<MBBindingList<GameOverStatCategoryVM>>(value, nameof (Categories));
      }
    }
  }
}
