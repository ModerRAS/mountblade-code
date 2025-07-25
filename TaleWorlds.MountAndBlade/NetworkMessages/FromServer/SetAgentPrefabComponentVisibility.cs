// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.SetAgentPrefabComponentVisibility
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class SetAgentPrefabComponentVisibility : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public int ComponentIndex { get; private set; }

    public bool Visibility { get; private set; }

    public SetAgentPrefabComponentVisibility(int agentIndex, int componentIndex, bool visibility)
    {
      this.AgentIndex = agentIndex;
      this.ComponentIndex = componentIndex;
      this.Visibility = visibility;
    }

    public SetAgentPrefabComponentVisibility()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.ComponentIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.AgentPrefabComponentIndexCompressionInfo, ref bufferReadValid);
      this.Visibility = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket(this.ComponentIndex, CompressionMission.AgentPrefabComponentIndexCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.Visibility);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Set Component with index: " + (object) this.ComponentIndex + " to be " + (this.Visibility ? (object) "visible" : (object) "invisible") + " on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}
