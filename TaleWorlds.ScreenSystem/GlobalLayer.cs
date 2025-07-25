// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.GlobalLayer
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using System;
using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public class GlobalLayer : IComparable
  {
    public ScreenLayer Layer { get; protected set; }

    internal void EarlyTick(float dt) => this.OnEarlyTick(dt);

    internal void Tick(float dt)
    {
      this.OnTick(dt);
      this.Layer.Tick(dt);
    }

    internal void LateTick(float dt)
    {
      this.OnLateTick(dt);
      this.Layer.LateTick(dt);
    }

    protected virtual void OnEarlyTick(float dt)
    {
    }

    protected virtual void OnTick(float dt)
    {
    }

    protected virtual void OnLateTick(float dt)
    {
    }

    internal void Update(IReadOnlyList<int> lastKeysPressed) => this.Layer.Update(lastKeysPressed);

    public int CompareTo(object obj)
    {
      return !(obj is GlobalLayer globalLayer) ? -1 : this.Layer.CompareTo((object) globalLayer.Layer);
    }

    public virtual void UpdateLayout() => this.Layer.UpdateLayout();
  }
}
