// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.StackLayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public class StackLayout : ILayout
  {
    private const int DragHoverAperture = 20;
    private readonly Dictionary<int, LayoutBox> _layoutBoxes;
    private Widget _parallelMeasureBasicChildWidget;
    private Vector2 _parallelMeasureBasicChildMeasureSpec;
    private AlignmentAxis _parallelMeasureBasicChildAlignmentAxis;
    private TWParallel.ParallelForAuxPredicate _parallelMeasureBasicChildDelegate;

    public ContainerItemDescription DefaultItemDescription { get; private set; }

    public LayoutMethod LayoutMethod { get; set; }

    public StackLayout()
    {
      this.DefaultItemDescription = new ContainerItemDescription();
      this._layoutBoxes = new Dictionary<int, LayoutBox>(64);
      this._parallelMeasureBasicChildDelegate = new TWParallel.ParallelForAuxPredicate(this.ParallelMeasureBasicChild);
    }

    public ContainerItemDescription GetItemDescription(Widget owner, Widget child, int childIndex)
    {
      return owner is Container container ? container.GetItemDescription(child.Id, childIndex) : this.DefaultItemDescription;
    }

    public Vector2 MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      Container container = widget as Container;
      Vector2 vector2 = new Vector2();
      if (widget.ChildCount > 0)
      {
        if (this.LayoutMethod == LayoutMethod.HorizontalLeftToRight || this.LayoutMethod == LayoutMethod.HorizontalRightToLeft || this.LayoutMethod == LayoutMethod.HorizontalCentered || this.LayoutMethod == LayoutMethod.HorizontalSpaced)
        {
          vector2 = this.MeasureLinear(widget, measureSpec, AlignmentAxis.Horizontal);
          if (container != null && container.IsDragHovering)
            vector2.X += 20f;
        }
        else if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop || this.LayoutMethod == LayoutMethod.VerticalTopToBottom || this.LayoutMethod == LayoutMethod.VerticalCentered)
        {
          vector2 = this.MeasureLinear(widget, measureSpec, AlignmentAxis.Vertical);
          if (container != null && container.IsDragHovering)
            vector2.Y += 20f;
        }
      }
      return vector2;
    }

    public void OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      if (this.LayoutMethod == LayoutMethod.HorizontalLeftToRight || this.LayoutMethod == LayoutMethod.HorizontalRightToLeft || this.LayoutMethod == LayoutMethod.HorizontalCentered || this.LayoutMethod == LayoutMethod.HorizontalSpaced)
      {
        this.LayoutLinearHorizontalLocal(widget, left, bottom, right, top);
      }
      else
      {
        if (this.LayoutMethod != LayoutMethod.VerticalBottomToTop && this.LayoutMethod != LayoutMethod.VerticalTopToBottom && this.LayoutMethod != LayoutMethod.VerticalCentered)
          return;
        this.LayoutLinearVertical(widget, left, bottom, right, top);
      }
    }

    private static float GetData(Vector2 vector2, int row) => row == 0 ? vector2.X : vector2.Y;

    private static void SetData(ref Vector2 vector2, int row, float data)
    {
      if (row == 0)
        vector2.X = data;
      vector2.Y = data;
    }

    public int GetIndexForDrop(Container widget, Vector2 draggedWidgetPosition)
    {
      int row = 0;
      if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop || this.LayoutMethod == LayoutMethod.VerticalTopToBottom || this.LayoutMethod == LayoutMethod.VerticalCentered)
        row = 1;
      bool flag1 = this.LayoutMethod == LayoutMethod.HorizontalRightToLeft || this.LayoutMethod == LayoutMethod.VerticalTopToBottom || this.LayoutMethod == LayoutMethod.VerticalCentered;
      float data1 = StackLayout.GetData(draggedWidgetPosition, row);
      int indexForDrop = 0;
      bool flag2 = false;
      for (int i = 0; i != widget.ChildCount && !flag2; ++i)
      {
        Widget child = widget.GetChild(i);
        if (child != null)
        {
          double data2 = (double) StackLayout.GetData(child.GlobalPosition * child.Context.CustomScale, row);
          float num = (float) ((data2 + (double) ((float) data2 + StackLayout.GetData(child.Size, row))) / 2.0);
          if (!flag1)
          {
            if ((double) data1 < (double) num)
            {
              indexForDrop = i;
              flag2 = true;
            }
          }
          else if ((double) data1 > (double) num)
          {
            indexForDrop = i;
            flag2 = true;
          }
        }
      }
      if (!flag2)
        indexForDrop = widget.ChildCount;
      return indexForDrop;
    }

    private void ParallelMeasureBasicChild(int startInclusive, int endExclusive)
    {
      for (int i = startInclusive; i < endExclusive; ++i)
      {
        Widget child = this._parallelMeasureBasicChildWidget.GetChild(i);
        if (child == null)
          Debug.FailedAssert("Trying to measure a null child for parent" + this._parallelMeasureBasicChildWidget.GetFullIDPath(), "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Layout\\StackLayout.cs", nameof (ParallelMeasureBasicChild), 184);
        else if (child.IsVisible)
        {
          switch (this._parallelMeasureBasicChildAlignmentAxis)
          {
            case AlignmentAxis.Horizontal:
              if (child.WidthSizePolicy != SizePolicy.StretchToParent)
              {
                child.Measure(this._parallelMeasureBasicChildMeasureSpec);
                continue;
              }
              continue;
            case AlignmentAxis.Vertical:
              if (child.HeightSizePolicy != SizePolicy.StretchToParent)
              {
                child.Measure(this._parallelMeasureBasicChildMeasureSpec);
                continue;
              }
              continue;
            default:
              continue;
          }
        }
      }
    }

    private Vector2 MeasureLinear(Widget widget, Vector2 measureSpec, AlignmentAxis alignmentAxis)
    {
      this._parallelMeasureBasicChildWidget = widget;
      this._parallelMeasureBasicChildMeasureSpec = measureSpec;
      this._parallelMeasureBasicChildAlignmentAxis = alignmentAxis;
      TWParallel.For(0, widget.ChildCount, this._parallelMeasureBasicChildDelegate, 64);
      this._parallelMeasureBasicChildWidget = (Widget) null;
      float num1 = 0.0f;
      float num2 = 0.0f;
      float num3 = 0.0f;
      int num4 = 0;
      for (int index = 0; index < widget.ChildCount; ++index)
      {
        Widget child = widget.GetChild(index);
        if (child == null)
          Debug.FailedAssert("Trying to measure a null child for parent" + widget.GetFullIDPath(), "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Layout\\StackLayout.cs", nameof (MeasureLinear), 234);
        else if (child.IsVisible)
        {
          ContainerItemDescription itemDescription = this.GetItemDescription(widget, child, index);
          switch (alignmentAxis)
          {
            case AlignmentAxis.Horizontal:
              if (child.WidthSizePolicy == SizePolicy.StretchToParent)
              {
                ++num4;
                num3 += itemDescription.WidthStretchRatio;
              }
              else
                num2 += child.MeasuredSize.X + child.ScaledMarginLeft + child.ScaledMarginRight;
              num1 = MathF.Max(num1, child.MeasuredSize.Y + child.ScaledMarginTop + child.ScaledMarginBottom);
              continue;
            case AlignmentAxis.Vertical:
              if (child.HeightSizePolicy == SizePolicy.StretchToParent)
              {
                ++num4;
                num3 += itemDescription.HeightStretchRatio;
              }
              else
                num1 += child.MeasuredSize.Y + child.ScaledMarginTop + child.ScaledMarginBottom;
              num2 = MathF.Max(num2, child.MeasuredSize.X + child.ScaledMarginLeft + child.ScaledMarginRight);
              continue;
            default:
              continue;
          }
        }
      }
      if (num4 > 0)
      {
        float num5 = 0.0f;
        switch (alignmentAxis)
        {
          case AlignmentAxis.Horizontal:
            num5 = measureSpec.X - num2;
            break;
          case AlignmentAxis.Vertical:
            num5 = measureSpec.Y - num1;
            break;
        }
        float num6 = num5;
        int num7 = num4;
        for (int index = 0; index < widget.ChildCount; ++index)
        {
          Widget child = widget.GetChild(index);
          if (child == null)
            Debug.FailedAssert("Trying to measure a null child for parent" + widget.GetFullIDPath(), "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Layout\\StackLayout.cs", nameof (MeasureLinear), 296);
          else if (child.IsVisible && (alignmentAxis == AlignmentAxis.Horizontal && child.WidthSizePolicy == SizePolicy.StretchToParent || alignmentAxis == AlignmentAxis.Vertical && child.HeightSizePolicy == SizePolicy.StretchToParent))
          {
            ContainerItemDescription itemDescription = this.GetItemDescription(widget, child, index);
            Vector2 measureSpec1 = new Vector2(0.0f, 0.0f);
            if ((double) num6 <= 0.0)
            {
              switch (alignmentAxis)
              {
                case AlignmentAxis.Horizontal:
                  measureSpec1 = new Vector2(0.0f, measureSpec.Y);
                  break;
                case AlignmentAxis.Vertical:
                  measureSpec1 = new Vector2(measureSpec.X, 0.0f);
                  break;
              }
            }
            else
            {
              switch (alignmentAxis)
              {
                case AlignmentAxis.Horizontal:
                  float x = num5 * itemDescription.WidthStretchRatio / num3;
                  if (num7 == 1)
                    x = num6;
                  measureSpec1 = new Vector2(x, measureSpec.Y);
                  break;
                case AlignmentAxis.Vertical:
                  float y = num5 * itemDescription.HeightStretchRatio / num3;
                  if (num7 == 1)
                    y = num6;
                  measureSpec1 = new Vector2(measureSpec.X, y);
                  break;
              }
            }
            child.Measure(measureSpec1);
            --num7;
            if (alignmentAxis == AlignmentAxis.Horizontal)
            {
              num6 -= child.MeasuredSize.X;
              num2 += child.MeasuredSize.X;
              num1 = MathF.Max(num1, child.MeasuredSize.Y);
            }
            else if (alignmentAxis == AlignmentAxis.Vertical)
            {
              num6 -= child.MeasuredSize.Y;
              num1 += child.MeasuredSize.Y;
              num2 = MathF.Max(num2, child.MeasuredSize.X);
            }
          }
        }
      }
      return new Vector2(num2, num1);
    }

    private void ParallelUpdateLayouts(Widget widget)
    {
      TWParallel.For(0, widget.ChildCount, new TWParallel.ParallelForAuxPredicate(UpdateChildLayoutMT));

      void UpdateChildLayoutMT(int startInclusive, int endExclusive)
      {
        for (int index = startInclusive; index < endExclusive; ++index)
        {
          Widget child = widget.GetChild(index);
          if (child != null && child.IsVisible)
          {
            LayoutBox layoutBox = this._layoutBoxes[index];
            child.Layout(layoutBox.Left, layoutBox.Bottom, layoutBox.Right, layoutBox.Top);
          }
        }
      }
    }

    private void LayoutLinearHorizontalLocal(
      Widget widget,
      float left,
      float bottom,
      float right,
      float top)
    {
      Container container = widget as Container;
      float left1 = 0.0f;
      float top1 = 0.0f;
      float right1 = right - left;
      float bottom1 = bottom - top;
      if (this.LayoutMethod != LayoutMethod.HorizontalRightToLeft && this.LayoutMethod == LayoutMethod.HorizontalCentered)
      {
        float num = 0.0f;
        for (int i = 0; i < widget.ChildCount; ++i)
        {
          Widget child = widget.GetChild(i);
          if (child == null)
            Debug.FailedAssert("Trying to measure a null child for parent" + widget.GetFullIDPath(), "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Layout\\StackLayout.cs", nameof (LayoutLinearHorizontalLocal), 417);
          else if (child.IsVisible)
            num += child.MeasuredSize.X + child.ScaledMarginLeft + child.ScaledMarginRight;
        }
        left1 = (float) (((double) right - (double) left) / 2.0 - (double) num / 2.0);
      }
      this._layoutBoxes.Clear();
      int num1 = 0;
      for (int index = 0; index < widget.ChildCount; ++index)
      {
        if (widget.Children[index].IsVisible)
          ++num1;
      }
      if (num1 > 0)
      {
        for (int index = 0; index < widget.ChildCount; ++index)
        {
          Widget child = widget.Children[index];
          if (child == null)
            Debug.FailedAssert("Trying to measure a null child for parent" + widget.GetFullIDPath(), "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Layout\\StackLayout.cs", nameof (LayoutLinearHorizontalLocal), 448);
          else if (child.IsVisible)
          {
            float num2 = child.MeasuredSize.X + child.ScaledMarginLeft + child.ScaledMarginRight;
            if (container != null && container.IsDragHovering && index == container.DragHoverInsertionIndex)
              num2 += 20f;
            if (this.LayoutMethod == LayoutMethod.HorizontalRightToLeft)
              left1 = right1 - num2;
            else if (this.LayoutMethod == LayoutMethod.HorizontalSpaced)
            {
              if (num1 > 1)
              {
                if (index == 0)
                {
                  left1 = 0.0f;
                  right1 = left + child.MeasuredSize.X;
                }
                else if (index == widget.ChildCount - 1)
                {
                  right1 = right - left;
                  left1 = right1 - child.MeasuredSize.X;
                }
                else
                {
                  float num3 = (widget.MeasuredSize.X - child.MeasuredSize.X * (float) num1) / (float) (num1 - 1);
                  left1 += child.MeasuredSize.X + num3;
                  right1 = left1 + child.MeasuredSize.X;
                }
              }
              else
              {
                left1 = (float) ((double) widget.MeasuredSize.X / 2.0 - (double) child.MeasuredSize.X / 2.0);
                right1 = left1 + child.MeasuredSize.X / 2f;
              }
            }
            else
              right1 = left1 + num2;
            if (widget.ChildCount < 64)
              child.Layout(left1, bottom1, right1, top1);
            else
              this._layoutBoxes.Add(index, new LayoutBox()
              {
                Left = left1,
                Right = right1,
                Bottom = bottom1,
                Top = top1
              });
            if (this.LayoutMethod == LayoutMethod.HorizontalRightToLeft)
              right1 = left1;
            else if (this.LayoutMethod == LayoutMethod.HorizontalLeftToRight || this.LayoutMethod == LayoutMethod.HorizontalCentered)
              left1 = right1;
          }
          else
            this._layoutBoxes.Add(index, new LayoutBox());
        }
      }
      if (widget.ChildCount < 64)
        return;
      this.ParallelUpdateLayouts(widget);
    }

    private void LayoutLinearVertical(
      Widget widget,
      float left,
      float bottom,
      float right,
      float top)
    {
      Container container = widget as Container;
      float left1 = 0.0f;
      float top1 = 0.0f;
      float bottom1 = bottom - top;
      float right1 = right - left;
      if (this.LayoutMethod != LayoutMethod.VerticalTopToBottom && this.LayoutMethod == LayoutMethod.VerticalCentered)
      {
        float num = 0.0f;
        for (int i = 0; i < widget.ChildCount; ++i)
        {
          Widget child = widget.GetChild(i);
          if (child != null && child.IsVisible)
            num += child.MeasuredSize.Y + child.ScaledMarginTop + child.ScaledMarginBottom;
        }
        bottom1 = (float) (((double) bottom - (double) top) / 2.0 - (double) num / 2.0);
        top1 = (float) (((double) bottom - (double) top) / 2.0 + (double) num / 2.0);
      }
      this._layoutBoxes.Clear();
      for (int index = 0; index < widget.ChildCount; ++index)
      {
        Widget child = widget.GetChild(index);
        if (child != null && child.IsVisible)
        {
          if (container != null && container.IsDragHovering && index == container.DragHoverInsertionIndex)
          {
            if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop)
              top1 += 20f;
            else
              bottom1 -= 20f;
          }
          float num = child.MeasuredSize.Y + child.ScaledMarginTop + child.ScaledMarginBottom;
          if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop)
            bottom1 = top1 + num;
          else
            top1 = bottom1 - num;
          if (widget.ChildCount < 64)
            child.Layout(left1, bottom1, right1, top1);
          else
            this._layoutBoxes.Add(index, new LayoutBox()
            {
              Left = left1,
              Right = right1,
              Bottom = bottom1,
              Top = top1
            });
          if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop)
            top1 = bottom1;
          else
            bottom1 = top1;
        }
        else
          this._layoutBoxes.Add(index, new LayoutBox());
      }
      if (widget.ChildCount < 64)
        return;
      this.ParallelUpdateLayouts(widget);
    }

    public Vector2 GetDropGizmoPosition(Container widget, Vector2 draggedWidgetPosition)
    {
      int row = 0;
      if (this.LayoutMethod == LayoutMethod.VerticalBottomToTop || this.LayoutMethod == LayoutMethod.VerticalTopToBottom || this.LayoutMethod == LayoutMethod.VerticalCentered)
        row = 1;
      int num = this.LayoutMethod == LayoutMethod.HorizontalRightToLeft || this.LayoutMethod == LayoutMethod.VerticalTopToBottom ? 1 : (this.LayoutMethod == LayoutMethod.VerticalCentered ? 1 : 0);
      int indexForDrop = this.GetIndexForDrop(widget, draggedWidgetPosition);
      int i = indexForDrop - 1;
      Vector2 globalPosition1 = widget.GlobalPosition;
      Vector2 globalPosition2 = widget.GlobalPosition;
      if (num == 0)
      {
        if (i >= 0 && i < widget.ChildCount)
        {
          Widget child = widget.GetChild(i);
          StackLayout.SetData(ref globalPosition1, row, StackLayout.GetData(child.GlobalPosition, row) + StackLayout.GetData(child.Size, row));
        }
        if (indexForDrop >= 0 && indexForDrop < widget.ChildCount)
          StackLayout.SetData(ref globalPosition2, row, StackLayout.GetData(widget.GetChild(indexForDrop).GlobalPosition, row));
        else if (indexForDrop >= widget.ChildCount && widget.ChildCount > 0)
          StackLayout.SetData(ref globalPosition2, row, StackLayout.GetData(globalPosition1, row) + 20f);
      }
      else
      {
        StackLayout.SetData(ref globalPosition1, row, StackLayout.GetData(globalPosition1, row) + StackLayout.GetData(widget.Size, row));
        StackLayout.SetData(ref globalPosition2, row, StackLayout.GetData(globalPosition2, row) + StackLayout.GetData(widget.Size, row));
        if (i >= 0 && i < widget.ChildCount)
        {
          Widget child = widget.GetChild(i);
          StackLayout.SetData(ref globalPosition1, row, StackLayout.GetData(child.GlobalPosition, row));
        }
        if (indexForDrop >= 0 && indexForDrop < widget.ChildCount)
        {
          Widget child = widget.GetChild(indexForDrop);
          StackLayout.SetData(ref globalPosition2, row, StackLayout.GetData(child.GlobalPosition, row) + StackLayout.GetData(child.Size, row));
        }
        else if (indexForDrop >= widget.ChildCount && widget.ChildCount > 0)
          StackLayout.SetData(ref globalPosition2, row, StackLayout.GetData(globalPosition1, row) - 20f);
      }
      return new Vector2((float) (((double) globalPosition1.X + (double) globalPosition2.X) / 2.0), (float) (((double) globalPosition1.Y + (double) globalPosition2.Y) / 2.0));
    }
  }
}
