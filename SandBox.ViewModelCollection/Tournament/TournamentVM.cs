// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Tournament.TournamentVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.Tournaments.MissionLogics;
using SandBox.ViewModelCollection.Input;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Tournament
{
  public class TournamentVM : ViewModel
  {
    private readonly List<TournamentRoundVM> _rounds;
    private int _thisRoundBettedAmount;
    private bool _isPlayerParticipating;
    private InputKeyItemVM _doneInputKey;
    private InputKeyItemVM _cancelInputKey;
    private TournamentRoundVM _round1;
    private TournamentRoundVM _round2;
    private TournamentRoundVM _round3;
    private TournamentRoundVM _round4;
    private int _activeRoundIndex = -1;
    private string _joinTournamentText;
    private string _skipRoundText;
    private string _watchRoundText;
    private string _leaveText;
    private bool _canPlayerJoin;
    private TournamentMatchVM _currentMatch;
    private bool _isCurrentMatchActive;
    private string _betTitleText;
    private string _betDescriptionText;
    private string _betOddsText;
    private string _bettedDenarsText;
    private string _overallExpectedDenarsText;
    private string _currentExpectedDenarsText;
    private string _totalDenarsText;
    private string _acceptText;
    private string _cancelText;
    private string _prizeItemName;
    private string _tournamentPrizeText;
    private string _currentWagerText;
    private int _wageredDenars = -1;
    private int _expectedBetDenars = -1;
    private string _betText;
    private int _maximumBetValue;
    private string _tournamentWinnerTitle;
    private TournamentParticipantVM _tournamentWinner;
    private string _tournamentTitle;
    private bool _isOver;
    private bool _hasPrizeItem;
    private bool _isWinnerHero;
    private bool _isBetWindowEnabled;
    private string _winnerIntro;
    private ImageIdentifierVM _prizeVisual;
    private ImageIdentifierVM _winnerBanner;
    private MBBindingList<TournamentRewardVM> _battleRewards;
    private HintViewModel _skipAllRoundsHint;

    public Action DisableUI { get; }

    public TournamentBehavior Tournament { get; }

    public TournamentVM(Action disableUI, TournamentBehavior tournamentBehavior)
    {
      this.DisableUI = disableUI;
      this.CurrentMatch = new TournamentMatchVM();
      this.Round1 = new TournamentRoundVM();
      this.Round2 = new TournamentRoundVM();
      this.Round3 = new TournamentRoundVM();
      this.Round4 = new TournamentRoundVM();
      this._rounds = new List<TournamentRoundVM>()
      {
        this.Round1,
        this.Round2,
        this.Round3,
        this.Round4
      };
      this._tournamentWinner = new TournamentParticipantVM();
      this.Tournament = tournamentBehavior;
      this.WinnerIntro = GameTexts.FindText("str_tournament_winner_intro").ToString();
      this.BattleRewards = new MBBindingList<TournamentRewardVM>();
      for (int index = 0; index < this._rounds.Count; ++index)
        this._rounds[index].Initialize(this.Tournament.Rounds[index], GameTexts.FindText("str_tournament_round", index.ToString()));
      this.Refresh();
      this.Tournament.TournamentEnd += new Action(this.OnTournamentEnd);
      this.PrizeVisual = this.HasPrizeItem ? new ImageIdentifierVM(this.Tournament.TournamentGame.Prize, "") : new ImageIdentifierVM(ImageIdentifierType.Null);
      this.SkipAllRoundsHint = new HintViewModel();
      this.RefreshValues();
    }

    public override void RefreshValues()
    {
      base.RefreshValues();
      this.LeaveText = GameTexts.FindText("str_tournament_leave").ToString();
      this.SkipRoundText = GameTexts.FindText("str_tournament_skip_round").ToString();
      this.WatchRoundText = GameTexts.FindText("str_tournament_watch_round").ToString();
      this.JoinTournamentText = GameTexts.FindText("str_tournament_join_tournament").ToString();
      this.BetText = GameTexts.FindText("str_bet").ToString();
      this.AcceptText = GameTexts.FindText("str_accept").ToString();
      this.CancelText = GameTexts.FindText("str_cancel").ToString();
      this.TournamentWinnerTitle = GameTexts.FindText("str_tournament_winner_title").ToString();
      this.BetTitleText = GameTexts.FindText("str_wager").ToString();
      GameTexts.SetVariable("MAX_AMOUNT", this.Tournament.GetMaximumBet());
      GameTexts.SetVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      this.BetDescriptionText = GameTexts.FindText("str_tournament_bet_description").ToString();
      this.TournamentPrizeText = GameTexts.FindText("str_tournament_prize").ToString();
      this.PrizeItemName = this.Tournament.TournamentGame.Prize.Name.ToString();
      MBTextManager.SetTextVariable("SETTLEMENT_NAME", this.Tournament.Settlement.Name, false);
      this.TournamentTitle = GameTexts.FindText("str_tournament").ToString();
      this.CurrentWagerText = GameTexts.FindText("str_tournament_current_wager").ToString();
      this.SkipAllRoundsHint.HintText = new TextObject("{=GaOE4bdd}Skip All Rounds");
      this._round1?.RefreshValues();
      this._round2?.RefreshValues();
      this._round3?.RefreshValues();
      this._round4?.RefreshValues();
      this._currentMatch?.RefreshValues();
      this._tournamentWinner?.RefreshValues();
    }

    public void ExecuteBet()
    {
      this._thisRoundBettedAmount += this.WageredDenars;
      this.Tournament.PlaceABet(this.WageredDenars);
      this.RefreshBetProperties();
    }

    public void ExecuteJoinTournament()
    {
      if (!this.PlayerCanJoinMatch())
        return;
      this.Tournament.StartMatch();
      this.IsCurrentMatchActive = true;
      this.CurrentMatch.Refresh(true);
      this.CurrentMatch.State = 3;
      this.DisableUI();
      this.IsCurrentMatchActive = true;
    }

    public void ExecuteSkipRound()
    {
      if (this.IsTournamentIncomplete)
        this.Tournament.SkipMatch();
      this.Refresh();
    }

    public void ExecuteSkipAllRounds()
    {
      int num = 0;
      for (int index = ((IEnumerable<TournamentRound>) this.Tournament.Rounds).Sum<TournamentRound>((Func<TournamentRound, int>) (r => r.Matches.Length)); !this.CanPlayerJoin && this.Tournament.CurrentRound?.CurrentMatch != null && num < index; ++num)
        this.ExecuteSkipRound();
    }

    public void ExecuteWatchRound()
    {
      if (this.PlayerCanJoinMatch())
        return;
      this.Tournament.StartMatch();
      this.IsCurrentMatchActive = true;
      this.CurrentMatch.Refresh(true);
      this.CurrentMatch.State = 3;
      this.DisableUI();
      this.IsCurrentMatchActive = true;
    }

    public void ExecuteLeave()
    {
      if (this.CurrentMatch != null)
      {
        List<TournamentMatch> source = new List<TournamentMatch>();
        for (int currentRoundIndex = this.Tournament.CurrentRoundIndex; currentRoundIndex < this.Tournament.Rounds.Length; ++currentRoundIndex)
          source.AddRange(((IEnumerable<TournamentMatch>) this.Tournament.Rounds[currentRoundIndex].Matches).Where<TournamentMatch>((Func<TournamentMatch, bool>) (x => x.State != TournamentMatch.MatchState.Finished)));
        if (source.Any<TournamentMatch>((Func<TournamentMatch, bool>) (x => x.Participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (y => y.Character == CharacterObject.PlayerCharacter)))))
        {
          InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_forfeit").ToString(), GameTexts.FindText("str_tournament_forfeit_game").ToString(), true, true, GameTexts.FindText("str_yes").ToString(), GameTexts.FindText("str_no").ToString(), new Action(this.EndTournamentMission), (Action) null), true);
          return;
        }
      }
      this.EndTournamentMission();
    }

    private void EndTournamentMission()
    {
      this.Tournament.EndTournamentViaLeave();
      Mission.Current.EndMission();
    }

    private void RefreshBetProperties()
    {
      TextObject textObject1 = new TextObject("{=L9GnQvsq}Stake: {BETTED_DENARS}");
      textObject1.SetTextVariable("BETTED_DENARS", this.Tournament.BettedDenars);
      this.BettedDenarsText = textObject1.ToString();
      TextObject textObject2 = new TextObject("{=xzzSaN4b}Expected: {OVERALL_EXPECTED_DENARS}");
      textObject2.SetTextVariable("OVERALL_EXPECTED_DENARS", this.Tournament.OverallExpectedDenars);
      this.OverallExpectedDenarsText = textObject2.ToString();
      TextObject textObject3 = new TextObject("{=yF5fpwNE}Total: {TOTAL}");
      textObject3.SetTextVariable("TOTAL", this.Tournament.PlayerDenars);
      this.TotalDenarsText = textObject3.ToString();
      this.OnPropertyChanged("IsBetButtonEnabled");
      this.MaximumBetValue = MathF.Min(this.Tournament.GetMaximumBet() - this._thisRoundBettedAmount, Hero.MainHero.Gold);
      GameTexts.SetVariable("NORMALIZED_EXPECTED_GOLD", (int) ((double) this.Tournament.BetOdd * 100.0));
      GameTexts.SetVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      this.BetOddsText = GameTexts.FindText("str_tournament_bet_odd").ToString();
    }

    private void OnNewRoundStarted(int prevRoundIndex, int currentRoundIndex)
    {
      this._isPlayerParticipating = this.Tournament.IsPlayerParticipating;
      this._thisRoundBettedAmount = 0;
    }

    public void Refresh()
    {
      this.IsCurrentMatchActive = false;
      this.CurrentMatch = this._rounds[this.Tournament.CurrentRoundIndex].Matches.Find((Predicate<TournamentMatchVM>) (m => m.IsValid && m.Match == this.Tournament.CurrentMatch));
      this.ActiveRoundIndex = this.Tournament.CurrentRoundIndex;
      this.CanPlayerJoin = this.PlayerCanJoinMatch();
      this.OnPropertyChanged("IsTournamentIncomplete");
      this.OnPropertyChanged("InitializationOver");
      this.OnPropertyChanged("IsBetButtonEnabled");
      this.HasPrizeItem = this.Tournament.TournamentGame.Prize != null && !this.IsOver;
    }

    private void OnTournamentEnd()
    {
      TournamentParticipantVM[] array = this.Round4.Matches.Last<TournamentMatchVM>((Func<TournamentMatchVM, bool>) (m => m.IsValid)).GetParticipants().ToArray<TournamentParticipantVM>();
      TournamentParticipantVM tournamentParticipantVm1 = array[0];
      TournamentParticipantVM tournamentParticipantVm2 = array[1];
      this.TournamentWinner = this.Round4.Matches.Last<TournamentMatchVM>((Func<TournamentMatchVM, bool>) (m => m.IsValid)).GetParticipants().First<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.Participant == this.Tournament.Winner));
      this.TournamentWinner.Refresh();
      if (this.TournamentWinner.Participant.Character.IsHero)
      {
        Hero heroObject = this.TournamentWinner.Participant.Character.HeroObject;
        this.TournamentWinner.Character.ArmorColor1 = heroObject.MapFaction.Color;
        this.TournamentWinner.Character.ArmorColor2 = heroObject.MapFaction.Color2;
      }
      else
      {
        CultureObject culture = this.TournamentWinner.Participant.Character.Culture;
        this.TournamentWinner.Character.ArmorColor1 = culture.Color;
        this.TournamentWinner.Character.ArmorColor2 = culture.Color2;
      }
      this.IsWinnerHero = this.Tournament.Winner.Character.IsHero;
      if (this.IsWinnerHero)
        this.WinnerBanner = new ImageIdentifierVM(BannerCode.CreateFrom(this.Tournament.Winner.Character.HeroObject.ClanBanner), true);
      if (this.TournamentWinner.Participant.Character.IsPlayerCharacter)
      {
        GameTexts.SetVariable("TOURNAMENT_FINAL_OPPONENT", (tournamentParticipantVm1 == this.TournamentWinner ? tournamentParticipantVm2 : tournamentParticipantVm1).Name);
        this.WinnerIntro = GameTexts.FindText("str_tournament_result_won").ToString();
        if ((double) this.Tournament.TournamentGame.TournamentWinRenown > 0.0)
        {
          GameTexts.SetVariable("RENOWN", this.Tournament.TournamentGame.TournamentWinRenown.ToString("F1"));
          this.BattleRewards.Add(new TournamentRewardVM(GameTexts.FindText("str_tournament_renown").ToString()));
        }
        if ((double) this.Tournament.TournamentGame.TournamentWinInfluence > 0.0)
        {
          float tournamentWinInfluence = this.Tournament.TournamentGame.TournamentWinInfluence;
          TextObject text = GameTexts.FindText("str_tournament_influence");
          text.SetTextVariable("INFLUENCE", tournamentWinInfluence.ToString("F1"));
          text.SetTextVariable("INFLUENCE_ICON", "{=!}<img src=\"General\\Icons\\Influence@2x\" extend=\"7\">");
          this.BattleRewards.Add(new TournamentRewardVM(text.ToString()));
        }
        if (this.Tournament.TournamentGame.Prize != null)
        {
          GameTexts.SetVariable("REWARD", this.Tournament.TournamentGame.Prize.Name.ToString());
          this.BattleRewards.Add(new TournamentRewardVM(GameTexts.FindText("str_tournament_reward").ToString(), new ImageIdentifierVM(this.Tournament.TournamentGame.Prize, "")));
        }
        if (this.Tournament.OverallExpectedDenars > 0)
        {
          int overallExpectedDenars = this.Tournament.OverallExpectedDenars;
          TextObject text = GameTexts.FindText("str_tournament_bet");
          text.SetTextVariable("BET", overallExpectedDenars);
          text.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          this.BattleRewards.Add(new TournamentRewardVM(text.ToString()));
        }
      }
      else if (tournamentParticipantVm1.Participant.Character.IsPlayerCharacter || tournamentParticipantVm2.Participant.Character.IsPlayerCharacter)
      {
        GameTexts.SetVariable("TOURNAMENT_FINAL_OPPONENT", (tournamentParticipantVm1 == this.TournamentWinner ? tournamentParticipantVm1 : tournamentParticipantVm2).Name);
        this.WinnerIntro = GameTexts.FindText("str_tournament_result_eliminated_at_final").ToString();
      }
      else
      {
        int num1 = 3;
        int num2 = this.Round3.GetParticipants().Any<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.Participant.Character.IsPlayerCharacter)) ? 1 : 0;
        bool flag1 = this.Round2.GetParticipants().Any<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.Participant.Character.IsPlayerCharacter));
        bool flag2 = this.Round1.GetParticipants().Any<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.Participant.Character.IsPlayerCharacter));
        if (num2 != 0)
          num1 = 3;
        else if (flag1)
          num1 = 2;
        else if (flag2)
          num1 = 1;
        bool flag3 = tournamentParticipantVm1 == this.TournamentWinner;
        GameTexts.SetVariable("TOURNAMENT_FINAL_PARTICIPANT_A", flag3 ? tournamentParticipantVm1.Name : tournamentParticipantVm2.Name);
        GameTexts.SetVariable("TOURNAMENT_FINAL_PARTICIPANT_B", flag3 ? tournamentParticipantVm2.Name : tournamentParticipantVm1.Name);
        if (this._isPlayerParticipating)
        {
          GameTexts.SetVariable("TOURNAMENT_ELIMINATED_ROUND", num1.ToString());
          this.WinnerIntro = GameTexts.FindText("str_tournament_result_eliminated").ToString();
        }
        else
          this.WinnerIntro = GameTexts.FindText("str_tournament_result_spectator").ToString();
      }
      this.IsOver = true;
    }

    private bool PlayerCanJoinMatch()
    {
      return this.IsTournamentIncomplete && this.Tournament.CurrentMatch.Participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character == CharacterObject.PlayerCharacter));
    }

    public void OnAgentRemoved(Agent agent)
    {
      if (!this.IsCurrentMatchActive || !agent.IsHuman)
        return;
      TournamentParticipant participant = this.CurrentMatch.Match.GetParticipant(agent.Origin.UniqueSeed);
      if (participant == null)
        return;
      this.CurrentMatch.GetParticipants().First<TournamentParticipantVM>((Func<TournamentParticipantVM, bool>) (p => p.Participant == participant)).IsDead = true;
    }

    public void ExecuteShowPrizeItemTooltip()
    {
      if (!this.HasPrizeItem)
        return;
      InformationManager.ShowTooltip(typeof (ItemObject), (object) new EquipmentElement(this.Tournament.TournamentGame.Prize));
    }

    public void ExecuteHidePrizeItemTooltip() => MBInformationManager.HideInformations();

    public override void OnFinalize()
    {
      base.OnFinalize();
      this.DoneInputKey?.OnFinalize();
      this.CancelInputKey?.OnFinalize();
    }

    public void SetDoneInputKey(HotKey hotKey)
    {
      this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
    }

    public void SetCancelInputKey(HotKey hotKey)
    {
      this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
    }

    [DataSourceProperty]
    public InputKeyItemVM DoneInputKey
    {
      get => this._doneInputKey;
      set
      {
        if (value == this._doneInputKey)
          return;
        this._doneInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (DoneInputKey));
      }
    }

    [DataSourceProperty]
    public InputKeyItemVM CancelInputKey
    {
      get => this._cancelInputKey;
      set
      {
        if (value == this._cancelInputKey)
          return;
        this._cancelInputKey = value;
        this.OnPropertyChangedWithValue<InputKeyItemVM>(value, nameof (CancelInputKey));
      }
    }

    [DataSourceProperty]
    public string TournamentWinnerTitle
    {
      get => this._tournamentWinnerTitle;
      set
      {
        if (!(value != this._tournamentWinnerTitle))
          return;
        this._tournamentWinnerTitle = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TournamentWinnerTitle));
      }
    }

    [DataSourceProperty]
    public TournamentParticipantVM TournamentWinner
    {
      get => this._tournamentWinner;
      set
      {
        if (value == this._tournamentWinner)
          return;
        this._tournamentWinner = value;
        this.OnPropertyChangedWithValue<TournamentParticipantVM>(value, nameof (TournamentWinner));
      }
    }

    [DataSourceProperty]
    public int MaximumBetValue
    {
      get => this._maximumBetValue;
      set
      {
        if (value == this._maximumBetValue)
          return;
        this._maximumBetValue = value;
        this.OnPropertyChangedWithValue(value, nameof (MaximumBetValue));
        this._wageredDenars = -1;
        this.WageredDenars = 0;
      }
    }

    [DataSourceProperty]
    public bool IsBetButtonEnabled
    {
      get
      {
        return this.PlayerCanJoinMatch() && this.Tournament.GetMaximumBet() > this._thisRoundBettedAmount && Hero.MainHero.Gold > 0;
      }
    }

    [DataSourceProperty]
    public string BetText
    {
      get => this._betText;
      set
      {
        if (!(value != this._betText))
          return;
        this._betText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BetText));
      }
    }

    [DataSourceProperty]
    public string BetTitleText
    {
      get => this._betTitleText;
      set
      {
        if (!(value != this._betTitleText))
          return;
        this._betTitleText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BetTitleText));
      }
    }

    [DataSourceProperty]
    public string CurrentWagerText
    {
      get => this._currentWagerText;
      set
      {
        if (!(value != this._currentWagerText))
          return;
        this._currentWagerText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CurrentWagerText));
      }
    }

    [DataSourceProperty]
    public string BetDescriptionText
    {
      get => this._betDescriptionText;
      set
      {
        if (!(value != this._betDescriptionText))
          return;
        this._betDescriptionText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BetDescriptionText));
      }
    }

    [DataSourceProperty]
    public ImageIdentifierVM PrizeVisual
    {
      get => this._prizeVisual;
      set
      {
        if (value == this._prizeVisual)
          return;
        this._prizeVisual = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (PrizeVisual));
      }
    }

    [DataSourceProperty]
    public string PrizeItemName
    {
      get => this._prizeItemName;
      set
      {
        if (!(value != this._prizeItemName))
          return;
        this._prizeItemName = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (PrizeItemName));
      }
    }

    [DataSourceProperty]
    public string TournamentPrizeText
    {
      get => this._tournamentPrizeText;
      set
      {
        if (!(value != this._tournamentPrizeText))
          return;
        this._tournamentPrizeText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TournamentPrizeText));
      }
    }

    [DataSourceProperty]
    public int WageredDenars
    {
      get => this._wageredDenars;
      set
      {
        if (value == this._wageredDenars)
          return;
        this._wageredDenars = value;
        this.OnPropertyChangedWithValue(value, nameof (WageredDenars));
        this.ExpectedBetDenars = this._wageredDenars == 0 ? 0 : this.Tournament.GetExpectedDenarsForBet(this._wageredDenars);
      }
    }

    [DataSourceProperty]
    public int ExpectedBetDenars
    {
      get => this._expectedBetDenars;
      set
      {
        if (value == this._expectedBetDenars)
          return;
        this._expectedBetDenars = value;
        this.OnPropertyChangedWithValue(value, nameof (ExpectedBetDenars));
      }
    }

    [DataSourceProperty]
    public string BetOddsText
    {
      get => this._betOddsText;
      set
      {
        if (!(value != this._betOddsText))
          return;
        this._betOddsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BetOddsText));
      }
    }

    [DataSourceProperty]
    public string BettedDenarsText
    {
      get => this._bettedDenarsText;
      set
      {
        if (!(value != this._bettedDenarsText))
          return;
        this._bettedDenarsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (BettedDenarsText));
      }
    }

    [DataSourceProperty]
    public string OverallExpectedDenarsText
    {
      get => this._overallExpectedDenarsText;
      set
      {
        if (!(value != this._overallExpectedDenarsText))
          return;
        this._overallExpectedDenarsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (OverallExpectedDenarsText));
      }
    }

    [DataSourceProperty]
    public string CurrentExpectedDenarsText
    {
      get => this._currentExpectedDenarsText;
      set
      {
        if (!(value != this._currentExpectedDenarsText))
          return;
        this._currentExpectedDenarsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CurrentExpectedDenarsText));
      }
    }

    [DataSourceProperty]
    public string TotalDenarsText
    {
      get => this._totalDenarsText;
      set
      {
        if (!(value != this._totalDenarsText))
          return;
        this._totalDenarsText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TotalDenarsText));
      }
    }

    [DataSourceProperty]
    public string AcceptText
    {
      get => this._acceptText;
      set
      {
        if (!(value != this._acceptText))
          return;
        this._acceptText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (AcceptText));
      }
    }

    [DataSourceProperty]
    public string CancelText
    {
      get => this._cancelText;
      set
      {
        if (!(value != this._cancelText))
          return;
        this._cancelText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (CancelText));
      }
    }

    [DataSourceProperty]
    public bool IsCurrentMatchActive
    {
      get => this._isCurrentMatchActive;
      set
      {
        this._isCurrentMatchActive = value;
        this.OnPropertyChangedWithValue(value, nameof (IsCurrentMatchActive));
      }
    }

    [DataSourceProperty]
    public TournamentMatchVM CurrentMatch
    {
      get => this._currentMatch;
      set
      {
        if (value == this._currentMatch)
          return;
        TournamentMatchVM currentMatch = this._currentMatch;
        if ((currentMatch != null ? (currentMatch.IsValid ? 1 : 0) : 0) != 0)
        {
          this._currentMatch.State = 2;
          this._currentMatch.Refresh(false);
          int index = this._rounds.FindIndex((Predicate<TournamentRoundVM>) (r => r.Matches.Any<TournamentMatchVM>((Func<TournamentMatchVM, bool>) (m => m.Match == this.Tournament.LastMatch))));
          if (index < this.Tournament.Rounds.Length - 1)
            this._rounds[index + 1].Initialize();
        }
        this._currentMatch = value;
        this.OnPropertyChangedWithValue<TournamentMatchVM>(value, nameof (CurrentMatch));
        if (this._currentMatch == null)
          return;
        this._currentMatch.State = 1;
      }
    }

    [DataSourceProperty]
    public bool IsTournamentIncomplete
    {
      get => this.Tournament == null || this.Tournament.CurrentMatch != null;
      set
      {
      }
    }

    [DataSourceProperty]
    public int ActiveRoundIndex
    {
      get => this._activeRoundIndex;
      set
      {
        if (value == this._activeRoundIndex)
          return;
        this.OnNewRoundStarted(this._activeRoundIndex, value);
        this._activeRoundIndex = value;
        this.OnPropertyChangedWithValue(value, nameof (ActiveRoundIndex));
        this.RefreshBetProperties();
      }
    }

    [DataSourceProperty]
    public bool CanPlayerJoin
    {
      get => this._canPlayerJoin;
      set
      {
        if (value == this._canPlayerJoin)
          return;
        this._canPlayerJoin = value;
        this.OnPropertyChangedWithValue(value, nameof (CanPlayerJoin));
      }
    }

    [DataSourceProperty]
    public bool HasPrizeItem
    {
      get => this._hasPrizeItem;
      set
      {
        if (value == this._hasPrizeItem)
          return;
        this._hasPrizeItem = value;
        this.OnPropertyChangedWithValue(value, nameof (HasPrizeItem));
      }
    }

    [DataSourceProperty]
    public string JoinTournamentText
    {
      get => this._joinTournamentText;
      set
      {
        if (!(value != this._joinTournamentText))
          return;
        this._joinTournamentText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (JoinTournamentText));
      }
    }

    [DataSourceProperty]
    public string SkipRoundText
    {
      get => this._skipRoundText;
      set
      {
        if (!(value != this._skipRoundText))
          return;
        this._skipRoundText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (SkipRoundText));
      }
    }

    [DataSourceProperty]
    public string WatchRoundText
    {
      get => this._watchRoundText;
      set
      {
        if (!(value != this._watchRoundText))
          return;
        this._watchRoundText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (WatchRoundText));
      }
    }

    [DataSourceProperty]
    public string LeaveText
    {
      get => this._leaveText;
      set
      {
        if (!(value != this._leaveText))
          return;
        this._leaveText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (LeaveText));
      }
    }

    [DataSourceProperty]
    public TournamentRoundVM Round1
    {
      get => this._round1;
      set
      {
        if (value == this._round1)
          return;
        this._round1 = value;
        this.OnPropertyChangedWithValue<TournamentRoundVM>(value, nameof (Round1));
      }
    }

    [DataSourceProperty]
    public TournamentRoundVM Round2
    {
      get => this._round2;
      set
      {
        if (value == this._round2)
          return;
        this._round2 = value;
        this.OnPropertyChangedWithValue<TournamentRoundVM>(value, nameof (Round2));
      }
    }

    [DataSourceProperty]
    public TournamentRoundVM Round3
    {
      get => this._round3;
      set
      {
        if (value == this._round3)
          return;
        this._round3 = value;
        this.OnPropertyChangedWithValue<TournamentRoundVM>(value, nameof (Round3));
      }
    }

    [DataSourceProperty]
    public TournamentRoundVM Round4
    {
      get => this._round4;
      set
      {
        if (value == this._round4)
          return;
        this._round4 = value;
        this.OnPropertyChangedWithValue<TournamentRoundVM>(value, nameof (Round4));
      }
    }

    [DataSourceProperty]
    public bool InitializationOver => true;

    [DataSourceProperty]
    public string TournamentTitle
    {
      get => this._tournamentTitle;
      set
      {
        if (!(value != this._tournamentTitle))
          return;
        this._tournamentTitle = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (TournamentTitle));
      }
    }

    [DataSourceProperty]
    public bool IsOver
    {
      get => this._isOver;
      set
      {
        if (this._isOver == value)
          return;
        this._isOver = value;
        this.OnPropertyChangedWithValue(value, nameof (IsOver));
      }
    }

    [DataSourceProperty]
    public string WinnerIntro
    {
      get => this._winnerIntro;
      set
      {
        if (!(value != this._winnerIntro))
          return;
        this._winnerIntro = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (WinnerIntro));
      }
    }

    [DataSourceProperty]
    public MBBindingList<TournamentRewardVM> BattleRewards
    {
      get => this._battleRewards;
      set
      {
        if (value == this._battleRewards)
          return;
        this._battleRewards = value;
        this.OnPropertyChangedWithValue<MBBindingList<TournamentRewardVM>>(value, nameof (BattleRewards));
      }
    }

    [DataSourceProperty]
    public bool IsWinnerHero
    {
      get => this._isWinnerHero;
      set
      {
        if (value == this._isWinnerHero)
          return;
        this._isWinnerHero = value;
        this.OnPropertyChangedWithValue(value, nameof (IsWinnerHero));
      }
    }

    [DataSourceProperty]
    public bool IsBetWindowEnabled
    {
      get => this._isBetWindowEnabled;
      set
      {
        if (value == this._isBetWindowEnabled)
          return;
        this._isBetWindowEnabled = value;
        this.OnPropertyChangedWithValue(value, nameof (IsBetWindowEnabled));
      }
    }

    [DataSourceProperty]
    public ImageIdentifierVM WinnerBanner
    {
      get => this._winnerBanner;
      set
      {
        if (value == this._winnerBanner)
          return;
        this._winnerBanner = value;
        this.OnPropertyChangedWithValue<ImageIdentifierVM>(value, nameof (WinnerBanner));
      }
    }

    [DataSourceProperty]
    public HintViewModel SkipAllRoundsHint
    {
      get => this._skipAllRoundsHint;
      set
      {
        if (value == this._skipAllRoundsHint)
          return;
        this._skipAllRoundsHint = value;
        this.OnPropertyChangedWithValue<HintViewModel>(value, nameof (SkipAllRoundsHint));
      }
    }
  }
}
