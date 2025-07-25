// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Canvas.CanvasWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using System.Xml;
using TaleWorlds.GauntletUI.BaseTypes;
using TaleWorlds.GauntletUI.Layout;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.Canvas
{
  public class CanvasWidget : Widget, ILayout
  {
    private ILayout _defaultLayout;
    private bool _requiresUpdate;
    private XmlElement _canvasNode;
    private TaleWorlds.GauntletUI.Canvas.Canvas _canvas;

    [Editor(false)]
    public string CanvasAsString
    {
      get => this._canvasNode.ToString();
      set
      {
        if ((this._canvasNode != null || value == null) && !(this._canvasNode.ToString() != value))
          return;
        if (!string.IsNullOrEmpty(value))
        {
          XmlDocument xmlDocument = new XmlDocument();
          xmlDocument.LoadXml(value);
          this._canvasNode = xmlDocument.DocumentElement;
        }
        else
          this._canvasNode = (XmlElement) null;
        this._requiresUpdate = true;
        this.OnPropertyChanged<string>(value, nameof (CanvasAsString));
        this.SetMeasureAndLayoutDirty();
      }
    }

    public XmlElement CanvasNode
    {
      get => this._canvasNode;
      set
      {
        if (this._canvasNode == value)
          return;
        this._canvasNode = value;
        this._requiresUpdate = true;
        this.OnPropertyChanged<XmlElement>(value, nameof (CanvasNode));
        this.SetMeasureAndLayoutDirty();
      }
    }

    public CanvasWidget(UIContext context)
      : base(context)
    {
      this._defaultLayout = (ILayout) new DefaultLayout();
      this.LayoutImp = (ILayout) this;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      this.DoUpdate();
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      this.DoUpdate();
    }

    private void DoUpdate()
    {
      if (this._requiresUpdate || this._canvas == null)
        this.UpdateCanvas();
      this._canvas.Update(this._scaleToUse);
    }

    private void UpdateCanvas()
    {
      this._canvas = new TaleWorlds.GauntletUI.Canvas.Canvas(this.EventManager.Context.SpriteData, this.EventManager.Context.FontFactory);
      this._canvas.LoadFrom((XmlNode) this.CanvasNode);
      this._requiresUpdate = false;
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      base.OnRender(twoDimensionContext, drawContext);
      if (this._canvas == null)
        return;
      this._canvas.DoRender(this.GlobalPosition, drawContext);
    }

    Vector2 ILayout.MeasureChildren(
      Widget widget,
      Vector2 measureSpec,
      SpriteData spriteData,
      float renderScale)
    {
      Vector2 vector2 = this._defaultLayout.MeasureChildren(widget, measureSpec, spriteData, renderScale);
      if (this._canvas != null)
      {
        this._canvas.DoMeasure(this.WidthSizePolicy != SizePolicy.CoverChildren || (double) this.MaxWidth != 0.0, this.HeightSizePolicy != SizePolicy.CoverChildren || (double) this.MaxHeight != 0.0, measureSpec.X, measureSpec.Y);
        vector2.X = Mathf.Max(this._canvas.Root.Width, vector2.X);
        vector2.Y = Mathf.Max(this._canvas.Root.Height, vector2.Y);
      }
      return vector2;
    }

    void ILayout.OnLayout(Widget widget, float left, float bottom, float right, float top)
    {
      if (this._canvas != null)
        this._canvas.DoLayout();
      this._defaultLayout.OnLayout(widget, left, bottom, right, top);
    }
  }
}
