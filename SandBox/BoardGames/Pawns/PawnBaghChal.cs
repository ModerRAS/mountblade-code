// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnBaghChal
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public class PawnBaghChal : PawnBase
  {
    public int X;
    public int Y;
    public int PrevX;
    public int PrevY;

    public override bool IsPlaced
    {
      get
      {
        return this.X >= 0 && this.X < BoardGameBaghChal.BoardWidth && this.Y >= 0 && this.Y < BoardGameBaghChal.BoardHeight;
      }
    }

    public MatrixFrame InitialFrame { get; }

    public bool IsTiger { get; }

    public bool IsGoat => !this.IsTiger;

    public PawnBaghChal(GameEntity entity, bool playerOne, bool isTiger)
      : base(entity, playerOne)
    {
      this.X = -1;
      this.Y = -1;
      this.PrevX = -1;
      this.PrevY = -1;
      this.IsTiger = isTiger;
      this.InitialFrame = this.Entity.GetFrame();
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
