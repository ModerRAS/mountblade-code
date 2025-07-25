// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Tiles.Tile1D
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Objects;
using TaleWorlds.Engine;

#nullable disable
namespace SandBox.BoardGames.Tiles
{
  public class Tile1D : TileBase
  {
    public int X { get; }

    public Tile1D(GameEntity entity, BoardGameDecal decal, int x)
      : base(entity, decal)
    {
      this.X = x;
    }
  }
}
