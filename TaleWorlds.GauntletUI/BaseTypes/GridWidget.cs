// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.GridWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.Layout;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class GridWidget : Container
  {
    private float _defaultCellWidth;
    private float _defaultCellHeight;
    private int _rowCount;
    private int _columnCount;
    private bool _useDynamicCellWidth;
    private bool _useDynamicCellHeight;
    public const int DefaultRowCount = 3;
    public const int DefaultColumnCount = 3;

    public GridLayout GridLayout { get; private set; }

    [Editor(false)]
    public float DefaultCellWidth
    {
      get => this._defaultCellWidth;
      set
      {
        if ((double) this._defaultCellWidth == (double) value)
          return;
        this._defaultCellWidth = value;
        this.OnPropertyChanged(value, nameof (DefaultCellWidth));
      }
    }

    public float DefaultScaledCellWidth => this.DefaultCellWidth * this._scaleToUse;

    [Editor(false)]
    public float DefaultCellHeight
    {
      get => this._defaultCellHeight;
      set
      {
        if ((double) this._defaultCellHeight == (double) value)
          return;
        this._defaultCellHeight = value;
        this.OnPropertyChanged(value, nameof (DefaultCellHeight));
      }
    }

    public float DefaultScaledCellHeight => this.DefaultCellHeight * this._scaleToUse;

    [Editor(false)]
    public int RowCount
    {
      get => this._rowCount;
      set
      {
        if (this._rowCount == value)
          return;
        this._rowCount = value;
        this.OnPropertyChanged(value, nameof (RowCount));
      }
    }

    [Editor(false)]
    public int ColumnCount
    {
      get => this._columnCount;
      set
      {
        if (this._columnCount == value)
          return;
        this._columnCount = value;
        this.OnPropertyChanged(value, nameof (ColumnCount));
      }
    }

    [Editor(false)]
    public bool UseDynamicCellWidth
    {
      get => this._useDynamicCellWidth;
      set
      {
        if (this._useDynamicCellWidth == value)
          return;
        this._useDynamicCellWidth = value;
        this.OnPropertyChanged(value, nameof (UseDynamicCellWidth));
      }
    }

    [Editor(false)]
    public bool UseDynamicCellHeight
    {
      get => this._useDynamicCellHeight;
      set
      {
        if (this._useDynamicCellHeight == value)
          return;
        this._useDynamicCellHeight = value;
        this.OnPropertyChanged(value, nameof (UseDynamicCellHeight));
      }
    }

    public override Predicate<Widget> AcceptDropPredicate { get; set; }

    public override bool IsDragHovering => false;

    public GridWidget(UIContext context)
      : base(context)
    {
      this.GridLayout = new GridLayout();
      this.LayoutImp = (ILayout) this.GridLayout;
      this.RowCount = -1;
      this.ColumnCount = -1;
    }

    public override Vector2 GetDropGizmoPosition(Vector2 draggedWidgetPosition)
    {
      throw new NotImplementedException();
    }

    public override int GetIndexForDrop(Vector2 draggedWidgetPosition)
    {
      throw new NotImplementedException();
    }

    public override void OnChildSelected(Widget widget)
    {
      int num = -1;
      for (int i = 0; i < this.ChildCount; ++i)
      {
        if (widget == this.GetChild(i))
          num = i;
      }
      this.IntValue = num;
    }
  }
}
