// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FiringOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct FiringOrder
  {
    public readonly FiringOrder.RangedWeaponUsageOrderEnum OrderEnum;
    public static readonly FiringOrder FiringOrderFireAtWill = new FiringOrder(FiringOrder.RangedWeaponUsageOrderEnum.FireAtWill);
    public static readonly FiringOrder FiringOrderHoldYourFire = new FiringOrder(FiringOrder.RangedWeaponUsageOrderEnum.HoldYourFire);

    private FiringOrder(FiringOrder.RangedWeaponUsageOrderEnum orderEnum)
    {
      this.OrderEnum = orderEnum;
    }

    public OrderType OrderType
    {
      get
      {
        return this.OrderEnum != FiringOrder.RangedWeaponUsageOrderEnum.FireAtWill ? OrderType.HoldFire : OrderType.FireAtWill;
      }
    }

    public override bool Equals(object obj)
    {
      return obj is FiringOrder firingOrder && firingOrder == this;
    }

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(FiringOrder f1, FiringOrder f2) => f1.OrderEnum != f2.OrderEnum;

    public static bool operator ==(FiringOrder f1, FiringOrder f2) => f1.OrderEnum == f2.OrderEnum;

    public enum RangedWeaponUsageOrderEnum
    {
      FireAtWill,
      HoldYourFire,
    }
  }
}
