// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.TextureWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class TextureWidget : ImageWidget
  {
    protected static TypeCollector<TextureProvider> _typeCollector = new TypeCollector<TextureProvider>();
    protected bool _setForClearNextFrame;
    private string _textureProviderName;
    private Texture _texture;
    private float _lastWidth;
    private float _lastHeight;
    protected bool _isTargetSizeDirty;
    private Dictionary<string, object> _textureProviderProperties;
    protected bool _isRenderRequestedPreviousFrame;
    protected DrawObject2D _cachedQuad;
    protected Vector2 _cachedQuadSize;

    internal static void RecollectProviderTypes() => TextureWidget._typeCollector.Collect();

    public Widget LoadingIconWidget { get; set; }

    public TextureProvider TextureProvider { get; private set; }

    [Editor(false)]
    public string TextureProviderName
    {
      get => this._textureProviderName;
      set
      {
        if (!(this._textureProviderName != value))
          return;
        this._textureProviderName = value;
        this.OnPropertyChanged<string>(value, nameof (TextureProviderName));
      }
    }

    public Texture Texture
    {
      get => this._texture;
      protected set
      {
        if (value == this._texture)
          return;
        this._texture = value;
        this.OnTextureUpdated();
      }
    }

    static TextureWidget() => TextureWidget._typeCollector.Collect();

    public TextureWidget(UIContext context)
      : base(context)
    {
      this.TextureProviderName = "ResourceTextureProvider";
      this.TextureProvider = (TextureProvider) null;
      this._textureProviderProperties = new Dictionary<string, object>();
      this._cachedQuad = (DrawObject2D) null;
      this._cachedQuadSize = Vector2.Zero;
    }

    protected override void OnDisconnectedFromRoot()
    {
      base.OnDisconnectedFromRoot();
      this.TextureProvider?.Clear(true);
      this._setForClearNextFrame = true;
    }

    private void SetTextureProviderProperties()
    {
      if (this.TextureProvider == null)
        return;
      foreach (KeyValuePair<string, object> providerProperty in this._textureProviderProperties)
        this.TextureProvider.SetProperty(providerProperty.Key, providerProperty.Value);
    }

    protected void SetTextureProviderProperty(string name, object value)
    {
      this._textureProviderProperties[name] = value;
      if (this.TextureProvider != null)
        this.TextureProvider.SetProperty(name, value);
      this.Texture = (Texture) null;
    }

    protected object GetTextureProviderProperty(string propertyName)
    {
      return this.TextureProvider?.GetProperty(propertyName);
    }

    protected void UpdateTextureWidget()
    {
      if (!this._isRenderRequestedPreviousFrame)
        return;
      if (this.TextureProvider != null)
      {
        if ((double) this._lastWidth == (double) this.Size.X && (double) this._lastHeight == (double) this.Size.Y && !this._isTargetSizeDirty)
          return;
        this.TextureProvider.SetTargetSize(TaleWorlds.Library.MathF.Round(this.Size.X), TaleWorlds.Library.MathF.Round(this.Size.Y));
        this._lastWidth = this.Size.X;
        this._lastHeight = this.Size.Y;
        this._isTargetSizeDirty = false;
      }
      else
      {
        this.TextureProvider = TextureWidget._typeCollector.Instantiate(this.TextureProviderName);
        this.SetTextureProviderProperties();
      }
    }

    protected virtual void OnTextureUpdated()
    {
      bool toShow = this.Texture == null;
      if (this.LoadingIconWidget == null)
        return;
      this.LoadingIconWidget.IsVisible = toShow;
      this.LoadingIconWidget.ApplyActionOnAllChildren((Action<Widget>) (w => w.IsVisible = toShow));
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      this.UpdateTextureWidget();
      if (this._isRenderRequestedPreviousFrame)
        this.TextureProvider?.Tick(dt);
      this._isRenderRequestedPreviousFrame = false;
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      this._isRenderRequestedPreviousFrame = true;
      if (this.TextureProvider == null)
        return;
      this.Texture = this.TextureProvider.GetTexture(twoDimensionContext, string.Empty);
      SimpleMaterial simpleMaterial = drawContext.CreateSimpleMaterial();
      List<StyleLayer> layers = this.ReadOnlyBrush.GetStyleOrDefault(this.CurrentState).Layers;
      simpleMaterial.OverlayEnabled = false;
      simpleMaterial.CircularMaskingEnabled = false;
      simpleMaterial.Texture = this.Texture;
      if (layers != null && layers.Count > 0)
      {
        StyleLayer styleLayer = layers[0];
        simpleMaterial.AlphaFactor = styleLayer.AlphaFactor * this.ReadOnlyBrush.GlobalAlphaFactor * this.Context.ContextAlpha;
        simpleMaterial.ColorFactor = styleLayer.ColorFactor * this.ReadOnlyBrush.GlobalColorFactor;
        simpleMaterial.HueFactor = styleLayer.HueFactor;
        simpleMaterial.SaturationFactor = styleLayer.SaturationFactor;
        simpleMaterial.ValueFactor = styleLayer.ValueFactor;
        simpleMaterial.Color = styleLayer.Color * this.ReadOnlyBrush.GlobalColor;
      }
      else
      {
        simpleMaterial.AlphaFactor = this.ReadOnlyBrush.GlobalAlphaFactor * this.Context.ContextAlpha;
        simpleMaterial.ColorFactor = this.ReadOnlyBrush.GlobalColorFactor;
        simpleMaterial.HueFactor = 0.0f;
        simpleMaterial.SaturationFactor = 0.0f;
        simpleMaterial.ValueFactor = 0.0f;
        simpleMaterial.Color = Color.White * this.ReadOnlyBrush.GlobalColor;
      }
      Vector2 globalPosition = this.GlobalPosition;
      float x = globalPosition.X;
      float y = globalPosition.Y;
      DrawObject2D drawObject2D = (DrawObject2D) null;
      if (this._cachedQuad != null && this._cachedQuadSize == this.Size)
        drawObject2D = this._cachedQuad;
      if (drawObject2D == null)
      {
        drawObject2D = DrawObject2D.CreateQuad(this.Size);
        this._cachedQuad = drawObject2D;
        this._cachedQuadSize = this.Size;
      }
      if (drawContext.CircularMaskEnabled)
      {
        simpleMaterial.CircularMaskingEnabled = true;
        simpleMaterial.CircularMaskingCenter = drawContext.CircularMaskCenter;
        simpleMaterial.CircularMaskingRadius = drawContext.CircularMaskRadius;
        simpleMaterial.CircularMaskingSmoothingRadius = drawContext.CircularMaskSmoothingRadius;
      }
      drawContext.Draw(x, y, (Material) simpleMaterial, drawObject2D, this.Size.X, this.Size.Y);
    }
  }
}
