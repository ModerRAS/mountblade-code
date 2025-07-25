// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.DefaultLayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public class DefaultLayout : ILayout
  {
    private void ParallelMeasureChildren(Widget widget, Vector2 measureSpec)
    {
      TWParallel.For(0, widget.ChildCount, new TWParallel.ParallelForAuxPredicate(UpdateChildWidgetMT));

      void UpdateChildWidgetMT(int startInclusive, int endExclusive)
      {
        for (int i = startInclusive; i < endExclusive; ++i)
        {
          Widget child = widget.GetChild(i);
          if (child != null && child.IsVisible)
            child.Measure(measureSpec);
        }
      }
    }

    Vector2 ILayout.MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      Vector2 vector2 = new Vector2();
      if (widget.ChildCount > 0)
      {
        if (widget.ChildCount >= 64)
          this.ParallelMeasureChildren(widget, measureSpec);
        for (int i = 0; i < widget.ChildCount; ++i)
        {
          Widget child = widget.GetChild(i);
          if (child != null && child.IsVisible)
          {
            if (widget.ChildCount < 64)
              child.Measure(measureSpec);
            Vector2 measuredSize = child.MeasuredSize;
            measuredSize.X += child.ScaledMarginLeft + child.ScaledMarginRight;
            measuredSize.Y += child.ScaledMarginTop + child.ScaledMarginBottom;
            if ((double) measuredSize.X > (double) vector2.X)
              vector2.X = measuredSize.X;
            if ((double) measuredSize.Y > (double) vector2.Y)
              vector2.Y = measuredSize.Y;
          }
        }
      }
      return vector2;
    }

    void ILayout.OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      float left1 = 0.0f;
      float top1 = 0.0f;
      float right1 = right - left;
      float bottom1 = bottom - top;
      for (int i = 0; i < widget.ChildCount; ++i)
      {
        Widget child = widget.GetChild(i);
        if (child != null && child.IsVisible)
          child.Layout(left1, bottom1, right1, top1);
      }
    }
  }
}
