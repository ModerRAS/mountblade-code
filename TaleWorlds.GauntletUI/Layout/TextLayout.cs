// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Layout.TextLayout
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Layout
{
  public class TextLayout : ILayout
  {
    private ILayout _defaultLayout;
    private IText _text;

    public TextLayout(IText text)
    {
      this._defaultLayout = (ILayout) new DefaultLayout();
      this._text = text;
    }

    Vector2 ILayout.MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      Vector2 vector2 = this._defaultLayout.MeasureChildren(widget, measureSpec, spriteData, renderScale);
      bool fixedWidth = widget.WidthSizePolicy != SizePolicy.CoverChildren || (double) widget.MaxWidth != 0.0;
      bool fixedHeight = widget.HeightSizePolicy != SizePolicy.CoverChildren || (double) widget.MaxHeight != 0.0;
      float x = measureSpec.X;
      float y = measureSpec.Y;
      Vector2 preferredSize = this._text.GetPreferredSize(fixedWidth, x, fixedHeight, y, spriteData, renderScale);
      if ((double) vector2.X < (double) preferredSize.X)
        vector2.X = preferredSize.X;
      if ((double) vector2.Y < (double) preferredSize.Y)
        vector2.Y = preferredSize.Y;
      return vector2;
    }

    void ILayout.OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      this._defaultLayout.OnLayout(widget, left, bottom, right, top);
    }
  }
}
