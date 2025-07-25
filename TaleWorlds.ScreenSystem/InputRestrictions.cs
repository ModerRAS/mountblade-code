// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.InputRestrictions
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public class InputRestrictions
  {
    public int Order { get; private set; }

    public Guid Id { get; private set; }

    public bool MouseVisibility { get; private set; }

    public bool CanOverrideFocusOnHit { get; private set; }

    public InputUsageMask InputUsageMask { get; private set; }

    public InputRestrictions(int order)
    {
      this.Id = new Guid();
      this.InputUsageMask = InputUsageMask.Invalid;
      this.Order = order;
    }

    public void SetMouseVisibility(bool isVisible) => this.MouseVisibility = isVisible;

    public void SetInputRestrictions(bool isMouseVisible = true, InputUsageMask mask = InputUsageMask.All)
    {
      this.InputUsageMask = mask;
      this.SetMouseVisibility(isMouseVisible);
    }

    public void ResetInputRestrictions()
    {
      this.InputUsageMask = InputUsageMask.Invalid;
      this.SetMouseVisibility(false);
    }

    public void SetCanOverrideFocusOnHit(bool canOverrideFocusOnHit)
    {
      this.CanOverrideFocusOnHit = canOverrideFocusOnHit;
    }
  }
}
