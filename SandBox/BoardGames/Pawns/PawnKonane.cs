// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnKonane
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public class PawnKonane : PawnBase
  {
    public int X;
    public int Y;
    public int PrevX;
    public int PrevY;

    public override bool IsPlaced
    {
      get
      {
        return this.X >= 0 && this.X < BoardGameKonane.BoardWidth && this.Y >= 0 && this.Y < BoardGameKonane.BoardHeight;
      }
    }

    public PawnKonane(GameEntity entity, bool playerOne)
      : base(entity, playerOne)
    {
      this.X = -1;
      this.Y = -1;
      this.PrevX = -1;
      this.PrevY = -1;
    }

    public override void Reset()
    {
      base.Reset();
      this.X = -1;
      this.Y = -1;
      this.PrevX = -1;
      this.PrevY = -1;
    }
  }
}
