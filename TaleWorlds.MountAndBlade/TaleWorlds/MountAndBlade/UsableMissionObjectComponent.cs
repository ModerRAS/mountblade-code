// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.UsableMissionObjectComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class UsableMissionObjectComponent
  {
    protected internal virtual void OnAdded(Scene scene)
    {
    }

    protected internal virtual void OnRemoved()
    {
    }

    protected internal virtual void OnFocusGain(Agent userAgent)
    {
    }

    protected internal virtual void OnFocusLose(Agent userAgent)
    {
    }

    public virtual bool IsOnTickRequired() => false;

    protected internal virtual void OnTick(float dt)
    {
    }

    protected internal virtual void OnEditorTick(float dt)
    {
    }

    protected internal virtual void OnEditorValidate()
    {
    }

    protected internal virtual void OnUse(Agent userAgent)
    {
    }

    protected internal virtual void OnUseStopped(Agent userAgent, bool isSuccessful = true)
    {
    }

    protected internal virtual void OnMissionReset()
    {
    }
  }
}
