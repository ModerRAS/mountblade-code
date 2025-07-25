// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.WidgetContainer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.GauntletUI.BaseTypes;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  internal class WidgetContainer
  {
    private int _currentBufferIndex;
    private List<Widget>[] _widgetLists;
    private EmptyWidget _emptyWidget;
    private int _emptyCount;
    private WidgetContainer.ContainerType _containerType;

    internal int Count => this._widgetLists[this._currentBufferIndex].Count;

    internal int RealCount => this._widgetLists[this._currentBufferIndex].Count - this._emptyCount;

    internal WidgetContainer(
      UIContext context,
      int initialCapacity,
      WidgetContainer.ContainerType type)
    {
      this._emptyWidget = new EmptyWidget(context);
      this._currentBufferIndex = 0;
      this._widgetLists = new List<Widget>[2]
      {
        new List<Widget>(initialCapacity),
        new List<Widget>(initialCapacity)
      };
      this._containerType = type;
      this._emptyCount = 0;
    }

    internal List<Widget> GetCurrentList() => this._widgetLists[this._currentBufferIndex];

    internal Widget this[int index]
    {
      get => this._widgetLists[this._currentBufferIndex][index];
      set => this._widgetLists[this._currentBufferIndex][index] = value;
    }

    internal int Add(Widget widget)
    {
      this._widgetLists[this._currentBufferIndex].Add(widget);
      return this._widgetLists[this._currentBufferIndex].Count - 1;
    }

    internal void Remove(Widget widget)
    {
      this._widgetLists[this._currentBufferIndex][this._widgetLists[this._currentBufferIndex].IndexOf(widget)] = (Widget) this._emptyWidget;
      ++this._emptyCount;
    }

    public void Clear()
    {
      for (int index = 0; index < this._widgetLists.Length; ++index)
        this._widgetLists[index].Clear();
      this._widgetLists = (List<Widget>[]) null;
      this._emptyCount = 0;
    }

    internal void RemoveFromIndex(int index)
    {
      this._widgetLists[this._currentBufferIndex][index] = (Widget) this._emptyWidget;
      ++this._emptyCount;
    }

    internal bool CheckFragmentation()
    {
      int count = this._widgetLists[this._currentBufferIndex].Count;
      return count > 32 && (int) ((double) count * 0.10000000149011612) < this._emptyCount;
    }

    internal void DoDefragmentation()
    {
      int count = this._widgetLists[this._currentBufferIndex].Count;
      int index1 = (this._currentBufferIndex + 1) % 2;
      List<Widget> widgetList1 = this._widgetLists[this._currentBufferIndex];
      List<Widget> widgetList2 = this._widgetLists[index1];
      int num = 0;
      for (int index2 = 0; index2 < count; ++index2)
      {
        Widget widget = widgetList1[index2];
        if (widget != this._emptyWidget)
        {
          switch (this._containerType)
          {
            case WidgetContainer.ContainerType.Update:
              widget.OnUpdateListIndex -= num;
              break;
            case WidgetContainer.ContainerType.ParallelUpdate:
              widget.OnParallelUpdateListIndex -= num;
              break;
            case WidgetContainer.ContainerType.LateUpdate:
              widget.OnLateUpdateListIndex -= num;
              break;
            case WidgetContainer.ContainerType.VisualDefinition:
              widget.OnVisualDefinitionListIndex -= num;
              break;
            case WidgetContainer.ContainerType.TweenPosition:
              widget.OnTweenPositionListIndex -= num;
              break;
            case WidgetContainer.ContainerType.UpdateBrushes:
              widget.OnUpdateBrushesIndex -= num;
              break;
          }
          widgetList2.Add(widget);
        }
        else
          ++num;
      }
      widgetList1.Clear();
      this._emptyCount = 0;
      this._currentBufferIndex = index1;
    }

    internal enum ContainerType
    {
      None,
      Update,
      ParallelUpdate,
      LateUpdate,
      VisualDefinition,
      TweenPosition,
      UpdateBrushes,
    }
  }
}
