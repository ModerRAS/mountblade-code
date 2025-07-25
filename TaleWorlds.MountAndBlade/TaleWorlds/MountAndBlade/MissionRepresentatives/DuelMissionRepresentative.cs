// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionRepresentatives.DuelMissionRepresentative
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionRepresentatives
{
  public class DuelMissionRepresentative : MissionRepresentativeBase
  {
    public const int DuelPrepTime = 3;
    public Action<MissionPeer, TroopType> OnDuelRequestedEvent;
    public Action<MissionPeer> OnDuelRequestSentEvent;
    public Action<MissionPeer, int> OnDuelPrepStartedEvent;
    public Action OnAgentSpawnedWithoutDuelEvent;
    public Action<MissionPeer, MissionPeer, int> OnDuelPreparationStartedForTheFirstTimeEvent;
    public Action<MissionPeer> OnDuelEndedEvent;
    public Action<MissionPeer> OnDuelRoundEndedEvent;
    public Action<TroopType> OnMyPreferredZoneChanged;
    private List<Tuple<MissionPeer, MissionTime>> _requesters;
    private MissionMultiplayerDuel _missionMultiplayerDuel;
    private IFocusable _focusedObject;

    public int Bounty { get; private set; }

    public int Score { get; private set; }

    public int NumberOfWins { get; private set; }

    private bool _isInDuel
    {
      get
      {
        return this.MissionPeer != null && this.MissionPeer.Team != null && this.MissionPeer.Team.IsDefender;
      }
    }

    public override void Initialize()
    {
      this._requesters = new List<Tuple<MissionPeer, MissionTime>>();
      if (GameNetwork.IsServerOrRecorder)
        this._missionMultiplayerDuel = Mission.Current.GetMissionBehavior<MissionMultiplayerDuel>();
      Mission.Current.SetMissionMode(MissionMode.Duel, true);
    }

    public void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode mode)
    {
      if (!GameNetwork.IsClient)
        return;
      GameNetwork.NetworkMessageHandlerRegisterer handlerRegisterer = new GameNetwork.NetworkMessageHandlerRegisterer(mode);
      handlerRegisterer.Register<NetworkMessages.FromServer.DuelRequest>(new GameNetworkMessage.ServerMessageHandlerDelegate<NetworkMessages.FromServer.DuelRequest>(this.HandleServerEventDuelRequest));
      handlerRegisterer.Register<DuelSessionStarted>(new GameNetworkMessage.ServerMessageHandlerDelegate<DuelSessionStarted>(this.HandleServerEventDuelSessionStarted));
      handlerRegisterer.Register<DuelPreparationStartedForTheFirstTime>(new GameNetworkMessage.ServerMessageHandlerDelegate<DuelPreparationStartedForTheFirstTime>(this.HandleServerEventDuelStarted));
      handlerRegisterer.Register<DuelEnded>(new GameNetworkMessage.ServerMessageHandlerDelegate<DuelEnded>(this.HandleServerEventDuelEnded));
      handlerRegisterer.Register<DuelRoundEnded>(new GameNetworkMessage.ServerMessageHandlerDelegate<DuelRoundEnded>(this.HandleServerEventDuelRoundEnded));
      handlerRegisterer.Register<DuelPointsUpdateMessage>(new GameNetworkMessage.ServerMessageHandlerDelegate<DuelPointsUpdateMessage>(this.HandleServerPointUpdate));
    }

    public void OnInteraction()
    {
      if (this._focusedObject == null)
        return;
      Agent focusedAgent;
      if ((focusedAgent = this._focusedObject as Agent) != null)
      {
        if (!focusedAgent.IsActive())
          return;
        if (this._requesters.Any<Tuple<MissionPeer, MissionTime>>((Func<Tuple<MissionPeer, MissionTime>, bool>) (req => req.Item1 == focusedAgent.MissionPeer)))
        {
          for (int index = 0; index < this._requesters.Count; ++index)
          {
            if (this._requesters[index].Item1 == this.MissionPeer)
            {
              this._requesters.Remove(this._requesters[index]);
              break;
            }
          }
          switch (this.PlayerType)
          {
            case MissionRepresentativeBase.PlayerTypes.Client:
              GameNetwork.BeginModuleEventAsClient();
              GameNetwork.WriteMessage((GameNetworkMessage) new DuelResponse(focusedAgent.MissionRepresentative.Peer.Communicator as NetworkCommunicator, true));
              GameNetwork.EndModuleEventAsClient();
              break;
            case MissionRepresentativeBase.PlayerTypes.Server:
              this._missionMultiplayerDuel.DuelRequestAccepted(focusedAgent, this.ControlledAgent);
              break;
          }
        }
        else
        {
          switch (this.PlayerType)
          {
            case MissionRepresentativeBase.PlayerTypes.Client:
              Action<MissionPeer> requestSentEvent = this.OnDuelRequestSentEvent;
              if (requestSentEvent != null)
                requestSentEvent(focusedAgent.MissionPeer);
              GameNetwork.BeginModuleEventAsClient();
              GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromClient.DuelRequest(focusedAgent.Index));
              GameNetwork.EndModuleEventAsClient();
              break;
            case MissionRepresentativeBase.PlayerTypes.Server:
              this._missionMultiplayerDuel.DuelRequestReceived(this.MissionPeer, focusedAgent.MissionPeer);
              break;
          }
        }
      }
      else
      {
        if (!(this._focusedObject is DuelZoneLandmark focusedObject))
          return;
        if (this._isInDuel)
        {
          InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=v5EqMSlD}Can't change arena preference while in duel.").ToString()));
        }
        else
        {
          GameNetwork.BeginModuleEventAsClient();
          GameNetwork.WriteMessage((GameNetworkMessage) new RequestChangePreferredTroopType(focusedObject.ZoneTroopType));
          GameNetwork.EndModuleEventAsClient();
          Action<TroopType> preferredZoneChanged = this.OnMyPreferredZoneChanged;
          if (preferredZoneChanged == null)
            return;
          preferredZoneChanged(focusedObject.ZoneTroopType);
        }
      }
    }

    private void HandleServerEventDuelRequest(NetworkMessages.FromServer.DuelRequest message)
    {
      Agent agentFromIndex = Mission.MissionNetworkHelper.GetAgentFromIndex(message.RequesterAgentIndex);
      Mission.MissionNetworkHelper.GetAgentFromIndex(message.RequestedAgentIndex);
      this.DuelRequested(agentFromIndex, message.SelectedAreaTroopType);
    }

    private void HandleServerEventDuelSessionStarted(DuelSessionStarted message)
    {
      this.OnDuelPreparation(message.RequesterPeer.GetComponent<MissionPeer>(), message.RequestedPeer.GetComponent<MissionPeer>());
    }

    private void HandleServerEventDuelStarted(DuelPreparationStartedForTheFirstTime message)
    {
      MissionPeer component1 = message.RequesterPeer.GetComponent<MissionPeer>();
      MissionPeer component2 = message.RequesteePeer.GetComponent<MissionPeer>();
      Action<MissionPeer, MissionPeer, int> theFirstTimeEvent = this.OnDuelPreparationStartedForTheFirstTimeEvent;
      if (theFirstTimeEvent == null)
        return;
      theFirstTimeEvent(component1, component2, message.AreaIndex);
    }

    private void HandleServerEventDuelEnded(DuelEnded message)
    {
      Action<MissionPeer> onDuelEndedEvent = this.OnDuelEndedEvent;
      if (onDuelEndedEvent == null)
        return;
      onDuelEndedEvent(message.WinnerPeer.GetComponent<MissionPeer>());
    }

    private void HandleServerEventDuelRoundEnded(DuelRoundEnded message)
    {
      Action<MissionPeer> duelRoundEndedEvent = this.OnDuelRoundEndedEvent;
      if (duelRoundEndedEvent == null)
        return;
      duelRoundEndedEvent(message.WinnerPeer.GetComponent<MissionPeer>());
    }

    private void HandleServerPointUpdate(DuelPointsUpdateMessage message)
    {
      DuelMissionRepresentative component = message.NetworkCommunicator.GetComponent<DuelMissionRepresentative>();
      component.Bounty = message.Bounty;
      component.Score = message.Score;
      component.NumberOfWins = message.NumberOfWins;
    }

    public void DuelRequested(Agent requesterAgent, TroopType selectedAreaTroopType)
    {
      this._requesters.Add(new Tuple<MissionPeer, MissionTime>(requesterAgent.MissionPeer, MissionTime.Now + MissionTime.Seconds(10f)));
      switch (this.PlayerType)
      {
        case MissionRepresentativeBase.PlayerTypes.Bot:
          this._missionMultiplayerDuel.DuelRequestAccepted(requesterAgent, this.ControlledAgent);
          break;
        case MissionRepresentativeBase.PlayerTypes.Client:
          if (this.IsMine)
          {
            Action<MissionPeer, TroopType> duelRequestedEvent = this.OnDuelRequestedEvent;
            if (duelRequestedEvent == null)
              break;
            duelRequestedEvent(requesterAgent.MissionPeer, selectedAreaTroopType);
            break;
          }
          GameNetwork.BeginModuleEventAsServer(this.Peer);
          GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.DuelRequest(requesterAgent.Index, this.ControlledAgent.Index, selectedAreaTroopType));
          GameNetwork.EndModuleEventAsServer();
          break;
        case MissionRepresentativeBase.PlayerTypes.Server:
          Action<MissionPeer, TroopType> duelRequestedEvent1 = this.OnDuelRequestedEvent;
          if (duelRequestedEvent1 == null)
            break;
          duelRequestedEvent1(requesterAgent.MissionPeer, selectedAreaTroopType);
          break;
        default:
          throw new ArgumentOutOfRangeException();
      }
    }

    public bool CheckHasRequestFromAndRemoveRequestIfNeeded(MissionPeer requestOwner)
    {
      if (requestOwner != null && requestOwner.Representative == this)
      {
        this._requesters.Clear();
        return false;
      }
      Tuple<MissionPeer, MissionTime> tuple = this._requesters.FirstOrDefault<Tuple<MissionPeer, MissionTime>>((Func<Tuple<MissionPeer, MissionTime>, bool>) (req => req.Item1 == requestOwner));
      if (tuple == null)
        return false;
      if (requestOwner.ControlledAgent == null || !requestOwner.ControlledAgent.IsActive())
      {
        this._requesters.Remove(tuple);
        return false;
      }
      if (!tuple.Item2.IsPast)
        return true;
      this._requesters.Remove(tuple);
      return false;
    }

    public void OnDuelPreparation(MissionPeer requesterPeer, MissionPeer requesteePeer)
    {
      switch (this.PlayerType)
      {
        case MissionRepresentativeBase.PlayerTypes.Client:
          if (this.IsMine)
          {
            Action<MissionPeer, int> prepStartedEvent = this.OnDuelPrepStartedEvent;
            if (prepStartedEvent != null)
            {
              prepStartedEvent(this.MissionPeer == requesterPeer ? requesteePeer : requesterPeer, 3);
              break;
            }
            break;
          }
          GameNetwork.BeginModuleEventAsServer(this.Peer);
          GameNetwork.WriteMessage((GameNetworkMessage) new DuelSessionStarted(requesterPeer.GetNetworkPeer(), requesteePeer.GetNetworkPeer()));
          GameNetwork.EndModuleEventAsServer();
          break;
        case MissionRepresentativeBase.PlayerTypes.Server:
          Action<MissionPeer, int> prepStartedEvent1 = this.OnDuelPrepStartedEvent;
          if (prepStartedEvent1 != null)
          {
            prepStartedEvent1(this.MissionPeer == requesterPeer ? requesteePeer : requesterPeer, 3);
            break;
          }
          break;
      }
      Tuple<MissionPeer, MissionTime> tuple = this._requesters.FirstOrDefault<Tuple<MissionPeer, MissionTime>>((Func<Tuple<MissionPeer, MissionTime>, bool>) (req => req.Item1 == requesterPeer));
      if (tuple == null)
        return;
      this._requesters.Remove(tuple);
    }

    public void OnObjectFocused(IFocusable focusedObject) => this._focusedObject = focusedObject;

    public void OnObjectFocusLost() => this._focusedObject = (IFocusable) null;

    public override void OnAgentSpawned()
    {
      if (this.ControlledAgent.Team == null || this.ControlledAgent.Team.Side != BattleSideEnum.Attacker)
        return;
      Action withoutDuelEvent = this.OnAgentSpawnedWithoutDuelEvent;
      if (withoutDuelEvent == null)
        return;
      withoutDuelEvent();
    }

    public void ResetBountyAndNumberOfWins()
    {
      this.Bounty = 0;
      this.NumberOfWins = 0;
    }

    public void OnDuelWon(float gainedScore)
    {
      this.Bounty += (int) ((double) gainedScore / 5.0);
      this.Score += (int) gainedScore;
      ++this.NumberOfWins;
    }
  }
}
