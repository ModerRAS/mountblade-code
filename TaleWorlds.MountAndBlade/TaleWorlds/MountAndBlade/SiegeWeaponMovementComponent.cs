// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeWeaponMovementComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeWeaponMovementComponent : UsableMissionObjectComponent
  {
    public const string GhostObjectTag = "ghost_object";
    private static readonly ActionIndexCache act_strike_bent_over = ActionIndexCache.Create(nameof (act_strike_bent_over));
    private static readonly ActionIndexCache act_usage_siege_machine_push = ActionIndexCache.Create(nameof (act_usage_siege_machine_push));
    private const string WheelTag = "wheel";
    public const string MoveStandingPointTag = "move";
    public float AxleLength = 2.45f;
    public int NavMeshIdToDisableOnDestination = -1;
    private float _ghostObjectPos;
    private List<GameEntity> _wheels;
    private List<StandingPoint> _standingPoints;
    private MatrixFrame[] _standingPointLocalIKFrames;
    private SoundEvent _movementSound;
    private float _wheelCircumference;
    private bool _isMoveSoundPlaying;
    private float _wheelDiameter;
    private Path _path;
    private PathTracker _pathTracker;
    private PathTracker _ghostEntityPathTracker;
    private float _advancementError;
    private float _lastSynchronizedDistance;

    public bool HasApproachedTarget
    {
      get
      {
        return !this._pathTracker.PathExists() || (double) this._pathTracker.PathTraveledPercentage > 0.699999988079071;
      }
    }

    public Vec3 Velocity { get; private set; }

    protected internal override void OnAdded(Scene scene)
    {
      base.OnAdded(scene);
      this._path = scene.GetPathWithName(this.PathEntityName);
      Vec3 scaleVector = this.MainObject.GameEntity.GetFrame().rotation.GetScaleVector();
      this._wheels = this.MainObject.GameEntity.CollectChildrenEntitiesWithTag("wheel");
      this._standingPoints = this.MainObject.GameEntity.CollectObjectsWithTag<StandingPoint>("move");
      this._pathTracker = new PathTracker(this._path, scaleVector);
      this._pathTracker.Reset();
      this.SetTargetFrame();
      MatrixFrame globalFrame = this.MainObject.GameEntity.GetGlobalFrame();
      this._standingPointLocalIKFrames = new MatrixFrame[this._standingPoints.Count];
      for (int index = 0; index < this._standingPoints.Count; ++index)
      {
        this._standingPointLocalIKFrames[index] = this._standingPoints[index].GameEntity.GetGlobalFrame().TransformToLocal(globalFrame);
        this._standingPoints[index].AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
      }
      this.Velocity = Vec3.Zero;
    }

    public void HighlightPath()
    {
      MatrixFrame[] points = new MatrixFrame[this._path.NumberOfPoints];
      this._path.GetPoints(points);
      ref MatrixFrame local = ref points[0];
      for (int index = 1; index < this._path.NumberOfPoints; ++index)
      {
        MatrixFrame matrixFrame = points[index];
      }
    }

    public void SetupGhostEntity()
    {
      Path pathWithName = this.MainObject.Scene.GetPathWithName(this.PathEntityName);
      Vec3 scaleVector = this.MainObject.GameEntity.GetFrame().rotation.GetScaleVector();
      this._pathTracker = new PathTracker(pathWithName, scaleVector);
      this._ghostEntityPathTracker = new PathTracker(pathWithName, scaleVector);
      this._ghostObjectPos = (NativeObject) pathWithName != (NativeObject) null ? pathWithName.GetTotalLength() : 0.0f;
      this._wheels = this.MainObject.GameEntity.CollectChildrenEntitiesWithTag("wheel");
    }

    public bool HasArrivedAtTarget
    {
      get => !this._pathTracker.PathExists() || this._pathTracker.HasReachedEnd;
    }

    private void SetPath()
    {
      Path pathWithName = this.MainObject.Scene.GetPathWithName(this.PathEntityName);
      Vec3 scaleVector = this.MainObject.GameEntity.GetFrame().rotation.GetScaleVector();
      this._pathTracker = new PathTracker(pathWithName, scaleVector);
      this._ghostEntityPathTracker = new PathTracker(pathWithName, scaleVector);
      this._ghostObjectPos = (NativeObject) pathWithName != (NativeObject) null ? pathWithName.GetTotalLength() : 0.0f;
      this.UpdateGhostObject(0.0f);
    }

    public float CurrentSpeed { get; private set; }

    public int MovementSoundCodeID { get; set; }

    public float MinSpeed { get; set; }

    public float MaxSpeed { get; set; }

    public string PathEntityName { get; set; }

    public float GhostEntitySpeedMultiplier { get; set; }

    public float WheelDiameter
    {
      set
      {
        this._wheelDiameter = value;
        this._wheelCircumference = this._wheelDiameter * 3.14159274f;
      }
    }

    public SynchedMissionObject MainObject { get; set; }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      this.UpdateGhostObject(dt);
    }

    public void SetGhostVisibility(bool isVisible)
    {
      this.MainObject.GameEntity.CollectChildrenEntitiesWithTag("ghost_object").FirstOrDefault<GameEntity>().SetVisibilityExcludeParents(isVisible);
    }

    public void OnEditorInit()
    {
      this.SetPath();
      this._wheels = this.MainObject.GameEntity.CollectChildrenEntitiesWithTag("wheel");
    }

    private void UpdateGhostObject(float dt)
    {
      if (this._pathTracker.HasChanged)
      {
        this.SetPath();
        this._pathTracker.Advance(this._pathTracker.GetPathLength());
        this._ghostEntityPathTracker.Advance(this._ghostEntityPathTracker.GetPathLength());
      }
      List<GameEntity> gameEntityList = this.MainObject.GameEntity.CollectChildrenEntitiesWithTag("ghost_object");
      if (this.MainObject.GameEntity.IsSelectedOnEditor())
      {
        if (this._pathTracker.IsValid)
        {
          float num = 10f;
          if (Input.DebugInput.IsShiftDown())
            num = 1f;
          if (Input.DebugInput.IsKeyDown(InputKey.MouseScrollUp))
            this._ghostObjectPos += dt * num;
          else if (Input.DebugInput.IsKeyDown(InputKey.MouseScrollDown))
            this._ghostObjectPos -= dt * num;
          this._ghostObjectPos = MBMath.ClampFloat(this._ghostObjectPos, 0.0f, this._pathTracker.GetPathLength());
        }
        else
          this._ghostObjectPos = 0.0f;
      }
      if (gameEntityList.Count <= 0)
        return;
      GameEntity gameEntity = gameEntityList[0];
      if (this.MainObject is IPathHolder mainObject && mainObject.EditorGhostEntityMove)
      {
        if (!this._ghostEntityPathTracker.IsValid)
          return;
        this._ghostEntityPathTracker.Advance(0.05f * this.GhostEntitySpeedMultiplier);
        MatrixFrame identity = MatrixFrame.Identity;
        MatrixFrame frame = this.LinearInterpolatedIK(ref this._ghostEntityPathTracker);
        gameEntity.SetGlobalFrame(in frame);
        if (!this._ghostEntityPathTracker.HasReachedEnd)
          return;
        this._ghostEntityPathTracker.Reset();
      }
      else
      {
        if (!this._pathTracker.IsValid)
          return;
        this._pathTracker.Advance(this._ghostObjectPos);
        MatrixFrame frame = this.LinearInterpolatedIK(ref this._pathTracker);
        gameEntity.SetGlobalFrame(this.FindGroundFrameForWheels(ref frame));
        this._pathTracker.Reset();
      }
    }

    private void RotateWheels(float angleInRadian)
    {
      foreach (GameEntity wheel in this._wheels)
      {
        MatrixFrame frame = wheel.GetFrame();
        frame.rotation.RotateAboutSide(angleInRadian);
        wheel.SetFrame(ref frame);
      }
    }

    private MatrixFrame LinearInterpolatedIK(ref PathTracker pathTracker)
    {
      MatrixFrame frame;
      Vec3 color;
      pathTracker.CurrentFrameAndColor(out frame, out color);
      MatrixFrame groundFrameForWheels = this.FindGroundFrameForWheels(ref frame);
      return MatrixFrame.Lerp(frame, groundFrameForWheels, color.x);
    }

    public void SetDistanceTraveledAsClient(float distance)
    {
      this._advancementError = distance - this._pathTracker.TotalDistanceTraveled;
    }

    public override bool IsOnTickRequired() => true;

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this._ghostEntityPathTracker != null)
        this.UpdateGhostObject(dt);
      if (!this._pathTracker.PathExists() || this._pathTracker.HasReachedEnd)
      {
        this.CurrentSpeed = 0.0f;
        if (!GameNetwork.IsClientOrReplay)
        {
          foreach (UsableMissionObject standingPoint in this._standingPoints)
            standingPoint.SetIsDeactivatedSynched(true);
        }
      }
      this.TickSound();
    }

    public void TickParallelManually(float dt)
    {
      if (!this._pathTracker.PathExists() || this._pathTracker.HasReachedEnd)
        return;
      int num = 0;
      foreach (StandingPoint standingPoint in this._standingPoints)
      {
        if (standingPoint.HasUser && !standingPoint.UserAgent.IsInBeingStruckAction)
          ++num;
      }
      if (num > 0)
      {
        int count = this._standingPoints.Count;
        this.CurrentSpeed = MBMath.Lerp(this.MinSpeed, this.MaxSpeed, (float) (num - 1) / (float) (count - 1));
        MatrixFrame boundEntityGlobalFrame = this.MainObject.GameEntity.GetGlobalFrame();
        for (int index = 0; index < this._standingPoints.Count; ++index)
        {
          StandingPoint standingPoint = this._standingPoints[index];
          if (standingPoint.HasUser)
          {
            Agent userAgent = standingPoint.UserAgent;
            ActionIndexValueCache currentActionValue1 = userAgent.GetCurrentActionValue(0);
            ActionIndexValueCache currentActionValue2 = userAgent.GetCurrentActionValue(1);
            if (currentActionValue1 != SiegeWeaponMovementComponent.act_usage_siege_machine_push)
            {
              if (userAgent.SetActionChannel(0, SiegeWeaponMovementComponent.act_usage_siege_machine_push, actionSpeed: this.CurrentSpeed, blendInPeriod: MBAnimation.GetAnimationBlendInPeriod(MBActionSet.GetAnimationIndexOfAction(userAgent.ActionSet, SiegeWeaponMovementComponent.act_usage_siege_machine_push)) * this.CurrentSpeed))
                currentActionValue1 = ActionIndexValueCache.Create(SiegeWeaponMovementComponent.act_usage_siege_machine_push);
              else if (MBMath.IsBetween((int) userAgent.GetCurrentActionType(0), 47, 51) && currentActionValue1 != SiegeWeaponMovementComponent.act_strike_bent_over && userAgent.SetActionChannel(0, SiegeWeaponMovementComponent.act_strike_bent_over))
                currentActionValue1 = ActionIndexValueCache.Create(SiegeWeaponMovementComponent.act_strike_bent_over);
            }
            if (currentActionValue2 != SiegeWeaponMovementComponent.act_usage_siege_machine_push)
            {
              if (userAgent.SetActionChannel(1, SiegeWeaponMovementComponent.act_usage_siege_machine_push, actionSpeed: this.CurrentSpeed, blendInPeriod: MBAnimation.GetAnimationBlendInPeriod(MBActionSet.GetAnimationIndexOfAction(userAgent.ActionSet, SiegeWeaponMovementComponent.act_usage_siege_machine_push)) * this.CurrentSpeed))
                currentActionValue2 = ActionIndexValueCache.Create(SiegeWeaponMovementComponent.act_usage_siege_machine_push);
              else if (MBMath.IsBetween((int) userAgent.GetCurrentActionType(1), 47, 51) && currentActionValue2 != SiegeWeaponMovementComponent.act_strike_bent_over && userAgent.SetActionChannel(1, SiegeWeaponMovementComponent.act_strike_bent_over))
                currentActionValue2 = ActionIndexValueCache.Create(SiegeWeaponMovementComponent.act_strike_bent_over);
            }
            if (currentActionValue1 == SiegeWeaponMovementComponent.act_usage_siege_machine_push)
              userAgent.SetCurrentActionSpeed(0, this.CurrentSpeed);
            if (currentActionValue2 == SiegeWeaponMovementComponent.act_usage_siege_machine_push)
              userAgent.SetCurrentActionSpeed(1, this.CurrentSpeed);
            if ((currentActionValue1 == SiegeWeaponMovementComponent.act_usage_siege_machine_push || currentActionValue1 == SiegeWeaponMovementComponent.act_strike_bent_over) && (currentActionValue2 == SiegeWeaponMovementComponent.act_usage_siege_machine_push || currentActionValue2 == SiegeWeaponMovementComponent.act_strike_bent_over))
            {
              standingPoint.UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._standingPointLocalIKFrames[index], in boundEntityGlobalFrame);
            }
            else
            {
              standingPoint.UserAgent.ClearHandInverseKinematics();
              if (!GameNetwork.IsClientOrReplay && userAgent.Controller != Agent.ControllerType.AI)
                userAgent.StopUsingGameObjectMT(false);
            }
          }
        }
      }
      else
        this.CurrentSpeed = this._advancementError;
      if (this.CurrentSpeed.ApproximatelyEqualsTo(0.0f))
        return;
      float deltaDistance = this.CurrentSpeed * dt;
      if (!this._advancementError.ApproximatelyEqualsTo(0.0f))
      {
        float f = 3f * this.CurrentSpeed * dt * (float) MathF.Sign(this._advancementError);
        if ((double) MathF.Abs(f) >= (double) MathF.Abs(this._advancementError))
        {
          f = this._advancementError;
          this._advancementError = 0.0f;
        }
        else
          this._advancementError -= f;
        deltaDistance += f;
      }
      this._pathTracker.Advance(deltaDistance);
      this.SetTargetFrame();
      this.RotateWheels((float) ((double) deltaDistance / (double) this._wheelCircumference * 2.0 * 3.1415927410125732));
      if (!GameNetwork.IsServerOrRecorder || (double) this._pathTracker.TotalDistanceTraveled - (double) this._lastSynchronizedDistance <= 1.0)
        return;
      this._lastSynchronizedDistance = this._pathTracker.TotalDistanceTraveled;
      GameNetwork.BeginBroadcastModuleEvent();
      GameNetwork.WriteMessage((GameNetworkMessage) new SetSiegeMachineMovementDistance(this.MainObject.Id, this._lastSynchronizedDistance));
      GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
    }

    public MatrixFrame GetInitialFrame()
    {
      PathTracker pathTracker = new PathTracker(this._path, Vec3.One);
      pathTracker.Reset();
      return this.LinearInterpolatedIK(ref pathTracker);
    }

    private void SetTargetFrame()
    {
      if (!this._pathTracker.PathExists())
        return;
      MatrixFrame frame = this.LinearInterpolatedIK(ref this._pathTracker);
      GameEntity gameEntity = this.MainObject.GameEntity;
      this.Velocity = gameEntity.GlobalPosition;
      gameEntity.SetGlobalFrameMT(in frame);
      this.Velocity = (gameEntity.GlobalPosition - this.Velocity).NormalizedCopy() * this.CurrentSpeed;
    }

    public MatrixFrame GetTargetFrame()
    {
      float distanceTraveled = this._pathTracker.TotalDistanceTraveled;
      this._pathTracker.Advance(1000000f);
      MatrixFrame currentFrame = this._pathTracker.CurrentFrame;
      this._pathTracker.Reset();
      this._pathTracker.Advance(distanceTraveled);
      return currentFrame;
    }

    public void SetDestinationNavMeshIdState(bool enabled)
    {
      if (this.NavMeshIdToDisableOnDestination == -1)
        return;
      Mission.Current.Scene.SetAbilityOfFacesWithId(this.NavMeshIdToDisableOnDestination, enabled);
    }

    public void MoveToTargetAsClient()
    {
      if (!this._pathTracker.IsValid)
        return;
      float distanceTraveled = this._pathTracker.TotalDistanceTraveled;
      this._pathTracker.Advance(1000000f);
      this.SetTargetFrame();
      this.RotateWheels((float) (((double) this._pathTracker.TotalDistanceTraveled - (double) distanceTraveled) / (double) this._wheelCircumference * 2.0 * 3.1415927410125732));
    }

    private void TickSound()
    {
      if ((double) this.CurrentSpeed > 0.0)
        this.PlayMovementSound();
      else
        this.StopMovementSound();
    }

    private void PlayMovementSound()
    {
      if (!this._isMoveSoundPlaying)
      {
        this._movementSound = SoundEvent.CreateEvent(this.MovementSoundCodeID, this.MainObject.GameEntity.Scene);
        this._movementSound.Play();
        this._isMoveSoundPlaying = true;
      }
      this._movementSound.SetPosition(this.MainObject.GameEntity.GlobalPosition);
    }

    private void StopMovementSound()
    {
      if (!this._isMoveSoundPlaying)
        return;
      this._movementSound.Stop();
      this._isMoveSoundPlaying = false;
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this.CurrentSpeed = 0.0f;
      this._lastSynchronizedDistance = 0.0f;
      this._advancementError = 0.0f;
      this._pathTracker.Reset();
      this.SetTargetFrame();
    }

    public float GetTotalDistanceTraveledForPathTracker()
    {
      return this._pathTracker.TotalDistanceTraveled;
    }

    private MatrixFrame FindGroundFrameForWheels(ref MatrixFrame frame)
    {
      return SiegeWeaponMovementComponent.FindGroundFrameForWheelsStatic(ref frame, this.AxleLength, this._wheelDiameter, this.MainObject.GameEntity, this._wheels, this.MainObject.Scene);
    }

    public void SetTotalDistanceTraveledForPathTracker(float distanceTraveled)
    {
      this._pathTracker.TotalDistanceTraveled = distanceTraveled;
    }

    public void SetTargetFrameForPathTracker() => this.SetTargetFrame();

    public static MatrixFrame FindGroundFrameForWheelsStatic(
      ref MatrixFrame frame,
      float axleLength,
      float wheelDiameter,
      GameEntity gameEntity,
      List<GameEntity> wheels,
      Scene scene)
    {
      Vec3.StackArray8Vec3 stackArray8Vec3 = new Vec3.StackArray8Vec3();
      bool visibilityExcludeParents = gameEntity.GetVisibilityExcludeParents();
      if (visibilityExcludeParents)
        gameEntity.SetVisibilityExcludeParents(false);
      int num1 = 0;
      using (new TWSharedMutexReadLock(Scene.PhysicsAndRayCastLock))
      {
        foreach (GameEntity wheel in wheels)
        {
          Vec3 parent = frame.TransformToParent(wheel.GetFrame().origin);
          Vec3 position1 = parent + frame.rotation.s * axleLength + (float) ((double) wheelDiameter * 0.5 + 0.5) * frame.rotation.u;
          Vec3 position2 = parent - frame.rotation.s * axleLength + (float) ((double) wheelDiameter * 0.5 + 0.5) * frame.rotation.u;
          position1.z = scene.GetGroundHeightAtPositionMT(position1);
          position2.z = scene.GetGroundHeightAtPositionMT(position2);
          stackArray8Vec3[num1++] = position1;
          stackArray8Vec3[num1++] = position2;
        }
      }
      if (visibilityExcludeParents)
        gameEntity.SetVisibilityExcludeParents(true);
      float num2 = 0.0f;
      float num3 = 0.0f;
      float num4 = 0.0f;
      float num5 = 0.0f;
      float num6 = 0.0f;
      Vec3 vec3_1 = new Vec3();
      for (int index = 0; index < num1; ++index)
        vec3_1 += stackArray8Vec3[index];
      Vec3 vec3_2 = vec3_1 / (float) num1;
      for (int index = 0; index < num1; ++index)
      {
        Vec3 vec3_3 = stackArray8Vec3[index] - vec3_2;
        num2 += vec3_3.x * vec3_3.x;
        num3 += vec3_3.x * vec3_3.y;
        num4 += vec3_3.y * vec3_3.y;
        num5 += vec3_3.x * vec3_3.z;
        num6 += vec3_3.y * vec3_3.z;
      }
      float num7 = (float) ((double) num2 * (double) num4 - (double) num3 * (double) num3);
      float x = (float) ((double) num6 * (double) num3 - (double) num5 * (double) num4) / num7;
      float y = (float) ((double) num3 * (double) num5 - (double) num2 * (double) num6) / num7;
      MatrixFrame frameForWheelsStatic;
      frameForWheelsStatic.origin = vec3_2;
      frameForWheelsStatic.rotation.u = new Vec3(x, y, 1f);
      double num8 = (double) frameForWheelsStatic.rotation.u.Normalize();
      frameForWheelsStatic.rotation.f = frame.rotation.f;
      frameForWheelsStatic.rotation.f -= Vec3.DotProduct(frameForWheelsStatic.rotation.f, frameForWheelsStatic.rotation.u) * frameForWheelsStatic.rotation.u;
      double num9 = (double) frameForWheelsStatic.rotation.f.Normalize();
      frameForWheelsStatic.rotation.s = Vec3.CrossProduct(frameForWheelsStatic.rotation.f, frameForWheelsStatic.rotation.u);
      double num10 = (double) frameForWheelsStatic.rotation.s.Normalize();
      return frameForWheelsStatic;
    }
  }
}
