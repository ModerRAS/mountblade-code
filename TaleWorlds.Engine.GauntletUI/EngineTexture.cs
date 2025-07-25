// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.EngineTexture
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public class EngineTexture : TaleWorlds.TwoDimension.ITexture
  {
    public TaleWorlds.Engine.Texture Texture { get; private set; }

    int TaleWorlds.TwoDimension.ITexture.Width => this.Texture.Width;

    int TaleWorlds.TwoDimension.ITexture.Height => this.Texture.Height;

    public EngineTexture(TaleWorlds.Engine.Texture engineTexture) => this.Texture = engineTexture;

    bool TaleWorlds.TwoDimension.ITexture.IsLoaded() => this.Texture.IsLoaded();

    void TaleWorlds.TwoDimension.ITexture.Release() => this.Texture.Release();
  }
}
