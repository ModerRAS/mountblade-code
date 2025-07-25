// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.KickPlayerPollOpened
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class KickPlayerPollOpened : GameNetworkMessage
  {
    public NetworkCommunicator InitiatorPeer { get; private set; }

    public NetworkCommunicator PlayerPeer { get; private set; }

    public bool BanPlayer { get; private set; }

    public KickPlayerPollOpened(
      NetworkCommunicator initiatorPeer,
      NetworkCommunicator playerPeer,
      bool banPlayer)
    {
      this.InitiatorPeer = initiatorPeer;
      this.PlayerPeer = playerPeer;
      this.BanPlayer = banPlayer;
    }

    public KickPlayerPollOpened()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.InitiatorPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.PlayerPeer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.BanPlayer = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.InitiatorPeer);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.PlayerPeer);
      GameNetworkMessage.WriteBoolToPacket(this.BanPlayer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return this.InitiatorPeer?.UserName + " wants to start poll to kick" + (this.BanPlayer ? " and ban" : "") + " player: " + this.PlayerPeer?.UserName;
    }
  }
}
