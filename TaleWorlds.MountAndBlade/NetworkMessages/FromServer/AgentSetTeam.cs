// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.AgentSetTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class AgentSetTeam : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public int TeamIndex { get; private set; }

    public AgentSetTeam(int agentIndex, int teamIndex)
    {
      this.AgentIndex = agentIndex;
      this.TeamIndex = teamIndex;
    }

    public AgentSetTeam()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.TeamIndex = GameNetworkMessage.ReadTeamIndexFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteTeamIndexToPacket(this.TeamIndex);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Agents;

    protected override string OnGetLogFormat()
    {
      return "Assign agent with agent-index: " + (object) this.AgentIndex + " to team: " + (object) this.TeamIndex;
    }
  }
}
