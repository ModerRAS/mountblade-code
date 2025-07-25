// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ApplyOrderWithPosition
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
  public sealed class ApplyOrderWithPosition : GameNetworkMessage
  {
    public OrderType OrderType { get; private set; }

    public Vec3 Position { get; private set; }

    public ApplyOrderWithPosition(OrderType orderType, Vec3 position)
    {
      this.OrderType = orderType;
      this.Position = position;
    }

    public ApplyOrderWithPosition()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OrderType = (OrderType) GameNetworkMessage.ReadIntFromPacket(CompressionMission.OrderTypeCompressionInfo, ref bufferReadValid);
      this.Position = GameNetworkMessage.ReadVec3FromPacket(CompressionMission.OrderPositionCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.OrderType, CompressionMission.OrderTypeCompressionInfo);
      GameNetworkMessage.WriteVec3ToPacket(this.Position, CompressionMission.OrderPositionCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter() => MultiplayerMessageFilter.Orders;

    protected override string OnGetLogFormat()
    {
      return "Apply order: " + (object) this.OrderType + ", to position: " + (object) this.Position;
    }
  }
}
