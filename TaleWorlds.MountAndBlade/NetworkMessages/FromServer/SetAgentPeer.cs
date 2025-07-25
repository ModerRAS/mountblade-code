// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetAgentPeer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetAgentPeer : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public NetworkCommunicator Peer { get; private set; }

    public SetAgentPeer(int agentIndex, NetworkCommunicator peer)
    {
      this.AgentIndex = agentIndex;
      this.Peer = peer;
    }

    public SetAgentPeer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Peer = GameNetworkMessage.ReadNetworkPeerReferenceFromPacket(ref bufferReadValid, true);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteNetworkPeerReferenceToPacket(this.Peer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Peers | MultiplayerMessageFilter.Agents;
    }

    protected override string OnGetLogFormat()
    {
      if (this.AgentIndex < 0)
        return "Ignoring the message for invalid agent.";
      return "Set NetworkPeer " + (this.Peer != null ? (object) "" : (object) "(to NULL) ") + "on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}
