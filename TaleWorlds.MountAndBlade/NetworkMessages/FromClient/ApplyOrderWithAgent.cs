// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ApplyOrderWithAgent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class ApplyOrderWithAgent : GameNetworkMessage
  {
    public OrderType OrderType { get; private set; }

    public int AgentIndex { get; private set; }

    public ApplyOrderWithAgent(OrderType orderType, int agentIndex)
    {
      this.OrderType = orderType;
      this.AgentIndex = agentIndex;
    }

    public ApplyOrderWithAgent()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OrderType = (OrderType) GameNetworkMessage.ReadIntFromPacket(CompressionMission.OrderTypeCompressionInfo, ref bufferReadValid);
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.OrderType, CompressionMission.OrderTypeCompressionInfo);
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed | MultiplayerMessageFilter.Orders;
    }

    protected override string OnGetLogFormat()
    {
      return "Apply order: " + (object) this.OrderType + ", to agent with index: " + (object) this.AgentIndex;
    }
  }
}
