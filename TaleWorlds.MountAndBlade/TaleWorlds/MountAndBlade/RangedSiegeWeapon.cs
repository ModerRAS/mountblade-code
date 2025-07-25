// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.RangedSiegeWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromClient;
using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.MountAndBlade.Objects.Usables;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class RangedSiegeWeapon : SiegeWeapon
  {
    public const float DefaultDirectionRestriction = 2.09439516f;
    public const string MultipleProjectileId = "grapeshot_fire_stack";
    public const string MultipleProjectileFlyingId = "grapeshot_fire_projectile";
    public const int MultipleProjectileCount = 5;
    public const string CanGoAmmoPickupTag = "can_pick_up_ammo";
    public const string DontApplySidePenaltyTag = "no_ammo_pick_up_penalty";
    public const string ReloadTag = "reload";
    public const string AmmoLoadTag = "ammoload";
    public const string CameraHolderTag = "cameraHolder";
    public const string ProjectileTag = "projectile";
    public string MissileItemID;
    protected bool UsesMouseForAiming;
    private RangedSiegeWeapon.WeaponState _state;
    public RangedSiegeWeapon.FiringFocus Focus;
    private int _projectileIndex;
    protected GameEntity MissileStartingPositionEntityForSimulation;
    protected Skeleton[] Skeletons;
    protected SynchedMissionObject[] SkeletonOwnerObjects;
    protected string[] SkeletonNames;
    protected string[] FireAnimations;
    protected string[] SetUpAnimations;
    protected int[] FireAnimationIndices;
    protected int[] SetUpAnimationIndices;
    protected SynchedMissionObject RotationObject;
    private MatrixFrame _rotationObjectInitialFrame;
    protected SoundEvent MoveSound;
    protected SoundEvent ReloadSound;
    protected int MoveSoundIndex = -1;
    protected int ReloadSoundIndex = -1;
    protected int ReloadEndSoundIndex = -1;
    protected ItemObject OriginalMissileItem;
    private WeaponStatsData _originalMissileWeaponStatsDataForTargeting;
    protected ItemObject LoadedMissileItem;
    protected List<StandingPoint> CanPickUpAmmoStandingPoints;
    protected List<StandingPoint> ReloadStandingPoints;
    protected List<StandingPointWithWeaponRequirement> AmmoPickUpStandingPoints;
    protected StandingPointWithWeaponRequirement LoadAmmoStandingPoint;
    protected Dictionary<StandingPoint, float> PilotReservePriorityValues = new Dictionary<StandingPoint, float>();
    protected Agent ReloaderAgent;
    protected StandingPoint ReloaderAgentOriginalPoint;
    protected bool AttackClickWillReload;
    protected bool WeaponNeedsClickToReload;
    public int startingAmmoCount = 20;
    protected int CurrentAmmo = 1;
    private bool _hasAmmo = true;
    protected float targetDirection;
    protected float targetReleaseAngle;
    protected float cameraDirection;
    protected float cameraReleaseAngle;
    protected float reloadTargetReleaseAngle;
    protected float maxRotateSpeed;
    protected float dontMoveTimer;
    private MatrixFrame cameraHolderInitialFrame;
    private RangedSiegeWeapon.CameraState cameraState;
    private bool _inputGiven;
    private float _inputX;
    private float _inputY;
    private bool _exactInputGiven;
    private float _inputTargetX;
    private float _inputTargetY;
    private Vec3 _ammoPickupCenter;
    protected float currentDirection;
    private Vec3 _originalDirection;
    protected float currentReleaseAngle;
    private float _lastSyncedDirection;
    private float _lastSyncedReleaseAngle;
    private float _syncTimer;
    public float TopReleaseAngleRestriction = 1.57079637f;
    public float BottomReleaseAngleRestriction = -1.57079637f;
    protected float ReleaseAngleRestrictionCenter;
    protected float ReleaseAngleRestrictionAngle;
    private float animationTimeElapsed;
    protected float timeGapBetweenShootingEndAndReloadingStart = 0.6f;
    protected float timeGapBetweenShootActionAndProjectileLeaving;
    private int _currentReloaderCount;
    private Agent _lastShooterAgent;
    private float _lastCanPickUpAmmoStandingPointsSortedAngle = -3.14159274f;
    protected BattleSideEnum _defaultSide;
    private bool hasFrameChangedInPreviousFrame;
    protected SiegeMachineStonePile _stonePile;
    private bool _aiRequestsShoot;
    private bool _aiRequestsManualReload;

    public RangedSiegeWeapon.WeaponState State
    {
      get => this._state;
      set
      {
        if (this._state == value)
          return;
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetRangedSiegeWeaponState(this.Id, value));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        this._state = value;
        this.OnRangedSiegeWeaponStateChange();
      }
    }

    protected virtual float MaximumBallisticError => 1f;

    protected abstract float ShootingSpeed { get; }

    public virtual Vec3 CanShootAtPointCheckingOffset => Vec3.Zero;

    public GameEntity cameraHolder { get; private set; }

    protected SynchedMissionObject Projectile { get; private set; }

    protected Vec3 MissleStartingPositionForSimulation
    {
      get
      {
        if ((NativeObject) this.MissileStartingPositionEntityForSimulation != (NativeObject) null)
          return this.MissileStartingPositionEntityForSimulation.GlobalPosition;
        SynchedMissionObject projectile = this.Projectile;
        return projectile == null ? Vec3.Zero : projectile.GameEntity.GlobalPosition;
      }
    }

    protected string SkeletonName
    {
      set => this.SkeletonNames = new string[1]{ value };
    }

    protected string FireAnimation
    {
      set => this.FireAnimations = new string[1]{ value };
    }

    protected string SetUpAnimation
    {
      set => this.SetUpAnimations = new string[1]{ value };
    }

    protected int FireAnimationIndex
    {
      set => this.FireAnimationIndices = new int[1]{ value };
    }

    protected int SetUpAnimationIndex
    {
      set
      {
        this.SetUpAnimationIndices = new int[1]{ value };
      }
    }

    public event RangedSiegeWeapon.OnSiegeWeaponReloadDone OnReloadDone;

    public int AmmoCount
    {
      get => this.CurrentAmmo;
      protected set => this.CurrentAmmo = value;
    }

    protected virtual bool HasAmmo
    {
      get => this._hasAmmo;
      set => this._hasAmmo = value;
    }

    protected virtual void ConsumeAmmo()
    {
      --this.AmmoCount;
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new SetRangedSiegeWeaponAmmo(this.Id, this.AmmoCount));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      this.UpdateAmmoMesh();
      this.CheckAmmo();
    }

    public virtual void SetAmmo(int ammoLeft)
    {
      if (this.AmmoCount == ammoLeft)
        return;
      this.AmmoCount = ammoLeft;
      this.UpdateAmmoMesh();
      this.CheckAmmo();
    }

    protected virtual void CheckAmmo()
    {
      if (this.AmmoCount > 0)
        return;
      this.HasAmmo = false;
      this.SetForcedUse(false);
      foreach (UsableMissionObject pickUpStandingPoint in this.AmmoPickUpStandingPoints)
        pickUpStandingPoint.IsDeactivated = true;
    }

    public virtual float DirectionRestriction => 2.09439516f;

    public Vec3 OriginalDirection => this._originalDirection;

    protected virtual float HorizontalAimSensitivity => 0.2f;

    protected virtual float VerticalAimSensitivity => 0.2f;

    protected abstract void RegisterAnimationParameters();

    protected abstract void GetSoundEventIndices();

    public event Action<RangedSiegeWeapon, Agent> OnAgentLoadsMachine;

    protected void ChangeProjectileEntityServer(Agent loadingAgent, string missileItemID)
    {
      List<SynchedMissionObject> synchedMissionObjectList = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("projectile");
      for (int index = 0; index < synchedMissionObjectList.Count; ++index)
      {
        if (synchedMissionObjectList[index].GameEntity.HasTag(missileItemID))
        {
          this.Projectile = synchedMissionObjectList[index];
          this._projectileIndex = index;
          break;
        }
      }
      this.LoadedMissileItem = Game.Current.ObjectManager.GetObject<ItemObject>(missileItemID);
      if (GameNetwork.IsServerOrRecorder)
      {
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new RangedSiegeWeaponChangeProjectile(this.Id, this._projectileIndex));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
      }
      Action<RangedSiegeWeapon, Agent> agentLoadsMachine = this.OnAgentLoadsMachine;
      if (agentLoadsMachine == null)
        return;
      agentLoadsMachine(this, loadingAgent);
    }

    public void ChangeProjectileEntityClient(int index)
    {
      this.Projectile = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("projectile")[index];
      this._projectileIndex = index;
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      DestructableComponent destructableComponent = this.GameEntity.GetScriptComponents<DestructableComponent>().FirstOrDefault<DestructableComponent>();
      if (destructableComponent != null)
        this._defaultSide = destructableComponent.BattleSide;
      else
        Debug.FailedAssert("Ranged siege weapons must have destructible component.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\RangedSiegeWeapon.cs", nameof (OnInit), 413);
      this.ReleaseAngleRestrictionCenter = (float) (((double) this.TopReleaseAngleRestriction + (double) this.BottomReleaseAngleRestriction) * 0.5);
      this.ReleaseAngleRestrictionAngle = this.TopReleaseAngleRestriction - this.BottomReleaseAngleRestriction;
      this.currentReleaseAngle = this._lastSyncedReleaseAngle = this.ReleaseAngleRestrictionCenter;
      this.OriginalMissileItem = Game.Current.ObjectManager.GetObject<ItemObject>(this.MissileItemID);
      this.LoadedMissileItem = this.OriginalMissileItem;
      this._originalMissileWeaponStatsDataForTargeting = new MissionWeapon(this.OriginalMissileItem, (ItemModifier) null, (Banner) null).GetWeaponStatsDataForUsage(0);
      if (this.RotationObject == null)
        this.RotationObject = (SynchedMissionObject) this;
      this._rotationObjectInitialFrame = this.RotationObject.GameEntity.GetFrame();
      this._originalDirection = this.RotationObject.GameEntity.GetGlobalFrame().rotation.f;
      this._originalDirection.RotateAboutZ(3.14159274f);
      this.currentDirection = this._lastSyncedDirection = 0.0f;
      this._syncTimer = 0.0f;
      List<GameEntity> gameEntityList = this.GameEntity.CollectChildrenEntitiesWithTag("cameraHolder");
      if (gameEntityList.Count > 0)
      {
        this.cameraHolder = gameEntityList[0];
        this.cameraHolderInitialFrame = this.cameraHolder.GetFrame();
        if (GameNetwork.IsClientOrReplay)
          this.MakeVisibilityCheck = false;
      }
      List<SynchedMissionObject> source1 = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("projectile");
      foreach (ScriptComponentBehavior componentBehavior in source1)
        componentBehavior.GameEntity.SetVisibilityExcludeParents(false);
      this.Projectile = source1.FirstOrDefault<SynchedMissionObject>((Func<SynchedMissionObject, bool>) (x => x.GameEntity.HasTag(this.MissileItemID)));
      this.Projectile.GameEntity.SetVisibilityExcludeParents(true);
      GameEntity gameEntity = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == "clean"));
      this.MissileStartingPositionEntityForSimulation = gameEntity != null ? gameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.Name == "projectile_leaving_position")) : (GameEntity) null;
      this.targetDirection = this.currentDirection;
      this.targetReleaseAngle = this.currentReleaseAngle;
      this.CanPickUpAmmoStandingPoints = new List<StandingPoint>();
      this.ReloadStandingPoints = new List<StandingPoint>();
      this.AmmoPickUpStandingPoints = new List<StandingPointWithWeaponRequirement>();
      if (this.StandingPoints != null)
      {
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          standingPoint.AddComponent((UsableMissionObjectComponent) new ResetAnimationOnStopUsageComponent(ActionIndexCache.act_none));
          if (standingPoint.GameEntity.HasTag("reload"))
            this.ReloadStandingPoints.Add(standingPoint);
          if (standingPoint.GameEntity.HasTag("can_pick_up_ammo"))
            this.CanPickUpAmmoStandingPoints.Add(standingPoint);
        }
      }
      List<StandingPointWithWeaponRequirement> list = this.StandingPoints.OfType<StandingPointWithWeaponRequirement>().ToList<StandingPointWithWeaponRequirement>();
      List<StandingPointWithWeaponRequirement> source2 = new List<StandingPointWithWeaponRequirement>();
      foreach (StandingPointWithWeaponRequirement weaponRequirement in list)
      {
        if (weaponRequirement.GameEntity.HasTag(this.AmmoPickUpTag))
        {
          this.AmmoPickUpStandingPoints.Add(weaponRequirement);
          weaponRequirement.InitGivenWeapon(this.OriginalMissileItem);
          weaponRequirement.SetupOnUsingStoppedBehavior(false, new Action<Agent, bool>(this.OnAmmoPickupUsingCancelled));
        }
        else
        {
          source2.Add(weaponRequirement);
          weaponRequirement.SetupOnUsingStoppedBehavior(false, new Action<Agent, bool>(this.OnLoadingAmmoPointUsingCancelled));
          weaponRequirement.InitRequiredWeaponClasses(this.OriginalMissileItem.PrimaryWeapon.WeaponClass);
        }
      }
      if (this.AmmoPickUpStandingPoints.Count > 1)
      {
        this._stonePile = this.AmmoPickUpStandingPoints[0].GameEntity.Parent.GetFirstScriptOfType<SiegeMachineStonePile>();
        this._ammoPickupCenter = new Vec3();
        foreach (StandingPointWithWeaponRequirement pickUpStandingPoint in this.AmmoPickUpStandingPoints)
        {
          pickUpStandingPoint.SetHasAlternative(true);
          this._ammoPickupCenter += pickUpStandingPoint.GameEntity.GlobalPosition;
        }
        this._ammoPickupCenter /= (float) this.AmmoPickUpStandingPoints.Count;
      }
      else
        this._ammoPickupCenter = this.GameEntity.GlobalPosition;
      source2.Sort((Comparison<StandingPointWithWeaponRequirement>) ((element1, element2) =>
      {
        Vec3 globalPosition1 = element1.GameEntity.GlobalPosition;
        double num1 = (double) globalPosition1.DistanceSquared(this._ammoPickupCenter);
        globalPosition1 = element2.GameEntity.GlobalPosition;
        double num2 = (double) globalPosition1.DistanceSquared(this._ammoPickupCenter);
        if (num1 > num2)
          return 1;
        Vec3 globalPosition2 = element1.GameEntity.GlobalPosition;
        double num3 = (double) globalPosition2.DistanceSquared(this._ammoPickupCenter);
        globalPosition2 = element2.GameEntity.GlobalPosition;
        double num4 = (double) globalPosition2.DistanceSquared(this._ammoPickupCenter);
        return num3 < num4 ? -1 : 0;
      }));
      this.LoadAmmoStandingPoint = source2.FirstOrDefault<StandingPointWithWeaponRequirement>();
      this.SortCanPickUpAmmoStandingPoints();
      Vec3 vec3 = this.PilotStandingPoint.GameEntity.GlobalPosition - this.GameEntity.GlobalPosition;
      foreach (StandingPoint ammoStandingPoint in this.CanPickUpAmmoStandingPoints)
      {
        if (ammoStandingPoint != this.PilotStandingPoint)
        {
          float length = (ammoStandingPoint.GameEntity.GlobalPosition - this.GameEntity.GlobalPosition + vec3).Length;
          this.PilotReservePriorityValues.Add(ammoStandingPoint, length);
        }
      }
      this.AmmoCount = this.startingAmmoCount;
      this.UpdateAmmoMesh();
      this.RegisterAnimationParameters();
      this.GetSoundEventIndices();
      this.InitAnimations();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    private void SortCanPickUpAmmoStandingPoints()
    {
      if ((double) MBMath.GetSmallestDifferenceBetweenTwoAngles(this._lastCanPickUpAmmoStandingPointsSortedAngle, this.currentDirection) <= 0.18849556148052216)
        return;
      this._lastCanPickUpAmmoStandingPointsSortedAngle = this.currentDirection;
      int signOfAmmoPile = Math.Sign(Vec3.DotProduct(this.GameEntity.GetGlobalFrame().rotation.s, this._ammoPickupCenter - this.GameEntity.GlobalPosition));
      this.CanPickUpAmmoStandingPoints.Sort((Comparison<StandingPoint>) ((element1, element2) =>
      {
        Vec3 vec3_1 = this._ammoPickupCenter - element1.GameEntity.GlobalPosition;
        Vec3 vec3_2 = this._ammoPickupCenter - element2.GameEntity.GlobalPosition;
        float lengthSquared1 = vec3_1.LengthSquared;
        float lengthSquared2 = vec3_2.LengthSquared;
        float num1 = Vec3.DotProduct(this.GameEntity.GetGlobalFrame().rotation.s, element1.GameEntity.GlobalPosition - this.GameEntity.GlobalPosition);
        float num2 = Vec3.DotProduct(this.GameEntity.GetGlobalFrame().rotation.s, element2.GameEntity.GlobalPosition - this.GameEntity.GlobalPosition);
        if (!element1.GameEntity.HasTag("no_ammo_pick_up_penalty") && signOfAmmoPile != Math.Sign(num1))
          lengthSquared1 += (float) ((double) num1 * (double) num1 * 64.0);
        if (!element2.GameEntity.HasTag("no_ammo_pick_up_penalty") && signOfAmmoPile != Math.Sign(num2))
          lengthSquared2 += (float) ((double) num2 * (double) num2 * 64.0);
        if (element1.GameEntity.HasTag(this.PilotStandingPointTag))
          lengthSquared1 += 25f;
        else if (element2.GameEntity.HasTag(this.PilotStandingPointTag))
          lengthSquared2 += 25f;
        if ((double) lengthSquared1 > (double) lengthSquared2)
          return 1;
        return (double) lengthSquared1 < (double) lengthSquared2 ? -1 : 0;
      }));
    }

    protected internal override void OnEditorInit()
    {
      List<SynchedMissionObject> synchedMissionObjectList = this.GameEntity.CollectObjectsWithTag<SynchedMissionObject>("projectile");
      if (synchedMissionObjectList.Count <= 0)
        return;
      this.Projectile = synchedMissionObjectList[0];
    }

    private void InitAnimations()
    {
      for (int index = 0; index < this.Skeletons.Length; ++index)
      {
        this.Skeletons[index].SetAnimationAtChannel(this.SetUpAnimations[index], 0, blendInPeriod: 0.0f);
        this.Skeletons[index].SetAnimationParameterAtChannel(0, 1f);
        this.Skeletons[index].TickAnimations(0.0001f, MatrixFrame.Identity, true);
      }
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this.Projectile.GameEntity.SetVisibilityExcludeParents(true);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        standingPoint.UserAgent?.StopUsingGameObject();
        standingPoint.IsDeactivated = false;
      }
      this._state = RangedSiegeWeapon.WeaponState.Idle;
      this.currentDirection = this._lastSyncedDirection = 0.0f;
      this._syncTimer = 0.0f;
      this.currentReleaseAngle = this._lastSyncedReleaseAngle = this.ReleaseAngleRestrictionCenter;
      this.targetDirection = this.currentDirection;
      this.targetReleaseAngle = this.currentReleaseAngle;
      this.ApplyCurrentDirectionToEntity();
      this.AmmoCount = this.startingAmmoCount;
      this.UpdateAmmoMesh();
      if (this.MoveSound != null)
      {
        this.MoveSound.Stop();
        this.MoveSound = (SoundEvent) null;
      }
      this.hasFrameChangedInPreviousFrame = false;
      foreach (Skeleton skeleton in this.Skeletons)
        skeleton.Freeze(false);
      foreach (UsableMissionObject pickUpStandingPoint in this.AmmoPickUpStandingPoints)
        pickUpStandingPoint.IsDeactivated = false;
      this.InitAnimations();
      this.UpdateProjectilePosition();
      if (GameNetwork.IsClientOrReplay)
        return;
      this.SetActivationLoadAmmoPoint(false);
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.RangedSiegeWeaponStateCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.targetDirection, CompressionBasic.RadianCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.targetReleaseAngle, CompressionBasic.RadianCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.AmmoCount, CompressionMission.RangedSiegeWeaponAmmoCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this._projectileIndex, CompressionMission.RangedSiegeWeaponAmmoIndexCompressionInfo);
    }

    protected virtual void UpdateProjectilePosition()
    {
    }

    public override bool IsInRangeToCheckAlternativePoints(Agent agent)
    {
      float num = this.AmmoPickUpStandingPoints.Count > 0 ? agent.GetInteractionDistanceToUsable((IUsable) this.AmmoPickUpStandingPoints[0]) + 2f : 2f;
      return (double) this._ammoPickupCenter.DistanceSquared(agent.Position) < (double) num * (double) num;
    }

    public override StandingPoint GetBestPointAlternativeTo(
      StandingPoint standingPoint,
      Agent agent)
    {
      if (!((IEnumerable<StandingPoint>) this.AmmoPickUpStandingPoints).Contains<StandingPoint>(standingPoint))
        return standingPoint;
      IEnumerable<StandingPointWithWeaponRequirement> weaponRequirements = this.AmmoPickUpStandingPoints.Where<StandingPointWithWeaponRequirement>((Func<StandingPointWithWeaponRequirement, bool>) (sp => !sp.IsDeactivated && (sp.IsInstantUse || !sp.HasUser && !sp.HasAIMovingTo) && !sp.IsDisabledForAgent(agent)));
      Vec3 globalPosition = standingPoint.GameEntity.GlobalPosition;
      float num1 = globalPosition.DistanceSquared(agent.Position);
      StandingPoint pointAlternativeTo = standingPoint;
      foreach (StandingPointWithWeaponRequirement weaponRequirement in weaponRequirements)
      {
        globalPosition = weaponRequirement.GameEntity.GlobalPosition;
        float num2 = globalPosition.DistanceSquared(agent.Position);
        if ((double) num2 < (double) num1)
        {
          num1 = num2;
          pointAlternativeTo = (StandingPoint) weaponRequirement;
        }
      }
      return pointAlternativeTo;
    }

    protected virtual void OnRangedSiegeWeaponStateChange()
    {
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          this.cameraState = this.cameraState != RangedSiegeWeapon.CameraState.FreeMove ? RangedSiegeWeapon.CameraState.StickToWeapon : RangedSiegeWeapon.CameraState.ApproachToCamera;
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving:
          this.AttackClickWillReload = this.WeaponNeedsClickToReload;
          break;
        case RangedSiegeWeapon.WeaponState.Shooting:
          if ((NativeObject) this.cameraHolder != (NativeObject) null)
          {
            this.cameraState = RangedSiegeWeapon.CameraState.DontMove;
            this.dontMoveTimer = 0.35f;
            break;
          }
          break;
        case RangedSiegeWeapon.WeaponState.WaitingAfterShooting:
          this.AttackClickWillReload = this.WeaponNeedsClickToReload;
          this.CheckAmmo();
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeReloading:
          this.AttackClickWillReload = false;
          if ((NativeObject) this.cameraHolder != (NativeObject) null)
            this.cameraState = RangedSiegeWeapon.CameraState.MoveDownToReload;
          this.CheckAmmo();
          break;
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          if (this.ReloadSound != null && this.ReloadSound.IsValid)
            this.ReloadSound.Stop();
          this.ReloadSound = (SoundEvent) null;
          Mission.Current.MakeSound(this.ReloadEndSoundIndex, this.GameEntity.GetGlobalFrame().origin, true, false, -1, -1);
          break;
        case RangedSiegeWeapon.WeaponState.Reloading:
          if (this.ReloadSound != null && this.ReloadSound.IsValid)
          {
            if (this.ReloadSound.IsPaused())
            {
              this.ReloadSound.Resume();
              break;
            }
            this.ReloadSound.PlayInPosition(this.GameEntity.GetGlobalFrame().origin);
            break;
          }
          this.ReloadSound = SoundEvent.CreateEvent(this.ReloadSoundIndex, this.Scene);
          this.ReloadSound.PlayInPosition(this.GameEntity.GetGlobalFrame().origin);
          break;
        case RangedSiegeWeapon.WeaponState.ReloadingPaused:
          if (this.ReloadSound != null && this.ReloadSound.IsValid)
          {
            this.ReloadSound.Pause();
            break;
          }
          break;
        default:
          Debug.FailedAssert("Invalid WeaponState.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\RangedSiegeWeapon.cs", nameof (OnRangedSiegeWeaponStateChange), 854);
          break;
      }
      if (GameNetwork.IsClientOrReplay)
        return;
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving:
          for (int index = 0; index < this.SkeletonOwnerObjects.Length; ++index)
            this.SkeletonOwnerObjects[index].SetAnimationAtChannelSynched(this.FireAnimations[index], 0);
          break;
        case RangedSiegeWeapon.WeaponState.Shooting:
          this.ShootProjectile();
          break;
        case RangedSiegeWeapon.WeaponState.WaitingAfterShooting:
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeReloading:
          break;
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          this.SetActivationLoadAmmoPoint(true);
          this.ReloaderAgent = (Agent) null;
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          this.SendReloaderAgentToOriginalPoint();
          this.SetActivationLoadAmmoPoint(false);
          break;
        case RangedSiegeWeapon.WeaponState.Reloading:
          for (int index = 0; index < this.SkeletonOwnerObjects.Length; ++index)
          {
            if (this.SkeletonOwnerObjects[index].GameEntity.IsSkeletonAnimationPaused())
              this.SkeletonOwnerObjects[index].ResumeSkeletonAnimationSynched();
            else
              this.SkeletonOwnerObjects[index].SetAnimationAtChannelSynched(this.SetUpAnimations[index], 0);
          }
          this._currentReloaderCount = 1;
          break;
        case RangedSiegeWeapon.WeaponState.ReloadingPaused:
          foreach (SynchedMissionObject skeletonOwnerObject in this.SkeletonOwnerObjects)
            skeletonOwnerObject.PauseSkeletonAnimationSynched();
          break;
        default:
          Debug.FailedAssert("Invalid WeaponState.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\RangedSiegeWeapon.cs", nameof (OnRangedSiegeWeaponStateChange), 927);
          break;
      }
    }

    protected virtual void SetActivationLoadAmmoPoint(bool activate)
    {
    }

    protected float GetDetachmentWeightAuxForExternalAmmoWeapons(BattleSideEnum side)
    {
      if (this.IsDisabledForBattleSideAI(side))
        return float.MinValue;
      this._usableStandingPoints.Clear();
      bool flag1 = false;
      bool flag2 = false;
      bool flag3 = !this.PilotStandingPoint.HasUser && !this.PilotStandingPoint.HasAIMovingTo && (this.ReloaderAgent == null || this.ReloaderAgentOriginalPoint != this.PilotStandingPoint);
      int index1 = -1;
      StandingPoint key = (StandingPoint) null;
      bool flag4 = false;
      for (int index2 = 0; index2 < this.StandingPoints.Count; ++index2)
      {
        StandingPoint standingPoint = this.StandingPoints[index2];
        if (standingPoint.GameEntity.HasTag("can_pick_up_ammo"))
        {
          if (this.ReloaderAgent == null || standingPoint != this.ReloaderAgentOriginalPoint)
          {
            if (standingPoint.IsUsableBySide(side))
            {
              if (!standingPoint.HasAIMovingTo)
              {
                if (!flag2)
                {
                  this._usableStandingPoints.Clear();
                  if (index1 != -1)
                    index1 = -1;
                }
                flag2 = true;
              }
              else if (flag2 || standingPoint.MovingAgent.Formation.Team.Side != side)
                continue;
              flag1 = true;
              this._usableStandingPoints.Add((index2, standingPoint));
              if (flag3 && this.PilotStandingPoint == standingPoint)
                index1 = this._usableStandingPoints.Count - 1;
            }
            else if (flag3 && standingPoint.HasAIUser && ((key == null ? 1 : ((double) this.PilotReservePriorityValues[standingPoint] > (double) this.PilotReservePriorityValues[key] ? 1 : 0)) | (flag4 ? 1 : 0)) != 0)
            {
              key = standingPoint;
              flag4 = false;
            }
          }
          else if (flag3 && key == null)
          {
            key = standingPoint;
            flag4 = true;
          }
        }
      }
      if (key != null)
      {
        if (flag4)
        {
          this.ReloaderAgentOriginalPoint = this.PilotStandingPoint;
        }
        else
        {
          Agent userAgent = key.UserAgent;
          userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.DoNotWieldWeaponAfterStoppingUsingGameObject);
          userAgent.AIMoveToGameObjectEnable((UsableMissionObject) this.PilotStandingPoint, (IDetachment) this, this.Ai.GetScriptedFrameFlags(userAgent));
        }
        if (index1 != -1)
          this._usableStandingPoints.RemoveAt(index1);
      }
      this._areUsableStandingPointsVacant = flag2;
      if (!flag1)
        return float.MinValue;
      if (flag2)
        return 1f;
      return !this._isDetachmentRecentlyEvaluated ? 0.1f : 0.01f;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement() : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this.GameEntity.IsVisibleIncludeParents())
        return;
      if (!GameNetwork.IsClientOrReplay)
      {
        this.UpdateState(dt);
        if (this.PilotAgent != null && !this.PilotAgent.IsInBeingStruckAction)
        {
          if (this.PilotAgent.MovementFlags.HasAnyFlag<Agent.MovementControlFlag>(Agent.MovementControlFlag.AttackMask))
          {
            if (this.State == RangedSiegeWeapon.WeaponState.Idle)
            {
              this._aiRequestsShoot = false;
              this.Shoot();
            }
            else if (this.State == RangedSiegeWeapon.WeaponState.WaitingAfterShooting && this.AttackClickWillReload)
            {
              this._aiRequestsManualReload = false;
              this.ManualReload();
            }
          }
          if (this._aiRequestsManualReload)
            this.ManualReload();
          if (this._aiRequestsShoot)
            this.Shoot();
        }
        this._aiRequestsShoot = false;
        this._aiRequestsManualReload = false;
      }
      this.HandleUserAiming(dt);
    }

    protected virtual float CalculateShootingRange(float heightDifference)
    {
      return Mission.GetMissileRange(this.ShootingSpeed, heightDifference);
    }

    protected static bool ApproachToAngle(
      ref float angle,
      float angleToApproach,
      bool isMouse,
      float speed_limit,
      float dt,
      float sensitivity)
    {
      speed_limit = MathF.Abs(speed_limit);
      if ((double) angle == (double) angleToApproach)
        return false;
      float a = sensitivity * dt;
      float num = MathF.Abs(angle - angleToApproach);
      if (isMouse)
        a *= MathF.Max(num * 8f, 0.15f);
      if ((double) speed_limit > 0.0)
        a = MathF.Min(a, speed_limit * dt);
      if ((double) num <= (double) a)
        angle = angleToApproach;
      else
        angle += a * (float) MathF.Sign(angleToApproach - angle);
      return true;
    }

    protected virtual void HandleUserAiming(float dt)
    {
      bool flag1 = false;
      float horizontalAimSensitivity = this.HorizontalAimSensitivity;
      float verticalAimSensitivity = this.VerticalAimSensitivity;
      bool flag2 = false;
      if (this.cameraState != RangedSiegeWeapon.CameraState.DontMove)
      {
        if (this._inputGiven)
        {
          flag2 = true;
          if (this.CanRotate())
          {
            if ((double) this._inputX != 0.0)
            {
              this.targetDirection += horizontalAimSensitivity * dt * this._inputX;
              this.targetDirection = MBMath.WrapAngle(this.targetDirection);
              this.targetDirection = MBMath.ClampAngle(this.targetDirection, this.currentDirection, 0.7f);
              this.targetDirection = MBMath.ClampAngle(this.targetDirection, 0.0f, this.DirectionRestriction);
            }
            if ((double) this._inputY != 0.0)
            {
              this.targetReleaseAngle += verticalAimSensitivity * dt * this._inputY;
              this.targetReleaseAngle = MBMath.ClampAngle(this.targetReleaseAngle, this.currentReleaseAngle + 0.049999997f, 0.6f);
              this.targetReleaseAngle = MBMath.ClampAngle(this.targetReleaseAngle, this.ReleaseAngleRestrictionCenter, this.ReleaseAngleRestrictionAngle);
            }
          }
          this._inputGiven = false;
          this._inputX = 0.0f;
          this._inputY = 0.0f;
        }
        else if (this._exactInputGiven)
        {
          bool flag3 = false;
          if (this.CanRotate())
          {
            if ((double) this.targetDirection != (double) this._inputTargetX)
            {
              float num = horizontalAimSensitivity * dt;
              if ((double) MathF.Abs(this.targetDirection - this._inputTargetX) < (double) num)
                this.targetDirection = this._inputTargetX;
              else if ((double) this.targetDirection < (double) this._inputTargetX)
              {
                this.targetDirection += num;
                flag3 = true;
              }
              else
              {
                this.targetDirection -= num;
                flag3 = true;
              }
              this.targetDirection = MBMath.WrapAngle(this.targetDirection);
              this.targetDirection = MBMath.ClampAngle(this.targetDirection, this.currentDirection, 0.7f);
              this.targetDirection = MBMath.ClampAngle(this.targetDirection, 0.0f, this.DirectionRestriction);
            }
            if ((double) this.targetReleaseAngle != (double) this._inputTargetY)
            {
              float num = verticalAimSensitivity * dt;
              if ((double) MathF.Abs(this.targetReleaseAngle - this._inputTargetY) < (double) num)
                this.targetReleaseAngle = this._inputTargetY;
              else if ((double) this.targetReleaseAngle < (double) this._inputTargetY)
              {
                this.targetReleaseAngle += num;
                flag3 = true;
              }
              else
              {
                this.targetReleaseAngle -= num;
                flag3 = true;
              }
              this.targetReleaseAngle = MBMath.ClampAngle(this.targetReleaseAngle, this.currentReleaseAngle + 0.049999997f, 0.6f);
              this.targetReleaseAngle = MBMath.ClampAngle(this.targetReleaseAngle, this.ReleaseAngleRestrictionCenter, this.ReleaseAngleRestrictionAngle);
            }
          }
          else
            flag3 = true;
          if (!flag3)
            this._exactInputGiven = false;
        }
      }
      switch (this.cameraState)
      {
        case RangedSiegeWeapon.CameraState.StickToWeapon:
          bool flag4 = RangedSiegeWeapon.ApproachToAngle(ref this.currentDirection, this.targetDirection, this.UsesMouseForAiming, -1f, dt, horizontalAimSensitivity) | flag1;
          flag1 = RangedSiegeWeapon.ApproachToAngle(ref this.currentReleaseAngle, this.targetReleaseAngle, this.UsesMouseForAiming, -1f, dt, verticalAimSensitivity) | flag4;
          this.cameraDirection = this.currentDirection;
          this.cameraReleaseAngle = this.currentReleaseAngle;
          break;
        case RangedSiegeWeapon.CameraState.DontMove:
          this.dontMoveTimer -= dt;
          if ((double) this.dontMoveTimer < 0.0)
          {
            if (!this.AttackClickWillReload)
            {
              this.cameraState = RangedSiegeWeapon.CameraState.MoveDownToReload;
              this.maxRotateSpeed = 0.0f;
              this.reloadTargetReleaseAngle = MBMath.ClampAngle((double) MathF.Abs(this.currentReleaseAngle) > 0.17453292012214661 ? 0.0f : this.currentReleaseAngle, this.currentReleaseAngle - 0.049999997f, 0.6f);
              this.targetDirection = this.cameraDirection;
              this.cameraReleaseAngle = this.targetReleaseAngle;
              break;
            }
            this.cameraState = RangedSiegeWeapon.CameraState.StickToWeapon;
            break;
          }
          break;
        case RangedSiegeWeapon.CameraState.MoveDownToReload:
          this.maxRotateSpeed += dt * 1.2f;
          this.maxRotateSpeed = MathF.Min(this.maxRotateSpeed, 1f);
          bool flag5 = RangedSiegeWeapon.ApproachToAngle(ref this.currentReleaseAngle, this.reloadTargetReleaseAngle, this.UsesMouseForAiming, 0.4f + this.maxRotateSpeed, dt, verticalAimSensitivity) | flag1;
          bool flag6 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraDirection, this.targetDirection, this.UsesMouseForAiming, -1f, dt, horizontalAimSensitivity) | flag5;
          flag1 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraReleaseAngle, this.reloadTargetReleaseAngle, this.UsesMouseForAiming, 0.5f + this.maxRotateSpeed, dt, verticalAimSensitivity) | flag6;
          if (!flag1)
          {
            this.cameraState = RangedSiegeWeapon.CameraState.RememberLastShotDirection;
            break;
          }
          break;
        case RangedSiegeWeapon.CameraState.RememberLastShotDirection:
          if (this.State == RangedSiegeWeapon.WeaponState.Idle | flag2)
          {
            this.cameraState = RangedSiegeWeapon.CameraState.FreeMove;
            RangedSiegeWeapon.OnSiegeWeaponReloadDone onReloadDone = this.OnReloadDone;
            if (onReloadDone != null)
            {
              onReloadDone();
              break;
            }
            break;
          }
          break;
        case RangedSiegeWeapon.CameraState.FreeMove:
          bool flag7 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraDirection, this.targetDirection, this.UsesMouseForAiming, -1f, dt, horizontalAimSensitivity) | flag1;
          flag1 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraReleaseAngle, this.targetReleaseAngle, this.UsesMouseForAiming, -1f, dt, verticalAimSensitivity) | flag7;
          this.maxRotateSpeed = 0.0f;
          break;
        case RangedSiegeWeapon.CameraState.ApproachToCamera:
          this.maxRotateSpeed += (float) (0.89999997615814209 * (double) dt + (double) this.maxRotateSpeed * 2.0 * (double) dt);
          bool flag8 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraDirection, this.targetDirection, this.UsesMouseForAiming, -1f, dt, horizontalAimSensitivity) | flag1;
          bool flag9 = RangedSiegeWeapon.ApproachToAngle(ref this.cameraReleaseAngle, this.targetReleaseAngle, this.UsesMouseForAiming, -1f, dt, verticalAimSensitivity) | flag8;
          bool flag10 = RangedSiegeWeapon.ApproachToAngle(ref this.currentDirection, this.targetDirection, this.UsesMouseForAiming, this.maxRotateSpeed, dt, horizontalAimSensitivity) | flag9;
          flag1 = RangedSiegeWeapon.ApproachToAngle(ref this.currentReleaseAngle, this.targetReleaseAngle, this.UsesMouseForAiming, this.maxRotateSpeed, dt, verticalAimSensitivity) | flag10;
          if (!flag1)
          {
            this.cameraState = RangedSiegeWeapon.CameraState.StickToWeapon;
            break;
          }
          break;
      }
      if ((NativeObject) this.cameraHolder != (NativeObject) null)
      {
        MatrixFrame frame = this.cameraHolderInitialFrame;
        frame.rotation.RotateAboutForward(this.cameraDirection - this.currentDirection);
        frame.rotation.RotateAboutSide(this.cameraReleaseAngle - this.currentReleaseAngle);
        this.cameraHolder.SetFrame(ref frame);
        frame = this.cameraHolder.GetGlobalFrame();
        frame.rotation.s.z = 0.0f;
        double num1 = (double) frame.rotation.s.Normalize();
        frame.rotation.u = Vec3.CrossProduct(frame.rotation.s, frame.rotation.f);
        double num2 = (double) frame.rotation.u.Normalize();
        frame.rotation.f = Vec3.CrossProduct(frame.rotation.u, frame.rotation.s);
        double num3 = (double) frame.rotation.f.Normalize();
        this.cameraHolder.SetGlobalFrame(in frame);
      }
      if (flag1 && !this.hasFrameChangedInPreviousFrame)
        this.OnRotationStarted();
      else if (!flag1 && this.hasFrameChangedInPreviousFrame)
        this.OnRotationStopped();
      this.hasFrameChangedInPreviousFrame = flag1;
      if (flag1 && GameNetwork.IsClient && this.PilotAgent == Agent.Main || GameNetwork.IsServerOrRecorder)
      {
        float num = !GameNetwork.IsClient || this.PilotAgent != Agent.Main ? 0.02f : 0.0001f;
        if ((double) this._syncTimer > 0.20000000298023224 && ((double) MathF.Abs(this.currentDirection - this._lastSyncedDirection) > (double) num || (double) MathF.Abs(this.currentReleaseAngle - this._lastSyncedReleaseAngle) > (double) num))
        {
          this._lastSyncedDirection = this.currentDirection;
          this._lastSyncedReleaseAngle = this.currentReleaseAngle;
          MissionLobbyComponent missionBehavior = Mission.Current.GetMissionBehavior<MissionLobbyComponent>();
          if ((missionBehavior != null ? (missionBehavior.CurrentMultiplayerState != MissionLobbyComponent.MultiplayerGameState.Ending ? 1 : 0) : 1) != 0 && GameNetwork.IsClient && this.PilotAgent == Agent.Main)
          {
            GameNetwork.BeginModuleEventAsClient();
            GameNetwork.WriteMessage((GameNetworkMessage) new SetMachineRotation(this.Id, this.currentDirection, this.currentReleaseAngle));
            GameNetwork.EndModuleEventAsClient();
          }
          if (GameNetwork.IsServerOrRecorder)
          {
            GameNetwork.BeginBroadcastModuleEvent();
            GameNetwork.WriteMessage((GameNetworkMessage) new SetMachineTargetRotation(this.Id, this.currentDirection, this.currentReleaseAngle));
            Agent pilotAgent = this.PilotAgent;
            NetworkCommunicator targetPlayer;
            if (pilotAgent == null)
            {
              targetPlayer = (NetworkCommunicator) null;
            }
            else
            {
              MissionPeer missionPeer = pilotAgent.MissionPeer;
              targetPlayer = missionPeer != null ? missionPeer.GetNetworkPeer() : (NetworkCommunicator) null;
            }
            GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.ExcludeTargetPlayer | GameNetwork.EventBroadcastFlags.AddToMissionRecord, targetPlayer);
          }
        }
      }
      this._syncTimer += dt;
      if ((double) this._syncTimer >= 1.0)
        --this._syncTimer;
      if (!flag1)
        return;
      this.ApplyAimChange();
    }

    public void GiveInput(float inputX, float inputY)
    {
      this._exactInputGiven = false;
      this._inputGiven = true;
      this._inputX = inputX;
      this._inputY = inputY;
      this._inputX = MBMath.ClampFloat(this._inputX, -1f, 1f);
      this._inputY = MBMath.ClampFloat(this._inputY, -1f, 1f);
    }

    public void GiveExactInput(float targetX, float targetY)
    {
      this._exactInputGiven = true;
      this._inputGiven = false;
      this._inputTargetX = MBMath.ClampAngle(targetX, 0.0f, this.DirectionRestriction);
      this._inputTargetY = MBMath.ClampAngle(targetY, this.ReleaseAngleRestrictionCenter, this.ReleaseAngleRestrictionAngle);
    }

    protected virtual bool CanRotate() => this.State == RangedSiegeWeapon.WeaponState.Idle;

    protected virtual void ApplyAimChange()
    {
      if (this.CanRotate())
      {
        this.ApplyCurrentDirectionToEntity();
      }
      else
      {
        this.targetDirection = this.currentDirection;
        this.targetReleaseAngle = this.currentReleaseAngle;
      }
    }

    protected virtual void ApplyCurrentDirectionToEntity()
    {
      MatrixFrame objectInitialFrame = this._rotationObjectInitialFrame;
      objectInitialFrame.rotation.RotateAboutUp(this.currentDirection);
      this.RotationObject.GameEntity.SetFrame(ref objectInitialFrame);
    }

    public virtual float GetTargetDirection(Vec3 target)
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      globalFrame.rotation.RotateAboutUp(3.14159274f);
      return globalFrame.TransformToLocal(target).AsVec2.RotationInRadians;
    }

    public virtual float GetTargetReleaseAngle(Vec3 target)
    {
      return Mission.GetMissileVerticalAimCorrection(target - this.MissleStartingPositionForSimulation, this.ShootingSpeed, ref this._originalMissileWeaponStatsDataForTargeting, ItemObject.GetAirFrictionConstant(this.OriginalMissileItem.PrimaryWeapon.WeaponClass, this.OriginalMissileItem.PrimaryWeapon.WeaponFlags));
    }

    public virtual bool AimAtThreat(Threat threat)
    {
      Vec3 target = threat.Position + this.GetEstimatedTargetMovementVector(threat.Position, threat.GetVelocity());
      float targetDirection = this.GetTargetDirection(target);
      float targetReleaseAngle = this.GetTargetReleaseAngle(target);
      float targetX = MBMath.ClampAngle(targetDirection, 0.0f, this.DirectionRestriction);
      float targetY = MBMath.ClampAngle(targetReleaseAngle, this.ReleaseAngleRestrictionCenter, this.ReleaseAngleRestrictionAngle);
      if (!this._exactInputGiven || (double) targetX != (double) this._inputTargetX || (double) targetY != (double) this._inputTargetY)
        this.GiveExactInput(targetX, targetY);
      return (double) MathF.Abs(this.currentDirection - this._inputTargetX) < 1.0 / 1000.0 && (double) MathF.Abs(this.currentReleaseAngle - this._inputTargetY) < 1.0 / 1000.0;
    }

    public virtual void AimAtRotation(float horizontalRotation, float verticalRotation)
    {
      horizontalRotation = MBMath.ClampFloat(horizontalRotation, -3.14159274f, 3.14159274f);
      verticalRotation = MBMath.ClampFloat(verticalRotation, -3.14159274f, 3.14159274f);
      horizontalRotation = MBMath.ClampAngle(horizontalRotation, 0.0f, this.DirectionRestriction);
      verticalRotation = MBMath.ClampAngle(verticalRotation, this.ReleaseAngleRestrictionCenter, this.ReleaseAngleRestrictionAngle);
      if (this._exactInputGiven && (double) horizontalRotation == (double) this._inputTargetX && (double) verticalRotation == (double) this._inputTargetY)
        return;
      this.GiveExactInput(horizontalRotation, verticalRotation);
    }

    protected void OnLoadingAmmoPointUsingCancelled(Agent agent, bool isCanceledBecauseOfAnimation)
    {
      if (!agent.IsAIControlled)
        return;
      if (isCanceledBecauseOfAnimation)
        this.SendAgentToAmmoPickup(agent);
      else
        this.SendReloaderAgentToOriginalPoint();
    }

    protected void OnAmmoPickupUsingCancelled(Agent agent, bool isCanceledBecauseOfAnimation)
    {
      if (!agent.IsAIControlled)
        return;
      this.SendAgentToAmmoPickup(agent);
    }

    protected void SendAgentToAmmoPickup(Agent agent)
    {
      this.ReloaderAgent = agent;
      EquipmentIndex wieldedItemIndex = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      if (wieldedItemIndex != EquipmentIndex.None && agent.Equipment[wieldedItemIndex].CurrentUsageItem.WeaponClass == this.OriginalMissileItem.PrimaryWeapon.WeaponClass)
      {
        agent.AIMoveToGameObjectEnable((UsableMissionObject) this.LoadAmmoStandingPoint, (IDetachment) this, this.Ai.GetScriptedFrameFlags(agent));
      }
      else
      {
        StandingPoint usedObject = this.AmmoPickUpPoints.FirstOrDefault<StandingPoint>((Func<StandingPoint, bool>) (x => !x.HasUser));
        if (usedObject != null)
          agent.AIMoveToGameObjectEnable((UsableMissionObject) usedObject, (IDetachment) this, this.Ai.GetScriptedFrameFlags(agent));
        else
          this.SendReloaderAgentToOriginalPoint();
      }
    }

    protected void SendReloaderAgentToOriginalPoint()
    {
      if (this.ReloaderAgent == null)
        return;
      if (this.ReloaderAgentOriginalPoint != null && !this.ReloaderAgentOriginalPoint.HasAIMovingTo && !this.ReloaderAgentOriginalPoint.HasUser)
      {
        if (this.ReloaderAgent.InteractingWithAnyGameObject())
          this.ReloaderAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.None);
        this.ReloaderAgent.AIMoveToGameObjectEnable((UsableMissionObject) this.ReloaderAgentOriginalPoint, (IDetachment) this, this.Ai.GetScriptedFrameFlags(this.ReloaderAgent));
      }
      else
      {
        if (this.ReloaderAgentOriginalPoint != null && (this.ReloaderAgentOriginalPoint.MovingAgent == this.ReloaderAgent || this.ReloaderAgentOriginalPoint.UserAgent == this.ReloaderAgent))
          return;
        if (this.ReloaderAgent.IsUsingGameObject)
          this.ReloaderAgent.StopUsingGameObject();
        this.ReloaderAgent = (Agent) null;
      }
    }

    private void UpdateState(float dt)
    {
      if (this.LoadAmmoStandingPoint != null)
      {
        if (this.ReloaderAgent != null)
        {
          if (!this.ReloaderAgent.IsActive() || this.ReloaderAgent.Detachment != this)
            this.ReloaderAgent = (Agent) null;
          else if (this.ReloaderAgentOriginalPoint.UserAgent == this.ReloaderAgent)
            this.ReloaderAgent = (Agent) null;
        }
        if (this.State == RangedSiegeWeapon.WeaponState.LoadingAmmo && this.ReloaderAgent == null && !this.LoadAmmoStandingPoint.HasUser)
        {
          this.SortCanPickUpAmmoStandingPoints();
          StandingPoint standingPoint1 = (StandingPoint) null;
          StandingPoint standingPoint2 = (StandingPoint) null;
          foreach (StandingPoint ammoStandingPoint in this.CanPickUpAmmoStandingPoints)
          {
            if (ammoStandingPoint.HasUser && ammoStandingPoint.UserAgent.IsAIControlled)
            {
              if (ammoStandingPoint != this.PilotStandingPoint)
              {
                standingPoint1 = ammoStandingPoint;
                break;
              }
              standingPoint2 = ammoStandingPoint;
            }
          }
          if (standingPoint1 == null && standingPoint2 != null)
            standingPoint1 = standingPoint2;
          if (standingPoint1 != null)
          {
            if (this.HasAmmo)
            {
              Agent userAgent = standingPoint1.UserAgent;
              userAgent.StopUsingGameObject(flags: Agent.StopUsingGameObjectFlags.DoNotWieldWeaponAfterStoppingUsingGameObject);
              this.ReloaderAgentOriginalPoint = standingPoint1;
              this.SendAgentToAmmoPickup(userAgent);
            }
            else
              this._isDisabledForAI = true;
          }
        }
      }
      switch (this.State)
      {
        case RangedSiegeWeapon.WeaponState.Idle:
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving:
          this.animationTimeElapsed += dt;
          if ((double) this.animationTimeElapsed < (double) this.timeGapBetweenShootActionAndProjectileLeaving)
            break;
          this.State = RangedSiegeWeapon.WeaponState.Shooting;
          break;
        case RangedSiegeWeapon.WeaponState.Shooting:
          for (int index = 0; index < this.Skeletons.Length; ++index)
          {
            int animationIndexAtChannel = this.Skeletons[index].GetAnimationIndexAtChannel(0);
            float parameterAtChannel = this.Skeletons[index].GetAnimationParameterAtChannel(0);
            int fireAnimationIndex = this.FireAnimationIndices[index];
            if (animationIndexAtChannel == fireAnimationIndex && (double) parameterAtChannel >= 0.99989998340606689)
            {
              this.State = !this.AttackClickWillReload ? RangedSiegeWeapon.WeaponState.WaitingBeforeReloading : RangedSiegeWeapon.WeaponState.WaitingAfterShooting;
              this.animationTimeElapsed = 0.0f;
            }
          }
          break;
        case RangedSiegeWeapon.WeaponState.WaitingAfterShooting:
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeReloading:
          this.animationTimeElapsed += dt;
          if ((double) this.animationTimeElapsed < (double) this.timeGapBetweenShootingEndAndReloadingStart || this.cameraState != RangedSiegeWeapon.CameraState.RememberLastShotDirection && this.cameraState != RangedSiegeWeapon.CameraState.FreeMove && this.cameraState != RangedSiegeWeapon.CameraState.StickToWeapon && !((NativeObject) this.cameraHolder == (NativeObject) null))
            break;
          if (this.ReloadStandingPoints.Count == 0)
          {
            if (this.PilotAgent == null || this.PilotAgent.IsInBeingStruckAction)
              break;
            this.State = RangedSiegeWeapon.WeaponState.Reloading;
            break;
          }
          using (List<StandingPoint>.Enumerator enumerator = this.ReloadStandingPoints.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              StandingPoint current = enumerator.Current;
              if (current.HasUser && !current.UserAgent.IsInBeingStruckAction)
              {
                this.State = RangedSiegeWeapon.WeaponState.Reloading;
                break;
              }
            }
            break;
          }
        case RangedSiegeWeapon.WeaponState.LoadingAmmo:
          break;
        case RangedSiegeWeapon.WeaponState.WaitingBeforeIdle:
          break;
        case RangedSiegeWeapon.WeaponState.Reloading:
          int num = 0;
          if (this.ReloadStandingPoints.Count == 0)
          {
            if (this.PilotAgent != null && !this.PilotAgent.IsInBeingStruckAction)
              num = 1;
          }
          else
          {
            foreach (StandingPoint reloadStandingPoint in this.ReloadStandingPoints)
            {
              if (reloadStandingPoint.HasUser && !reloadStandingPoint.UserAgent.IsInBeingStruckAction)
                ++num;
            }
          }
          if (num == 0)
          {
            this.State = RangedSiegeWeapon.WeaponState.ReloadingPaused;
            break;
          }
          if (this._currentReloaderCount != num)
          {
            this._currentReloaderCount = num;
            float animationSpeed = MathF.Sqrt((float) this._currentReloaderCount);
            for (int index = 0; index < this.SkeletonOwnerObjects.Length; ++index)
            {
              float parameterAtChannel = this.SkeletonOwnerObjects[index].GameEntity.Skeleton.GetAnimationParameterAtChannel(0);
              this.SkeletonOwnerObjects[index].SetAnimationAtChannelSynched(this.SetUpAnimations[index], 0, animationSpeed);
              if ((double) parameterAtChannel > 0.0)
                this.SkeletonOwnerObjects[index].SetAnimationChannelParameterSynched(0, parameterAtChannel);
            }
          }
          for (int index = 0; index < this.Skeletons.Length; ++index)
          {
            int animationIndexAtChannel = this.Skeletons[index].GetAnimationIndexAtChannel(0);
            float parameterAtChannel = this.Skeletons[index].GetAnimationParameterAtChannel(0);
            int upAnimationIndex = this.SetUpAnimationIndices[index];
            if (animationIndexAtChannel == upAnimationIndex && (double) parameterAtChannel >= 0.99989998340606689)
            {
              this.State = RangedSiegeWeapon.WeaponState.LoadingAmmo;
              this.animationTimeElapsed = 0.0f;
            }
          }
          break;
        case RangedSiegeWeapon.WeaponState.ReloadingPaused:
          if (this.ReloadStandingPoints.Count == 0)
          {
            if (this.PilotAgent == null || this.PilotAgent.IsInBeingStruckAction)
              break;
            this.State = RangedSiegeWeapon.WeaponState.Reloading;
            break;
          }
          using (List<StandingPoint>.Enumerator enumerator = this.ReloadStandingPoints.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              StandingPoint current = enumerator.Current;
              if (current.HasUser && !current.UserAgent.IsInBeingStruckAction)
              {
                this.State = RangedSiegeWeapon.WeaponState.Reloading;
                break;
              }
            }
            break;
          }
        default:
          Debug.FailedAssert("Invalid WeaponState.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\RangedSiegeWeapon.cs", nameof (UpdateState), 1899);
          break;
      }
    }

    public bool Shoot()
    {
      this._lastShooterAgent = this.PilotAgent;
      if (this.State != RangedSiegeWeapon.WeaponState.Idle)
        return false;
      this.State = RangedSiegeWeapon.WeaponState.WaitingBeforeProjectileLeaving;
      if (!GameNetwork.IsClientOrReplay)
        this.animationTimeElapsed = 0.0f;
      return true;
    }

    public void ManualReload()
    {
      if (!this.AttackClickWillReload)
        return;
      this.State = RangedSiegeWeapon.WeaponState.WaitingBeforeReloading;
    }

    public void AiRequestsShoot() => this._aiRequestsShoot = true;

    public void AiRequestsManualReload() => this._aiRequestsManualReload = true;

    private Vec3 GetBallisticErrorAppliedDirection(float BallisticErrorAmount)
    {
      Mat3 mat3 = new Mat3()
      {
        f = this.ShootingDirection,
        u = Vec3.Up
      };
      mat3.Orthonormalize();
      float a = MBRandom.RandomFloat * 6.28318548f;
      mat3.RotateAboutForward(a);
      float f = BallisticErrorAmount * MBRandom.RandomFloat;
      mat3.RotateAboutSide(f.ToRadians());
      return mat3.f;
    }

    private void ShootProjectile()
    {
      if (this.LoadedMissileItem.StringId == "grapeshot_fire_stack")
      {
        ItemObject missileItem = Game.Current.ObjectManager.GetObject<ItemObject>("grapeshot_fire_projectile");
        for (int index = 0; index < 5; ++index)
          this.ShootProjectileAux(missileItem, true);
      }
      else
        this.ShootProjectileAux(this.LoadedMissileItem, false);
      this._lastShooterAgent = (Agent) null;
    }

    private void ShootProjectileAux(ItemObject missileItem, bool randomizeMissileSpeed)
    {
      Mat3 identity = Mat3.Identity;
      float shootingSpeed = this.ShootingSpeed;
      if (randomizeMissileSpeed)
      {
        shootingSpeed *= MBRandom.RandomFloatRanged(0.9f, 1.1f);
        identity.f = this.GetBallisticErrorAppliedDirection(2.5f);
        identity.Orthonormalize();
      }
      else
      {
        identity.f = this.GetBallisticErrorAppliedDirection(this.MaximumBallisticError);
        identity.Orthonormalize();
      }
      Mission.Current.AddCustomMissile(this._lastShooterAgent, new MissionWeapon(missileItem, (ItemModifier) null, this._lastShooterAgent.Origin?.Banner, (short) 1), this.ProjectileEntityCurrentGlobalPosition, identity.f, identity, (float) this.LoadedMissileItem.PrimaryWeapon.MissileSpeed, shootingSpeed, false, (MissionObject) this);
    }

    protected virtual Vec3 ShootingDirection
    {
      get => this.Projectile.GameEntity.GetGlobalFrame().rotation.u;
    }

    public virtual Vec3 ProjectileEntityCurrentGlobalPosition
    {
      get => this.Projectile.GameEntity.GetGlobalFrame().origin;
    }

    protected void OnRotationStarted()
    {
      if (this.MoveSound != null && this.MoveSound.IsValid)
        return;
      this.MoveSound = SoundEvent.CreateEvent(this.MoveSoundIndex, this.Scene);
      this.MoveSound.PlayInPosition(this.RotationObject.GameEntity.GlobalPosition);
    }

    protected void OnRotationStopped()
    {
      this.MoveSound.Stop();
      this.MoveSound = (SoundEvent) null;
    }

    public abstract override SiegeEngineType GetSiegeEngineType();

    public override BattleSideEnum Side
    {
      get => this.PilotAgent != null ? this.PilotAgent.Team.Side : this._defaultSide;
    }

    public bool CanShootAtBox(Vec3 boxMin, Vec3 boxMax, uint attempts = 5)
    {
      Vec3 vec3;
      Vec3 v1 = (vec3 = (boxMin + boxMax) / 2f) with
      {
        z = boxMin.z
      };
      Vec3 v2 = vec3 with { z = boxMax.z };
      uint num = attempts;
      while (!this.CanShootAtPoint(Vec3.Lerp(v1, v2, (float) num / (float) attempts)))
      {
        --num;
        if (num <= 0U)
          return false;
      }
      return true;
    }

    public bool CanShootAtBoxSimplified(Vec3 boxMin, Vec3 boxMax)
    {
      Vec3 target1 = (boxMin + boxMax) / 2f;
      Vec3 target2 = target1 with { z = boxMax.z };
      return this.CanShootAtPoint(target1) || this.CanShootAtPoint(target2);
    }

    public bool CanShootAtThreat(Threat threat)
    {
      Vec3 targetingOffset = threat.WeaponEntity.GetTargetingOffset();
      Vec3 vec3_1 = threat.BoundingBoxMax + targetingOffset;
      Vec3 vec3_2 = threat.BoundingBoxMin + targetingOffset;
      Vec3 targetCurrentPosition = (vec3_1 + vec3_2) * 0.5f;
      Vec3 targetMovementVector = this.GetEstimatedTargetMovementVector(targetCurrentPosition, threat.GetVelocity());
      Vec3 target1 = targetCurrentPosition + targetMovementVector;
      Vec3 vec3_3 = vec3_1 + targetMovementVector;
      Vec3 target2 = target1 with { z = vec3_3.z };
      return this.CanShootAtPoint(target1) || this.CanShootAtPoint(target2);
    }

    public Vec3 GetEstimatedTargetMovementVector(Vec3 targetCurrentPosition, Vec3 targetVelocity)
    {
      return targetVelocity != Vec3.Zero ? targetVelocity * ((this.GameEntity.GlobalPosition - targetCurrentPosition).Length / this.ShootingSpeed + this.timeGapBetweenShootActionAndProjectileLeaving) : Vec3.Zero;
    }

    public bool CanShootAtAgent(Agent agent)
    {
      Vec3 boxMax = agent.CollisionCapsule.GetBoxMax();
      return this.CanShootAtPoint((agent.CollisionCapsule.GetBoxMin() + boxMax) / 2f);
    }

    public bool CanShootAtPoint(Vec3 target)
    {
      float targetReleaseAngle = this.GetTargetReleaseAngle(target);
      if ((double) targetReleaseAngle < (double) this.BottomReleaseAngleRestriction || (double) targetReleaseAngle > (double) this.TopReleaseAngleRestriction || (double) this.DirectionRestriction / 2.0 - (double) MathF.Abs((target.AsVec2 - this.ProjectileEntityCurrentGlobalPosition.AsVec2).Normalized().AngleBetween(this.OriginalDirection.AsVec2.Normalized())) < 0.0)
        return false;
      if (this.Side == BattleSideEnum.Attacker)
      {
        foreach (SiegeWeapon siegeWeapon in Mission.Current.GetAttackerWeaponsForFriendlyFirePreventing())
        {
          if ((NativeObject) siegeWeapon.GameEntity != (NativeObject) null && siegeWeapon.GameEntity.IsVisibleIncludeParents())
          {
            Vec3 point = (siegeWeapon.GameEntity.PhysicsGlobalBoxMin + siegeWeapon.GameEntity.PhysicsGlobalBoxMax) * 0.5f;
            if ((double) (MBMath.GetClosestPointInLineSegmentToPoint(point, this.MissleStartingPositionForSimulation, target) - point).LengthSquared < 100.0)
              return false;
          }
        }
      }
      return this.Scene.CheckPointCanSeePoint(this.MissleStartingPositionForSimulation + ((NativeObject) this.MissileStartingPositionEntityForSimulation == (NativeObject) null ? this.CanShootAtPointCheckingOffset : Vec3.Zero), target);
    }

    protected internal virtual bool IsTargetValid(ITargetable target) => true;

    public override OrderType GetOrder(BattleSideEnum side)
    {
      if (this.IsDestroyed)
        return OrderType.None;
      return this.Side != side ? OrderType.AttackEntity : OrderType.Use;
    }

    protected override GameEntity GetEntityToAttachNavMeshFaces() => this.RotationObject.GameEntity;

    public abstract float ProcessTargetValue(float baseValue, TargetFlags flags);

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      RangedSiegeWeapon.RangedSiegeWeaponRecord siegeWeaponRecord = (RangedSiegeWeapon.RangedSiegeWeaponRecord) synchedMissionObjectReadableRecord.Item2;
      this._state = (RangedSiegeWeapon.WeaponState) siegeWeaponRecord.State;
      this.targetDirection = siegeWeaponRecord.TargetDirection;
      this.targetReleaseAngle = MBMath.ClampFloat(siegeWeaponRecord.TargetReleaseAngle, this.BottomReleaseAngleRestriction, this.TopReleaseAngleRestriction);
      this.AmmoCount = siegeWeaponRecord.AmmoCount;
      this.currentDirection = this.targetDirection;
      this.currentReleaseAngle = this.targetReleaseAngle;
      this.currentDirection = this.targetDirection;
      this.currentReleaseAngle = this.targetReleaseAngle;
      this.ApplyCurrentDirectionToEntity();
      this.CheckAmmo();
      this.UpdateAmmoMesh();
      this.ChangeProjectileEntityClient(siegeWeaponRecord.ProjectileIndex);
    }

    protected virtual void UpdateAmmoMesh()
    {
      GameEntity gameEntity = this.AmmoPickUpStandingPoints[0].GameEntity;
      int vectorArgument1 = 20 - this.AmmoCount;
      for (; (NativeObject) gameEntity.Parent != (NativeObject) null; gameEntity = gameEntity.Parent)
      {
        for (int metaMeshIndex = 0; metaMeshIndex < gameEntity.MultiMeshComponentCount; ++metaMeshIndex)
        {
          MetaMesh metaMesh = gameEntity.GetMetaMesh(metaMeshIndex);
          for (int meshIndex = 0; meshIndex < metaMesh.MeshCount; ++meshIndex)
            metaMesh.GetMeshAtIndex(meshIndex).SetVectorArgument(0.0f, (float) vectorArgument1, 0.0f, 0.0f);
        }
      }
    }

    protected override bool IsAnyUserBelongsToFormation(Formation formation)
    {
      return base.IsAnyUserBelongsToFormation(formation) | this.ReloaderAgent?.Formation == formation;
    }

    [DefineSynchedMissionObjectType(typeof (RangedSiegeWeapon))]
    public struct RangedSiegeWeaponRecord : ISynchedMissionObjectReadableRecord
    {
      public int State { get; private set; }

      public float TargetDirection { get; private set; }

      public float TargetReleaseAngle { get; private set; }

      public int AmmoCount { get; private set; }

      public int ProjectileIndex { get; private set; }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.State = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponStateCompressionInfo, ref bufferReadValid);
        this.TargetDirection = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.RadianCompressionInfo, ref bufferReadValid);
        this.TargetReleaseAngle = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.RadianCompressionInfo, ref bufferReadValid);
        this.AmmoCount = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponAmmoCompressionInfo, ref bufferReadValid);
        this.ProjectileIndex = GameNetworkMessage.ReadIntFromPacket(CompressionMission.RangedSiegeWeaponAmmoIndexCompressionInfo, ref bufferReadValid);
        return bufferReadValid;
      }
    }

    public enum WeaponState
    {
      Invalid = -1, // 0xFFFFFFFF
      Idle = 0,
      WaitingBeforeProjectileLeaving = 1,
      Shooting = 2,
      WaitingAfterShooting = 3,
      WaitingBeforeReloading = 4,
      LoadingAmmo = 5,
      WaitingBeforeIdle = 6,
      Reloading = 7,
      ReloadingPaused = 8,
      NumberOfStates = 9,
    }

    public enum FiringFocus
    {
      Troops,
      Walls,
      RangedSiegeWeapons,
      PrimarySiegeWeapons,
    }

    public delegate void OnSiegeWeaponReloadDone();

    public enum CameraState
    {
      StickToWeapon,
      DontMove,
      MoveDownToReload,
      RememberLastShotDirection,
      FreeMove,
      ApproachToCamera,
    }
  }
}
