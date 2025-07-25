// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.SpriteFromTexture
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  internal class SpriteFromTexture : Sprite
  {
    private Texture _texture;

    public override Texture Texture => this._texture;

    public SpriteFromTexture(Texture texture, int width, int height)
      : base("Sprite", width, height)
    {
      this._texture = texture;
    }

    public override float GetScaleToUse(float width, float height, float scale)
    {
      throw new NotImplementedException();
    }

    protected override DrawObject2D GetArrays(SpriteDrawData spriteDrawData)
    {
      throw new NotImplementedException();
    }
  }
}
