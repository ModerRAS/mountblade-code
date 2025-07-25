// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.GridLayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public class GridLayout : ILayout
  {
    public GridVerticalLayoutMethod VerticalLayoutMethod { get; set; }

    public GridHorizontalLayoutMethod HorizontalLayoutMethod { get; set; }

    public GridDirection Direction { get; set; }

    public IReadOnlyList<float> RowHeights { get; private set; } = (IReadOnlyList<float>) new List<float>();

    public IReadOnlyList<float> ColumnWidths { get; private set; } = (IReadOnlyList<float>) new List<float>();

    public GridLayout()
    {
      this.VerticalLayoutMethod = GridVerticalLayoutMethod.TopToBottom;
      this.HorizontalLayoutMethod = GridHorizontalLayoutMethod.LeftToRight;
    }

    Vector2 ILayout.MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      GridWidget gridWidget = (GridWidget) widget;
      Vector2 vector2 = new Vector2();
      int visibleChildrenCount = gridWidget.Children.Count<Widget>((Func<Widget, bool>) (x => x.IsVisible));
      if (visibleChildrenCount > 0)
      {
        foreach (Widget child in gridWidget.Children)
        {
          if (child.IsVisible && (child.WidthSizePolicy == SizePolicy.CoverChildren || child.HeightSizePolicy == SizePolicy.CoverChildren))
            child.Measure(new Vector2());
        }
        int rowCount;
        int usedRowCount;
        int columnCount;
        int usedColumnCount;
        this.CalculateRowColumnCounts(gridWidget, this.Direction, visibleChildrenCount, out rowCount, out usedRowCount, out columnCount, out usedColumnCount);
        this.UpdateCellSizes(gridWidget, rowCount, usedRowCount, columnCount, usedColumnCount, measureSpec.X, measureSpec.Y);
        int visibleIndex = 0;
        for (int index = 0; index < gridWidget.Children.Count; ++index)
        {
          Widget child = gridWidget.Children[index];
          if (child.IsVisible)
          {
            int row;
            int column;
            this.CalculateRowColumnIndices(visibleIndex, rowCount, columnCount, out row, out column);
            float element1 = this.GetElement(this.ColumnWidths, column);
            float element2 = this.GetElement(this.RowHeights, row);
            child.Measure(new Vector2(element1, element2));
            ++visibleIndex;
          }
        }
        vector2 = new Vector2(this.ColumnWidths.Sum(), this.RowHeights.Sum());
      }
      return vector2;
    }

    void ILayout.OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      GridWidget gridWidget = (GridWidget) widget;
      int visibleChildrenCount = gridWidget.Children.Count<Widget>((Func<Widget, bool>) (x => x.IsVisible));
      if (visibleChildrenCount <= 0)
        return;
      float totalWidth = right - left;
      float totalHeight = bottom - top;
      int rowCount;
      int usedRowCount;
      int columnCount;
      int usedColumnCount;
      this.CalculateRowColumnCounts(gridWidget, this.Direction, visibleChildrenCount, out rowCount, out usedRowCount, out columnCount, out usedColumnCount);
      this.UpdateCellSizes(gridWidget, rowCount, usedRowCount, columnCount, usedColumnCount, totalWidth, totalHeight);
      float[] elements1 = new float[this.RowHeights.Count + 1];
      float[] elements2 = new float[this.ColumnWidths.Count + 1];
      elements1[0] = 0.0f;
      elements2[0] = 0.0f;
      for (int index = 0; index < this.RowHeights.Count; ++index)
        elements1[index + 1] = this.RowHeights[index] + elements1[index];
      for (int index = 0; index < this.ColumnWidths.Count; ++index)
        elements2[index + 1] = this.ColumnWidths[index] + elements2[index];
      int visibleIndex = 0;
      for (int index1 = 0; index1 < gridWidget.Children.Count; ++index1)
      {
        Widget child = gridWidget.Children[index1];
        if (child.IsVisible)
        {
          int row;
          int column;
          this.CalculateRowColumnIndices(visibleIndex, rowCount, columnCount, out row, out column);
          int index2 = usedRowCount - row - 1;
          int index3 = usedColumnCount - column - 1;
          float element1 = this.GetElement(this.ColumnWidths, column);
          float element2 = this.GetElement(this.RowHeights, row);
          float top1 = 0.0f;
          float left1 = 0.0f;
          if (this.VerticalLayoutMethod == GridVerticalLayoutMethod.TopToBottom)
            top1 = this.GetElement((IReadOnlyList<float>) elements1, row);
          else if (this.VerticalLayoutMethod == GridVerticalLayoutMethod.Center)
          {
            if (this.Direction == GridDirection.ColumnFirst)
            {
              int index4 = TaleWorlds.Library.MathF.Max(0, (column + 1) * usedRowCount - visibleChildrenCount) / 2 + row;
              top1 = this.GetElement((IReadOnlyList<float>) elements1, index4);
            }
          }
          else if (this.VerticalLayoutMethod == GridVerticalLayoutMethod.BottomToTop)
            top1 = this.GetElement((IReadOnlyList<float>) elements1, index2);
          if (this.HorizontalLayoutMethod == GridHorizontalLayoutMethod.LeftToRight)
            left1 = this.GetElement((IReadOnlyList<float>) elements2, column);
          else if (this.HorizontalLayoutMethod == GridHorizontalLayoutMethod.Center)
          {
            if (this.Direction == GridDirection.RowFirst)
            {
              int index5 = TaleWorlds.Library.MathF.Max(0, (row + 1) * usedColumnCount - visibleChildrenCount) / 2 + column;
              left1 = this.GetElement((IReadOnlyList<float>) elements2, index5);
            }
          }
          else if (this.HorizontalLayoutMethod == GridHorizontalLayoutMethod.RightToLeft)
            left1 = this.GetElement((IReadOnlyList<float>) elements2, index3);
          child.Layout(left1, top1 + element2, left1 + element1, top1);
          ++visibleIndex;
        }
      }
    }

    private void UpdateCellSizes(
      GridWidget gridWidget,
      int rowCount,
      int usedRowCount,
      int columnCount,
      int usedColumnCount,
      float totalWidth,
      float totalHeight)
    {
      float[] numArray1 = new float[usedRowCount];
      float[] numArray2 = new float[usedColumnCount];
      for (int index = 0; index < numArray1.Length; ++index)
        numArray1[index] = 0.0f;
      for (int index = 0; index < numArray2.Length; ++index)
        numArray2[index] = 0.0f;
      int visibleIndex = 0;
      for (int index = 0; index < gridWidget.Children.Count; ++index)
      {
        Widget child = gridWidget.Children[index];
        if (child.IsVisible)
        {
          int row;
          int column;
          this.CalculateRowColumnIndices(visibleIndex, rowCount, columnCount, out row, out column);
          float a1 = gridWidget.WidthSizePolicy != SizePolicy.CoverChildren ? totalWidth / (float) columnCount : (!gridWidget.UseDynamicCellWidth || child.WidthSizePolicy == SizePolicy.StretchToParent ? gridWidget.DefaultScaledCellWidth : child.MeasuredSize.X + child.ScaledMarginLeft + child.ScaledMarginRight);
          float a2 = gridWidget.HeightSizePolicy != SizePolicy.CoverChildren ? totalHeight / (float) rowCount : (!gridWidget.UseDynamicCellHeight || child.HeightSizePolicy == SizePolicy.StretchToParent ? gridWidget.DefaultScaledCellHeight : child.MeasuredSize.Y + child.ScaledMarginTop + child.ScaledMarginBottom);
          if (row >= 0 && row < numArray1.Length)
            numArray1[row] = TaleWorlds.Library.MathF.Max(a2, numArray1[row]);
          if (column >= 0 && column < numArray2.Length)
            numArray2[column] = TaleWorlds.Library.MathF.Max(a1, numArray2[column]);
          ++visibleIndex;
        }
      }
      this.RowHeights = (IReadOnlyList<float>) numArray1;
      this.ColumnWidths = (IReadOnlyList<float>) numArray2;
    }

    private void CalculateRowColumnIndices(
      int visibleIndex,
      int rowCount,
      int columnCount,
      out int row,
      out int column)
    {
      if (this.Direction == GridDirection.RowFirst)
      {
        row = visibleIndex / columnCount;
        column = visibleIndex % columnCount;
      }
      else
      {
        row = visibleIndex % rowCount;
        column = visibleIndex / rowCount;
      }
    }

    private void CalculateRowColumnCounts(
      GridWidget gridWidget,
      GridDirection direction,
      int visibleChildrenCount,
      out int rowCount,
      out int usedRowCount,
      out int columnCount,
      out int usedColumnCount)
    {
      bool flag1 = gridWidget.RowCount < 0;
      bool flag2 = gridWidget.ColumnCount < 0;
      rowCount = flag1 ? 3 : gridWidget.RowCount;
      columnCount = flag2 ? 3 : gridWidget.ColumnCount;
      int num1;
      int num2;
      if (direction == GridDirection.RowFirst)
      {
        num1 = TaleWorlds.Library.MathF.Min(visibleChildrenCount, columnCount);
        num2 = (visibleChildrenCount % columnCount > 0 ? 1 : 0) + visibleChildrenCount / columnCount;
      }
      else
      {
        num2 = TaleWorlds.Library.MathF.Min(visibleChildrenCount, rowCount);
        num1 = (visibleChildrenCount % rowCount > 0 ? 1 : 0) + visibleChildrenCount / rowCount;
      }
      bool flag3 = gridWidget.HeightSizePolicy != SizePolicy.CoverChildren;
      bool flag4 = gridWidget.WidthSizePolicy != SizePolicy.CoverChildren;
      usedRowCount = flag3 ? rowCount : num2;
      usedColumnCount = flag4 ? columnCount : num1;
    }

    private float GetElement(IReadOnlyList<float> elements, int index)
    {
      return (index < 0 ? 0 : (index < elements.Count ? 1 : 0)) == 0 ? 0.0f : elements[index];
    }
  }
}
