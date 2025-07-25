// Decompiled with JetBrains decompiler
// Type: SandBox.View.SandboxView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View
{
  public abstract class SandboxView
  {
    public bool IsFinalized { get; protected set; }

    public ScreenLayer Layer { get; protected set; }

    protected internal virtual void OnActivate()
    {
    }

    protected internal virtual void OnDeactivate()
    {
    }

    protected internal virtual void OnInitialize()
    {
    }

    protected internal virtual void OnFinalize() => this.IsFinalized = true;

    protected internal virtual void OnFrameTick(float dt)
    {
    }
  }
}
