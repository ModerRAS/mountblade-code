// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Mangonel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Mangonel : RangedSiegeWeapon, ISpawnable
  {
    private const string BodyTag = "body";
    private const string RopeTag = "rope";
    private const string RotateTag = "rotate";
    private const string LeftTag = "left";
    private const string VerticalAdjusterTag = "vertical_adjuster";
    private static readonly ActionIndexCache act_usage_mangonel_idle = ActionIndexCache.Create(nameof (act_usage_mangonel_idle));
    private static readonly ActionIndexCache act_usage_mangonel_load_ammo_begin = ActionIndexCache.Create(nameof (act_usage_mangonel_load_ammo_begin));
    private static readonly ActionIndexCache act_usage_mangonel_load_ammo_end = ActionIndexCache.Create(nameof (act_usage_mangonel_load_ammo_end));
    private static readonly ActionIndexCache act_pickup_boulder_begin = ActionIndexCache.Create(nameof (act_pickup_boulder_begin));
    private static readonly ActionIndexCache act_pickup_boulder_end = ActionIndexCache.Create(nameof (act_pickup_boulder_end));
    private static readonly ActionIndexCache act_usage_mangonel_reload = ActionIndexCache.Create(nameof (act_usage_mangonel_reload));
    private static readonly ActionIndexCache act_usage_mangonel_reload_2 = ActionIndexCache.Create(nameof (act_usage_mangonel_reload_2));
    private static readonly ActionIndexCache act_usage_mangonel_reload_2_idle = ActionIndexCache.Create(nameof (act_usage_mangonel_reload_2_idle));
    private static readonly ActionIndexCache act_usage_mangonel_rotate_left = ActionIndexCache.Create(nameof (act_usage_mangonel_rotate_left));
    private static readonly ActionIndexCache act_usage_mangonel_rotate_right = ActionIndexCache.Create(nameof (act_usage_mangonel_rotate_right));
    private static readonly ActionIndexCache act_usage_mangonel_shoot = ActionIndexCache.Create(nameof (act_usage_mangonel_shoot));
    private static readonly ActionIndexCache act_usage_mangonel_big_idle = ActionIndexCache.Create(nameof (act_usage_mangonel_big_idle));
    private static readonly ActionIndexCache act_usage_mangonel_big_shoot = ActionIndexCache.Create(nameof (act_usage_mangonel_big_shoot));
    private static readonly ActionIndexCache act_usage_mangonel_big_reload = ActionIndexCache.Create(nameof (act_usage_mangonel_big_reload));
    private static readonly ActionIndexCache act_usage_mangonel_big_load_ammo_begin = ActionIndexCache.Create(nameof (act_usage_mangonel_big_load_ammo_begin));
    private static readonly ActionIndexCache act_usage_mangonel_big_load_ammo_end = ActionIndexCache.Create(nameof (act_usage_mangonel_big_load_ammo_end));
    private static readonly ActionIndexCache act_strike_bent_over = ActionIndexCache.Create(nameof (act_strike_bent_over));
    private string _missileBoneName = "end_throwarm";
    private List<StandingPoint> _rotateStandingPoints;
    private SynchedMissionObject _body;
    private SynchedMissionObject _rope;
    private GameEntity _verticalAdjuster;
    private MatrixFrame _verticalAdjusterStartingLocalFrame;
    private Skeleton _verticalAdjusterSkeleton;
    private Skeleton _bodySkeleton;
    private float _timeElapsedAfterLoading;
    private MatrixFrame[] _standingPointLocalIKFrames;
    private StandingPoint _reloadWithoutPilot;
    public string MangonelBodySkeleton = "mangonel_skeleton";
    public string MangonelBodyFire = "mangonel_fire";
    public string MangonelBodyReload = "mangonel_set_up";
    public string MangonelRopeFire = "mangonel_holder_fire";
    public string MangonelRopeReload = "mangonel_holder_set_up";
    public string MangonelAimAnimation = "mangonel_a_anglearm_state";
    public string ProjectileBoneName = "end_throwarm";
    public string IdleActionName;
    public string ShootActionName;
    public string Reload1ActionName;
    public string Reload2ActionName;
    public string RotateLeftActionName;
    public string RotateRightActionName;
    public string LoadAmmoBeginActionName;
    public string LoadAmmoEndActionName;
    public string Reload2IdleActionName;
    public float ProjectileSpeed = 40f;
    private ActionIndexCache _idleAnimationActionIndex;
    private ActionIndexCache _shootAnimationActionIndex;
    private ActionIndexCache _reload1AnimationActionIndex;
    private ActionIndexCache _reload2AnimationActionIndex;
    private ActionIndexCache _rotateLeftAnimationActionIndex;
    private ActionIndexCache _rotateRightAnimationActionIndex;
    private ActionIndexCache _loadAmmoBeginAnimationActionIndex;
    private ActionIndexCache _loadAmmoEndAnimationActionIndex;
    private ActionIndexCache _reload2IdleActionIndex;
    private sbyte _missileBoneIndex;

    protected override float MaximumBallisticError => 1.5f;

    protected override float ShootingSpeed => this.ProjectileSpeed;

    protected override void RegisterAnimationParameters()
    {
      this.SkeletonOwnerObjects = new SynchedMissionObject[2];
      this.Skeletons = new Skeleton[2];
      this.SkeletonNames = new string[1];
      this.FireAnimations = new string[2];
      this.FireAnimationIndices = new int[2];
      this.SetUpAnimations = new string[2];
      this.SetUpAnimationIndices = new int[2];
      this.SkeletonOwnerObjects[0] = this._body;
      this.Skeletons[0] = this._body.GameEntity.Skeleton;
      this.SkeletonNames[0] = this.MangonelBodySkeleton;
      this.FireAnimations[0] = this.MangonelBodyFire;
      this.FireAnimationIndices[0] = MBAnimation.GetAnimationIndexWithName(this.MangonelBodyFire);
      this.SetUpAnimations[0] = this.MangonelBodyReload;
      this.SetUpAnimationIndices[0] = MBAnimation.GetAnimationIndexWithName(this.MangonelBodyReload);
      this.SkeletonOwnerObjects[1] = this._rope;
      this.Skeletons[1] = this._rope.GameEntity.Skeleton;
      this.FireAnimations[1] = this.MangonelRopeFire;
      this.FireAnimationIndices[1] = MBAnimation.GetAnimationIndexWithName(this.MangonelRopeFire);
      this.SetUpAnimations[1] = this.MangonelRopeReload;
      this.SetUpAnimationIndices[1] = MBAnimation.GetAnimationIndexWithName(this.MangonelRopeReload);
      this._missileBoneName = this.ProjectileBoneName;
      this._idleAnimationActionIndex = ActionIndexCache.Create(this.IdleActionName);
      this._shootAnimationActionIndex = ActionIndexCache.Create(this.ShootActionName);
      this._reload1AnimationActionIndex = ActionIndexCache.Create(this.Reload1ActionName);
      this._reload2AnimationActionIndex = ActionIndexCache.Create(this.Reload2ActionName);
      this._rotateLeftAnimationActionIndex = ActionIndexCache.Create(this.RotateLeftActionName);
      this._rotateRightAnimationActionIndex = ActionIndexCache.Create(this.RotateRightActionName);
      this._loadAmmoBeginAnimationActionIndex = ActionIndexCache.Create(this.LoadAmmoBeginActionName);
      this._loadAmmoEndAnimationActionIndex = ActionIndexCache.Create(this.LoadAmmoEndActionName);
      this._reload2IdleActionIndex = ActionIndexCache.Create(this.Reload2IdleActionName);
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new MangonelAI(this);
    }

    public override void AfterMissionStart()
    {
      if (this.AmmoPickUpStandingPoints != null)
      {
        foreach (UsableMissionObject pickUpStandingPoint in this.AmmoPickUpStandingPoints)
          pickUpStandingPoint.LockUserFrames = true;
      }
      this.UpdateProjectilePosition();
    }

    public override SiegeEngineType GetSiegeEngineType()
    {
      return this._defaultSide != BattleSideEnum.Attacker ? DefaultSiegeEngineTypes.Catapult : DefaultSiegeEngineTypes.Onager;
    }

    protected internal override void OnInit()
    {
      List<SynchedMissionObject> synchedMissionObjectList = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("rope");
      if (synchedMissionObjectList.Count > 0)
        this._rope = synchedMissionObjectList[0];
      this._body = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("body")[0];
      this._bodySkeleton = this._body.GameEntity.Skeleton;
      this.RotationObject = this._body;
      this._verticalAdjuster = this.GameEntity.CollectChildrenEntitiesWithTag("vertical_adjuster")[0];
      this._verticalAdjusterSkeleton = this._verticalAdjuster.Skeleton;
      if ((NativeObject) this._verticalAdjusterSkeleton != (NativeObject) null)
        this._verticalAdjusterSkeleton.SetAnimationAtChannel(this.MangonelAimAnimation, 0);
      this._verticalAdjusterStartingLocalFrame = this._verticalAdjuster.GetFrame();
      this._verticalAdjusterStartingLocalFrame = this._body.GameEntity.GetBoneEntitialFrameWithIndex((sbyte) 0).TransformToLocal(this._verticalAdjusterStartingLocalFrame);
      base.OnInit();
      this.timeGapBetweenShootActionAndProjectileLeaving = 0.23f;
      this.timeGapBetweenShootingEndAndReloadingStart = 0.0f;
      this._rotateStandingPoints = new List<StandingPoint>();
      if (this.StandingPoints != null)
      {
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          if (standingPoint.GameEntity.HasTag("rotate"))
          {
            if (standingPoint.GameEntity.HasTag("left") && this._rotateStandingPoints.Count > 0)
              this._rotateStandingPoints.Insert(0, standingPoint);
            else
              this._rotateStandingPoints.Add(standingPoint);
          }
        }
        MatrixFrame globalFrame = this._body.GameEntity.GetGlobalFrame();
        this._standingPointLocalIKFrames = new MatrixFrame[this.StandingPoints.Count];
        for (int index = 0; index < this.StandingPoints.Count; ++index)
        {
          this._standingPointLocalIKFrames[index] = this.StandingPoints[index].GameEntity.GetGlobalFrame().TransformToLocal(globalFrame);
          this.StandingPoints[index].AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
        }
      }
      this._missileBoneIndex = Skeleton.GetBoneIndexFromName(this.Skeletons[0].GetName(), this._missileBoneName);
      this.ApplyAimChange();
      foreach (StandingPoint reloadStandingPoint in this.ReloadStandingPoints)
      {
        if (reloadStandingPoint != this.PilotStandingPoint)
          this._reloadWithoutPilot = reloadStandingPoint;
      }
      if (!GameNetwork.IsClientOrReplay)
        this.SetActivationLoadAmmoPoint(false);
      this.EnemyRangeToStopUsing = 9f;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    protected internal override void OnEditorInit()
    {
    }

    protected override bool CanRotate()
    {
      return this.State == RangedSiegeWeapon.WeaponState.Idle || this.State == RangedSiegeWeapon.WeaponState.LoadingAmmo || this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeIdle;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this.GameEntity.IsVisibleIncludeParents())
        return;
      if (!GameNetwork.IsClientOrReplay)
      {
        foreach (StandingPointWithWeaponRequirement pickUpStandingPoint in this.AmmoPickUpStandingPoints)
        {
          if (pickUpStandingPoint.HasUser)
          {
            Agent userAgent = pickUpStandingPoint.UserAgent;
            ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(1);
            if (!(currentActionValue == Mangonel.act_pickup_boulder_begin))
            {
              if (currentActionValue == Mangonel.act_pickup_boulder_end)
              {
                MissionWeapon weapon = new MissionWeapon(this.OriginalMissileItem, (ItemModifier) null, (Banner) null, (short) 1);
                userAgent.EquipWeaponToExtraSlotAndWield(ref weapon);
                userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
                this.ConsumeAmmo();
                if (userAgent.IsAIControlled)
                {
                  if (!this.LoadAmmoStandingPoint.HasUser && !this.LoadAmmoStandingPoint.IsDeactivated)
                    userAgent.AIMoveToGameObjectEnable((UsableMissionObject) this.LoadAmmoStandingPoint, (IDetachment) this, this.Ai.GetScriptedFrameFlags(userAgent));
                  else if (this.ReloaderAgentOriginalPoint != null && !this.ReloaderAgentOriginalPoint.HasUser && !this.ReloaderAgentOriginalPoint.HasAIMovingTo)
                  {
                    userAgent.AIMoveToGameObjectEnable((UsableMissionObject) this.ReloaderAgentOriginalPoint, (IDetachment) this, this.Ai.GetScriptedFrameFlags(userAgent));
                  }
                  else
                  {
                    this.ReloaderAgent?.Formation?.AttachUnit(this.ReloaderAgent);
                    this.ReloaderAgent = (Agent) null;
                  }
                }
              }
              else if (!userAgent.SetActionChannel(1, Mangonel.act_pickup_boulder_begin) && userAgent.Controller != Agent.ControllerType.AI)
                userAgent.StopUsingGameObject();
            }
          }
        }
      }
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          if (GameNetwork.IsClientOrReplay)
            break;
          if (this.LoadAmmoStandingPoint.HasUser)
          {
            Agent userAgent = this.LoadAmmoStandingPoint.UserAgent;
            if (userAgent.GetCurrentActionValue(1) == this._loadAmmoEndAnimationActionIndex)
            {
              EquipmentIndex wieldedItemIndex = userAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
              if (wieldedItemIndex != EquipmentIndex.None && userAgent.Equipment[wieldedItemIndex].CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
              {
                this.ChangeProjectileEntityServer(userAgent, userAgent.Equipment[wieldedItemIndex].Item.StringId);
                userAgent.RemoveEquippedWeapon(wieldedItemIndex);
                this._timeElapsedAfterLoading = 0.0f;
                this.Projectile.SetVisibleSynched(true);
                this.State = RangedSiegeWeapon.WeaponState.WaitingBeforeIdle;
                break;
              }
              userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
              if (userAgent.IsPlayerControlled)
                break;
              this.SendAgentToAmmoPickup(userAgent);
              break;
            }
            if (!(userAgent.GetCurrentActionValue(1) != this._loadAmmoBeginAnimationActionIndex) || userAgent.SetActionChannel(1, this._loadAmmoBeginAnimationActionIndex))
              break;
            for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
            {
              if (!userAgent.Equipment[equipmentIndex].IsEmpty && userAgent.Equipment[equipmentIndex].CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
                userAgent.RemoveEquippedWeapon(equipmentIndex);
            }
            userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
            if (userAgent.IsPlayerControlled)
              break;
            this.SendAgentToAmmoPickup(userAgent);
            break;
          }
          if (!this.LoadAmmoStandingPoint.HasAIMovingTo)
            break;
          Agent movingAgent = this.LoadAmmoStandingPoint.MovingAgent;
          EquipmentIndex wieldedItemIndex1 = movingAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
          if (wieldedItemIndex1 != EquipmentIndex.None && movingAgent.Equipment[wieldedItemIndex1].CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
            break;
          movingAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
          this.SendAgentToAmmoPickup(movingAgent);
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          this._timeElapsedAfterLoading += dt;
          if ((double) this._timeElapsedAfterLoading <= 1.0)
            break;
          this.State = RangedSiegeWeapon.WeaponState.Idle;
          break;
      }
    }

    protected internal override void OnTickParallel(float dt)
    {
      base.OnTickParallel(dt);
      if (!this.GameEntity.IsVisibleIncludeParents())
        return;
      if (this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving)
        this.UpdateProjectilePosition();
      if ((NativeObject) this._verticalAdjusterSkeleton != (NativeObject) null)
        this._verticalAdjusterSkeleton.SetAnimationParameterAtChannel(0, MBMath.ClampFloat((float) (((double) this.currentReleaseAngle - (double) this.BottomReleaseAngleRestriction) / ((double) this.TopReleaseAngleRestriction - (double) this.BottomReleaseAngleRestriction)), 0.0f, 1f));
      MatrixFrame parent = this.Skeletons[0].GetBoneEntitialFrameWithIndex((sbyte) 0).TransformToParent(this._verticalAdjusterStartingLocalFrame);
      this._verticalAdjuster.SetFrame(ref parent);
      MatrixFrame boundEntityGlobalFrame = this._body.GameEntity.GetGlobalFrame();
      for (int index = 0; index < this.StandingPoints.Count; ++index)
      {
        if (this.StandingPoints[index].HasUser)
        {
          if (this.StandingPoints[index].UserAgent.IsInBeingStruckAction)
            this.StandingPoints[index].UserAgent.ClearHandInverseKinematics();
          else if (this.StandingPoints[index] != this.PilotStandingPoint)
          {
            if (this.StandingPoints[index].UserAgent.GetCurrentActionValue(1) != this._reload2IdleActionIndex)
              this.StandingPoints[index].UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._standingPointLocalIKFrames[index], in boundEntityGlobalFrame);
            else
              this.StandingPoints[index].UserAgent.ClearHandInverseKinematics();
          }
          else
            this.StandingPoints[index].UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._standingPointLocalIKFrames[index], in boundEntityGlobalFrame);
        }
      }
      if (!GameNetwork.IsClientOrReplay)
      {
        for (int index = 0; index < this._rotateStandingPoints.Count; ++index)
        {
          StandingPoint rotateStandingPoint = this._rotateStandingPoints[index];
          if (rotateStandingPoint.HasUser && !rotateStandingPoint.UserAgent.SetActionChannel(1, index == 0 ? this._rotateLeftAnimationActionIndex : this._rotateRightAnimationActionIndex) && rotateStandingPoint.UserAgent.Controller != Agent.ControllerType.AI)
            rotateStandingPoint.UserAgent.StopUsingGameObjectMT();
        }
        if (this.PilotAgent != null)
        {
          ActionIndexValueCache currentActionValue = this.PilotAgent.GetCurrentActionValue(1);
          if (this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving)
          {
            if (this.PilotAgent.IsInBeingStruckAction)
            {
              if (currentActionValue != ActionIndexValueCache.act_none && currentActionValue != Mangonel.act_strike_bent_over)
                this.PilotAgent.SetActionChannel(1, Mangonel.act_strike_bent_over);
            }
            else if (!this.PilotAgent.SetActionChannel(1, this._shootAnimationActionIndex) && this.PilotAgent.Controller != Agent.ControllerType.AI)
              this.PilotAgent.StopUsingGameObjectMT();
          }
          else if (!this.PilotAgent.SetActionChannel(1, this._idleAnimationActionIndex) && currentActionValue != this._reload1AnimationActionIndex && currentActionValue != this._shootAnimationActionIndex && this.PilotAgent.Controller != Agent.ControllerType.AI)
            this.PilotAgent.StopUsingGameObjectMT();
        }
        if (this._reloadWithoutPilot.HasUser)
        {
          Agent userAgent = this._reloadWithoutPilot.UserAgent;
          if (!userAgent.SetActionChannel(1, this._reload2IdleActionIndex) && userAgent.GetCurrentActionValue(1) != this._reload2AnimationActionIndex && userAgent.Controller != Agent.ControllerType.AI)
            userAgent.StopUsingGameObjectMT();
        }
      }
      if (this.State != RangedSiegeWeapon.WeaponState.Reloading)
        return;
      foreach (StandingPoint reloadStandingPoint in this.ReloadStandingPoints)
      {
        if (reloadStandingPoint.HasUser)
        {
          ActionIndexValueCache currentActionValue = reloadStandingPoint.UserAgent.GetCurrentActionValue(1);
          if (currentActionValue == this._reload1AnimationActionIndex || currentActionValue == this._reload2AnimationActionIndex)
            reloadStandingPoint.UserAgent.SetCurrentActionProgress(1, this._bodySkeleton.GetAnimationParameterAtChannel(0));
          else if (!GameNetwork.IsClientOrReplay)
          {
            ActionIndexCache actionIndexCache = reloadStandingPoint == this.PilotStandingPoint ? this._reload1AnimationActionIndex : this._reload2AnimationActionIndex;
            if (!reloadStandingPoint.UserAgent.SetActionChannel(1, actionIndexCache, startProgress: this._bodySkeleton.GetAnimationParameterAtChannel(0)) && reloadStandingPoint.UserAgent.Controller != Agent.ControllerType.AI)
              reloadStandingPoint.UserAgent.StopUsingGameObjectMT();
          }
        }
      }
    }

    protected override void SetActivationLoadAmmoPoint(bool activate)
    {
      this.LoadAmmoStandingPoint.SetIsDeactivatedSynched(!activate);
    }

    protected override void UpdateProjectilePosition()
    {
      MatrixFrame entitialFrameWithIndex = this.Skeletons[0].GetBoneEntitialFrameWithIndex(this._missileBoneIndex);
      this.Projectile.GameEntity.SetFrame(ref entitialFrameWithIndex);
    }

    protected override void OnRangedSiegeWeaponStateChange()
    {
      base.OnRangedSiegeWeaponStateChange();
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
          if (!GameNetwork.IsClientOrReplay)
          {
            this.Projectile.SetVisibleSynched(true);
            break;
          }
          this.Projectile.GameEntity.SetVisibilityExcludeParents(true);
          break;
        case RangedSiegeWeapon.WeaponState.Shooting:
          if (!GameNetwork.IsClientOrReplay)
          {
            this.Projectile.SetVisibleSynched(false);
            break;
          }
          this.Projectile.GameEntity.SetVisibilityExcludeParents(false);
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          this.UpdateProjectilePosition();
          break;
      }
    }

    protected override void GetSoundEventIndices()
    {
      this.MoveSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/mangonel/move");
      this.ReloadSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/mangonel/reload");
      this.ReloadEndSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/mangonel/reload_end");
    }

    protected override float HorizontalAimSensitivity
    {
      get
      {
        if (this._defaultSide == BattleSideEnum.Defender)
          return 0.25f;
        float horizontalAimSensitivity = 0.05f;
        foreach (StandingPoint rotateStandingPoint in this._rotateStandingPoints)
        {
          if (rotateStandingPoint.HasUser && !rotateStandingPoint.UserAgent.IsInBeingStruckAction)
            horizontalAimSensitivity += 0.1f;
        }
        return horizontalAimSensitivity;
      }
    }

    protected override float VerticalAimSensitivity => 0.1f;

    protected override Vec3 ShootingDirection
    {
      get
      {
        Mat3 rotation = this._body.GameEntity.GetGlobalFrame().rotation;
        rotation.RotateAboutSide(-this.currentReleaseAngle);
        return rotation.TransformToParent(new Vec3(y: -1f));
      }
    }

    protected override bool HasAmmo
    {
      get
      {
        return base.HasAmmo || this.CurrentlyUsedAmmoPickUpPoint != null || this.LoadAmmoStandingPoint.HasUser || this.LoadAmmoStandingPoint.HasAIMovingTo;
      }
      set => base.HasAmmo = value;
    }

    protected override void ApplyAimChange()
    {
      base.ApplyAimChange();
      double num = (double) this.ShootingDirection.Normalize();
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return !gameEntity.HasTag(this.AmmoPickUpTag) ? new TextObject("{=NbpcDXtJ}Mangonel").ToString() : new TextObject("{=pzfbPbWW}Boulder").ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = !usableGameObject.GameEntity.HasTag("reload") ? (!usableGameObject.GameEntity.HasTag("rotate") ? (!usableGameObject.GameEntity.HasTag(this.AmmoPickUpTag) ? (!usableGameObject.GameEntity.HasTag("ammoload") ? new TextObject("{=fEQAPJ2e}{KEY} Use") : new TextObject("{=ibC4xPoo}{KEY} Load Ammo")) : new TextObject("{=bNYm3K6b}{KEY} Pick Up")) : new TextObject("{=5wx4BF5h}{KEY} Rotate")) : new TextObject(this.PilotStandingPoint == usableGameObject ? "{=fEQAPJ2e}{KEY} Use" : "{=Na81xuXn}{KEY} Rearm");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags = (TargetFlags) (0 | 2 | 8);
      if (this.Side == BattleSideEnum.Attacker)
        targetFlags |= TargetFlags.IsAttacker;
      if (this.IsDestroyed || this.IsDeactivated)
        targetFlags |= TargetFlags.NotAThreat;
      if (this.Side == BattleSideEnum.Attacker && DebugSiegeBehavior.DebugDefendState == DebugSiegeBehavior.DebugStateDefender.DebugDefendersToMangonels)
        targetFlags |= TargetFlags.DebugThreat;
      if (this.Side == BattleSideEnum.Defender && DebugSiegeBehavior.DebugAttackState == DebugSiegeBehavior.DebugStateAttacker.DebugAttackersToMangonels)
        targetFlags |= TargetFlags.DebugThreat;
      return targetFlags;
    }

    public override float GetTargetValue(List<Vec3> weaponPos)
    {
      return 40f * this.GetUserMultiplierOfWeapon() * this.GetDistanceMultiplierOfWeapon(weaponPos[0]) * this.GetHitPointMultiplierOfWeapon();
    }

    public override float ProcessTargetValue(float baseValue, TargetFlags flags)
    {
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.NotAThreat))
        return -1000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeEngine))
        baseValue *= 10000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsStructure))
        baseValue *= 2.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSmall))
        baseValue *= 8f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsMoving))
        baseValue *= 8f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.DebugThreat))
        baseValue *= 10000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeTower))
        baseValue *= 8f;
      return baseValue;
    }

    protected override float GetDetachmentWeightAux(BattleSideEnum side)
    {
      return this.GetDetachmentWeightAuxForExternalAmmoWeapons(side);
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;
  }
}
