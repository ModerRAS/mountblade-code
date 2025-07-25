// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasTextBox
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasTextBox : CanvasElement
  {
    private List<CanvasLine> _lines;

    public CanvasTextBox(CanvasObject parent, FontFactory fontFactory, SpriteData spriteData)
      : base(parent, fontFactory, spriteData)
    {
      this._lines = new List<CanvasLine>();
    }

    public override void LoadFrom(XmlNode canvasTextNode)
    {
      base.LoadFrom(canvasTextNode);
      int lineIndex = 0;
      foreach (XmlNode lineNode in canvasTextNode)
      {
        CanvasLine canvasLine = new CanvasLine(this, lineIndex, this.FontFactory, this.SpriteData);
        canvasLine.LoadFrom(lineNode);
        this._lines.Add(canvasLine);
        this.Children.Add((CanvasObject) canvasLine);
        ++lineIndex;
      }
    }

    protected override Vector2 Measure()
    {
      float num = 0.0f;
      float y = 0.0f;
      foreach (CanvasLine line in this._lines)
      {
        num = Mathf.Max(num, line.Width);
        y += line.Height;
      }
      return new Vector2(num, y);
    }

    public float GetVerticalPositionOf(int index)
    {
      float verticalPositionOf = 0.0f;
      int num = 0;
      foreach (CanvasLine line in this._lines)
      {
        if (num != index)
        {
          verticalPositionOf += line.Height;
          ++num;
        }
        else
          break;
      }
      return verticalPositionOf;
    }
  }
}
