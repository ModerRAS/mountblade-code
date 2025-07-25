// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Ballista
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
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
  public class Ballista : RangedSiegeWeapon, ISpawnable
  {
    private static readonly ActionIndexCache act_usage_ballista_ammo_pick_up_end = ActionIndexCache.Create(nameof (act_usage_ballista_ammo_pick_up_end));
    private static readonly ActionIndexCache act_usage_ballista_ammo_pick_up_start = ActionIndexCache.Create(nameof (act_usage_ballista_ammo_pick_up_start));
    private static readonly ActionIndexCache act_usage_ballista_ammo_place_end = ActionIndexCache.Create(nameof (act_usage_ballista_ammo_place_end));
    private static readonly ActionIndexCache act_usage_ballista_ammo_place_start = ActionIndexCache.Create(nameof (act_usage_ballista_ammo_place_start));
    private static readonly ActionIndexCache act_usage_ballista_idle = ActionIndexCache.Create(nameof (act_usage_ballista_idle));
    private static readonly ActionIndexCache act_usage_ballista_reload = ActionIndexCache.Create(nameof (act_usage_ballista_reload));
    private static readonly ActionIndexCache act_strike_bent_over = ActionIndexCache.Create(nameof (act_strike_bent_over));
    public string NavelTag = "BallistaNavel";
    public string BodyTag = "BallistaBody";
    public float AnimationHeightDifference;
    private MatrixFrame _ballistaBodyInitialLocalFrame;
    private MatrixFrame _ballistaNavelInitialFrame;
    private MatrixFrame _pilotInitialLocalFrame;
    private MatrixFrame _pilotInitialLocalIKFrame;
    private MatrixFrame _missileInitialLocalFrame;
    [EditableScriptComponentVariable(true)]
    protected string IdleActionName = "act_usage_ballista_idle_attacker";
    [EditableScriptComponentVariable(true)]
    protected string ReloadActionName = "act_usage_ballista_reload_attacker";
    [EditableScriptComponentVariable(true)]
    protected string PlaceAmmoStartActionName = "act_usage_ballista_ammo_place_start_attacker";
    [EditableScriptComponentVariable(true)]
    protected string PlaceAmmoEndActionName = "act_usage_ballista_ammo_place_end_attacker";
    [EditableScriptComponentVariable(true)]
    protected string PickUpAmmoStartActionName = "act_usage_ballista_ammo_pick_up_start_attacker";
    [EditableScriptComponentVariable(true)]
    protected string PickUpAmmoEndActionName = "act_usage_ballista_ammo_pick_up_end_attacker";
    private ActionIndexCache _idleAnimationActionIndex;
    private ActionIndexCache _reloadAnimationActionIndex;
    private ActionIndexCache _placeAmmoStartAnimationActionIndex;
    private ActionIndexCache _placeAmmoEndAnimationActionIndex;
    private ActionIndexCache _pickUpAmmoStartAnimationActionIndex;
    private ActionIndexCache _pickUpAmmoEndAnimationActionIndex;
    private float _verticalOffsetAngle;
    [EditableScriptComponentVariable(false)]
    public float HorizontalDirectionRestriction = 1.57079637f;
    public float BallistaShootingSpeed = 120f;
    private RangedSiegeWeapon.WeaponState _changeToState = RangedSiegeWeapon.WeaponState.Invalid;

    protected SynchedMissionObject ballistaBody { get; private set; }

    protected SynchedMissionObject ballistaNavel { get; private set; }

    public override float DirectionRestriction => this.HorizontalDirectionRestriction;

    protected override float ShootingSpeed => this.BallistaShootingSpeed;

    public override Vec3 CanShootAtPointCheckingOffset => new Vec3(z: 0.5f);

    protected override void RegisterAnimationParameters()
    {
      this.SkeletonOwnerObjects = new SynchedMissionObject[1];
      this.Skeletons = new Skeleton[1];
      this.SkeletonOwnerObjects[0] = this.ballistaBody;
      this.Skeletons[0] = this.ballistaBody.GameEntity.Skeleton;
      this.SkeletonName = "ballista_skeleton";
      this.FireAnimation = "ballista_fire";
      this.FireAnimationIndex = MBAnimation.GetAnimationIndexWithName("ballista_fire");
      this.SetUpAnimation = "ballista_set_up";
      this.SetUpAnimationIndex = MBAnimation.GetAnimationIndexWithName("ballista_set_up");
      this._idleAnimationActionIndex = ActionIndexCache.Create(this.IdleActionName);
      this._reloadAnimationActionIndex = ActionIndexCache.Create(this.ReloadActionName);
      this._placeAmmoStartAnimationActionIndex = ActionIndexCache.Create(this.PlaceAmmoStartActionName);
      this._placeAmmoEndAnimationActionIndex = ActionIndexCache.Create(this.PlaceAmmoEndActionName);
      this._pickUpAmmoStartAnimationActionIndex = ActionIndexCache.Create(this.PickUpAmmoStartActionName);
      this._pickUpAmmoEndAnimationActionIndex = ActionIndexCache.Create(this.PickUpAmmoEndActionName);
    }

    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.Ballista;

    protected internal override void OnInit()
    {
      this.ballistaBody = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>(this.BodyTag)[0];
      this.ballistaNavel = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>(this.NavelTag)[0];
      this.RotationObject = (SynchedMissionObject) this;
      base.OnInit();
      this.UsesMouseForAiming = true;
      this.GetSoundEventIndices();
      this._ballistaNavelInitialFrame = this.ballistaNavel.GameEntity.GetFrame();
      MatrixFrame globalFrame1 = this.ballistaBody.GameEntity.GetGlobalFrame();
      this._ballistaBodyInitialLocalFrame = this.ballistaBody.GameEntity.GetFrame();
      MatrixFrame globalFrame2 = this.PilotStandingPoint.GameEntity.GetGlobalFrame();
      this._pilotInitialLocalFrame = this.PilotStandingPoint.GameEntity.GetFrame();
      this._pilotInitialLocalIKFrame = globalFrame2.TransformToLocal(globalFrame1);
      this._missileInitialLocalFrame = this.Projectile.GameEntity.GetFrame();
      this.PilotStandingPoint.AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
      this.MissileStartingPositionEntityForSimulation = this.Projectile.GameEntity.Parent.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == "projectile_leaving_position"));
      this.EnemyRangeToStopUsing = 7f;
      this.AttackClickWillReload = true;
      this.WeaponNeedsClickToReload = true;
      this.SetScriptComponentToTick(this.GetTickRequirement());
      Vec3 shootingDirection = this.ShootingDirection;
      this._verticalOffsetAngle = Vec3.AngleBetweenTwoVectors(new Vec3(y: shootingDirection.AsVec2.Length, z: shootingDirection.z), Vec3.Forward);
      this.ApplyAimChange();
    }

    protected override bool CanRotate() => this.State != RangedSiegeWeapon.WeaponState.Shooting;

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new BallistaAI(this);
    }

    protected override void OnRangedSiegeWeaponStateChange()
    {
      base.OnRangedSiegeWeaponStateChange();
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
          if (this.AmmoCount <= 0)
            break;
          if (!GameNetwork.IsClientOrReplay)
          {
            this.ConsumeAmmo();
            break;
          }
          this.SetAmmo(this.AmmoCount - 1);
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving:
          if (!GameNetwork.IsClientOrReplay)
          {
            this.Projectile.SetVisibleSynched(false);
            break;
          }
          this.Projectile.GameEntity.SetVisibilityExcludeParents(false);
          break;
      }
    }

    protected override float MaximumBallisticError => 0.5f;

    protected override float HorizontalAimSensitivity => 1f;

    protected override float VerticalAimSensitivity => 1f;

    protected override void HandleUserAiming(float dt)
    {
      if (this.PilotAgent == null)
        this.targetReleaseAngle = 0.0f;
      base.HandleUserAiming(dt);
    }

    protected override void ApplyAimChange()
    {
      MatrixFrame navelInitialFrame = this._ballistaNavelInitialFrame;
      navelInitialFrame.rotation.RotateAboutUp(this.currentDirection);
      this.ballistaNavel.GameEntity.SetFrame(ref navelInitialFrame);
      MatrixFrame local = this._ballistaNavelInitialFrame.TransformToLocal(this._pilotInitialLocalFrame);
      MatrixFrame parent = navelInitialFrame.TransformToParent(local);
      this.PilotStandingPoint.GameEntity.SetFrame(ref parent);
      MatrixFrame initialLocalFrame = this._ballistaBodyInitialLocalFrame;
      initialLocalFrame.rotation.RotateAboutSide(-this.currentReleaseAngle + this._verticalOffsetAngle);
      this.ballistaBody.GameEntity.SetFrame(ref initialLocalFrame);
    }

    protected override void ApplyCurrentDirectionToEntity() => this.ApplyAimChange();

    protected override void GetSoundEventIndices()
    {
      this.MoveSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/ballista/move");
      this.ReloadSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/ballista/reload");
      this.ReloadEndSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/ballista/reload_end");
    }

    protected internal override bool IsTargetValid(ITargetable target)
    {
      return !(target is ICastleKeyPosition);
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this._changeToState == RangedSiegeWeapon.WeaponState.Invalid)
        return;
      this.State = this._changeToState;
      this._changeToState = RangedSiegeWeapon.WeaponState.Invalid;
    }

    protected internal override void OnTickParallel(float dt)
    {
      base.OnTickParallel(dt);
      if (!this.GameEntity.IsVisibleIncludeParents())
        return;
      if (this.PilotAgent != null)
      {
        this.PilotAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._pilotInitialLocalIKFrame, this.ballistaBody.GameEntity.GetGlobalFrame(), this.AnimationHeightDifference);
        ActionIndexValueCache currentActionValue = this.PilotAgent.GetCurrentActionValue(1);
        if (currentActionValue == this._pickUpAmmoEndAnimationActionIndex || currentActionValue == this._placeAmmoStartAnimationActionIndex)
        {
          MatrixFrame boneEntitialFrame = this.PilotAgent.AgentVisuals.GetBoneEntitialFrame(this.PilotAgent.Monster.MainHandItemBoneIndex, false);
          MatrixFrame frame = this.PilotAgent.AgentVisuals.GetGlobalFrame().TransformToParent(boneEntitialFrame);
          this.Projectile.GameEntity.SetGlobalFrame(in frame);
        }
        else
          this.Projectile.GameEntity.SetFrame(ref this._missileInitialLocalFrame);
      }
      if (GameNetwork.IsClientOrReplay)
        return;
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          bool flag = false;
          if (this.PilotAgent != null)
          {
            ActionIndexValueCache currentActionValue = this.PilotAgent.GetCurrentActionValue(1);
            if (currentActionValue != this._pickUpAmmoStartAnimationActionIndex && currentActionValue != this._pickUpAmmoEndAnimationActionIndex && currentActionValue != this._placeAmmoStartAnimationActionIndex && currentActionValue != this._placeAmmoEndAnimationActionIndex && !this.PilotAgent.SetActionChannel(1, this._pickUpAmmoStartAnimationActionIndex) && this.PilotAgent.Controller != Agent.ControllerType.AI)
              this.PilotAgent.StopUsingGameObjectMT();
            else if (currentActionValue == this._pickUpAmmoEndAnimationActionIndex || currentActionValue == this._placeAmmoStartAnimationActionIndex)
              flag = true;
            else if (currentActionValue == this._placeAmmoEndAnimationActionIndex)
            {
              flag = true;
              this._changeToState = RangedSiegeWeapon.WeaponState.WaitingBeforeIdle;
            }
          }
          this.Projectile.SetVisibleSynched(flag);
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          if (this.PilotAgent == null)
          {
            this._changeToState = RangedSiegeWeapon.WeaponState.Idle;
            break;
          }
          if (this.PilotAgent.GetCurrentActionValue(1) != this._placeAmmoEndAnimationActionIndex)
          {
            if (this.PilotAgent.Controller != Agent.ControllerType.AI)
              this.PilotAgent.StopUsingGameObjectMT();
            this._changeToState = RangedSiegeWeapon.WeaponState.Idle;
            break;
          }
          if ((double) this.PilotAgent.GetCurrentActionProgress(1) <= 0.99989998340606689)
            break;
          this._changeToState = RangedSiegeWeapon.WeaponState.Idle;
          if (this.PilotAgent == null || this.PilotAgent.SetActionChannel(1, this._idleAnimationActionIndex) || this.PilotAgent.Controller == Agent.ControllerType.AI)
            break;
          this.PilotAgent.StopUsingGameObjectMT();
          break;
        case RangedSiegeWeapon.WeaponState.Reloading:
          if (this.PilotAgent == null || this.PilotAgent.SetActionChannel(1, this._reloadAnimationActionIndex) || this.PilotAgent.Controller == Agent.ControllerType.AI)
            break;
          this.PilotAgent.StopUsingGameObjectMT();
          break;
        default:
          if (this.PilotAgent == null)
            break;
          if (this.PilotAgent.IsInBeingStruckAction)
          {
            if (!(this.PilotAgent.GetCurrentActionValue(1) != Ballista.act_strike_bent_over))
              break;
            this.PilotAgent.SetActionChannel(1, Ballista.act_strike_bent_over);
            break;
          }
          if (this.PilotAgent.SetActionChannel(1, this._idleAnimationActionIndex) || this.PilotAgent.Controller == Agent.ControllerType.AI)
            break;
          this.PilotAgent.StopUsingGameObjectMT();
          break;
      }
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = new TextObject("{=fEQAPJ2e}{KEY} Use");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return new TextObject("{=abbALYlp}Ballista").ToString();
    }

    protected override void UpdateAmmoMesh()
    {
      int vectorArgument1 = 8 - this.AmmoCount;
      foreach (GameEntity child in this.GameEntity.GetChildren())
      {
        for (int metaMeshIndex = 0; metaMeshIndex < child.MultiMeshComponentCount; ++metaMeshIndex)
        {
          MetaMesh metaMesh = child.GetMetaMesh(metaMeshIndex);
          for (int meshIndex = 0; meshIndex < metaMesh.MeshCount; ++meshIndex)
            metaMesh.GetMeshAtIndex(meshIndex).SetVectorArgument(0.0f, (float) vectorArgument1, 0.0f, 0.0f);
        }
      }
    }

    public override float ProcessTargetValue(float baseValue, TargetFlags flags)
    {
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.NotAThreat))
        return -1000f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsSiegeEngine))
        baseValue *= 0.2f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.IsStructure))
        baseValue *= 0.05f;
      if (flags.HasAnyFlag<TargetFlags>(TargetFlags.DebugThreat))
        baseValue *= 10000f;
      return baseValue;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags1 = (TargetFlags) (0 | 2 | 8);
      if (this.Side == BattleSideEnum.Attacker)
        targetFlags1 |= TargetFlags.IsAttacker;
      TargetFlags targetFlags2 = targetFlags1 | TargetFlags.IsSmall;
      if (this.IsDestroyed || this.IsDeactivated)
        targetFlags2 |= TargetFlags.NotAThreat;
      if (this.Side == BattleSideEnum.Attacker && DebugSiegeBehavior.DebugDefendState == DebugSiegeBehavior.DebugStateDefender.DebugDefendersToBallistae)
        targetFlags2 |= TargetFlags.DebugThreat;
      if (this.Side == BattleSideEnum.Defender && DebugSiegeBehavior.DebugAttackState == DebugSiegeBehavior.DebugStateAttacker.DebugAttackersToBallistae)
        targetFlags2 |= TargetFlags.DebugThreat;
      return targetFlags2;
    }

    public override float GetTargetValue(List<Vec3> weaponPos)
    {
      return 30f * this.GetUserMultiplierOfWeapon() * this.GetDistanceMultiplierOfWeapon(weaponPos[0]) * this.GetHitPointMultiplierOfWeapon();
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;
  }
}
