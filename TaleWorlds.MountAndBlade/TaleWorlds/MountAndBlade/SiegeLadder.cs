// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeLadder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeLadder : 
    SiegeWeapon,
    IPrimarySiegeWeapon,
    IOrderableWithInteractionArea,
    IOrderable,
    ISpawnable
  {
    private static readonly ActionIndexCache act_usage_ladder_lift_from_left_1_start = ActionIndexCache.Create(nameof (act_usage_ladder_lift_from_left_1_start));
    private static readonly ActionIndexCache act_usage_ladder_lift_from_left_2_start = ActionIndexCache.Create(nameof (act_usage_ladder_lift_from_left_2_start));
    public const float ClimbingLimitRadian = -0.201358318f;
    private static readonly ActionIndexCache act_usage_ladder_lift_from_right_1_start = ActionIndexCache.Create(nameof (act_usage_ladder_lift_from_right_1_start));
    public const float ClimbingLimitDegree = -11.5369816f;
    private static readonly ActionIndexCache act_usage_ladder_lift_from_right_2_start = ActionIndexCache.Create(nameof (act_usage_ladder_lift_from_right_2_start));
    public const float AutomaticUseActivationRange = 20f;
    private static readonly ActionIndexCache act_usage_ladder_pick_up_fork_begin = ActionIndexCache.Create(nameof (act_usage_ladder_pick_up_fork_begin));
    private static readonly ActionIndexCache act_usage_ladder_pick_up_fork_end = ActionIndexCache.Create(nameof (act_usage_ladder_pick_up_fork_end));
    private static readonly ActionIndexCache act_usage_ladder_push_back = ActionIndexCache.Create(nameof (act_usage_ladder_push_back));
    private static readonly ActionIndexCache act_usage_ladder_push_back_stopped = ActionIndexCache.Create(nameof (act_usage_ladder_push_back_stopped));
    public string AttackerTag = "attacker";
    public string DefenderTag = "defender";
    public string downStateEntityTag = "ladderDown";
    public string IdleAnimation = "siege_ladder_idle";
    public int _idleAnimationIndex = -1;
    public string RaiseAnimation = "siege_ladder_rise";
    public string RaiseAnimationWithoutRootBone = "siege_ladder_rise_wo_rootbone";
    public int _raiseAnimationWithoutRootBoneIndex = -1;
    public string PushBackAnimation = "siege_ladder_push_back";
    public int _pushBackAnimationIndex = -1;
    public string PushBackAnimationWithoutRootBone = "siege_ladder_push_back_wo_rootbone";
    public int _pushBackAnimationWithoutRootBoneIndex = -1;
    public string TrembleWallHeavyAnimation = "siege_ladder_stop_wall_heavy";
    public string TrembleWallLightAnimation = "siege_ladder_stop_wall_light";
    public string TrembleGroundAnimation = "siege_ladder_stop_ground_heavy";
    public string RightStandingPointTag = "right";
    public string LeftStandingPointTag = "left";
    public string FrontStandingPointTag = "front";
    public string PushForkItemID = "push_fork";
    public string upStateEntityTag = "ladderUp";
    public string BodyTag = "ladder_body";
    public string CollisionBodyTag = "ladder_collision_body";
    public string InitialWaitPositionTag = "initialwaitposition";
    private string _targetWallSegmentTag = "";
    public float LadderPushTreshold = 170f;
    public float LadderPushTresholdForOneAgent = 55f;
    private WallSegment _targetWallSegment;
    private string _sideTag;
    private int _trembleWallLightAnimationIndex = -1;
    public string BarrierTagToRemove = "barrier";
    private int _trembleGroundAnimationIndex = -1;
    public SiegeLadder.LadderState initialState;
    private int _trembleWallHeavyAnimationIndex = -1;
    public string IndestructibleMerlonsTag = string.Empty;
    private int _raiseAnimationIndex = -1;
    private bool _isNavigationMeshDisabled;
    private bool _isLadderPhysicsDisabled;
    private bool _isLadderCollisionPhysicsDisabled;
    private Timer _tickOccasionallyTimer;
    private float _upStateRotationRadian;
    private float _downStateRotationRadian;
    private float _fallAngularSpeed;
    private MatrixFrame _ladderDownFrame;
    private MatrixFrame _ladderUpFrame;
    private SiegeLadder.LadderAnimationState _animationState;
    private int _currentActionAgentCount;
    private SiegeLadder.LadderState _state;
    private List<GameEntity> _aiBarriers;
    private List<StandingPoint> _attackerStandingPoints;
    private StandingPointWithWeaponRequirement _pushingWithForkStandingPoint;
    private StandingPointWithWeaponRequirement _forkPickUpStandingPoint;
    private ItemObject _forkItem;
    private MatrixFrame[] _attackerStandingPointLocalIKFrames;
    private MatrixFrame _ladderInitialGlobalFrame;
    private SynchedMissionObject _ladderParticleObject;
    private SynchedMissionObject _ladderBodyObject;
    private SynchedMissionObject _ladderCollisionBodyObject;
    private SynchedMissionObject _ladderObject;
    private Skeleton _ladderSkeleton;
    private float _lastDotProductOfAnimationAndTargetRotation;
    private float _turningAngle;
    private LadderQueueManager _queueManagerForAttackers;
    private LadderQueueManager _queueManagerForDefenders;
    private Timer _forkReappearingTimer;
    private float _forkReappearingDelay = 10f;
    private SynchedMissionObject _forkEntity;

    public GameEntity InitialWaitPosition { get; private set; }

    public int OnWallNavMeshId { get; private set; }

    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.Ladder;

    protected internal override void OnInit()
    {
      base.OnInit();
      this._tickOccasionallyTimer = new Timer(Mission.Current.CurrentTime, (float) (0.20000000298023224 + (double) MBRandom.RandomFloat * 0.05000000074505806));
      this._aiBarriers = this.Scene.FindEntitiesWithTag(this.BarrierTagToRemove).ToList<GameEntity>();
      if (this.IndestructibleMerlonsTag != string.Empty)
      {
        foreach (GameEntity gameEntity in this.Scene.FindEntitiesWithTag(this.IndestructibleMerlonsTag))
        {
          DestructableComponent firstScriptOfType = gameEntity.GetFirstScriptOfType<DestructableComponent>();
          firstScriptOfType.SetDisabled();
          firstScriptOfType.CanBeDestroyedInitially = false;
        }
      }
      this._attackerStandingPoints = this.GameEntity.CollectObjectsWithTag<StandingPoint>(this.AttackerTag);
      this._pushingWithForkStandingPoint = this.GameEntity.CollectObjectsWithTag<StandingPointWithWeaponRequirement>(this.DefenderTag).FirstOrDefault<StandingPointWithWeaponRequirement>();
      this._pushingWithForkStandingPoint.AddComponent((UsableMissionObjectComponent) new DropExtraWeaponOnStopUsageComponent());
      this._forkPickUpStandingPoint = this.GameEntity.CollectObjectsWithTag<StandingPointWithWeaponRequirement>(this.AmmoPickUpTag).FirstOrDefault<StandingPointWithWeaponRequirement>();
      this._forkPickUpStandingPoint?.SetUsingBattleSide(BattleSideEnum.Defender);
      this._ladderParticleObject = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("particles").FirstOrDefault<SynchedMissionObject>();
      this._forkEntity = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("push_fork").FirstOrDefault<SynchedMissionObject>();
      if (this.StandingPoints != null)
      {
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          if (!standingPoint.GameEntity.HasTag(this.AmmoPickUpTag))
          {
            standingPoint.AddComponent((UsableMissionObjectComponent) new ResetAnimationOnStopUsageComponent(standingPoint.GameEntity.HasTag(this.DefenderTag) ? SiegeLadder.act_usage_ladder_push_back_stopped : ActionIndexCache.act_none));
            standingPoint.IsDeactivated = true;
          }
        }
      }
      this._forkItem = Game.Current.ObjectManager.GetObject<ItemObject>(this.PushForkItemID);
      this._pushingWithForkStandingPoint.InitRequiredWeapon(this._forkItem);
      this._forkPickUpStandingPoint.InitGivenWeapon(this._forkItem);
      GameEntity gameEntity1 = this.GameEntity.CollectChildrenEntitiesWithTag(this.upStateEntityTag)[0];
      this._ladderObject = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>(this.downStateEntityTag)[0];
      this._ladderSkeleton = this._ladderObject.GameEntity.Skeleton;
      this._ladderBodyObject = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>(this.BodyTag)[0];
      this._ladderCollisionBodyObject = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>(this.CollisionBodyTag)[0];
      this._ladderDownFrame = this._ladderObject.GameEntity.GetFrame();
      this._turningAngle = this._downStateRotationRadian - this._ladderDownFrame.rotation.GetEulerAngles().x;
      this._ladderDownFrame.rotation.RotateAboutSide(this._turningAngle);
      this._ladderObject.GameEntity.SetFrame(ref this._ladderDownFrame);
      MatrixFrame frame1 = gameEntity1.GetFrame() with
      {
        rotation = Mat3.Identity
      };
      frame1.rotation.RotateAboutSide(this._upStateRotationRadian);
      this._ladderUpFrame = frame1;
      this._ladderUpFrame = this._ladderObject.GameEntity.Parent.GetFrame().TransformToLocal(this._ladderUpFrame);
      this._ladderInitialGlobalFrame = this._ladderObject.GameEntity.GetGlobalFrame();
      this._attackerStandingPointLocalIKFrames = new MatrixFrame[this._attackerStandingPoints.Count];
      MatrixFrame frame2 = this._ladderObject.GameEntity.Parent.GetFrame();
      MatrixFrame matrixFrame = frame2;
      matrixFrame.rotation.RotateAboutForward(this._turningAngle);
      this.State = this.initialState;
      for (int index = 0; index < this._attackerStandingPoints.Count; ++index)
      {
        MatrixFrame frame3 = this._attackerStandingPoints[index].GameEntity.GetFrame();
        frame3 = matrixFrame.TransformToParent(frame3);
        frame3 = frame2.TransformToLocal(frame3);
        this._attackerStandingPoints[index].GameEntity.SetFrame(ref frame3);
        this._attackerStandingPointLocalIKFrames[index] = this._attackerStandingPoints[index].GameEntity.GetGlobalFrame().TransformToLocal(this._ladderInitialGlobalFrame);
        this._attackerStandingPoints[index].AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
      }
      this.CalculateNavigationAndPhysics();
      this.InitialWaitPosition = this.GameEntity.CollectChildrenEntitiesWithTag(this.InitialWaitPositionTag).FirstOrDefault<GameEntity>();
      foreach (GameEntity gameEntity2 in this.Scene.FindEntitiesWithTag(this._targetWallSegmentTag))
      {
        WallSegment firstScriptOfType = gameEntity2.GetFirstScriptOfType<WallSegment>();
        if (firstScriptOfType != null)
        {
          this._targetWallSegment = firstScriptOfType;
          this._targetWallSegment.AttackerSiegeWeapon = (IPrimarySiegeWeapon) this;
          break;
        }
      }
      switch (this._sideTag)
      {
        case "left":
          this.WeaponSide = FormationAI.BehaviorSide.Left;
          break;
        case "middle":
          this.WeaponSide = FormationAI.BehaviorSide.Middle;
          break;
        case "right":
          this.WeaponSide = FormationAI.BehaviorSide.Right;
          break;
        default:
          this.WeaponSide = FormationAI.BehaviorSide.Middle;
          break;
      }
      this.SetForcedUse(false);
      LadderQueueManager[] array = this.GameEntity.GetScriptComponents<LadderQueueManager>().ToArray<LadderQueueManager>();
      MatrixFrame globalFrame1 = this.GameEntity.GetGlobalFrame();
      MatrixFrame local = globalFrame1.TransformToLocal(this._ladderObject.GameEntity.GetGlobalFrame());
      int num1 = 0;
      int num2 = 1;
      for (int index = this.GameEntity.Name.Length - 1; index >= 0; --index)
      {
        if (char.IsDigit(this.GameEntity.Name[index]))
        {
          num1 += ((int) this.GameEntity.Name[index] - 48) * num2;
          num2 *= 10;
        }
        else if (num1 > 0)
          break;
      }
      if (array.Length != 0)
      {
        this._queueManagerForAttackers = array[0];
        this._queueManagerForAttackers.Initialize(this.OnWallNavMeshId, local, -local.rotation.f, BattleSideEnum.Attacker, 3, 2.3561945f, 2f, 0.8f, 6f, 5f, false, 0.8f, (float) num1, 5f, false, -2, -2, num1, 2);
      }
      if (array.Length > 1 && this._pushingWithForkStandingPoint != null)
      {
        this._queueManagerForDefenders = array[1];
        MatrixFrame globalFrame2 = this._pushingWithForkStandingPoint.GameEntity.GetGlobalFrame();
        globalFrame2.rotation.RotateAboutSide(1.57079637f);
        globalFrame2.origin -= globalFrame2.rotation.u;
        globalFrame1 = this.GameEntity.GetGlobalFrame();
        this._queueManagerForDefenders.Initialize(this.OnWallNavMeshId, globalFrame1.TransformToLocal(globalFrame2), local.rotation.f, BattleSideEnum.Defender, 1, 2.82743335f, 0.5f, 0.8f, 6f, 5f, true, 0.8f, float.MaxValue, 5f, false, -2, -2, 0, 0);
      }
      this.GameEntity.Scene.MarkFacesWithIdAsLadder(this.OnWallNavMeshId, true);
      this.EnemyRangeToStopUsing = 0.0f;
      this._idleAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.IdleAnimation);
      this._raiseAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.RaiseAnimation);
      this._raiseAnimationWithoutRootBoneIndex = MBAnimation.GetAnimationIndexWithName(this.RaiseAnimationWithoutRootBone);
      this._pushBackAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.PushBackAnimation);
      this._pushBackAnimationWithoutRootBoneIndex = MBAnimation.GetAnimationIndexWithName(this.PushBackAnimationWithoutRootBone);
      this._trembleWallHeavyAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.TrembleWallHeavyAnimation);
      this._trembleWallLightAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.TrembleWallLightAnimation);
      this._trembleGroundAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.TrembleGroundAnimation);
      this.SetUpStateVisibility(false);
      this.SetScriptComponentToTick(this.GetTickRequirement());
      bool flag = false;
      foreach (GameEntity entityAndChild in this._ladderObject.GameEntity.GetEntityAndChildren())
      {
        PhysicsShape bodyShape = entityAndChild.GetBodyShape();
        if ((NativeObject) bodyShape != (NativeObject) null)
        {
          PhysicsShape.AddPreloadQueueWithName(bodyShape.GetName(), entityAndChild.GetGlobalScale());
          flag = true;
        }
      }
      if (!flag)
        return;
      PhysicsShape.ProcessPreloadQueue();
    }

    private float GetCurrentLadderAngularSpeed(int animationIndex)
    {
      float parameterAtChannel = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
      MatrixFrame entitialFrameWithIndex1 = this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0);
      if ((double) parameterAtChannel <= 0.0099999997764825821)
        return 0.0f;
      this._ladderSkeleton.SetAnimationParameterAtChannel(0, parameterAtChannel - 0.01f);
      this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, this._ladderObject.GameEntity.GetGlobalFrame(), false);
      MatrixFrame entitialFrameWithIndex2 = this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0);
      return (float) (((double) new Vec2(entitialFrameWithIndex1.rotation.f.y, entitialFrameWithIndex1.rotation.f.z).RotationInRadians - (double) new Vec2(entitialFrameWithIndex2.rotation.f.y, entitialFrameWithIndex2.rotation.f.z).RotationInRadians) / ((double) MBAnimation.GetAnimationDuration(animationIndex) * 0.0099999997764825821));
    }

    private void OnLadderStateChange()
    {
      GameEntity gameEntity = this._ladderObject.GameEntity;
      if (this.State != SiegeLadder.LadderState.OnWall)
        this.SetVisibilityOfAIBarriers(true);
      switch (this.State)
      {
        case SiegeLadder.LadderState.OnLand:
          this._animationState = SiegeLadder.LadderAnimationState.Static;
          break;
        case SiegeLadder.LadderState.FallToLand:
          if (this._ladderSkeleton.GetAnimationIndexAtChannel(0) != this._trembleGroundAnimationIndex)
          {
            gameEntity.SetFrame(ref this._ladderDownFrame);
            this._ladderSkeleton.SetAnimationAtChannel(this._trembleGroundAnimationIndex, 0);
            this._animationState = SiegeLadder.LadderAnimationState.Static;
          }
          if (GameNetwork.IsClientOrReplay)
            break;
          this.State = SiegeLadder.LadderState.OnLand;
          break;
        case SiegeLadder.LadderState.BeingRaisedStartFromGround:
          this._animationState = SiegeLadder.LadderAnimationState.Animated;
          MatrixFrame frame1 = gameEntity.GetFrame();
          frame1.rotation.RotateAboutSide(-1.57079637f);
          gameEntity.SetFrame(ref frame1);
          this._ladderSkeleton.SetAnimationAtChannel(this._raiseAnimationIndex, 0);
          this._ladderSkeleton.ForceUpdateBoneFrames();
          this._lastDotProductOfAnimationAndTargetRotation = -1000f;
          if (GameNetwork.IsClientOrReplay)
            break;
          this._currentActionAgentCount = 1;
          this.State = SiegeLadder.LadderState.BeingRaised;
          break;
        case SiegeLadder.LadderState.BeingRaisedStopped:
          this._animationState = SiegeLadder.LadderAnimationState.PhysicallyDynamic;
          MatrixFrame frame2 = gameEntity.GetGlobalFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
          frame2.rotation.RotateAboutForward(1.57079637f);
          this._fallAngularSpeed = this.GetCurrentLadderAngularSpeed(this._raiseAnimationIndex);
          float parameterAtChannel1 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
          gameEntity.SetGlobalFrame(in frame2);
          this._ladderSkeleton.SetAnimationAtChannel(this._raiseAnimationWithoutRootBoneIndex, 0);
          this._ladderSkeleton.SetAnimationParameterAtChannel(0, parameterAtChannel1);
          this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity.GetGlobalFrame(), false);
          this._ladderSkeleton.SetAnimationAtChannel(this._idleAnimationIndex, 0);
          this._ladderObject.SetLocalPositionSmoothStep(ref this._ladderDownFrame.origin);
          if (GameNetwork.IsClientOrReplay)
            break;
          this.State = SiegeLadder.LadderState.BeingPushedBack;
          break;
        case SiegeLadder.LadderState.OnWall:
          this._animationState = SiegeLadder.LadderAnimationState.Static;
          this.SetVisibilityOfAIBarriers(false);
          break;
        case SiegeLadder.LadderState.FallToWall:
          if (GameNetwork.IsClientOrReplay)
          {
            int animationIndexAtChannel = this._ladderSkeleton.GetAnimationIndexAtChannel(0);
            if (animationIndexAtChannel == this._trembleWallHeavyAnimationIndex || animationIndexAtChannel == this._trembleWallLightAnimationIndex)
              break;
            gameEntity.SetFrame(ref this._ladderUpFrame);
            this._ladderSkeleton.SetAnimationAtChannel((double) this._fallAngularSpeed < -0.5 ? this._trembleWallHeavyAnimationIndex : this._trembleWallLightAnimationIndex, 0);
            this._animationState = SiegeLadder.LadderAnimationState.Static;
            break;
          }
          this.State = SiegeLadder.LadderState.OnWall;
          this._ladderParticleObject?.BurstParticlesSynched(false);
          break;
        case SiegeLadder.LadderState.BeingPushedBackStartFromWall:
          this._animationState = SiegeLadder.LadderAnimationState.Animated;
          this._ladderSkeleton.SetAnimationAtChannel(this._pushBackAnimationIndex, 0);
          this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity.GetGlobalFrame(), false);
          this._lastDotProductOfAnimationAndTargetRotation = -1000f;
          if (GameNetwork.IsClientOrReplay)
            break;
          this._currentActionAgentCount = 1;
          this.State = SiegeLadder.LadderState.BeingPushedBack;
          break;
        case SiegeLadder.LadderState.BeingPushedBackStopped:
          this._animationState = SiegeLadder.LadderAnimationState.PhysicallyDynamic;
          MatrixFrame frame3 = gameEntity.GetGlobalFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
          frame3.rotation.RotateAboutForward(1.57079637f);
          this._fallAngularSpeed = this.GetCurrentLadderAngularSpeed(this._pushBackAnimationIndex);
          float parameterAtChannel2 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
          gameEntity.SetGlobalFrame(in frame3);
          this._ladderSkeleton.SetAnimationAtChannel(this._pushBackAnimationWithoutRootBoneIndex, 0);
          this._ladderSkeleton.SetAnimationParameterAtChannel(0, parameterAtChannel2);
          this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity.GetGlobalFrame(), false);
          this._ladderSkeleton.SetAnimationAtChannel(this._idleAnimationIndex, 0);
          this._ladderObject.SetLocalPositionSmoothStep(ref this._ladderUpFrame.origin);
          if (!GameNetwork.IsClientOrReplay)
            this.State = SiegeLadder.LadderState.BeingRaised;
          this._ladderSkeleton.ForceUpdateBoneFrames();
          break;
      }
    }

    private void SetVisibilityOfAIBarriers(bool visibility)
    {
      foreach (GameEntity aiBarrier in this._aiBarriers)
        aiBarrier.SetVisibilityExcludeParents(visibility);
    }

    public int OverTheWallNavMeshID => 13;

    public override OrderType GetOrder(BattleSideEnum side)
    {
      return side != BattleSideEnum.Attacker ? OrderType.Move : base.GetOrder(side);
    }

    public SiegeLadder.LadderState State
    {
      get => this._state;
      set
      {
        if (this._state == value)
          return;
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetSiegeLadderState(this.Id, value));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        this._state = value;
        this.OnLadderStateChange();
        this.CalculateNavigationAndPhysics();
      }
    }

    private void CalculateNavigationAndPhysics()
    {
      if (!GameNetwork.IsClientOrReplay)
      {
        bool flag = this.State != SiegeLadder.LadderState.OnWall;
        if (this._isNavigationMeshDisabled != flag)
        {
          this._isNavigationMeshDisabled = flag;
          this.SetAbilityOfFaces(!this._isNavigationMeshDisabled);
        }
      }
      bool flag1 = (this.State == SiegeLadder.LadderState.BeingRaisedStartFromGround || this.State == SiegeLadder.LadderState.BeingRaised) && this._animationState != SiegeLadder.LadderAnimationState.PhysicallyDynamic;
      bool flag2 = true;
      if (this._isLadderPhysicsDisabled != flag1)
      {
        this._isLadderPhysicsDisabled = flag1;
        this._ladderBodyObject.GameEntity.SetPhysicsState(!this._isLadderPhysicsDisabled, true);
      }
      if (!flag1)
      {
        MatrixFrame frame = this._ladderObject.GameEntity.GetGlobalFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
        frame.rotation.RotateAboutForward(1.57079637f);
        this._ladderBodyObject.GameEntity.SetGlobalFrame(in frame);
        flag2 = this.State != SiegeLadder.LadderState.BeingPushedBack || (double) frame.rotation.f.z < 0.0;
        if (!flag2)
        {
          float y = MathF.Min((float) (2.0099999904632568 - (double) frame.rotation.u.z * 2.0), 1f);
          frame.rotation.ApplyScaleLocal(new Vec3(1f, y, 1f));
          this._ladderCollisionBodyObject.GameEntity.SetGlobalFrame(in frame);
        }
      }
      if (this._isLadderCollisionPhysicsDisabled == flag2)
        return;
      this._isLadderCollisionPhysicsDisabled = flag2;
      this._ladderCollisionBodyObject.GameEntity.SetPhysicsState(!this._isLadderCollisionPhysicsDisabled, true);
    }

    public MissionObject TargetCastlePosition => (MissionObject) this._targetWallSegment;

    public bool HasCompletedAction() => this.State == SiegeLadder.LadderState.OnWall;

    public FormationAI.BehaviorSide WeaponSide { get; private set; }

    public float SiegeWeaponPriority => 8f;

    private ActionIndexCache GetActionCodeToUseForStandingPoint(StandingPoint standingPoint)
    {
      GameEntity gameEntity = standingPoint.GameEntity;
      return !gameEntity.HasTag(this.RightStandingPointTag) ? (!gameEntity.HasTag(this.FrontStandingPointTag) ? SiegeLadder.act_usage_ladder_lift_from_left_2_start : SiegeLadder.act_usage_ladder_lift_from_left_1_start) : (!gameEntity.HasTag(this.FrontStandingPointTag) ? SiegeLadder.act_usage_ladder_lift_from_right_2_start : SiegeLadder.act_usage_ladder_lift_from_right_1_start);
    }

    public override bool IsDisabledForBattleSide(BattleSideEnum sideEnum)
    {
      return sideEnum == BattleSideEnum.Attacker ? this.State == SiegeLadder.LadderState.FallToLand || this.State == SiegeLadder.LadderState.FallToWall || this.State == SiegeLadder.LadderState.OnWall || this.State == SiegeLadder.LadderState.BeingPushedBack && this._animationState != SiegeLadder.LadderAnimationState.PhysicallyDynamic || this.State == SiegeLadder.LadderState.BeingPushedBackStartFromWall || this.State == SiegeLadder.LadderState.BeingPushedBackStopped : this.State == SiegeLadder.LadderState.OnLand || this.State == SiegeLadder.LadderState.FallToLand || this.State == SiegeLadder.LadderState.BeingRaised || this.State == SiegeLadder.LadderState.BeingRaisedStartFromGround || this.State == SiegeLadder.LadderState.FallToWall;
    }

    protected override float GetDetachmentWeightAux(BattleSideEnum side)
    {
      if (side == BattleSideEnum.Attacker)
        return base.GetDetachmentWeightAux(side);
      if (this.IsDisabledForBattleSideAI(side))
        return float.MinValue;
      this._usableStandingPoints.Clear();
      bool flag1 = false;
      bool flag2 = false;
      for (int index = 0; index < this.StandingPoints.Count; ++index)
      {
        StandingPoint standingPoint = this.StandingPoints[index];
        if (standingPoint.IsUsableBySide(side) && (standingPoint != this._forkPickUpStandingPoint || this._pushingWithForkStandingPoint.IsUsableBySide(side)))
        {
          if (!standingPoint.HasAIMovingTo)
          {
            if (!flag2)
              this._usableStandingPoints.Clear();
            flag2 = true;
          }
          else if (flag2 || standingPoint.MovingAgent.Formation.Team.Side != side)
            continue;
          flag1 = true;
          this._usableStandingPoints.Add((index, standingPoint));
        }
      }
      this._areUsableStandingPointsVacant = flag2;
      if (!flag1)
        return float.MinValue;
      if (flag2)
        return 1f;
      return !this._isDetachmentRecentlyEvaluated ? 0.1f : 0.01f;
    }

    public bool HoldLadders => false;

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel;
    }

    public bool SendLadders => this.State != 0;

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this._tickOccasionallyTimer.Check(Mission.Current.CurrentTime))
        this.TickRare();
      if (!GameNetwork.IsClientOrReplay && this._forkReappearingTimer != null && this._forkReappearingTimer.Check(Mission.Current.CurrentTime))
      {
        this._forkPickUpStandingPoint.SetIsDeactivatedSynched(false);
        this._forkEntity.SetVisibleSynched(true);
      }
      int num1 = 0;
      int num2 = 0;
      GameEntity gameEntity1 = this._ladderObject.GameEntity;
      if (!GameNetwork.IsClientOrReplay)
      {
        if (this._queueManagerForAttackers != null)
        {
          if (this._queueManagerForAttackers.IsDeactivated)
          {
            if (this.State == SiegeLadder.LadderState.OnWall)
              this._queueManagerForAttackers.Activate();
          }
          else if (this.State == SiegeLadder.LadderState.OnLand)
            this._queueManagerForAttackers.Deactivate();
        }
        if (this._queueManagerForDefenders != null && this._queueManagerForDefenders.IsDeactivated != (this.State != SiegeLadder.LadderState.OnWall))
        {
          if (this.State != SiegeLadder.LadderState.OnWall)
            this._queueManagerForDefenders.DeactivateImmediate();
          else
            this._queueManagerForDefenders.Activate();
        }
        int animationIndexAtChannel = this._ladderSkeleton.GetAnimationIndexAtChannel(0);
        bool flag1 = false;
        if (animationIndexAtChannel >= 0)
        {
          flag1 = animationIndexAtChannel == this._trembleGroundAnimationIndex || animationIndexAtChannel == this._trembleWallHeavyAnimationIndex || animationIndexAtChannel == this._trembleWallLightAnimationIndex;
          if (flag1)
            flag1 = (double) this._ladderSkeleton.GetAnimationParameterAtChannel(0) < 1.0;
        }
        num1 += !this._pushingWithForkStandingPoint.HasUser || this._pushingWithForkStandingPoint.UserAgent.IsInBeingStruckAction ? 0 : 1;
        foreach (StandingPoint attackerStandingPoint in this._attackerStandingPoints)
        {
          if (attackerStandingPoint.HasUser && !attackerStandingPoint.UserAgent.IsInBeingStruckAction)
            ++num2;
        }
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          GameEntity gameEntity2 = standingPoint.GameEntity;
          if (!gameEntity2.HasTag(this.AmmoPickUpTag))
          {
            bool flag2 = false;
            if ((!standingPoint.HasUser || standingPoint.UserAgent.IsInBeingStruckAction) && this.State == SiegeLadder.LadderState.BeingRaised && gameEntity2.HasTag(this.AttackerTag))
            {
              double parameterAtChannel = (double) this._ladderSkeleton.GetAnimationParameterAtChannel(0);
              float animationDuration = MBAnimation.GetAnimationDuration(this._ladderSkeleton.GetAnimationIndexAtChannel(0));
              ActionIndexCache forStandingPoint = this.GetActionCodeToUseForStandingPoint(standingPoint);
              int animationIndexOfAction = MBActionSet.GetAnimationIndexOfAction(MBGlobals.GetActionSetWithSuffix(Game.Current.DefaultMonster, false, "_warrior"), forStandingPoint);
              double num3 = (double) animationDuration;
              flag2 = parameterAtChannel * num3 / (double) MathF.Max(MBAnimation.GetAnimationDuration(animationIndexOfAction), 0.01f) > 0.98000001907348633;
            }
            standingPoint.SetIsDeactivatedSynched(flag2 || this.State == SiegeLadder.LadderState.BeingPushedBackStopped || gameEntity2.HasTag(this.AttackerTag) && (this.State == SiegeLadder.LadderState.OnWall || this.State == SiegeLadder.LadderState.FallToWall || this.State == SiegeLadder.LadderState.BeingPushedBack && this._animationState != SiegeLadder.LadderAnimationState.PhysicallyDynamic || this.State == SiegeLadder.LadderState.BeingPushedBackStartFromWall) || gameEntity2.HasTag(this.DefenderTag) && (((this.State == SiegeLadder.LadderState.OnLand || this._animationState == SiegeLadder.LadderAnimationState.PhysicallyDynamic ? 1 : (this.State == SiegeLadder.LadderState.BeingRaisedStopped ? 1 : 0)) | (flag1 ? 1 : 0)) != 0 || this.State == SiegeLadder.LadderState.FallToLand || this.State == SiegeLadder.LadderState.BeingRaised || this.State == SiegeLadder.LadderState.BeingRaisedStartFromGround || !this.CanLadderBePushed()));
          }
        }
        if (this._forkPickUpStandingPoint.HasUser)
        {
          Agent userAgent = this._forkPickUpStandingPoint.UserAgent;
          ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(1);
          if (!(currentActionValue == SiegeLadder.act_usage_ladder_pick_up_fork_begin))
          {
            if (currentActionValue == SiegeLadder.act_usage_ladder_pick_up_fork_end)
            {
              MissionWeapon weapon = new MissionWeapon(this._forkItem, (ItemModifier) null, (Banner) null);
              userAgent.EquipWeaponToExtraSlotAndWield(ref weapon);
              this._forkPickUpStandingPoint.UserAgent.StopUsingGameObject();
              this._forkPickUpStandingPoint.SetIsDeactivatedSynched(true);
              this._forkEntity.SetVisibleSynched(false);
              this._forkReappearingTimer = new Timer(Mission.Current.CurrentTime, this._forkReappearingDelay);
              if (userAgent.IsAIControlled)
              {
                StandingPoint standingPointFor = this.GetSuitableStandingPointFor(userAgent.Team.Side, userAgent, (List<Agent>) null, (List<(Agent, float)>) null);
                if (standingPointFor != null)
                {
                  ((IDetachment) this).AddAgent(userAgent);
                  if (userAgent.Formation != null)
                  {
                    userAgent.Formation.DetachUnit(userAgent, this.IsLoose);
                    userAgent.Detachment = (IDetachment) this;
                    userAgent.DetachmentWeight = this.GetWeightOfStandingPoint(standingPointFor);
                  }
                }
              }
            }
            else if (!this._forkPickUpStandingPoint.UserAgent.SetActionChannel(1, SiegeLadder.act_usage_ladder_pick_up_fork_begin))
              this._forkPickUpStandingPoint.UserAgent.StopUsingGameObject();
          }
        }
        else if (this._forkPickUpStandingPoint.HasAIMovingTo)
        {
          Agent movingAgent = this._forkPickUpStandingPoint.MovingAgent;
          if (movingAgent.Team != null && !this._pushingWithForkStandingPoint.IsUsableBySide(movingAgent.Team.Side))
            movingAgent.StopUsingGameObject();
        }
      }
      switch (this.State)
      {
        case SiegeLadder.LadderState.OnLand:
        case SiegeLadder.LadderState.FallToLand:
          if (!GameNetwork.IsClientOrReplay && num2 > 0)
          {
            this.State = SiegeLadder.LadderState.BeingRaisedStartFromGround;
            break;
          }
          break;
        case SiegeLadder.LadderState.BeingRaised:
        case SiegeLadder.LadderState.BeingRaisedStartFromGround:
        case SiegeLadder.LadderState.BeingPushedBackStopped:
          if (this._animationState == SiegeLadder.LadderAnimationState.Animated)
          {
            float parameterAtChannel1 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
            float animationDuration1 = MBAnimation.GetAnimationDuration(this._ladderSkeleton.GetAnimationIndexAtChannel(0));
            foreach (StandingPoint attackerStandingPoint in this._attackerStandingPoints)
            {
              if (attackerStandingPoint.HasUser)
              {
                MBActionSet actionSet = attackerStandingPoint.UserAgent.ActionSet;
                ActionIndexCache forStandingPoint = this.GetActionCodeToUseForStandingPoint(attackerStandingPoint);
                ActionIndexValueCache currentActionValue = attackerStandingPoint.UserAgent.GetCurrentActionValue(1);
                if (currentActionValue == forStandingPoint)
                {
                  int animationIndexOfAction = MBActionSet.GetAnimationIndexOfAction(actionSet, forStandingPoint);
                  float progress = MBMath.ClampFloat(parameterAtChannel1 * animationDuration1 / MathF.Max(MBAnimation.GetAnimationDuration(animationIndexOfAction), 0.01f), 0.0f, 1f);
                  attackerStandingPoint.UserAgent.SetCurrentActionProgress(1, progress);
                }
                else if (MBAnimation.GetActionType(currentActionValue) == Agent.ActionCodeType.LadderRaiseEnd)
                {
                  float animationDuration2 = MBAnimation.GetAnimationDuration(MBActionSet.GetAnimationIndexOfAction(actionSet, currentActionValue));
                  float num4 = animationDuration1 - animationDuration2;
                  float progress = MBMath.ClampFloat((parameterAtChannel1 * animationDuration1 - num4) / MathF.Max(animationDuration2, 0.01f), 0.0f, 1f);
                  attackerStandingPoint.UserAgent.SetCurrentActionProgress(1, progress);
                }
              }
            }
            bool flag = false;
            if (!GameNetwork.IsClientOrReplay)
            {
              if (num2 > 0)
              {
                if (num2 != this._currentActionAgentCount)
                {
                  this._currentActionAgentCount = num2;
                  float animationSpeed = MathF.Sqrt((float) this._currentActionAgentCount);
                  float parameterAtChannel2 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
                  this._ladderObject.SetAnimationAtChannelSynched(this._raiseAnimationIndex, 0, animationSpeed);
                  if ((double) parameterAtChannel2 > 0.0)
                    this._ladderObject.SetAnimationChannelParameterSynched(0, parameterAtChannel2);
                }
                foreach (StandingPoint attackerStandingPoint in this._attackerStandingPoints)
                {
                  if (attackerStandingPoint.HasUser)
                  {
                    ActionIndexCache forStandingPoint = this.GetActionCodeToUseForStandingPoint(attackerStandingPoint);
                    Agent userAgent = attackerStandingPoint.UserAgent;
                    ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(1);
                    if (currentActionValue != forStandingPoint && MBAnimation.GetActionType(currentActionValue) != Agent.ActionCodeType.LadderRaiseEnd)
                    {
                      if (!userAgent.SetActionChannel(1, forStandingPoint) && !userAgent.IsAIControlled)
                        userAgent.StopUsingGameObject(false);
                    }
                    else if (MBAnimation.GetActionType(currentActionValue) == Agent.ActionCodeType.LadderRaiseEnd)
                      attackerStandingPoint.UserAgent.ClearTargetFrame();
                  }
                }
              }
              else
              {
                this.State = SiegeLadder.LadderState.BeingRaisedStopped;
                flag = true;
              }
            }
            if (!flag)
            {
              MatrixFrame frame = gameEntity1.GetGlobalFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
              frame.rotation.RotateAboutForward(1.57079637f);
              if ((double) parameterAtChannel1 > 0.89999997615814209 && (double) parameterAtChannel1 != 1.0 || (double) frame.rotation.f.z <= 0.20000000298023224)
              {
                this._animationState = SiegeLadder.LadderAnimationState.PhysicallyDynamic;
                this._fallAngularSpeed = this.GetCurrentLadderAngularSpeed(this._raiseAnimationIndex);
                gameEntity1.SetGlobalFrame(in frame);
                this._ladderSkeleton.SetAnimationAtChannel(this._raiseAnimationWithoutRootBoneIndex, 0);
                this._ladderSkeleton.SetAnimationParameterAtChannel(0, parameterAtChannel1);
                this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity1.GetGlobalFrame(), false);
                this._ladderSkeleton.SetAnimationAtChannel(this._idleAnimationIndex, 0);
                this._ladderObject.SetLocalPositionSmoothStep(ref this._ladderUpFrame.origin);
                break;
              }
              break;
            }
            break;
          }
          if (this._animationState == SiegeLadder.LadderAnimationState.PhysicallyDynamic)
          {
            MatrixFrame frame = gameEntity1.GetFrame();
            frame.rotation.RotateAboutSide(this._fallAngularSpeed * dt);
            gameEntity1.SetFrame(ref frame);
            MatrixFrame parent = gameEntity1.GetFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
            float num5 = Vec3.DotProduct(parent.rotation.f, this._ladderUpFrame.rotation.f);
            if ((double) this._fallAngularSpeed < 0.0 && (double) num5 > 0.949999988079071 && (double) num5 < (double) this._lastDotProductOfAnimationAndTargetRotation)
            {
              gameEntity1.SetFrame(ref this._ladderUpFrame);
              this._ladderSkeleton.SetAnimationParameterAtChannel(0, 0.0f);
              this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity1.GetGlobalFrame(), false);
              this._animationState = SiegeLadder.LadderAnimationState.Static;
              this._ladderSkeleton.SetAnimationAtChannel((double) this._fallAngularSpeed < -0.5 ? this._trembleWallHeavyAnimationIndex : this._trembleWallLightAnimationIndex, 0);
              if (!GameNetwork.IsClientOrReplay)
                this.State = SiegeLadder.LadderState.FallToWall;
            }
            this._fallAngularSpeed -= dt * 2f * MathF.Max(0.3f, 1f - parent.rotation.u.z);
            this._lastDotProductOfAnimationAndTargetRotation = num5;
            break;
          }
          break;
        case SiegeLadder.LadderState.BeingRaisedStopped:
        case SiegeLadder.LadderState.BeingPushedBack:
        case SiegeLadder.LadderState.BeingPushedBackStartFromWall:
          if (this._animationState == SiegeLadder.LadderAnimationState.Animated)
          {
            float parameterAtChannel3 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
            if (this._pushingWithForkStandingPoint.HasUser)
            {
              ActionIndexCache usageLadderPushBack = SiegeLadder.act_usage_ladder_push_back;
              if (this._pushingWithForkStandingPoint.UserAgent.GetCurrentActionValue(1) == usageLadderPushBack)
                this._pushingWithForkStandingPoint.UserAgent.SetCurrentActionProgress(1, parameterAtChannel3);
            }
            bool flag = false;
            if (!GameNetwork.IsClientOrReplay)
            {
              if (num1 > 0)
              {
                if (num1 != this._currentActionAgentCount)
                {
                  this._currentActionAgentCount = num1;
                  float animationSpeed = MathF.Sqrt((float) this._currentActionAgentCount);
                  float parameterAtChannel4 = this._ladderSkeleton.GetAnimationParameterAtChannel(0);
                  this._ladderObject.SetAnimationAtChannelSynched(this.PushBackAnimation, 0, animationSpeed);
                  if ((double) parameterAtChannel4 > 0.0)
                    this._ladderObject.SetAnimationChannelParameterSynched(0, parameterAtChannel4);
                }
                if (this._pushingWithForkStandingPoint.HasUser)
                {
                  ActionIndexCache usageLadderPushBack = SiegeLadder.act_usage_ladder_push_back;
                  Agent userAgent = this._pushingWithForkStandingPoint.UserAgent;
                  if (userAgent.GetCurrentActionValue(1) != usageLadderPushBack && (double) parameterAtChannel3 < 1.0 && !userAgent.SetActionChannel(1, usageLadderPushBack) && !userAgent.IsAIControlled)
                    userAgent.StopUsingGameObject(false);
                }
              }
              else
              {
                this.State = SiegeLadder.LadderState.BeingPushedBackStopped;
                flag = true;
              }
            }
            if (!flag)
            {
              MatrixFrame frame = gameEntity1.GetGlobalFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
              frame.rotation.RotateAboutForward(1.57079637f);
              if ((double) parameterAtChannel3 > 0.99989998340606689 || (double) frame.rotation.f.z >= 0.0)
              {
                this._animationState = SiegeLadder.LadderAnimationState.PhysicallyDynamic;
                this._fallAngularSpeed = this.GetCurrentLadderAngularSpeed(this._pushBackAnimationIndex);
                gameEntity1.SetGlobalFrame(in frame);
                this._ladderSkeleton.SetAnimationAtChannel(this._pushBackAnimationWithoutRootBoneIndex, 0);
                this._ladderSkeleton.SetAnimationParameterAtChannel(0, parameterAtChannel3);
                this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity1.GetGlobalFrame(), false);
                this._ladderSkeleton.SetAnimationAtChannel(this._idleAnimationIndex, 0);
                this._ladderObject.SetLocalPositionSmoothStep(ref this._ladderDownFrame.origin);
                break;
              }
              break;
            }
            break;
          }
          if (this._animationState == SiegeLadder.LadderAnimationState.PhysicallyDynamic)
          {
            MatrixFrame frame = gameEntity1.GetFrame();
            frame.rotation.RotateAboutSide(this._fallAngularSpeed * dt);
            gameEntity1.SetFrame(ref frame);
            MatrixFrame parent = gameEntity1.GetFrame().TransformToParent(this._ladderSkeleton.GetBoneEntitialFrameWithIndex((sbyte) 0));
            parent.rotation.RotateAboutForward(1.57079637f);
            float num6 = Vec3.DotProduct(parent.rotation.f, this._ladderDownFrame.rotation.f);
            if ((double) this._fallAngularSpeed > 0.0 && (double) num6 > 0.949999988079071 && (double) num6 < (double) this._lastDotProductOfAnimationAndTargetRotation)
            {
              this._animationState = SiegeLadder.LadderAnimationState.Static;
              gameEntity1.SetFrame(ref this._ladderDownFrame);
              this._ladderSkeleton.SetAnimationParameterAtChannel(0, 0.0f);
              this._ladderSkeleton.TickAnimationsAndForceUpdate(0.0001f, gameEntity1.GetGlobalFrame(), false);
              this._ladderSkeleton.SetAnimationAtChannel(this._trembleGroundAnimationIndex, 0);
              this._animationState = SiegeLadder.LadderAnimationState.Static;
              if (!GameNetwork.IsClientOrReplay)
                this.State = SiegeLadder.LadderState.FallToLand;
            }
            this._fallAngularSpeed += dt * 2f * MathF.Max(0.3f, 1f - parent.rotation.u.z);
            this._lastDotProductOfAnimationAndTargetRotation = num6;
            break;
          }
          break;
        case SiegeLadder.LadderState.OnWall:
        case SiegeLadder.LadderState.FallToWall:
          if (num1 > 0 && !GameNetwork.IsClientOrReplay)
          {
            this.State = SiegeLadder.LadderState.BeingPushedBackStartFromWall;
            break;
          }
          break;
        default:
          Debug.FailedAssert("Invalid ladder action state.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\SiegeLadder.cs", nameof (OnTick), 1259);
          break;
      }
      this.CalculateNavigationAndPhysics();
    }

    protected internal override void OnTickParallel(float dt)
    {
      base.OnTickParallel(dt);
      for (int index = 0; index < this._attackerStandingPoints.Count; ++index)
      {
        if (this._attackerStandingPoints[index].HasUser)
        {
          if (!this._attackerStandingPoints[index].UserAgent.IsInBeingStruckAction)
          {
            if (this._attackerStandingPoints[index].UserAgent.GetCurrentAction(1) != this.GetActionCodeToUseForStandingPoint(this._attackerStandingPoints[index]))
            {
              MatrixFrame localIKFrame = this._attackerStandingPointLocalIKFrames[index];
              localIKFrame.rotation = Mat3.Lerp(localIKFrame.rotation, this._ladderInitialGlobalFrame.TransformToLocal(this._attackerStandingPoints[index].UserAgent.Frame).rotation, MathF.Clamp(MathF.Lerp(0.0f, (float) (1.0 - (double) this._turningAngle * 1.2000000476837158), MathF.Pow(this._attackerStandingPoints[index].UserAgent.GetCurrentActionProgress(1), 6f)), 0.0f, 1f));
              this._attackerStandingPoints[index].UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in localIKFrame, in this._ladderInitialGlobalFrame);
            }
            else
              this._attackerStandingPoints[index].UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._attackerStandingPointLocalIKFrames[index], in this._ladderInitialGlobalFrame);
          }
          else
            this._attackerStandingPoints[index].UserAgent.ClearHandInverseKinematics();
        }
      }
    }

    private void TickRare()
    {
      if (GameNetwork.IsReplay)
        return;
      float num1 = (float) (20.0 + (this.ForcedUse ? 3.0 : 0.0));
      float num2 = num1 * num1;
      GameEntity gameEntity = this.GameEntity;
      Mission.TeamCollection teams = Mission.Current.Teams;
      int count = teams.Count;
      Vec3 globalPosition = gameEntity.GlobalPosition;
      for (int index = 0; index < count; ++index)
      {
        Team team = teams[index];
        if (team.Side == BattleSideEnum.Attacker)
        {
          this.SetForcedUse(false);
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0 && (double) formation.QuerySystem.MedianPosition.AsVec2.DistanceSquared(globalPosition.AsVec2) < (double) num2 && (double) formation.QuerySystem.MedianPosition.GetNavMeshZ() - (double) globalPosition.z < 4.0)
            {
              this.SetForcedUse(true);
              break;
            }
          }
        }
      }
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new SiegeLadderAI(this);
    }

    public void SetUpStateVisibility(bool isVisible)
    {
      this.GameEntity.CollectChildrenEntitiesWithTag(this.upStateEntityTag)[0].SetVisibilityExcludeParents(isVisible);
    }

    private void FlushQueueManager() => this._queueManagerForAttackers?.FlushQueueManager();

    private void FlushNeighborQueueManagers()
    {
      foreach (SiegeLadder siegeLadder in Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeLadder>().Where<SiegeLadder>((Func<SiegeLadder, bool>) (sl => sl.WeaponSide == this.WeaponSide)).ToList<SiegeLadder>())
      {
        if (siegeLadder != this)
          siegeLadder.FlushQueueManager();
      }
    }

    private bool CanLadderBePushed()
    {
      float num1 = 0.0f;
      GameEntity gameEntity = this._ladderObject.GameEntity;
      Vec3 bbmin;
      Vec3 bbmax;
      gameEntity.GetPhysicsMinMax(true, out bbmin, out bbmax, false);
      float searchRadius = (bbmax - bbmin).AsVec2.Length * 0.5f;
      AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, gameEntity.GlobalPosition.AsVec2, searchRadius);
      while (searchStruct.LastFoundAgent != null)
      {
        Agent lastFoundAgent = searchStruct.LastFoundAgent;
        if (lastFoundAgent.GetSteppedMachine() == this)
        {
          float num2 = (float) (((double) lastFoundAgent.Position.z - (double) bbmin.z) / ((double) bbmax.z - (double) bbmin.z) * 100.0);
          if ((double) num2 > (double) this.LadderPushTresholdForOneAgent)
            return false;
          num1 += num2;
        }
        AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
      }
      return (double) num1 <= (double) this.LadderPushTreshold;
    }

    private void InformNeighborQueueManagers(LadderQueueManager ladderQueueManager)
    {
      foreach (SiegeLadder siegeLadder in Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeLadder>().Where<SiegeLadder>((Func<SiegeLadder, bool>) (sl => sl.WeaponSide == this.WeaponSide && sl._queueManagerForAttackers != null)).ToList<SiegeLadder>())
      {
        if (siegeLadder != this && siegeLadder._queueManagerForAttackers != null)
        {
          siegeLadder._queueManagerForAttackers.AssignNeighborQueueManager(ladderQueueManager);
          this._queueManagerForAttackers?.AssignNeighborQueueManager(siegeLadder._queueManagerForAttackers);
        }
      }
    }

    public override void SetAbilityOfFaces(bool enabled)
    {
      base.SetAbilityOfFaces(enabled);
      this.GameEntity.Scene.SetAbilityOfFacesWithId(this.OnWallNavMeshId, enabled);
      if (Mission.Current == null)
        return;
      if (enabled)
      {
        this.FlushNeighborQueueManagers();
        this.InformNeighborQueueManagers(this._queueManagerForAttackers);
      }
      else
      {
        this.InformNeighborQueueManagers((LadderQueueManager) null);
        this._queueManagerForAttackers?.AssignNeighborQueueManager((LadderQueueManager) null);
      }
    }

    protected internal override void OnMissionReset()
    {
      this._ladderSkeleton.SetAnimationAtChannel(-1, 0);
      if (this.initialState == SiegeLadder.LadderState.OnLand)
      {
        if (!GameNetwork.IsClientOrReplay)
          this.State = SiegeLadder.LadderState.OnLand;
        this._ladderObject.GameEntity.SetFrame(ref this._ladderDownFrame);
      }
      else
      {
        if (!GameNetwork.IsClientOrReplay)
          this.State = SiegeLadder.LadderState.OnWall;
        this._ladderObject.GameEntity.SetFrame(ref this._ladderUpFrame);
      }
    }

    public override string GetDescriptionText(GameEntity gameEntity)
    {
      return !gameEntity.HasTag(this.AmmoPickUpTag) ? new TextObject("{=G0AWk1rX}Ladder").ToString() : new TextObject("{=F9AQxCax}Fork").ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = !usableGameObject.GameEntity.HasTag(this.AmmoPickUpTag) ? (usableGameObject.GameEntity.HasTag(this.AttackerTag) ? new TextObject("{=kbNcm68J}{KEY} Lift") : new TextObject("{=MdQJxiGz}{KEY} Push")) : new TextObject("{=bNYm3K6b}{KEY} Pick Up");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteBoolToPacket(this.initialState == SiegeLadder.LadderState.OnLand);
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.SiegeLadderStateCompressionInfo);
      GameNetworkMessage.WriteIntToPacket((int) this._animationState, CompressionMission.SiegeLadderAnimationStateCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this._fallAngularSpeed, CompressionMission.SiegeMachineComponentAngularSpeedCompressionInfo);
      GameNetworkMessage.WriteMatrixFrameToPacket(this._ladderObject.GameEntity.GetGlobalFrame());
      int animationIndexAtChannel = this._ladderSkeleton.GetAnimationIndexAtChannel(0);
      GameNetworkMessage.WriteBoolToPacket(animationIndexAtChannel >= 0);
      if (animationIndexAtChannel < 0)
        return;
      GameNetworkMessage.WriteIntToPacket(animationIndexAtChannel, CompressionBasic.AnimationIndexCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this._ladderSkeleton.GetAnimationParameterAtChannel(0), CompressionBasic.AnimationProgressCompressionInfo);
    }

    bool IOrderableWithInteractionArea.IsPointInsideInteractionArea(Vec3 point)
    {
      GameEntity gameEntity = this.GameEntity.CollectChildrenEntitiesWithTag("ui_interaction").FirstOrDefault<GameEntity>();
      return !((NativeObject) gameEntity == (NativeObject) null) && (double) gameEntity.GlobalPosition.AsVec2.DistanceSquared(point.AsVec2) < 25.0;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags = (TargetFlags) (0 | 2 | 8 | 16);
      if (this.HasCompletedAction() || this.IsDeactivated)
        targetFlags |= TargetFlags.NotAThreat;
      return targetFlags;
    }

    public override float GetTargetValue(List<Vec3> weaponPos)
    {
      return 10f * this.GetUserMultiplierOfWeapon() * this.GetDistanceMultiplierOfWeapon(weaponPos[0]);
    }

    protected override float GetDistanceMultiplierOfWeapon(Vec3 weaponPos)
    {
      return (double) this.GetMinimumDistanceBetweenPositions(weaponPos) >= 10.0 ? 0.9f : 1f;
    }

    protected override StandingPoint GetSuitableStandingPointFor(
      BattleSideEnum side,
      Agent agent = null,
      List<Agent> agents = null,
      List<(Agent, float)> agentValuePairs = null)
    {
      if (side == BattleSideEnum.Attacker)
        return this._attackerStandingPoints.FirstOrDefault<StandingPoint>((Func<StandingPoint, bool>) (sp =>
        {
          if (sp.IsDeactivated)
            return false;
          if (sp.IsInstantUse)
            return true;
          return !sp.HasUser && !sp.HasAIMovingTo;
        }));
      return this._pushingWithForkStandingPoint.IsDeactivated || !this._pushingWithForkStandingPoint.IsInstantUse && (this._pushingWithForkStandingPoint.HasUser || this._pushingWithForkStandingPoint.HasAIMovingTo) ? (StandingPoint) null : (StandingPoint) this._pushingWithForkStandingPoint;
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;

    public void AssignParametersFromSpawner(
      string sideTag,
      string targetWallSegment,
      int onWallNavMeshId,
      float downStateRotationRadian,
      float upperStateRotationRadian,
      string barrierTagToRemove,
      string indestructibleMerlonsTag)
    {
      this._sideTag = sideTag;
      this._targetWallSegmentTag = targetWallSegment;
      this.OnWallNavMeshId = onWallNavMeshId;
      this._downStateRotationRadian = downStateRotationRadian;
      this._upStateRotationRadian = upperStateRotationRadian;
      this.BarrierTagToRemove = barrierTagToRemove;
      this.IndestructibleMerlonsTag = indestructibleMerlonsTag;
    }

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      SiegeLadder.SiegeLadderRecord siegeLadderRecord = (SiegeLadder.SiegeLadderRecord) synchedMissionObjectReadableRecord.Item2;
      this.initialState = siegeLadderRecord.IsStateLand ? SiegeLadder.LadderState.OnLand : SiegeLadder.LadderState.OnWall;
      this._state = (SiegeLadder.LadderState) siegeLadderRecord.State;
      this._animationState = (SiegeLadder.LadderAnimationState) siegeLadderRecord.AnimationState;
      this._fallAngularSpeed = siegeLadderRecord.FallAngularSpeed;
      this._lastDotProductOfAnimationAndTargetRotation = -1000f;
      siegeLadderRecord.LadderFrame.rotation.Orthonormalize();
      this._ladderObject.GameEntity.SetGlobalFrame(siegeLadderRecord.LadderFrame);
      if (siegeLadderRecord.LadderAnimationIndex < 0)
        return;
      this._ladderSkeleton.SetAnimationAtChannel(siegeLadderRecord.LadderAnimationIndex, 0);
      this._ladderSkeleton.SetAnimationParameterAtChannel(0, MBMath.ClampFloat(siegeLadderRecord.LadderAnimationProgress, 0.0f, 1f));
      this._ladderSkeleton.ForceUpdateBoneFrames();
    }

    public bool GetNavmeshFaceIds(out List<int> navmeshFaceIds)
    {
      navmeshFaceIds = new List<int>()
      {
        this.OnWallNavMeshId
      };
      return true;
    }

    [DefineSynchedMissionObjectType(typeof (SiegeLadder))]
    public struct SiegeLadderRecord : ISynchedMissionObjectReadableRecord
    {
      public bool IsStateLand { get; private set; }

      public int State { get; private set; }

      public int AnimationState { get; private set; }

      public float FallAngularSpeed { get; private set; }

      public MatrixFrame LadderFrame { get; private set; }

      public bool HasAnimation { get; private set; }

      public int LadderAnimationIndex { get; private set; }

      public float LadderAnimationProgress { get; private set; }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.IsStateLand = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.State = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SiegeLadderStateCompressionInfo, ref bufferReadValid);
        this.AnimationState = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SiegeLadderAnimationStateCompressionInfo, ref bufferReadValid);
        this.FallAngularSpeed = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.SiegeMachineComponentAngularSpeedCompressionInfo, ref bufferReadValid);
        this.LadderFrame = GameNetworkMessage.ReadMatrixFrameFromPacket(ref bufferReadValid);
        this.HasAnimation = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.LadderAnimationIndex = -1;
        this.LadderAnimationProgress = 0.0f;
        if (this.HasAnimation)
        {
          this.LadderAnimationIndex = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AnimationIndexCompressionInfo, ref bufferReadValid);
          this.LadderAnimationProgress = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.AnimationProgressCompressionInfo, ref bufferReadValid);
        }
        return bufferReadValid;
      }
    }

    public enum LadderState
    {
      OnLand,
      FallToLand,
      BeingRaised,
      BeingRaisedStartFromGround,
      BeingRaisedStopped,
      OnWall,
      FallToWall,
      BeingPushedBack,
      BeingPushedBackStartFromWall,
      BeingPushedBackStopped,
      NumberOfStates,
    }

    public enum LadderAnimationState
    {
      Static,
      Animated,
      PhysicallyDynamic,
      NumberOfStates,
    }
  }
}
