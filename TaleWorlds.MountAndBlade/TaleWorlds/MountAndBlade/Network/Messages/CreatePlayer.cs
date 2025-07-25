// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Network.Messages.CreatePlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade.Network.Messages
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class CreatePlayer : GameNetworkMessage
  {
    public int PlayerIndex { get; private set; }

    public string PlayerName { get; private set; }

    public int DisconnectedPeerIndex { get; private set; }

    public bool IsNonExistingDisconnectedPeer { get; private set; }

    public bool IsReceiverPeer { get; private set; }

    public CreatePlayer(
      int playerIndex,
      string playerName,
      int disconnectedPeerIndex,
      bool isNonExistingDisconnectedPeer = false,
      bool isReceiverPeer = false)
    {
      this.PlayerIndex = playerIndex;
      this.PlayerName = playerName;
      this.DisconnectedPeerIndex = disconnectedPeerIndex;
      this.IsNonExistingDisconnectedPeer = isNonExistingDisconnectedPeer;
      this.IsReceiverPeer = isReceiverPeer;
    }

    public CreatePlayer()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.PlayerIndex, CompressionBasic.PlayerCompressionInfo);
      GameNetworkMessage.WriteStringToPacket(this.PlayerName);
      GameNetworkMessage.WriteIntToPacket(this.DisconnectedPeerIndex, CompressionBasic.PlayerCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.IsNonExistingDisconnectedPeer);
      GameNetworkMessage.WriteBoolToPacket(this.IsReceiverPeer);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.PlayerIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PlayerCompressionInfo, ref bufferReadValid);
      this.PlayerName = GameNetworkMessage.ReadStringFromPacket(ref bufferReadValid);
      this.DisconnectedPeerIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PlayerCompressionInfo, ref bufferReadValid);
      this.IsNonExistingDisconnectedPeer = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsReceiverPeer = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Peers;

    protected override string OnGetLogFormat()
    {
      return "Create a new player with name: " + this.PlayerName + " and index: " + (object) this.PlayerIndex + " and dcedIndex: " + (object) this.DisconnectedPeerIndex + " which is " + (!this.IsNonExistingDisconnectedPeer ? (object) "not" : (object) "") + " a NonExistingDisconnectedPeer";
    }
  }
}
