// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.LossReplicationMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class LossReplicationMessage : GameNetworkMessage
  {
    internal int LossValue { get; private set; }

    public LossReplicationMessage()
    {
    }

    internal LossReplicationMessage(int lossValue) => this.LossValue = lossValue;

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.LossValue = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.LossValueCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket(this.LossValue, CompressionBasic.LossValueCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.MissionDetailed;
    }

    protected override string OnGetLogFormat() => nameof (LossReplicationMessage);
  }
}
