// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasElement
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Globalization;
using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public abstract class CanvasElement : CanvasObject
  {
    public bool _usingRelativeX;
    public bool _usingRelativeY;
    private float _relativePositionX;
    private float _relativePositionY;

    public float PositionX { get; set; }

    public float PositionY { get; set; }

    public float RelativePositionX
    {
      get => this._relativePositionX;
      set
      {
        this._relativePositionX = value;
        this._usingRelativeX = true;
      }
    }

    public float RelativePositionY
    {
      get => this._relativePositionY;
      set
      {
        this._relativePositionY = value;
        this._usingRelativeY = true;
      }
    }

    public float PivotX { get; set; }

    public float PivotY { get; set; }

    protected CanvasElement(CanvasObject parent, FontFactory fontFactory, SpriteData spriteData)
      : base(parent, fontFactory, spriteData)
    {
    }

    public virtual void LoadFrom(XmlNode canvasImageNode)
    {
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) canvasImageNode.Attributes)
      {
        string name = attribute.Name;
        string str = attribute.Value;
        switch (name)
        {
          case "PositionX":
            this.PositionX = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "PositionY":
            this.PositionY = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "RelativePositionX":
            this.RelativePositionX = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "RelativePositionY":
            this.RelativePositionY = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "PivotX":
            this.PivotX = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "PivotY":
            this.PivotY = Convert.ToSingle(str, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          default:
            continue;
        }
      }
    }

    protected override sealed Vector2 Layout()
    {
      Vector2 vector2 = new Vector2(this.PositionX, this.PositionY);
      if (this._usingRelativeX)
        vector2.X = this.Parent.Width * this.RelativePositionX;
      else
        vector2.X *= this.Scale;
      if (this._usingRelativeY)
        vector2.Y = this.Parent.Height * this.RelativePositionY;
      else
        vector2.Y *= this.Scale;
      vector2.X -= this.PivotX * this.Width;
      vector2.Y -= this.PivotY * this.Height;
      return vector2;
    }

    public override Vector2 GetMarginSize()
    {
      return new Vector2(this.PositionX * this.Scale, this.PositionY * this.Scale);
    }
  }
}
