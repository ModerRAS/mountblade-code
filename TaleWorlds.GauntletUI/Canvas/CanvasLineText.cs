// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasLineText
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Globalization;
using System.Numerics;
using System.Xml;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasLineText : CanvasLineElement
  {
    private readonly Text _text;

    public string Value
    {
      get => this._text.Value;
      set
      {
        this._text.CurrentLanguage = (ILanguage) this.FontFactory.GetCurrentLanguage();
        this._text.Value = value;
      }
    }

    public float FontSize { get; set; }

    public Color FontColor { get; set; }

    public CanvasLineText(
      CanvasLine line,
      int segmentIndex,
      FontFactory fontFactory,
      SpriteData spriteData)
      : base(line, segmentIndex, fontFactory, spriteData)
    {
      this._text = new Text(400, 400, fontFactory.DefaultFont, new Func<int, Font>(fontFactory.GetUsableFontForCharacter));
      this.FontColor = Color.White;
    }

    public void LoadFrom(XmlNode textNode)
    {
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) textNode.Attributes)
      {
        string name = attribute.Name;
        string color = attribute.Value;
        switch (name)
        {
          case "Value":
            this.Value = color;
            continue;
          case "FontSize":
            this.FontSize = Convert.ToSingle(color, (IFormatProvider) CultureInfo.InvariantCulture);
            continue;
          case "FontColor":
            this.FontColor = Color.ConvertStringToColor(color);
            continue;
          default:
            continue;
        }
      }
    }

    public override void Update(float scale)
    {
      base.Update(scale);
      this._text.FontSize = this.FontSize * scale;
    }

    protected override Vector2 Measure()
    {
      return this._text.GetPreferredSize(false, 0.0f, false, 0.0f, (SpriteData) null, 1f);
    }

    protected override void Render(Vector2 globalPosition, TwoDimensionDrawContext drawContext)
    {
      TextMaterial material = new TextMaterial();
      material.Color = this.FontColor;
      Vector2 vector2 = globalPosition + this.LocalPosition;
      drawContext.Draw(this._text, material, vector2.X, vector2.Y, this.Width, this.Height);
    }
  }
}
