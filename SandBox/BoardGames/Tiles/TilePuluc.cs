// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Tiles.TilePuluc
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Objects;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.Tiles
{
  public class TilePuluc : Tile1D
  {
    public Vec3 PosLeft { get; private set; }

    public Vec3 PosLeftMid { get; private set; }

    public Vec3 PosRight { get; private set; }

    public Vec3 PosRightMid { get; private set; }

    public TilePuluc(GameEntity entity, BoardGameDecal decal, int x)
      : base(entity, decal, x)
    {
      this.UpdateTilePosition();
    }

    public void UpdateTilePosition()
    {
      MatrixFrame globalFrame = this.Entity.GetGlobalFrame();
      MetaMesh tileMesh = this.Entity.GetFirstScriptOfType<Tile>().TileMesh;
      Vec3 vec3 = tileMesh.GetBoundingBox().max - tileMesh.GetBoundingBox().min;
      Mat3 parent1 = globalFrame.rotation.TransformToParent(tileMesh.Frame.rotation);
      Vec3 parent2 = parent1.TransformToParent(new Vec3(y: vec3.y / 6f));
      Vec3 parent3 = parent1.TransformToParent(new Vec3(y: vec3.y / 3f));
      Vec3 globalPosition = this.Entity.GlobalPosition;
      this.PosLeft = globalPosition + parent3;
      this.PosLeftMid = globalPosition + parent2;
      this.PosRight = globalPosition - parent3;
      this.PosRightMid = globalPosition - parent2;
    }
  }
}
