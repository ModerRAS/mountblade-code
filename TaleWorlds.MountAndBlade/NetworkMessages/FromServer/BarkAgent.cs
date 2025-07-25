// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.BarkAgent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class BarkAgent : GameNetworkMessage
  {
    public int AgentIndex { get; private set; }

    public int IndexOfBark { get; private set; }

    public BarkAgent(int agent, int indexOfBark)
    {
      this.AgentIndex = agent;
      this.IndexOfBark = indexOfBark;
    }

    public BarkAgent()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.IndexOfBark = GameNetworkMessage.ReadIntFromPacket(CompressionMission.BarkIndexCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentIndex);
      GameNetworkMessage.WriteIntToPacket(this.IndexOfBark, CompressionMission.BarkIndexCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.None;

    protected override string OnGetLogFormat()
    {
      return "FromServer.BarkAgent agent-index: " + (object) this.AgentIndex + ", IndexOfBark" + (object) this.IndexOfBark;
    }
  }
}
