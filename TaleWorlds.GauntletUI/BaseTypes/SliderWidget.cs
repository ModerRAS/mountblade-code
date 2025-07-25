// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.SliderWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class SliderWidget : ImageWidget
  {
    private bool _firstFrame;
    public float HandleRatio;
    protected bool _handleClicked;
    protected bool _valueChangedByMouse;
    private float _downStartTime = -1f;
    private Vector2 _handleClickOffset;
    private bool _snapCursorToHandle;
    private bool _locked;
    private bool _isDiscrete;
    private bool _updateValueOnRelease;
    private Vector2 _localClickPos;
    private float _valueFloat;
    private Widget _handle;

    public bool UpdateValueOnScroll { get; set; }

    public bool DPadMovementEnabled { get; set; } = true;

    private float _holdTimeToStartMovement => 0.3f;

    private float _dynamicIncrement
    {
      get => (double) this.MaxValueFloat - (double) this.MinValueFloat <= 2.0 ? 0.1f : 1f;
    }

    public SliderWidget(UIContext context)
      : base(context)
    {
      this.SliderArea = (Widget) this;
      this._firstFrame = true;
      this.FrictionEnabled = true;
      this.UsedNavigationMovements = GamepadNavigationTypes.Horizontal;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      bool flag = false;
      this.IsUsingNavigation = false;
      if (!this.IsPressed)
      {
        Widget handle = this.Handle;
        if ((handle != null ? (handle.IsPressed ? 1 : 0) : 0) == 0)
        {
          Widget handleExtension = this.HandleExtension;
          if ((handleExtension != null ? (handleExtension.IsPressed ? 1 : 0) : 0) == 0)
          {
            this._downStartTime = -1f;
            this._handleClickOffset = Vector2.Zero;
            this._handleClicked = false;
            this._valueChangedByMouse = false;
            goto label_19;
          }
        }
      }
      if (this.EventManager.IsControllerActive && this.IsRecursivelyVisible() && this.EventManager.GetIsHitThisFrame())
      {
        float num1 = 0.0f;
        if (Input.IsKeyDown(InputKey.ControllerLLeft))
          num1 = -1f;
        else if (Input.IsKeyDown(InputKey.ControllerLRight))
          num1 = 1f;
        if ((double) num1 != 0.0)
        {
          float num2 = num1 * (this.IsDiscrete ? (float) this.DiscreteIncrementInterval : this._dynamicIncrement);
          if ((double) this._downStartTime == -1.0)
          {
            this._downStartTime = this.Context.EventManager.Time;
            this.ValueFloat = MathF.Clamp(this._valueFloat + num2, this.MinValueFloat, this.MaxValueFloat);
            flag = true;
          }
          else if ((double) this._holdTimeToStartMovement < (double) this.Context.EventManager.Time - (double) this._downStartTime)
          {
            this.ValueFloat = MathF.Clamp(this._valueFloat + num2, this.MinValueFloat, this.MaxValueFloat);
            flag = true;
          }
        }
        else
          this._downStartTime = -1f;
        this.IsUsingNavigation = true;
      }
      if (!this._handleClicked)
      {
        this._handleClicked = true;
        this.UpdateLocalClickPosition();
        this._handleClickOffset = this.EventManager.MousePosition - (this.Handle.GlobalPosition + this.Handle.Size * 0.5f);
      }
      this.HandleMouseMove();
label_19:
      this.UpdateScrollBar();
      this.UpdateHandleLength();
      this.Handle?.SetState(this.CurrentState);
      if (this._snapCursorToHandle)
      {
        Vector2 mousePos = this.Handle.GlobalPosition + this.Handle.Size / 2f;
        Input.SetMousePosition((int) mousePos.X, (int) mousePos.Y);
        this.EventManager.UpdateMousePosition(mousePos);
        this._snapCursorToHandle = false;
      }
      if (flag && (double) Input.MouseMoveX == 0.0 && (double) Input.MouseMoveY == 0.0)
        this._snapCursorToHandle = true;
      this._firstFrame = false;
    }

    protected override void OnParallelUpdate(float dt)
    {
      base.OnParallelUpdate(dt);
      if (this.Filler == null)
        return;
      float num = 1f;
      if ((double) MathF.Abs(this.MaxValueFloat - this.MinValueFloat) > 1.4012984643248171E-45)
        num = (float) (((double) this._valueFloat - (double) this.MinValueFloat) / ((double) this.MaxValueFloat - (double) this.MinValueFloat));
      this.Filler.HorizontalAlignment = HorizontalAlignment.Left;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        this.Filler.WidthSizePolicy = SizePolicy.Fixed;
        this.Filler.ScaledSuggestedWidth = this.SliderArea.Size.X * num;
      }
      else
      {
        this.Filler.HeightSizePolicy = SizePolicy.Fixed;
        this.Filler.ScaledSuggestedHeight = this.SliderArea.Size.Y * num;
      }
      this.Filler.DoNotAcceptEvents = true;
      this.Filler.DoNotPassEventsToChildren = true;
    }

    protected internal override void OnMousePressed()
    {
      if (this.Handle == null || !this.Handle.IsVisible)
        return;
      this.IsPressed = true;
      this.UpdateLocalClickPosition();
      this.OnPropertyChanged<string>("MouseDown", nameof (OnMousePressed));
      this.HandleMouseMove();
    }

    protected internal override void OnMouseReleased()
    {
      if (this.Handle == null)
        return;
      this.IsPressed = false;
      if (!this.UpdateValueOnRelease)
        return;
      this.OnPropertyChanged(this._valueFloat, "ValueFloat");
      this.OnPropertyChanged(this.ValueInt, "ValueInt");
      this.OnValueFloatChanged(this._valueFloat);
    }

    protected internal override void OnMouseMove()
    {
      base.OnMouseMove();
      if (!this.IsPressed)
        return;
      this.HandleMouseMove();
    }

    protected internal virtual void OnValueIntChanged(int value)
    {
    }

    protected internal virtual void OnValueFloatChanged(float value)
    {
    }

    private void UpdateScrollBar()
    {
      if (this._firstFrame || !this.IsVisible)
        return;
      this.UpdateHandleByValue();
    }

    private void UpdateLocalClickPosition()
    {
      this._localClickPos = this.EventManager.MousePosition - this.Handle.GlobalPosition;
      if ((double) this._localClickPos.X < 0.0 || (double) this._localClickPos.X > (double) this.Handle.Size.X)
        this._localClickPos.X = this.Handle.Size.X / 2f;
      if ((double) this._localClickPos.Y < -5.0)
      {
        this._localClickPos.Y = -5f;
      }
      else
      {
        if ((double) this._localClickPos.Y <= (double) this.Handle.Size.Y + 5.0)
          return;
        this._localClickPos.Y = this.Handle.Size.Y + 5f;
      }
    }

    private void HandleMouseMove()
    {
      if (this.EventManager.IsControllerActive && (double) Input.MouseMoveX == 0.0 && (double) Input.MouseMoveY == 0.0 || this.Handle == null)
        return;
      float num1 = this.GetValue(this.EventManager.MousePosition - this._localClickPos, this.AlignmentAxis);
      float num2;
      float num3;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        double x = (double) this.ParentWidget.GlobalPosition.X;
        num2 = (float) x + this.Left;
        num3 = (float) x + this.Right - this.Handle.Size.X;
        Widget handleExtension = this.HandleExtension;
        if ((handleExtension != null ? (handleExtension.IsPressed ? 1 : 0) : 0) != 0)
          num1 -= this._handleClickOffset.X;
      }
      else
      {
        double y = (double) this.ParentWidget.GlobalPosition.Y;
        num2 = (float) y + this.Top;
        num3 = (float) y + this.Bottom - this.Handle.Size.Y;
      }
      if ((double) Mathf.Abs(num3 - num2) < 9.9999997473787516E-06)
      {
        this.ValueFloat = 0.0f;
      }
      else
      {
        if ((double) num1 < (double) num2)
          num1 = num2;
        if ((double) num1 > (double) num3)
          num1 = num3;
        float num4 = (num1 - num2) / (num3 - num2);
        this._valueChangedByMouse = true;
        this.ValueFloat = this.MinValueFloat + (this.MaxValueFloat - this.MinValueFloat) * num4;
      }
    }

    private void UpdateHandleByValue()
    {
      if ((double) this._valueFloat < (double) this.MinValueFloat)
        this.ValueFloat = this.MinValueFloat;
      if ((double) this._valueFloat > (double) this.MaxValueFloat)
        this.ValueFloat = this.MaxValueFloat;
      float num = 1f;
      if ((double) MathF.Abs(this.MaxValueFloat - this.MinValueFloat) > 1.4012984643248171E-45)
      {
        num = (float) (((double) this._valueFloat - (double) this.MinValueFloat) / ((double) this.MaxValueFloat - (double) this.MinValueFloat));
        if (this.ReverseDirection)
          num = 1f - num;
      }
      if (this.Handle == null)
        return;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        this.Handle.HorizontalAlignment = HorizontalAlignment.Left;
        this.Handle.VerticalAlignment = VerticalAlignment.Center;
        this.Handle.ScaledPositionXOffset = (this.SliderArea.Size.X - this.Handle.Size.X) * num;
        this.Handle.ScaledPositionYOffset = 0.0f;
      }
      else
      {
        this.Handle.HorizontalAlignment = HorizontalAlignment.Center;
        this.Handle.VerticalAlignment = VerticalAlignment.Bottom;
        this.Handle.ScaledPositionYOffset = (float) (-1.0 * (double) (this.SliderArea.Size.Y - this.Handle.Size.Y) * (1.0 - (double) num));
        this.Handle.ScaledPositionXOffset = 0.0f;
      }
      if (this.HandleExtension == null)
        return;
      this.HandleExtension.HorizontalAlignment = this.Handle.HorizontalAlignment;
      this.HandleExtension.VerticalAlignment = this.Handle.VerticalAlignment;
      this.HandleExtension.ScaledPositionXOffset = this.Handle.ScaledPositionXOffset;
      this.HandleExtension.ScaledPositionYOffset = this.Handle.ScaledPositionYOffset;
    }

    private void UpdateHandleLength()
    {
      if (this.DoNotUpdateHandleSize || !this.IsDiscrete || this.Handle.WidthSizePolicy != SizePolicy.Fixed)
        return;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        this.Handle.SuggestedWidth = Mathf.Clamp(this.SuggestedWidth / (this.MaxValueFloat + 1f), 50f, this.SuggestedWidth / 2f);
      }
      else
      {
        if (this.AlignmentAxis != AlignmentAxis.Vertical)
          return;
        this.Handle.SuggestedHeight = Mathf.Clamp(this.SuggestedHeight / (this.MaxValueFloat + 1f), 50f, this.SuggestedHeight / 2f);
      }
    }

    private float GetValue(Vector2 value, AlignmentAxis alignmentAxis)
    {
      return alignmentAxis == AlignmentAxis.Horizontal ? value.X : value.Y;
    }

    protected override bool OnPreviewMouseScroll()
    {
      if (this.UpdateValueOnScroll)
        this.ValueFloat = MathF.Clamp(this._valueFloat + this._dynamicIncrement * (this.EventManager.DeltaMouseScroll * 0.004f), this.MinValueFloat, this.MaxValueFloat);
      return base.OnPreviewMouseScroll();
    }

    [Editor(false)]
    public bool IsDiscrete
    {
      get => this._isDiscrete;
      set
      {
        if (this._isDiscrete == value)
          return;
        this._isDiscrete = value;
        this.OnPropertyChanged(this._isDiscrete, nameof (IsDiscrete));
      }
    }

    [Editor(false)]
    public bool Locked
    {
      get => this._locked;
      set
      {
        if (this._locked == value)
          return;
        this._locked = value;
        this.OnPropertyChanged(this._locked, nameof (Locked));
      }
    }

    [Editor(false)]
    public bool UpdateValueOnRelease
    {
      get => this._updateValueOnRelease;
      set
      {
        if (this._updateValueOnRelease == value)
          return;
        this._updateValueOnRelease = value;
        this.OnPropertyChanged(this._updateValueOnRelease, nameof (UpdateValueOnRelease));
      }
    }

    [Editor(false)]
    public bool UpdateValueContinuously
    {
      get => !this._updateValueOnRelease;
      set
      {
        if (this.UpdateValueContinuously == value)
          return;
        this._updateValueOnRelease = !value;
        this.OnPropertyChanged(this._updateValueOnRelease, nameof (UpdateValueContinuously));
      }
    }

    [Editor(false)]
    public AlignmentAxis AlignmentAxis { get; set; }

    [Editor(false)]
    public bool ReverseDirection { get; set; }

    [Editor(false)]
    public Widget Filler { get; set; }

    [Editor(false)]
    public Widget HandleExtension { get; set; }

    [Editor(false)]
    public float ValueFloat
    {
      get => this._valueFloat;
      set
      {
        if (this.Locked || (double) MathF.Abs(this._valueFloat - value) <= 9.9999997473787516E-06)
          return;
        float valueFloat = this._valueFloat;
        if ((double) this.MinValueFloat > (double) this.MaxValueFloat)
          return;
        if ((double) this._valueFloat < (double) this.MinValueFloat)
          this._valueFloat = this.MinValueFloat;
        if ((double) this._valueFloat > (double) this.MaxValueFloat)
          this._valueFloat = this.MaxValueFloat;
        this._valueFloat = !this.IsDiscrete ? value : ((double) value < (double) this.MaxValueInt ? Mathf.Floor((value - (float) this.MinValueInt) / (float) this.DiscreteIncrementInterval) * (float) this.DiscreteIncrementInterval + (float) this.MinValueInt : (float) this.MaxValueInt);
        this.UpdateHandleByValue();
        if ((double) MathF.Abs(this._valueFloat - valueFloat) <= 9.9999997473787516E-06 || (!this.UpdateValueOnRelease || this.IsPressed) && this.UpdateValueOnRelease)
          return;
        this.OnPropertyChanged(this._valueFloat, nameof (ValueFloat));
        this.OnPropertyChanged(this.ValueInt, "ValueInt");
        this.OnValueFloatChanged(this._valueFloat);
      }
    }

    [Editor(false)]
    public int ValueInt
    {
      get => MathF.Round(this.ValueFloat);
      set
      {
        this.ValueFloat = (float) value;
        this.OnValueIntChanged(this.ValueInt);
      }
    }

    [Editor(false)]
    public float MinValueFloat { get; set; }

    [Editor(false)]
    public float MaxValueFloat { get; set; }

    [Editor(false)]
    public int MinValueInt
    {
      get => MathF.Round(this.MinValueFloat);
      set => this.MinValueFloat = (float) value;
    }

    [Editor(false)]
    public int MaxValueInt
    {
      get => MathF.Round(this.MaxValueFloat);
      set => this.MaxValueFloat = (float) value;
    }

    public int DiscreteIncrementInterval { get; set; } = 1;

    [Editor(false)]
    public bool DoNotUpdateHandleSize { get; set; }

    [Editor(false)]
    public Widget Handle
    {
      get => this._handle;
      set
      {
        if (this._handle == value)
          return;
        this._handle = value;
        this.UpdateHandleByValue();
        if (this._handle == null)
          return;
        this._handle.ExtendCursorAreaLeft = 6f;
        this._handle.ExtendCursorAreaRight = 6f;
        this._handle.ExtendCursorAreaTop = 3f;
        this._handle.ExtendCursorAreaBottom = 3f;
      }
    }

    [Editor(false)]
    public Widget SliderArea { get; set; }
  }
}
