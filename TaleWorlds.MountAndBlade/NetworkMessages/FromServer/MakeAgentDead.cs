// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.MakeAgentDead
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class MakeAgentDead : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public bool IsKilled { get; private set; }

    public ActionIndexValueCache ActionCodeIndex { get; private set; }

    public MakeAgentDead(int agentIndex, bool isKilled, ActionIndexValueCache actionCodeIndex)
    {
      this.AgentIndex = agentIndex;
      this.IsKilled = isKilled;
      this.ActionCodeIndex = actionCodeIndex;
    }

    public MakeAgentDead()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.IsKilled = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.ActionCodeIndex = new ActionIndexValueCache(GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ActionCodeCompressionInfo, ref bufferReadValid));
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteBoolToPacket(this.IsKilled);
      GameNetworkMessage.WriteIntToPacket(this.ActionCodeIndex.Index, CompressionBasic.ActionCodeCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.EquipmentDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Make Agent Dead on Agent with agent-index: " + (object) this.AgentIndex;
    }
  }
}
