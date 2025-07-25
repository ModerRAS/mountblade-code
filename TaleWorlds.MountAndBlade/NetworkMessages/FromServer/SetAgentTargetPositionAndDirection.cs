// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetAgentTargetPositionAndDirection
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
  public sealed class SetAgentTargetPositionAndDirection : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public Vec2 Position { get; private set; }

    public Vec3 Direction { get; private set; }

    public SetAgentTargetPositionAndDirection(
      int agentIndex,
      ref Vec2 position,
      ref Vec3 direction)
    {
      this.AgentIndex = agentIndex;
      this.Position = position;
      this.Direction = direction;
    }

    public SetAgentTargetPositionAndDirection()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec2FromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
      this.Direction = GameNetworkMessage.ReadVec3FromPacket(CompressionBasic.UnitVectorCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteVec2ToPacket(this.Position, CompressionBasic.PositionCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Direction, CompressionBasic.UnitVectorCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set TargetPositionAndDirection: " + (object) this.Position + " " + (object) this.Direction + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}
