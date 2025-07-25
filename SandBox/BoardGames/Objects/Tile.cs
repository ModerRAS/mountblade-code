// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Objects.Tile
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Engine;

#nullable disable
namespace SandBox.BoardGames.Objects
{
  public class Tile : ScriptComponentBehavior
  {
    public MetaMesh TileMesh;

    protected override void OnInit()
    {
      base.OnInit();
      this.GameEntity.RemoveMultiMesh(this.GameEntity.GetMetaMesh(0));
    }

    public void SetVisibility(bool visible) => this.GameEntity.SetVisibilityExcludeParents(visible);

    protected override bool MovesEntity() => false;
  }
}
