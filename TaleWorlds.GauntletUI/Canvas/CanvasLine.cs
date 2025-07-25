// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasLine
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasLine : CanvasObject
  {
    private List<CanvasLineElement> _elements;
    private CanvasTextBox _textBox;
    private int _lineIndex;

    public CanvasLineAlignment Alignment { get; set; }

    public CanvasLine(
      CanvasTextBox textBox,
      int lineIndex,
      FontFactory fontFactory,
      SpriteData spriteData)
      : base((CanvasObject) textBox, fontFactory, spriteData)
    {
      this._elements = new List<CanvasLineElement>();
      this._lineIndex = lineIndex;
      this._textBox = textBox;
    }

    protected override Vector2 Measure()
    {
      float x = 0.0f;
      float num = 0.0f;
      foreach (CanvasLineElement element in this._elements)
      {
        x += element.Width;
        num = Mathf.Max(num, element.Height);
      }
      return new Vector2(x, num);
    }

    protected override Vector2 Layout()
    {
      Vector2 zero = Vector2.Zero;
      if (this.Alignment == CanvasLineAlignment.Left)
        zero.X = 0.0f;
      else if (this.Alignment == CanvasLineAlignment.Center)
        zero.X = (float) (((double) this.Parent.Width - (double) this.Width) * 0.5);
      else if (this.Alignment == CanvasLineAlignment.Right)
        zero.X = this.Parent.Width - this.Width;
      zero.Y = this._textBox.GetVerticalPositionOf(this._lineIndex);
      return zero;
    }

    public void LoadFrom(XmlNode lineNode)
    {
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) lineNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        if (name == "Alignment")
          this.Alignment = (CanvasLineAlignment) Enum.Parse(typeof (CanvasLineAlignment), str);
      }
      int segmentIndex = 0;
      foreach (XmlNode xmlNode in lineNode)
      {
        CanvasLineElement canvasLineElement = (CanvasLineElement) null;
        if (xmlNode.Name == "LineImage")
        {
          CanvasLineImage canvasLineImage = new CanvasLineImage(this, segmentIndex, this.FontFactory, this.SpriteData);
          canvasLineImage.LoadFrom(xmlNode);
          canvasLineElement = (CanvasLineElement) canvasLineImage;
        }
        else if (xmlNode.Name == "Text")
        {
          CanvasLineText canvasLineText = new CanvasLineText(this, segmentIndex, this.FontFactory, this.SpriteData);
          canvasLineText.LoadFrom(xmlNode);
          canvasLineElement = (CanvasLineElement) canvasLineText;
        }
        if (canvasLineElement != null)
        {
          this._elements.Add(canvasLineElement);
          this.Children.Add((CanvasObject) canvasLineElement);
          ++segmentIndex;
        }
      }
    }

    public float GetHorizontalPositionOf(int index)
    {
      float horizontalPositionOf = 0.0f;
      int num = 0;
      foreach (CanvasLineElement element in this._elements)
      {
        if (num != index)
        {
          horizontalPositionOf += element.Width;
          ++num;
        }
        else
          break;
      }
      return horizontalPositionOf;
    }
  }
}
