// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.MaskedTextureWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Numerics;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class MaskedTextureWidget : TextureWidget
  {
    private Texture _textureCache;
    private string _imageId;
    private string _additionalArgs;
    private int _imageTypeCode;
    private bool _isBig;
    private SpriteFromTexture _overlaySpriteCache;
    private int _overlaySpriteSizeCache;

    [Editor(false)]
    public string ImageId
    {
      get => this._imageId;
      set
      {
        if (!(this._imageId != value))
          return;
        this._imageId = value;
        this.OnPropertyChanged<string>(value, nameof (ImageId));
        this.SetTextureProviderProperty(nameof (ImageId), (object) value);
      }
    }

    [Editor(false)]
    public string AdditionalArgs
    {
      get => this._additionalArgs;
      set
      {
        if (!(this._additionalArgs != value))
          return;
        this._additionalArgs = value;
        this.OnPropertyChanged<string>(value, nameof (AdditionalArgs));
        this.SetTextureProviderProperty(nameof (AdditionalArgs), (object) value);
      }
    }

    [Editor(false)]
    public int ImageTypeCode
    {
      get => this._imageTypeCode;
      set
      {
        if (this._imageTypeCode == value)
          return;
        this._imageTypeCode = value;
        this.OnPropertyChanged(value, nameof (ImageTypeCode));
        this.SetTextureProviderProperty(nameof (ImageTypeCode), (object) value);
      }
    }

    [Editor(false)]
    public bool IsBig
    {
      get => this._isBig;
      set
      {
        if (this._isBig == value)
          return;
        this._isBig = value;
        this.OnPropertyChanged(value, nameof (IsBig));
        this.SetTextureProviderProperty(nameof (IsBig), (object) value);
      }
    }

    [Editor(false)]
    public float OverlayTextureScale { get; set; }

    public MaskedTextureWidget(UIContext context)
      : base(context)
    {
      this.TextureProviderName = "ImageIdentifierTextureProvider";
      this.OverlayTextureScale = 1f;
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      this._isRenderRequestedPreviousFrame = true;
      if (this.TextureProvider == null)
        return;
      Texture texture = this.TextureProvider.GetTexture(twoDimensionContext, "ui_backgrounds_1");
      bool flag = false;
      if (texture != this._textureCache)
      {
        this.Brush.DefaultLayer.OverlayMethod = BrushOverlayMethod.CoverWithTexture;
        this._textureCache = texture;
        flag = true;
        this.HandleUpdateNeededOnRender();
      }
      if (this._textureCache == null)
        return;
      int num1 = this.ImageTypeCode == 3 ? 1 : (this.ImageTypeCode == 6 ? 1 : 0);
      int num2 = num1 != 0 ? (int) (((double) this.Size.X > (double) this.Size.Y ? (double) this.Size.Y : (double) this.Size.X) * 2.5 * (double) this.OverlayTextureScale) : (int) (((double) this.Size.X > (double) this.Size.Y ? (double) this.Size.X : (double) this.Size.Y) * (double) this.OverlayTextureScale);
      Vector2 overlayOffset = new Vector2();
      if (num1 != 0)
        overlayOffset = new Vector2((float) (((double) num2 - (double) this.Size.X) * 0.5) - this.Brush.DefaultLayer.OverlayXOffset, (float) (((double) num2 - (double) this.Size.Y) * 0.5) - this.Brush.DefaultLayer.OverlayYOffset) * this._inverseScaleToUse;
      if (this._overlaySpriteCache == null | flag || this._overlaySpriteSizeCache != num2)
      {
        this._overlaySpriteSizeCache = num2;
        this._overlaySpriteCache = new SpriteFromTexture(this._textureCache, this._overlaySpriteSizeCache, this._overlaySpriteSizeCache);
      }
      this.Brush.DefaultLayer.OverlaySprite = (Sprite) this._overlaySpriteCache;
      this.BrushRenderer.Render(drawContext, this.GlobalPosition, this.Size, this._scaleToUse, this.Context.ContextAlpha, overlayOffset);
    }

    protected override void OnDisconnectedFromRoot()
    {
      base.OnDisconnectedFromRoot();
      this._textureCache = (Texture) null;
    }
  }
}
