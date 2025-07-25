// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BatteringRam
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
  public class BatteringRam : 
    SiegeWeapon,
    IPathHolder,
    IPrimarySiegeWeapon,
    IMoveableSiegeWeapon,
    ISpawnable
  {
    private static readonly ActionIndexCache act_usage_batteringram_left = ActionIndexCache.Create(nameof (act_usage_batteringram_left));
    private static readonly ActionIndexCache act_usage_batteringram_left_slower = ActionIndexCache.Create(nameof (act_usage_batteringram_left_slower));
    private static readonly ActionIndexCache act_usage_batteringram_left_slowest = ActionIndexCache.Create(nameof (act_usage_batteringram_left_slowest));
    private static readonly ActionIndexCache act_usage_batteringram_right = ActionIndexCache.Create(nameof (act_usage_batteringram_right));
    private static readonly ActionIndexCache act_usage_batteringram_right_slower = ActionIndexCache.Create(nameof (act_usage_batteringram_right_slower));
    private static readonly ActionIndexCache act_usage_batteringram_right_slowest = ActionIndexCache.Create(nameof (act_usage_batteringram_right_slowest));
    private string _pathEntityName = "Path";
    private const string PullStandingPointTag = "pull";
    private const string RightStandingPointTag = "right";
    private const string LeftStandingPointTag = "left";
    private const string IdleAnimation = "batteringram_idle";
    private const string KnockAnimation = "batteringram_fire";
    private const string KnockSlowerAnimation = "batteringram_fire_weak";
    private const string KnockSlowestAnimation = "batteringram_fire_weakest";
    private const float KnockAnimationHitProgress = 0.53f;
    private const float KnockSlowerAnimationHitProgress = 0.6f;
    private const float KnockSlowestAnimationHitProgress = 0.61f;
    private const string RoofTag = "roof";
    private string _gateTag = "gate";
    public bool GhostEntityMove = true;
    public float GhostEntitySpeedMultiplier = 1f;
    private string _sideTag;
    private FormationAI.BehaviorSide _weaponSide;
    public float WheelDiameter = 1.3f;
    public int GateNavMeshId = 7;
    public int DisabledNavMeshID = 8;
    private int _bridgeNavMeshID_1 = 8;
    private int _bridgeNavMeshID_2 = 8;
    private int _ditchNavMeshID_1 = 9;
    private int _ditchNavMeshID_2 = 10;
    private int _groundToBridgeNavMeshID_1 = 12;
    private int _groundToBridgeNavMeshID_2 = 13;
    public int NavMeshIdToDisableOnDestination = -1;
    public float MinSpeed = 0.5f;
    public float MaxSpeed = 1f;
    public float DamageMultiplier = 10f;
    private int _usedPower;
    private float _storedPower;
    private List<StandingPoint> _pullStandingPoints;
    private List<MatrixFrame> _pullStandingPointLocalIKFrames;
    private GameEntity _ditchFillDebris;
    private GameEntity _batteringRamBody;
    private Skeleton _batteringRamBodySkeleton;
    private bool _isGhostMovementOn;
    private bool _isAllStandingPointsDisabled;
    private BatteringRam.RamState _state;
    private CastleGate _gate;
    private bool _hasArrivedAtTarget;

    public SiegeWeaponMovementComponent MovementComponent { get; private set; }

    public FormationAI.BehaviorSide WeaponSide => this._weaponSide;

    public string PathEntity => this._pathEntityName;

    public bool EditorGhostEntityMove => this.GhostEntityMove;

    public BatteringRam.RamState State
    {
      get => this._state;
      set
      {
        if (this._state == value)
          return;
        this._state = value;
      }
    }

    public MissionObject TargetCastlePosition => (MissionObject) this._gate;

    public bool HasCompletedAction()
    {
      if (this._gate == null || this._gate.IsDestroyed)
        return true;
      return this._gate.State == CastleGate.GateState.Open && this.HasArrivedAtTarget;
    }

    public float SiegeWeaponPriority => 25f;

    public int OverTheWallNavMeshID => this.GateNavMeshId;

    public bool HoldLadders => !this.MovementComponent.HasArrivedAtTarget;

    public bool SendLadders => this.MovementComponent.HasArrivedAtTarget;

    public bool HasArrivedAtTarget
    {
      get => this._hasArrivedAtTarget;
      set
      {
        if (!GameNetwork.IsClientOrReplay)
          this.MovementComponent.SetDestinationNavMeshIdState(!value);
        if (this._hasArrivedAtTarget == value)
          return;
        this._hasArrivedAtTarget = value;
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetBatteringRamHasArrivedAtTarget(this.Id));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        else
        {
          if (!GameNetwork.IsClientOrReplay)
            return;
          this.MovementComponent.MoveToTargetAsClient();
        }
      }
    }

    public override void Disable()
    {
      base.Disable();
      if (GameNetwork.IsClientOrReplay)
        return;
      if (this.DisabledNavMeshID != 0)
        this.Scene.SetAbilityOfFacesWithId(this.DisabledNavMeshID, true);
      this.Scene.SetAbilityOfFacesWithId(this.DynamicNavmeshIdStart + 4, false);
    }

    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.Ram;

    protected internal override void OnInit()
    {
      base.OnInit();
      DestructableComponent destructableComponent = this.GameEntity.GetScriptComponents<DestructableComponent>().FirstOrDefault<DestructableComponent>();
      if (destructableComponent != null)
        destructableComponent.BattleSide = BattleSideEnum.Attacker;
      this._state = BatteringRam.RamState.Stable;
      IEnumerable<GameEntity> source = this.Scene.FindEntitiesWithTag(this._gateTag).ToList<GameEntity>().Where<GameEntity>((Func<GameEntity, bool>) (ewgt => ewgt.HasScriptOfType<CastleGate>()));
      if (!source.IsEmpty<GameEntity>())
      {
        this._gate = source.First<GameEntity>().GetFirstScriptOfType<CastleGate>();
        this._gate.AttackerSiegeWeapon = (IPrimarySiegeWeapon) this;
      }
      this.AddRegularMovementComponent();
      this._batteringRamBody = this.GameEntity.GetChildren().FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (x => x.HasTag("body")));
      this._batteringRamBodySkeleton = this._batteringRamBody.Skeleton;
      this._batteringRamBodySkeleton.SetAnimationAtChannel("batteringram_idle", 0, blendInPeriod: 0.0f);
      this._pullStandingPoints = new List<StandingPoint>();
      this._pullStandingPointLocalIKFrames = new List<MatrixFrame>();
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      if (this.StandingPoints != null)
      {
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          standingPoint.AddComponent((UsableMissionObjectComponent) new ResetAnimationOnStopUsageComponent(ActionIndexCache.act_none));
          if (standingPoint.GameEntity.HasTag("pull"))
          {
            standingPoint.IsDeactivated = true;
            this._pullStandingPoints.Add(standingPoint);
            this._pullStandingPointLocalIKFrames.Add(standingPoint.GameEntity.GetGlobalFrame().TransformToLocal(globalFrame));
            standingPoint.AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
          }
        }
      }
      switch (this._sideTag)
      {
        case "left":
          this._weaponSide = FormationAI.BehaviorSide.Left;
          break;
        case "middle":
          this._weaponSide = FormationAI.BehaviorSide.Middle;
          break;
        case "right":
          this._weaponSide = FormationAI.BehaviorSide.Right;
          break;
        default:
          this._weaponSide = FormationAI.BehaviorSide.Middle;
          break;
      }
      this._ditchFillDebris = this.Scene.FindEntitiesWithTag("ditch_filler").FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (df => df.HasTag(this._sideTag)));
      this.SetScriptComponentToTick(this.GetTickRequirement());
      Mission.Current.AddToWeaponListForFriendlyFirePreventing((SiegeWeapon) this);
    }

    private void AddRegularMovementComponent()
    {
      this.MovementComponent = new SiegeWeaponMovementComponent()
      {
        PathEntityName = this.PathEntity,
        MinSpeed = this.MinSpeed,
        MaxSpeed = this.MaxSpeed,
        MainObject = (SynchedMissionObject) this,
        WheelDiameter = this.WheelDiameter,
        NavMeshIdToDisableOnDestination = this.NavMeshIdToDisableOnDestination,
        MovementSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/siege/batteringram/move"),
        GhostEntitySpeedMultiplier = this.GhostEntitySpeedMultiplier
      };
      this.AddComponent((UsableMissionObjectComponent) this.MovementComponent);
    }

    protected internal override void OnDeploymentStateChanged(bool isDeployed)
    {
      base.OnDeploymentStateChanged(isDeployed);
      if (!((NativeObject) this._ditchFillDebris != (NativeObject) null))
        return;
      this._ditchFillDebris.SetVisibilityExcludeParents(isDeployed);
      if (GameNetwork.IsClientOrReplay)
        return;
      if (isDeployed)
      {
        Mission.Current.Scene.SetAbilityOfFacesWithId(this._bridgeNavMeshID_1, true);
        Mission.Current.Scene.SetAbilityOfFacesWithId(this._bridgeNavMeshID_2, true);
        Mission.Current.Scene.SeparateFacesWithId(this._ditchNavMeshID_1, this._groundToBridgeNavMeshID_1);
        Mission.Current.Scene.SeparateFacesWithId(this._ditchNavMeshID_2, this._groundToBridgeNavMeshID_2);
        Mission.Current.Scene.MergeFacesWithId(this._bridgeNavMeshID_1, this._groundToBridgeNavMeshID_1, 0);
        Mission.Current.Scene.MergeFacesWithId(this._bridgeNavMeshID_2, this._groundToBridgeNavMeshID_2, 0);
      }
      else
      {
        Mission.Current.Scene.SeparateFacesWithId(this._bridgeNavMeshID_1, this._groundToBridgeNavMeshID_1);
        Mission.Current.Scene.SeparateFacesWithId(this._bridgeNavMeshID_2, this._groundToBridgeNavMeshID_2);
        Mission.Current.Scene.SetAbilityOfFacesWithId(this._bridgeNavMeshID_1, false);
        Mission.Current.Scene.SetAbilityOfFacesWithId(this._bridgeNavMeshID_2, false);
        Mission.Current.Scene.MergeFacesWithId(this._ditchNavMeshID_1, this._groundToBridgeNavMeshID_1, 0);
        Mission.Current.Scene.MergeFacesWithId(this._ditchNavMeshID_2, this._groundToBridgeNavMeshID_2, 0);
      }
    }

    public MatrixFrame GetInitialFrame()
    {
      return this.MovementComponent != null ? this.MovementComponent.GetInitialFrame() : this.GameEntity.GetGlobalFrame();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    protected internal override void OnTickParallel(float dt)
    {
      base.OnTickParallel(dt);
      if (!this.GameEntity.IsVisibleIncludeParents())
        return;
      this.MovementComponent.TickParallelManually(dt);
      MatrixFrame boundEntityGlobalFrame = this.GameEntity.GetGlobalFrame();
      for (int index = 0; index < this._pullStandingPoints.Count; ++index)
      {
        StandingPoint pullStandingPoint = this._pullStandingPoints[index];
        if (pullStandingPoint.HasUser)
        {
          if (pullStandingPoint.UserAgent.IsInBeingStruckAction)
            pullStandingPoint.UserAgent.ClearHandInverseKinematics();
          else
            pullStandingPoint.UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(this._pullStandingPointLocalIKFrames[index], in boundEntityGlobalFrame);
        }
      }
      if (!this.MovementComponent.HasArrivedAtTarget || this.IsDeactivated)
        return;
      int notInStruckAction = this.UserCountNotInStruckAction;
      if (notInStruckAction <= 0)
        return;
      float parameterAtChannel = this._batteringRamBodySkeleton.GetAnimationParameterAtChannel(0);
      this.UpdateHitAnimationWithProgress((notInStruckAction - 1) / 2, parameterAtChannel);
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this.GameEntity.IsVisibleIncludeParents() || GameNetwork.IsClientOrReplay)
        return;
      if (this.MovementComponent.HasArrivedAtTarget && !this.HasArrivedAtTarget)
      {
        this.HasArrivedAtTarget = true;
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
          standingPoint.SetIsDeactivatedSynched(standingPoint.GameEntity.HasTag("move"));
        if (this.DisabledNavMeshID != 0)
          this.GameEntity.Scene.SetAbilityOfFacesWithId(this.DisabledNavMeshID, false);
      }
      if (!this.MovementComponent.HasArrivedAtTarget)
        return;
      if (this._gate == null || this._gate.IsDestroyed || this._gate.IsGateOpen)
      {
        if (this._isAllStandingPointsDisabled)
          return;
        foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
          standingPoint.SetIsDeactivatedSynched(true);
        this._isAllStandingPointsDisabled = true;
      }
      else
      {
        if (this._isAllStandingPointsDisabled && !this.IsDeactivated)
        {
          foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
            standingPoint.SetIsDeactivatedSynched(false);
          this._isAllStandingPointsDisabled = false;
        }
        int notInStruckAction = this.UserCountNotInStruckAction;
        switch (this.State)
        {
          case BatteringRam.RamState.Stable:
            if (notInStruckAction <= 0)
              break;
            this.State = BatteringRam.RamState.Hitting;
            this._usedPower = notInStruckAction;
            this._storedPower = 0.0f;
            this.StartHitAnimationWithProgress((notInStruckAction - 1) / 2, 0.0f);
            break;
          case BatteringRam.RamState.Hitting:
            if (notInStruckAction > 0 && this._gate != null && !this._gate.IsGateOpen)
            {
              int powerStage = (notInStruckAction - 1) / 2;
              float parameterAtChannel = this._batteringRamBodySkeleton.GetAnimationParameterAtChannel(0);
              if ((this._usedPower - 1) / 2 != powerStage)
                this.StartHitAnimationWithProgress(powerStage, parameterAtChannel);
              this._usedPower = notInStruckAction;
              this._storedPower += (float) this._usedPower * dt;
              double num1;
              switch (powerStage)
              {
                case 2:
                  num1 = 0.60000002384185791;
                  break;
                case 3:
                  num1 = 0.52999997138977051;
                  break;
                default:
                  num1 = 0.61000001430511475;
                  break;
              }
              float num2 = (float) num1;
              string str;
              switch (powerStage)
              {
                case 2:
                  str = "batteringram_fire_weak";
                  break;
                case 3:
                  str = "batteringram_fire";
                  break;
                default:
                  str = "batteringram_fire_weakest";
                  break;
              }
              string animationName = str;
              if ((double) parameterAtChannel < (double) num2)
                break;
              MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
              this._gate.DestructionComponent.TriggerOnHit(this.PilotAgent, (int) (this._storedPower * this.DamageMultiplier / (parameterAtChannel * MBAnimation.GetAnimationDuration(animationName))), globalFrame.origin, globalFrame.rotation.f, in MissionWeapon.Invalid, (ScriptComponentBehavior) this);
              this.State = BatteringRam.RamState.AfterHit;
              break;
            }
            this._batteringRamBody.GetFirstScriptOfType<SynchedMissionObject>().SetAnimationAtChannelSynched("batteringram_idle", 0);
            this.State = BatteringRam.RamState.Stable;
            break;
          case BatteringRam.RamState.AfterHit:
            if ((double) this._batteringRamBodySkeleton.GetAnimationParameterAtChannel(0) <= 0.99900001287460327)
              break;
            this.State = BatteringRam.RamState.Stable;
            break;
        }
      }
    }

    private void StartHitAnimationWithProgress(int powerStage, float progress)
    {
      string str;
      switch (powerStage)
      {
        case 1:
          str = "batteringram_fire_weak";
          break;
        case 2:
          str = "batteringram_fire";
          break;
        default:
          str = "batteringram_fire_weakest";
          break;
      }
      string animationName = str;
      this._batteringRamBody.GetFirstScriptOfType<SynchedMissionObject>().SetAnimationAtChannelSynched(animationName, 0);
      if ((double) progress > 0.0)
        this._batteringRamBody.GetFirstScriptOfType<SynchedMissionObject>().SetAnimationChannelParameterSynched(0, progress);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasUser && standingPoint.GameEntity.HasTag("pull"))
        {
          ActionIndexCache forStandingPoint = this.GetActionCodeForStandingPoint(standingPoint, powerStage);
          if (!standingPoint.UserAgent.SetActionChannel(1, forStandingPoint, startProgress: progress) && standingPoint.UserAgent.Controller == Agent.ControllerType.AI)
            standingPoint.UserAgent.StopUsingGameObject(false);
        }
      }
    }

    private void UpdateHitAnimationWithProgress(int powerStage, float progress)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasUser && standingPoint.GameEntity.HasTag("pull"))
        {
          ActionIndexCache forStandingPoint = this.GetActionCodeForStandingPoint(standingPoint, powerStage);
          if (standingPoint.UserAgent.GetCurrentActionValue(1) == forStandingPoint)
            standingPoint.UserAgent.SetCurrentActionProgress(1, progress);
        }
      }
    }

    private ActionIndexCache GetActionCodeForStandingPoint(
      StandingPoint standingPoint,
      int powerStage)
    {
      bool flag = standingPoint.GameEntity.HasTag("right");
      ActionIndexCache forStandingPoint = ActionIndexCache.act_none;
      switch (powerStage)
      {
        case 0:
          forStandingPoint = flag ? BatteringRam.act_usage_batteringram_left_slowest : BatteringRam.act_usage_batteringram_right_slowest;
          break;
        case 1:
          forStandingPoint = flag ? BatteringRam.act_usage_batteringram_left_slower : BatteringRam.act_usage_batteringram_right_slower;
          break;
        case 2:
          forStandingPoint = flag ? BatteringRam.act_usage_batteringram_left : BatteringRam.act_usage_batteringram_right;
          break;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\BatteringRam.cs", nameof (GetActionCodeForStandingPoint), 590);
          break;
      }
      return forStandingPoint;
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new BatteringRamAI(this);
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this._state = BatteringRam.RamState.Stable;
      this._hasArrivedAtTarget = false;
      this._batteringRamBodySkeleton.SetAnimationAtChannel("batteringram_idle", 0, blendInPeriod: 0.0f);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDeactivated = !standingPoint.GameEntity.HasTag("move");
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteBoolToPacket(this.HasArrivedAtTarget);
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.BatteringRamStateCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.MovementComponent.GetTotalDistanceTraveledForPathTracker(), CompressionBasic.PositionCompressionInfo);
    }

    public override bool IsDeactivated
    {
      get
      {
        return this._gate == null || this._gate.IsDestroyed || this._gate.State == CastleGate.GateState.Open && this.HasArrivedAtTarget || base.IsDeactivated;
      }
    }

    public void HighlightPath() => this.MovementComponent.HighlightPath();

    public void SwitchGhostEntityMovementMode(bool isGhostEnabled)
    {
      if (isGhostEnabled)
      {
        if (!this._isGhostMovementOn)
        {
          this.RemoveComponent((UsableMissionObjectComponent) this.MovementComponent);
          this.SetUpGhostEntity();
          this.GhostEntityMove = true;
          SiegeWeaponMovementComponent component = this.GetComponent<SiegeWeaponMovementComponent>();
          component.GhostEntitySpeedMultiplier *= 3f;
          component.SetGhostVisibility(true);
        }
        this._isGhostMovementOn = true;
      }
      else
      {
        if (this._isGhostMovementOn)
        {
          this.RemoveComponent((UsableMissionObjectComponent) this.MovementComponent);
          this.RemoveComponent((UsableMissionObjectComponent) this.GetComponent<PathLastNodeFixer>());
          this.AddRegularMovementComponent();
          this.MovementComponent.SetGhostVisibility(false);
        }
        this._isGhostMovementOn = false;
      }
    }

    private void SetUpGhostEntity()
    {
      this.AddComponent((UsableMissionObjectComponent) new PathLastNodeFixer()
      {
        PathHolder = (IPathHolder) this
      });
      this.MovementComponent = new SiegeWeaponMovementComponent()
      {
        PathEntityName = this.PathEntity,
        MainObject = (SynchedMissionObject) this,
        GhostEntitySpeedMultiplier = this.GhostEntitySpeedMultiplier
      };
      this.AddComponent((UsableMissionObjectComponent) this.MovementComponent);
      this.MovementComponent.SetupGhostEntity();
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return new TextObject("{=MaBSSg7I}Battering Ram").ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = usableGameObject.GameEntity.HasTag("pull") ? new TextObject("{=1cnJtNTt}{KEY} Pull") : new TextObject("{=rwZAZSvX}{KEY} Move");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override OrderType GetOrder(BattleSideEnum side)
    {
      if (this.IsDestroyed)
        return OrderType.None;
      if (side != BattleSideEnum.Attacker)
        return OrderType.AttackEntity;
      return !this.HasCompletedAction() ? OrderType.FollowEntity : OrderType.Use;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags1 = TargetFlags.None;
      if (this.UserCountNotInStruckAction > 0)
        targetFlags1 |= TargetFlags.IsMoving;
      TargetFlags targetFlags2 = targetFlags1 | TargetFlags.IsSiegeEngine | TargetFlags.IsAttacker;
      if (this.Side == BattleSideEnum.Attacker && DebugSiegeBehavior.DebugDefendState == DebugSiegeBehavior.DebugStateDefender.DebugDefendersToRam)
        targetFlags2 |= TargetFlags.DebugThreat;
      if (this.HasCompletedAction() || this.IsDestroyed || this.IsDeactivated)
        targetFlags2 |= TargetFlags.NotAThreat;
      return targetFlags2;
    }

    public override float GetTargetValue(List<Vec3> weaponPos)
    {
      return 300f * this.GetUserMultiplierOfWeapon() * this.GetDistanceMultiplierOfWeapon(weaponPos[0]) * this.GetHitPointMultiplierOfWeapon();
    }

    protected override float GetDistanceMultiplierOfWeapon(Vec3 weaponPos)
    {
      float betweenPositions = this.GetMinimumDistanceBetweenPositions(weaponPos);
      if ((double) betweenPositions < 100.0)
        return 1f;
      return (double) betweenPositions < 625.0 ? 0.8f : 0.6f;
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;

    public void AssignParametersFromSpawner(
      string gateTag,
      string sideTag,
      int bridgeNavMeshID_1,
      int bridgeNavMeshID_2,
      int ditchNavMeshID_1,
      int ditchNavMeshID_2,
      int groundToBridgeNavMeshID_1,
      int groundToBridgeNavMeshID_2,
      string pathEntityName)
    {
      this._gateTag = gateTag;
      this._sideTag = sideTag;
      this._bridgeNavMeshID_1 = bridgeNavMeshID_1;
      this._bridgeNavMeshID_2 = bridgeNavMeshID_2;
      this._ditchNavMeshID_1 = ditchNavMeshID_1;
      this._ditchNavMeshID_2 = ditchNavMeshID_2;
      this._groundToBridgeNavMeshID_1 = groundToBridgeNavMeshID_1;
      this._groundToBridgeNavMeshID_2 = groundToBridgeNavMeshID_2;
      this._pathEntityName = pathEntityName;
    }

    public bool GetNavmeshFaceIds(out List<int> navmeshFaceIds)
    {
      navmeshFaceIds = (List<int>) null;
      return false;
    }

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      BatteringRam.BatteringRamRecord batteringRamRecord = (BatteringRam.BatteringRamRecord) synchedMissionObjectReadableRecord.Item2;
      this.HasArrivedAtTarget = batteringRamRecord.HasArrivedAtTarget;
      this._state = (BatteringRam.RamState) batteringRamRecord.State;
      this.MovementComponent.SetTotalDistanceTraveledForPathTracker(batteringRamRecord.TotalDistanceTraveled + 0.05f);
      this.MovementComponent.SetTargetFrameForPathTracker();
    }

    [DefineSynchedMissionObjectType(typeof (BatteringRam))]
    public struct BatteringRamRecord : ISynchedMissionObjectReadableRecord
    {
      public bool HasArrivedAtTarget { get; private set; }

      public int State { get; private set; }

      public float TotalDistanceTraveled { get; private set; }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.HasArrivedAtTarget = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.State = GameNetworkMessage.ReadIntFromPacket(CompressionMission.BatteringRamStateCompressionInfo, ref bufferReadValid);
        this.TotalDistanceTraveled = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
        return bufferReadValid;
      }
    }

    public enum RamState
    {
      Stable,
      Hitting,
      AfterHit,
      NumberOfStates,
    }
  }
}
