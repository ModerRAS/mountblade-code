// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.LobbyNetworkComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class LobbyNetworkComponent : UdpNetworkComponent
  {
    public const int MaxForcedAvatarIndex = 100;

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (!GameNetwork.IsClientOrReplay)
        return;
      registerer.RegisterBaseHandler<InitializeLobbyPeer>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventInitializeLobbyPeer));
    }

    private void HandleServerEventInitializeLobbyPeer(GameNetworkMessage baseMessage)
    {
      InitializeLobbyPeer initializeLobbyPeer = (InitializeLobbyPeer) baseMessage;
      NetworkCommunicator peer = initializeLobbyPeer.Peer;
      VirtualPlayer virtualPlayer = peer.VirtualPlayer;
      virtualPlayer.Id = initializeLobbyPeer.ProvidedId;
      virtualPlayer.IsFemale = initializeLobbyPeer.IsFemale;
      virtualPlayer.BannerCode = initializeLobbyPeer.BannerCode;
      virtualPlayer.BodyProperties = initializeLobbyPeer.BodyProperties;
      virtualPlayer.ChosenBadgeIndex = initializeLobbyPeer.ChosenBadgeIndex;
      peer.ForcedAvatarIndex = initializeLobbyPeer.ForcedAvatarIndex;
    }

    public override void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      PlayerData parameter1 = networkPeer.PlayerConnectionInfo.GetParameter<PlayerData>("PlayerData");
      Dictionary<int, List<int>> parameter2 = networkPeer.PlayerConnectionInfo.GetParameter<Dictionary<int, List<int>>>("UsedCosmetics");
      VirtualPlayer virtualPlayer = networkPeer.VirtualPlayer;
      virtualPlayer.Id = parameter1.PlayerId;
      virtualPlayer.BannerCode = parameter1.Sigil;
      virtualPlayer.BodyProperties = parameter1.BodyProperties;
      virtualPlayer.IsFemale = parameter1.IsFemale;
      virtualPlayer.ChosenBadgeIndex = parameter1.ShownBadgeIndex;
      virtualPlayer.UsedCosmetics = parameter2;
      networkPeer.IsMuted = parameter1.IsMuted;
    }

    public override void HandleNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      VirtualPlayer virtualPlayer = networkPeer.VirtualPlayer;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new InitializeLobbyPeer(networkPeer, virtualPlayer, -1));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord | GameNetwork.EventBroadcastFlags.DontSendToPeers);
      foreach (NetworkCommunicator disconnectedPeer in GameNetwork.NetworkPeersIncludingDisconnectedPeers)
      {
        if (disconnectedPeer.IsSynchronized || disconnectedPeer == networkPeer)
        {
          bool flag = GameNetwork.VirtualPlayers[disconnectedPeer.VirtualPlayer.Index] != disconnectedPeer.VirtualPlayer;
          if (disconnectedPeer != networkPeer && !flag && disconnectedPeer != GameNetwork.MyPeer)
          {
            GameNetwork.BeginModuleEventAsServer(disconnectedPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new InitializeLobbyPeer(networkPeer, virtualPlayer, -1));
            GameNetwork.EndModuleEventAsServer();
          }
          if (!networkPeer.IsServerPeer)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new InitializeLobbyPeer(disconnectedPeer, disconnectedPeer.VirtualPlayer, -1));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
    }

    public override void HandleLateNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
    }

    public override void HandlePlayerDisconnect(NetworkCommunicator networkPeer)
    {
    }

    public override void OnUdpNetworkHandlerTick(float dt)
    {
    }
  }
}
