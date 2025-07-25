// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FacingOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct FacingOrder
  {
    public readonly FacingOrder.FacingOrderEnum OrderEnum;
    private readonly Vec2 _lookAtDirection;
    public static readonly FacingOrder FacingOrderLookAtEnemy = new FacingOrder(FacingOrder.FacingOrderEnum.LookAtEnemy);

    public static FacingOrder FacingOrderLookAtDirection(Vec2 direction)
    {
      return new FacingOrder(FacingOrder.FacingOrderEnum.LookAtDirection, direction);
    }

    private FacingOrder(FacingOrder.FacingOrderEnum orderEnum, Vec2 direction)
    {
      this.OrderEnum = orderEnum;
      this._lookAtDirection = direction;
    }

    private FacingOrder(FacingOrder.FacingOrderEnum orderEnum)
    {
      this.OrderEnum = orderEnum;
      this._lookAtDirection = Vec2.Invalid;
    }

    private Vec2 GetDirectionAux(Formation f, Agent targetAgent)
    {
      if (f.PhysicalClass.IsMounted() && targetAgent != null)
      {
        Vec3 velocity = targetAgent.Velocity;
        if ((double) velocity.LengthSquared > (double) targetAgent.RunSpeedCached * (double) targetAgent.RunSpeedCached * 0.090000003576278687)
        {
          velocity = targetAgent.Velocity;
          return velocity.AsVec2.Normalized();
        }
      }
      if (this.OrderEnum == FacingOrder.FacingOrderEnum.LookAtDirection)
        return this._lookAtDirection;
      if (f.Arrangement is CircularFormation || f.Arrangement is SquareFormation)
        return f.Direction;
      Vec2 currentPosition = f.CurrentPosition;
      Vec2 averageEnemyPosition = f.QuerySystem.WeightedAverageEnemyPosition;
      if (!averageEnemyPosition.IsValid)
        return f.Direction;
      Vec2 vec2 = (averageEnemyPosition - currentPosition).Normalized();
      float length = (averageEnemyPosition - currentPosition).Length;
      int enemyUnitCount = f.QuerySystem.Team.EnemyUnitCount;
      int countOfUnits = f.CountOfUnits;
      Vec2 vector2 = f.Direction;
      bool flag = (double) length >= (double) countOfUnits * 0.20000000298023224;
      if (enemyUnitCount == 0 || countOfUnits == 0)
        flag = false;
      float num = !flag ? 1f : MBMath.ClampFloat((float) countOfUnits * 1f / (float) enemyUnitCount, 0.333333343f, 3f) * MBMath.ClampFloat(length / (float) countOfUnits, 0.333333343f, 3f);
      if (flag && (double) MathF.Abs(vec2.AngleBetween(vector2)) > 0.17453292012214661 * (double) num)
        vector2 = vec2;
      return vector2;
    }

    public OrderType OrderType
    {
      get
      {
        return this.OrderEnum != FacingOrder.FacingOrderEnum.LookAtDirection ? OrderType.LookAtEnemy : OrderType.LookAtDirection;
      }
    }

    public Vec2 GetDirection(Formation f, Agent targetAgent = null)
    {
      return this.GetDirectionAux(f, targetAgent);
    }

    public override bool Equals(object obj)
    {
      return obj is FacingOrder facingOrder && facingOrder == this;
    }

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(FacingOrder f1, FacingOrder f2) => f1.OrderEnum != f2.OrderEnum;

    public static bool operator ==(FacingOrder f1, FacingOrder f2) => f1.OrderEnum == f2.OrderEnum;

    public enum FacingOrderEnum
    {
      LookAtDirection,
      LookAtEnemy,
    }
  }
}
