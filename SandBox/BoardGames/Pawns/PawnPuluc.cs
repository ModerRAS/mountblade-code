// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnPuluc
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public class PawnPuluc : PawnBase
  {
    public PawnPuluc.MovementState State;
    public PawnPuluc CapturedBy;
    public Vec3 SpawnPos;
    public bool IsInSpawn = true;
    public bool IsTopPawn = true;
    private static float _height;
    private int _x;

    public float Height
    {
      get
      {
        if ((double) PawnPuluc._height == 0.0)
          PawnPuluc._height = (this.Entity.GetBoundingBoxMax() - this.Entity.GetBoundingBoxMin()).z;
        return PawnPuluc._height;
      }
    }

    public override Vec3 PosBeforeMoving
    {
      get => this.PosBeforeMovingBase - new Vec3(z: this.Height * (float) this.PawnsBelow.Count);
    }

    public override bool IsPlaced => (this.InPlay || this.IsInSpawn) && this.IsTopPawn;

    public int X
    {
      get => this._x;
      set
      {
        this._x = value;
        if (value >= 0 && value < 11)
          this.IsInSpawn = false;
        else
          this.IsInSpawn = true;
      }
    }

    public List<PawnPuluc> PawnsBelow { get; }

    public bool InPlay => this.X >= 0 && this.X < 11;

    public PawnPuluc(GameEntity entity, bool playerOne)
      : base(entity, playerOne)
    {
      this.PawnsBelow = new List<PawnPuluc>();
      this.SpawnPos = this.CurrentPos;
      this.X = -1;
    }

    public override void Reset()
    {
      base.Reset();
      this.X = -1;
      this.State = PawnPuluc.MovementState.MovingForward;
      this.IsTopPawn = true;
      this.IsInSpawn = true;
      this.CapturedBy = (PawnPuluc) null;
      this.PawnsBelow.Clear();
    }

    public override void AddGoalPosition(Vec3 goal)
    {
      if (this.IsTopPawn)
      {
        goal.z += this.Height * (float) this.PawnsBelow.Count;
        int count = this.PawnsBelow.Count;
        for (int index = 0; index < count; ++index)
          this.PawnsBelow[index].AddGoalPosition(goal - new Vec3(z: (float) (index + 1) * this.Height));
      }
      this.GoalPositions.Add(goal);
    }

    public override void MovePawnToGoalPositions(bool instantMove, float speed, bool dragged = false)
    {
      if (this.GoalPositions.Count == 0)
        return;
      base.MovePawnToGoalPositions(instantMove, speed, dragged);
      if (!this.IsTopPawn)
        return;
      foreach (PawnBase pawnBase in this.PawnsBelow)
        pawnBase.MovePawnToGoalPositions(instantMove, speed, dragged);
    }

    public override void SetPawnAtPosition(Vec3 position)
    {
      base.SetPawnAtPosition(position);
      if (!this.IsTopPawn)
        return;
      int num = 1;
      foreach (PawnBase pawnBase in this.PawnsBelow)
      {
        pawnBase.SetPawnAtPosition(new Vec3(position.x, position.y, position.z - this.Height * (float) num));
        ++num;
      }
    }

    public override void EnableCollisionBody()
    {
      base.EnableCollisionBody();
      foreach (PawnBase pawnBase in this.PawnsBelow)
        pawnBase.Entity.BodyFlag &= ~BodyFlags.Disabled;
    }

    public override void DisableCollisionBody()
    {
      base.DisableCollisionBody();
      foreach (PawnBase pawnBase in this.PawnsBelow)
        pawnBase.Entity.BodyFlag |= BodyFlags.Disabled;
    }

    public void MovePawnBackToSpawn(bool instantMove, float speed, bool fake = false)
    {
      this.X = -1;
      this.State = PawnPuluc.MovementState.MovingForward;
      this.IsTopPawn = true;
      this.IsInSpawn = true;
      this.Captured = false;
      this.CapturedBy = (PawnPuluc) null;
      this.PawnsBelow.Clear();
      if (fake)
        return;
      this.AddGoalPosition(this.SpawnPos);
      this.MovePawnToGoalPositions(instantMove, speed, false);
    }

    public enum MovementState
    {
      MovingForward,
      MovingBackward,
      ChangingDirection,
    }
  }
}
