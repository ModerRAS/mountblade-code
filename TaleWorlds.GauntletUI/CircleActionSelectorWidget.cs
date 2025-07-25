// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.CircleActionSelectorWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class CircleActionSelectorWidget : Widget
  {
    private int _currentSelectedIndex;
    private const float _mouseMoveMaxDistance = 125f;
    private const float _gamepadDeadzoneLength = 0.391f;
    private const float _mouseMoveMaxDistanceSquared = 15625f;
    private float _centerDistanceAnimationTimer;
    private float _centerDistanceAnimationDuration;
    private float _centerDistanceAnimationInitialValue;
    private float _centerDistanceAnimationTarget;
    private Vec2 _mouseDirection;
    private Vec2 _mouseMoveAccumulated;
    private bool _isRefreshingSelection;
    private bool _allowInvalidSelection;
    private bool _activateOnlyWithController;
    private bool _isCircularInputDisabled;
    private float _distanceFromCenterModifier;
    private float _directionWidgetDistanceMultiplier;
    private Widget _directionWidget;

    public CircleActionSelectorWidget(UIContext context)
      : base(context)
    {
      this._activateOnlyWithController = false;
      this._distanceFromCenterModifier = 300f;
      this._directionWidgetDistanceMultiplier = 0.5f;
      this._centerDistanceAnimationTimer = -1f;
      this._centerDistanceAnimationDuration = -1f;
    }

    protected override void OnChildAdded(Widget child)
    {
      base.OnChildAdded(child);
      child.boolPropertyChanged += new Action<PropertyOwnerObject, string, bool>(this.OnChildPropertyChanged);
    }

    private void OnChildPropertyChanged(
      PropertyOwnerObject widget,
      string propertyName,
      bool value)
    {
      if (!(propertyName == "IsSelected") || !this.EventManager.IsControllerActive || this._isRefreshingSelection)
        return;
      this._mouseDirection = Vec2.Zero;
      this._mouseMoveAccumulated = Vec2.Zero;
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (!this.AllowInvalidSelection)
        this._currentSelectedIndex = -1;
      if (this.IsRecursivelyVisible())
      {
        this.UpdateItemPlacement();
        this.AnimateDistanceFromCenter(dt);
        bool flag = this.IsCircularInputEnabled && (!this.ActivateOnlyWithController || this.EventManager.IsControllerActive);
        if (this.DirectionWidget != null)
          this.DirectionWidget.IsVisible = flag;
        if (!flag)
          return;
        this.UpdateAverageMouseDirection();
        this.UpdateCircularInput();
      }
      else
      {
        if ((double) this._mouseDirection.X != 0.0 || (double) this._mouseDirection.Y != 0.0)
          this._mouseDirection = new Vec2();
        if (this.DirectionWidget != null)
          this.DirectionWidget.IsVisible = false;
        this._mouseMoveAccumulated = Vec2.Zero;
      }
    }

    private void AnimateDistanceFromCenter(float dt)
    {
      if ((double) this._centerDistanceAnimationTimer == -1.0 || (double) this._centerDistanceAnimationDuration == -1.0 || (double) this._centerDistanceAnimationTarget == -1.0)
        return;
      if ((double) this._centerDistanceAnimationTimer < (double) this._centerDistanceAnimationDuration)
      {
        this.DistanceFromCenterModifier = TaleWorlds.Library.MathF.Lerp(this._centerDistanceAnimationInitialValue, this._centerDistanceAnimationTarget, this._centerDistanceAnimationTimer / this._centerDistanceAnimationDuration);
        this._centerDistanceAnimationTimer += dt;
      }
      else
      {
        this.DistanceFromCenterModifier = this._centerDistanceAnimationTarget;
        this._centerDistanceAnimationTimer = -1f;
        this._centerDistanceAnimationDuration = -1f;
        this._centerDistanceAnimationTarget = -1f;
      }
    }

    public void AnimateDistanceFromCenterTo(float distanceFromCenter, float animationDuration)
    {
      this._centerDistanceAnimationTimer = 0.0f;
      this._centerDistanceAnimationInitialValue = this.DistanceFromCenterModifier;
      this._centerDistanceAnimationDuration = animationDuration;
      this._centerDistanceAnimationTarget = distanceFromCenter;
    }

    private void UpdateAverageMouseDirection()
    {
      IInputContext inputContext = this.EventManager.InputContext;
      int num1 = inputContext.GetIsMouseActive() ? 1 : 0;
      Vec2 vec2 = num1 != 0 ? new Vec2(inputContext.GetMouseMoveX(), inputContext.GetMouseMoveY()) : inputContext.GetControllerRightStickState();
      if (num1 != 0)
      {
        this._mouseMoveAccumulated += vec2;
        if ((double) this._mouseMoveAccumulated.LengthSquared > 15625.0)
        {
          double num2 = (double) this._mouseMoveAccumulated.Normalize();
          this._mouseMoveAccumulated *= 125f;
        }
        this._mouseDirection = new Vec2(this._mouseMoveAccumulated.X, -this._mouseMoveAccumulated.Y);
      }
      else
        this._mouseDirection = new Vec2(vec2.X, vec2.Y);
    }

    private void UpdateItemPlacement()
    {
      if (this.ChildCount <= 0)
        return;
      float num = 360f / (float) this.ChildCount;
      float angle1 = (float) -((double) num / 2.0);
      if ((double) angle1 < 0.0)
        angle1 += 360f;
      for (int i = 0; i < this.ChildCount; ++i)
      {
        float angle2 = num * (float) i;
        Vec2 vec2 = this.DirFromAngle(this.AddAngle(this.AddAngle(angle1, angle2), num / 2f) * ((float) Math.PI / 180f));
        Widget child = this.GetChild(i);
        child.PositionXOffset = vec2.X * this.DistanceFromCenterModifier;
        child.PositionYOffset = (float) ((double) vec2.Y * (double) this.DistanceFromCenterModifier * -1.0);
      }
    }

    public bool TrySetSelectedIndex(int index)
    {
      if (index < 0 || index >= this.ChildCount)
        return false;
      this.OnSelectedIndexChanged(index);
      return true;
    }

    protected virtual void OnSelectedIndexChanged(int selectedIndex)
    {
      for (int i = 0; i < this.ChildCount; ++i)
      {
        Widget child = this.GetChild(i);
        if (child is ButtonWidget buttonWidget)
        {
          int num = child.IsDisabled ? 0 : (i == selectedIndex ? 1 : 0);
          buttonWidget.IsSelected = num != 0;
        }
      }
    }

    private void UpdateCircularInput()
    {
      int currentSelectedIndex1 = this._currentSelectedIndex;
      if ((double) this._mouseDirection.Length > 0.39100000262260437)
      {
        if (this.ChildCount > 0)
          this._currentSelectedIndex = this.GetIndexOfSelectedItemByAngle(this.AngleFromDir(this._mouseDirection));
      }
      else if (this.AllowInvalidSelection)
        this._currentSelectedIndex = -1;
      int currentSelectedIndex2 = this._currentSelectedIndex;
      if (currentSelectedIndex1 != currentSelectedIndex2)
      {
        this._isRefreshingSelection = true;
        this.OnSelectedIndexChanged(this._currentSelectedIndex);
        this._isRefreshingSelection = false;
      }
      if (this.DirectionWidget == null)
        return;
      if ((double) this._mouseDirection.LengthSquared > 0.0)
      {
        Vec2 vec2 = this._mouseDirection.Normalized();
        this.DirectionWidget.PositionXOffset = vec2.X * (this.DistanceFromCenterModifier * this.DirectionWidgetDistanceMultiplier);
        this.DirectionWidget.PositionYOffset = (float) (-(double) vec2.Y * ((double) this.DistanceFromCenterModifier * (double) this.DirectionWidgetDistanceMultiplier));
      }
      else
      {
        this.DirectionWidget.PositionXOffset = 0.0f;
        this.DirectionWidget.PositionYOffset = 0.0f;
      }
    }

    private int GetIndexOfSelectedItemByAngle(float mouseDirectionAngle)
    {
      int childCount = this.ChildCount;
      float num = 360f / (float) childCount;
      float angle1 = (float) -((double) num / 2.0);
      if ((double) angle1 < 0.0)
        angle1 += 360f;
      for (int selectedItemByAngle = 0; selectedItemByAngle < childCount; ++selectedItemByAngle)
      {
        float angle2_1 = num * (float) selectedItemByAngle;
        float angle2_2 = num * (float) (selectedItemByAngle + 1);
        float minAngle = this.AddAngle(angle1, angle2_1) * ((float) Math.PI / 180f);
        float maxAngle = this.AddAngle(angle1, angle2_2) * ((float) Math.PI / 180f);
        if (this.IsAngleBetweenAngles(mouseDirectionAngle * ((float) Math.PI / 180f), minAngle, maxAngle))
          return selectedItemByAngle;
      }
      return -1;
    }

    private float AddAngle(float angle1, float angle2)
    {
      float num = angle1 + angle2;
      if ((double) num < 0.0)
        num += 360f;
      return num % 360f;
    }

    private bool IsAngleBetweenAngles(float angle, float minAngle, float maxAngle)
    {
      float fromAngle = angle - 3.14159274f;
      float toAngle = minAngle - 3.14159274f;
      float num1 = maxAngle - 3.14159274f;
      if ((double) toAngle == (double) num1)
        return true;
      float f = TaleWorlds.Library.MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles(num1, toAngle));
      if (f.ApproximatelyEqualsTo(3.14159274f))
        return (double) fromAngle < (double) num1;
      float num2 = TaleWorlds.Library.MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles(fromAngle, toAngle));
      float num3 = TaleWorlds.Library.MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles(fromAngle, num1));
      return (double) num2 < (double) f && (double) num3 < (double) f;
    }

    private float AngleFromDir(Vec2 directionVector)
    {
      return (double) directionVector.X < 0.0 ? (float) (360.0 - Math.Atan2((double) directionVector.X, (double) directionVector.Y) * 57.295780181884766 * -1.0) : (float) Math.Atan2((double) directionVector.X, (double) directionVector.Y) * 57.29578f;
    }

    private Vec2 DirFromAngle(float angle) => new Vec2(TaleWorlds.Library.MathF.Sin(angle), TaleWorlds.Library.MathF.Cos(angle));

    public bool AllowInvalidSelection
    {
      get => this._allowInvalidSelection;
      set
      {
        if (value == this._allowInvalidSelection)
          return;
        this._allowInvalidSelection = value;
        this.OnPropertyChanged(value, nameof (AllowInvalidSelection));
      }
    }

    public bool ActivateOnlyWithController
    {
      get => this._activateOnlyWithController;
      set
      {
        if (value == this._activateOnlyWithController)
          return;
        this._activateOnlyWithController = value;
        this.OnPropertyChanged(value, nameof (ActivateOnlyWithController));
      }
    }

    public bool IsCircularInputEnabled
    {
      get => !this.IsCircularInputDisabled;
      set
      {
        if (value != this.IsCircularInputDisabled)
          return;
        this.IsCircularInputDisabled = !value;
        this.OnPropertyChanged(!value, nameof (IsCircularInputEnabled));
      }
    }

    public bool IsCircularInputDisabled
    {
      get => this._isCircularInputDisabled;
      set
      {
        if (value == this._isCircularInputDisabled)
          return;
        this._isCircularInputDisabled = value;
        this.OnPropertyChanged(value, nameof (IsCircularInputDisabled));
        if (!value)
          return;
        this.OnSelectedIndexChanged(-1);
      }
    }

    public float DistanceFromCenterModifier
    {
      get => this._distanceFromCenterModifier;
      set
      {
        if ((double) value == (double) this._distanceFromCenterModifier)
          return;
        this._distanceFromCenterModifier = value;
        this.OnPropertyChanged(value, nameof (DistanceFromCenterModifier));
      }
    }

    public float DirectionWidgetDistanceMultiplier
    {
      get => this._directionWidgetDistanceMultiplier;
      set
      {
        if ((double) value == (double) this._directionWidgetDistanceMultiplier)
          return;
        this._directionWidgetDistanceMultiplier = value;
        this.OnPropertyChanged(value, nameof (DirectionWidgetDistanceMultiplier));
      }
    }

    public Widget DirectionWidget
    {
      get => this._directionWidget;
      set
      {
        if (value == this._directionWidget)
          return;
        this._directionWidget = value;
        this.OnPropertyChanged<Widget>(value, nameof (DirectionWidget));
      }
    }
  }
}
