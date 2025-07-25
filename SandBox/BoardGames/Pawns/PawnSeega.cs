// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnSeega
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public class PawnSeega : PawnBase
  {
    public int X;
    public int Y;
    private int _prevX;
    private int _prevY;

    public override bool IsPlaced
    {
      get
      {
        return this.X >= 0 && this.X < BoardGameSeega.BoardWidth && this.Y >= 0 && this.Y < BoardGameSeega.BoardHeight;
      }
    }

    public bool MovedThisTurn { get; private set; }

    public int PrevX
    {
      get => this._prevX;
      set
      {
        this._prevX = value;
        if (value >= 0)
          this.MovedThisTurn = true;
        else
          this.MovedThisTurn = false;
      }
    }

    public int PrevY
    {
      get => this._prevY;
      set
      {
        this._prevY = value;
        if (value >= 0)
          this.MovedThisTurn = true;
        else
          this.MovedThisTurn = false;
      }
    }

    public PawnSeega(GameEntity entity, bool playerOne)
      : base(entity, playerOne)
    {
      this.X = -1;
      this.Y = -1;
      this.PrevX = -1;
      this.PrevY = -1;
      this.MovedThisTurn = false;
    }

    public override void Reset()
    {
      base.Reset();
      this.X = -1;
      this.Y = -1;
      this.PrevX = -1;
      this.PrevY = -1;
      this.MovedThisTurn = false;
    }

    public void UpdateMoveBackAvailable()
    {
      if (this.MovedThisTurn)
      {
        this.MovedThisTurn = false;
      }
      else
      {
        this.PrevX = -1;
        this.PrevY = -1;
      }
    }

    public void AISetMovedThisTurn(bool moved) => this.MovedThisTurn = moved;
  }
}
