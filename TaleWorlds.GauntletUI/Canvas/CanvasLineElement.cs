// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasLineElement
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public abstract class CanvasLineElement : CanvasObject
  {
    public CanvasLine Line { get; set; }

    public int SegmentIndex { get; set; }

    protected CanvasLineElement(
      CanvasLine line,
      int segmentIndex,
      FontFactory fontFactory,
      SpriteData spriteData)
      : base((CanvasObject) line, fontFactory, spriteData)
    {
      this.Line = line;
      this.SegmentIndex = segmentIndex;
    }

    protected override sealed Vector2 Layout()
    {
      return Vector2.Zero with
      {
        X = this.Line.GetHorizontalPositionOf(this.SegmentIndex),
        Y = this.Line.Height - this.Height
      };
    }
  }
}
