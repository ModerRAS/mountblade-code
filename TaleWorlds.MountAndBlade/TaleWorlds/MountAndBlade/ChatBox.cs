// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ChatBox
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.PlatformService;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ChatBox : GameHandler
  {
    private static ChatBox _chatBox;
    private bool _isNetworkInitialized;
    public const string AdminMessageSoundEvent = "event:/ui/notification/alert";
    private List<PlayerId> _mutedPlayers = new List<PlayerId>();
    private List<PlayerId> _platformMutedPlayers = new List<PlayerId>();
    private ProfanityChecker _profanityChecker;
    private static List<ChatBox.QueuedMessageInfo> _queuedTeamMessages;
    private static List<ChatBox.QueuedMessageInfo> _queuedEveryoneMessages;
    public Action<NetworkCommunicator, string> OnMessageReceivedAtDedicatedServer;

    public bool IsContentRestricted { get; private set; }

    public bool NetworkReady
    {
      get
      {
        if (GameNetwork.IsClient || GameNetwork.IsServer)
          return true;
        return NetworkMain.GameClient != null && NetworkMain.GameClient.Connected;
      }
    }

    protected override void OnGameStart() => ChatBox._chatBox = this;

    public override void OnBeforeSave()
    {
    }

    public override void OnAfterSave()
    {
    }

    protected override void OnGameEnd() => ChatBox._chatBox = (ChatBox) null;

    public void SendMessageToAll(string message)
    {
      this.SendMessageToAll(message, (List<VirtualPlayer>) null);
    }

    public void SendMessageToAll(string message, List<VirtualPlayer> receiverList)
    {
      if (GameNetwork.IsClient && !this.IsContentRestricted)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromClient.PlayerMessageAll(message));
        GameNetwork.EndModuleEventAsClient();
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        this.ServerPrepareAndSendMessage(GameNetwork.MyPeer, false, message, receiverList);
      }
    }

    public void SendMessageToTeam(string message)
    {
      this.SendMessageToTeam(message, (List<VirtualPlayer>) null);
    }

    public void SendMessageToTeam(string message, List<VirtualPlayer> receiverList)
    {
      if (GameNetwork.IsClient && !this.IsContentRestricted)
      {
        GameNetwork.BeginModuleEventAsClient();
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromClient.PlayerMessageTeam(message));
        GameNetwork.EndModuleEventAsClient();
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        this.ServerPrepareAndSendMessage(GameNetwork.MyPeer, true, message, receiverList);
      }
    }

    public void SendMessageToWhisperTarget(
      string message,
      string platformName,
      string whisperTarget)
    {
      if (NetworkMain.GameClient == null || !NetworkMain.GameClient.Connected)
        return;
      NetworkMain.GameClient.SendWhisper(whisperTarget, message);
      if (this.WhisperMessageSent == null)
        return;
      this.WhisperMessageSent(message, whisperTarget);
    }

    private void OnServerMessage(string message)
    {
      if (this.ServerMessage == null)
        return;
      this.ServerMessage(message);
    }

    protected override void OnGameNetworkBegin()
    {
      ChatBox._queuedTeamMessages = new List<ChatBox.QueuedMessageInfo>();
      ChatBox._queuedEveryoneMessages = new List<ChatBox.QueuedMessageInfo>();
      this._isNetworkInitialized = true;
      this.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Add);
    }

    private void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode mode)
    {
      GameNetwork.NetworkMessageHandlerRegisterer handlerRegisterer = new GameNetwork.NetworkMessageHandlerRegisterer(mode);
      if (GameNetwork.IsClient)
      {
        handlerRegisterer.Register<NetworkMessages.FromServer.PlayerMessageTeam>(new GameNetworkMessage.ServerMessageHandlerDelegate<NetworkMessages.FromServer.PlayerMessageTeam>(this.HandleServerEventPlayerMessageTeam));
        handlerRegisterer.Register<NetworkMessages.FromServer.PlayerMessageAll>(new GameNetworkMessage.ServerMessageHandlerDelegate<NetworkMessages.FromServer.PlayerMessageAll>(this.HandleServerEventPlayerMessageAll));
        handlerRegisterer.Register<NetworkMessages.FromServer.ServerMessage>(new GameNetworkMessage.ServerMessageHandlerDelegate<NetworkMessages.FromServer.ServerMessage>(this.HandleServerEventServerMessage));
        handlerRegisterer.Register<NetworkMessages.FromServer.ServerAdminMessage>(new GameNetworkMessage.ServerMessageHandlerDelegate<NetworkMessages.FromServer.ServerAdminMessage>(this.HandleServerEventServerAdminMessage));
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        handlerRegisterer.Register<NetworkMessages.FromClient.PlayerMessageAll>(new GameNetworkMessage.ClientMessageHandlerDelegate<NetworkMessages.FromClient.PlayerMessageAll>(this.HandleClientEventPlayerMessageAll));
        handlerRegisterer.Register<NetworkMessages.FromClient.PlayerMessageTeam>(new GameNetworkMessage.ClientMessageHandlerDelegate<NetworkMessages.FromClient.PlayerMessageTeam>(this.HandleClientEventPlayerMessageTeam));
      }
    }

    protected override void OnGameNetworkEnd()
    {
      base.OnGameNetworkEnd();
      this.AddRemoveMessageHandlers(GameNetwork.NetworkMessageHandlerRegisterer.RegisterMode.Remove);
    }

    private void HandleServerEventPlayerMessageAll(NetworkMessages.FromServer.PlayerMessageAll message)
    {
      if (this.IsContentRestricted)
        return;
      this.ShouldShowPlayersMessage(message.Player.VirtualPlayer.Id, (Action<bool>) (result =>
      {
        if (!result)
          return;
        this.OnPlayerMessageReceived(message.Player, message.Message, false);
      }));
    }

    private void HandleServerEventPlayerMessageTeam(NetworkMessages.FromServer.PlayerMessageTeam message)
    {
      if (this.IsContentRestricted)
        return;
      this.ShouldShowPlayersMessage(message.Player.VirtualPlayer.Id, (Action<bool>) (result =>
      {
        if (!result)
          return;
        this.OnPlayerMessageReceived(message.Player, message.Message, true);
      }));
    }

    private void HandleServerEventServerMessage(NetworkMessages.FromServer.ServerMessage message)
    {
      this.OnServerMessage(message.IsMessageTextId ? GameTexts.FindText(message.Message).ToString() : message.Message);
    }

    private void HandleServerEventServerAdminMessage(NetworkMessages.FromServer.ServerAdminMessage message)
    {
      if (message.IsAdminBroadcast)
      {
        TextObject message1 = new TextObject("{=!}{ADMIN_TEXT}");
        message1.SetTextVariable("ADMIN_TEXT", message.Message);
        MBInformationManager.AddQuickInformation(message1, 5000);
        SoundEvent.PlaySound2D("event:/ui/notification/alert");
      }
      ServerAdminMessageDelegate serverAdminMessage = this.ServerAdminMessage;
      if (serverAdminMessage == null)
        return;
      serverAdminMessage(message.Message);
    }

    private bool HandleClientEventPlayerMessageAll(
      NetworkCommunicator networkPeer,
      NetworkMessages.FromClient.PlayerMessageAll message)
    {
      return this.ServerPrepareAndSendMessage(networkPeer, false, message.Message, message.ReceiverList);
    }

    private bool HandleClientEventPlayerMessageTeam(
      NetworkCommunicator networkPeer,
      NetworkMessages.FromClient.PlayerMessageTeam message)
    {
      return this.ServerPrepareAndSendMessage(networkPeer, true, message.Message, message.ReceiverList);
    }

    public static void ServerSendServerMessageToEveryone(string message)
    {
      ChatBox._chatBox.OnServerMessage(message);
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.ServerMessage(message));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
    }

    private bool ServerPrepareAndSendMessage(
      NetworkCommunicator fromPeer,
      bool toTeamOnly,
      string message,
      List<VirtualPlayer> receiverList)
    {
      if (GameNetwork.IsDedicatedServer)
      {
        Action<NetworkCommunicator, string> atDedicatedServer = this.OnMessageReceivedAtDedicatedServer;
        if (atDedicatedServer != null)
          atDedicatedServer(fromPeer, message);
      }
      if (fromPeer.IsMuted || CustomGameMutedPlayerManager.IsUserMuted(fromPeer.VirtualPlayer.Id))
      {
        GameNetwork.BeginModuleEventAsServer(fromPeer);
        GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.ServerMessage("str_multiplayer_muted_message", true));
        GameNetwork.EndModuleEventAsServer();
        return true;
      }
      if (this._profanityChecker != null)
        message = this._profanityChecker.CensorText(message);
      if (!GameNetwork.IsDedicatedServer && fromPeer != GameNetwork.MyPeer && !this._mutedPlayers.Contains(fromPeer.VirtualPlayer.Id) && !PermaMuteList.IsPlayerMuted(fromPeer.VirtualPlayer.Id))
      {
        MissionPeer component1 = GameNetwork.MyPeer.GetComponent<MissionPeer>();
        if (component1 == null)
          return false;
        bool flag;
        if (toTeamOnly)
        {
          if (component1 == null)
            return false;
          MissionPeer component2 = fromPeer.GetComponent<MissionPeer>();
          if (component2 == null)
            return false;
          flag = component1.Team == component2.Team;
        }
        else
          flag = true;
        if (flag)
          this.OnPlayerMessageReceived(fromPeer, message, toTeamOnly);
      }
      if (toTeamOnly)
        ChatBox.ServerSendMessageToTeam(fromPeer, message, receiverList);
      else
        ChatBox.ServerSendMessageToEveryone(fromPeer, message, receiverList);
      return true;
    }

    private static void ServerSendMessageToTeam(
      NetworkCommunicator networkPeer,
      string message,
      List<VirtualPlayer> receiverList)
    {
      if (!networkPeer.IsSynchronized)
      {
        ChatBox._queuedTeamMessages.Add(new ChatBox.QueuedMessageInfo(networkPeer, message, receiverList));
      }
      else
      {
        MissionPeer missionPeer = networkPeer.GetComponent<MissionPeer>();
        if (missionPeer?.Team != null)
        {
          foreach (NetworkCommunicator communicator in GameNetwork.NetworkPeers.Where<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => !x.IsServerPeer && x.IsSynchronized && x.GetComponent<MissionPeer>().Team == missionPeer.Team)))
          {
            if (receiverList == null || receiverList.Contains(communicator.VirtualPlayer))
            {
              GameNetwork.BeginModuleEventAsServer(communicator);
              GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.PlayerMessageTeam(networkPeer, message));
              GameNetwork.EndModuleEventAsServer();
            }
          }
        }
        else
          ChatBox.ServerSendMessageToEveryone(networkPeer, message, receiverList);
      }
    }

    private static void ServerSendMessageToEveryone(
      NetworkCommunicator networkPeer,
      string message,
      List<VirtualPlayer> receiverList)
    {
      if (!networkPeer.IsSynchronized)
      {
        ChatBox._queuedEveryoneMessages.Add(new ChatBox.QueuedMessageInfo(networkPeer, message, receiverList));
      }
      else
      {
        foreach (NetworkCommunicator communicator in GameNetwork.NetworkPeers.Where<NetworkCommunicator>((Func<NetworkCommunicator, bool>) (x => !x.IsServerPeer && x.IsSynchronized)))
        {
          if (receiverList == null || receiverList.Contains(communicator.VirtualPlayer))
          {
            GameNetwork.BeginModuleEventAsServer(communicator);
            GameNetwork.WriteMessage((GameNetworkMessage) new NetworkMessages.FromServer.PlayerMessageAll(networkPeer, message));
            GameNetwork.EndModuleEventAsServer();
          }
        }
      }
    }

    public void ResetMuteList() => this._mutedPlayers.Clear();

    public static void AddWhisperMessage(string fromUserName, string messageBody)
    {
      ChatBox._chatBox.OnWhisperMessageReceived(fromUserName, messageBody);
    }

    public static void AddErrorWhisperMessage(string toUserName)
    {
      ChatBox._chatBox.OnErrorWhisperMessageReceived(toUserName);
    }

    private void OnWhisperMessageReceived(string fromUserName, string messageBody)
    {
      if (this.WhisperMessageReceived == null)
        return;
      this.WhisperMessageReceived(fromUserName, messageBody);
    }

    private void OnErrorWhisperMessageReceived(string toUserName)
    {
      if (this.ErrorWhisperMessageReceived == null)
        return;
      this.ErrorWhisperMessageReceived(toUserName);
    }

    private void OnPlayerMessageReceived(
      NetworkCommunicator networkPeer,
      string message,
      bool toTeamOnly)
    {
      if (this.PlayerMessageReceived == null)
        return;
      this.PlayerMessageReceived(networkPeer, message, toTeamOnly);
    }

    public void SetPlayerMuted(PlayerId playerID, bool isMuted)
    {
      if (isMuted)
        this.OnPlayerMuted(playerID);
      else
        this.OnPlayerUnmuted(playerID);
    }

    public void SetPlayerMutedFromPlatform(PlayerId playerID, bool isMuted)
    {
      if (isMuted && !this._platformMutedPlayers.Contains(playerID))
      {
        this._platformMutedPlayers.Add(playerID);
      }
      else
      {
        if (isMuted || !this._platformMutedPlayers.Contains(playerID))
          return;
        this._platformMutedPlayers.Remove(playerID);
      }
    }

    private void OnPlayerMuted(PlayerId mutedPlayer)
    {
      if (this._mutedPlayers.Contains(mutedPlayer))
        return;
      this._mutedPlayers.Add(mutedPlayer);
      PlayerMutedDelegate playerMuteChanged = this.OnPlayerMuteChanged;
      if (playerMuteChanged == null)
        return;
      playerMuteChanged(mutedPlayer, true);
    }

    private void OnPlayerUnmuted(PlayerId unmutedPlayer)
    {
      if (!this._mutedPlayers.Contains(unmutedPlayer))
        return;
      this._mutedPlayers.Remove(unmutedPlayer);
      PlayerMutedDelegate playerMuteChanged = this.OnPlayerMuteChanged;
      if (playerMuteChanged == null)
        return;
      playerMuteChanged(unmutedPlayer, false);
    }

    public bool IsPlayerMuted(PlayerId player)
    {
      return this.IsPlayerMutedFromGame(player) || this.IsPlayerMutedFromPlatform(player);
    }

    public bool IsPlayerMutedFromPlatform(PlayerId player)
    {
      return this._platformMutedPlayers.Contains(player);
    }

    public bool IsPlayerMutedFromGame(PlayerId player)
    {
      if (GameNetwork.IsDedicatedServer)
        return this._mutedPlayers.Contains(player);
      PlatformServices.Instance.CheckPrivilege(Privilege.Chat, false, (PrivilegeResult) (result => this.IsContentRestricted = !result));
      return this._mutedPlayers.Contains(player) || PermaMuteList.IsPlayerMuted(player);
    }

    private void ShouldShowPlayersMessage(PlayerId player, Action<bool> result)
    {
      if (this.IsPlayerMuted(player) || !NetworkMain.GameClient.SupportedFeatures.SupportsFeatures(Features.TextChat))
      {
        result(false);
      }
      else
      {
        int providedType1 = (int) player.ProvidedType;
        PlayerIdProvidedTypes? providedType2 = NetworkMain.GameClient?.PlayerID.ProvidedType;
        int valueOrDefault = (int) providedType2.GetValueOrDefault();
        if (!(providedType1 == valueOrDefault & providedType2.HasValue))
          result(true);
        else
          PlatformServices.Instance.CheckPermissionWithUser(TaleWorlds.PlatformService.Permission.CommunicateUsingText, player, (PermissionResult) (res => result(res)));
      }
    }

    public void SetChatFilterLists(string[] profanityList, string[] allowList)
    {
      this._profanityChecker = new ProfanityChecker(profanityList, allowList);
    }

    public void InitializeForMultiplayer()
    {
      PlatformServices.Instance.CheckPrivilege(Privilege.Chat, true, (PrivilegeResult) (result => this.IsContentRestricted = !result));
    }

    public void InitializeForSinglePlayer() => this.IsContentRestricted = false;

    public void OnLogin()
    {
      PlatformServices.Instance.CheckPrivilege(Privilege.Chat, false, (PrivilegeResult) (chatPrivilegeResult => this.IsContentRestricted = !chatPrivilegeResult));
    }

    public event PlayerMessageReceivedDelegate PlayerMessageReceived;

    public event WhisperMessageSentDelegate WhisperMessageSent;

    public event WhisperMessageReceivedDelegate WhisperMessageReceived;

    public event ErrorWhisperMessageReceivedDelegate ErrorWhisperMessageReceived;

    public event ServerMessageDelegate ServerMessage;

    public event ServerAdminMessageDelegate ServerAdminMessage;

    public event PlayerMutedDelegate OnPlayerMuteChanged;

    protected override void OnTick(float dt)
    {
      if (!GameNetwork.IsServer || !this._isNetworkInitialized)
        return;
      for (int index = ChatBox._queuedTeamMessages.Count - 1; index >= 0; --index)
      {
        ChatBox.QueuedMessageInfo queuedTeamMessage = ChatBox._queuedTeamMessages[index];
        if (queuedTeamMessage.SourcePeer.IsSynchronized)
        {
          ChatBox.ServerSendMessageToTeam(queuedTeamMessage.SourcePeer, queuedTeamMessage.Message, queuedTeamMessage.ReceiverList);
          ChatBox._queuedTeamMessages.RemoveAt(index);
        }
        else if (queuedTeamMessage.IsExpired)
          ChatBox._queuedTeamMessages.RemoveAt(index);
      }
      for (int index = ChatBox._queuedEveryoneMessages.Count - 1; index >= 0; --index)
      {
        ChatBox.QueuedMessageInfo queuedEveryoneMessage = ChatBox._queuedEveryoneMessages[index];
        if (queuedEveryoneMessage.SourcePeer.IsSynchronized)
        {
          ChatBox.ServerSendMessageToEveryone(queuedEveryoneMessage.SourcePeer, queuedEveryoneMessage.Message, queuedEveryoneMessage.ReceiverList);
          ChatBox._queuedEveryoneMessages.RemoveAt(index);
        }
        else if (queuedEveryoneMessage.IsExpired)
          ChatBox._queuedEveryoneMessages.RemoveAt(index);
      }
    }

    private class QueuedMessageInfo
    {
      public readonly NetworkCommunicator SourcePeer;
      public readonly string Message;
      public readonly List<VirtualPlayer> ReceiverList;
      private const float _timeOutDuration = 3f;
      private DateTime _creationTime;

      public bool IsExpired => (DateTime.Now - this._creationTime).TotalSeconds >= 3.0;

      public QueuedMessageInfo(
        NetworkCommunicator sourcePeer,
        string message,
        List<VirtualPlayer> receiverList)
      {
        this.SourcePeer = sourcePeer;
        this.Message = message;
        this._creationTime = DateTime.Now;
        this.ReceiverList = receiverList;
      }
    }
  }
}
