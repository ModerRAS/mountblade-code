// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Brush
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class Brush
  {
    private const float DefaultTransitionDuration = 0.05f;
    private Dictionary<string, Style> _styles;
    private Dictionary<string, BrushLayer> _layers;
    private Dictionary<string, BrushAnimation> _brushAnimations;

    public Brush ClonedFrom { get; private set; }

    [Editor(false)]
    public string Name { get; set; }

    [Editor(false)]
    public float TransitionDuration { get; set; }

    public Style DefaultStyle { get; private set; }

    public Font Font
    {
      get => this.DefaultStyle.Font;
      set => this.DefaultStyle.Font = value;
    }

    public FontStyle FontStyle
    {
      get => this.DefaultStyle.FontStyle;
      set => this.DefaultStyle.FontStyle = value;
    }

    public int FontSize
    {
      get => this.DefaultStyle.FontSize;
      set => this.DefaultStyle.FontSize = value;
    }

    [Editor(false)]
    public TextHorizontalAlignment TextHorizontalAlignment { get; set; }

    [Editor(false)]
    public TextVerticalAlignment TextVerticalAlignment { get; set; }

    [Editor(false)]
    public float GlobalColorFactor { get; set; }

    [Editor(false)]
    public float GlobalAlphaFactor { get; set; }

    [Editor(false)]
    public Color GlobalColor { get; set; }

    public SoundProperties SoundProperties { get; set; }

    public Sprite Sprite
    {
      get => this.DefaultStyleLayer.Sprite;
      set => this.DefaultStyleLayer.Sprite = value;
    }

    [Editor(false)]
    public bool VerticalFlip
    {
      get => this.DefaultStyleLayer.VerticalFlip;
      set => this.DefaultStyleLayer.VerticalFlip = value;
    }

    [Editor(false)]
    public bool HorizontalFlip
    {
      get => this.DefaultStyleLayer.HorizontalFlip;
      set => this.DefaultStyleLayer.HorizontalFlip = value;
    }

    public Color Color
    {
      get => this.DefaultStyleLayer.Color;
      set => this.DefaultStyleLayer.Color = value;
    }

    public float ColorFactor
    {
      get => this.DefaultStyleLayer.ColorFactor;
      set => this.DefaultStyleLayer.ColorFactor = value;
    }

    public float AlphaFactor
    {
      get => this.DefaultStyleLayer.AlphaFactor;
      set => this.DefaultStyleLayer.AlphaFactor = value;
    }

    public float HueFactor
    {
      get => this.DefaultStyleLayer.HueFactor;
      set => this.DefaultStyleLayer.HueFactor = value;
    }

    public float SaturationFactor
    {
      get => this.DefaultStyleLayer.SaturationFactor;
      set => this.DefaultStyleLayer.SaturationFactor = value;
    }

    public float ValueFactor
    {
      get => this.DefaultStyleLayer.ValueFactor;
      set => this.DefaultStyleLayer.ValueFactor = value;
    }

    public Color FontColor
    {
      get => this.DefaultStyle.FontColor;
      set => this.DefaultStyle.FontColor = value;
    }

    public float TextColorFactor
    {
      get => this.DefaultStyle.TextColorFactor;
      set => this.DefaultStyle.TextColorFactor = value;
    }

    public float TextAlphaFactor
    {
      get => this.DefaultStyle.TextAlphaFactor;
      set => this.DefaultStyle.TextAlphaFactor = value;
    }

    public float TextHueFactor
    {
      get => this.DefaultStyle.TextHueFactor;
      set => this.DefaultStyle.TextHueFactor = value;
    }

    public float TextSaturationFactor
    {
      get => this.DefaultStyle.TextSaturationFactor;
      set => this.DefaultStyle.TextSaturationFactor = value;
    }

    public float TextValueFactor
    {
      get => this.DefaultStyle.TextValueFactor;
      set => this.DefaultStyle.TextValueFactor = value;
    }

    [Editor(false)]
    public Dictionary<string, BrushLayer>.ValueCollection Layers => this._layers.Values;

    public StyleLayer DefaultStyleLayer => this.DefaultStyle.DefaultLayer;

    public BrushLayer DefaultLayer => this._layers["Default"];

    public Brush()
    {
      this._styles = new Dictionary<string, Style>();
      this._layers = new Dictionary<string, BrushLayer>();
      this._brushAnimations = new Dictionary<string, BrushAnimation>();
      this.SoundProperties = new SoundProperties();
      this.TextHorizontalAlignment = TextHorizontalAlignment.Center;
      this.TextVerticalAlignment = TextVerticalAlignment.Center;
      BrushLayer brushLayer = new BrushLayer();
      brushLayer.Name = "Default";
      this._layers.Add(brushLayer.Name, brushLayer);
      this.DefaultStyle = new Style((IEnumerable<BrushLayer>) new List<BrushLayer>()
      {
        brushLayer
      });
      this.DefaultStyle.Name = "Default";
      this.DefaultStyle.SetAsDefaultStyle();
      this.AddStyle(this.DefaultStyle);
      this.ClonedFrom = (Brush) null;
      this.TransitionDuration = 0.05f;
      this.GlobalColorFactor = 1f;
      this.GlobalAlphaFactor = 1f;
      this.GlobalColor = Color.White;
    }

    public Style GetStyle(string name)
    {
      Style style;
      this._styles.TryGetValue(name, out style);
      return style;
    }

    [Editor(false)]
    public Dictionary<string, Style>.ValueCollection Styles => this._styles.Values;

    public Style GetStyleOrDefault(string name)
    {
      Style style;
      this._styles.TryGetValue(name, out style);
      return style ?? this.DefaultStyle;
    }

    public void AddStyle(Style style) => this._styles.Add(style.Name, style);

    public void RemoveStyle(string styleName) => this._styles.Remove(styleName);

    public void AddLayer(BrushLayer layer)
    {
      this._layers.Add(layer.Name, layer);
      foreach (Style style in this.Styles)
        style.AddLayer(new StyleLayer(layer));
    }

    public void RemoveLayer(string layerName)
    {
      this._layers.Remove(layerName);
      foreach (Style style in this.Styles)
        style.RemoveLayer(layerName);
    }

    public BrushLayer GetLayer(string name)
    {
      BrushLayer brushLayer;
      return this._layers.TryGetValue(name, out brushLayer) ? brushLayer : (BrushLayer) null;
    }

    public void FillFrom(Brush brush)
    {
      this.Name = brush.Name;
      this.TransitionDuration = brush.TransitionDuration;
      this.TextVerticalAlignment = brush.TextVerticalAlignment;
      this.TextHorizontalAlignment = brush.TextHorizontalAlignment;
      this.GlobalColorFactor = brush.GlobalColorFactor;
      this.GlobalAlphaFactor = brush.GlobalAlphaFactor;
      this.GlobalColor = brush.GlobalColor;
      this._layers = new Dictionary<string, BrushLayer>();
      foreach (BrushLayer brushLayer1 in brush._layers.Values)
      {
        BrushLayer brushLayer2 = new BrushLayer();
        brushLayer2.FillFrom(brushLayer1);
        this._layers.Add(brushLayer2.Name, brushLayer2);
      }
      this._styles = new Dictionary<string, Style>();
      Style style1 = brush._styles["Default"];
      Style style2 = new Style((IEnumerable<BrushLayer>) this._layers.Values);
      style2.SetAsDefaultStyle();
      style2.FillFrom(style1);
      this._styles.Add(style2.Name, style2);
      this.DefaultStyle = style2;
      foreach (Style style3 in brush._styles.Values)
      {
        if (style3.Name != "Default")
        {
          Style style4 = new Style((IEnumerable<BrushLayer>) this._layers.Values);
          style4.DefaultStyle = this.DefaultStyle;
          style4.FillFrom(style3);
          this._styles.Add(style4.Name, style4);
        }
      }
      this._brushAnimations = new Dictionary<string, BrushAnimation>();
      foreach (BrushAnimation animation in brush._brushAnimations.Values)
      {
        BrushAnimation brushAnimation = new BrushAnimation();
        brushAnimation.FillFrom(animation);
        this._brushAnimations.Add(brushAnimation.Name, brushAnimation);
      }
      this.SoundProperties = new SoundProperties();
      this.SoundProperties.FillFrom(brush.SoundProperties);
    }

    public Brush Clone()
    {
      Brush brush = new Brush();
      brush.FillFrom(this);
      brush.Name = this.Name + "(Clone)";
      brush.ClonedFrom = this;
      return brush;
    }

    public void AddAnimation(BrushAnimation animation)
    {
      this._brushAnimations.Add(animation.Name, animation);
    }

    public BrushAnimation GetAnimation(string name)
    {
      BrushAnimation brushAnimation;
      return name != null && this._brushAnimations.TryGetValue(name, out brushAnimation) ? brushAnimation : (BrushAnimation) null;
    }

    public IEnumerable<BrushAnimation> GetAnimations()
    {
      return (IEnumerable<BrushAnimation>) this._brushAnimations.Values;
    }

    public override string ToString()
    {
      return string.IsNullOrEmpty(this.Name) ? base.ToString() : this.Name;
    }

    public bool IsCloneRelated(Brush brush)
    {
      return this.ClonedFrom == brush || brush.ClonedFrom == this || brush.ClonedFrom == this.ClonedFrom;
    }
  }
}
