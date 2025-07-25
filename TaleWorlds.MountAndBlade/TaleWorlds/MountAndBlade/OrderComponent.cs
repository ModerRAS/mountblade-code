// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.OrderComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Diagnostics;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class OrderComponent
  {
    private readonly Timer _tickTimer;
    protected Func<Formation, Vec3> Position;
    protected Func<Formation, Vec2> Direction;
    private Vec2 _previousDirection = Vec2.Invalid;

    public Vec2 GetDirection(Formation f)
    {
      Vec2 direction = this.Direction(f);
      if (f.IsAIControlled && (double) direction.DotProduct(this._previousDirection) > 0.87000000476837158)
        direction = this._previousDirection;
      else
        this._previousDirection = direction;
      return direction;
    }

    protected void CopyPositionAndDirectionFrom(OrderComponent order)
    {
      this.Position = order.Position;
      this.Direction = order.Direction;
    }

    protected OrderComponent(float tickTimerDuration = 0.5f)
    {
      this._tickTimer = new Timer(Mission.Current.CurrentTime, tickTimerDuration);
    }

    public abstract OrderType OrderType { get; }

    internal bool Tick(Formation formation)
    {
      int num = this._tickTimer.Check(Mission.Current.CurrentTime) ? 1 : 0;
      if (num == 0)
        return num != 0;
      this.TickOccasionally(formation, this._tickTimer.PreviousDeltaTime);
      return num != 0;
    }

    [Conditional("DEBUG")]
    protected virtual void TickDebug(Formation formation)
    {
    }

    protected internal virtual void TickOccasionally(Formation formation, float dt)
    {
    }

    protected internal virtual void OnApply(Formation formation)
    {
    }

    protected internal virtual void OnCancel(Formation formation)
    {
    }

    protected internal virtual void OnUnitJoinOrLeave(Agent unit, bool isJoining)
    {
    }

    protected internal virtual bool IsApplicable(Formation formation) => true;

    protected internal virtual bool CanStack => false;

    protected internal virtual bool CancelsPreviousDirectionOrder => false;

    protected internal virtual bool CancelsPreviousArrangementOrder => false;

    protected internal virtual MovementOrder GetSubstituteOrder(Formation formation)
    {
      return MovementOrder.MovementOrderCharge;
    }

    protected internal virtual void OnArrangementChanged(Formation formation)
    {
    }
  }
}
