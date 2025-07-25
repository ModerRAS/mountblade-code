// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ScrollbarWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ScrollbarWidget : ImageWidget
  {
    private bool _locked;
    private bool _isDiscrete;
    private float _valueFloat;
    public float HandleRatio;
    private Widget _handle;
    private bool _firstFrame;
    private Vector2 _localClickPos;
    private bool _handleClicked;

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
    public AlignmentAxis AlignmentAxis { get; set; }

    [Editor(false)]
    public bool ReverseDirection { get; set; }

    [Editor(false)]
    public float ValueFloat
    {
      get => this._valueFloat;
      set
      {
        if (this.Locked || (double) MathF.Abs(this._valueFloat - value) <= 9.9999997473787516E-06)
          return;
        float valueFloat = this._valueFloat;
        if ((double) this.MinValue > (double) this.MaxValue)
          return;
        if ((double) this._valueFloat < (double) this.MinValue)
          this._valueFloat = this.MinValue;
        if ((double) this._valueFloat > (double) this.MaxValue)
          this._valueFloat = this.MaxValue;
        this._valueFloat = !this.IsDiscrete ? value : (float) MathF.Round(value);
        this.UpdateHandleByValue();
        if ((double) MathF.Abs(this._valueFloat - valueFloat) <= 9.9999997473787516E-06)
          return;
        this.OnPropertyChanged(this._valueFloat, nameof (ValueFloat));
        this.OnPropertyChanged(this.ValueInt, "ValueInt");
      }
    }

    [Editor(false)]
    public int ValueInt
    {
      get => MathF.Round(this.ValueFloat);
      set => this.ValueFloat = (float) value;
    }

    [Editor(false)]
    public float MinValue { get; set; }

    [Editor(false)]
    public float MaxValue { get; set; }

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
      }
    }

    [Editor(false)]
    public Widget ScrollbarArea { get; set; }

    public ScrollbarWidget(UIContext context)
      : base(context)
    {
      this.ScrollbarArea = (Widget) this;
      this._firstFrame = true;
    }

    protected override void OnLateUpdate(float dt)
    {
      this.OnUpdate(dt);
      if (this.Handle.IsPressed)
      {
        if (!this._handleClicked)
        {
          this._handleClicked = true;
          this._localClickPos = this.EventManager.MousePosition - this.Handle.GlobalPosition;
        }
        this.HandleMouseMove();
      }
      else
        this._handleClicked = false;
      this.UpdateScrollBar();
      this.UpdateHandleLength();
      this._firstFrame = false;
    }

    protected internal override void OnMousePressed()
    {
      if (this.Handle == null)
        return;
      this.IsPressed = true;
      this._localClickPos = this.EventManager.MousePosition - this.Handle.GlobalPosition;
      if ((double) this._localClickPos.X < -5.0)
        this._localClickPos.X = -5f;
      else if ((double) this._localClickPos.X > (double) this.Handle.Size.X + 5.0)
        this._localClickPos.X = this.Handle.Size.X + 5f;
      if ((double) this._localClickPos.Y < -5.0)
        this._localClickPos.Y = -5f;
      else if ((double) this._localClickPos.Y > (double) this.Handle.Size.Y + 5.0)
        this._localClickPos.Y = this.Handle.Size.Y + 5f;
      this.HandleMouseMove();
    }

    protected internal override void OnMouseReleased()
    {
      if (this.Handle == null)
        return;
      this.IsPressed = false;
    }

    public void SetValueForced(float value)
    {
      if ((double) value > (double) this.MaxValue)
        this.MaxValue = value;
      else if ((double) value < (double) this.MinValue)
        this.MinValue = value;
      this.ValueFloat = value;
    }

    private void UpdateScrollBar()
    {
      if (this._firstFrame)
        return;
      this.UpdateHandleByValue();
    }

    private float GetValue(Vector2 value, AlignmentAxis alignmentAxis)
    {
      return alignmentAxis == AlignmentAxis.Horizontal ? value.X : value.Y;
    }

    private void HandleMouseMove()
    {
      if (this.Handle == null)
        return;
      float num1 = this.GetValue(this.EventManager.MousePosition - this._localClickPos, this.AlignmentAxis);
      float num2;
      float num3;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        double x = (double) this.ParentWidget.GlobalPosition.X;
        num2 = (float) x + this.Left;
        num3 = (float) x + this.Right - this.Handle.Size.X;
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
        this.ValueFloat = this.MinValue + (this.MaxValue - this.MinValue) * ((num1 - num2) / (num3 - num2));
      }
      this.UpdateHandleByValue();
    }

    private void UpdateHandleLength()
    {
      if (this.DoNotUpdateHandleSize || !this.IsDiscrete || this.Handle.WidthSizePolicy != SizePolicy.Fixed)
        return;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        this.Handle.SuggestedWidth = Mathf.Clamp(this.SuggestedWidth / (this.MaxValue + 1f), 50f, this.SuggestedWidth / 2f);
      }
      else
      {
        if (this.AlignmentAxis != AlignmentAxis.Vertical)
          return;
        this.Handle.SuggestedHeight = Mathf.Clamp(this.SuggestedHeight / (this.MaxValue + 1f), 50f, this.SuggestedHeight / 2f);
      }
    }

    private void UpdateHandleByValue()
    {
      if ((double) this._valueFloat < (double) this.MinValue)
        this.ValueFloat = this.MinValue;
      if ((double) this._valueFloat > (double) this.MaxValue)
        this.ValueFloat = this.MaxValue;
      float num = 0.0f;
      if ((double) MathF.Abs(this.MaxValue - this.MinValue) > 1.4012984643248171E-45)
      {
        num = (float) (((double) this._valueFloat - (double) this.MinValue) / ((double) this.MaxValue - (double) this.MinValue));
        if (this.ReverseDirection)
          num = 1f - num;
      }
      if (this.Handle == null)
        return;
      if (this.AlignmentAxis == AlignmentAxis.Horizontal)
      {
        this.Handle.HorizontalAlignment = HorizontalAlignment.Left;
        this.Handle.VerticalAlignment = VerticalAlignment.Center;
        this.Handle.ScaledPositionXOffset = (this.ScrollbarArea.Size.X - this.Handle.Size.X) * num;
        this.Handle.ScaledPositionYOffset = 0.0f;
      }
      else
      {
        this.Handle.HorizontalAlignment = HorizontalAlignment.Center;
        this.Handle.VerticalAlignment = VerticalAlignment.Bottom;
        this.Handle.ScaledPositionYOffset = (float) (-1.0 * (double) (this.ScrollbarArea.Size.Y - this.Handle.Size.Y) * (1.0 - (double) num));
        this.Handle.ScaledPositionXOffset = 0.0f;
      }
    }
  }
}
