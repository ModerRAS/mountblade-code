// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Missions.MissionArenaPracticeFightVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using SandBox.Missions.MissionLogics.Arena;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.ViewModelCollection.Missions
{
  public class MissionArenaPracticeFightVM : ViewModel
  {
    private readonly Mission _mission;
    private readonly ArenaPracticeFightMissionController _practiceMissionController;
    private string _opponentsBeatenText;
    private string _opponentsRemainingText;
    private bool _isPlayerPracticing;
    private string _prizeText;

    public MissionArenaPracticeFightVM(
      ArenaPracticeFightMissionController practiceMissionController)
    {
      this._practiceMissionController = practiceMissionController;
      this._mission = practiceMissionController.Mission;
    }

    public void Tick()
    {
      this.IsPlayerPracticing = this._practiceMissionController.IsPlayerPracticing;
      Agent mainAgent = this._mission.MainAgent;
      if ((mainAgent != null ? (mainAgent.IsActive() ? 1 : 0) : 0) != 0)
      {
        GameTexts.SetVariable("BEATEN_OPPONENT_COUNT", this._mission.MainAgent.KillCount);
        this.OpponentsBeatenText = GameTexts.FindText("str_beaten_opponent").ToString();
      }
      GameTexts.SetVariable("REMAINING_OPPONENT_COUNT", this._practiceMissionController.RemainingOpponentCount);
      this.OpponentsRemainingText = GameTexts.FindText("str_remaining_opponent").ToString();
      this.UpdatePrizeText();
    }

    public void UpdatePrizeText()
    {
      int remainingOpponentCount = this._practiceMissionController.RemainingOpponentCount;
      int countBeatenByPlayer = this._practiceMissionController.OpponentCountBeatenByPlayer;
      int content = 0;
      if (remainingOpponentCount == 0)
        content = 250;
      else if (countBeatenByPlayer >= 3)
        content = countBeatenByPlayer >= 6 ? (countBeatenByPlayer >= 10 ? (countBeatenByPlayer >= 20 ? 60 : 25) : 10) : 5;
      GameTexts.SetVariable("DENAR_AMOUNT", content);
      GameTexts.SetVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      this.PrizeText = GameTexts.FindText("str_earned_denar").ToString();
    }

    [DataSourceProperty]
    public string OpponentsBeatenText
    {
      get => this._opponentsBeatenText;
      set
      {
        if (!(this._opponentsBeatenText != value))
          return;
        this._opponentsBeatenText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (OpponentsBeatenText));
      }
    }

    [DataSourceProperty]
    public string PrizeText
    {
      get => this._prizeText;
      set
      {
        if (!(this._prizeText != value))
          return;
        this._prizeText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (PrizeText));
      }
    }

    [DataSourceProperty]
    public string OpponentsRemainingText
    {
      get => this._opponentsRemainingText;
      set
      {
        if (!(this._opponentsRemainingText != value))
          return;
        this._opponentsRemainingText = value;
        this.OnPropertyChangedWithValue<string>(value, nameof (OpponentsRemainingText));
      }
    }

    public bool IsPlayerPracticing
    {
      get => this._isPlayerPracticing;
      set
      {
        if (this._isPlayerPracticing == value)
          return;
        this._isPlayerPracticing = value;
        this.OnPropertyChangedWithValue(value, nameof (IsPlayerPracticing));
      }
    }
  }
}
