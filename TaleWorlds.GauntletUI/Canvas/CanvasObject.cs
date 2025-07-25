// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasObject
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasObject
  {
    public CanvasObject Parent { get; private set; }

    public List<CanvasObject> Children { get; private set; }

    public float Scale { get; private set; }

    public Vector2 LocalPosition { get; private set; }

    public float Width { get; private set; }

    public float Height { get; private set; }

    public FontFactory FontFactory { get; private set; }

    public SpriteData SpriteData { get; private set; }

    public CanvasObject(CanvasObject parent, FontFactory fontFactory, SpriteData spriteData)
    {
      this.Children = new List<CanvasObject>(32);
      this.Parent = parent;
      this.FontFactory = fontFactory;
      this.SpriteData = spriteData;
    }

    public virtual void Update(float scale)
    {
      this.Scale = scale;
      this.OnUpdate(scale);
      foreach (CanvasObject child in this.Children)
        child.Update(scale);
    }

    protected virtual void OnUpdate(float scale)
    {
    }

    public void BeginMeasure(bool fixedWidth, bool fixedHeight, float width, float height)
    {
      this.DoMeasure();
      if (fixedWidth)
        this.Width = width;
      if (!fixedHeight)
        return;
      this.Height = height;
    }

    public void DoMeasure()
    {
      Vector2 zero = Vector2.Zero;
      foreach (CanvasObject child in this.Children)
      {
        child.DoMeasure();
        Vector2 vector2 = new Vector2(child.Width, child.Height) + child.GetMarginSize();
        zero.X = Mathf.Max(zero.X, vector2.X);
        zero.Y = Mathf.Max(zero.Y, vector2.Y);
      }
      Vector2 vector2_1 = this.Measure();
      this.Width = Mathf.Max(zero.X, vector2_1.X);
      this.Height = Mathf.Max(zero.Y, vector2_1.Y);
    }

    public void DoLayout()
    {
      this.LocalPosition = this.Layout();
      foreach (CanvasObject child in this.Children)
        child.DoLayout();
    }

    protected virtual Vector2 Measure() => Vector2.Zero;

    public virtual Vector2 GetMarginSize() => Vector2.Zero;

    protected virtual Vector2 Layout() => Vector2.Zero;

    public void DoRender(Vector2 globalPosition, TwoDimensionDrawContext drawContext)
    {
      this.Render(globalPosition, drawContext);
      foreach (CanvasObject child in this.Children)
        child.DoRender(globalPosition + this.LocalPosition, drawContext);
    }

    protected virtual void Render(Vector2 globalPosition, TwoDimensionDrawContext drawContext)
    {
    }
  }
}
