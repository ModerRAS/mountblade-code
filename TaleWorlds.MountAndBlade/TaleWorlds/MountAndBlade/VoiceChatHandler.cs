// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.VoiceChatHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.Options;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.PlatformService;
using TaleWorlds.PlayerServices;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class VoiceChatHandler : MissionNetwork
  {
    private const int MillisecondsToShorts = 12;
    private const int MillisecondsToBytes = 24;
    private const int OpusFrameSizeCoefficient = 6;
    private const int VoiceFrameRawSizeInMilliseconds = 60;
    public const int VoiceFrameRawSizeInBytes = 1440;
    private const int CompressionMaxChunkSizeInBytes = 8640;
    private const int VoiceRecordMaxChunkSizeInBytes = 72000;
    private List<VoiceChatHandler.PeerVoiceData> _playerVoiceDataList;
    private bool _isVoiceChatDisabled = true;
    private bool _isVoiceRecordActive;
    private bool _stopRecordingOnNextTick;
    private Queue<byte> _voiceToSend;
    private bool _playedAnyVoicePreviousTick;
    private bool _localUserInitialized;

    public event Action OnVoiceRecordStarted;

    public event Action OnVoiceRecordStopped;

    public event Action<MissionPeer, bool> OnPeerVoiceStatusUpdated;

    public event Action<MissionPeer> OnPeerMuteStatusUpdated;

    private bool IsVoiceRecordActive
    {
      get => this._isVoiceRecordActive;
      set
      {
        if (this._isVoiceChatDisabled)
          return;
        this._isVoiceRecordActive = value;
        if (this._isVoiceRecordActive)
        {
          SoundManager.StartVoiceRecording();
          Action voiceRecordStarted = this.OnVoiceRecordStarted;
          if (voiceRecordStarted == null)
            return;
          voiceRecordStarted();
        }
        else
        {
          SoundManager.StopVoiceRecording();
          Action voiceRecordStopped = this.OnVoiceRecordStopped;
          if (voiceRecordStopped == null)
            return;
          voiceRecordStopped();
        }
      }
    }

    protected override void AddRemoveMessageHandlers(
      GameNetwork.NetworkMessageHandlerRegistererContainer registerer)
    {
      if (GameNetwork.IsClient)
      {
        registerer.RegisterBaseHandler<SendVoiceToPlay>(new GameNetworkMessage.ServerMessageHandlerDelegate<GameNetworkMessage>(this.HandleServerEventSendVoiceToPlay));
      }
      else
      {
        if (!GameNetwork.IsServer)
          return;
        registerer.RegisterBaseHandler<SendVoiceRecord>(new GameNetworkMessage.ClientMessageHandlerDelegate<GameNetworkMessage>(this.HandleClientEventSendVoiceRecord));
      }
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      if (GameNetwork.IsDedicatedServer)
        return;
      this._playerVoiceDataList = new List<VoiceChatHandler.PeerVoiceData>();
      SoundManager.InitializeVoicePlayEvent();
      this._voiceToSend = new Queue<byte>();
    }

    public override void AfterStart()
    {
      this.UpdateVoiceChatEnabled();
      if (!this._isVoiceChatDisabled)
      {
        MissionPeer.OnTeamChanged += new MissionPeer.OnTeamChangedDelegate(this.MissionPeerOnTeamChanged);
        Mission.Current.GetMissionBehavior<MissionNetworkComponent>().OnClientSynchronizedEvent += new Action<NetworkCommunicator>(this.OnPlayerSynchronized);
      }
      NativeOptions.OnNativeOptionChanged += new NativeOptions.OnNativeOptionChangedDelegate(this.OnNativeOptionChanged);
      ManagedOptions.OnManagedOptionChanged += new ManagedOptions.OnManagedOptionChangedDelegate(this.OnManagedOptionChanged);
    }

    public override void OnRemoveBehavior()
    {
      if (!this._isVoiceChatDisabled)
        MissionPeer.OnTeamChanged -= new MissionPeer.OnTeamChangedDelegate(this.MissionPeerOnTeamChanged);
      if (!GameNetwork.IsDedicatedServer)
      {
        if (this.IsVoiceRecordActive)
          this.IsVoiceRecordActive = false;
        SoundManager.FinalizeVoicePlayEvent();
      }
      NativeOptions.OnNativeOptionChanged -= new NativeOptions.OnNativeOptionChangedDelegate(this.OnNativeOptionChanged);
      ManagedOptions.OnManagedOptionChanged -= new ManagedOptions.OnManagedOptionChangedDelegate(this.OnManagedOptionChanged);
      base.OnRemoveBehavior();
    }

    public override void OnPreDisplayMissionTick(float dt)
    {
      if (GameNetwork.IsDedicatedServer || this._isVoiceChatDisabled)
        return;
      this.VoiceTick(dt);
    }

    private bool HandleClientEventSendVoiceRecord(
      NetworkCommunicator peer,
      GameNetworkMessage baseMessage)
    {
      SendVoiceRecord sendVoiceRecord = (SendVoiceRecord) baseMessage;
      MissionPeer component1 = peer.GetComponent<MissionPeer>();
      if (sendVoiceRecord.BufferLength > 0 && component1.Team != null)
      {
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          MissionPeer component2 = networkPeer.GetComponent<MissionPeer>();
          if (networkPeer.IsSynchronized && component2 != null && component2.Team == component1.Team && (sendVoiceRecord.ReceiverList == null || sendVoiceRecord.ReceiverList.Contains(networkPeer.VirtualPlayer)) && component2 != component1)
          {
            GameNetwork.BeginModuleEventAsServerUnreliable(component2.Peer);
            GameNetwork.WriteMessage((GameNetworkMessage) new SendVoiceToPlay(peer, sendVoiceRecord.Buffer, sendVoiceRecord.BufferLength));
            GameNetwork.EndModuleEventAsServerUnreliable();
          }
        }
      }
      return true;
    }

    private void HandleServerEventSendVoiceToPlay(GameNetworkMessage baseMessage)
    {
      SendVoiceToPlay sendVoiceToPlay = (SendVoiceToPlay) baseMessage;
      if (this._isVoiceChatDisabled)
        return;
      MissionPeer component = sendVoiceToPlay.Peer.GetComponent<MissionPeer>();
      if (component == null || sendVoiceToPlay.BufferLength <= 0 || component.IsMutedFromGameOrPlatform || CustomGameMutedPlayerManager.IsUserMuted(component.Peer.Id))
        return;
      for (int index = 0; index < this._playerVoiceDataList.Count; ++index)
      {
        if (this._playerVoiceDataList[index].Peer == component)
        {
          byte[] voiceBuffer = new byte[8640];
          int bufferLength;
          this.DecompressVoiceChunk(sendVoiceToPlay.Peer.Index, sendVoiceToPlay.Buffer, sendVoiceToPlay.BufferLength, ref voiceBuffer, out bufferLength);
          this._playerVoiceDataList[index].WriteVoiceData(voiceBuffer, bufferLength);
          break;
        }
      }
    }

    private void CheckStopVoiceRecord()
    {
      if (!this._stopRecordingOnNextTick)
        return;
      this.IsVoiceRecordActive = false;
      this._stopRecordingOnNextTick = false;
    }

    private void VoiceTick(float dt)
    {
      int a = 120;
      if (this._playedAnyVoicePreviousTick)
      {
        int b = MathF.Ceiling(dt * 1000f);
        a = MathF.Min(a, b);
        this._playedAnyVoicePreviousTick = false;
      }
      foreach (VoiceChatHandler.PeerVoiceData playerVoiceData in this._playerVoiceDataList)
      {
        Action<MissionPeer, bool> voiceStatusUpdated = this.OnPeerVoiceStatusUpdated;
        if (voiceStatusUpdated != null)
          voiceStatusUpdated(playerVoiceData.Peer, playerVoiceData.HasAnyVoiceData());
      }
      int num = a * 12;
      for (int index1 = 0; index1 < num; ++index1)
      {
        for (int index2 = 0; index2 < this._playerVoiceDataList.Count; ++index2)
          this._playerVoiceDataList[index2].ProcessVoiceData();
      }
      for (int index3 = 0; index3 < this._playerVoiceDataList.Count; ++index3)
      {
        Queue<short> voiceToPlayForTick = this._playerVoiceDataList[index3].GetVoiceToPlayForTick();
        if (voiceToPlayForTick.Count > 0)
        {
          int count = voiceToPlayForTick.Count;
          byte[] voiceBuffer = new byte[count * 2];
          for (int index4 = 0; index4 < count; ++index4)
          {
            byte[] bytes = BitConverter.GetBytes(voiceToPlayForTick.Dequeue());
            voiceBuffer[index4 * 2] = bytes[0];
            voiceBuffer[index4 * 2 + 1] = bytes[1];
          }
          SoundManager.UpdateVoiceToPlay(voiceBuffer, voiceBuffer.Length, index3);
          this._playedAnyVoicePreviousTick = true;
        }
      }
      if (this.IsVoiceRecordActive)
      {
        byte[] voiceBuffer = new byte[72000];
        int readBytesLength;
        SoundManager.GetVoiceData(voiceBuffer, 72000, out readBytesLength);
        for (int index = 0; index < readBytesLength; ++index)
          this._voiceToSend.Enqueue(voiceBuffer[index]);
        this.CheckStopVoiceRecord();
      }
      while (this._voiceToSend.Count > 0 && (this._voiceToSend.Count >= 1440 || !this.IsVoiceRecordActive))
      {
        int bufferSize = MathF.Min(this._voiceToSend.Count, 1440);
        byte[] numArray = new byte[1440];
        for (int index = 0; index < bufferSize; ++index)
          numArray[index] = this._voiceToSend.Dequeue();
        if (GameNetwork.IsClient)
        {
          byte[] compressedBuffer = new byte[8640];
          int compressedBufferLength;
          this.CompressVoiceChunk(0, numArray, ref compressedBuffer, out compressedBufferLength);
          GameNetwork.BeginModuleEventAsClientUnreliable();
          GameNetwork.WriteMessage((GameNetworkMessage) new SendVoiceRecord(compressedBuffer, compressedBufferLength));
          GameNetwork.EndModuleEventAsClientUnreliable();
        }
        else if (GameNetwork.IsServer)
        {
          NetworkCommunicator myPeer = GameNetwork.MyPeer;
          MissionPeer myMissionPeer = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
          if (myMissionPeer != null)
            this._playerVoiceDataList.Single<VoiceChatHandler.PeerVoiceData>((Func<VoiceChatHandler.PeerVoiceData, bool>) (x => x.Peer == myMissionPeer)).WriteVoiceData(numArray, bufferSize);
        }
      }
      if (!this.IsVoiceRecordActive && this.Mission.InputManager.IsGameKeyPressed(33))
        this.IsVoiceRecordActive = true;
      if (!this.IsVoiceRecordActive || !this.Mission.InputManager.IsGameKeyReleased(33))
        return;
      this._stopRecordingOnNextTick = true;
    }

    private void DecompressVoiceChunk(
      int clientID,
      byte[] compressedVoiceBuffer,
      int compressedBufferLength,
      ref byte[] voiceBuffer,
      out int bufferLength)
    {
      SoundManager.DecompressData(clientID, compressedVoiceBuffer, compressedBufferLength, voiceBuffer, out bufferLength);
    }

    private void CompressVoiceChunk(
      int clientIndex,
      byte[] voiceBuffer,
      ref byte[] compressedBuffer,
      out int compressedBufferLength)
    {
      SoundManager.CompressData(clientIndex, voiceBuffer, 1440, compressedBuffer, out compressedBufferLength);
    }

    private VoiceChatHandler.PeerVoiceData GetPlayerVoiceData(MissionPeer missionPeer)
    {
      for (int index = 0; index < this._playerVoiceDataList.Count; ++index)
      {
        if (this._playerVoiceDataList[index].Peer == missionPeer)
          return this._playerVoiceDataList[index];
      }
      return (VoiceChatHandler.PeerVoiceData) null;
    }

    private void AddPlayerToVoiceChat(MissionPeer missionPeer)
    {
      VirtualPlayer peer = missionPeer.Peer;
      this._playerVoiceDataList.Add(new VoiceChatHandler.PeerVoiceData(missionPeer));
      SoundManager.CreateVoiceEvent();
      PlatformServices.Instance.CheckPermissionWithUser(TaleWorlds.PlatformService.Permission.CommunicateUsingVoice, missionPeer.Peer.Id, (PermissionResult) (hasPermission =>
      {
        if (Mission.Current == null || Mission.Current.CurrentState != Mission.State.Continuing)
          return;
        VoiceChatHandler.PeerVoiceData playerVoiceData = this.GetPlayerVoiceData(missionPeer);
        if (playerVoiceData == null)
          return;
        if (!hasPermission)
        {
          PlayerId playerId = missionPeer.Peer.Id;
          int providedType = (int) playerId.ProvidedType;
          LobbyClient gameClient = NetworkMain.GameClient;
          PlayerIdProvidedTypes? nullable1;
          if (gameClient == null)
          {
            nullable1 = new PlayerIdProvidedTypes?();
          }
          else
          {
            playerId = gameClient.PlayerID;
            nullable1 = new PlayerIdProvidedTypes?(playerId.ProvidedType);
          }
          PlayerIdProvidedTypes? nullable2 = nullable1;
          int valueOrDefault = (int) nullable2.GetValueOrDefault();
          if (providedType == valueOrDefault & nullable2.HasValue)
            missionPeer.SetMutedFromPlatform(true);
        }
        playerVoiceData.SetReadyOnPlatform();
      }));
      missionPeer.SetMuted(PermaMuteList.IsPlayerMuted(missionPeer.Peer.Id));
      SoundManager.AddSoundClientWithId((ulong) peer.Index);
      Action<MissionPeer> muteStatusUpdated = this.OnPeerMuteStatusUpdated;
      if (muteStatusUpdated == null)
        return;
      muteStatusUpdated(missionPeer);
    }

    private void RemovePlayerFromVoiceChat(int indexInVoiceDataList)
    {
      VirtualPlayer peer = this._playerVoiceDataList[indexInVoiceDataList].Peer.Peer;
      SoundManager.DeleteSoundClientWithId((ulong) this._playerVoiceDataList[indexInVoiceDataList].Peer.Peer.Index);
      SoundManager.DestroyVoiceEvent(indexInVoiceDataList);
      this._playerVoiceDataList.RemoveAt(indexInVoiceDataList);
    }

    private void MissionPeerOnTeamChanged(
      NetworkCommunicator peer,
      Team previousTeam,
      Team newTeam)
    {
      if (!this._localUserInitialized || !(peer.VirtualPlayer.Id != PlayerId.Empty))
        return;
      this.CheckPlayerForVoiceChatOnTeamChange(peer, previousTeam, newTeam);
    }

    private void OnPlayerSynchronized(NetworkCommunicator networkPeer)
    {
      if (this._localUserInitialized)
      {
        MissionPeer component = networkPeer.GetComponent<MissionPeer>();
        if (component.IsMine || component.Team == null)
          return;
        this.CheckPlayerForVoiceChatOnTeamChange(networkPeer, (Team) null, component.Team);
      }
      else
      {
        if (!networkPeer.IsMine)
          return;
        NetworkCommunicator myPeer = GameNetwork.MyPeer;
        this.CheckPlayerForVoiceChatOnTeamChange(GameNetwork.MyPeer, (Team) null, (myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null).Team);
      }
    }

    private void CheckPlayerForVoiceChatOnTeamChange(
      NetworkCommunicator peer,
      Team previousTeam,
      Team newTeam)
    {
      if (GameNetwork.VirtualPlayers[peer.Index] != peer.VirtualPlayer)
        return;
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component1 = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      if (component1 == null)
        return;
      MissionPeer component2 = peer.GetComponent<MissionPeer>();
      if (component1 == component2)
      {
        this._localUserInitialized = true;
        for (int indexInVoiceDataList = this._playerVoiceDataList.Count - 1; indexInVoiceDataList >= 0; --indexInVoiceDataList)
          this.RemovePlayerFromVoiceChat(indexInVoiceDataList);
        if (newTeam == null)
          return;
        foreach (NetworkCommunicator networkPeer in GameNetwork.NetworkPeers)
        {
          MissionPeer component3 = networkPeer.GetComponent<MissionPeer>();
          if (component1 != component3 && component3?.Team != null && component3.Team == newTeam && networkPeer.VirtualPlayer.Id != PlayerId.Empty)
            this.AddPlayerToVoiceChat(component3);
        }
      }
      else
      {
        if (!this._localUserInitialized || component1.Team == null)
          return;
        if (component1.Team == previousTeam)
        {
          for (int index = 0; index < this._playerVoiceDataList.Count; ++index)
          {
            if (this._playerVoiceDataList[index].Peer == component2)
            {
              this.RemovePlayerFromVoiceChat(index);
              break;
            }
          }
        }
        else
        {
          if (component1.Team != newTeam)
            return;
          this.AddPlayerToVoiceChat(component2);
        }
      }
    }

    private void UpdateVoiceChatEnabled()
    {
      float num = 1f;
      this._isVoiceChatDisabled = !BannerlordConfig.EnableVoiceChat || (double) num <= 9.9999997473787516E-06 || Game.Current.GetGameHandler<ChatBox>().IsContentRestricted;
    }

    private void OnNativeOptionChanged(
      NativeOptions.NativeOptionsType changedNativeOptionsType)
    {
      if (changedNativeOptionsType != NativeOptions.NativeOptionsType.VoiceChatVolume)
        return;
      this.UpdateVoiceChatEnabled();
    }

    private void OnManagedOptionChanged(
      ManagedOptions.ManagedOptionsType changedManagedOptionType)
    {
      if (changedManagedOptionType != ManagedOptions.ManagedOptionsType.EnableVoiceChat)
        return;
      this.UpdateVoiceChatEnabled();
    }

    public override void OnPlayerDisconnectedFromServer(NetworkCommunicator networkPeer)
    {
      base.OnPlayerDisconnectedFromServer(networkPeer);
      NetworkCommunicator myPeer = GameNetwork.MyPeer;
      MissionPeer component1 = myPeer != null ? myPeer.GetComponent<MissionPeer>() : (MissionPeer) null;
      MissionPeer component2 = networkPeer.GetComponent<MissionPeer>();
      if (component2?.Team == null || component1?.Team == null || component2.Team != component1.Team)
        return;
      for (int index = 0; index < this._playerVoiceDataList.Count; ++index)
      {
        if (this._playerVoiceDataList[index].Peer == component2)
        {
          this.RemovePlayerFromVoiceChat(index);
          break;
        }
      }
    }

    private class PeerVoiceData
    {
      private const int PlayDelaySizeInMilliseconds = 150;
      private const int PlayDelaySizeInBytes = 3600;
      private const float PlayDelayResetTimeInMilliseconds = 300f;
      public readonly MissionPeer Peer;
      private readonly Queue<short> _voiceData;
      private readonly Queue<short> _voiceToPlayInTick;
      private int _playDelayRemainingSizeInBytes;
      private MissionTime _nextPlayDelayResetTime;

      public bool IsReadyOnPlatform { get; private set; }

      public PeerVoiceData(MissionPeer peer)
      {
        this.Peer = peer;
        this._voiceData = new Queue<short>();
        this._voiceToPlayInTick = new Queue<short>();
        this._nextPlayDelayResetTime = MissionTime.Now;
      }

      public void WriteVoiceData(byte[] dataBuffer, int bufferSize)
      {
        if (this._voiceData.Count == 0 && this._nextPlayDelayResetTime.IsPast)
          this._playDelayRemainingSizeInBytes = 3600;
        for (int index = 0; index < bufferSize; index += 2)
          this._voiceData.Enqueue((short) ((int) dataBuffer[index] | (int) dataBuffer[index + 1] << 8));
      }

      public void SetReadyOnPlatform() => this.IsReadyOnPlatform = true;

      public bool ProcessVoiceData()
      {
        if (!this.IsReadyOnPlatform || this._voiceData.Count <= 0)
          return false;
        bool flag = this.Peer.IsMutedFromGameOrPlatform || CustomGameMutedPlayerManager.IsUserMuted(this.Peer.Peer.Id);
        if (this._playDelayRemainingSizeInBytes > 0)
        {
          this._playDelayRemainingSizeInBytes -= 2;
        }
        else
        {
          short num = this._voiceData.Dequeue();
          this._nextPlayDelayResetTime = MissionTime.Now + MissionTime.Milliseconds(300f);
          if (!flag)
            this._voiceToPlayInTick.Enqueue(num);
        }
        return !flag;
      }

      public Queue<short> GetVoiceToPlayForTick() => this._voiceToPlayInTick;

      public bool HasAnyVoiceData() => this.IsReadyOnPlatform && this._voiceData.Count > 0;
    }
  }
}
