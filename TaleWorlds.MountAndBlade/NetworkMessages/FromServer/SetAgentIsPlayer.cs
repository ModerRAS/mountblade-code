// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetAgentIsPlayer
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetAgentIsPlayer : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public bool IsPlayer { get; private set; }

    public SetAgentIsPlayer(int agentIndex, bool isPlayer)
    {
      this.AgentIndex = agentIndex;
      this.IsPlayer = isPlayer;
    }

    public SetAgentIsPlayer()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.IsPlayer = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteBoolToPacket(this.IsPlayer);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Controller is player on Agent with agent-index: " + (object) this.AgentIndex + (this.IsPlayer ? (object) " - TRUE." : (object) " - FALSE.");
    }
  }
}
