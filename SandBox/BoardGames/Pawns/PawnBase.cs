// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.Pawns.PawnBase
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.BoardGames.Pawns
{
  public abstract class PawnBase
  {
    public Action<PawnBase, Vec3, Vec3> OnArrivedIntermediateGoalPosition;
    public Action<PawnBase, Vec3, Vec3> OnArrivedFinalGoalPosition;
    protected Vec3 PosBeforeMovingBase;
    private int _currentGoalPos;
    private float _dtCounter;
    private float _movePauseDuration;
    private float _movePauseTimer;
    private float _moveSpeed;
    private bool _moveTiming;
    private bool _dragged;
    private bool _freePathToDestination;

    public static int PawnMoveSoundCodeID { get; set; }

    public static int PawnSelectSoundCodeID { get; set; }

    public static int PawnTapSoundCodeID { get; set; }

    public static int PawnRemoveSoundCodeID { get; set; }

    public abstract bool IsPlaced { get; }

    public virtual Vec3 PosBeforeMoving
    {
      get => this.PosBeforeMovingBase;
      protected set => this.PosBeforeMovingBase = value;
    }

    public GameEntity Entity { get; }

    protected List<Vec3> GoalPositions { get; }

    protected Vec3 CurrentPos { get; private set; }

    public bool Captured { get; set; }

    public bool MovingToDifferentTile { get; set; }

    public bool Moving { get; private set; }

    public bool PlayerOne { get; private set; }

    public bool HasAnyGoalPosition
    {
      get
      {
        bool hasAnyGoalPosition = false;
        if (this.GoalPositions != null)
          hasAnyGoalPosition = !this.GoalPositions.IsEmpty<Vec3>();
        return hasAnyGoalPosition;
      }
    }

    protected PawnBase(GameEntity entity, bool playerOne)
    {
      this.Entity = entity;
      this.PlayerOne = playerOne;
      this.CurrentPos = this.Entity.GetGlobalFrame().origin;
      this.PosBeforeMoving = this.CurrentPos;
      this.Moving = false;
      this._dragged = false;
      this.Captured = false;
      this._movePauseDuration = 0.3f;
      this.GoalPositions = new List<Vec3>();
    }

    public virtual void Reset()
    {
      this.ClearGoalPositions();
      this.Moving = false;
      this.MovingToDifferentTile = false;
      this._movePauseDuration = 0.3f;
      this._movePauseTimer = 0.0f;
      this._moveTiming = false;
      this._dragged = false;
      this.Captured = false;
    }

    public virtual void AddGoalPosition(Vec3 goal) => this.GoalPositions.Add(goal);

    public virtual void SetPawnAtPosition(Vec3 position)
    {
      MatrixFrame frame = this.Entity.GetGlobalFrame() with
      {
        origin = position
      };
      this.Entity.SetGlobalFrame(in frame);
    }

    public virtual void MovePawnToGoalPositions(bool instantMove, float speed, bool dragged = false)
    {
      this.PosBeforeMoving = this.Entity.GlobalPosition;
      this._moveSpeed = speed;
      this._currentGoalPos = 0;
      this._movePauseTimer = 0.0f;
      this._dtCounter = 0.0f;
      this._moveTiming = false;
      this._dragged = dragged;
      if (this.GoalPositions.Count == 1 && this.PosBeforeMoving.Equals((object) this.GoalPositions[0]))
        instantMove = true;
      if (instantMove)
      {
        MatrixFrame frame = this.Entity.GetGlobalFrame() with
        {
          origin = this.GoalPositions[this.GoalPositions.Count - 1]
        };
        this.Entity.SetGlobalFrame(in frame);
        this.ClearGoalPositions();
      }
      else
        this.Moving = true;
    }

    public virtual void EnableCollisionBody() => this.Entity.BodyFlag &= ~BodyFlags.Disabled;

    public virtual void DisableCollisionBody() => this.Entity.BodyFlag |= BodyFlags.Disabled;

    public void Tick(float dt)
    {
      if (this._moveTiming)
      {
        this._movePauseTimer += dt;
        if ((double) this._movePauseTimer < (double) this._movePauseDuration)
          return;
        this._moveTiming = false;
        this._movePauseTimer = 0.0f;
      }
      else
      {
        if (!this.Moving)
          return;
        Vec3 vec3_1 = new Vec3();
        Vec3 vec3_2 = this.GoalPositions[this._currentGoalPos] - this.PosBeforeMoving;
        float num = vec3_2.Normalize();
        float amount = this._dtCounter / (num / this._moveSpeed);
        if (this._dtCounter.Equals(0.0f))
        {
          float x = (this.Entity.GlobalBoxMax - this.Entity.GlobalBoxMin).x;
          Vec3 vec3_3 = new Vec3(z: (this.Entity.GlobalBoxMax - this.Entity.GlobalBoxMin).z / 2f);
          float collisionDistance;
          if (Mission.Current.Scene.RayCastForClosestEntityOrTerrain(this.Entity.GetGlobalFrame().origin + vec3_3 + vec3_2 * (x / 1.8f), this.GoalPositions[this._currentGoalPos] + vec3_3, out collisionDistance, 1f / 1000f, BodyFlags.None))
          {
            this._freePathToDestination = false;
            num = collisionDistance;
          }
          else
          {
            this._freePathToDestination = true;
            if (!this._dragged)
              this.PlayPawnMoveSound();
            else
              this.PlayPawnTapSound();
          }
        }
        if (!this._freePathToDestination)
        {
          float z = MathF.Sin(amount * 3.14159274f) * (num / 6f);
          vec3_1 += new Vec3(z: z);
        }
        double dtCounter = (double) this._dtCounter;
        this._dtCounter += dt;
        if ((double) amount >= 1.0)
        {
          this._dtCounter = 0.0f;
          this.CurrentPos = this.GoalPositions[this._currentGoalPos];
          vec3_1 = Vec3.Zero;
          if (!this._freePathToDestination && this.IsPlaced)
            this.PlayPawnTapSound();
          else if (!this.IsPlaced)
            this.PlayPawnRemovedTapSound();
          Vec3 goalPosition1 = this.GoalPositions[this._currentGoalPos];
          bool flag = true;
          while (this._currentGoalPos < this.GoalPositions.Count - 1)
          {
            ++this._currentGoalPos;
            Vec3 goalPosition2 = this.GoalPositions[this._currentGoalPos];
            if ((double) (goalPosition1 - goalPosition2).LengthSquared > 0.0)
            {
              flag = false;
              break;
            }
          }
          if (flag)
          {
            Action<PawnBase, Vec3, Vec3> finalGoalPosition = this.OnArrivedFinalGoalPosition;
            if (finalGoalPosition != null)
              finalGoalPosition(this, this.PosBeforeMoving, this.CurrentPos);
            this.Moving = false;
            this.ClearGoalPositions();
          }
          else
          {
            Action<PawnBase, Vec3, Vec3> intermediateGoalPosition = this.OnArrivedIntermediateGoalPosition;
            if (intermediateGoalPosition != null)
              intermediateGoalPosition(this, this.PosBeforeMoving, this.CurrentPos);
            this._movePauseDuration = 0.3f;
            this._moveTiming = true;
          }
          this.PosBeforeMoving = this.CurrentPos;
        }
        else
        {
          this.Moving = true;
          this.CurrentPos = MBMath.Lerp(this.PosBeforeMoving, this.GoalPositions[this._currentGoalPos], amount, 0.005f);
        }
        MatrixFrame frame = new MatrixFrame(this.Entity.GetGlobalFrame().rotation, this.CurrentPos + vec3_1);
        this.Entity.SetGlobalFrame(in frame);
      }
    }

    public void MovePawnToGoalPositionsDelayed(
      bool instantMove,
      float speed,
      bool dragged,
      float delay)
    {
      if (this.GoalPositions.Count <= 0)
        return;
      if (this.GoalPositions.Count == 1 && this.PosBeforeMoving.Equals((object) this.GoalPositions[0]))
      {
        this.ClearGoalPositions();
      }
      else
      {
        this.MovePawnToGoalPositions(instantMove, speed, dragged);
        this._movePauseDuration = delay;
        this._moveTiming = (double) delay > 0.0;
      }
    }

    public void SetPlayerOne(bool playerOne) => this.PlayerOne = playerOne;

    public void ClearGoalPositions()
    {
      this.MovingToDifferentTile = false;
      this.GoalPositions.Clear();
    }

    public void UpdatePawnPosition() => this.PosBeforeMoving = this.Entity.GlobalPosition;

    public void PlayPawnSelectSound()
    {
      Mission.Current.MakeSound(PawnBase.PawnSelectSoundCodeID, this.CurrentPos, true, false, -1, -1);
    }

    private void PlayPawnTapSound()
    {
      Mission.Current.MakeSound(PawnBase.PawnTapSoundCodeID, this.CurrentPos, true, false, -1, -1);
    }

    private void PlayPawnRemovedTapSound()
    {
      Mission.Current.MakeSound(PawnBase.PawnRemoveSoundCodeID, this.CurrentPos, true, false, -1, -1);
    }

    private void PlayPawnMoveSound()
    {
      Mission.Current.MakeSound(PawnBase.PawnMoveSoundCodeID, this.CurrentPos, true, false, -1, -1);
    }
  }
}
