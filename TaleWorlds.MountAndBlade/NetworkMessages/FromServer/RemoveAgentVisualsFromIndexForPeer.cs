// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.RemoveAgentVisualsFromIndexForPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class RemoveAgentVisualsFromIndexForPeer : GameNetworkMessage
  {
    public NetworkCommunicator Peer { get; private set; }

    public int VisualsIndex { get; private set; }

    public RemoveAgentVisualsFromIndexForPeer(NetworkCommunicator peer, int index)
    {
      this.Peer = peer;
      this.VisualsIndex = index;
    }

    public RemoveAgentVisualsFromIndexForPeer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid);
      this.VisualsIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentOffsetCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
      GameNetworkMessage.WriteIntToPacket(this.VisualsIndex, CompressionMission.AgentOffsetCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Agents;

    protected override string OnGetLogFormat()
    {
      return "Removing AgentVisuals with Index: " + (object) this.VisualsIndex + ", for peer: " + this.Peer.UserName;
    }
  }
}
