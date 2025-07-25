// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.CircleItemPlacerWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class CircleItemPlacerWidget : Widget
  {
    private float _centerDistanceAnimationTimer;
    private float _centerDistanceAnimationDuration;
    private float _centerDistanceAnimationInitialValue;
    private float _centerDistanceAnimationTarget;

    public float DistanceFromCenterModifier { get; set; } = 300f;

    public Widget DirectionWidget { get; set; }

    public float DirectionWidgetDistanceMultiplier { get; set; } = 0.5f;

    public bool ActivateOnlyWithController { get; set; }

    public CircleItemPlacerWidget(UIContext context)
      : base(context)
    {
      this._centerDistanceAnimationTimer = -1f;
      this._centerDistanceAnimationDuration = -1f;
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if (!this.IsRecursivelyVisible())
        return;
      this.UpdateItemPlacement();
      this.AnimateDistanceFromCenter(dt);
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
  }
}
