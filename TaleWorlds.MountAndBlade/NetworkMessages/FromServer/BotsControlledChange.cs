// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.BotsControlledChange
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class BotsControlledChange : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public int AliveCount { get; private set; }

    public int TotalCount { get; private set; }

    public BotsControlledChange(NetworkCommunicator peer, int aliveCount, int totalCount)
    {
      this.Peer = peer;
      this.AliveCount = aliveCount;
      this.TotalCount = totalCount;
    }

    public BotsControlledChange()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.AliveCount = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentOffsetCompressionInfo, ref bufferReadValid);
      this.TotalCount = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentOffsetCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteIntToPacket(this.AliveCount, CompressionMission.AgentOffsetCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.TotalCount, CompressionMission.AgentOffsetCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Administration;
    }

    protected override string OnGetLogFormat()
    {
      return "Bot Controlled Count Changed. Peer: " + this.Peer.UserName + " now has " + (object) this.AliveCount + " alive bots, out of: " + (object) this.TotalCount + " total bots.";
    }
  }
}
