// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnMuTorere
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public class PawnMuTorere : PawnBase
  {
    public int X { get; set; }

    public override bool IsPlaced => true;

    public PawnMuTorere(GameEntity entity, bool playerOne)
      : base(entity, playerOne)
    {
      this.X = -1;
    }

    public override void Reset()
    {
      base.Reset();
      this.X = -1;
    }
  }
}
