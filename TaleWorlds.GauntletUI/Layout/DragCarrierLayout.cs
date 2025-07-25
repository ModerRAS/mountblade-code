// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.DragCarrierLayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public class DragCarrierLayout : ILayout
  {
    Vector2 ILayout.MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      Widget child = widget.GetChild(0);
      child.Measure(measureSpec);
      return child.MeasuredSize;
    }

    void ILayout.OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      float left1 = 0.0f;
      float top1 = 0.0f;
      float right1 = right - left;
      float bottom1 = bottom - top;
      widget.GetChild(0).Layout(left1, bottom1, right1, top1);
    }
  }
}
