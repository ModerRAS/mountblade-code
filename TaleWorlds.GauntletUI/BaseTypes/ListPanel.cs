// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ListPanel
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.Layout;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ListPanel : Container
  {
    private bool _dragHovering;
    private bool _resetSelectedOnLosingFocus;

    public StackLayout StackLayout { get; private set; }

    public ListPanel(UIContext context)
      : base(context)
    {
      this.StackLayout = new StackLayout();
      this.LayoutImp = (ILayout) this.StackLayout;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      this.UpdateListPanel();
      if (!this.ResetSelectedOnLosingFocus || this.CheckIsMyChildRecursive(this.EventManager.LatestMouseDownWidget))
        return;
      this.IntValue = -1;
    }

    private void UpdateListPanel()
    {
      if (!this.AcceptDrop || !this.IsDragHovering)
        return;
      this.DragHoverInsertionIndex = this.GetIndexForDrop(this.EventManager.DraggedWidgetPosition);
    }

    public override Predicate<Widget> AcceptDropPredicate { get; set; }

    public override int GetIndexForDrop(Vector2 draggedWidgetPosition)
    {
      return this.StackLayout.GetIndexForDrop((Container) this, draggedWidgetPosition);
    }

    public override Vector2 GetDropGizmoPosition(Vector2 draggedWidgetPosition)
    {
      return this.StackLayout.GetDropGizmoPosition((Container) this, draggedWidgetPosition);
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

    protected internal override void OnDragHoverBegin()
    {
      this._dragHovering = true;
      this.SetMeasureAndLayoutDirty();
    }

    protected internal override void OnDragHoverEnd()
    {
      this._dragHovering = false;
      this.SetMeasureAndLayoutDirty();
    }

    protected override bool OnPreviewDragHover() => this.AcceptDrop;

    public override bool IsDragHovering => this._dragHovering;

    [Editor(false)]
    public bool ResetSelectedOnLosingFocus
    {
      get => this._resetSelectedOnLosingFocus;
      set
      {
        if (this._resetSelectedOnLosingFocus == value)
          return;
        this._resetSelectedOnLosingFocus = value;
        this.OnPropertyChanged(value, nameof (ResetSelectedOnLosingFocus));
      }
    }
  }
}
