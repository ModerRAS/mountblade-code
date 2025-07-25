// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Trebuchet
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Objects.Siege;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Trebuchet : RangedSiegeWeapon, ISpawnable
  {
    private static readonly ActionIndexCache act_usage_trebuchet_idle = ActionIndexCache.Create(nameof (act_usage_trebuchet_idle));
    public const float TrebuchetDirectionRestriction = 1.39626348f;
    private static readonly ActionIndexCache act_usage_trebuchet_reload = ActionIndexCache.Create(nameof (act_usage_trebuchet_reload));
    private static readonly ActionIndexCache act_usage_trebuchet_reload_2 = ActionIndexCache.Create(nameof (act_usage_trebuchet_reload_2));
    private static readonly ActionIndexCache act_usage_trebuchet_reload_idle = ActionIndexCache.Create(nameof (act_usage_trebuchet_reload_idle));
    private static readonly ActionIndexCache act_usage_trebuchet_reload_2_idle = ActionIndexCache.Create(nameof (act_usage_trebuchet_reload_2_idle));
    private static readonly ActionIndexCache act_usage_trebuchet_load_ammo = ActionIndexCache.Create(nameof (act_usage_trebuchet_load_ammo));
    private static readonly ActionIndexCache act_usage_trebuchet_shoot = ActionIndexCache.Create(nameof (act_usage_trebuchet_shoot));
    private static readonly ActionIndexCache act_strike_bent_over = ActionIndexCache.Create(nameof (act_strike_bent_over));
    private static readonly ActionIndexCache act_pickup_boulder_begin = ActionIndexCache.Create(nameof (act_pickup_boulder_begin));
    private static readonly ActionIndexCache act_pickup_boulder_end = ActionIndexCache.Create(nameof (act_pickup_boulder_end));
    private const string BodyTag = "body";
    private const string SlideTag = "slide";
    private const string SlingTag = "sling";
    private const string RopeTag = "rope";
    private const string RotateTag = "rotate";
    private const string VerticalAdjusterTag = "vertical_adjuster";
    private const string MissileBoneName = "bn_projectile_holder";
    private const string LeftTag = "left";
    private const string _rotateObjectTag = "rotate_entity";
    public float ProjectileSpeed = 45f;
    public string AIAmmoLoadTag = "ammoload_ai";
    private SynchedMissionObject _body;
    private SynchedMissionObject _sling;
    private SynchedMissionObject _rope;
    public string IdleWithAmmoAnimation;
    public string IdleEmptyAnimation;
    public string BodyFireAnimation;
    public string BodySetUpAnimation;
    public string SlingFireAnimation;
    public string SlingSetUpAnimation;
    public string RopeFireAnimation;
    public string RopeSetUpAnimation;
    public string VerticalAdjusterAnimation;
    public float TimeGapBetweenShootActionAndProjectileLeaving = 1.6f;
    private GameEntity _verticalAdjuster;
    private Skeleton _verticalAdjusterSkeleton;
    private MatrixFrame _verticalAdjusterStartingLocalFrame;
    private float _timeElapsedAfterLoading;
    private bool _shootAnimPlayed;
    private MatrixFrame[] _standingPointLocalIKFrames;
    private List<StandingPointWithWeaponRequirement> _ammoLoadPoints;
    private sbyte _missileBoneIndex;

    public override float DirectionRestriction => 1.39626348f;

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = !usableGameObject.GameEntity.HasTag(this.AmmoPickUpTag) ? (!usableGameObject.GameEntity.HasTag("reload") ? (!usableGameObject.GameEntity.HasTag("rotate") ? (!usableGameObject.GameEntity.HasTag("ammoload") ? TextObject.Empty : new TextObject("{=ibC4xPoo}{KEY} Load Ammo")) : new TextObject("{=5wx4BF5h}{KEY} Rotate")) : new TextObject(this.PilotStandingPoint == usableGameObject ? "{=fEQAPJ2e}{KEY} Use" : "{=Na81xuXn}{KEY} Rearm")) : new TextObject("{=bNYm3K6b}{KEY} Pick Up");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return !gameEntity.HasTag(this.AmmoPickUpTag) ? new TextObject("{=4Skg9QhO}Trebuchet").ToString() : new TextObject("{=pzfbPbWW}Boulder").ToString();
    }

    protected override void RegisterAnimationParameters()
    {
      this.SkeletonOwnerObjects = new SynchedMissionObject[3];
      this.Skeletons = new Skeleton[3];
      this.SkeletonNames = new string[3];
      this.FireAnimations = new string[3];
      this.FireAnimationIndices = new int[3];
      this.SetUpAnimations = new string[3];
      this.SetUpAnimationIndices = new int[3];
      this.SkeletonOwnerObjects[0] = this._body;
      this.Skeletons[0] = this._body.GameEntity.Skeleton;
      this.SkeletonNames[0] = "trebuchet_a_skeleton";
      this.FireAnimations[0] = this.BodyFireAnimation;
      this.FireAnimationIndices[0] = MBAnimation.GetAnimationIndexWithName(this.BodyFireAnimation);
      this.SetUpAnimations[0] = this.BodySetUpAnimation;
      this.SetUpAnimationIndices[0] = MBAnimation.GetAnimationIndexWithName(this.BodySetUpAnimation);
      this.SkeletonOwnerObjects[1] = this._sling;
      this.Skeletons[1] = this._sling.GameEntity.Skeleton;
      this.SkeletonNames[1] = "trebuchet_a_sling_skeleton";
      this.FireAnimations[1] = this.SlingFireAnimation;
      this.FireAnimationIndices[1] = MBAnimation.GetAnimationIndexWithName(this.SlingFireAnimation);
      this.SetUpAnimations[1] = this.SlingSetUpAnimation;
      this.SetUpAnimationIndices[1] = MBAnimation.GetAnimationIndexWithName(this.SlingSetUpAnimation);
      this.SkeletonOwnerObjects[2] = this._rope;
      this.Skeletons[2] = this._rope.GameEntity.Skeleton;
      this.SkeletonNames[2] = "trebuchet_a_rope_skeleton";
      this.FireAnimations[2] = this.RopeFireAnimation;
      this.FireAnimationIndices[2] = MBAnimation.GetAnimationIndexWithName(this.RopeFireAnimation);
      this.SetUpAnimations[2] = this.RopeSetUpAnimation;
      this.SetUpAnimationIndices[2] = MBAnimation.GetAnimationIndexWithName(this.RopeSetUpAnimation);
    }

    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.Trebuchet;

    protected override void GetSoundEventIndices()
    {
      this.MoveSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/trebuchet/move");
      this.ReloadSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/trebuchet/reload");
      this.ReloadEndSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/trebuchet/reload_end");
    }

    protected override float ShootingSpeed => this.ProjectileSpeed;

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new TrebuchetAI(this);
    }

    protected internal override void OnInit()
    {
      this._body = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("body")[0];
      this._sling = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("sling")[0];
      this._rope = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("rope")[0];
      this._verticalAdjuster = this.GameEntity.CollectChildrenEntitiesWithTag("vertical_adjuster")[0];
      this._verticalAdjusterSkeleton = this._verticalAdjuster.Skeleton;
      this._verticalAdjusterSkeleton.SetAnimationAtChannel(this.VerticalAdjusterAnimation, 0);
      this._verticalAdjusterStartingLocalFrame = this._verticalAdjuster.GetFrame();
      this._verticalAdjusterStartingLocalFrame = this._body.GameEntity.GetBoneEntitialFrameWithIndex((sbyte) 0).TransformToLocal(this._verticalAdjusterStartingLocalFrame);
      this.RotationObject = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("rotate_entity")[0];
      base.OnInit();
      this.timeGapBetweenShootActionAndProjectileLeaving = this.TimeGapBetweenShootActionAndProjectileLeaving;
      this.timeGapBetweenShootingEndAndReloadingStart = 0.0f;
      this._ammoLoadPoints = new List<StandingPointWithWeaponRequirement>();
      if (this.StandingPoints != null)
      {
        for (int index = 0; index < this.StandingPoints.Count; ++index)
        {
          if (this.StandingPoints[index].GameEntity.HasTag("ammoload"))
            this._ammoLoadPoints.Add(this.StandingPoints[index] as StandingPointWithWeaponRequirement);
        }
        MatrixFrame globalFrame = this._body.GameEntity.GetGlobalFrame();
        this._standingPointLocalIKFrames = new MatrixFrame[this.StandingPoints.Count];
        for (int index = 0; index < this.StandingPoints.Count; ++index)
        {
          this._standingPointLocalIKFrames[index] = this.StandingPoints[index].GameEntity.GetGlobalFrame().TransformToLocal(globalFrame);
          this.StandingPoints[index].AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
        }
      }
      this.ApplyAimChange();
      if (!GameNetwork.IsClientOrReplay)
      {
        this.SetActivationLoadAmmoPoint(false);
        this.EnemyRangeToStopUsing = 11f;
        this.MachinePositionOffsetToStopUsingLocal = new Vec2(0.0f, 2.8f);
        this._sling.SetAnimationAtChannelSynched(this.State == RangedSiegeWeapon.WeaponState.Idle ? this.IdleWithAmmoAnimation : this.IdleEmptyAnimation, 0);
      }
      this._missileBoneIndex = Skeleton.GetBoneIndexFromName(this._sling.GameEntity.Skeleton.GetName(), "bn_projectile_holder");
      this._shootAnimPlayed = false;
      this.UpdateAmmoMesh();
      this.SetScriptComponentToTick(this.GetTickRequirement());
      this.UpdateProjectilePosition();
    }

    public override void AfterMissionStart()
    {
      if (this.AmmoPickUpStandingPoints != null)
      {
        foreach (UsableMissionObject pickUpStandingPoint in this.AmmoPickUpStandingPoints)
          pickUpStandingPoint.LockUserFrames = true;
      }
      if (this._ammoLoadPoints == null)
        return;
      foreach (UsableMissionObject ammoLoadPoint in this._ammoLoadPoints)
        ammoLoadPoint.LockUserFrames = true;
    }

    protected override void OnRangedSiegeWeaponStateChange()
    {
      base.OnRangedSiegeWeaponStateChange();
      if (this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeIdle)
        this.UpdateProjectilePosition();
      if (GameNetwork.IsClientOrReplay)
        return;
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
          this.Projectile.SetVisibleSynched(true);
          break;
        case RangedSiegeWeapon.WeaponState.Shooting:
          this.Projectile.SetVisibleSynched(false);
          break;
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          this._sling.SetAnimationAtChannelSynched(this.IdleEmptyAnimation, 0);
          break;
        case RangedSiegeWeapon.WeaponState.Reloading:
          this._shootAnimPlayed = false;
          break;
      }
    }

    protected override float HorizontalAimSensitivity => 0.1f;

    protected override float VerticalAimSensitivity => 0.075f;

    protected override Vec3 ShootingDirection
    {
      get
      {
        Mat3 rotation = this.RotationObject.GameEntity.GetGlobalFrame().rotation;
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

    public override float ProcessTargetValue(float baseValue, TargetFlags flags)
    {
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.NotAThreat))
        return -1000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.None))
        baseValue *= 1.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeEngine))
        baseValue *= 2.5f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsStructure))
        baseValue *= 0.1f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.DebugThreat))
        baseValue *= 10000f;
      return baseValue;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags = (TargetFlags) (0 | 2 | 8 | 16);
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
            if (!(currentActionValue == Trebuchet.act_pickup_boulder_begin))
            {
              if (currentActionValue == Trebuchet.act_pickup_boulder_end)
              {
                MissionWeapon weapon = new MissionWeapon(this.OriginalMissileItem, (ItemModifier) null, (Banner) null);
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
              else if (!userAgent.SetActionChannel(1, Trebuchet.act_pickup_boulder_begin) && userAgent.Controller != Agent.ControllerType.AI)
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
          bool flag = false;
          using (List<StandingPointWithWeaponRequirement>.Enumerator enumerator = this._ammoLoadPoints.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              StandingPointWithWeaponRequirement current = enumerator.Current;
              MissionWeapon missionWeapon;
              if (flag)
              {
                if (current.IsDeactivated)
                {
                  if ((current.HasUser || current.HasAIMovingTo) && (current.UserAgent == this.ReloaderAgent || current.MovingAgent == this.ReloaderAgent))
                    this.SendReloaderAgentToOriginalPoint();
                  current.SetIsDeactivatedSynched(true);
                }
              }
              else if (current.HasUser)
              {
                flag = true;
                Agent userAgent = current.UserAgent;
                ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(1);
                if (currentActionValue == Trebuchet.act_usage_trebuchet_load_ammo && (double) userAgent.GetCurrentActionProgress(1) > 0.56000000238418579)
                {
                  EquipmentIndex wieldedItemIndex = userAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
                  if (wieldedItemIndex != EquipmentIndex.None)
                  {
                    missionWeapon = userAgent.Equipment[wieldedItemIndex];
                    if (missionWeapon.CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
                    {
                      Agent loadingAgent = userAgent;
                      missionWeapon = userAgent.Equipment[wieldedItemIndex];
                      string stringId = missionWeapon.Item.StringId;
                      this.ChangeProjectileEntityServer(loadingAgent, stringId);
                      userAgent.RemoveEquippedWeapon(wieldedItemIndex);
                      this._timeElapsedAfterLoading = 0.0f;
                      this.Projectile.SetVisibleSynched(true);
                      this._sling.SetAnimationAtChannelSynched(this.IdleWithAmmoAnimation, 0);
                      this.State = RangedSiegeWeapon.WeaponState.WaitingBeforeIdle;
                      continue;
                    }
                  }
                  userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
                  if (!userAgent.IsPlayerControlled)
                    this.SendAgentToAmmoPickup(userAgent);
                }
                else if (currentActionValue != Trebuchet.act_usage_trebuchet_load_ammo && !userAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_load_ammo))
                {
                  for (EquipmentIndex equipmentIndex = EquipmentIndex.WeaponItemBeginSlot; equipmentIndex < EquipmentIndex.NumAllWeaponSlots; ++equipmentIndex)
                  {
                    missionWeapon = userAgent.Equipment[equipmentIndex];
                    if (!missionWeapon.IsEmpty)
                    {
                      missionWeapon = userAgent.Equipment[equipmentIndex];
                      if (missionWeapon.CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
                        userAgent.RemoveEquippedWeapon(equipmentIndex);
                    }
                  }
                  userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
                  if (!userAgent.IsPlayerControlled)
                    this.SendAgentToAmmoPickup(userAgent);
                }
              }
              else if (current.HasAIMovingTo)
              {
                Agent movingAgent = current.MovingAgent;
                EquipmentIndex wieldedItemIndex = movingAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
                if (wieldedItemIndex != EquipmentIndex.None)
                {
                  missionWeapon = movingAgent.Equipment[wieldedItemIndex];
                  if (missionWeapon.CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
                    continue;
                }
                movingAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
                this.SendAgentToAmmoPickup(movingAgent);
              }
            }
            break;
          }
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
      this._verticalAdjusterSkeleton.SetAnimationParameterAtChannel(0, MBMath.ClampFloat((float) (((double) this.currentReleaseAngle - (double) this.BottomReleaseAngleRestriction) / ((double) this.TopReleaseAngleRestriction - (double) this.BottomReleaseAngleRestriction)), 0.0f, 1f));
      MatrixFrame parent = this._body.GameEntity.GetBoneEntitialFrameWithIndex((sbyte) 0).TransformToParent(this._verticalAdjusterStartingLocalFrame);
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
            if (this.StandingPoints[index].UserAgent.GetCurrentActionValue(1) == Trebuchet.act_usage_trebuchet_reload_2)
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
        if (this.PilotAgent != null)
        {
          ActionIndexValueCache currentActionValue = this.PilotAgent.GetCurrentActionValue(1);
          if (this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving || this.State == RangedSiegeWeapon.WeaponState.Shooting || this.State == RangedSiegeWeapon.WeaponState.WaitingBeforeReloading)
          {
            if (!this._shootAnimPlayed && currentActionValue != Trebuchet.act_usage_trebuchet_shoot)
              this._shootAnimPlayed = this.PilotAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_shoot);
            else if (currentActionValue != Trebuchet.act_usage_trebuchet_shoot && !this.PilotAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_reload_idle) && this.PilotAgent.Controller != Agent.ControllerType.AI)
              this.PilotAgent.StopUsingGameObjectMT();
          }
          else if (currentActionValue != Trebuchet.act_usage_trebuchet_reload && currentActionValue != Trebuchet.act_usage_trebuchet_shoot && !this.PilotAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_idle) && this.PilotAgent.Controller != Agent.ControllerType.AI)
            this.PilotAgent.StopUsingGameObjectMT();
        }
        if (this.State != RangedSiegeWeapon.WeaponState.Reloading)
        {
          foreach (StandingPoint reloadStandingPoint in this.ReloadStandingPoints)
          {
            if (reloadStandingPoint.HasUser && reloadStandingPoint != this.PilotStandingPoint)
            {
              Agent userAgent = reloadStandingPoint.UserAgent;
              if (!userAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_reload_2_idle) && userAgent.Controller != Agent.ControllerType.AI)
                userAgent.StopUsingGameObjectMT();
            }
          }
        }
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          if (standingPoint.HasUser && this.ReloadStandingPoints.IndexOf(standingPoint) < 0 && (!(standingPoint is StandingPointWithWeaponRequirement) || this._ammoLoadPoints.IndexOf((StandingPointWithWeaponRequirement) standingPoint) < 0 && this.AmmoPickUpStandingPoints.IndexOf((StandingPointWithWeaponRequirement) standingPoint) < 0))
          {
            Agent userAgent = standingPoint.UserAgent;
            if (!userAgent.SetActionChannel(1, Trebuchet.act_usage_trebuchet_reload_2_idle) && userAgent.Controller != Agent.ControllerType.AI)
              userAgent.StopUsingGameObjectMT();
          }
        }
      }
      if (this.State != RangedSiegeWeapon.WeaponState.Reloading)
        return;
      for (int index = 0; index < this.ReloadStandingPoints.Count; ++index)
      {
        if (this.ReloadStandingPoints[index].HasUser)
        {
          Agent userAgent = this.ReloadStandingPoints[index].UserAgent;
          ActionIndexValueCache currentActionValue = userAgent.GetCurrentActionValue(1);
          if (currentActionValue == Trebuchet.act_usage_trebuchet_reload || currentActionValue == Trebuchet.act_usage_trebuchet_reload_2)
            userAgent.SetCurrentActionProgress(1, this.Skeletons[0].GetAnimationParameterAtChannel(0));
          else if (!GameNetwork.IsClientOrReplay)
          {
            ActionIndexCache actionIndexCache = Trebuchet.act_usage_trebuchet_reload;
            if (this.ReloadStandingPoints[index].GameEntity.HasTag("right"))
              actionIndexCache = Trebuchet.act_usage_trebuchet_reload_2;
            if (!userAgent.SetActionChannel(1, actionIndexCache, startProgress: this.Skeletons[0].GetAnimationParameterAtChannel(0)) && userAgent.Controller != Agent.ControllerType.AI)
              userAgent.StopUsingGameObjectMT();
          }
        }
      }
    }

    protected override void SetActivationLoadAmmoPoint(bool activate)
    {
      foreach (UsableMissionObject ammoLoadPoint in this._ammoLoadPoints)
        ammoLoadPoint.SetIsDeactivatedSynched(!activate);
    }

    protected override void UpdateProjectilePosition()
    {
      MatrixFrame entitialFrameWithIndex = this._sling.GameEntity.GetBoneEntitialFrameWithIndex(this._missileBoneIndex);
      this.Projectile.GameEntity.SetFrame(ref entitialFrameWithIndex);
    }

    protected internal override bool IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(
      StandingPoint standingPoint)
    {
      return ((IEnumerable<StandingPoint>) this._ammoLoadPoints).Contains<StandingPoint>(standingPoint) && this.LoadAmmoStandingPoint != standingPoint || base.IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(standingPoint);
    }

    protected override float GetDetachmentWeightAux(BattleSideEnum side)
    {
      return this.GetDetachmentWeightAuxForExternalAmmoWeapons(side);
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;
  }
}
