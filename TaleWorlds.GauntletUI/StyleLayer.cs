// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.StyleLayer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class StyleLayer : IBrushLayerData, IDataSource
  {
    private uint _localVersion;
    private bool _isSpriteChanged;
    private bool _isColorChanged;
    private bool _isColorFactorChanged;
    private bool _isAlphaFactorChanged;
    private bool _isHueFactorChanged;
    private bool _isSaturationFactorChanged;
    private bool _isValueFactorChanged;
    private bool _isIsHiddenChanged;
    private bool _isXOffsetChanged;
    private bool _isYOffsetChanged;
    private bool _isExtendLeftChanged;
    private bool _isExtendRightChanged;
    private bool _isExtendTopChanged;
    private bool _isExtendBottomChanged;
    private bool _isOverridenWidthChanged;
    private bool _isOverridenHeightChanged;
    private bool _isWidthPolicyChanged;
    private bool _isHeightPolicyChanged;
    private bool _isHorizontalFlipChanged;
    private bool _isVerticalFlipChanged;
    private bool _isOverlayMethodChanged;
    private bool _isOverlaySpriteChanged;
    private bool _isUseOverlayAlphaAsMaskChanged;
    private bool _isOverlayXOffsetChanged;
    private bool _isOverlayYOffsetChanged;
    private bool _isUseRandomBaseOverlayXOffset;
    private bool _isUseRandomBaseOverlayYOffset;
    private Sprite _sprite;
    private Color _color;
    private float _colorFactor;
    private float _alphaFactor;
    private float _hueFactor;
    private float _saturationFactor;
    private float _valueFactor;
    private bool _isHidden;
    private bool _useOverlayAlphaAsMask;
    private float _xOffset;
    private float _yOffset;
    private float _extendLeft;
    private float _extendRight;
    private float _extendTop;
    private float _extendBottom;
    private float _overridenWidth;
    private float _overridenHeight;
    private BrushLayerSizePolicy _widthPolicy;
    private BrushLayerSizePolicy _heightPolicy;
    private bool _horizontalFlip;
    private bool _verticalFlip;
    private BrushOverlayMethod _overlayMethod;
    private Sprite _overlaySprite;
    private float _overlayXOffset;
    private float _overlayYOffset;
    private bool _useRandomBaseOverlayXOffset;
    private bool _useRandomBaseOverlayYOffset;

    public BrushLayer SourceLayer { get; private set; }

    public uint Version => this._localVersion + this.SourceLayer.Version;

    [Editor(false)]
    public string Name
    {
      get => this.SourceLayer.Name;
      set
      {
      }
    }

    [Editor(false)]
    public Sprite Sprite
    {
      get => this._isSpriteChanged ? this._sprite : this.SourceLayer.Sprite;
      set
      {
        if (this.Sprite == value)
          return;
        this._isSpriteChanged = this.SourceLayer.Sprite != value;
        this._sprite = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public Color Color
    {
      get => this._isColorChanged ? this._color : this.SourceLayer.Color;
      set
      {
        if (!(this.Color != value))
          return;
        this._isColorChanged = this.SourceLayer.Color != value;
        this._color = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ColorFactor
    {
      get => this._isColorFactorChanged ? this._colorFactor : this.SourceLayer.ColorFactor;
      set
      {
        if ((double) this.ColorFactor == (double) value)
          return;
        this._isColorFactorChanged = (double) MathF.Abs(this.SourceLayer.ColorFactor - value) > 9.9999997473787516E-06;
        this._colorFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float AlphaFactor
    {
      get => this._isAlphaFactorChanged ? this._alphaFactor : this.SourceLayer.AlphaFactor;
      set
      {
        if ((double) this.AlphaFactor == (double) value)
          return;
        this._isAlphaFactorChanged = (double) MathF.Abs(this.SourceLayer.AlphaFactor - value) > 9.9999997473787516E-06;
        this._alphaFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float HueFactor
    {
      get => this._isHueFactorChanged ? this._hueFactor : this.SourceLayer.HueFactor;
      set
      {
        if ((double) this.HueFactor == (double) value)
          return;
        this._isHueFactorChanged = (double) MathF.Abs(this.SourceLayer.HueFactor - value) > 9.9999997473787516E-06;
        this._hueFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float SaturationFactor
    {
      get
      {
        return this._isSaturationFactorChanged ? this._saturationFactor : this.SourceLayer.SaturationFactor;
      }
      set
      {
        if ((double) this.SaturationFactor == (double) value)
          return;
        this._isSaturationFactorChanged = (double) MathF.Abs(this.SourceLayer.SaturationFactor - value) > 9.9999997473787516E-06;
        this._saturationFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ValueFactor
    {
      get => this._isValueFactorChanged ? this._valueFactor : this.SourceLayer.ValueFactor;
      set
      {
        if ((double) this.ValueFactor == (double) value)
          return;
        this._isValueFactorChanged = (double) MathF.Abs(this.SourceLayer.ValueFactor - value) > 9.9999997473787516E-06;
        this._valueFactor = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool IsHidden
    {
      get => this._isIsHiddenChanged ? this._isHidden : this.SourceLayer.IsHidden;
      set
      {
        if (this.IsHidden == value)
          return;
        this._isIsHiddenChanged = this.SourceLayer.IsHidden != value;
        this._isHidden = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool UseOverlayAlphaAsMask
    {
      get
      {
        return this._isUseOverlayAlphaAsMaskChanged ? this._useOverlayAlphaAsMask : this.SourceLayer.UseOverlayAlphaAsMask;
      }
      set
      {
        if (this.UseOverlayAlphaAsMask == value)
          return;
        this._isUseOverlayAlphaAsMaskChanged = this.SourceLayer.UseOverlayAlphaAsMask != value;
        this._useOverlayAlphaAsMask = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float XOffset
    {
      get => this._isXOffsetChanged ? this._xOffset : this.SourceLayer.XOffset;
      set
      {
        if ((double) this.XOffset == (double) value)
          return;
        this._isXOffsetChanged = (double) MathF.Abs(this.SourceLayer.XOffset - value) > 9.9999997473787516E-06;
        this._xOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float YOffset
    {
      get => this._isYOffsetChanged ? this._yOffset : this.SourceLayer.YOffset;
      set
      {
        if ((double) this.YOffset == (double) value)
          return;
        this._isYOffsetChanged = (double) MathF.Abs(this.SourceLayer.YOffset - value) > 9.9999997473787516E-06;
        this._yOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ExtendLeft
    {
      get => this._isExtendLeftChanged ? this._extendLeft : this.SourceLayer.ExtendLeft;
      set
      {
        if ((double) this.ExtendLeft == (double) value)
          return;
        this._isExtendLeftChanged = (double) MathF.Abs(this.SourceLayer.ExtendLeft - value) > 9.9999997473787516E-06;
        this._extendLeft = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ExtendRight
    {
      get => this._isExtendRightChanged ? this._extendRight : this.SourceLayer.ExtendRight;
      set
      {
        if ((double) this.ExtendRight == (double) value)
          return;
        this._isExtendRightChanged = (double) MathF.Abs(this.SourceLayer.ExtendRight - value) > 9.9999997473787516E-06;
        this._extendRight = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ExtendTop
    {
      get => this._isExtendTopChanged ? this._extendTop : this.SourceLayer.ExtendTop;
      set
      {
        if ((double) this.ExtendTop == (double) value)
          return;
        this._isExtendTopChanged = (double) MathF.Abs(this.SourceLayer.ExtendTop - value) > 9.9999997473787516E-06;
        this._extendTop = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float ExtendBottom
    {
      get => this._isExtendBottomChanged ? this._extendBottom : this.SourceLayer.ExtendBottom;
      set
      {
        if ((double) this.ExtendBottom == (double) value)
          return;
        this._isExtendBottomChanged = (double) MathF.Abs(this.SourceLayer.ExtendBottom - value) > 9.9999997473787516E-06;
        this._extendBottom = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float OverridenWidth
    {
      get => this._isOverridenWidthChanged ? this._overridenWidth : this.SourceLayer.OverridenWidth;
      set
      {
        if ((double) this.OverridenWidth == (double) value)
          return;
        this._isOverridenWidthChanged = (double) MathF.Abs(this.SourceLayer.OverridenWidth - value) > 9.9999997473787516E-06;
        this._overridenWidth = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float OverridenHeight
    {
      get
      {
        return this._isOverridenHeightChanged ? this._overridenHeight : this.SourceLayer.OverridenHeight;
      }
      set
      {
        if ((double) this.OverridenHeight == (double) value)
          return;
        this._isOverridenHeightChanged = (double) MathF.Abs(this.SourceLayer.OverridenHeight - value) > 9.9999997473787516E-06;
        this._overridenHeight = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public BrushLayerSizePolicy WidthPolicy
    {
      get => this._isWidthPolicyChanged ? this._widthPolicy : this.SourceLayer.WidthPolicy;
      set
      {
        if (this.WidthPolicy == value)
          return;
        this._isWidthPolicyChanged = this.SourceLayer.WidthPolicy != value;
        this._widthPolicy = value;
        ++this._localVersion;
      }
    }

    public BrushLayerSizePolicy HeightPolicy
    {
      get => this._isHeightPolicyChanged ? this._heightPolicy : this.SourceLayer.HeightPolicy;
      set
      {
        if (this.HeightPolicy == value)
          return;
        this._isHeightPolicyChanged = this.SourceLayer.HeightPolicy != value;
        this._heightPolicy = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool HorizontalFlip
    {
      get => this._isHorizontalFlipChanged ? this._horizontalFlip : this.SourceLayer.HorizontalFlip;
      set
      {
        if (this.HorizontalFlip == value)
          return;
        this._isHorizontalFlipChanged = this.SourceLayer.HorizontalFlip != value;
        this._horizontalFlip = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool VerticalFlip
    {
      get => this._isVerticalFlipChanged ? this._verticalFlip : this.SourceLayer.VerticalFlip;
      set
      {
        if (this.VerticalFlip == value)
          return;
        this._isVerticalFlipChanged = this.SourceLayer.VerticalFlip != value;
        this._verticalFlip = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public BrushOverlayMethod OverlayMethod
    {
      get => this._isOverlayMethodChanged ? this._overlayMethod : this.SourceLayer.OverlayMethod;
      set
      {
        if (this.OverlayMethod == value)
          return;
        this._isOverlayMethodChanged = this.SourceLayer.OverlayMethod != value;
        this._overlayMethod = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public Sprite OverlaySprite
    {
      get => this._isOverlaySpriteChanged ? this._overlaySprite : this.SourceLayer.OverlaySprite;
      set
      {
        if (this.OverlaySprite == value)
          return;
        this._isOverlaySpriteChanged = this.SourceLayer.OverlaySprite != value;
        this._overlaySprite = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float OverlayXOffset
    {
      get => this._isOverlayXOffsetChanged ? this._overlayXOffset : this.SourceLayer.OverlayXOffset;
      set
      {
        if ((double) this.OverlayXOffset == (double) value)
          return;
        this._isOverlayXOffsetChanged = (double) MathF.Abs(this.SourceLayer.OverlayXOffset - value) > 9.9999997473787516E-06;
        this._overlayXOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public float OverlayYOffset
    {
      get => this._isOverlayYOffsetChanged ? this._overlayYOffset : this.SourceLayer.OverlayYOffset;
      set
      {
        if ((double) this.OverlayYOffset == (double) value)
          return;
        this._isOverlayYOffsetChanged = (double) MathF.Abs(this.SourceLayer.OverlayYOffset - value) > 9.9999997473787516E-06;
        this._overlayYOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool UseRandomBaseOverlayXOffset
    {
      get
      {
        return this._isUseRandomBaseOverlayXOffset ? this._useRandomBaseOverlayXOffset : this.SourceLayer.UseRandomBaseOverlayXOffset;
      }
      set
      {
        if (this.UseRandomBaseOverlayXOffset == value)
          return;
        this._isUseRandomBaseOverlayXOffset = this._useRandomBaseOverlayXOffset != value;
        this._useRandomBaseOverlayXOffset = value;
        ++this._localVersion;
      }
    }

    [Editor(false)]
    public bool UseRandomBaseOverlayYOffset
    {
      get
      {
        return this._isUseRandomBaseOverlayYOffset ? this._useRandomBaseOverlayYOffset : this.SourceLayer.UseRandomBaseOverlayYOffset;
      }
      set
      {
        if (this.UseRandomBaseOverlayYOffset == value)
          return;
        this._isUseRandomBaseOverlayYOffset = this._useRandomBaseOverlayYOffset != value;
        this._useRandomBaseOverlayYOffset = value;
        ++this._localVersion;
      }
    }

    public StyleLayer(BrushLayer brushLayer) => this.SourceLayer = brushLayer;

    public static StyleLayer CreateFrom(StyleLayer source)
    {
      StyleLayer from = new StyleLayer(source.SourceLayer);
      from.FillFrom(source);
      return from;
    }

    public void FillFrom(StyleLayer source)
    {
      this.Sprite = source.Sprite;
      this.Color = source.Color;
      this.ColorFactor = source.ColorFactor;
      this.AlphaFactor = source.AlphaFactor;
      this.HueFactor = source.HueFactor;
      this.SaturationFactor = source.SaturationFactor;
      this.ValueFactor = source.ValueFactor;
      this.IsHidden = source.IsHidden;
      this.XOffset = source.XOffset;
      this.YOffset = source.YOffset;
      this.ExtendLeft = source.ExtendLeft;
      this.ExtendRight = source.ExtendRight;
      this.ExtendTop = source.ExtendTop;
      this.ExtendBottom = source.ExtendBottom;
      this.OverridenWidth = source.OverridenWidth;
      this.OverridenHeight = source.OverridenHeight;
      this.WidthPolicy = source.WidthPolicy;
      this.HeightPolicy = source.HeightPolicy;
      this.HorizontalFlip = source.HorizontalFlip;
      this.VerticalFlip = source.VerticalFlip;
      this.OverlayMethod = source.OverlayMethod;
      this.OverlaySprite = source.OverlaySprite;
      this.OverlayXOffset = source.OverlayXOffset;
      this.OverlayYOffset = source.OverlayYOffset;
      this.UseRandomBaseOverlayXOffset = source.UseRandomBaseOverlayXOffset;
      this.UseRandomBaseOverlayYOffset = source.UseRandomBaseOverlayYOffset;
    }

    public float GetValueAsFloat(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.ColorFactor:
          return this.ColorFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.AlphaFactor:
          return this.AlphaFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.HueFactor:
          return this.HueFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.SaturationFactor:
          return this.SaturationFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.ValueFactor:
          return this.ValueFactor;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlayXOffset:
          return this.OverlayXOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlayYOffset:
          return this.OverlayYOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.XOffset:
          return this.XOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.YOffset:
          return this.YOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverridenWidth:
          return this.OverridenWidth;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverridenHeight:
          return this.OverridenHeight;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendLeft:
          return this.ExtendLeft;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendRight:
          return this.ExtendRight;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendTop:
          return this.ExtendTop;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendBottom:
          return this.ExtendBottom;
        default:
          Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\StyleLayer.cs", nameof (GetValueAsFloat), 830);
          return 0.0f;
      }
    }

    public Color GetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.Color)
        return this.Color;
      Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\StyleLayer.cs", nameof (GetValueAsColor), 844);
      return Color.Black;
    }

    public Sprite GetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.Sprite)
        return this.Sprite;
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite)
        return this.OverlaySprite;
      Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\StyleLayer.cs", nameof (GetValueAsSprite), 861);
      return (Sprite) null;
    }

    public bool GetIsValueChanged(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      switch (propertyType)
      {
        case BrushAnimationProperty.BrushAnimationPropertyType.Name:
          return false;
        case BrushAnimationProperty.BrushAnimationPropertyType.ColorFactor:
          return this._isColorFactorChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.Color:
          return this._isSpriteChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.AlphaFactor:
          return this._isAlphaFactorChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.HueFactor:
          return this._isHueFactorChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.SaturationFactor:
          return this._isSaturationFactorChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.ValueFactor:
          return this._isValueFactorChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlayXOffset:
          return this._isOverlayXOffsetChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlayYOffset:
          return this._isOverlayYOffsetChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.Sprite:
          return this._isSpriteChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.IsHidden:
          return this._isIsHiddenChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.XOffset:
          return this._isXOffsetChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.YOffset:
          return this._isYOffsetChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverridenWidth:
          return this._isOverridenWidthChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverridenHeight:
          return this._isOverridenHeightChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.WidthPolicy:
          return this._isWidthPolicyChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.HeightPolicy:
          return this._isHeightPolicyChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.HorizontalFlip:
          return this._isHorizontalFlipChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.VerticalFlip:
          return this._isVerticalFlipChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlayMethod:
          return this._isOverlayMethodChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite:
          return this._isOverlaySpriteChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendLeft:
          return this._isExtendLeftChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendRight:
          return this._isExtendRightChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendTop:
          return this._isExtendTopChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.ExtendBottom:
          return this._isExtendBottomChanged;
        case BrushAnimationProperty.BrushAnimationPropertyType.UseRandomBaseOverlayXOffset:
          return this._isUseRandomBaseOverlayXOffset;
        case BrushAnimationProperty.BrushAnimationPropertyType.UseRandomBaseOverlayYOffset:
          return this._isUseRandomBaseOverlayYOffset;
        default:
          return false;
      }
    }
  }
}
