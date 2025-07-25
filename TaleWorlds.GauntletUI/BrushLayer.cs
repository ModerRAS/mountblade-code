// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushLayer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushLayer : IBrushLayerData
  {
    private string _name;
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

    public uint Version { get; private set; }

    [Editor(false)]
    public string Name
    {
      get => this._name;
      set
      {
        if (!(value != this._name))
          return;
        this._name = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public Sprite Sprite
    {
      get => this._sprite;
      set
      {
        if (value == this._sprite)
          return;
        this._sprite = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public Color Color
    {
      get => this._color;
      set
      {
        if (!(value != this._color))
          return;
        this._color = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ColorFactor
    {
      get => this._colorFactor;
      set
      {
        if ((double) value == (double) this._colorFactor)
          return;
        this._colorFactor = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float AlphaFactor
    {
      get => this._alphaFactor;
      set
      {
        if ((double) value == (double) this._alphaFactor)
          return;
        this._alphaFactor = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float HueFactor
    {
      get => this._hueFactor;
      set
      {
        if ((double) value == (double) this._hueFactor)
          return;
        this._hueFactor = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float SaturationFactor
    {
      get => this._saturationFactor;
      set
      {
        if ((double) value == (double) this._saturationFactor)
          return;
        this._saturationFactor = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ValueFactor
    {
      get => this._valueFactor;
      set
      {
        if ((double) value == (double) this._valueFactor)
          return;
        this._valueFactor = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool IsHidden
    {
      get => this._isHidden;
      set
      {
        if (value == this._isHidden)
          return;
        this._isHidden = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool UseOverlayAlphaAsMask
    {
      get => this._useOverlayAlphaAsMask;
      set
      {
        if (value == this._useOverlayAlphaAsMask)
          return;
        this._useOverlayAlphaAsMask = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float XOffset
    {
      get => this._xOffset;
      set
      {
        if ((double) value == (double) this._xOffset)
          return;
        this._xOffset = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float YOffset
    {
      get => this._yOffset;
      set
      {
        if ((double) value == (double) this._yOffset)
          return;
        this._yOffset = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ExtendLeft
    {
      get => this._extendLeft;
      set
      {
        if ((double) value == (double) this._extendLeft)
          return;
        this._extendLeft = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ExtendRight
    {
      get => this._extendRight;
      set
      {
        if ((double) value == (double) this._extendRight)
          return;
        this._extendRight = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ExtendTop
    {
      get => this._extendTop;
      set
      {
        if ((double) value == (double) this._extendTop)
          return;
        this._extendTop = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float ExtendBottom
    {
      get => this._extendBottom;
      set
      {
        if ((double) value == (double) this._extendBottom)
          return;
        this._extendBottom = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float OverridenWidth
    {
      get => this._overridenWidth;
      set
      {
        if ((double) value == (double) this._overridenWidth)
          return;
        this._overridenWidth = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float OverridenHeight
    {
      get => this._overridenHeight;
      set
      {
        if ((double) value == (double) this._overridenHeight)
          return;
        this._overridenHeight = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public BrushLayerSizePolicy WidthPolicy
    {
      get => this._widthPolicy;
      set
      {
        if (value == this._widthPolicy)
          return;
        this._widthPolicy = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public BrushLayerSizePolicy HeightPolicy
    {
      get => this._heightPolicy;
      set
      {
        if (value == this._heightPolicy)
          return;
        this._heightPolicy = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool HorizontalFlip
    {
      get => this._horizontalFlip;
      set
      {
        if (value == this._horizontalFlip)
          return;
        this._horizontalFlip = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool VerticalFlip
    {
      get => this._verticalFlip;
      set
      {
        if (value == this._verticalFlip)
          return;
        this._verticalFlip = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public BrushOverlayMethod OverlayMethod
    {
      get => this._overlayMethod;
      set
      {
        if (value == this._overlayMethod)
          return;
        this._overlayMethod = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public Sprite OverlaySprite
    {
      get => this._overlaySprite;
      set
      {
        this._overlaySprite = value;
        ++this.Version;
        if (this._overlaySprite != null)
        {
          if (this.OverlayMethod != BrushOverlayMethod.None)
            return;
          this.OverlayMethod = BrushOverlayMethod.CoverWithTexture;
        }
        else
          this.OverlayMethod = BrushOverlayMethod.None;
      }
    }

    [Editor(false)]
    public float OverlayXOffset
    {
      get => this._overlayXOffset;
      set
      {
        if ((double) value == (double) this._overlayXOffset)
          return;
        this._overlayXOffset = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public float OverlayYOffset
    {
      get => this._overlayYOffset;
      set
      {
        if ((double) value == (double) this._overlayYOffset)
          return;
        this._overlayYOffset = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool UseRandomBaseOverlayXOffset
    {
      get => this._useRandomBaseOverlayXOffset;
      set
      {
        if (value == this._useRandomBaseOverlayXOffset)
          return;
        this._useRandomBaseOverlayXOffset = value;
        ++this.Version;
      }
    }

    [Editor(false)]
    public bool UseRandomBaseOverlayYOffset
    {
      get => this._useRandomBaseOverlayYOffset;
      set
      {
        if (value == this._useRandomBaseOverlayYOffset)
          return;
        this._useRandomBaseOverlayYOffset = value;
        ++this.Version;
      }
    }

    public BrushLayer()
    {
      this.Color = new Color(1f, 1f, 1f);
      this.ColorFactor = 1f;
      this.AlphaFactor = 1f;
      this.HueFactor = 0.0f;
      this.SaturationFactor = 0.0f;
      this.ValueFactor = 0.0f;
      this.XOffset = 0.0f;
      this.YOffset = 0.0f;
      this.IsHidden = false;
      this.WidthPolicy = BrushLayerSizePolicy.StretchToTarget;
      this.HeightPolicy = BrushLayerSizePolicy.StretchToTarget;
      this.HorizontalFlip = false;
      this.VerticalFlip = false;
      this.OverlayMethod = BrushOverlayMethod.None;
      this.ExtendLeft = 0.0f;
      this.ExtendRight = 0.0f;
      this.ExtendTop = 0.0f;
      this.ExtendBottom = 0.0f;
      this.OverlayXOffset = 0.0f;
      this.OverlayYOffset = 0.0f;
      this.UseRandomBaseOverlayXOffset = false;
      this.UseRandomBaseOverlayYOffset = false;
      this.UseOverlayAlphaAsMask = false;
    }

    public void FillFrom(BrushLayer brushLayer)
    {
      this.Sprite = brushLayer.Sprite;
      this.Color = brushLayer.Color;
      this.ColorFactor = brushLayer.ColorFactor;
      this.AlphaFactor = brushLayer.AlphaFactor;
      this.HueFactor = brushLayer.HueFactor;
      this.SaturationFactor = brushLayer.SaturationFactor;
      this.ValueFactor = brushLayer.ValueFactor;
      this.XOffset = brushLayer.XOffset;
      this.YOffset = brushLayer.YOffset;
      this.Name = brushLayer.Name;
      this.IsHidden = brushLayer.IsHidden;
      this.WidthPolicy = brushLayer.WidthPolicy;
      this.HeightPolicy = brushLayer.HeightPolicy;
      this.OverridenWidth = brushLayer.OverridenWidth;
      this.OverridenHeight = brushLayer.OverridenHeight;
      this.HorizontalFlip = brushLayer.HorizontalFlip;
      this.VerticalFlip = brushLayer.VerticalFlip;
      this.OverlayMethod = brushLayer.OverlayMethod;
      this.OverlaySprite = brushLayer.OverlaySprite;
      this.ExtendLeft = brushLayer.ExtendLeft;
      this.ExtendRight = brushLayer.ExtendRight;
      this.ExtendTop = brushLayer.ExtendTop;
      this.ExtendBottom = brushLayer.ExtendBottom;
      this.OverlayXOffset = brushLayer.OverlayXOffset;
      this.OverlayYOffset = brushLayer.OverlayYOffset;
      this.UseRandomBaseOverlayXOffset = brushLayer.UseRandomBaseOverlayXOffset;
      this.UseRandomBaseOverlayYOffset = brushLayer.UseRandomBaseOverlayYOffset;
      this.UseOverlayAlphaAsMask = brushLayer.UseOverlayAlphaAsMask;
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
          Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushLayer.cs", nameof (GetValueAsFloat), 669);
          return 0.0f;
      }
    }

    public Color GetValueAsColor(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.Color)
        return this.Color;
      Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushLayer.cs", nameof (GetValueAsColor), 683);
      return Color.Black;
    }

    public Sprite GetValueAsSprite(
      BrushAnimationProperty.BrushAnimationPropertyType propertyType)
    {
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.Sprite)
        return this.Sprite;
      if (propertyType == BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite)
        return this.OverlaySprite;
      Debug.FailedAssert("Invalid value type or property name for data source.", "C:\\Develop\\MB3\\TaleWorlds.Shared\\Source\\GauntletUI\\TaleWorlds.GauntletUI\\Brush\\BrushLayer.cs", nameof (GetValueAsSprite), 700);
      return (Sprite) null;
    }

    public override string ToString()
    {
      return !string.IsNullOrEmpty(this.Name) ? this.Name : base.ToString();
    }
  }
}
