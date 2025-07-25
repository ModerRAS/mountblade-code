// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Tiles.TileBase
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Objects;
using SandBox.BoardGames.Pawns;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.Tiles
{
  public abstract class TileBase
  {
    public PawnBase PawnOnTile;
    private bool _showTile;
    private float _tileFadeTimer;
    private const float TileFadeDuration = 0.2f;

    public GameEntity Entity { get; }

    public BoardGameDecal ValidMoveDecal { get; }

    protected TileBase(GameEntity entity, BoardGameDecal decal)
    {
      this.Entity = entity;
      this.ValidMoveDecal = decal;
    }

    public virtual void Reset() => this.PawnOnTile = (PawnBase) null;

    public void Tick(float dt)
    {
      this._tileFadeTimer += (float) ((this._showTile ? 1.0 : -1.0) * (double) dt * 5.0);
      this._tileFadeTimer = MBMath.ClampFloat(this._tileFadeTimer, 0.0f, 1f);
      this.ValidMoveDecal.SetAlpha(this._tileFadeTimer);
    }

    public void SetVisibility(bool isVisible) => this._showTile = isVisible;
  }
}
