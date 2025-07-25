// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.Style
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class Style : IDataSource
  {
    private int _localVersion;
    private bool _isFontColorChanged;
    private bool _isTextGlowColorChanged;
    private bool _isTextOutlineColorChanged;
    private bool _isTextOutlineAmountChanged;
    private bool _isTextGlowRadiusChanged;
    private bool _isTextBlurChanged;
    private bool _isTextShadowOffsetChanged;
    private bool _isTextShadowAngleChanged;
    private bool _isTextColorFactorChanged;
    private bool _isTextAlphaFactorChanged;
    private bool _isTextHueFactorChanged;
    private bool _isTextSaturationFactorChanged;
    private bool _isTextValueFactorChanged;
    private bool _isFontChanged;
    private bool _isFontStyleChanged;
    private bool _isFontSizeChanged;
    private Color _fontColor;
    private Color _textGlowColor;
    private Color _textOutlineColor;
    private float _textOutlineAmount;
    private float _textGlowRadius;
    private float _textBlur;
    private float _textShadowOffset;
    private float _textShadowAngle;
    private float _textColorFactor;
    private float _textAlphaFactor;
    private float _textHueFactor;
    private float _textSaturationFactor;
    private float _textValueFactor;
    private Font _font;
    private FontStyle _fontStyle;
    private int _fontSize;
    private string _animationToPlayOnBegin;
    private Dictionary<string, StyleLayer> _layers;
    private List<StyleLayer> _layersWithIndex;

    public Style DefaultStyle { get; set; }

    [Editor(false)]
    public string Name { get; set; }

    private uint DefaultStyleVersion
    {
      get
      {
        return this.DefaultStyle == null ? 0U : (uint) ((ulong) this.DefaultStyle._localVersion % (ulong) uint.MaxValue);
      }
    }

    public long Version
    {
      get
      {
        uint num = 0;
        for (int index = 0; index < this._layersWithIndex.Count; ++index)
          num += this._layersWithIndex[index].Version;
        return ((long) this._localVersion << 32 | (long) num) + (long) this.DefaultStyleVersion;
      }
    }

    [Editor(false)]
    public string AnimationToPlayOnBegin
    {
      get => this._animationToPlayOnBegin;
      set
      {
        this._animationToPlayOnBegin = value;
        this.AnimationMode = StyleAnimationMode.Animation;
      }
    }

    public int LayerCount => this._layers.Count;

    public StyleLayer DefaultLayer => this._layers["Default"];

    [Editor(false)]
    public List<StyleLayer> Layers => this._layersWithIndex;

    [Editor(false)]
    public StyleAnimationMode AnimationMode { get; set; }

    [Editor(false)]
    public Color FontColor
    {
      get => this._isFontColorChanged ? this._fontColor : this.DefaultStyle.FontColor;
      set
      {
        if (!(this.FontColor != value))
          return;
        this._isFontColorChanged = true;
        this._fontColor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public Color TextGlowColor
    {
      get => this._isTextGlowColorChanged ? this._textGlowColor : this.DefaultStyle.TextGlowColor;
      set
      {
        if (!(this.TextGlowColor != value))
          return;
        this._isTextGlowColorChanged = true;
        this._textGlowColor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public Color TextOutlineColor
    {
      get
      {
        return this._isTextOutlineColorChanged ? this._textOutlineColor : this.DefaultStyle.TextOutlineColor;
      }
      set
      {
        if (!(this.TextOutlineColor != value))
          return;
        this._isTextOutlineColorChanged = true;
        this._textOutlineColor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextOutlineAmount
    {
      get
      {
        return this._isTextOutlineAmountChanged ? this._textOutlineAmount : this.DefaultStyle.TextOutlineAmount;
      }
      set
      {
        if ((double) this.TextOutlineAmount == (double) value)
          return;
        this._isTextOutlineAmountChanged = true;
        this._textOutlineAmount = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextGlowRadius
    {
      get
      {
        return this._isTextGlowRadiusChanged ? this._textGlowRadius : this.DefaultStyle.TextGlowRadius;
      }
      set
      {
        if ((double) this.TextGlowRadius == (double) value)
          return;
        this._isTextGlowRadiusChanged = true;
        this._textGlowRadius = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextBlur
    {
      get => this._isTextBlurChanged ? this._textBlur : this.DefaultStyle.TextBlur;
      set
      {
        if ((double) this.TextBlur == (double) value)
          return;
        this._isTextBlurChanged = true;
        this._textBlur = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextShadowOffset
    {
      get
      {
        return this._isTextShadowOffsetChanged ? this._textShadowOffset : this.DefaultStyle.TextShadowOffset;
      }
      set
      {
        if ((double) this.TextShadowOffset == (double) value)
          return;
        this._isTextShadowOffsetChanged = true;
        this._textShadowOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextShadowAngle
    {
      get
      {
        return this._isTextShadowAngleChanged ? this._textShadowAngle : this.DefaultStyle.TextShadowAngle;
      }
      set
      {
        if ((double) this.TextShadowAngle == (double) value)
          return;
        this._isTextShadowAngleChanged = true;
        this._textShadowAngle = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextColorFactor
    {
      get
      {
        return this._isTextColorFactorChanged ? this._textColorFactor : this.DefaultStyle.TextColorFactor;
      }
      set
      {
        if ((double) this.TextColorFactor == (double) value)
          return;
        this._isTextColorFactorChanged = true;
        this._textColorFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextAlphaFactor
    {
      get
      {
        return this._isTextAlphaFactorChanged ? this._textAlphaFactor : this.DefaultStyle.TextAlphaFactor;
      }
      set
      {
        if ((double) this.TextAlphaFactor == (double) value)
          return;
        this._isTextAlphaFactorChanged = true;
        this._textAlphaFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextHueFactor
    {
      get => this._isTextHueFactorChanged ? this._textHueFactor : this.DefaultStyle.TextHueFactor;
      set
      {
        if ((double) this.TextHueFactor == (double) value)
          return;
        this._isTextHueFactorChanged = true;
        this._textHueFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextSaturationFactor
    {
      get
      {
        return this._isTextSaturationFactorChanged ? this._textSaturationFactor : this.DefaultStyle.TextSaturationFactor;
      }
      set
      {
        if ((double) this.TextSaturationFactor == (double) value)
          return;
        this._isTextSaturationFactorChanged = true;
        this._textSaturationFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float TextValueFactor
    {
      get
      {
        return this._isTextValueFactorChanged ? this._textValueFactor : this.DefaultStyle.TextValueFactor;
      }
      set
      {
        if ((double) this.TextValueFactor == (double) value)
          return;
        this._isTextValueFactorChanged = true;
        this._textValueFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public Font Font
    {
      get => this._isFontChanged ? this._font : this.DefaultStyle.Font;
      set
      {
        if (this.Font == value)
          return;
        this._isFontChanged = true;
        this._font = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public FontStyle FontStyle
    {
      get => this._isFontStyleChanged ? this._fontStyle : this.DefaultStyle.FontStyle;
      set
      {
        if (this.FontStyle == value)
          return;
        this._isFontStyleChanged = true;
        this._fontStyle = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public int FontSize
    {
      get => this._isFontSizeChanged ? this._fontSize : this.DefaultStyle.FontSize;
      set
      {
        if (this.FontSize == value)
          return;
        this._isFontSizeChanged = true;
        this._fontSize = value;
        ++this._localVersion;
      }
    }

    public Style(IEnumerable<BrushLayer> layers)
    {
      this.AnimationMode = StyleAnimationMode.BasicTransition;
      this._layers = new Dictionary<string, StyleLayer>();
      this._layersWithIndex = new List<StyleLayer>();
      this._fontColor = new Color(0.0f, 0.0f, 0.0f);
      this._textGlowColor = new Color(0.0f, 0.0f, 0.0f);
      this._textOutlineColor = new Color(0.0f, 0.0f, 0.0f);
      this._textOutlineAmount = 0.0f;
      this._textGlowRadius = 0.2f;
      this._textBlur = 0.8f;
      this._textShadowOffset = 0.5f;
      this._textShadowAngle = 45f;
      this._textColorFactor = 1f;
      this._textAlphaFactor = 1f;
      this._textHueFactor = 0.0f;
      this._textSaturationFactor = 0.0f;
      this._textValueFactor = 0.0f;
      this._fontSize = 30;
      foreach (BrushLayer layer in layers)
        this.AddLayer(new StyleLayer(layer));
    }

    public void FillFrom(Style style)
    {
      this.Name = style.Name;
      this.FontColor = style.FontColor;
      this.TextGlowColor = style.TextGlowColor;
      this.TextOutlineColor = style.TextOutlineColor;
      this.TextOutlineAmount = style.TextOutlineAmount;
      this.TextGlowRadius = style.TextGlowRadius;
      this.TextBlur = style.TextBlur;
      this.TextShadowOffset = style.TextShadowOffset;
      this.TextShadowAngle = style.TextShadowAngle;
      this.TextColorFactor = style.TextColorFactor;
      this.TextAlphaFactor = style.TextAlphaFactor;
      this.TextHueFactor = style.TextHueFactor;
      this.TextSaturationFactor = style.TextSaturationFactor;
      this.TextValueFactor = style.TextValueFactor;
      this.Font = style.Font;
      this.FontStyle = style.FontStyle;
      this.FontSize = style.FontSize;
      this.AnimationToPlayOnBegin = style.AnimationToPlayOnBegin;
      this.AnimationMode = style.AnimationMode;
      foreach (StyleLayer source in style._layers.Values)
        this._layers[source.Name].FillFrom(source);
    }

    public void AddLayer(StyleLayer layer)
    {
      this._layers.Add(layer.Name, layer);
      this._layersWithIndex.Add(layer);
      ++this._localVersion;
    }

    public void RemoveLayer(string layerName)
    {
      this._layersWithIndex.Remove(this._layers[layerName]);
      this._layers.Remove(layerName);
      ++this._localVersion;
    }

    public StyleLayer GetLayer(int index) => this._layersWithIndex[index];

    public StyleLayer GetLayer(string name)
    {
      return this._layers.ContainsKey(name) ? this._layers[name] : (StyleLayer) null;
    }

    public TextMaterial CreateTextMaterial(TwoDimensionDrawContext drawContext)
    {
      TextMaterial textMaterial = drawContext.CreateTextMaterial();
      textMaterial.Color = this.FontColor;
      textMaterial.GlowColor = this.TextGlowColor;
      textMaterial.OutlineColor = this.TextOutlineColor;
      textMaterial.OutlineAmount = this.TextOutlineAmount;
      textMaterial.GlowRadius = this.TextGlowRadius;
      textMaterial.Blur = this.TextBlur;
      textMaterial.ShadowOffset = this.TextShadowOffset;
      textMaterial.ShadowAngle = this.TextShadowAngle;
      textMaterial.ColorFactor = this.TextColorFactor;
      textMaterial.AlphaFactor = this.TextAlphaFactor;
      textMaterial.HueFactor = this.TextHueFactor;
      textMaterial.SaturationFactor = this.TextSaturationFactor;
      textMaterial.ValueFactor = this.TextValueFactor;
      return textMaterial;
    }

    public float GetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
          return this.TextOutlineAmount;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
          return this.TextGlowRadius;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
          return this.TextBlur;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
          return this.TextShadowOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
          return this.TextShadowAngle;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
          return this.TextColorFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
          return this.TextAlphaFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
          return this.TextHueFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
          return this.TextSaturationFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
          return this.TextValueFactor;
        default:
          Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\Style.cs", nameof (GetValueAsFloat), 613);
          return 0.0f;
      }
    }

    public Color GetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
          return this.FontColor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
          return this.TextGlowColor;
        case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
          return this.TextOutlineColor;
        default:
          Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\Style.cs", nameof (GetValueAsColor), 633);
          return Color.Black;
      }
    }

    public Sprite GetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\Style.cs", nameof (GetValueAsSprite), 641);
      return (Sprite) null;
    }

    public void SetAsDefaultStyle()
    {
      this._isFontColorChanged = true;
      this._isTextGlowColorChanged = true;
      this._isTextOutlineColorChanged = true;
      this._isTextOutlineAmountChanged = true;
      this._isTextGlowRadiusChanged = true;
      this._isTextBlurChanged = true;
      this._isTextShadowOffsetChanged = true;
      this._isTextShadowAngleChanged = true;
      this._isTextColorFactorChanged = true;
      this._isTextAlphaFactorChanged = true;
      this._isTextHueFactorChanged = true;
      this._isTextSaturationFactorChanged = true;
      this._isTextValueFactorChanged = true;
      this._isFontChanged = true;
      this._isFontStyleChanged = true;
      this._isFontSizeChanged = true;
      this.DefaultStyle = (Style) null;
    }
  }
}
