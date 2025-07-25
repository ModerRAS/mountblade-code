// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromClient.ApplySiegeWeaponOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromClient
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromClient)]
  public sealed class ApplySiegeWeaponOrder : GameNetworkMessage
  {
    public SiegeWeaponOrderType OrderType { get; private set; }

    public ApplySiegeWeaponOrder(SiegeWeaponOrderType orderType) => this.OrderType = orderType;

    public ApplySiegeWeaponOrder()
    {
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.OrderType = (SiegeWeaponOrderType) GameNetworkMessage.ReadIntFromPacket(CompressionMission.OrderTypeCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteIntToPacket((int) this.OrderType, CompressionMission.OrderTypeCompressionInfo);
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.SiegeWeaponsDetailed | MultiplayerMessageFilter.Orders;
    }

    protected override string OnGetLogFormat() => "Apply siege order: " + (object) this.OrderType;
  }
}
