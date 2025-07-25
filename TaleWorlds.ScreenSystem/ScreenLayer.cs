// Decompiled with JetBrains decompiler
// Type: TaleWorlds.ScreenSystem.ScreenLayer
// Assembly: TaleWorlds.ScreenSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 93A4E59A-2741-4DEE-9F6A-10E242791002
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.ScreenSystem.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.ScreenSystem
{
  public abstract class ScreenLayer : IComparable
  {
    public readonly string _categoryId;

    public float Scale => ScreenManager.Scale;

    public Vec2 UsableArea => ScreenManager.UsableArea;

    public InputContext Input { get; private set; }

    public InputRestrictions InputRestrictions { get; private set; }

    public string Name { get; set; }

    public bool LastActiveState { get; set; }

    public bool Finalized { get; private set; }

    public bool IsActive { get; private set; }

    public bool MouseEnabled { get; protected internal set; }

    public bool KeyboardEnabled { get; protected internal set; }

    public bool GamepadEnabled { get; protected internal set; }

    public bool IsHitThisFrame { get; internal set; }

    public bool IsFocusLayer { get; set; }

    public CursorType ActiveCursor { get; set; }

    protected TaleWorlds.Library.InputType _usedInputs { get; set; }

    protected bool? _isMousePressedByThisLayer { get; set; }

    public int ScreenOrderInLastFrame { get; internal set; }

    protected ScreenLayer(int localOrder, string categoryId)
    {
      this.InputRestrictions = new InputRestrictions(localOrder);
      this.Input = new InputContext();
      this._categoryId = categoryId;
      this.Name = nameof (ScreenLayer);
      this.LastActiveState = true;
      this.Finalized = false;
      this.IsActive = false;
      this.IsFocusLayer = false;
      this._usedInputs = TaleWorlds.Library.InputType.None;
      this._isMousePressedByThisLayer = new bool?();
      this.ActiveCursor = CursorType.Default;
    }

    protected internal virtual void Tick(float dt)
    {
    }

    protected internal virtual void LateTick(float dt)
    {
    }

    protected internal virtual void OnLateUpdate(float dt)
    {
    }

    protected internal virtual void Update(IReadOnlyList<int> lastKeysPressed)
    {
    }

    internal void HandleFinalize()
    {
      this.OnFinalize();
      this.Finalized = true;
    }

    protected virtual void OnActivate() => this.Finalized = false;

    protected virtual void OnDeactivate()
    {
    }

    protected internal virtual void OnLoseFocus()
    {
    }

    internal void HandleActivate()
    {
      this.IsActive = true;
      this.OnActivate();
    }

    internal void HandleDeactivate()
    {
      this.OnDeactivate();
      this.IsActive = false;
      ScreenManager.TryLoseFocus(this);
    }

    protected virtual void OnFinalize()
    {
    }

    protected internal virtual void RefreshGlobalOrder(ref int currentOrder)
    {
    }

    public virtual void DrawDebugInfo()
    {
      ScreenManager.EngineInterface.DrawDebugText(string.Format("Order: {0}", (object) this.InputRestrictions.Order));
      ScreenManager.EngineInterface.DrawDebugText(string.Format("Keys Allowed: {0}", (object) this.Input.IsKeysAllowed));
      ScreenManager.EngineInterface.DrawDebugText(string.Format("Controller Allowed: {0}", (object) this.Input.IsControllerAllowed));
      ScreenManager.EngineInterface.DrawDebugText(string.Format("Mouse Button Allowed: {0}", (object) this.Input.IsMouseButtonAllowed));
      ScreenManager.EngineInterface.DrawDebugText(string.Format("Mouse Wheel Allowed: {0}", (object) this.Input.IsMouseWheelAllowed));
    }

    public virtual void EarlyProcessEvents(TaleWorlds.Library.InputType handledInputs, bool? isMousePressed)
    {
      this._usedInputs = handledInputs;
      this._isMousePressedByThisLayer = isMousePressed;
      bool? nullable = isMousePressed;
      bool flag = true;
      if (nullable.GetValueOrDefault() == flag & nullable.HasValue)
        this.Input.MouseOnMe = true;
      if (!this.Input.MouseOnMe)
        return;
      this._usedInputs |= TaleWorlds.Library.InputType.MouseButton;
    }

    public virtual void ProcessEvents()
    {
      this.Input.IsKeysAllowed = this._usedInputs.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.Key);
      this.Input.IsMouseButtonAllowed = this._usedInputs.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseButton);
      this.Input.IsMouseWheelAllowed = this._usedInputs.HasAnyFlag<TaleWorlds.Library.InputType>(TaleWorlds.Library.InputType.MouseWheel);
    }

    public virtual void LateProcessEvents()
    {
      bool? pressedByThisLayer = this._isMousePressedByThisLayer;
      bool flag = false;
      if (!(pressedByThisLayer.GetValueOrDefault() == flag & pressedByThisLayer.HasValue))
        return;
      this.Input.MouseOnMe = false;
    }

    public virtual bool HitTest(Vector2 position) => false;

    public virtual bool HitTest() => false;

    public virtual bool FocusTest() => false;

    public InputUsageMask InputUsageMask => this.InputRestrictions.InputUsageMask;

    public virtual bool IsFocusedOnInput() => false;

    public virtual void OnOnScreenKeyboardDone(string inputText)
    {
    }

    public virtual void OnOnScreenKeyboardCanceled()
    {
    }

    public int CompareTo(object obj)
    {
      if (!(obj is ScreenLayer screenLayer))
        return 1;
      if (screenLayer == this)
        return 0;
      return this.InputRestrictions.Order == screenLayer.InputRestrictions.Order ? this.InputRestrictions.Id.CompareTo(screenLayer.InputRestrictions.Id) : this.InputRestrictions.Order.CompareTo(screenLayer.InputRestrictions.Order);
    }

    public virtual void UpdateLayout()
    {
    }
  }
}
