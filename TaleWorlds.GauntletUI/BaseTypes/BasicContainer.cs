// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.BasicContainer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class BasicContainer : Container
  {
    public BasicContainer(UIContext context)
      : base(context)
    {
    }

    public override Predicate<Widget> AcceptDropPredicate { get; set; }

    public override Vector2 GetDropGizmoPosition(Vector2 draggedWidgetPosition)
    {
      throw new NotImplementedException();
    }

    public override int GetIndexForDrop(Vector2 draggedWidgetPosition)
    {
      throw new NotImplementedException();
    }

    public override bool IsDragHovering { get; }

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
