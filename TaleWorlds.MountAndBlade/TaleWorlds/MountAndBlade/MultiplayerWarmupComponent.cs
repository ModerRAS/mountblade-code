// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerWarmupComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerWarmupComponent : MissionNetwork
  {
    public const int RespawnPeriodInWarmup = 3;
    public const int WarmupEndWaitTime = 30;
    private MissionMultiplayerGameModeBase _gameMode;
    private MultiplayerTimerComponent _timerComponent;
    private MissionLobbyComponent _lobbyComponent;
    private MissionTime _currentStateStartTime;
    private MultiplayerWarmupComponent.WarmupStates _warmupState;

    public static float TotalWarmupDuration
    {
      get => (float) (MultiplayerOptions.OptionType.WarmupTimeLimit.GetIntValue() * 60);
    }

    public event Action OnWarmupEnding;

    public event Action OnWarmupEnded;

    public bool IsInWarmup => this.WarmupState != MultiplayerWarmupComponent.WarmupStates.Ended;

    private MultiplayerWarmupComponent.WarmupStates WarmupState
    {
      get => this._warmupState;
      set
      {
        this._warmupState = value;
        if (!GameNetwork.IsServer)
          return;
        this._currentStateStartTime = MissionTime.Now;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new WarmupStateChange(this._warmupState, this._currentStateStartTime.NumberOfTicks));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._gameMode = this.Mission.GetMissionBehavior<MissionMultiplayerGameModeBase>();
      this._timerComponent = this.Mission.GetMissionBehavior<MultiplayerTimerComponent>();
      this._lobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add);
    }

    protected override void OnUdpNetworkHandlerClose()
    {
      this.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Remove);
    }

    private void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode mode)
    {
      GameNetwork.NetworkMessageHandlerRegisterer handlerRegisterer = new GameNetwork.NetworkMessageHandlerRegisterer(mode);
      if (!GameNetwork.IsClient)
        return;
      handlerRegisterer.Register<WarmupStateChange>(new GameNetworkMessage.ServerMessageHandlerDelegate<WarmupStateChange>(this.HandleServerEventWarmupStateChange));
    }

    public bool CheckForWarmupProgressEnd()
    {
      return this._gameMode.CheckForWarmupEnd() || (double) this._timerComponent.GetRemainingTime(false) <= 30.0;
    }

    public override void OnPreDisplayMissionTick(float dt)
    {
      if (!GameNetwork.IsServer || this._lobbyComponent.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending)
        return;
      switch (this.WarmupState)
      {
        case MultiplayerWarmupComponent.WarmupStates.WaitingForPlayers:
          this.BeginWarmup();
          break;
        case MultiplayerWarmupComponent.WarmupStates.InProgress:
          if (!this.CheckForWarmupProgressEnd())
            break;
          this.EndWarmupProgress();
          break;
        case MultiplayerWarmupComponent.WarmupStates.Ending:
          if (!this._timerComponent.CheckIfTimerPassed())
            break;
          this.EndWarmup();
          break;
        case MultiplayerWarmupComponent.WarmupStates.Ended:
          if (!this._timerComponent.CheckIfTimerPassed())
            break;
          this.Mission.RemoveMissionBehavior((MissionBehavior) this);
          break;
        default:
          throw new ArgumentOutOfRangeException();
      }
    }

    private void BeginWarmup()
    {
      this.WarmupState = MultiplayerWarmupComponent.WarmupStates.InProgress;
      Mission.Current.ResetMission();
      this._gameMode.MultiplayerTeamSelectComponent.BalanceTeams();
      this._timerComponent.StartTimerAsServer(MultiplayerWarmupComponent.TotalWarmupDuration);
      this._gameMode.SpawnComponent.SpawningBehavior.Clear();
      SpawnComponent.SetWarmupSpawningBehavior();
    }

    public void EndWarmupProgress()
    {
      this.WarmupState = MultiplayerWarmupComponent.WarmupStates.Ending;
      this._timerComponent.StartTimerAsServer(30f);
      Action onWarmupEnding = this.OnWarmupEnding;
      if (onWarmupEnding == null)
        return;
      onWarmupEnding();
    }

    private void EndWarmup()
    {
      this.WarmupState = MultiplayerWarmupComponent.WarmupStates.Ended;
      this._timerComponent.StartTimerAsServer(3f);
      Action onWarmupEnded = this.OnWarmupEnded;
      if (onWarmupEnded != null)
        onWarmupEnded();
      if (!GameNetwork.IsDedicatedServer)
        this.PlayBattleStartingSound();
      Mission.Current.ResetMission();
      this._gameMode.MultiplayerTeamSelectComponent.BalanceTeams();
      this._gameMode.SpawnComponent.SpawningBehavior.Clear();
      SpawnComponent.SetSpawningBehaviorForCurrentGameType(this._gameMode.GetMissionType());
      if (this.CanMatchStartAfterWarmup())
        return;
      this._lobbyComponent.SetStateEndingAsServer();
    }

    public bool CanMatchStartAfterWarmup()
    {
      bool[] flagArray = new bool[2];
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component?.Team != null && component.Team.Side != BattleSideEnum.None)
          flagArray[(int) component.Team.Side] = true;
        if (flagArray[1] && flagArray[0])
          return true;
      }
      return false;
    }

    public override void OnRemoveBehavior()
    {
      base.OnRemoveBehavior();
      this.OnWarmupEnding = (Action) null;
      this.OnWarmupEnded = (Action) null;
      if (!GameNetwork.IsServer || this._gameMode.UseRoundController() || this._lobbyComponent.CurrentMultiplayerState == MissionLobbyComponent.MultiplayerGameState.Ending)
        return;
      this._gameMode.SpawnComponent.SpawningBehavior.RequestStartSpawnSession();
    }

    protected override void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      if (!this.IsInWarmup || networkPeer.IsServerPeer)
        return;
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new WarmupStateChange(this._warmupState, this._currentStateStartTime.NumberOfTicks));
      GameNetwork.EndModuleEventAsServer();
    }

    private void HandleServerEventWarmupStateChange(WarmupStateChange message)
    {
      this.WarmupState = message.WarmupState;
      switch (this.WarmupState)
      {
        case MultiplayerWarmupComponent.WarmupStates.InProgress:
          this._timerComponent.StartTimerAsClient(message.StateStartTimeInSeconds, MultiplayerWarmupComponent.TotalWarmupDuration);
          break;
        case MultiplayerWarmupComponent.WarmupStates.Ending:
          this._timerComponent.StartTimerAsClient(message.StateStartTimeInSeconds, 30f);
          Action onWarmupEnding = this.OnWarmupEnding;
          if (onWarmupEnding == null)
            break;
          onWarmupEnding();
          break;
        case MultiplayerWarmupComponent.WarmupStates.Ended:
          this._timerComponent.StartTimerAsClient(message.StateStartTimeInSeconds, 3f);
          Action onWarmupEnded = this.OnWarmupEnded;
          if (onWarmupEnded != null)
            onWarmupEnded();
          this.PlayBattleStartingSound();
          break;
      }
    }

    private void PlayBattleStartingSound()
    {
      MatrixFrame cameraFrame = Mission.Current.GetCameraFrame();
      Vec3 position = cameraFrame.origin + cameraFrame.rotation.u;
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      if (component?.Team != null)
        MBSoundEvent.PlaySound(SoundEvent.GetEventIdFromString("event:/alerts/rally/" + (component.Team.Side == BattleSideEnum.Attacker ? MultiplayerOptions.OptionType.CultureTeam1.GetStrValue() : MultiplayerOptions.OptionType.CultureTeam2.GetStrValue()).ToLower()), position);
      else
        MBSoundEvent.PlaySound(SoundEvent.GetEventIdFromString("event:/alerts/rally/generic"), position);
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("end_warmup", "mp_host")]
    public static string CommandEndWarmup(List<string> strings)
    {
      if (Mission.Current == null)
        return "end_warmup can only be called within a mission.";
      if (!GameNetwork.IsServer)
        return "end_warmup can only be called by the server.";
      MultiplayerWarmupComponent missionBehavior = Mission.Current.GetMissionBehavior<MultiplayerWarmupComponent>();
      if (missionBehavior == null)
        return "end_warmup can only be called when the game is in warmup.";
      missionBehavior.EndWarmupProgress();
      return "Success";
    }

    public enum WarmupStates
    {
      WaitingForPlayers,
      InProgress,
      Ending,
      Ended,
    }
  }
}
