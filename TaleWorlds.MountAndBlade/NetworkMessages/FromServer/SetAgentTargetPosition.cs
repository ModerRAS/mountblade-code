// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetAgentTargetPosition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetAgentTargetPosition : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public Vec2 Position { get; private set; }

    public SetAgentTargetPosition(int agentIndex, ref Vec2 position)
    {
      this.AgentIndex = agentIndex;
      this.Position = position;
    }

    public SetAgentTargetPosition()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec2FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteVec2ToPacket(this.Position, CompressionBasic.PositionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Target Position: " + (object) this.Position + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}
