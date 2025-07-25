// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ApplyOrderWithTwoPositions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class ApplyOrderWithTwoPositions : GameNetworkMessage
  {
    public OrderType OrderType { get; private set; }

    public Vec3 Position1 { get; private set; }

    public Vec3 Position2 { get; private set; }

    public ApplyOrderWithTwoPositions(OrderType orderType, Vec3 position1, Vec3 position2)
    {
      this.OrderType = orderType;
      this.Position1 = position1;
      this.Position2 = position2;
    }

    public ApplyOrderWithTwoPositions()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OrderType = (OrderType) GameNetworkMessage.ReadIntFromPacket(CompressionMission.OrderTypeCompressionInfo, ref bufferReadValid);
      this.Position1 = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.OrderPositionCompressionInfo, ref bufferReadValid);
      this.Position2 = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.OrderPositionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.OrderType, CompressionMission.OrderTypeCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Position1, CompressionMission.OrderPositionCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Position2, CompressionMission.OrderPositionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Orders;

    protected override string OnGetLogFormat()
    {
      return "Apply order: " + (object) this.OrderType + ", to position 1: " + (object) this.Position1 + " and position 2: " + (object) this.Position2;
    }
  }
}
