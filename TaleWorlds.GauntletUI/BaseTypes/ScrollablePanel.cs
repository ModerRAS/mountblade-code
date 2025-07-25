// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ScrollablePanel
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using TaleWorlds.GauntletUI.GamepadNavigation;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ScrollablePanel : Widget
  {
    private Widget _innerPanel;
    protected bool _canScrollHorizontal;
    protected bool _canScrollVertical;
    public float ControllerScrollSpeed = 0.2f;
    public float MouseScrollSpeed = 0.2f;
    public AlignmentAxis MouseScrollAxis;
    private float _verticalScrollVelocity;
    private float _horizontalScrollVelocity;
    private ScrollablePanel.ScrollbarInterpolationController _verticalScrollbarInterpolationController;
    private float _scrollOffset;
    private ScrollablePanel.ScrollbarInterpolationController _horizontalScrollbarInterpolationController;
    private List<ScrollablePanelFixedHeaderWidget> _fixedHeaders = new List<ScrollablePanelFixedHeaderWidget>();
    private ScrollbarWidget _horizontalScrollbar;
    private ScrollbarWidget _verticalScrollbar;
    private bool _autoHideScrollBars;
    private bool _autoHideScrollBarHandle;
    private bool _autoAdjustScrollbarHandleSize = true;
    private bool _onlyAcceptScrollEventIfCanScroll;

    public event Action<float> OnScroll;

    public Widget ClipRect { get; set; }

    public Widget InnerPanel
    {
      get => this._innerPanel;
      set
      {
        if (value == this._innerPanel)
          return;
        this._innerPanel = value;
        this.OnInnerPanelValueChanged();
      }
    }

    public ScrollbarWidget ActiveScrollbar => this.VerticalScrollbar ?? this.HorizontalScrollbar;

    public bool UpdateScrollbarVisibility { get; set; } = true;

    public Widget FixedHeader { get; set; }

    public Widget ScrolledHeader { get; set; }

    public ScrollablePanel(UIContext context)
      : base(context)
    {
      this._verticalScrollbarInterpolationController = new ScrollablePanel.ScrollbarInterpolationController();
      this._horizontalScrollbarInterpolationController = new ScrollablePanel.ScrollbarInterpolationController();
    }

    public void ResetTweenSpeed()
    {
      this._verticalScrollVelocity = 0.0f;
      this._horizontalScrollVelocity = 0.0f;
    }

    protected override bool OnPreviewMouseScroll()
    {
      return !this.OnlyAcceptScrollEventIfCanScroll || this._canScrollHorizontal || this._canScrollVertical;
    }

    protected override bool OnPreviewRightStickMovement()
    {
      return (!this.OnlyAcceptScrollEventIfCanScroll || this._canScrollHorizontal || this._canScrollVertical) && !GauntletGamepadNavigationManager.Instance.IsCursorMovingForNavigation && !GauntletGamepadNavigationManager.Instance.AnyWidgetUsingNavigation;
    }

    protected internal override void OnMouseScroll()
    {
      float num = this.EventManager.DeltaMouseScroll * this.MouseScrollSpeed;
      if ((Input.IsKeyDown(InputKey.LeftShift) || Input.IsKeyDown(InputKey.RightShift) || this.VerticalScrollbar == null) && this.HorizontalScrollbar != null)
        this._horizontalScrollVelocity += num;
      else if (this.VerticalScrollbar != null)
        this._verticalScrollVelocity += num;
      this.StopAllInterpolations();
      Action<float> onScroll = this.OnScroll;
      if (onScroll == null)
        return;
      onScroll(num);
    }

    protected internal override void OnRightStickMovement()
    {
      float a = -this.EventManager.RightStickHorizontalScrollAmount * this.ControllerScrollSpeed;
      float b = this.EventManager.RightStickVerticalScrollAmount * this.ControllerScrollSpeed;
      this._horizontalScrollVelocity += a;
      this._verticalScrollVelocity += b;
      this.StopAllInterpolations();
      Action<float> onScroll = this.OnScroll;
      if (onScroll == null)
        return;
      onScroll(Mathf.Max(a, b));
    }

    private void StopAllInterpolations()
    {
      this._verticalScrollbarInterpolationController.StopInterpolation();
      this._horizontalScrollbarInterpolationController.StopInterpolation();
    }

    private void OnInnerPanelChildAddedEventFire(
      Widget widget,
      string eventName,
      object[] eventArgs)
    {
      if (!(eventName == "ItemAdd") && !(eventName == "AfterItemRemove") || eventArgs.Length == 0 || !(eventArgs[0] is ScrollablePanelFixedHeaderWidget))
        return;
      this.RefreshFixedHeaders();
      this.StopAllInterpolations();
    }

    private void OnInnerPanelValueChanged()
    {
      if (this.InnerPanel == null)
        return;
      this.InnerPanel.EventFire += new Action<Widget, string, object[]>(this.OnInnerPanelChildAddedEventFire);
      this.RefreshFixedHeaders();
      this.StopAllInterpolations();
    }

    private void OnFixedHeaderPropertyChangedEventFire(
      Widget widget,
      string eventName,
      object[] eventArgs)
    {
      if (!(eventName == "FixedHeaderPropertyChanged"))
        return;
      this.RefreshFixedHeaders();
      this.StopAllInterpolations();
    }

    private void RefreshFixedHeaders()
    {
      foreach (Widget fixedHeader in this._fixedHeaders)
        fixedHeader.EventFire -= new Action<Widget, string, object[]>(this.OnFixedHeaderPropertyChangedEventFire);
      this._fixedHeaders.Clear();
      float num1 = 0.0f;
      for (int i = 0; i < this.InnerPanel.ChildCount; ++i)
      {
        if (this.InnerPanel.GetChild(i) is ScrollablePanelFixedHeaderWidget child && child.IsRelevant)
        {
          float num2 = num1 + child.AdditionalTopOffset;
          child.TopOffset = num2;
          num1 = num2 + child.SuggestedHeight;
          this._fixedHeaders.Add(child);
          child.EventFire += new Action<Widget, string, object[]>(this.OnFixedHeaderPropertyChangedEventFire);
        }
      }
      float num3 = 0.0f;
      for (int index = this._fixedHeaders.Count - 1; index >= 0; --index)
      {
        float num4 = num3 + this._fixedHeaders[index].AdditionalBottomOffset;
        this._fixedHeaders[index].BottomOffset = num4;
        num3 = num4 + this._fixedHeaders[index].SuggestedHeight;
      }
    }

    private void AdjustVerticalScrollBar()
    {
      if (this.VerticalScrollbar == null)
        return;
      if (this.InnerPanel.VerticalAlignment == VerticalAlignment.Bottom)
        this.VerticalScrollbar.ValueFloat = this.VerticalScrollbar.MaxValue - this.InnerPanel.ScaledPositionOffset.Y;
      else
        this.VerticalScrollbar.ValueFloat = -this.InnerPanel.ScaledPositionOffset.Y;
    }

    private void AdjustHorizontalScrollBar()
    {
      if (this.HorizontalScrollbar == null)
        return;
      this.HorizontalScrollbar.ValueFloat = -this.InnerPanel.ScaledPositionOffset.X;
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      this.UpdateScrollInterpolation(dt);
      this.UpdateScrollablePanel(dt);
    }

    protected void SetActiveCursor(UIContext.MouseCursors cursor)
    {
      this.Context.ActiveCursorOfContext = cursor;
    }

    private void UpdateScrollInterpolation(float dt)
    {
      this._verticalScrollbarInterpolationController.Tick(dt);
      this._horizontalScrollbarInterpolationController.Tick(dt);
    }

    private void UpdateScrollablePanel(float dt)
    {
      if (this.InnerPanel == null || this.ClipRect == null)
        return;
      this._canScrollHorizontal = false;
      this._canScrollVertical = false;
      Vec2 resolution;
      if (this.HorizontalScrollbar != null)
      {
        bool flag1 = this.IsVisible;
        bool flag2 = this.IsVisible;
        float num1 = this.InnerPanel.ScaledPositionXOffset - this.InnerPanel.Left;
        this.InnerPanel.ScaledPositionXOffset = -this.HorizontalScrollbar.ValueFloat;
        this._scrollOffset = this.InnerPanel.ScaledPositionOffset.X;
        this.HorizontalScrollbar.ReverseDirection = false;
        this.HorizontalScrollbar.MinValue = 0.0f;
        if (this.FixedHeader != null && this.ScrolledHeader != null)
          this.FixedHeader.IsVisible = (double) this.FixedHeader.GlobalPosition.Y > (double) this.ScrolledHeader.GlobalPosition.Y;
        if ((double) this.InnerPanel.Size.X > (double) this.ClipRect.Size.X)
        {
          this._canScrollHorizontal = true;
          this.HorizontalScrollbar.MaxValue = TaleWorlds.Library.MathF.Max(1f, this.InnerPanel.Size.X - this.ClipRect.Size.X);
          if (this.AutoAdjustScrollbarHandleSize && this.HorizontalScrollbar.Handle != null)
            this.HorizontalScrollbar.Handle.ScaledSuggestedWidth = this.HorizontalScrollbar.Size.X * (this.ClipRect.Size.X / this.InnerPanel.Size.X);
          if ((double) TaleWorlds.Library.MathF.Abs(this._horizontalScrollVelocity) > 1.0 / 1000.0)
          {
            double scrollOffset = (double) this._scrollOffset;
            double num2 = (double) this._horizontalScrollVelocity * ((double) dt / 0.016000000759959221);
            resolution = Input.Resolution;
            double num3 = (double) resolution.X / 1920.0;
            double num4 = num2 * num3;
            this._scrollOffset = (float) (scrollOffset + num4);
            this._horizontalScrollVelocity = TaleWorlds.Library.MathF.Lerp(this._horizontalScrollVelocity, 0.0f, 1f - TaleWorlds.Library.MathF.Pow(1f / 1000f, dt));
          }
          else
            this._horizontalScrollVelocity = 0.0f;
          this.InnerPanel.ScaledPositionXOffset = this._scrollOffset;
          this.AdjustHorizontalScrollBar();
          if (this.InnerPanel.HorizontalAlignment == HorizontalAlignment.Center)
            this.InnerPanel.ScaledPositionXOffset += num1;
        }
        else
        {
          this.HorizontalScrollbar.Handle.ScaledSuggestedWidth = this.HorizontalScrollbar.Size.X;
          this.InnerPanel.ScaledPositionXOffset = 0.0f;
          this.HorizontalScrollbar.ValueFloat = 0.0f;
          this._horizontalScrollVelocity = 0.0f;
          this._scrollOffset = 0.0f;
          if (this.AutoHideScrollBars)
            flag1 = false;
          if (this.AutoHideScrollBarHandle)
            flag2 = false;
        }
        if (this.UpdateScrollbarVisibility)
        {
          this.HorizontalScrollbar.IsVisible = flag1;
          this.HorizontalScrollbar.Handle.IsVisible = flag2 & flag1;
        }
      }
      if (this.VerticalScrollbar == null)
        return;
      float valueFloat = this.VerticalScrollbar.ValueFloat;
      bool flag3 = this.IsVisible;
      bool flag4 = this.IsVisible;
      this.InnerPanel.ScaledPositionYOffset = -valueFloat;
      this._scrollOffset = this.InnerPanel.ScaledPositionOffset.Y;
      this.VerticalScrollbar.ReverseDirection = false;
      this.VerticalScrollbar.MinValue = 0.0f;
      if (this.FixedHeader != null && this.ScrolledHeader != null)
        this.FixedHeader.IsVisible = (double) this.FixedHeader.GlobalPosition.Y >= (double) this.ScrolledHeader.GlobalPosition.Y;
      if ((double) this.InnerPanel.Size.Y > (double) this.ClipRect.Size.Y)
      {
        this._canScrollVertical = true;
        this.VerticalScrollbar.MaxValue = TaleWorlds.Library.MathF.Max(1f, this.InnerPanel.Size.Y - this.ClipRect.Size.Y);
        if (this.InnerPanel.VerticalAlignment == VerticalAlignment.Bottom)
          this._scrollOffset = this.VerticalScrollbar.MaxValue - valueFloat;
        if (this.AutoAdjustScrollbarHandleSize && this.VerticalScrollbar.Handle != null)
          this.VerticalScrollbar.Handle.ScaledSuggestedHeight = this.VerticalScrollbar.Size.Y * (this.ClipRect.Size.Y / this.InnerPanel.Size.Y);
        if ((double) TaleWorlds.Library.MathF.Abs(this._verticalScrollVelocity) > 1.0 / 1000.0)
        {
          double scrollOffset = (double) this._scrollOffset;
          double num5 = (double) this._verticalScrollVelocity * ((double) dt / 0.016000000759959221);
          resolution = Input.Resolution;
          double num6 = (double) resolution.Y / 1080.0;
          double num7 = num5 * num6;
          this._scrollOffset = (float) (scrollOffset + num7);
          this._verticalScrollVelocity = TaleWorlds.Library.MathF.Lerp(this._verticalScrollVelocity, 0.0f, 1f - TaleWorlds.Library.MathF.Pow(1f / 1000f, dt));
        }
        else
          this._verticalScrollVelocity = 0.0f;
        this.InnerPanel.ScaledPositionYOffset = this._scrollOffset;
        this.AdjustVerticalScrollBar();
      }
      else
      {
        if (this.AutoAdjustScrollbarHandleSize && this.VerticalScrollbar.Handle != null)
          this.VerticalScrollbar.Handle.ScaledSuggestedHeight = this.VerticalScrollbar.Size.Y;
        this.InnerPanel.ScaledPositionYOffset = 0.0f;
        this.VerticalScrollbar.ValueFloat = 0.0f;
        this._verticalScrollVelocity = 0.0f;
        this._scrollOffset = 0.0f;
        if (this.AutoHideScrollBars)
          flag3 = false;
        if (this.AutoHideScrollBarHandle)
          flag4 = false;
      }
      foreach (ScrollablePanelFixedHeaderWidget fixedHeader in this._fixedHeaders)
      {
        if (fixedHeader != null && fixedHeader.FixedHeader != null && (Vec2) this.MeasuredSize != Vec2.Zero)
          fixedHeader.FixedHeader.ScaledPositionYOffset = TaleWorlds.Library.MathF.Clamp(fixedHeader.LocalPosition.Y + this._scrollOffset, fixedHeader.TopOffset * this._scaleToUse, this.MeasuredSize.Y - fixedHeader.BottomOffset * this._scaleToUse);
      }
      if (!this.UpdateScrollbarVisibility)
        return;
      this.VerticalScrollbar.IsVisible = flag3;
      this.VerticalScrollbar.Handle.IsVisible = flag4 & flag3;
    }

    protected float GetScrollYValueForWidget(Widget widget, float widgetTargetYValue, float offset)
    {
      float amount = MBMath.ClampFloat(widgetTargetYValue, 0.0f, 1f);
      return TaleWorlds.Library.MathF.Lerp(this.VerticalScrollbar.MinValue, this.VerticalScrollbar.MaxValue, TaleWorlds.Library.MathF.Clamp(this.InverseLerp(this.InnerPanel.GlobalPosition.Y, this.InnerPanel.GlobalPosition.Y + this.InnerPanel.Size.Y - this.ClipRect.Size.Y, Mathf.Lerp(widget.GlobalPosition.Y + offset, widget.GlobalPosition.Y - this.ClipRect.Size.Y + widget.Size.Y + offset, amount)), 0.0f, 1f));
    }

    protected float GetScrollXValueForWidget(Widget widget, float widgetTargetXValue, float offset)
    {
      float amount = MBMath.ClampFloat(widgetTargetXValue, 0.0f, 1f);
      return TaleWorlds.Library.MathF.Lerp(this.HorizontalScrollbar.MinValue, this.HorizontalScrollbar.MaxValue, TaleWorlds.Library.MathF.Clamp(this.InverseLerp(this.InnerPanel.GlobalPosition.X, this.InnerPanel.GlobalPosition.X + this.InnerPanel.Size.X - this.ClipRect.Size.X, Mathf.Lerp(widget.GlobalPosition.X + offset, widget.GlobalPosition.X - this.ClipRect.Size.X + widget.Size.X + offset, amount)), 0.0f, 1f));
    }

    private float InverseLerp(float fromValue, float toValue, float value)
    {
      return (double) fromValue == (double) toValue ? 0.0f : (float) (((double) value - (double) fromValue) / ((double) toValue - (double) fromValue));
    }

    public void ScrollToChild(
      Widget targetWidget,
      float horizontalTargetValue = -1f,
      float verticalTargetValue = -1f,
      int horizontalOffsetInPixels = 0,
      int verticalOffsetInPixels = 0,
      float verticalInterpolationTime = 0.0f,
      float horizontalInterpolationTime = 0.0f)
    {
      if (this.ClipRect == null || this.InnerPanel == null || !this.CheckIsMyChildRecursive(targetWidget))
        return;
      if (this.VerticalScrollbar != null)
      {
        bool flag1 = (double) targetWidget.GlobalPosition.Y - (double) verticalOffsetInPixels < (double) this.ClipRect.GlobalPosition.Y;
        bool flag2 = (double) targetWidget.GlobalPosition.Y + (double) targetWidget.Size.Y + (double) verticalOffsetInPixels > (double) this.ClipRect.GlobalPosition.Y + (double) this.ClipRect.Size.Y;
        if (flag1 | flag2)
        {
          if ((double) verticalTargetValue == -1.0)
            verticalTargetValue = flag1 ? 0.0f : 1f;
          float scrollYvalueForWidget = this.GetScrollYValueForWidget(targetWidget, verticalTargetValue, flag1 ? (float) -verticalOffsetInPixels : (float) verticalOffsetInPixels);
          if ((double) verticalInterpolationTime <= 1.4012984643248171E-45)
            this.VerticalScrollbar.ValueFloat = scrollYvalueForWidget;
          else
            this._verticalScrollbarInterpolationController.StartInterpolation(scrollYvalueForWidget, verticalInterpolationTime);
        }
      }
      if (this.HorizontalScrollbar == null)
        return;
      bool flag3 = (double) targetWidget.GlobalPosition.X - (double) horizontalOffsetInPixels < (double) this.ClipRect.GlobalPosition.X;
      bool flag4 = (double) targetWidget.GlobalPosition.X + (double) targetWidget.Size.X + (double) horizontalOffsetInPixels > (double) this.ClipRect.GlobalPosition.X + (double) this.ClipRect.Size.X;
      if (!(flag3 | flag4))
        return;
      if ((double) horizontalTargetValue == -1.0)
        horizontalTargetValue = flag3 ? 0.0f : 1f;
      float scrollXvalueForWidget = this.GetScrollXValueForWidget(targetWidget, horizontalTargetValue, flag3 ? (float) -horizontalOffsetInPixels : (float) horizontalOffsetInPixels);
      if ((double) horizontalInterpolationTime <= 1.4012984643248171E-45)
        this.HorizontalScrollbar.ValueFloat = scrollXvalueForWidget;
      else
        this._horizontalScrollbarInterpolationController.StartInterpolation(scrollXvalueForWidget, horizontalInterpolationTime);
    }

    public void SetVerticalScrollTarget(float targetValue, float interpolationDuration)
    {
      this._verticalScrollbarInterpolationController.StartInterpolation(targetValue, interpolationDuration);
    }

    public void SetHorizontalScrollTarget(float targetValue, float interpolationDuration)
    {
      this._horizontalScrollbarInterpolationController.StartInterpolation(targetValue, interpolationDuration);
    }

    [Editor(false)]
    public bool AutoHideScrollBars
    {
      get => this._autoHideScrollBars;
      set
      {
        if (this._autoHideScrollBars == value)
          return;
        this._autoHideScrollBars = value;
        this.OnPropertyChanged(value, nameof (AutoHideScrollBars));
      }
    }

    [Editor(false)]
    public bool AutoHideScrollBarHandle
    {
      get => this._autoHideScrollBarHandle;
      set
      {
        if (this._autoHideScrollBarHandle == value)
          return;
        this._autoHideScrollBarHandle = value;
        this.OnPropertyChanged(value, nameof (AutoHideScrollBarHandle));
      }
    }

    [Editor(false)]
    public bool AutoAdjustScrollbarHandleSize
    {
      get => this._autoAdjustScrollbarHandleSize;
      set
      {
        if (this._autoAdjustScrollbarHandleSize == value)
          return;
        this._autoAdjustScrollbarHandleSize = value;
        this.OnPropertyChanged(value, nameof (AutoAdjustScrollbarHandleSize));
      }
    }

    [Editor(false)]
    public bool OnlyAcceptScrollEventIfCanScroll
    {
      get => this._onlyAcceptScrollEventIfCanScroll;
      set
      {
        if (this._onlyAcceptScrollEventIfCanScroll == value)
          return;
        this._onlyAcceptScrollEventIfCanScroll = value;
        this.OnPropertyChanged(value, nameof (OnlyAcceptScrollEventIfCanScroll));
      }
    }

    public ScrollbarWidget HorizontalScrollbar
    {
      get => this._horizontalScrollbar;
      set
      {
        if (value == this._horizontalScrollbar)
          return;
        this._horizontalScrollbar = value;
        this._horizontalScrollbarInterpolationController.SetControlledScrollbar(value);
        this.OnPropertyChanged<ScrollbarWidget>(value, nameof (HorizontalScrollbar));
      }
    }

    public ScrollbarWidget VerticalScrollbar
    {
      get => this._verticalScrollbar;
      set
      {
        if (value == this._verticalScrollbar)
          return;
        this._verticalScrollbar = value;
        this._verticalScrollbarInterpolationController.SetControlledScrollbar(value);
        this.OnPropertyChanged<ScrollbarWidget>(value, nameof (VerticalScrollbar));
      }
    }

    private class ScrollbarInterpolationController
    {
      private ScrollbarWidget _scrollbar;
      private float _targetValue;
      private float _duration;
      private bool _isInterpolating;
      private float _timer;

      public void SetControlledScrollbar(ScrollbarWidget scrollbar) => this._scrollbar = scrollbar;

      public void StartInterpolation(float targetValue, float duration)
      {
        this._targetValue = targetValue;
        this._duration = duration;
        this._timer = 0.0f;
        this._isInterpolating = true;
      }

      public void StopInterpolation()
      {
        this._isInterpolating = false;
        this._targetValue = 0.0f;
        this._duration = 0.0f;
        this._timer = 0.0f;
        this._isInterpolating = false;
      }

      public void Tick(float dt)
      {
        if (!this._isInterpolating || this._scrollbar == null)
          return;
        if ((double) this._duration == 0.0 || (double) this._timer > (double) this._duration)
        {
          this._scrollbar.ValueFloat = this._targetValue;
          this.StopInterpolation();
        }
        else
        {
          this._scrollbar.ValueFloat = TaleWorlds.Library.MathF.Lerp(this._scrollbar.ValueFloat, this._targetValue, TaleWorlds.Library.MathF.Clamp(this._timer / this._duration, 0.0f, 1f));
          this._timer += dt;
        }
      }
    }
  }
}
