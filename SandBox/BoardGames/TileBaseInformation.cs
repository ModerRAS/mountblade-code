// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.TileBaseInformation
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Pawns;

#nullable disable
namespace SandBox.BoardGames
{
  public struct TileBaseInformation
  {
    public PawnBase PawnOnTile;

    public TileBaseInformation(ref PawnBase pawnOnTile) => this.PawnOnTile = pawnOnTile;
  }
}
