// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ServerPerformanceStateReplicationMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ServerPerformanceStateReplicationMessage : GameNetworkMessage
  {
    internal ServerPerformanceState ServerPerformanceProblemState { get; private set; }

    public ServerPerformanceStateReplicationMessage()
    {
    }

    internal ServerPerformanceStateReplicationMessage(
      ServerPerformanceState serverPerformanceProblemState)
    {
      this.ServerPerformanceProblemState = serverPerformanceProblemState;
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.ServerPerformanceProblemState = (ServerPerformanceState) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ServerPerformanceStateCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.ServerPerformanceProblemState, CompressionBasic.ServerPerformanceStateCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat() => nameof (ServerPerformanceStateReplicationMessage);
  }
}
