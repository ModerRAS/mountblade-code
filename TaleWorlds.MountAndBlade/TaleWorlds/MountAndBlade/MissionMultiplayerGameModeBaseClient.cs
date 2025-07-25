// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerGameModeBaseClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionMultiplayerGameModeBaseClient : MissionNetwork, ICameraModeLogic
  {
    public MissionLobbyComponent MissionLobbyComponent { get; private set; }

    public MissionNetworkComponent MissionNetworkComponent { get; private set; }

    public MissionScoreboardComponent ScoreboardComponent { get; private set; }

    public MultiplayerGameNotificationsComponent NotificationsComponent { get; private set; }

    public MultiplayerWarmupComponent WarmupComponent { get; private set; }

    public IRoundComponent RoundComponent { get; private set; }

    public MultiplayerTimerComponent TimerComponent { get; private set; }

    public abstract bool IsGameModeUsingGold { get; }

    public abstract bool IsGameModeTactical { get; }

    public virtual bool IsGameModeUsingCasualGold => true;

    public abstract bool IsGameModeUsingRoundCountdown { get; }

    public virtual bool IsGameModeUsingAllowCultureChange => false;

    public virtual bool IsGameModeUsingAllowTroopChange => false;

    public abstract MultiplayerGameType GameType { get; }

    public abstract int GetGoldAmount();

    public virtual SpectatorCameraTypes GetMissionCameraLockMode(bool lockedToMainPlayer)
    {
      return SpectatorCameraTypes.Invalid;
    }

    public bool IsRoundInProgress
    {
      get
      {
        IRoundComponent roundComponent = this.RoundComponent;
        return roundComponent != null && roundComponent.CurrentRoundState == MultiplayerRoundState.InProgress;
      }
    }

    public bool IsInWarmup => this.MissionLobbyComponent.IsInWarmup;

    public float RemainingTime
    {
      get => this.TimerComponent.GetRemainingTime(GameNetwork.IsClientOrReplay);
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this.MissionLobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
      this.MissionNetworkComponent = this.Mission.GetMissionBehavior<MissionNetworkComponent>();
      this.ScoreboardComponent = this.Mission.GetMissionBehavior<MissionScoreboardComponent>();
      this.NotificationsComponent = this.Mission.GetMissionBehavior<MultiplayerGameNotificationsComponent>();
      this.WarmupComponent = this.Mission.GetMissionBehavior<MultiplayerWarmupComponent>();
      this.RoundComponent = this.Mission.GetMissionBehavior<IRoundComponent>();
      this.TimerComponent = this.Mission.GetMissionBehavior<MultiplayerTimerComponent>();
    }

    public override void EarlyStart() => this.MissionLobbyComponent.MissionType = this.GameType;

    public bool CheckTimer(out int remainingTime, out int remainingWarningTime, bool forceUpdate = false)
    {
      bool flag = false;
      float f = 0.0f;
      if (this.WarmupComponent != null && this.MissionLobbyComponent.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.WaitingFirstPlayers)
        flag = !this.WarmupComponent.IsInWarmup;
      else if (this.RoundComponent != null)
      {
        flag = !this.RoundComponent.CurrentRoundState.StateHasVisualTimer();
        f = this.RoundComponent.LastRoundEndRemainingTime;
      }
      if (forceUpdate || !flag)
      {
        remainingTime = !flag ? MathF.Ceiling(this.RemainingTime) : MathF.Ceiling(f);
        remainingWarningTime = this.GetWarningTimer();
        return true;
      }
      remainingTime = 0;
      remainingWarningTime = 0;
      return false;
    }

    protected virtual int GetWarningTimer() => 0;

    public abstract void OnGoldAmountChangedForRepresentative(
      MissionRepresentativeBase representative,
      int goldAmount);

    public virtual bool CanRequestTroopChange() => false;

    public virtual bool CanRequestCultureChange() => false;

    public bool IsClassAvailable(MultiplayerClassDivisions.MPHeroClass heroClass)
    {
      FormationClass result;
      if (Enum.TryParse<FormationClass>(heroClass.ClassGroup.StringId, out result))
        return this.MissionLobbyComponent.IsClassAvailable(result);
      Debug.FailedAssert("\"" + heroClass.ClassGroup.StringId + "\" does not match with any FormationClass.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\Multiplayer\\MissionNetworkLogics\\MultiplayerGameModeLogics\\ClientGameModeLogics\\MissionMultiplayerGameModeBaseClient.cs", nameof (IsClassAvailable), 116);
      return false;
    }
  }
}
