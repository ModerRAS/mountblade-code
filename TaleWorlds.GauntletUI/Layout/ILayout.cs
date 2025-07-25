// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.ILayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public interface ILayout
  {
    Vector2 MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale);

    void OnLayout(Widget widget, float left, float bottom, float right, float top);
  }
}
