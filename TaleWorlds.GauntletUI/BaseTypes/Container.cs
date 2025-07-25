// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.Container
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public abstract class Container : Widget
  {
    public List<Action<Widget>> SelectEventHandlers = new List<Action<Widget>>();
    public List<Action<Widget, Widget>> ItemAddEventHandlers = new List<Action<Widget, Widget>>();
    public List<Action<Widget, Widget>> ItemRemoveEventHandlers = new List<Action<Widget, Widget>>();
    public List<Action<Widget>> ItemAfterRemoveEventHandlers = new List<Action<Widget>>();
    private int _intValue = -1;
    private bool _currentlyChangingIntValue;
    public bool ShowSelection;
    private int _dragHoverInsertionIndex;
    private List<ContainerItemDescription> _itemDescriptions;

    public ContainerItemDescription DefaultItemDescription { get; private set; }

    public abstract Predicate<Widget> AcceptDropPredicate { get; set; }

    public abstract Vector2 GetDropGizmoPosition(Vector2 draggedWidgetPosition);

    public abstract int GetIndexForDrop(Vector2 draggedWidgetPosition);

    public int IntValue
    {
      get
      {
        if (this._intValue >= this.ChildCount)
          this._intValue = -1;
        return this._intValue;
      }
      set
      {
        if (this._currentlyChangingIntValue)
          return;
        this._currentlyChangingIntValue = true;
        if (value != this._intValue && value < this.ChildCount)
        {
          this._intValue = value;
          this.UpdateSelected();
          foreach (Action<Widget> selectEventHandler in this.SelectEventHandlers)
            selectEventHandler((Widget) this);
          this.EventFired("SelectedItemChange");
          this.OnPropertyChanged(value, nameof (IntValue));
        }
        this._currentlyChangingIntValue = false;
      }
    }

    public abstract bool IsDragHovering { get; }

    public int DragHoverInsertionIndex
    {
      get => this._dragHoverInsertionIndex;
      set
      {
        if (this._dragHoverInsertionIndex == value)
          return;
        this._dragHoverInsertionIndex = value;
        this.SetMeasureAndLayoutDirty();
      }
    }

    protected Container(UIContext context)
      : base(context)
    {
      this.DefaultItemDescription = new ContainerItemDescription();
      this._itemDescriptions = new List<ContainerItemDescription>();
    }

    private void UpdateSelected()
    {
      for (int i = 0; i < this.ChildCount; ++i)
      {
        if (this.GetChild(i) is ButtonWidget child)
        {
          bool flag = i == this.IntValue;
          child.IsSelected = flag;
        }
      }
    }

    protected internal override bool OnDrop()
    {
      if (this.AcceptDrop)
      {
        bool flag = true;
        if (this.AcceptDropHandler != null)
          flag = this.AcceptDropHandler((Widget) this, this.EventManager.DraggedWidget);
        if (flag)
        {
          Widget widget = this.EventManager.ReleaseDraggedWidget();
          int indexForDrop = this.GetIndexForDrop(this.EventManager.DraggedWidgetPosition);
          if (!this.DropEventHandledManually)
          {
            widget.ParentWidget = (Widget) this;
            widget.SetSiblingIndex(indexForDrop);
          }
          this.EventFired("Drop", (object) widget, (object) indexForDrop);
          return true;
        }
      }
      return false;
    }

    public abstract void OnChildSelected(Widget widget);

    public ContainerItemDescription GetItemDescription(string id, int index)
    {
      bool flag = !string.IsNullOrEmpty(id);
      ContainerItemDescription containerItemDescription1 = (ContainerItemDescription) null;
      ContainerItemDescription containerItemDescription2 = (ContainerItemDescription) null;
      for (int index1 = 0; index1 < this._itemDescriptions.Count; ++index1)
      {
        ContainerItemDescription itemDescription = this._itemDescriptions[index1];
        if (flag && itemDescription.WidgetId == id)
          containerItemDescription1 = itemDescription;
        if (index == itemDescription.WidgetIndex)
          containerItemDescription2 = itemDescription;
      }
      return containerItemDescription1 ?? containerItemDescription2 ?? this.DefaultItemDescription;
    }

    protected override void OnChildAdded(Widget child)
    {
      foreach (Action<Widget, Widget> itemAddEventHandler in this.ItemAddEventHandlers)
        itemAddEventHandler((Widget) this, child);
      base.OnChildAdded(child);
    }

    protected override void OnChildRemoved(Widget child)
    {
      int childIndex = this.GetChildIndex(child);
      if (this.ChildCount == 1)
        this.IntValue = -1;
      else if (childIndex < this.IntValue && this.IntValue > 0)
        --this.IntValue;
      foreach (Action<Widget, Widget> removeEventHandler in this.ItemRemoveEventHandlers)
        removeEventHandler((Widget) this, child);
      base.OnChildRemoved(child);
    }

    protected override void OnAfterChildRemoved(Widget child)
    {
      foreach (Action<Widget> removeEventHandler in this.ItemAfterRemoveEventHandlers)
        removeEventHandler((Widget) this);
      base.OnAfterChildRemoved(child);
    }

    public void AddItemDescription(ContainerItemDescription itemDescription)
    {
      this._itemDescriptions.Add(itemDescription);
    }

    public ScrollablePanel FindParentPanel()
    {
      for (Widget parentWidget = this.ParentWidget; parentWidget != null; parentWidget = parentWidget.ParentWidget)
      {
        if (parentWidget is ScrollablePanel parentPanel)
          return parentPanel;
      }
      return (ScrollablePanel) null;
    }
  }
}
