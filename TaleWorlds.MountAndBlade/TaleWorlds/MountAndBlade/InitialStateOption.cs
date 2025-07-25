// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.InitialStateOption
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class InitialStateOption
  {
    private Action _action;

    public int OrderIndex { get; private set; }

    public TextObject Name { get; private set; }

    public string Id { get; private set; }

    public Func<(bool, TextObject)> IsDisabledAndReason { get; private set; }

    public TextObject EnabledHint { get; private set; }

    public InitialStateOption(
      string id,
      TextObject name,
      int orderIndex,
      Action action,
      Func<(bool, TextObject)> isDisabledAndReason,
      TextObject enabledHint = null)
    {
      this.Name = name;
      this.Id = id;
      this.OrderIndex = orderIndex;
      this._action = action;
      this.IsDisabledAndReason = isDisabledAndReason;
      this.EnabledHint = enabledHint;
      string.IsNullOrEmpty(this.IsDisabledAndReason().Item2?.ToString());
    }

    public void DoAction()
    {
      Action action = this._action;
      if (action == null)
        return;
      action();
    }
  }
}
