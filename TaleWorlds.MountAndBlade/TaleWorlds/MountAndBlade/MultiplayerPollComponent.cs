// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerPollComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerPollComponent : MissionNetwork
  {
    public const int MinimumParticipantCountRequired = 3;
    public Action<MissionPeer, MissionPeer, bool> OnKickPollOpened;
    public Action<MultiplayerPollRejectReason> OnPollRejected;
    public Action<int, int> OnPollUpdated;
    public Action OnPollClosed;
    public Action OnPollCancelled;
    private MissionLobbyComponent _missionLobbyComponent;
    private MultiplayerGameNotificationsComponent _notificationsComponent;
    private MultiplayerPollComponent.MultiplayerPoll _ongoingPoll;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionLobbyComponent = this.Mission.GetMissionBehavior<MissionLobbyComponent>();
      this._notificationsComponent = this.Mission.GetMissionBehavior<MultiplayerGameNotificationsComponent>();
    }

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      this._ongoingPoll?.Tick();
    }

    public void Vote(bool accepted)
    {
      if (GameNetwork.IsServer)
      {
        if (GameNetwork.MyPeer == null)
          return;
        this.ApplyVote(GameNetwork.MyPeer, accepted);
      }
      else
      {
        if (this._ongoingPoll == null || !this._ongoingPoll.IsOpen)
          return;
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new PollResponse(accepted));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    private void ApplyVote(NetworkCommunicator peer, bool accepted)
    {
      if (this._ongoingPoll == null || !this._ongoingPoll.ApplyVote(peer, accepted))
        return;
      List<NetworkCommunicator> progressReceivers = this._ongoingPoll.GetPollProgressReceivers();
      int count = progressReceivers.Count;
      for (int index = 0; index < count; ++index)
      {
        GameNetwork.BeginModuleEventAsServer(progressReceivers[index]);
        GameNetwork.WriteMessage((GameNetworkMessage) new PollProgress(this._ongoingPoll.AcceptedCount, this._ongoingPoll.RejectedCount));
        GameNetwork.EndModuleEventAsServer();
      }
      this.UpdatePollProgress(this._ongoingPoll.AcceptedCount, this._ongoingPoll.RejectedCount);
    }

    private void RejectPollOnServer(
      NetworkCommunicator pollCreatorPeer,
      MultiplayerPollRejectReason rejectReason)
    {
      if (pollCreatorPeer.IsMine)
      {
        this.RejectPoll(rejectReason);
      }
      else
      {
        GameNetwork.BeginModuleEventAsServer(pollCreatorPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new PollRequestRejected((int) rejectReason));
        GameNetwork.EndModuleEventAsServer();
      }
    }

    private void RejectPoll(MultiplayerPollRejectReason rejectReason)
    {
      if (!GameNetwork.IsDedicatedServer)
        this._notificationsComponent.PollRejected(rejectReason);
      Action<MultiplayerPollRejectReason> onPollRejected = this.OnPollRejected;
      if (onPollRejected == null)
        return;
      onPollRejected(rejectReason);
    }

    private void UpdatePollProgress(int votesAccepted, int votesRejected)
    {
      Action<int, int> onPollUpdated = this.OnPollUpdated;
      if (onPollUpdated == null)
        return;
      onPollUpdated(votesAccepted, votesRejected);
    }

    private void CancelPoll()
    {
      if (this._ongoingPoll != null)
      {
        this._ongoingPoll.Cancel();
        this._ongoingPoll = (MultiplayerPollComponent.MultiplayerPoll) null;
      }
      Action onPollCancelled = this.OnPollCancelled;
      if (onPollCancelled == null)
        return;
      onPollCancelled();
    }

    private void OnPollCancelledOnServer(
      MultiplayerPollComponent.MultiplayerPoll multiplayerPoll)
    {
      List<NetworkCommunicator> progressReceivers = multiplayerPoll.GetPollProgressReceivers();
      int count = progressReceivers.Count;
      for (int index = 0; index < count; ++index)
      {
        GameNetwork.BeginModuleEventAsServer(progressReceivers[index]);
        GameNetwork.WriteMessage((GameNetworkMessage) new PollCancelled());
        GameNetwork.EndModuleEventAsServer();
      }
      this.CancelPoll();
    }

    public void RequestKickPlayerPoll(NetworkCommunicator peer, bool banPlayer)
    {
      if (GameNetwork.IsServer)
      {
        if (GameNetwork.MyPeer == null)
          return;
        this.OpenKickPlayerPollOnServer(GameNetwork.MyPeer, peer, banPlayer);
      }
      else
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new KickPlayerPollRequested(peer, banPlayer));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    private void OpenKickPlayerPollOnServer(
      NetworkCommunicator pollCreatorPeer,
      NetworkCommunicator targetPeer,
      bool banPlayer)
    {
      if (this._ongoingPoll == null)
      {
        if (((pollCreatorPeer == null ? 0 : (pollCreatorPeer.IsConnectionActive ? 1 : 0)) & (targetPeer == null ? (false ? 1 : 0) : (targetPeer.IsConnectionActive ? 1 : 0))) == 0)
          return;
        if (targetPeer.IsSynchronized)
        {
          MissionPeer component1 = pollCreatorPeer.GetComponent<MissionPeer>();
          if (component1 == null)
            return;
          if (component1.RequestedKickPollCount < 2)
          {
            List<NetworkCommunicator> participantsToVote = new List<NetworkCommunicator>();
            foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
            {
              if (networkPeer != targetPeer && networkPeer.IsSynchronized)
              {
                MissionPeer component2 = networkPeer.GetComponent<MissionPeer>();
                if (component2 != null && component2.Team == component1.Team)
                  participantsToVote.Add(networkPeer);
              }
            }
            int count = participantsToVote.Count;
            if (count + 1 >= 3)
            {
              this.OpenKickPlayerPoll(targetPeer, pollCreatorPeer, false, participantsToVote);
              for (int index = 0; index < count; ++index)
              {
                GameNetwork.BeginModuleEventAsServer(this._ongoingPoll.ParticipantsToVote[index]);
                GameNetwork.WriteMessage((GameNetworkMessage) new KickPlayerPollOpened(pollCreatorPeer, targetPeer, banPlayer));
                GameNetwork.EndModuleEventAsServer();
              }
              GameNetwork.BeginModuleEventAsServer(targetPeer);
              GameNetwork.WriteMessage((GameNetworkMessage) new KickPlayerPollOpened(pollCreatorPeer, targetPeer, banPlayer));
              GameNetwork.EndModuleEventAsServer();
              component1.IncrementRequestedKickPollCount();
            }
            else
              this.RejectPollOnServer(pollCreatorPeer, MultiplayerPollRejectReason.NotEnoughPlayersToOpenPoll);
          }
          else
            this.RejectPollOnServer(pollCreatorPeer, MultiplayerPollRejectReason.TooManyPollRequests);
        }
        else
          this.RejectPollOnServer(pollCreatorPeer, MultiplayerPollRejectReason.KickPollTargetNotSynced);
      }
      else
        this.RejectPollOnServer(pollCreatorPeer, MultiplayerPollRejectReason.HasOngoingPoll);
    }

    private void OpenKickPlayerPoll(
      NetworkCommunicator targetPeer,
      NetworkCommunicator pollCreatorPeer,
      bool banPlayer,
      List<NetworkCommunicator> participantsToVote)
    {
      MissionPeer component1 = pollCreatorPeer.GetComponent<MissionPeer>();
      MissionPeer component2 = targetPeer.GetComponent<MissionPeer>();
      this._ongoingPoll = (MultiplayerPollComponent.MultiplayerPoll) new MultiplayerPollComponent.KickPlayerPoll(this._missionLobbyComponent.MissionType, participantsToVote, targetPeer, component1.Team);
      if (GameNetwork.IsServer)
      {
        this._ongoingPoll.OnClosedOnServer += new Action<MultiplayerPollComponent.MultiplayerPoll>(this.OnKickPlayerPollClosedOnServer);
        this._ongoingPoll.OnCancelledOnServer += new Action<MultiplayerPollComponent.MultiplayerPoll>(this.OnPollCancelledOnServer);
      }
      Action<MissionPeer, MissionPeer, bool> onKickPollOpened = this.OnKickPollOpened;
      if (onKickPollOpened != null)
        onKickPollOpened(component1, component2, banPlayer);
      if (GameNetwork.MyPeer != pollCreatorPeer)
        return;
      this.Vote(true);
    }

    private void OnKickPlayerPollClosedOnServer(
      MultiplayerPollComponent.MultiplayerPoll multiplayerPoll)
    {
      MultiplayerPollComponent.KickPlayerPoll kickPlayerPoll = multiplayerPoll as MultiplayerPollComponent.KickPlayerPoll;
      bool end = kickPlayerPoll.GotEnoughAcceptVotesToEnd();
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new KickPlayerPollClosed(kickPlayerPoll.TargetPeer, end));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      this.CloseKickPlayerPoll(end, kickPlayerPoll.TargetPeer);
      if (!end)
        return;
      DisconnectInfo parameter = kickPlayerPoll.TargetPeer.PlayerConnectionInfo.GetParameter<DisconnectInfo>("DisconnectInfo") ?? new DisconnectInfo();
      parameter.Type = DisconnectType.KickedByPoll;
      kickPlayerPoll.TargetPeer.PlayerConnectionInfo.AddParameter("DisconnectInfo", (object) parameter);
      GameNetwork.AddNetworkPeerToDisconnectAsServer(kickPlayerPoll.TargetPeer);
    }

    private void CloseKickPlayerPoll(bool accepted, NetworkCommunicator targetPeer)
    {
      if (this._ongoingPoll != null)
      {
        this._ongoingPoll.Close();
        this._ongoingPoll = (MultiplayerPollComponent.MultiplayerPoll) null;
      }
      Action onPollClosed = this.OnPollClosed;
      if (onPollClosed != null)
        onPollClosed();
      if (!(!GameNetwork.IsDedicatedServer & accepted) || targetPeer.IsMine)
        return;
      this._notificationsComponent.PlayerKicked(targetPeer);
    }

    private void OnBanPlayerPollClosedOnServer(
      MultiplayerPollComponent.MultiplayerPoll multiplayerPoll)
    {
      MissionPeer component = (multiplayerPoll as MultiplayerPollComponent.BanPlayerPoll).TargetPeer.GetComponent<MissionPeer>();
      if (component == null)
        return;
      NetworkCommunicator networkPeer = component.GetNetworkPeer();
      DisconnectInfo parameter = networkPeer.PlayerConnectionInfo.GetParameter<DisconnectInfo>("DisconnectInfo") ?? new DisconnectInfo();
      parameter.Type = DisconnectType.BannedByPoll;
      networkPeer.PlayerConnectionInfo.AddParameter("DisconnectInfo", (object) parameter);
      GameNetwork.AddNetworkPeerToDisconnectAsServer(networkPeer);
      if (GameNetwork.IsServer)
        CustomGameBannedPlayerManager.AddBannedPlayer(component.Peer.Id, Environment.TickCount + 600000);
      if (GameNetwork.IsDedicatedServer)
        throw new NotImplementedException();
      NetworkMain.GameClient.KickPlayer(component.Peer.Id, true);
    }

    private void StartChangeGamePollOnServer(
      NetworkCommunicator pollCreatorPeer,
      string gameType,
      string scene)
    {
      if (this._ongoingPoll == null)
      {
        this._ongoingPoll = (MultiplayerPollComponent.MultiplayerPoll) new MultiplayerPollComponent.ChangeGamePoll(this._missionLobbyComponent.MissionType, GameNetwork.NetworkPeers.ToList<NetworkCommunicator>(), gameType, scene);
        if (GameNetwork.IsServer)
          this._ongoingPoll.OnClosedOnServer += new Action<MultiplayerPollComponent.MultiplayerPoll>(this.OnChangeGamePollClosedOnServer);
        if (!GameNetwork.IsDedicatedServer)
          this.ShowChangeGamePoll(gameType, scene);
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.ChangeGamePoll(gameType, scene));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      else
        this.RejectPollOnServer(pollCreatorPeer, MultiplayerPollRejectReason.HasOngoingPoll);
    }

    private void StartChangeGamePoll(string gameType, string map)
    {
      if (GameNetwork.IsServer)
      {
        if (GameNetwork.MyPeer == null)
          return;
        this.StartChangeGamePollOnServer(GameNetwork.MyPeer, gameType, map);
      }
      else
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromClient.ChangeGamePoll(gameType, map));
        GameNetwork.EndModuleEventAsClient();
      }
    }

    private void ShowChangeGamePoll(string gameType, string scene)
    {
    }

    private void OnChangeGamePollClosedOnServer(
      MultiplayerPollComponent.MultiplayerPoll multiplayerPoll)
    {
      MultiplayerPollComponent.ChangeGamePoll changeGamePoll = multiplayerPoll as MultiplayerPollComponent.ChangeGamePoll;
      MultiplayerOptions.OptionType.GameType.SetValue(changeGamePoll.GameType);
      MultiplayerOptions.Instance.OnGameTypeChanged();
      MultiplayerOptions.OptionType.Map.SetValue(changeGamePoll.MapName);
      this._missionLobbyComponent.SetStateEndingAsServer();
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (GameNetwork.IsClient)
      {
        registerer.RegisterBaseHandler<PollRequestRejected>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventPollRequestRejected));
        registerer.RegisterBaseHandler<PollProgress>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventUpdatePollProgress));
        registerer.RegisterBaseHandler<PollCancelled>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventPollCancelled));
        registerer.RegisterBaseHandler<KickPlayerPollOpened>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventKickPlayerPollOpened));
        registerer.RegisterBaseHandler<KickPlayerPollClosed>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventKickPlayerPollClosed));
        registerer.RegisterBaseHandler<NetworkMessages.FromServer.ChangeGamePoll>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventChangeGamePoll));
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        registerer.RegisterBaseHandler<PollResponse>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventPollResponse));
        registerer.RegisterBaseHandler<KickPlayerPollRequested>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventKickPlayerPollRequested));
        registerer.RegisterBaseHandler<NetworkMessages.FromClient.ChangeGamePoll>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventChangeGamePoll));
      }
    }

    private bool HandleClientEventChangeGamePoll(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromClient.ChangeGamePoll changeGamePoll = (NetworkMessages.FromClient.ChangeGamePoll) baseMessage;
      this.StartChangeGamePollOnServer(peer, changeGamePoll.GameType, changeGamePoll.Map);
      return true;
    }

    private bool HandleClientEventKickPlayerPollRequested(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      KickPlayerPollRequested playerPollRequested = (KickPlayerPollRequested) baseMessage;
      this.OpenKickPlayerPollOnServer(peer, playerPollRequested.PlayerPeer, playerPollRequested.BanPlayer);
      return true;
    }

    private bool HandleClientEventPollResponse(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      PollResponse pollResponse = (PollResponse) baseMessage;
      this.ApplyVote(peer, pollResponse.Accepted);
      return true;
    }

    private void HandleServerEventChangeGamePoll(GameNetworkMessage baseMessage)
    {
      NetworkMessages.FromServer.ChangeGamePoll changeGamePoll = (NetworkMessages.FromServer.ChangeGamePoll) baseMessage;
      this.ShowChangeGamePoll(changeGamePoll.GameType, changeGamePoll.Map);
    }

    private void HandleServerEventKickPlayerPollOpened(GameNetworkMessage baseMessage)
    {
      KickPlayerPollOpened playerPollOpened = (KickPlayerPollOpened) baseMessage;
      this.OpenKickPlayerPoll(playerPollOpened.PlayerPeer, playerPollOpened.InitiatorPeer, playerPollOpened.BanPlayer, (List<NetworkCommunicator>) null);
    }

    private void HandleServerEventUpdatePollProgress(GameNetworkMessage baseMessage)
    {
      PollProgress pollProgress = (PollProgress) baseMessage;
      this.UpdatePollProgress(pollProgress.VotesAccepted, pollProgress.VotesRejected);
    }

    private void HandleServerEventPollCancelled(GameNetworkMessage baseMessage)
    {
      this.CancelPoll();
    }

    private void HandleServerEventKickPlayerPollClosed(GameNetworkMessage baseMessage)
    {
      KickPlayerPollClosed playerPollClosed = (KickPlayerPollClosed) baseMessage;
      this.CloseKickPlayerPoll(playerPollClosed.Accepted, playerPollClosed.PlayerPeer);
    }

    private void HandleServerEventPollRequestRejected(GameNetworkMessage baseMessage)
    {
      this.RejectPoll((MultiplayerPollRejectReason) ((PollRequestRejected) baseMessage).Reason);
    }

    private abstract class MultiplayerPoll
    {
      private const int TimeoutInSeconds = 30;
      public Action<MultiplayerPollComponent.MultiplayerPoll> OnClosedOnServer;
      public Action<MultiplayerPollComponent.MultiplayerPoll> OnCancelledOnServer;
      public int AcceptedCount;
      public int RejectedCount;
      private readonly List<NetworkCommunicator> _participantsToVote;
      private readonly MultiplayerGameType _gameType;

      public MultiplayerPollComponent.MultiplayerPoll.Type PollType { get; }

      public bool IsOpen { get; private set; }

      private int OpenTime { get; }

      private int CloseTime { get; set; }

      public List<NetworkCommunicator> ParticipantsToVote => this._participantsToVote;

      protected MultiplayerPoll(
        MultiplayerGameType gameType,
        MultiplayerPollComponent.MultiplayerPoll.Type pollType,
        List<NetworkCommunicator> participantsToVote)
      {
        this._gameType = gameType;
        this.PollType = pollType;
        if (participantsToVote != null)
          this._participantsToVote = participantsToVote;
        this.OpenTime = Environment.TickCount;
        this.CloseTime = 0;
        this.AcceptedCount = 0;
        this.RejectedCount = 0;
        this.IsOpen = true;
      }

      public virtual bool IsCancelled() => false;

      public virtual List<NetworkCommunicator> GetPollProgressReceivers()
      {
        return GameNetwork.NetworkPeers.ToList<NetworkCommunicator>();
      }

      public void Tick()
      {
        if (!GameNetwork.IsServer)
          return;
        for (int index = this._participantsToVote.Count - 1; index >= 0; --index)
        {
          if (!this._participantsToVote[index].IsConnectionActive)
            this._participantsToVote.RemoveAt(index);
        }
        if (this.IsCancelled())
        {
          Action<MultiplayerPollComponent.MultiplayerPoll> cancelledOnServer = this.OnCancelledOnServer;
          if (cancelledOnServer == null)
            return;
          cancelledOnServer(this);
        }
        else
        {
          if (this.OpenTime >= Environment.TickCount - 30000 && !this.ResultsFinalized())
            return;
          Action<MultiplayerPollComponent.MultiplayerPoll> onClosedOnServer = this.OnClosedOnServer;
          if (onClosedOnServer == null)
            return;
          onClosedOnServer(this);
        }
      }

      public void Close()
      {
        this.CloseTime = Environment.TickCount;
        this.IsOpen = false;
      }

      public void Cancel() => this.Close();

      public bool ApplyVote(NetworkCommunicator peer, bool accepted)
      {
        bool flag = false;
        if (this._participantsToVote.Contains(peer))
        {
          if (accepted)
            ++this.AcceptedCount;
          else
            ++this.RejectedCount;
          this._participantsToVote.Remove(peer);
          flag = true;
        }
        return flag;
      }

      public bool GotEnoughAcceptVotesToEnd()
      {
        return (this._gameType == MultiplayerGameType.Skirmish ? 1 : (this._gameType == MultiplayerGameType.Captain ? 1 : 0)) == 0 ? this.AcceptedByMajority() : this.AcceptedByAllParticipants();
      }

      private bool GotEnoughRejectVotesToEnd()
      {
        return (this._gameType == MultiplayerGameType.Skirmish ? 1 : (this._gameType == MultiplayerGameType.Captain ? 1 : 0)) == 0 ? this.RejectedByMajority() : this.RejectedByAtLeastOneParticipant();
      }

      private bool AcceptedByAllParticipants()
      {
        return this.AcceptedCount == this.GetPollParticipantCount();
      }

      private bool AcceptedByMajority()
      {
        return (double) this.AcceptedCount / (double) this.GetPollParticipantCount() > 0.50001001358032227;
      }

      private bool RejectedByAtLeastOneParticipant() => this.RejectedCount > 0;

      private bool RejectedByMajority()
      {
        return (double) this.RejectedCount / (double) this.GetPollParticipantCount() > 0.50001001358032227;
      }

      private int GetPollParticipantCount()
      {
        return this._participantsToVote.Count + this.AcceptedCount + this.RejectedCount;
      }

      private bool ResultsFinalized()
      {
        return this.GotEnoughAcceptVotesToEnd() || this.GotEnoughRejectVotesToEnd() || this._participantsToVote.Count == 0;
      }

      public enum Type
      {
        KickPlayer,
        BanPlayer,
        ChangeGame,
      }
    }

    private class KickPlayerPoll : MultiplayerPollComponent.MultiplayerPoll
    {
      public const int RequestLimitPerPeer = 2;
      private readonly Team _team;

      public NetworkCommunicator TargetPeer { get; }

      public KickPlayerPoll(
        MultiplayerGameType gameType,
        List<NetworkCommunicator> participantsToVote,
        NetworkCommunicator targetPeer,
        Team team)
        : base(gameType, MultiplayerPollComponent.MultiplayerPoll.Type.KickPlayer, participantsToVote)
      {
        this.TargetPeer = targetPeer;
        this._team = team;
      }

      public override bool IsCancelled()
      {
        return !this.TargetPeer.IsConnectionActive || this.TargetPeer.QuitFromMission;
      }

      public override List<NetworkCommunicator> GetPollProgressReceivers()
      {
        List<NetworkCommunicator> progressReceivers = new List<NetworkCommunicator>();
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          MissionPeer component = networkPeer.GetComponent<MissionPeer>();
          if (component != null && component.Team == this._team)
            progressReceivers.Add(networkPeer);
        }
        return progressReceivers;
      }
    }

    private class BanPlayerPoll : MultiplayerPollComponent.MultiplayerPoll
    {
      public NetworkCommunicator TargetPeer { get; }

      public BanPlayerPoll(
        MultiplayerGameType gameType,
        List<NetworkCommunicator> participantsToVote,
        NetworkCommunicator targetPeer)
        : base(gameType, MultiplayerPollComponent.MultiplayerPoll.Type.BanPlayer, participantsToVote)
      {
        this.TargetPeer = targetPeer;
      }
    }

    private class ChangeGamePoll : MultiplayerPollComponent.MultiplayerPoll
    {
      public string GameType { get; }

      public string MapName { get; }

      public ChangeGamePoll(
        MultiplayerGameType currentGameType,
        List<NetworkCommunicator> participantsToVote,
        string gameType,
        string scene)
        : base(currentGameType, MultiplayerPollComponent.MultiplayerPoll.Type.ChangeGame, participantsToVote)
      {
        this.GameType = gameType;
        this.MapName = scene;
      }
    }
  }
}
