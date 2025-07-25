// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.MapConversationTextureProvider
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using TaleWorlds.DotNet;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  public class MapConversationTextureProvider : TextureProvider
  {
    private MapConversationTableau _mapConversationTableau;
    private TaleWorlds.Engine.Texture _texture;
    private TaleWorlds.TwoDimension.Texture _providedTexture;

    public object Data
    {
      set => this._mapConversationTableau.SetData(value);
    }

    public bool IsEnabled
    {
      set => this._mapConversationTableau.SetEnabled(value);
    }

    public MapConversationTextureProvider()
    {
      this._mapConversationTableau = new MapConversationTableau();
    }

    public override void Clear(bool clearNextFrame)
    {
      this._mapConversationTableau.OnFinalize(clearNextFrame);
      base.Clear(clearNextFrame);
    }

    private void CheckTexture()
    {
      if (!((NativeObject) this._texture != (NativeObject) this._mapConversationTableau.Texture))
        return;
      this._texture = this._mapConversationTableau.Texture;
      if ((NativeObject) this._texture != (NativeObject) null)
        this._providedTexture = new TaleWorlds.TwoDimension.Texture((TaleWorlds.TwoDimension.ITexture) new EngineTexture(this._texture));
      else
        this._providedTexture = (TaleWorlds.TwoDimension.Texture) null;
    }

    public override TaleWorlds.TwoDimension.Texture GetTexture(
      TwoDimensionContext twoDimensionContext,
      string name)
    {
      this.CheckTexture();
      return this._providedTexture;
    }

    public override void SetTargetSize(int width, int height)
    {
      base.SetTargetSize(width, height);
      this._mapConversationTableau.SetTargetSize(width, height);
    }

    public override void Tick(float dt)
    {
      base.Tick(dt);
      this.CheckTexture();
      this._mapConversationTableau.OnTick(dt);
    }
  }
}
