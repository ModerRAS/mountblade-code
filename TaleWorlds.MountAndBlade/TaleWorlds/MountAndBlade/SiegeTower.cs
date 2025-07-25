// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeTower
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
  public class SiegeTower : 
    SiegeWeapon,
    IPathHolder,
    IPrimarySiegeWeapon,
    IMoveableSiegeWeapon,
    ISpawnable
  {
    private const int LeftLadderNavMeshIdLocal = 5;
    private const int MiddleLadderNavMeshIdLocal = 6;
    private const int RightLadderNavMeshIdLocal = 7;
    private const string BreakableWallTag = "breakable_wall";
    private const string DestroyedWallTag = "destroyed";
    private const string NonDestroyedWallTag = "non_destroyed";
    private const string LadderTag = "ladder";
    private const string BattlementDestroyedParticleTag = "particle_spawnpoint";
    public string GateTag = "gate";
    public string GateOpenTag = "gateOpen";
    public string HandleTag = "handle";
    public string GateHandleIdleAnimation = "siegetower_handle_idle";
    private int _gateHandleIdleAnimationIndex = -1;
    public string GateTrembleAnimation = "siegetower_door_stop";
    private int _gateTrembleAnimationIndex = -1;
    public string BattlementDestroyedParticle = "psys_adobe_battlement_destroyed";
    private string _targetWallSegmentTag;
    public bool GhostEntityMove = true;
    public float GhostEntitySpeedMultiplier = 1f;
    private string _sideTag;
    private bool _hasLadders;
    public float WheelDiameter = 1.3f;
    public float MinSpeed = 0.5f;
    public float MaxSpeed = 1f;
    public int GateNavMeshId;
    public int NavMeshIdToDisableOnDestination = -1;
    private int _soilNavMeshID1;
    private int _soilNavMeshID2;
    private int _ditchNavMeshID1;
    private int _ditchNavMeshID2;
    private int _groundToSoilNavMeshID1;
    private int _groundToSoilNavMeshID2;
    private int _soilGenericNavMeshID;
    private int _groundGenericNavMeshID;
    public string BarrierTagToRemove = "barrier";
    private List<GameEntity> _aiBarriers;
    private bool _isGhostMovementOn;
    private bool _hasArrivedAtTarget;
    private SiegeTower.GateState _state;
    private SynchedMissionObject _gateObject;
    private SynchedMissionObject _handleObject;
    private SoundEvent _gateOpenSound;
    private int _gateOpenSoundIndex = -1;
    private Mat3 _openStateRotation;
    private Mat3 _closedStateRotation;
    private float _fallAngularSpeed;
    private GameEntity _cleanState;
    private GameEntity _destroyedWallEntity;
    private GameEntity _nonDestroyedWallEntity;
    private GameEntity _battlementDestroyedParticle;
    private StandingPoint _gateStandingPoint;
    private MatrixFrame _gateStandingPointLocalIKFrame;
    private SynchedMissionObject _ditchFillDebris;
    private List<LadderQueueManager> _queueManagers;
    private WallSegment _targetWallSegment;
    private List<SiegeLadder> _sameSideSiegeLadders;

    public MissionObject TargetCastlePosition => (MissionObject) this._targetWallSegment;

    private GameEntity CleanState
    {
      get
      {
        return !((NativeObject) this._cleanState == (NativeObject) null) ? this._cleanState : this.GameEntity;
      }
      set => this._cleanState = value;
    }

    public FormationAI.BehaviorSide WeaponSide { get; private set; }

    public string PathEntity { get; private set; }

    public bool EditorGhostEntityMove => this.GhostEntityMove;

    public bool HasCompletedAction()
    {
      return !this.IsDisabled && this.IsDeactivated && this._hasArrivedAtTarget && !this.IsDestroyed;
    }

    public float SiegeWeaponPriority => 20f;

    public int OverTheWallNavMeshID => this.GetGateNavMeshId();

    public SiegeWeaponMovementComponent MovementComponent { get; private set; }

    public bool HoldLadders => !this.MovementComponent.HasArrivedAtTarget;

    public bool SendLadders => this.MovementComponent.HasArrivedAtTarget;

    public int GetGateNavMeshId()
    {
      if (this.GateNavMeshId != 0)
        return this.GateNavMeshId;
      return this.DynamicNavmeshIdStart == 0 ? 0 : this.DynamicNavmeshIdStart + 3;
    }

    public List<int> CollectGetDifficultNavmeshIDs()
    {
      List<int> difficultNavmeshIds = new List<int>();
      if (!this._hasLadders)
        return difficultNavmeshIds;
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 1);
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 5);
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 6);
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 7);
      return difficultNavmeshIds;
    }

    public List<int> CollectGetDifficultNavmeshIDsForAttackers()
    {
      List<int> navmeshIdsForAttackers = new List<int>();
      if (!this._hasLadders)
        return navmeshIdsForAttackers;
      List<int> difficultNavmeshIds = this.CollectGetDifficultNavmeshIDs();
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 3);
      return difficultNavmeshIds;
    }

    public List<int> CollectGetDifficultNavmeshIDsForDefenders()
    {
      List<int> navmeshIdsForDefenders = new List<int>();
      if (!this._hasLadders)
        return navmeshIdsForDefenders;
      List<int> difficultNavmeshIds = this.CollectGetDifficultNavmeshIDs();
      difficultNavmeshIds.Add(this.DynamicNavmeshIdStart + 2);
      return difficultNavmeshIds;
    }

    public bool HasArrivedAtTarget
    {
      get => this._hasArrivedAtTarget;
      set
      {
        if (!GameNetwork.IsClientOrReplay)
          this.MovementComponent.SetDestinationNavMeshIdState(!this.HasArrivedAtTarget);
        if (this._hasArrivedAtTarget == value)
          return;
        this._hasArrivedAtTarget = value;
        if (this._hasArrivedAtTarget)
        {
          this.ActiveWaitStandingPoint = this.WaitStandingPoints[1];
          if (!GameNetwork.IsClientOrReplay)
          {
            foreach (LadderQueueManager queueManager in this._queueManagers)
            {
              this.CleanState.Scene.SetAbilityOfFacesWithId(queueManager.ManagedNavigationFaceId, true);
              queueManager.Activate();
            }
          }
        }
        else if (!GameNetwork.IsClientOrReplay && this.GetGateNavMeshId() > 0)
          this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), false);
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetSiegeTowerHasArrivedAtTarget(this.Id));
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

    public SiegeTower.GateState State
    {
      get => this._state;
      set
      {
        if (this._state == value)
          return;
        if (GameNetwork.IsServerOrRecorder)
        {
          GameNetwork.BeginBroadcastModuleEvent();
          GameNetwork.WriteMessage((GameNetworkMessage) new SetSiegeTowerGateState(this.Id, value));
          GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.AddToMissionRecord);
        }
        this._state = value;
        this.OnSiegeTowerGateStateChange();
      }
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return (NativeObject) gameEntity == (NativeObject) null || !gameEntity.HasScriptOfType<UsableMissionObject>() || gameEntity.HasTag("move") ? new TextObject("{=aXjlMBiE}Siege Tower").ToString() : new TextObject("{=6wZUG0ev}Gate").ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = usableGameObject.GameEntity.HasTag("move") ? new TextObject("{=rwZAZSvX}{KEY} Move") : new TextObject("{=5oozsaIb}{KEY} Open");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override void WriteToNetwork()
    {
      base.WriteToNetwork();
      GameNetworkMessage.WriteBoolToPacket(this.HasArrivedAtTarget);
      GameNetworkMessage.WriteIntToPacket((int) this.State, CompressionMission.SiegeTowerGateStateCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this._fallAngularSpeed, CompressionMission.SiegeMachineComponentAngularSpeedCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.MovementComponent.GetTotalDistanceTraveledForPathTracker(), CompressionBasic.PositionCompressionInfo);
    }

    public override OrderType GetOrder(BattleSideEnum side)
    {
      if (this.IsDestroyed)
        return OrderType.None;
      if (side != BattleSideEnum.Attacker)
        return OrderType.AttackEntity;
      return this.HasCompletedAction() ? OrderType.Use : OrderType.FollowEntity;
    }

    public override TargetFlags GetTargetFlags()
    {
      TargetFlags targetFlags1 = TargetFlags.None;
      if (this.UserCountNotInStruckAction > 0)
        targetFlags1 |= TargetFlags.IsMoving;
      TargetFlags targetFlags2 = targetFlags1 | TargetFlags.IsSiegeEngine | TargetFlags.IsAttacker;
      if (this.HasCompletedAction() || this.IsDestroyed || this.IsDeactivated)
        targetFlags2 |= TargetFlags.NotAThreat;
      if (this.Side == BattleSideEnum.Attacker && DebugSiegeBehavior.DebugDefendState == DebugSiegeBehavior.DebugStateDefender.DebugDefendersToTower)
        targetFlags2 |= TargetFlags.DebugThreat;
      return targetFlags2 | TargetFlags.IsSiegeTower;
    }

    public override float GetTargetValue(List<Vec3> weaponPos)
    {
      return 90f * this.GetUserMultiplierOfWeapon() * this.GetDistanceMultiplierOfWeapon(weaponPos[0]) * this.GetHitPointMultiplierOfWeapon();
    }

    public override void Disable()
    {
      base.Disable();
      this.SetAbilityOfFaces(false);
      if (this._queueManagers == null)
        return;
      foreach (LadderQueueManager queueManager in this._queueManagers)
      {
        this.CleanState.Scene.SetAbilityOfFacesWithId(queueManager.ManagedNavigationFaceId, false);
        queueManager.DeactivateImmediate();
      }
    }

    public override SiegeEngineType GetSiegeEngineType() => DefaultSiegeEngineTypes.SiegeTower;

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new SiegeTowerAI(this);
    }

    public override bool IsDeactivated
    {
      get
      {
        return this.MovementComponent.HasArrivedAtTarget && this.State == SiegeTower.GateState.Open || base.IsDeactivated;
      }
    }

    protected internal override void OnDeploymentStateChanged(bool isDeployed)
    {
      base.OnDeploymentStateChanged(isDeployed);
      if (this._ditchFillDebris != null)
      {
        if (!GameNetwork.IsClientOrReplay)
          this._ditchFillDebris.SetVisibleSynched(isDeployed);
        if (!GameNetwork.IsClientOrReplay)
        {
          if (isDeployed)
          {
            if (this._soilGenericNavMeshID > 0)
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilGenericNavMeshID, true);
            if (this._soilNavMeshID1 > 0 && this._groundToSoilNavMeshID1 > 0 && this._ditchNavMeshID1 > 0)
            {
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilNavMeshID1, true);
              Mission.Current.Scene.SwapFaceConnectionsWithID(this._groundToSoilNavMeshID1, this._ditchNavMeshID1, this._soilNavMeshID1);
            }
            if (this._soilNavMeshID2 > 0 && this._groundToSoilNavMeshID2 > 0 && this._ditchNavMeshID2 > 0)
            {
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilNavMeshID2, true);
              Mission.Current.Scene.SwapFaceConnectionsWithID(this._groundToSoilNavMeshID2, this._ditchNavMeshID2, this._soilNavMeshID2);
            }
            if (this._groundGenericNavMeshID > 0)
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._groundGenericNavMeshID, false);
          }
          else
          {
            if (this._groundGenericNavMeshID > 0)
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._groundGenericNavMeshID, true);
            if (this._soilNavMeshID1 > 0 && this._groundToSoilNavMeshID1 > 0 && this._ditchNavMeshID1 > 0)
            {
              Mission.Current.Scene.SwapFaceConnectionsWithID(this._groundToSoilNavMeshID1, this._soilNavMeshID1, this._ditchNavMeshID1);
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilNavMeshID1, false);
            }
            if (this._soilNavMeshID2 > 0 && this._groundToSoilNavMeshID2 > 0 && this._ditchNavMeshID2 > 0)
            {
              Mission.Current.Scene.SwapFaceConnectionsWithID(this._groundToSoilNavMeshID2, this._soilNavMeshID2, this._ditchNavMeshID2);
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilNavMeshID2, false);
            }
            if (this._soilGenericNavMeshID > 0)
              Mission.Current.Scene.SetAbilityOfFacesWithId(this._soilGenericNavMeshID, false);
          }
        }
      }
      if (this._sameSideSiegeLadders == null)
        this._sameSideSiegeLadders = Mission.Current.ActiveMissionObjects.FindAllWithType<SiegeLadder>().Where<SiegeLadder>((Func<SiegeLadder, bool>) (sl => sl.WeaponSide == this.WeaponSide)).ToList<SiegeLadder>();
      foreach (ScriptComponentBehavior sameSideSiegeLadder in this._sameSideSiegeLadders)
        sameSideSiegeLadder.GameEntity.SetVisibilityExcludeParents(!isDeployed);
    }

    protected override void AttachDynamicNavmeshToEntity()
    {
      if (this.NavMeshPrefabName.Length <= 0)
        return;
      this.DynamicNavmeshIdStart = Mission.Current.GetNextDynamicNavMeshIdStart();
      this.CleanState.Scene.ImportNavigationMeshPrefab(this.NavMeshPrefabName, this.DynamicNavmeshIdStart);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 1, false);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 2, true);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 4, false, true);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 5, false);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 6, false);
      this.GetEntityToAttachNavMeshFaces().AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 7, false);
    }

    protected override GameEntity GetEntityToAttachNavMeshFaces() => this.CleanState;

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      this.MovementComponent?.OnRemoved();
    }

    public override void SetAbilityOfFaces(bool enabled)
    {
      base.SetAbilityOfFaces(enabled);
      if (this._queueManagers == null)
        return;
      foreach (LadderQueueManager queueManager in this._queueManagers)
      {
        this.CleanState.Scene.SetAbilityOfFacesWithId(queueManager.ManagedNavigationFaceId, enabled);
        if (queueManager.IsDeactivated != !enabled)
        {
          if (enabled)
            queueManager.Activate();
          else
            queueManager.DeactivateImmediate();
        }
      }
    }

    protected override float GetDistanceMultiplierOfWeapon(Vec3 weaponPos)
    {
      float betweenPositions = this.GetMinimumDistanceBetweenPositions(weaponPos);
      if ((double) betweenPositions < 10.0)
        return 1f;
      return (double) betweenPositions < 25.0 ? 0.8f : 0.6f;
    }

    private bool IsNavmeshOnThisTowerAttackerDifficultNavmeshIDs(int testedNavmeshID)
    {
      if (!this._hasLadders)
        return false;
      return testedNavmeshID == this.DynamicNavmeshIdStart + 1 || testedNavmeshID == this.DynamicNavmeshIdStart + 5 || testedNavmeshID == this.DynamicNavmeshIdStart + 6 || testedNavmeshID == this.DynamicNavmeshIdStart + 7 || testedNavmeshID == this.DynamicNavmeshIdStart + 3;
    }

    protected override bool IsAgentOnInconvenientNavmesh(Agent agent, StandingPoint standingPoint)
    {
      if (Mission.Current.MissionTeamAIType != Mission.MissionTeamAITypeEnum.Siege)
        return false;
      int navigationFaceId = agent.GetCurrentNavigationFaceId();
      if (agent.Team.TeamAI is TeamAISiegeComponent teamAi)
      {
        if (teamAi is TeamAISiegeDefender && navigationFaceId % 10 != 1)
          return true;
        foreach (int difficultNavmeshId in teamAi.DifficultNavmeshIDs)
        {
          if (navigationFaceId == difficultNavmeshId)
            return standingPoint != this._gateStandingPoint || !this.IsNavmeshOnThisTowerAttackerDifficultNavmeshIDs(navigationFaceId);
        }
        if (teamAi is TeamAISiegeAttacker && navigationFaceId % 10 == 1)
          return true;
      }
      return false;
    }

    protected internal override void OnInit()
    {
      this.CleanState = this.GameEntity.GetFirstChildEntityWithTag("body");
      base.OnInit();
      this.DestructionComponent.OnDestroyed += new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnDestroyed);
      this.DestructionComponent.BattleSide = BattleSideEnum.Attacker;
      this._aiBarriers = this.Scene.FindEntitiesWithTag(this.BarrierTagToRemove).ToList<GameEntity>();
      if (!GameNetwork.IsClientOrReplay && this._soilGenericNavMeshID > 0)
        this.CleanState.Scene.SetAbilityOfFacesWithId(this._soilGenericNavMeshID, false);
      List<SynchedMissionObject> synchedMissionObjectList1 = this.CleanState.CollectObjectsWithTag<SynchedMissionObject>(this.GateTag);
      if (synchedMissionObjectList1.Count > 0)
        this._gateObject = synchedMissionObjectList1[0];
      this.AddRegularMovementComponent();
      List<GameEntity> list = this.Scene.FindEntitiesWithTag("breakable_wall").ToList<GameEntity>();
      if (!list.IsEmpty<GameEntity>())
      {
        float num = 1E+07f;
        GameEntity entity = (GameEntity) null;
        MatrixFrame targetFrame = this.MovementComponent.GetTargetFrame();
        foreach (GameEntity gameEntity in list)
        {
          float lengthSquared = (gameEntity.GlobalPosition - targetFrame.origin).LengthSquared;
          if ((double) lengthSquared < (double) num)
          {
            num = lengthSquared;
            entity = gameEntity;
          }
        }
        List<GameEntity> gameEntityList1 = entity.CollectChildrenEntitiesWithTag("destroyed");
        if (gameEntityList1.Count > 0)
          this._destroyedWallEntity = gameEntityList1[0];
        List<GameEntity> gameEntityList2 = entity.CollectChildrenEntitiesWithTag("non_destroyed");
        if (gameEntityList2.Count > 0)
          this._nonDestroyedWallEntity = gameEntityList2[0];
        List<GameEntity> gameEntityList3 = entity.CollectChildrenEntitiesWithTag("particle_spawnpoint");
        if (gameEntityList3.Count > 0)
          this._battlementDestroyedParticle = gameEntityList3[0];
      }
      List<SynchedMissionObject> synchedMissionObjectList2 = this.CleanState.CollectObjectsWithTag<SynchedMissionObject>(this.HandleTag);
      this._handleObject = synchedMissionObjectList2.Count < 1 ? (SynchedMissionObject) null : synchedMissionObjectList2[0];
      this._gateHandleIdleAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.GateHandleIdleAnimation);
      this._gateTrembleAnimationIndex = MBAnimation.GetAnimationIndexWithName(this.GateTrembleAnimation);
      this._queueManagers = new List<LadderQueueManager>();
      if (!GameNetwork.IsClientOrReplay)
      {
        List<GameEntity> source = this.CleanState.CollectChildrenEntitiesWithTag("ladder");
        if (source.Count > 0)
        {
          this._hasLadders = true;
          GameEntity gameEntity1 = source.ElementAt<GameEntity>(source.Count / 2);
          foreach (GameEntity gameEntity2 in source)
          {
            if (gameEntity2.Name.Contains("middle"))
            {
              gameEntity1 = gameEntity2;
            }
            else
            {
              LadderQueueManager ladderQueueManager = gameEntity2.GetScriptComponents<LadderQueueManager>().FirstOrDefault<LadderQueueManager>();
              ladderQueueManager.Initialize(-1, MatrixFrame.Identity, Vec3.Zero, BattleSideEnum.None, int.MaxValue, 1f, 5f, 5f, 5f, 0.0f, false, 1f, 0.0f, 0.0f, false, -1, -1, int.MaxValue, int.MaxValue);
              ladderQueueManager.DeactivateImmediate();
            }
          }
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
          LadderQueueManager ladderQueueManager1 = gameEntity1.GetScriptComponents<LadderQueueManager>().FirstOrDefault<LadderQueueManager>();
          if (ladderQueueManager1 != null)
          {
            MatrixFrame identity = MatrixFrame.Identity;
            identity.rotation.RotateAboutSide(1.57079637f);
            identity.rotation.RotateAboutForward(0.3926991f);
            ladderQueueManager1.Initialize(this.DynamicNavmeshIdStart + 5, identity, new Vec3(z: 1f), BattleSideEnum.Attacker, source.Count * 2, 0.7853982f, 2f, 1f, 4f, 3f, false, 0.8f, (float) ((double) num1 * 2.0 / 3.0), 5f, source.Count > 1, this.DynamicNavmeshIdStart + 6, this.DynamicNavmeshIdStart + 7, num1 * MathF.Round((float) source.Count * 0.666f), source.Count + 1);
            this._queueManagers.Add(ladderQueueManager1);
          }
          this.GameEntity.Scene.MarkFacesWithIdAsLadder(5, true);
          this.GameEntity.Scene.MarkFacesWithIdAsLadder(6, true);
          this.GameEntity.Scene.MarkFacesWithIdAsLadder(7, true);
        }
        else
        {
          this._hasLadders = false;
          LadderQueueManager ladderQueueManager = this.CleanState.GetScriptComponents<LadderQueueManager>().FirstOrDefault<LadderQueueManager>();
          if (ladderQueueManager != null)
          {
            MatrixFrame identity = MatrixFrame.Identity;
            identity.origin.y += 4f;
            identity.rotation.RotateAboutSide(-1.57079637f);
            identity.rotation.RotateAboutUp(3.14159274f);
            ladderQueueManager.Initialize(this.DynamicNavmeshIdStart + 2, identity, new Vec3(y: -1f), BattleSideEnum.Attacker, 15, 0.7853982f, 2f, 1f, 3f, 1f, false, 0.8f, 4f, 5f, false, -2, -2, int.MaxValue, 15);
            this._queueManagers.Add(ladderQueueManager);
          }
        }
      }
      this._state = SiegeTower.GateState.Closed;
      this._gateOpenSoundIndex = SoundEvent.GetEventIdFromString("event:/mission/siege/siegetower/dooropen");
      this._closedStateRotation = this._gateObject.GameEntity.GetFrame().rotation;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        standingPoint.AddComponent((UsableMissionObjectComponent) new ResetAnimationOnStopUsageComponent(ActionIndexCache.act_none));
        if (!standingPoint.GameEntity.HasTag("move"))
        {
          this._gateStandingPoint = standingPoint;
          standingPoint.IsDeactivated = true;
          this._gateStandingPointLocalIKFrame = standingPoint.GameEntity.GetGlobalFrame().TransformToLocal(this.CleanState.GetGlobalFrame());
          standingPoint.AddComponent((UsableMissionObjectComponent) new ClearHandInverseKinematicsOnStopUsageComponent());
        }
      }
      if ((double) this.WaitStandingPoints[0].GlobalPosition.z > (double) this.WaitStandingPoints[1].GlobalPosition.z)
      {
        GameEntity waitStandingPoint = this.WaitStandingPoints[0];
        this.WaitStandingPoints[0] = this.WaitStandingPoints[1];
        this.WaitStandingPoints[1] = waitStandingPoint;
        this.ActiveWaitStandingPoint = this.WaitStandingPoints[0];
      }
      IEnumerable<GameEntity> source1 = this.Scene.FindEntitiesWithTag(this._targetWallSegmentTag).ToList<GameEntity>().Where<GameEntity>((Func<GameEntity, bool>) (ewtwst => ewtwst.HasScriptOfType<WallSegment>()));
      if (!source1.IsEmpty<GameEntity>())
      {
        this._targetWallSegment = source1.First<GameEntity>().GetFirstScriptOfType<WallSegment>();
        this._targetWallSegment.AttackerSiegeWeapon = (IPrimarySiegeWeapon) this;
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
      if (!GameNetwork.IsClientOrReplay)
      {
        if (this.GetGateNavMeshId() != 0)
          this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), false);
        foreach (LadderQueueManager queueManager in this._queueManagers)
        {
          this.CleanState.Scene.SetAbilityOfFacesWithId(queueManager.ManagedNavigationFaceId, false);
          queueManager.DeactivateImmediate();
        }
      }
      GameEntity gameEntity3 = this.Scene.FindEntitiesWithTag("ditch_filler").FirstOrDefault<GameEntity>((Func<GameEntity, bool>) (df => df.HasTag(this._sideTag)));
      if ((NativeObject) gameEntity3 != (NativeObject) null)
        this._ditchFillDebris = gameEntity3.GetFirstScriptOfType<SynchedMissionObject>();
      if (!GameNetwork.IsClientOrReplay)
        this._gateObject.GameEntity.AttachNavigationMeshFaces(this.DynamicNavmeshIdStart + 3, true);
      this.SetScriptComponentToTick(this.GetTickRequirement());
      Mission.Current.AddToWeaponListForFriendlyFirePreventing((SiegeWeapon) this);
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return this.GameEntity.IsVisibleIncludeParents() ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this.CleanState.IsVisibleIncludeParents())
        return;
      if (!GameNetwork.IsClientOrReplay)
      {
        foreach (StandingPoint standingPoint1 in (List<StandingPoint>) this.StandingPoints)
        {
          if (standingPoint1.GameEntity.HasTag("move"))
          {
            standingPoint1.SetIsDeactivatedSynched(this.MovementComponent.HasArrivedAtTarget);
          }
          else
          {
            StandingPoint standingPoint2 = standingPoint1;
            int num;
            if (this.MovementComponent.HasArrivedAtTarget && this.State != SiegeTower.GateState.Open)
            {
              if (this.State == SiegeTower.GateState.GateFalling || this.State == SiegeTower.GateState.GateFallingWallDestroyed)
              {
                Agent userAgent = standingPoint1.UserAgent;
                num = userAgent != null ? (userAgent.IsPlayerControlled ? 1 : 0) : 0;
              }
              else
                num = 0;
            }
            else
              num = 1;
            standingPoint2.SetIsDeactivatedSynched(num != 0);
          }
        }
      }
      if (!GameNetwork.IsClientOrReplay && this.MovementComponent.HasArrivedAtTarget && !this.HasArrivedAtTarget)
      {
        this.HasArrivedAtTarget = true;
        this.ActiveWaitStandingPoint = this.WaitStandingPoints[1];
      }
      if (!this.HasArrivedAtTarget)
        return;
      switch (this.State)
      {
        case SiegeTower.GateState.Closed:
          if (GameNetwork.IsClientOrReplay || this.UserCountNotInStruckAction <= 0)
            break;
          this.State = SiegeTower.GateState.GateFalling;
          break;
        case SiegeTower.GateState.Open:
          break;
        case SiegeTower.GateState.GateFalling:
          MatrixFrame frame1 = this._gateObject.GameEntity.GetFrame();
          frame1.rotation.RotateAboutSide(this._fallAngularSpeed * dt);
          this._gateObject.GameEntity.SetFrame(ref frame1);
          if ((double) Vec3.DotProduct(frame1.rotation.u, this._openStateRotation.f) < 0.02500000037252903)
            this.State = SiegeTower.GateState.GateFallingWallDestroyed;
          this._fallAngularSpeed += dt * 2f * MathF.Max(0.3f, 1f - frame1.rotation.u.z);
          break;
        case SiegeTower.GateState.GateFallingWallDestroyed:
          MatrixFrame frame2 = this._gateObject.GameEntity.GetFrame();
          frame2.rotation.RotateAboutSide(this._fallAngularSpeed * dt);
          this._gateObject.GameEntity.SetFrame(ref frame2);
          float num1 = Vec3.DotProduct(frame2.rotation.u, this._openStateRotation.f);
          if ((double) this._fallAngularSpeed > 0.0 && (double) num1 < 0.05000000074505806)
          {
            frame2.rotation = this._openStateRotation;
            this._gateObject.GameEntity.SetFrame(ref frame2);
            this._gateObject.GameEntity.Skeleton.SetAnimationAtChannel(this._gateTrembleAnimationIndex, 0);
            this._gateOpenSound?.Stop();
            if (!GameNetwork.IsClientOrReplay)
              this.State = SiegeTower.GateState.Open;
          }
          this._fallAngularSpeed += dt * 3f * MathF.Max(0.3f, 1f - frame2.rotation.u.z);
          break;
        default:
          Debug.FailedAssert("Invalid gate state.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Siege\\SiegeTower.cs", nameof (OnTick), 974);
          break;
      }
    }

    protected internal override void OnTickParallel(float dt)
    {
      base.OnTickParallel(dt);
      if (!this.CleanState.IsVisibleIncludeParents())
        return;
      this.MovementComponent.TickParallelManually(dt);
      if (!this._gateStandingPoint.HasUser)
        return;
      Agent userAgent = this._gateStandingPoint.UserAgent;
      if (userAgent.IsInBeingStruckAction)
        userAgent.ClearHandInverseKinematics();
      else
        this._gateStandingPoint.UserAgent.SetHandInverseKinematicsFrameForMissionObjectUsage(in this._gateStandingPointLocalIKFrame, this.CleanState.GetGlobalFrame());
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      if (!GameNetwork.IsClientOrReplay && this.GetGateNavMeshId() > 0)
        this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), false);
      this._state = SiegeTower.GateState.Closed;
      this._hasArrivedAtTarget = false;
      MatrixFrame frame = this._gateObject.GameEntity.GetFrame() with
      {
        rotation = this._closedStateRotation
      };
      SynchedMissionObject handleObject = this._handleObject;
      if (handleObject != null)
        handleObject.GameEntity.Skeleton.SetAnimationAtChannel(-1, 0);
      this._gateObject.GameEntity.Skeleton.SetAnimationAtChannel(-1, 0);
      this._gateObject.GameEntity.SetFrame(ref frame);
      if ((NativeObject) this._destroyedWallEntity != (NativeObject) null && (NativeObject) this._nonDestroyedWallEntity != (NativeObject) null)
      {
        this._nonDestroyedWallEntity.SetVisibilityExcludeParents(false);
        this._destroyedWallEntity.SetVisibilityExcludeParents(true);
      }
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDeactivated = !standingPoint.GameEntity.HasTag("move");
    }

    public void OnDestroyed(
      DestructableComponent destroyedComponent,
      Agent destroyerAgent,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage)
    {
      bool burnAgents = false;
      if (weapon.CurrentUsageItem != null)
        burnAgents = weapon.CurrentUsageItem.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.Burning) && weapon.CurrentUsageItem.WeaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.AffectsArea | WeaponFlags.AffectsAreaBig);
      Mission.Current.KillAgentsOnEntity(destroyedComponent.CurrentState, destroyerAgent, burnAgents);
      foreach (GameEntity aiBarrier in this._aiBarriers)
        aiBarrier.SetVisibilityExcludeParents(true);
    }

    public void HighlightPath() => this.MovementComponent.HighlightPath();

    public void SwitchGhostEntityMovementMode(bool isGhostEnabled)
    {
      if (isGhostEnabled)
      {
        if (!this._isGhostMovementOn)
        {
          this.RemoveComponent((UsableMissionObjectComponent) this.MovementComponent);
          this.GhostEntityMove = true;
          this.MovementComponent.GhostEntitySpeedMultiplier *= 3f;
          this.MovementComponent.SetGhostVisibility(true);
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

    public MatrixFrame GetInitialFrame()
    {
      SiegeWeaponMovementComponent movementComponent = this.MovementComponent;
      return movementComponent == null ? this.CleanState.GetGlobalFrame() : movementComponent.GetInitialFrame();
    }

    private void OnSiegeTowerGateStateChange()
    {
      switch (this.State)
      {
        case SiegeTower.GateState.Closed:
          SynchedMissionObject handleObject = this._handleObject;
          if (handleObject != null)
            handleObject.GameEntity.Skeleton.SetAnimationAtChannel(this._gateHandleIdleAnimationIndex, 0);
          if (GameNetwork.IsClientOrReplay || this.GetGateNavMeshId() == 0)
            break;
          this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), false);
          break;
        case SiegeTower.GateState.Open:
          if (this._gateObject.GameEntity.Skeleton.GetAnimationIndexAtChannel(0) != this._gateHandleIdleAnimationIndex)
          {
            MatrixFrame frame = this._gateObject.GameEntity.GetFrame() with
            {
              rotation = this._openStateRotation
            };
            this._gateObject.GameEntity.SetFrame(ref frame);
            this._gateObject.GameEntity.Skeleton.SetAnimationAtChannel(this._gateTrembleAnimationIndex, 0);
            this._gateOpenSound?.Stop();
            if (!GameNetwork.IsClientOrReplay && this.GetGateNavMeshId() != 0)
              this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), true);
          }
          if (!GameNetwork.IsClientOrReplay)
            this.CleanState.Scene.SetAbilityOfFacesWithId(this.GetGateNavMeshId(), true);
          using (List<GameEntity>.Enumerator enumerator = this._aiBarriers.GetEnumerator())
          {
            while (enumerator.MoveNext())
              enumerator.Current.SetVisibilityExcludeParents(false);
            break;
          }
        case SiegeTower.GateState.GateFalling:
          this._fallAngularSpeed = 0.0f;
          this._gateOpenSound = SoundEvent.CreateEvent(this._gateOpenSoundIndex, this.Scene);
          this._gateOpenSound.PlayInPosition(this._gateObject.GameEntity.GlobalPosition);
          break;
        case SiegeTower.GateState.GateFallingWallDestroyed:
          if (!((NativeObject) this._destroyedWallEntity != (NativeObject) null) || !((NativeObject) this._nonDestroyedWallEntity != (NativeObject) null))
            break;
          this._fallAngularSpeed *= 0.1f;
          this._nonDestroyedWallEntity.SetVisibilityExcludeParents(false);
          this._destroyedWallEntity.SetVisibilityExcludeParents(true);
          if (!((NativeObject) this._battlementDestroyedParticle != (NativeObject) null))
            break;
          Mission.Current.AddParticleSystemBurstByName(this.BattlementDestroyedParticle, this._battlementDestroyedParticle.GetGlobalFrame(), false);
          break;
      }
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
        MovementSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/siege/siegetower/move"),
        GhostEntitySpeedMultiplier = this.GhostEntitySpeedMultiplier
      };
      this.AddComponent((UsableMissionObjectComponent) this.MovementComponent);
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

    private void UpdateGhostEntity()
    {
      List<GameEntity> gameEntityList = this.CleanState.CollectChildrenEntitiesWithTag("ghost_object");
      if (gameEntityList.Count <= 0)
        return;
      GameEntity gameEntity = gameEntityList[0];
      if (gameEntity.ChildCount <= 0)
        return;
      this.MovementComponent.GhostEntitySpeedMultiplier = this.GhostEntitySpeedMultiplier;
      GameEntity child = gameEntity.GetChild(0);
      MatrixFrame frame = child.GetFrame();
      child.SetFrame(ref frame);
    }

    public void SetSpawnedFromSpawner() => this._spawnedFromSpawner = true;

    public void AssignParametersFromSpawner(
      string pathEntityName,
      string targetWallSegment,
      string sideTag,
      int soilNavMeshID1,
      int soilNavMeshID2,
      int ditchNavMeshID1,
      int ditchNavMeshID2,
      int groundToSoilNavMeshID1,
      int groundToSoilNavMeshID2,
      int soilGenericNavMeshID,
      int groundGenericNavMeshID,
      Mat3 openStateRotation,
      string barrierTagToRemove)
    {
      this.PathEntity = pathEntityName;
      this._targetWallSegmentTag = targetWallSegment;
      this._sideTag = sideTag;
      this._soilNavMeshID1 = soilNavMeshID1;
      this._soilNavMeshID2 = soilNavMeshID2;
      this._ditchNavMeshID1 = ditchNavMeshID1;
      this._ditchNavMeshID2 = ditchNavMeshID2;
      this._groundToSoilNavMeshID1 = groundToSoilNavMeshID1;
      this._groundToSoilNavMeshID2 = groundToSoilNavMeshID2;
      this._soilGenericNavMeshID = soilGenericNavMeshID;
      this._groundGenericNavMeshID = groundGenericNavMeshID;
      this._openStateRotation = openStateRotation;
      this.BarrierTagToRemove = barrierTagToRemove;
    }

    public override void OnAfterReadFromNetwork(
      (BaseSynchedMissionObjectReadableRecord, ISynchedMissionObjectReadableRecord) synchedMissionObjectReadableRecord)
    {
      base.OnAfterReadFromNetwork(synchedMissionObjectReadableRecord);
      SiegeTower.SiegeTowerRecord siegeTowerRecord = (SiegeTower.SiegeTowerRecord) synchedMissionObjectReadableRecord.Item2;
      this.HasArrivedAtTarget = siegeTowerRecord.HasArrivedAtTarget;
      this._state = (SiegeTower.GateState) siegeTowerRecord.State;
      this._fallAngularSpeed = siegeTowerRecord.FallAngularSpeed;
      if (this._state == SiegeTower.GateState.Open)
      {
        if ((NativeObject) this._destroyedWallEntity != (NativeObject) null && (NativeObject) this._nonDestroyedWallEntity != (NativeObject) null)
        {
          this._nonDestroyedWallEntity.SetVisibilityExcludeParents(false);
          this._destroyedWallEntity.SetVisibilityExcludeParents(true);
        }
        MatrixFrame frame = this._gateObject.GameEntity.GetFrame() with
        {
          rotation = this._openStateRotation
        };
        this._gateObject.GameEntity.SetFrame(ref frame);
      }
      this.MovementComponent.SetTotalDistanceTraveledForPathTracker(siegeTowerRecord.TotalDistanceTraveled + 0.05f);
      this.MovementComponent.SetTargetFrameForPathTracker();
    }

    public bool GetNavmeshFaceIds(out List<int> navmeshFaceIds)
    {
      navmeshFaceIds = new List<int>()
      {
        this.DynamicNavmeshIdStart + 1,
        this.DynamicNavmeshIdStart + 3,
        this.DynamicNavmeshIdStart + 5,
        this.DynamicNavmeshIdStart + 6,
        this.DynamicNavmeshIdStart + 7
      };
      return true;
    }

    [DefineSynchedMissionObjectType(typeof (SiegeTower))]
    public struct SiegeTowerRecord : ISynchedMissionObjectReadableRecord
    {
      public bool HasArrivedAtTarget { get; private set; }

      public int State { get; private set; }

      public float FallAngularSpeed { get; private set; }

      public float TotalDistanceTraveled { get; private set; }

      public bool ReadFromNetwork(ref bool bufferReadValid)
      {
        this.HasArrivedAtTarget = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
        this.State = GameNetworkMessage.ReadIntFromPacket(CompressionMission.SiegeTowerGateStateCompressionInfo, ref bufferReadValid);
        this.FallAngularSpeed = GameNetworkMessage.ReadFloatFromPacket(CompressionMission.SiegeMachineComponentAngularSpeedCompressionInfo, ref bufferReadValid);
        this.TotalDistanceTraveled = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.PositionCompressionInfo, ref bufferReadValid);
        return bufferReadValid;
      }
    }

    public enum GateState
    {
      Closed,
      Open,
      GateFalling,
      GateFallingWallDestroyed,
      NumberOfStates,
    }
  }
}
