// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.DebugAgentScaleOnNetworkTest
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.DebugFromServer)]
  internal sealed class DebugAgentScaleOnNetworkTest : GameNetworkMessage
  {
    internal int AgentToTestIndex { get; private set; }

    internal float ScaleToTest { get; private set; }

    public DebugAgentScaleOnNetworkTest()
    {
    }

    internal DebugAgentScaleOnNetworkTest(int agentToTestIndex, float scale)
    {
      this.AgentToTestIndex = agentToTestIndex;
      this.ScaleToTest = scale;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AgentToTestIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.ScaleToTest = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.DebugScaleValueCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AgentToTestIndex);
      GameNetworkMessage.WriteFloatToPacket(this.ScaleToTest, CompressionMission.DebugScaleValueCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat() => nameof (DebugAgentScaleOnNetworkTest);
  }
}
