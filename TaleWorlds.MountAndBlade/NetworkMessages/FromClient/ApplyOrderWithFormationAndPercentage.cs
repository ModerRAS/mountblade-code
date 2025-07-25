// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ApplyOrderWithFormationAndPercentage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class ApplyOrderWithFormationAndPercentage : GameNetworkMessage
  {
    public OrderType OrderType { get; private set; }

    public int FormationIndex { get; private set; }

    public int Percentage { get; private set; }

    public ApplyOrderWithFormationAndPercentage(
      OrderType orderType,
      int formationIndex,
      int percentage)
    {
      this.OrderType = orderType;
      this.FormationIndex = formationIndex;
      this.Percentage = percentage;
    }

    public ApplyOrderWithFormationAndPercentage()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OrderType = (OrderType) GameNetworkMessage.ReadIntFromPacket(CompressionMission.OrderTypeCompressionInfo, ref bufferReadValid);
      this.FormationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.FormationClassCompressionInfo, ref bufferReadValid);
      this.Percentage = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.PercentageCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.OrderType, CompressionMission.OrderTypeCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.FormationIndex, CompressionMission.FormationClassCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.Percentage, CompressionBasic.PercentageCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.Formations | MultiplayerMessageFilter.Orders;
    }

    protected override string OnGetLogFormat()
    {
      return "Apply order: " + (object) this.OrderType + ", to formation with index: " + (object) this.FormationIndex + " and percentage: " + (object) this.Percentage;
    }
  }
}
