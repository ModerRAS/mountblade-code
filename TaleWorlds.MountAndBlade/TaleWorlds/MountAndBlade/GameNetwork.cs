// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.GameNetwork
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class GameNetwork
  {
    public const int MaxAutomatedBattleIndex = 10;
    public const int MaxPlayerCount = 1023;
    private static IGameNetworkHandler _handler;
    public static int ClientPeerIndex;
    private const MultiplayerMessageFilter MultiplayerLogging = MultiplayerMessageFilter.All;
    private static Dictionary<System.Type, int> _gameNetworkMessageTypesAll;
    private static Dictionary<System.Type, int> _gameNetworkMessageTypesFromClient;
    private static List<System.Type> _gameNetworkMessageIdsFromClient;
    private static Dictionary<System.Type, int> _gameNetworkMessageTypesFromServer;
    private static List<System.Type> _gameNetworkMessageIdsFromServer;
    private static Dictionary<int, List<object>> _fromClientMessageHandlers;
    private static Dictionary<int, List<object>> _fromServerMessageHandlers;
    private static Dictionary<int, List<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>>> _fromClientBaseMessageHandlers;
    private static Dictionary<int, List<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>>> _fromServerBaseMessageHandlers;
    private static List<System.Type> _synchedMissionObjectClassTypes;

    public static bool IsServer
    {
      get
      {
        return MBCommon.CurrentGameType == MBCommon.GameType.MultiServer || MBCommon.CurrentGameType == MBCommon.GameType.MultiClientServer;
      }
    }

    public static bool IsServerOrRecorder
    {
      get => GameNetwork.IsServer || MBCommon.CurrentGameType == MBCommon.GameType.SingleRecord;
    }

    public static bool IsClient => MBCommon.CurrentGameType == MBCommon.GameType.MultiClient;

    public static bool IsReplay => MBCommon.CurrentGameType == MBCommon.GameType.SingleReplay;

    public static bool IsClientOrReplay => GameNetwork.IsClient || GameNetwork.IsReplay;

    public static bool IsDedicatedServer => false;

    public static bool MultiplayerDisabled => false;

    public static bool IsMultiplayer => GameNetwork.IsServer || GameNetwork.IsClient;

    public static bool IsMultiplayerOrReplay => GameNetwork.IsMultiplayer || GameNetwork.IsReplay;

    public static bool IsSessionActive
    {
      get => GameNetwork.IsServerOrRecorder || GameNetwork.IsClientOrReplay;
    }

    public static IEnumerable<NetworkCommunicator> NetworkPeersIncludingDisconnectedPeers
    {
      get
      {
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
          yield return networkPeer;
        for (int i = 0; i < GameNetwork.DisconnectedNetworkPeers.Count; ++i)
          yield return GameNetwork.DisconnectedNetworkPeers[i];
      }
    }

    public static VirtualPlayer[] VirtualPlayers { get; private set; }

    public static List<NetworkCommunicator> NetworkPeers { get; private set; }

    public static List<NetworkCommunicator> DisconnectedNetworkPeers { get; private set; }

    public static int NetworkPeerCount => GameNetwork.NetworkPeers.Count;

    public static bool NetworkPeersValid => GameNetwork.NetworkPeers != null;

    private static void AddNetworkPeer(NetworkCommunicator networkPeer)
    {
      GameNetwork.NetworkPeers.Add(networkPeer);
      Debug.Print("AddNetworkPeer: " + networkPeer.UserName, debugFilter: 17179869184UL);
    }

    private static void RemoveNetworkPeer(NetworkCommunicator networkPeer)
    {
      Debug.Print("RemoveNetworkPeer: " + networkPeer.UserName, debugFilter: 17179869184UL);
      GameNetwork.NetworkPeers.Remove(networkPeer);
    }

    private static void AddToDisconnectedPeers(NetworkCommunicator networkPeer)
    {
      Debug.Print("AddToDisconnectedPeers: " + networkPeer.UserName, debugFilter: 17179869184UL);
      GameNetwork.DisconnectedNetworkPeers.Add(networkPeer);
    }

    public static void ClearAllPeers()
    {
      if (GameNetwork.VirtualPlayers == null)
        return;
      for (int index = 0; index < GameNetwork.VirtualPlayers.Length; ++index)
        GameNetwork.VirtualPlayers[index] = (VirtualPlayer) null;
      GameNetwork.NetworkPeers.Clear();
      GameNetwork.DisconnectedNetworkPeers.Clear();
    }

    public static NetworkCommunicator FindNetworkPeer(int index)
    {
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
      {
        if (networkPeer.Index == index)
          return networkPeer;
      }
      return (NetworkCommunicator) null;
    }

    public static void Initialize(IGameNetworkHandler handler)
    {
      GameNetwork._handler = handler;
      GameNetwork.VirtualPlayers = new VirtualPlayer[1023];
      GameNetwork.NetworkPeers = new List<NetworkCommunicator>();
      GameNetwork.DisconnectedNetworkPeers = new List<NetworkCommunicator>();
      MBNetwork.Initialize((INetworkCommunication) new NetworkCommunication());
      GameNetwork.NetworkComponents = new List<UdpNetworkComponent>();
      GameNetwork.NetworkHandlers = new List<IUdpNetworkHandler>();
      GameNetwork._handler.OnInitialize();
    }

    internal static void Tick(float dt)
    {
      int index = 0;
      try
      {
        for (index = 0; index < GameNetwork.NetworkHandlers.Count; ++index)
          GameNetwork.NetworkHandlers[index].OnUdpNetworkHandlerTick(dt);
      }
      catch (Exception ex)
      {
        if (GameNetwork.NetworkHandlers.Count > 0 && index < GameNetwork.NetworkHandlers.Count && GameNetwork.NetworkHandlers[index] != null)
          Debug.Print("Exception On Network Component: " + GameNetwork.NetworkHandlers[index].ToString());
        Debug.Print(ex.StackTrace);
        Debug.Print(ex.Message);
      }
    }

    private static void StartMultiplayer()
    {
      VirtualPlayer.Reset();
      GameNetwork._handler.OnStartMultiplayer();
    }

    public static void EndMultiplayer()
    {
      GameNetwork._handler.OnEndMultiplayer();
      for (int index = GameNetwork.NetworkComponents.Count - 1; index >= 0; --index)
        GameNetwork.DestroyComponent(GameNetwork.NetworkComponents[index]);
      for (int index = GameNetwork.NetworkHandlers.Count - 1; index >= 0; --index)
        GameNetwork.RemoveNetworkHandler(GameNetwork.NetworkHandlers[index]);
      if (GameNetwork.IsServer)
        GameNetwork.TerminateServerSide();
      if (GameNetwork.IsClientOrReplay)
        GameNetwork.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Remove);
      if (GameNetwork.IsClient)
        GameNetwork.TerminateClientSide();
      Debug.Print("Clearing peers list with count " + (object) GameNetwork.NetworkPeerCount);
      GameNetwork.ClearAllPeers();
      VirtualPlayer.Reset();
      GameNetwork.MyPeer = (NetworkCommunicator) null;
      Debug.Print("NetworkManager::HandleMultiplayerEnd");
    }

    [MBCallback]
    internal static void HandleRemovePlayer(MBNetworkPeer peer, bool isTimedOut)
    {
      DisconnectInfo disconnectInfo = peer.NetworkPeer.PlayerConnectionInfo.GetParameter<DisconnectInfo>("DisconnectInfo");
      if (disconnectInfo == null)
        disconnectInfo = new DisconnectInfo()
        {
          Type = DisconnectType.QuitFromGame
        };
      DisconnectInfo parameter = disconnectInfo;
      parameter.Type = isTimedOut ? DisconnectType.TimedOut : parameter.Type;
      peer.NetworkPeer.PlayerConnectionInfo.AddParameter("DisconnectInfo", (object) parameter);
      GameNetwork.HandleRemovePlayerInternal(peer.NetworkPeer, peer.NetworkPeer.IsSynchronized && MultiplayerIntermissionVotingManager.Instance.CurrentVoteState == MultiplayerIntermissionState.Idle);
    }

    internal static void HandleRemovePlayerInternal(
      NetworkCommunicator networkPeer,
      bool isDisconnected)
    {
      if (GameNetwork.IsClient && networkPeer.IsMine)
      {
        GameNetwork.HandleDisconnect();
      }
      else
      {
        GameNetwork._handler.OnPlayerDisconnectedFromServer(networkPeer);
        if (GameNetwork.IsServer)
        {
          foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
            networkHandler.HandleEarlyPlayerDisconnect(networkPeer);
          foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
            networkHandler.HandlePlayerDisconnect(networkPeer);
        }
        foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
          networkHandler.OnPlayerDisconnectedFromServer(networkPeer);
        GameNetwork.RemoveNetworkPeer(networkPeer);
        if (isDisconnected)
          GameNetwork.AddToDisconnectedPeers(networkPeer);
        GameNetwork.VirtualPlayers[networkPeer.VirtualPlayer.Index] = (VirtualPlayer) null;
        if (!GameNetwork.IsServer)
          return;
        foreach (NetworkCommunicator networkPeer1 in GameNetwork.NetworkPeers)
        {
          if (!networkPeer1.IsServerPeer)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer1);
            GameNetwork.WriteMessage((GameNetworkMessage) new DeletePlayer(networkPeer.Index, isDisconnected));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
    }

    [MBCallback]
    internal static void HandleDisconnect()
    {
      GameNetwork._handler.OnDisconnectedFromServer();
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.OnDisconnectedFromServer();
      GameNetwork.MyPeer = (NetworkCommunicator) null;
    }

    public static void StartReplay() => GameNetwork._handler.OnStartReplay();

    public static void EndReplay() => GameNetwork._handler.OnEndReplay();

    public static void PreStartMultiplayerOnServer()
    {
      MBCommon.CurrentGameType = GameNetwork.IsDedicatedServer ? MBCommon.GameType.MultiServer : MBCommon.GameType.MultiClientServer;
      GameNetwork.ClientPeerIndex = -1;
    }

    public static void StartMultiplayerOnServer(int port)
    {
      Debug.Print(nameof (StartMultiplayerOnServer));
      GameNetwork.PreStartMultiplayerOnServer();
      GameNetwork.InitializeServerSide(port);
      GameNetwork.StartMultiplayer();
    }

    [MBCallback]
    internal static bool HandleNetworkPacketAsServer(MBNetworkPeer networkPeer)
    {
      return GameNetwork.HandleNetworkPacketAsServer(networkPeer.NetworkPeer);
    }

    internal static bool HandleNetworkPacketAsServer(NetworkCommunicator networkPeer)
    {
      if (networkPeer == null)
      {
        Debug.Print("networkPeer == null");
        return false;
      }
      bool bufferReadValid = true;
      try
      {
        int num1 = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.NetworkComponentEventTypeFromClientCompressionInfo, ref bufferReadValid);
        if (bufferReadValid)
        {
          if (num1 >= 0 && num1 < GameNetwork._gameNetworkMessageIdsFromClient.Count)
          {
            GameNetworkMessage instance = Activator.CreateInstance(GameNetwork._gameNetworkMessageIdsFromClient[num1]) as GameNetworkMessage;
            instance.MessageId = num1;
            bufferReadValid = instance.Read();
            if (bufferReadValid)
            {
              bool flag1 = false;
              bool flag2 = true;
              List<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>> messageHandlerDelegateList;
              if (GameNetwork._fromClientBaseMessageHandlers.TryGetValue(num1, out messageHandlerDelegateList))
              {
                foreach (GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage> messageHandlerDelegate in messageHandlerDelegateList)
                {
                  bufferReadValid = bufferReadValid && messageHandlerDelegate(networkPeer, instance);
                  if (!bufferReadValid)
                    break;
                }
                flag2 = false;
                flag1 = messageHandlerDelegateList.Count != 0;
              }
              List<object> objectList;
              if (GameNetwork._fromClientMessageHandlers.TryGetValue(num1, out objectList))
              {
                foreach (object obj in objectList)
                {
                  Delegate method = obj as Delegate;
                  int num2;
                  if (bufferReadValid)
                    num2 = (bool) method.DynamicInvokeWithLog((object) networkPeer, (object) instance) ? 1 : 0;
                  else
                    num2 = 0;
                  bufferReadValid = num2 != 0;
                  if (!bufferReadValid)
                    break;
                }
                flag2 = false;
                flag1 = flag1 || objectList.Count != 0;
              }
              if (flag2)
              {
                Debug.FailedAssert("Unknown network messageId " + (object) instance, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\GameNetwork.cs", nameof (HandleNetworkPacketAsServer), 765);
                bufferReadValid = false;
              }
              else if (!flag1)
                Debug.Print("Handler not found for network message " + (object) instance, debugFilter: 17179869184UL);
            }
          }
          else
            Debug.Print("Handler not found for network message " + num1.ToString(), debugFilter: 17179869184UL);
        }
      }
      catch (Exception ex)
      {
        Debug.Print("error " + ex.Message);
        return false;
      }
      return bufferReadValid;
    }

    [MBCallback]
    public static void HandleConsoleCommand(string command)
    {
      if (GameNetwork._handler == null)
        return;
      GameNetwork._handler.OnHandleConsoleCommand(command);
    }

    private static void InitializeServerSide(int port)
    {
      MBAPI.IMBNetwork.InitializeServerSide(port);
    }

    private static void TerminateServerSide()
    {
      MBAPI.IMBNetwork.TerminateServerSide();
      if (GameNetwork.IsDedicatedServer)
        return;
      MBCommon.CurrentGameType = MBCommon.GameType.Single;
    }

    private static void PrepareNewUdpSession(int peerIndex, int sessionKey)
    {
      MBAPI.IMBNetwork.PrepareNewUdpSession(peerIndex, sessionKey);
    }

    public static string GetActiveUdpSessionsIpAddress()
    {
      return MBAPI.IMBNetwork.GetActiveUdpSessionsIpAddress();
    }

    public static ICommunicator AddNewPlayerOnServer(
      PlayerConnectionInfo playerConnectionInfo,
      bool serverPeer,
      bool isAdmin)
    {
      bool flag = playerConnectionInfo == null;
      int num = flag ? MBAPI.IMBNetwork.AddNewBotOnServer() : MBAPI.IMBNetwork.AddNewPlayerOnServer(serverPeer);
      Debug.Print("AddNewPlayerOnServer: " + playerConnectionInfo.Name + " index: " + (object) num, debugFilter: 17179869184UL);
      if (num < 0)
        return (ICommunicator) null;
      int sessionKey = 0;
      if (!serverPeer)
        sessionKey = GameNetwork.GetSessionKeyForPlayer();
      int disconnectedPeerIndex = -1;
      ICommunicator communicator = (ICommunicator) null;
      if (flag)
      {
        communicator = (ICommunicator) DummyCommunicator.CreateAsServer(num, "");
      }
      else
      {
        for (int index = 0; index < GameNetwork.DisconnectedNetworkPeers.Count; ++index)
        {
          PlayerData parameter = playerConnectionInfo.GetParameter<PlayerData>("PlayerData");
          if (parameter != null && GameNetwork.DisconnectedNetworkPeers[index].VirtualPlayer.Id == parameter.PlayerId)
          {
            disconnectedPeerIndex = index;
            communicator = (ICommunicator) GameNetwork.DisconnectedNetworkPeers[index];
            NetworkCommunicator networkPeer = communicator as NetworkCommunicator;
            networkPeer.UpdateIndexForReconnectingPlayer(num);
            networkPeer.UpdateConnectionInfoForReconnect(playerConnectionInfo, isAdmin);
            MBAPI.IMBPeer.SetUserData(num, new MBNetworkPeer(networkPeer));
            Debug.Print("RemoveFromDisconnectedPeers: " + networkPeer.UserName, debugFilter: 17179869184UL);
            GameNetwork.DisconnectedNetworkPeers.RemoveAt(index);
            break;
          }
        }
        if (communicator == null)
          communicator = (ICommunicator) NetworkCommunicator.CreateAsServer(playerConnectionInfo, num, isAdmin);
      }
      GameNetwork.VirtualPlayers[communicator.VirtualPlayer.Index] = communicator.VirtualPlayer;
      if (!flag)
      {
        NetworkCommunicator networkCommunicator = communicator as NetworkCommunicator;
        if (serverPeer && GameNetwork.IsServer)
        {
          GameNetwork.ClientPeerIndex = num;
          GameNetwork.MyPeer = networkCommunicator;
        }
        networkCommunicator.SessionKey = sessionKey;
        networkCommunicator.SetServerPeer(serverPeer);
        GameNetwork.AddNetworkPeer(networkCommunicator);
        playerConnectionInfo.NetworkPeer = networkCommunicator;
        if (!serverPeer)
          GameNetwork.PrepareNewUdpSession(num, sessionKey);
        if (disconnectedPeerIndex < 0)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new CreatePlayer(networkCommunicator.Index, playerConnectionInfo.Name, disconnectedPeerIndex));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord | GameNetwork.EventBroadcastFlags.DontSendToPeers);
        }
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          if (networkPeer != networkCommunicator && networkPeer != GameNetwork.MyPeer)
          {
            GameNetwork.BeginModuleEventAsServer(networkPeer);
            GameNetwork.WriteMessage((GameNetworkMessage) new CreatePlayer(networkCommunicator.Index, playerConnectionInfo.Name, disconnectedPeerIndex));
            GameNetwork.EndModuleEventAsServer();
          }
          if (!serverPeer)
          {
            bool isReceiverPeer = networkPeer == networkCommunicator;
            GameNetwork.BeginModuleEventAsServer(networkCommunicator);
            GameNetwork.WriteMessage((GameNetworkMessage) new CreatePlayer(networkPeer.Index, networkPeer.UserName, -1, isReceiverPeer: isReceiverPeer));
            GameNetwork.EndModuleEventAsServer();
          }
        }
        for (int index = 0; index < GameNetwork.DisconnectedNetworkPeers.Count; ++index)
        {
          NetworkCommunicator disconnectedNetworkPeer = GameNetwork.DisconnectedNetworkPeers[index];
          GameNetwork.BeginModuleEventAsServer(networkCommunicator);
          GameNetwork.WriteMessage((GameNetworkMessage) new CreatePlayer(disconnectedNetworkPeer.Index, disconnectedNetworkPeer.UserName, index, true));
          GameNetwork.EndModuleEventAsServer();
        }
        foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
          networkHandler.HandleNewClientConnect(playerConnectionInfo);
        GameNetwork._handler.OnPlayerConnectedToServer(networkCommunicator);
      }
      return communicator;
    }

    public static GameNetwork.AddPlayersResult AddNewPlayersOnServer(
      PlayerConnectionInfo[] playerConnectionInfos,
      bool serverPeer)
    {
      bool flag = MBAPI.IMBNetwork.CanAddNewPlayersOnServer(playerConnectionInfos.Length);
      NetworkCommunicator[] networkCommunicatorArray = new NetworkCommunicator[playerConnectionInfos.Length];
      if (flag)
      {
        for (int index = 0; index < networkCommunicatorArray.Length; ++index)
        {
          object parameter = playerConnectionInfos[index].GetParameter<object>("IsAdmin");
          bool isAdmin = parameter != null && (bool) parameter;
          ICommunicator communicator = GameNetwork.AddNewPlayerOnServer(playerConnectionInfos[index], serverPeer, isAdmin);
          networkCommunicatorArray[index] = communicator as NetworkCommunicator;
        }
      }
      return new GameNetwork.AddPlayersResult()
      {
        NetworkPeers = networkCommunicatorArray,
        Success = flag
      };
    }

    public static void ClientFinishedLoading(NetworkCommunicator networkPeer)
    {
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.HandleEarlyNewClientAfterLoadingFinished(networkPeer);
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.HandleNewClientAfterLoadingFinished(networkPeer);
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.HandleLateNewClientAfterLoadingFinished(networkPeer);
      networkPeer.IsSynchronized = true;
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.HandleNewClientAfterSynchronized(networkPeer);
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.HandleLateNewClientAfterSynchronized(networkPeer);
    }

    public static void BeginModuleEventAsClient()
    {
      MBAPI.IMBNetwork.BeginModuleEventAsClient(true);
    }

    public static void EndModuleEventAsClient() => MBAPI.IMBNetwork.EndModuleEventAsClient(true);

    public static void BeginModuleEventAsClientUnreliable()
    {
      MBAPI.IMBNetwork.BeginModuleEventAsClient(false);
    }

    public static void EndModuleEventAsClientUnreliable()
    {
      MBAPI.IMBNetwork.EndModuleEventAsClient(false);
    }

    public static void BeginModuleEventAsServer(NetworkCommunicator communicator)
    {
      GameNetwork.BeginModuleEventAsServer(communicator.VirtualPlayer);
    }

    public static void BeginModuleEventAsServerUnreliable(NetworkCommunicator communicator)
    {
      GameNetwork.BeginModuleEventAsServerUnreliable(communicator.VirtualPlayer);
    }

    public static void BeginModuleEventAsServer(VirtualPlayer peer)
    {
      MBAPI.IMBPeer.BeginModuleEvent(peer.Index, true);
    }

    public static void EndModuleEventAsServer() => MBAPI.IMBPeer.EndModuleEvent(true);

    public static void BeginModuleEventAsServerUnreliable(VirtualPlayer peer)
    {
      MBAPI.IMBPeer.BeginModuleEvent(peer.Index, false);
    }

    public static void EndModuleEventAsServerUnreliable() => MBAPI.IMBPeer.EndModuleEvent(false);

    public static void BeginBroadcastModuleEvent() => MBAPI.IMBNetwork.BeginBroadcastModuleEvent();

    public static void EndBroadcastModuleEvent(
      GameNetwork.EventBroadcastFlags broadcastFlags,
      NetworkCommunicator targetPlayer = null)
    {
      int targetPlayer1 = targetPlayer != null ? targetPlayer.Index : -1;
      MBAPI.IMBNetwork.EndBroadcastModuleEvent((int) broadcastFlags, targetPlayer1, true);
    }

    public static double ElapsedTimeSinceLastUdpPacketArrived()
    {
      return MBAPI.IMBNetwork.ElapsedTimeSinceLastUdpPacketArrived();
    }

    public static void EndBroadcastModuleEventUnreliable(
      GameNetwork.EventBroadcastFlags broadcastFlags,
      NetworkCommunicator targetPlayer = null)
    {
      int targetPlayer1 = targetPlayer != null ? targetPlayer.Index : -1;
      MBAPI.IMBNetwork.EndBroadcastModuleEvent((int) broadcastFlags, targetPlayer1, false);
    }

    public static void UnSynchronizeEveryone()
    {
      Debug.Print("UnSynchronizeEveryone is called!", debugFilter: 17179869184UL);
      foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        networkPeer.IsSynchronized = false;
      foreach (IUdpNetworkHandler networkHandler in GameNetwork.NetworkHandlers)
        networkHandler.OnEveryoneUnSynchronized();
    }

    public static void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode mode)
    {
      GameNetwork.NetworkMessageHandlerRegisterer handlerRegisterer = new GameNetwork.NetworkMessageHandlerRegisterer(mode);
      handlerRegisterer.Register<CreatePlayer>(new GameNetworkMessage.ServerMessageHandlerDelegate<CreatePlayer>(GameNetwork.HandleServerEventCreatePlayer));
      handlerRegisterer.Register<DeletePlayer>(new GameNetworkMessage.ServerMessageHandlerDelegate<DeletePlayer>(GameNetwork.HandleServerEventDeletePlayer));
    }

    public static void StartMultiplayerOnClient(
      string serverAddress,
      int port,
      int sessionKey,
      int playerIndex)
    {
      Debug.Print(nameof (StartMultiplayerOnClient));
      MBCommon.CurrentGameType = MBCommon.GameType.MultiClient;
      GameNetwork.ClientPeerIndex = playerIndex;
      GameNetwork.InitializeClientSide(serverAddress, port, sessionKey, playerIndex);
      GameNetwork.StartMultiplayer();
      GameNetwork.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add);
    }

    [MBCallback]
    internal static bool HandleNetworkPacketAsClient()
    {
      bool bufferReadValid = true;
      int num = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.NetworkComponentEventTypeFromServerCompressionInfo, ref bufferReadValid);
      if (bufferReadValid && num >= 0 && num < GameNetwork._gameNetworkMessageIdsFromServer.Count)
      {
        GameNetworkMessage instance = Activator.CreateInstance(GameNetwork._gameNetworkMessageIdsFromServer[num]) as GameNetworkMessage;
        instance.MessageId = num;
        Debug.Print("Reading message: " + instance.GetType().Name, debugFilter: 17179869184UL);
        bufferReadValid = instance.Read();
        if (bufferReadValid)
        {
          if (!NetworkMain.GameClient.IsInGame && !GameNetwork.IsReplay && !NetworkMain.CommunityClient.IsInGame)
          {
            Debug.Print("ignoring post mission message: " + instance.GetType().Name, debugFilter: 17179869184UL);
          }
          else
          {
            bool flag1 = false;
            bool flag2 = true;
            if ((instance.GetLogFilter() & MultiplayerMessageFilter.All) != MultiplayerMessageFilter.None)
            {
              if (GameNetworkMessage.IsClientMissionOver)
                Debug.Print("WARNING: Entering message processing while client mission is over");
              Debug.Print("Processing message: " + instance.GetType().Name + ": " + instance.GetLogFormat(), debugFilter: 17179869184UL);
            }
            List<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>> messageHandlerDelegateList;
            if (GameNetwork._fromServerBaseMessageHandlers.TryGetValue(num, out messageHandlerDelegateList))
            {
              foreach (GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage> messageHandlerDelegate in messageHandlerDelegateList)
              {
                try
                {
                  messageHandlerDelegate(instance);
                }
                catch
                {
                  Debug.Print("Exception in handler of " + num.ToString(), debugFilter: 17179869184UL);
                  Debug.Print("Exception in handler of " + instance.GetType().Name, color: Debug.DebugColor.Red, debugFilter: 17179869184UL);
                }
              }
              flag2 = false;
              flag1 = messageHandlerDelegateList.Count != 0;
            }
            List<object> objectList;
            if (GameNetwork._fromServerMessageHandlers.TryGetValue(num, out objectList))
            {
              foreach (object method in objectList)
                (method as Delegate).DynamicInvokeWithLog((object) instance);
              flag2 = false;
              flag1 = flag1 || objectList.Count != 0;
            }
            if (flag2)
            {
              Debug.Print("Invalid messageId " + num.ToString(), debugFilter: 17179869184UL);
              Debug.Print("Invalid messageId " + instance.GetType().Name, debugFilter: 17179869184UL);
            }
            else if (!flag1)
              Debug.Print("No message handler found for " + instance.GetType().Name, color: Debug.DebugColor.Red, debugFilter: 17179869184UL);
          }
        }
        else
          Debug.Print("Invalid message read for: " + instance.GetType().Name, debugFilter: 17179869184UL);
      }
      else
        Debug.Print("Invalid message id read: " + (object) num, debugFilter: 17179869184UL);
      return bufferReadValid;
    }

    private static int GetSessionKeyForPlayer()
    {
      return new Random(DateTime.Now.Millisecond).Next(1, 4001);
    }

    public static NetworkCommunicator HandleNewClientConnect(
      PlayerConnectionInfo playerConnectionInfo,
      bool isAdmin)
    {
      NetworkCommunicator networkPeer = GameNetwork.AddNewPlayerOnServer(playerConnectionInfo, false, isAdmin) as NetworkCommunicator;
      GameNetwork._handler.OnNewPlayerConnect(playerConnectionInfo, networkPeer);
      return networkPeer;
    }

    public static GameNetwork.AddPlayersResult HandleNewClientsConnect(
      PlayerConnectionInfo[] playerConnectionInfos,
      bool isAdmin)
    {
      GameNetwork.AddPlayersResult addPlayersResult = GameNetwork.AddNewPlayersOnServer(playerConnectionInfos, isAdmin);
      if (addPlayersResult.Success)
      {
        for (int index = 0; index < playerConnectionInfos.Length; ++index)
          GameNetwork._handler.OnNewPlayerConnect(playerConnectionInfos[index], addPlayersResult.NetworkPeers[index]);
      }
      return addPlayersResult;
    }

    public static void AddNetworkPeerToDisconnectAsServer(NetworkCommunicator networkPeer)
    {
      Debug.Print("adding peer to disconnect index:" + (object) networkPeer.Index, debugFilter: 17179869184UL);
      GameNetwork.AddPeerToDisconnect(networkPeer);
      GameNetwork.BeginModuleEventAsServer(networkPeer);
      GameNetwork.WriteMessage((GameNetworkMessage) new DeletePlayer(networkPeer.Index, false));
      GameNetwork.EndModuleEventAsServer();
    }

    private static void HandleServerEventCreatePlayer(CreatePlayer message)
    {
      int playerIndex = message.PlayerIndex;
      string playerName = message.PlayerName;
      int num = message.IsReceiverPeer ? 1 : 0;
      NetworkCommunicator networkCommunicator;
      if (num != 0 || message.IsNonExistingDisconnectedPeer || message.DisconnectedPeerIndex < 0)
      {
        networkCommunicator = NetworkCommunicator.CreateAsClient(playerName, playerIndex);
      }
      else
      {
        networkCommunicator = GameNetwork.DisconnectedNetworkPeers[message.DisconnectedPeerIndex];
        networkCommunicator.UpdateIndexForReconnectingPlayer(message.PlayerIndex);
        Debug.Print("RemoveFromDisconnectedPeers: " + networkCommunicator.UserName, debugFilter: 17179869184UL);
        GameNetwork.DisconnectedNetworkPeers.RemoveAt(message.DisconnectedPeerIndex);
      }
      if (num != 0)
        GameNetwork.MyPeer = networkCommunicator;
      if (message.IsNonExistingDisconnectedPeer)
      {
        GameNetwork.AddToDisconnectedPeers(networkCommunicator);
      }
      else
      {
        GameNetwork.VirtualPlayers[networkCommunicator.VirtualPlayer.Index] = networkCommunicator.VirtualPlayer;
        GameNetwork.AddNetworkPeer(networkCommunicator);
      }
      GameNetwork._handler.OnPlayerConnectedToServer(networkCommunicator);
    }

    private static void HandleServerEventDeletePlayer(DeletePlayer message)
    {
      NetworkCommunicator networkPeer1 = GameNetwork.NetworkPeers.FirstOrDefault<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (networkPeer => networkPeer.Index == message.PlayerIndex));
      if (networkPeer1 == null)
        return;
      GameNetwork.HandleRemovePlayerInternal(networkPeer1, message.AddToDisconnectList);
    }

    public static void InitializeClientSide(
      string serverAddress,
      int port,
      int sessionKey,
      int playerIndex)
    {
      MBAPI.IMBNetwork.InitializeClientSide(serverAddress, port, sessionKey, playerIndex);
    }

    public static void TerminateClientSide()
    {
      MBAPI.IMBNetwork.TerminateClientSide();
      MBCommon.CurrentGameType = MBCommon.GameType.Single;
    }

    public static System.Type GetSynchedMissionObjectReadableRecordTypeFromIndex(int typeIndex)
    {
      return GameNetwork._synchedMissionObjectClassTypes[typeIndex];
    }

    public static int GetSynchedMissionObjectReadableRecordIndexFromType(System.Type type)
    {
      for (int index = 0; index < GameNetwork._synchedMissionObjectClassTypes.Count; ++index)
      {
        System.Type missionObjectClassType = GameNetwork._synchedMissionObjectClassTypes[index];
        DefineSynchedMissionObjectType customAttribute1 = missionObjectClassType.GetCustomAttribute<DefineSynchedMissionObjectType>();
        DefineSynchedMissionObjectTypeForMod customAttribute2 = missionObjectClassType.GetCustomAttribute<DefineSynchedMissionObjectTypeForMod>();
        System.Type type1 = customAttribute1?.Type;
        if ((object) type1 == null)
          type1 = customAttribute2?.Type;
        System.Type type2 = type1;
        for (System.Type type3 = type; type3 != (System.Type) null; type3 = type3.BaseType)
        {
          if (type3 == type2)
            return index;
        }
      }
      return -1;
    }

    public static void DestroyComponent(UdpNetworkComponent udpNetworkComponent)
    {
      GameNetwork.RemoveNetworkHandler((IUdpNetworkHandler) udpNetworkComponent);
      GameNetwork.NetworkComponents.Remove(udpNetworkComponent);
    }

    public static T AddNetworkComponent<T>() where T : UdpNetworkComponent
    {
      T instance = (T) Activator.CreateInstance(typeof (T), new object[0]);
      GameNetwork.NetworkComponents.Add((UdpNetworkComponent) instance);
      GameNetwork.NetworkHandlers.Add((IUdpNetworkHandler) instance);
      return instance;
    }

    public static void AddNetworkHandler(IUdpNetworkHandler handler)
    {
      GameNetwork.NetworkHandlers.Add(handler);
    }

    public static void RemoveNetworkHandler(IUdpNetworkHandler handler)
    {
      handler.OnUdpNetworkHandlerClose();
      GameNetwork.NetworkHandlers.Remove(handler);
    }

    public static T GetNetworkComponent<T>() where T : UdpNetworkComponent
    {
      foreach (UdpNetworkComponent networkComponent1 in GameNetwork.NetworkComponents)
      {
        if (networkComponent1 is T networkComponent2)
          return networkComponent2;
      }
      return default (T);
    }

    public static List<UdpNetworkComponent> NetworkComponents { get; private set; }

    public static List<IUdpNetworkHandler> NetworkHandlers { get; private set; }

    public static void WriteMessage(GameNetworkMessage message)
    {
      System.Type type = message.GetType();
      message.MessageId = GameNetwork._gameNetworkMessageTypesAll[type];
      message.Write();
    }

    private static void AddServerMessageHandler<T>(
      GameNetworkMessage.ServerMessageHandlerDelegate<T> handler)
      where T : GameNetworkMessage
    {
      int key = GameNetwork._gameNetworkMessageTypesFromServer[typeof (T)];
      GameNetwork._fromServerMessageHandlers[key].Add((object) handler);
    }

    private static void AddServerBaseMessageHandler(
      GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage> handler,
      System.Type messageType)
    {
      int key = GameNetwork._gameNetworkMessageTypesFromServer[messageType];
      GameNetwork._fromServerBaseMessageHandlers[key].Add(handler);
    }

    private static void AddClientMessageHandler<T>(
      GameNetworkMessage.ClientMessageHandlerDelegate<T> handler)
      where T : GameNetworkMessage
    {
      int key = GameNetwork._gameNetworkMessageTypesFromClient[typeof (T)];
      GameNetwork._fromClientMessageHandlers[key].Add((object) handler);
    }

    private static void AddClientBaseMessageHandler(
      GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage> handler,
      System.Type messageType)
    {
      int key = GameNetwork._gameNetworkMessageTypesFromClient[messageType];
      GameNetwork._fromClientBaseMessageHandlers[key].Add(handler);
    }

    private static void RemoveServerMessageHandler<T>(
      GameNetworkMessage.ServerMessageHandlerDelegate<T> handler)
      where T : GameNetworkMessage
    {
      int key = GameNetwork._gameNetworkMessageTypesFromServer[typeof (T)];
      GameNetwork._fromServerMessageHandlers[key].Remove((object) handler);
    }

    private static void RemoveServerBaseMessageHandler(
      GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage> handler,
      System.Type messageType)
    {
      int key = GameNetwork._gameNetworkMessageTypesFromServer[messageType];
      GameNetwork._fromServerBaseMessageHandlers[key].Remove(handler);
    }

    private static void RemoveClientMessageHandler<T>(
      GameNetworkMessage.ClientMessageHandlerDelegate<T> handler)
      where T : GameNetworkMessage
    {
      int key = GameNetwork._gameNetworkMessageTypesFromClient[typeof (T)];
      GameNetwork._fromClientMessageHandlers[key].Remove((object) handler);
    }

    private static void RemoveClientBaseMessageHandler(
      GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage> handler,
      System.Type messageType)
    {
      int key = GameNetwork._gameNetworkMessageTypesFromClient[messageType];
      GameNetwork._fromClientBaseMessageHandlers[key].Remove(handler);
    }

    internal static void FindGameNetworkMessages()
    {
      Debug.Print("Searching Game NetworkMessages Methods", debugFilter: 17179869184UL);
      GameNetwork._fromClientMessageHandlers = new Dictionary<int, List<object>>();
      GameNetwork._fromServerMessageHandlers = new Dictionary<int, List<object>>();
      GameNetwork._fromClientBaseMessageHandlers = new Dictionary<int, List<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>>>();
      GameNetwork._fromServerBaseMessageHandlers = new Dictionary<int, List<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>>>();
      GameNetwork._gameNetworkMessageTypesAll = new Dictionary<System.Type, int>();
      GameNetwork._gameNetworkMessageTypesFromClient = new Dictionary<System.Type, int>();
      GameNetwork._gameNetworkMessageTypesFromServer = new Dictionary<System.Type, int>();
      Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
      List<System.Type> gameNetworkMessagesFromClient = new List<System.Type>();
      List<System.Type> gameNetworkMessagesFromServer = new List<System.Type>();
      foreach (Assembly assembly in assemblies)
      {
        if (GameNetwork.CheckAssemblyForNetworkMessage(assembly))
          GameNetwork.CollectGameNetworkMessagesFromAssembly(assembly, gameNetworkMessagesFromClient, gameNetworkMessagesFromServer);
      }
      gameNetworkMessagesFromClient.Sort((Comparison<System.Type>) ((s1, s2) => s1.FullName.CompareTo(s2.FullName)));
      gameNetworkMessagesFromServer.Sort((Comparison<System.Type>) ((s1, s2) => s1.FullName.CompareTo(s2.FullName)));
      GameNetwork._gameNetworkMessageIdsFromClient = new List<System.Type>(gameNetworkMessagesFromClient.Count);
      for (int index = 0; index < gameNetworkMessagesFromClient.Count; ++index)
      {
        System.Type key = gameNetworkMessagesFromClient[index];
        GameNetwork._gameNetworkMessageIdsFromClient.Add(key);
        GameNetwork._gameNetworkMessageTypesFromClient.Add(key, index);
        GameNetwork._gameNetworkMessageTypesAll.Add(key, index);
        GameNetwork._fromClientMessageHandlers.Add(index, new List<object>());
        GameNetwork._fromClientBaseMessageHandlers.Add(index, new List<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>>());
      }
      GameNetwork._gameNetworkMessageIdsFromServer = new List<System.Type>(gameNetworkMessagesFromServer.Count);
      for (int index = 0; index < gameNetworkMessagesFromServer.Count; ++index)
      {
        System.Type key = gameNetworkMessagesFromServer[index];
        GameNetwork._gameNetworkMessageIdsFromServer.Add(key);
        GameNetwork._gameNetworkMessageTypesFromServer.Add(key, index);
        GameNetwork._gameNetworkMessageTypesAll.Add(key, index);
        GameNetwork._fromServerMessageHandlers.Add(index, new List<object>());
        GameNetwork._fromServerBaseMessageHandlers.Add(index, new List<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>>());
      }
      CompressionBasic.NetworkComponentEventTypeFromClientCompressionInfo = new CompressionInfo.Integer(0, gameNetworkMessagesFromClient.Count - 1, true);
      CompressionBasic.NetworkComponentEventTypeFromServerCompressionInfo = new CompressionInfo.Integer(0, gameNetworkMessagesFromServer.Count - 1, true);
      Debug.Print("Found " + (object) gameNetworkMessagesFromClient.Count + " Client Game Network Messages", debugFilter: 17179869184UL);
      Debug.Print("Found " + (object) gameNetworkMessagesFromServer.Count + " Server Game Network Messages", debugFilter: 17179869184UL);
    }

    internal static void FindSynchedMissionObjectTypes()
    {
      Debug.Print("Searching Game SynchedMissionObjects", debugFilter: 17179869184UL);
      Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
      GameNetwork._synchedMissionObjectClassTypes = new List<System.Type>();
      foreach (Assembly assembly in assemblies)
      {
        if (GameNetwork.CheckAssemblyForNetworkMessage(assembly))
          GameNetwork.CollectSynchedMissionObjectTypesFromAssembly(assembly, GameNetwork._synchedMissionObjectClassTypes);
      }
      GameNetwork._synchedMissionObjectClassTypes.Sort((Comparison<System.Type>) ((s1, s2) => s1.FullName.CompareTo(s2.FullName)));
    }

    private static bool CheckAssemblyForNetworkMessage(Assembly assembly)
    {
      Assembly assembly1 = Assembly.GetAssembly(typeof (GameNetworkMessage));
      if (assembly == assembly1)
        return true;
      foreach (AssemblyName referencedAssembly in assembly.GetReferencedAssemblies())
      {
        if (referencedAssembly.FullName == assembly1.FullName)
          return true;
      }
      return false;
    }

    public static void SetServerBandwidthLimitInMbps(double value)
    {
      MBAPI.IMBNetwork.SetServerBandwidthLimitInMbps(value);
    }

    public static void SetServerTickRate(double value) => MBAPI.IMBNetwork.SetServerTickRate(value);

    public static void SetServerFrameRate(double value)
    {
      MBAPI.IMBNetwork.SetServerFrameRate(value);
    }

    public static void ResetDebugVariables() => MBAPI.IMBNetwork.ResetDebugVariables();

    public static void PrintDebugStats() => MBAPI.IMBNetwork.PrintDebugStats();

    public static float GetAveragePacketLossRatio() => MBAPI.IMBNetwork.GetAveragePacketLossRatio();

    public static void GetDebugUploadsInBits(
      ref GameNetwork.DebugNetworkPacketStatisticsStruct networkStatisticsStruct,
      ref GameNetwork.DebugNetworkPositionCompressionStatisticsStruct posStatisticsStruct)
    {
      MBAPI.IMBNetwork.GetDebugUploadsInBits(ref networkStatisticsStruct, ref posStatisticsStruct);
    }

    public static void PrintReplicationTableStatistics()
    {
      MBAPI.IMBNetwork.PrintReplicationTableStatistics();
    }

    public static void ClearReplicationTableStatistics()
    {
      MBAPI.IMBNetwork.ClearReplicationTableStatistics();
    }

    public static void ResetDebugUploads() => MBAPI.IMBNetwork.ResetDebugUploads();

    public static void ResetMissionData() => MBAPI.IMBNetwork.ResetMissionData();

    private static void AddPeerToDisconnect(NetworkCommunicator networkPeer)
    {
      MBAPI.IMBNetwork.AddPeerToDisconnect(networkPeer.Index);
    }

    public static void InitializeCompressionInfos()
    {
      CompressionBasic.ActionCodeCompressionInfo = new CompressionInfo.Integer(ActionIndexCache.act_none.Index, MBAnimation.GetNumActionCodes() - 1, true);
      CompressionBasic.AnimationIndexCompressionInfo = new CompressionInfo.Integer(0, MBAnimation.GetNumAnimations() - 1, true);
      CompressionBasic.CultureIndexCompressionInfo = new CompressionInfo.Integer(-1, MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>().Count - 1, true);
      CompressionBasic.SoundEventsCompressionInfo = new CompressionInfo.Integer(0, SoundEvent.GetTotalEventCount() - 1, true);
      CompressionMission.ActionSetCompressionInfo = new CompressionInfo.Integer(0, MBActionSet.GetNumberOfActionSets() - 1, true);
      CompressionMission.MonsterUsageSetCompressionInfo = new CompressionInfo.Integer(0, MBActionSet.GetNumberOfMonsterUsageSets() - 1, true);
    }

    [MBCallback]
    internal static void SyncRelevantGameOptionsToServer()
    {
      NetworkMessages.FromClient.SyncRelevantGameOptionsToServer message = new NetworkMessages.FromClient.SyncRelevantGameOptionsToServer();
      message.InitializeOptions();
      GameNetwork.BeginModuleEventAsClient();
      GameNetwork.WriteMessage((GameNetworkMessage) message);
      GameNetwork.EndModuleEventAsClient();
    }

    private static void CollectGameNetworkMessagesFromAssembly(
      Assembly assembly,
      List<System.Type> gameNetworkMessagesFromClient,
      List<System.Type> gameNetworkMessagesFromServer)
    {
      System.Type type1 = typeof (GameNetworkMessage);
      bool? nullable = new bool?();
      List<System.Type> typesSafe = assembly.GetTypesSafe();
      for (int index = 0; index < typesSafe.Count; ++index)
      {
        System.Type type2 = typesSafe[index];
        if (type1.IsAssignableFrom(type2) && type2 != type1 && type2.IsSealed && !(type2.GetConstructor(System.Type.EmptyTypes) == (ConstructorInfo) null))
        {
          DefineGameNetworkMessageType customAttribute1 = type2.GetCustomAttribute<DefineGameNetworkMessageType>();
          if (customAttribute1 != null)
          {
            if ((!nullable.HasValue ? 1 : (!nullable.Value ? 1 : 0)) != 0)
            {
              nullable = new bool?(false);
              switch (customAttribute1.SendType)
              {
                case GameNetworkMessageSendType.FromClient:
                  gameNetworkMessagesFromClient.Add(type2);
                  continue;
                case GameNetworkMessageSendType.FromServer:
                case GameNetworkMessageSendType.DebugFromServer:
                  gameNetworkMessagesFromServer.Add(type2);
                  continue;
                default:
                  continue;
              }
            }
          }
          else
          {
            DefineGameNetworkMessageTypeForMod customAttribute2 = type2.GetCustomAttribute<DefineGameNetworkMessageTypeForMod>();
            if (customAttribute2 != null && (!nullable.HasValue ? 1 : (nullable.Value ? 1 : 0)) != 0)
            {
              nullable = new bool?(true);
              switch (customAttribute2.SendType)
              {
                case GameNetworkMessageSendType.FromClient:
                  gameNetworkMessagesFromClient.Add(type2);
                  continue;
                case GameNetworkMessageSendType.FromServer:
                case GameNetworkMessageSendType.DebugFromServer:
                  gameNetworkMessagesFromServer.Add(type2);
                  continue;
                default:
                  continue;
              }
            }
          }
        }
      }
    }

    private static void CollectSynchedMissionObjectTypesFromAssembly(
      Assembly assembly,
      List<System.Type> synchedMissionObjectClassTypes)
    {
      System.Type type1 = typeof (ISynchedMissionObjectReadableRecord);
      bool? nullable = new bool?();
      List<System.Type> typesSafe = assembly.GetTypesSafe();
      for (int index = 0; index < typesSafe.Count; ++index)
      {
        System.Type type2 = typesSafe[index];
        if (type1.IsAssignableFrom(type2) && type2 != type1)
        {
          if (type2.GetCustomAttribute<DefineSynchedMissionObjectType>() != null)
          {
            if ((!nullable.HasValue ? 1 : (!nullable.Value ? 1 : 0)) != 0)
            {
              nullable = new bool?(false);
              synchedMissionObjectClassTypes.Add(type2);
            }
          }
          else if (type2.GetCustomAttribute<DefineSynchedMissionObjectTypeForMod>() != null && (!nullable.HasValue ? 1 : (nullable.Value ? 1 : 0)) != 0)
          {
            nullable = new bool?(true);
            synchedMissionObjectClassTypes.Add(type2);
          }
        }
      }
    }

    public static NetworkCommunicator MyPeer { get; private set; }

    public static bool IsMyPeerReady
    {
      get => GameNetwork.MyPeer != null && GameNetwork.MyPeer.IsSynchronized;
    }

    public class NetworkMessageHandlerRegisterer
    {
      private readonly GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode _registerMode;

      public NetworkMessageHandlerRegisterer(
        GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode definitionMode)
      {
        this._registerMode = definitionMode;
      }

      public void Register<T>(
        GameNetworkMessage.ServerMessageHandlerDelegate<T> handler)
        where T : GameNetworkMessage
      {
        if (this._registerMode == GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add)
          GameNetwork.AddServerMessageHandler<T>(handler);
        else
          GameNetwork.RemoveServerMessageHandler<T>(handler);
      }

      public void RegisterBaseHandler<T>(
        GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage> handler)
        where T : GameNetworkMessage
      {
        if (this._registerMode == GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add)
          GameNetwork.AddServerBaseMessageHandler(handler, typeof (T));
        else
          GameNetwork.RemoveServerBaseMessageHandler(handler, typeof (T));
      }

      public void Register<T>(
        GameNetworkMessage.ClientMessageHandlerDelegate<T> handler)
        where T : GameNetworkMessage
      {
        if (this._registerMode == GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add)
          GameNetwork.AddClientMessageHandler<T>(handler);
        else
          GameNetwork.RemoveClientMessageHandler<T>(handler);
      }

      public void RegisterBaseHandler<T>(
        GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage> handler)
        where T : GameNetworkMessage
      {
        if (this._registerMode == GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add)
          GameNetwork.AddClientBaseMessageHandler(handler, typeof (T));
        else
          GameNetwork.RemoveClientBaseMessageHandler(handler, typeof (T));
      }

      public enum RegisterMode
      {
        Add,
        Remove,
      }
    }

    public class NetworkMessageHandlerRegistererContainer
    {
      private List<Delegate> _fromClientHandlers;
      private List<Delegate> _fromServerHandlers;
      private List<Tuple<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>, System.Type>> _fromServerBaseHandlers;
      private List<Tuple<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>, System.Type>> _fromClientBaseHandlers;

      public NetworkMessageHandlerRegistererContainer()
      {
        this._fromClientHandlers = new List<Delegate>();
        this._fromServerHandlers = new List<Delegate>();
        this._fromServerBaseHandlers = new List<Tuple<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>, System.Type>>();
        this._fromClientBaseHandlers = new List<Tuple<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>, System.Type>>();
      }

      public void RegisterBaseHandler<T>(
        GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage> handler)
        where T : GameNetworkMessage
      {
        this._fromServerBaseHandlers.Add(new Tuple<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>, System.Type>(handler, typeof (T)));
      }

      public void Register<T>(
        GameNetworkMessage.ServerMessageHandlerDelegate<T> handler)
        where T : GameNetworkMessage
      {
        this._fromServerHandlers.Add((Delegate) handler);
      }

      public void RegisterBaseHandler<T>(
        GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage> handler)
      {
        this._fromClientBaseHandlers.Add(new Tuple<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>, System.Type>(handler, typeof (T)));
      }

      public void Register<T>(
        GameNetworkMessage.ClientMessageHandlerDelegate<T> handler)
        where T : GameNetworkMessage
      {
        this._fromClientHandlers.Add((Delegate) handler);
      }

      public void RegisterMessages()
      {
        if (this._fromServerHandlers.Count > 0 || this._fromServerBaseHandlers.Count > 0)
        {
          foreach (Delegate fromServerHandler in this._fromServerHandlers)
          {
            System.Type genericTypeArgument = fromServerHandler.GetType().GenericTypeArguments[0];
            int key = GameNetwork._gameNetworkMessageTypesFromServer[genericTypeArgument];
            GameNetwork._fromServerMessageHandlers[key].Add((object) fromServerHandler);
          }
          foreach (Tuple<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>, System.Type> serverBaseHandler in this._fromServerBaseHandlers)
          {
            int key = GameNetwork._gameNetworkMessageTypesFromServer[serverBaseHandler.Item2];
            GameNetwork._fromServerBaseMessageHandlers[key].Add(serverBaseHandler.Item1);
          }
        }
        else
        {
          foreach (Delegate fromClientHandler in this._fromClientHandlers)
          {
            System.Type genericTypeArgument = fromClientHandler.GetType().GenericTypeArguments[0];
            int key = GameNetwork._gameNetworkMessageTypesFromClient[genericTypeArgument];
            GameNetwork._fromClientMessageHandlers[key].Add((object) fromClientHandler);
          }
          foreach (Tuple<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>, System.Type> clientBaseHandler in this._fromClientBaseHandlers)
          {
            int key = GameNetwork._gameNetworkMessageTypesFromClient[clientBaseHandler.Item2];
            GameNetwork._fromClientBaseMessageHandlers[key].Add(clientBaseHandler.Item1);
          }
        }
      }

      public void UnregisterMessages()
      {
        if (this._fromServerHandlers.Count > 0 || this._fromServerBaseHandlers.Count > 0)
        {
          foreach (Delegate fromServerHandler in this._fromServerHandlers)
          {
            System.Type genericTypeArgument = fromServerHandler.GetType().GenericTypeArguments[0];
            int key = GameNetwork._gameNetworkMessageTypesFromServer[genericTypeArgument];
            GameNetwork._fromServerMessageHandlers[key].Remove((object) fromServerHandler);
          }
          foreach (Tuple<GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>, System.Type> serverBaseHandler in this._fromServerBaseHandlers)
          {
            int key = GameNetwork._gameNetworkMessageTypesFromServer[serverBaseHandler.Item2];
            GameNetwork._fromServerBaseMessageHandlers[key].Remove(serverBaseHandler.Item1);
          }
        }
        else
        {
          foreach (Delegate fromClientHandler in this._fromClientHandlers)
          {
            System.Type genericTypeArgument = fromClientHandler.GetType().GenericTypeArguments[0];
            int key = GameNetwork._gameNetworkMessageTypesFromClient[genericTypeArgument];
            GameNetwork._fromClientMessageHandlers[key].Remove((object) fromClientHandler);
          }
          foreach (Tuple<GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>, System.Type> clientBaseHandler in this._fromClientBaseHandlers)
          {
            int key = GameNetwork._gameNetworkMessageTypesFromClient[clientBaseHandler.Item2];
            GameNetwork._fromClientBaseMessageHandlers[key].Remove(clientBaseHandler.Item1);
          }
        }
      }
    }

    [Flags]
    public enum EventBroadcastFlags
    {
      None = 0,
      ExcludeTargetPlayer = 1,
      ExcludeNoBloodStainsOption = 2,
      ExcludeNoParticlesOption = 4,
      ExcludeNoSoundOption = 8,
      AddToMissionRecord = 16, // 0x00000010
      IncludeUnsynchronizedClients = 32, // 0x00000020
      ExcludeOtherTeamPlayers = 64, // 0x00000040
      ExcludePeerTeamPlayers = 128, // 0x00000080
      DontSendToPeers = 256, // 0x00000100
    }

    [EngineStruct("Debug_network_position_compression_statistics_struct", false)]
    public struct DebugNetworkPositionCompressionStatisticsStruct
    {
      public int totalPositionUpload;
      public int totalPositionPrecisionBitCount;
      public int totalPositionCoarseBitCountX;
      public int totalPositionCoarseBitCountY;
      public int totalPositionCoarseBitCountZ;
    }

    [EngineStruct("Debug_network_packet_statistics_struct", false)]
    public struct DebugNetworkPacketStatisticsStruct
    {
      public int TotalPackets;
      public int TotalUpload;
      public int TotalConstantsUpload;
      public int TotalReliableEventUpload;
      public int TotalReplicationUpload;
      public int TotalUnreliableEventUpload;
      public int TotalReplicationTableAdderCount;
      public int TotalReplicationTableAdderBitCount;
      public int TotalReplicationTableAdder;
      public double TotalCellPriority;
      public double TotalCellAgentPriority;
      public double TotalCellCellPriority;
      public int TotalCellPriorityChecks;
      public int TotalSentCellCount;
      public int TotalNotSentCellCount;
      public int TotalReplicationWriteCount;
      public int CurMaxPacketSizeInBytes;
      public double AveragePingTime;
      public double AverageDtToSendPacket;
      public double TimeOutPeriod;
      public double PacingRate;
      public double DeliveryRate;
      public double RoundTripTime;
      public int InflightBitCount;
      public int IsCongested;
      public int ProbeBwPhaseIndex;
      public double LostPercent;
      public int LostCount;
      public int TotalCountOnLostCheck;
    }

    public struct AddPlayersResult
    {
      public bool Success;
      public NetworkCommunicator[] NetworkPeers;
    }
  }
}
