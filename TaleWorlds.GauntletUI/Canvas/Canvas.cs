// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.Canvas
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using System.Xml;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class Canvas
  {
    private SpriteData _spriteData;
    private FontFactory _fontFactory;
    private CanvasObject _root;

    public Canvas(SpriteData spriteData, FontFactory fontFactory)
    {
      this._spriteData = spriteData;
      this._fontFactory = fontFactory;
    }

    public CanvasObject Root => this._root;

    public void LoadFrom(XmlNode canvasNode)
    {
      this._root = (CanvasObject) null;
      if (canvasNode == null)
        return;
      this._root = new CanvasObject((CanvasObject) null, this._fontFactory, this._spriteData);
      foreach (XmlNode canvasImageNode in canvasNode)
      {
        CanvasElement canvasElement = (CanvasElement) null;
        if (canvasImageNode.Name == "Image")
        {
          CanvasImage canvasImage = new CanvasImage(this._root, this._fontFactory, this._spriteData);
          canvasImage.LoadFrom(canvasImageNode);
          canvasElement = (CanvasElement) canvasImage;
        }
        else if (canvasImageNode.Name == "TextBox")
        {
          CanvasTextBox canvasTextBox = new CanvasTextBox(this._root, this._fontFactory, this._spriteData);
          canvasTextBox.LoadFrom(canvasImageNode);
          canvasElement = (CanvasElement) canvasTextBox;
        }
        if (canvasElement != null)
          this._root.Children.Add((CanvasObject) canvasElement);
      }
    }

    public void Update(float scale) => this._root.Update(scale);

    public void DoMeasure(bool fixedWidth, bool fixedHeight, float width, float height)
    {
      this._root.BeginMeasure(fixedWidth, fixedHeight, width, height);
    }

    public void DoLayout() => this._root.DoLayout();

    public void DoRender(Vector2 globalPosition, TwoDimensionDrawContext drawContext)
    {
      this._root.DoRender(globalPosition, drawContext);
    }
  }
}
