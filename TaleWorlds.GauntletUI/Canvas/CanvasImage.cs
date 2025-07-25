// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasImage
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasImage : CanvasElement
  {
    public Sprite Sprite { get; set; }

    public CanvasImage(CanvasObject parent, FontFactory fontFactory, SpriteData spriteData)
      : base(parent, fontFactory, spriteData)
    {
    }

    public override void LoadFrom(XmlNode canvasImageNode)
    {
      base.LoadFrom(canvasImageNode);
      foreach (XmlAttribute attribute in (XmlNamedNodeMap) canvasImageNode.Attributes)
      {
        string name1 = attribute.Name;
        string name2 = attribute.Value;
        if (name1 == "Sprite")
          this.Sprite = this.SpriteData.GetSprite(name2);
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
