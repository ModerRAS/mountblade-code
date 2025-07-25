// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.PingReplication
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class PingReplication : GameNetworkMessage
  {
    public const int MaxPingToReplicate = 1023;

    internal NetworkCommunicator Peer { get; private set; }

    internal int PingValue { get; private set; }

    public PingReplication()
    {
    }

    internal PingReplication(NetworkCommunicator peer, int ping)
    {
      this.Peer = peer;
      this.PingValue = ping;
      if (this.PingValue <= 1023)
        return;
      this.PingValue = 1023;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid, true);
      this.PingValue = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PingValueCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteIntToPacket(this.PingValue, CompressionBasic.PingValueCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat() => nameof (PingReplication);
  }
}
