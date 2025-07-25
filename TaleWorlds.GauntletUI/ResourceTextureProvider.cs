// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.ResourceTextureProvider
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class ResourceTextureProvider : TextureProvider
  {
    public override Texture GetTexture(TwoDimensionContext twoDimensionContext, string name)
    {
      return twoDimensionContext.LoadTexture(name);
    }
  }
}
