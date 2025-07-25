// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasLineImage
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasLineImage : CanvasLineElement
  {
    private FontFactory _fontFactory;
    private SpriteData _spriteData;

    public Sprite Sprite { get; set; }

    public CanvasLineImage(
      CanvasLine line,
      int segmentIndex,
      FontFactory fontFactory,
      SpriteData spriteData)
      : base(line, segmentIndex, fontFactory, spriteData)
    {
      this._fontFactory = fontFactory;
      this._spriteData = spriteData;
    }

    public void LoadFrom(XmlNode imageNode)
    {
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) imageNode.Attributes)
      {
        string name1 = attribute.Name;
        string name2 = attribute.Value;
        if (name1 == "Sprite")
          this.Sprite = this._spriteData.GetSprite(name2);
      }
    }

    protected override Vector2 Measure()
    {
      Vector2 zero = Vector2.Zero;
      if (this.Sprite != null)
      {
        zero.X = (float) this.Sprite.Width * this.Scale;
        zero.Y = (float) this.Sprite.Height * this.Scale;
      }
      return zero;
    }

    protected override void Render(Vector2 globalPosition, TwoDimensionDrawContext drawContext)
    {
      if (this.Sprite == null)
        return;
      Texture texture = this.Sprite.Texture;
      if (texture == null)
        return;
      SimpleMaterial material = new SimpleMaterial();
      material.Texture = texture;
      Vector2 vector2 = globalPosition + this.LocalPosition;
      drawContext.DrawSprite(this.Sprite, material, vector2.X, vector2.Y, this.Scale, this.Width, this.Height, false, false);
    }
  }
}
