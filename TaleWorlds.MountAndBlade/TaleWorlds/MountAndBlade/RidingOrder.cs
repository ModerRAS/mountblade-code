// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RidingOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct RidingOrder
  {
    public readonly RidingOrder.RidingOrderEnum OrderEnum;
    public static readonly RidingOrder RidingOrderFree = new RidingOrder(RidingOrder.RidingOrderEnum.Free);
    public static readonly RidingOrder RidingOrderMount = new RidingOrder(RidingOrder.RidingOrderEnum.Mount);
    public static readonly RidingOrder RidingOrderDismount = new RidingOrder(RidingOrder.RidingOrderEnum.Dismount);

    private RidingOrder(RidingOrder.RidingOrderEnum orderEnum) => this.OrderEnum = orderEnum;

    public OrderType OrderType
    {
      get
      {
        if (this.OrderEnum == RidingOrder.RidingOrderEnum.Free)
          return OrderType.RideFree;
        return this.OrderEnum != RidingOrder.RidingOrderEnum.Mount ? OrderType.Dismount : OrderType.Mount;
      }
    }

    public override bool Equals(object obj)
    {
      return obj is RidingOrder ridingOrder && ridingOrder == this;
    }

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(RidingOrder r1, RidingOrder r2) => r1.OrderEnum != r2.OrderEnum;

    public static bool operator ==(RidingOrder r1, RidingOrder r2) => r1.OrderEnum == r2.OrderEnum;

    public enum RidingOrderEnum
    {
      Free,
      Mount,
      Dismount,
    }
  }
}
