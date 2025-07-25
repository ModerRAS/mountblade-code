// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Move
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;

#nullable disable
namespace SandBox.BoardGames
{
  public struct Move
  {
    public static readonly Move Invalid = new Move()
    {
      Unit = (PawnBase) null,
      GoalTile = (TileBase) null
    };
    public PawnBase Unit;
    public TileBase GoalTile;

    public bool IsValid => this.Unit != null && this.GoalTile != null;

    public Move(PawnBase unit, TileBase goalTile)
    {
      this.Unit = unit;
      this.GoalTile = goalTile;
    }
  }
}
