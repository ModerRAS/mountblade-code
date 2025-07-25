// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.OnlineImageTextureWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class OnlineImageTextureWidget : TextureWidget
  {
    private static bool _textureProviderTypeCollectionRequested;
    private string _onlineImageSourceUrl;

    public OnlineImageTextureWidget.ImageSizePolicies ImageSizePolicy { get; set; }

    public OnlineImageTextureWidget(UIContext context)
      : base(context)
    {
      this.TextureProviderName = "OnlineImageTextureProvider";
      if (OnlineImageTextureWidget._textureProviderTypeCollectionRequested)
        return;
      TextureWidget._typeCollector.Collect();
      OnlineImageTextureWidget._textureProviderTypeCollectionRequested = true;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      this.UpdateSizePolicy();
    }

    private void UpdateSizePolicy()
    {
      if (this.ImageSizePolicy == OnlineImageTextureWidget.ImageSizePolicies.OriginalSize)
      {
        if (this.Texture == null)
          return;
        this.WidthSizePolicy = SizePolicy.Fixed;
        this.HeightSizePolicy = SizePolicy.Fixed;
        this.SuggestedWidth = (float) this.Texture.Width;
        this.SuggestedHeight = (float) this.Texture.Height;
      }
      else if (this.ImageSizePolicy == OnlineImageTextureWidget.ImageSizePolicies.Stretch)
      {
        this.WidthSizePolicy = SizePolicy.StretchToParent;
        this.HeightSizePolicy = SizePolicy.StretchToParent;
      }
      else
      {
        if (this.ImageSizePolicy != OnlineImageTextureWidget.ImageSizePolicies.ScaleToBiggerDimension || this.Texture == null)
          return;
        this.WidthSizePolicy = SizePolicy.Fixed;
        this.HeightSizePolicy = SizePolicy.Fixed;
        float num;
        if (this.Texture.Width > this.Texture.Height)
        {
          num = this.ParentWidget.Size.Y / (float) this.Texture.Height;
          if ((double) num * (double) this.Texture.Width < (double) this.ParentWidget.Size.X)
            num = this.ParentWidget.Size.X / (float) this.Texture.Width;
        }
        else
        {
          num = this.ParentWidget.Size.X / (float) this.Texture.Width;
          if ((double) num * (double) this.Texture.Height < (double) this.ParentWidget.Size.Y)
            num = this.ParentWidget.Size.Y / (float) this.Texture.Height;
        }
        this.ScaledSuggestedWidth = num * (float) this.Texture.Width;
        this.ScaledSuggestedHeight = num * (float) this.Texture.Height;
      }
    }

    [Editor(false)]
    public string OnlineImageSourceUrl
    {
      get => this._onlineImageSourceUrl;
      set
      {
        if (!(this._onlineImageSourceUrl != value))
          return;
        this._onlineImageSourceUrl = value;
        this.OnPropertyChanged<string>(value, nameof (OnlineImageSourceUrl));
        this.SetTextureProviderProperty("OnlineSourceUrl", (object) value);
        this.RefreshState();
      }
    }

    public enum ImageSizePolicies
    {
      Stretch,
      OriginalSize,
      ScaleToBiggerDimension,
    }
  }
}
