// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.HumanAIComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class HumanAIComponent : AgentComponent
  {
    private const float AvoidPickUpIfLookAgentIsCloseDistance = 20f;
    private const float AvoidPickUpIfLookAgentIsCloseDistanceSquared = 400f;
    private const float ClosestMountSearchRangeSq = 6400f;
    public static bool FormationSpeedAdjustmentEnabled = true;
    private readonly HumanAIComponent.BehaviorValues[] _behaviorValues;
    private bool _hasNewBehaviorValues;
    private readonly GameEntity[] _tempPickableEntities = new GameEntity[16];
    private readonly UIntPtr[] _pickableItemsId = new UIntPtr[16];
    private SpawnedItemEntity _itemToPickUp;
    private readonly MissionTimer _itemPickUpTickTimer;
    private bool _disablePickUpForAgent;
    private readonly MissionTimer _mountSearchTimer;
    private UsableMissionObject _objectOfInterest;
    private HumanAIComponent.UsableObjectInterestKind _objectInterestKind;
    private bool _shouldCatchUpWithFormation;

    public Agent FollowedAgent { get; private set; }

    public bool ShouldCatchUpWithFormation
    {
      get => this._shouldCatchUpWithFormation;
      private set
      {
        if (this._shouldCatchUpWithFormation == value)
          return;
        this._shouldCatchUpWithFormation = value;
        this.Agent.SetShouldCatchUpWithFormation(value);
      }
    }

    public bool IsDefending
    {
      get => this._objectInterestKind == HumanAIComponent.UsableObjectInterestKind.Defending;
    }

    public HumanAIComponent(Agent agent)
      : base(agent)
    {
      this._behaviorValues = new HumanAIComponent.BehaviorValues[7];
      this.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.Default);
      this.Agent.SetAllBehaviorParams(this._behaviorValues);
      this._hasNewBehaviorValues = false;
      this.Agent.OnAgentWieldedItemChange += new Action(this.DisablePickUpForAgentIfNeeded);
      this.Agent.OnAgentMountedStateChanged += new Action(this.DisablePickUpForAgentIfNeeded);
      this._itemPickUpTickTimer = new MissionTimer(2.5f + MBRandom.RandomFloat);
      this._mountSearchTimer = new MissionTimer(2f + MBRandom.RandomFloat);
    }

    public void SetBehaviorParams(
      HumanAIComponent.AISimpleBehaviorKind behavior,
      float y1,
      float x2,
      float y2,
      float x3,
      float y3)
    {
      this._behaviorValues[(int) behavior].y1 = y1;
      this._behaviorValues[(int) behavior].x2 = x2;
      this._behaviorValues[(int) behavior].y2 = y2;
      this._behaviorValues[(int) behavior].x3 = x3;
      this._behaviorValues[(int) behavior].y3 = y3;
      this._hasNewBehaviorValues = true;
    }

    public void SyncBehaviorParamsIfNecessary()
    {
      if (!this._hasNewBehaviorValues)
        return;
      this.Agent.SetAllBehaviorParams(this._behaviorValues);
      this._hasNewBehaviorValues = false;
    }

    public void DisablePickUpForAgentIfNeeded()
    {
      this._disablePickUpForAgent = true;
      if (this.Agent.MountAgent == null)
      {
        if (this.Agent.HasLostShield())
        {
          this._disablePickUpForAgent = false;
        }
        else
        {
          for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.ExtraWeaponSlot; ++index)
          {
            MissionWeapon missionWeapon = this.Agent.Equipment[index];
            if (!missionWeapon.IsEmpty && missionWeapon.IsAnyConsumable())
            {
              this._disablePickUpForAgent = false;
              break;
            }
          }
        }
      }
      if (!this._disablePickUpForAgent || this.Agent.Formation == null || !MissionGameModels.Current.BattleBannerBearersModel.IsBannerSearchingAgent(this.Agent))
        return;
      this._disablePickUpForAgent = false;
    }

    public override void OnTickAsAI(float dt)
    {
      this.SyncBehaviorParamsIfNecessary();
      if (this._itemToPickUp != null)
      {
        if (!this._itemToPickUp.IsAIMovingTo(this.Agent) || this.Agent.Mission.MissionEnded)
          this._itemToPickUp = (SpawnedItemEntity) null;
        else if ((NativeObject) this._itemToPickUp.GameEntity == (NativeObject) null)
          this.Agent.StopUsingGameObject(false);
      }
      if (this._itemPickUpTickTimer.Check(true) && !this.Agent.Mission.MissionEnded)
      {
        EquipmentIndex wieldedItemIndex = this.Agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
        WeaponComponentData currentUsageItem = wieldedItemIndex == EquipmentIndex.None ? (WeaponComponentData) null : this.Agent.Equipment[wieldedItemIndex].CurrentUsageItem;
        bool flag = currentUsageItem != null && currentUsageItem.IsRangedWeapon;
        if (!this._disablePickUpForAgent && MissionGameModels.Current.ItemPickupModel.IsAgentEquipmentSuitableForPickUpAvailability(this.Agent) && this.Agent.CanBeAssignedForScriptedMovement() && this.Agent.CurrentWatchState == Agent.WatchState.Alarmed && (this.Agent.GetAgentFlags() & AgentFlag.CanAttack) != AgentFlag.None && !this.IsInImportantCombatAction())
        {
          Agent targetAgent = this.Agent.GetTargetAgent();
          if (targetAgent == null || (double) targetAgent.Position.DistanceSquared(this.Agent.Position) > 400.0 && (!flag || this.IsAnyConsumableDepleted() || (double) targetAgent.Position.DistanceSquared(this.Agent.Position) >= (double) this.Agent.GetMissileRange() * 1.2000000476837158 || this.Agent.GetLastTargetVisibilityState() != AITargetVisibilityState.TargetIsClear))
          {
            float forwardUnlimitedSpeed = this.Agent.MaximumForwardUnlimitedSpeed;
            if (this._itemToPickUp == null)
            {
              this._itemToPickUp = this.SelectPickableItem(this.Agent.Position - new Vec3(forwardUnlimitedSpeed, forwardUnlimitedSpeed, 1f), this.Agent.Position + new Vec3(forwardUnlimitedSpeed, forwardUnlimitedSpeed, 1.8f));
              if (this._itemToPickUp != null)
                this.RequestMoveToItem(this._itemToPickUp);
            }
          }
        }
      }
      if (this._itemToPickUp != null && !this.Agent.IsRunningAway && this.Agent.AIMoveToGameObjectIsEnabled())
      {
        float num = (this._itemToPickUp.IsBanner() ? MissionGameModels.Current.BattleBannerBearersModel.GetBannerInteractionDistance(this.Agent) : MissionGameModels.Current.AgentStatCalculateModel.GetInteractionDistance(this.Agent)) * 3f;
        if (this.Agent.CanReachAndUseObject((UsableMissionObject) this._itemToPickUp, this._itemToPickUp.GetUserFrameForAgent(this.Agent).Origin.DistanceSquaredWithLimit(this.Agent.Position, (float) ((double) num * (double) num + 9.9999997473787516E-06))))
          this.Agent.UseGameObject((UsableMissionObject) this._itemToPickUp);
      }
      if (this.Agent.CommonAIComponent == null || this.Agent.MountAgent != null || this.Agent.CommonAIComponent.IsRetreating || !this._mountSearchTimer.Check(true) || this.Agent.GetRidingOrder() != 1)
        return;
      Agent reservedMount = this.FindReservedMount();
      if ((reservedMount == null || reservedMount.State != AgentState.Active || reservedMount.RiderAgent != null ? 1 : ((double) this.Agent.Position.DistanceSquared(reservedMount.Position) >= 256.0 ? 1 : 0)) == 0)
        return;
      if (reservedMount != null)
        this.UnreserveMount(reservedMount);
      Agent closestMountAvailable = this.FindClosestMountAvailable();
      if (closestMountAvailable == null)
        return;
      this.ReserveMount(closestMountAvailable);
    }

    private Agent FindClosestMountAvailable()
    {
      float num1 = 6400f;
      Agent closestMountAvailable = (Agent) null;
      foreach (KeyValuePair<Agent, MissionTime> mountsWithoutRider in (List<KeyValuePair<Agent, MissionTime>>) Mission.Current.MountsWithoutRiders)
      {
        Agent key = mountsWithoutRider.Key;
        if (key.IsActive() && key.CommonAIComponent.ReservedRiderAgentIndex < 0 && key.RiderAgent == null && !key.IsRunningAway && MissionGameModels.Current.AgentStatCalculateModel.CanAgentRideMount(this.Agent, key))
        {
          float num2 = this.Agent.Position.DistanceSquared(key.Position);
          if ((double) num1 > (double) num2)
          {
            closestMountAvailable = key;
            num1 = num2;
          }
        }
      }
      return closestMountAvailable;
    }

    private Agent FindReservedMount()
    {
      Agent reservedMount = (Agent) null;
      int selectedMountIndex = this.Agent.GetSelectedMountIndex();
      if (selectedMountIndex >= 0)
      {
        foreach (KeyValuePair<Agent, MissionTime> mountsWithoutRider in (List<KeyValuePair<Agent, MissionTime>>) Mission.Current.MountsWithoutRiders)
        {
          Agent key = mountsWithoutRider.Key;
          if (key.Index == selectedMountIndex)
          {
            reservedMount = key;
            break;
          }
        }
      }
      return reservedMount;
    }

    internal void ReserveMount(Agent mount)
    {
      this.Agent.SetSelectedMountIndex(mount.Index);
      mount.CommonAIComponent.OnMountReserved(this.Agent.Index);
    }

    internal void UnreserveMount(Agent mount)
    {
      this.Agent.SetSelectedMountIndex(-1);
      mount.CommonAIComponent.OnMountUnreserved();
    }

    public override void OnAgentRemoved()
    {
      Agent reservedMount = this.FindReservedMount();
      if (reservedMount == null)
        return;
      this.UnreserveMount(reservedMount);
    }

    public override void OnComponentRemoved()
    {
      Agent reservedMount = this.FindReservedMount();
      if (reservedMount == null)
        return;
      this.UnreserveMount(reservedMount);
    }

    public bool IsInImportantCombatAction()
    {
      Agent.ActionCodeType currentActionType = this.Agent.GetCurrentActionType(1);
      switch (currentActionType)
      {
        case Agent.ActionCodeType.ReadyRanged:
        case Agent.ActionCodeType.ReleaseRanged:
        case Agent.ActionCodeType.ReleaseThrowing:
        case Agent.ActionCodeType.ReadyMelee:
        case Agent.ActionCodeType.ReleaseMelee:
          return true;
        default:
          return currentActionType == Agent.ActionCodeType.DefendShield;
      }
    }

    private bool IsAnyConsumableDepleted()
    {
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.ExtraWeaponSlot; ++index)
      {
        MissionWeapon missionWeapon = this.Agent.Equipment[index];
        if (!missionWeapon.IsEmpty && missionWeapon.IsAnyConsumable() && missionWeapon.Amount == (short) 0)
          return true;
      }
      return false;
    }

    private SpawnedItemEntity SelectPickableItem(Vec3 bMin, Vec3 bMax)
    {
      Agent targetAgent = this.Agent.GetTargetAgent();
      Vec3 v1 = targetAgent == null ? Vec3.Invalid : targetAgent.Position - this.Agent.Position;
      int num1 = this.Agent.Mission.Scene.SelectEntitiesInBoxWithScriptComponent<SpawnedItemEntity>(ref bMin, ref bMax, this._tempPickableEntities, this._pickableItemsId);
      float num2 = 0.0f;
      SpawnedItemEntity spawnedItemEntity = (SpawnedItemEntity) null;
      for (int index = 0; index < num1; ++index)
      {
        SpawnedItemEntity firstScriptOfType = this._tempPickableEntities[index].GetFirstScriptOfType<SpawnedItemEntity>();
        bool flag = false;
        if (firstScriptOfType != null)
        {
          MissionWeapon weaponCopy = firstScriptOfType.WeaponCopy;
          flag = !weaponCopy.IsEmpty && (weaponCopy.IsShield() || weaponCopy.IsBanner() || firstScriptOfType.IsStuckMissile() || firstScriptOfType.IsQuiverAndNotEmpty());
        }
        if (flag && !firstScriptOfType.HasUser && (!firstScriptOfType.HasAIMovingTo || firstScriptOfType.IsAIMovingTo(this.Agent)) && firstScriptOfType.GameEntityWithWorldPosition.WorldPosition.GetNavMesh() != UIntPtr.Zero)
        {
          Vec3 v2 = firstScriptOfType.GetUserFrameForAgent(this.Agent).Origin.GetGroundVec3() - this.Agent.Position;
          float z = v2.z;
          double num3 = (double) v2.Normalize();
          if (targetAgent == null || (double) v1.Length - (double) Vec3.DotProduct(v1, v2) > (double) targetAgent.MaximumForwardUnlimitedSpeed * 3.0)
          {
            EquipmentIndex slotToPickUp = MissionEquipment.SelectWeaponPickUpSlot(this.Agent, firstScriptOfType.WeaponCopy, firstScriptOfType.IsStuckMissile());
            WorldPosition worldPosition = firstScriptOfType.GameEntityWithWorldPosition.WorldPosition;
            if (slotToPickUp != EquipmentIndex.None && worldPosition.GetNavMesh() != UIntPtr.Zero && MissionGameModels.Current.ItemPickupModel.IsItemAvailableForAgent(firstScriptOfType, this.Agent, slotToPickUp) && this.Agent.CanMoveDirectlyToPosition(worldPosition.AsVec2) && (!this.Agent.Mission.IsPositionInsideAnyBlockerNavMeshFace2D(worldPosition.AsVec2) || (double) MathF.Abs(z) >= 1.5))
            {
              float itemScoreForAgent = MissionGameModels.Current.ItemPickupModel.GetItemScoreForAgent(firstScriptOfType, this.Agent);
              if ((double) itemScoreForAgent > (double) num2)
              {
                spawnedItemEntity = firstScriptOfType;
                num2 = itemScoreForAgent;
              }
            }
          }
        }
      }
      return spawnedItemEntity;
    }

    internal void ItemPickupDone(SpawnedItemEntity spawnedItemEntity)
    {
      this._itemToPickUp = (SpawnedItemEntity) null;
    }

    private void RequestMoveToItem(SpawnedItemEntity item)
    {
      item.MovingAgent?.StopUsingGameObject(false);
      this.MoveToUsableGameObject((UsableMissionObject) item, (IDetachment) null);
    }

    public UsableMissionObject GetCurrentlyMovingGameObject() => this._objectOfInterest;

    private void SetCurrentlyMovingGameObject(UsableMissionObject objectOfInterest)
    {
      this._objectOfInterest = objectOfInterest;
      this._objectInterestKind = this._objectOfInterest != null ? HumanAIComponent.UsableObjectInterestKind.MovingTo : HumanAIComponent.UsableObjectInterestKind.None;
    }

    public UsableMissionObject GetCurrentlyDefendingGameObject() => this._objectOfInterest;

    private void SetCurrentlyDefendingGameObject(UsableMissionObject objectOfInterest)
    {
      this._objectOfInterest = objectOfInterest;
      this._objectInterestKind = this._objectOfInterest != null ? HumanAIComponent.UsableObjectInterestKind.Defending : HumanAIComponent.UsableObjectInterestKind.None;
    }

    public void MoveToUsableGameObject(
      UsableMissionObject usedObject,
      IDetachment detachment,
      Agent.AIScriptedFrameFlags scriptedFrameFlags = Agent.AIScriptedFrameFlags.NoAttack)
    {
      this.Agent.AIStateFlags |= Agent.AIStateFlag.UseObjectMoving;
      this.SetCurrentlyMovingGameObject(usedObject);
      usedObject.OnAIMoveToUse(this.Agent, detachment);
      WorldFrame userFrameForAgent = usedObject.GetUserFrameForAgent(this.Agent);
      this.Agent.SetScriptedPositionAndDirection(ref userFrameForAgent.Origin, userFrameForAgent.Rotation.f.AsVec2.RotationInRadians, false, scriptedFrameFlags);
    }

    public void MoveToClear()
    {
      this.GetCurrentlyMovingGameObject()?.OnMoveToStopped(this.Agent);
      this.SetCurrentlyMovingGameObject((UsableMissionObject) null);
      this.Agent.AIStateFlags &= ~Agent.AIStateFlag.UseObjectMoving;
    }

    public void StartDefendingGameObject(UsableMissionObject usedObject, IDetachment detachment)
    {
      this.SetCurrentlyDefendingGameObject(usedObject);
      usedObject.OnAIDefendBegin(this.Agent, detachment);
    }

    public void StopDefendingGameObject()
    {
      this.GetCurrentlyDefendingGameObject().OnAIDefendEnd(this.Agent);
      this.SetCurrentlyDefendingGameObject((UsableMissionObject) null);
    }

    public bool IsInterestedInAnyGameObject() => this._objectInterestKind != 0;

    public bool IsInterestedInGameObject(UsableMissionObject usableMissionObject)
    {
      bool flag = false;
      switch (this._objectInterestKind)
      {
        case HumanAIComponent.UsableObjectInterestKind.None:
          return flag;
        case HumanAIComponent.UsableObjectInterestKind.MovingTo:
          flag = usableMissionObject == this.GetCurrentlyMovingGameObject();
          goto case HumanAIComponent.UsableObjectInterestKind.None;
        case HumanAIComponent.UsableObjectInterestKind.Defending:
          flag = usableMissionObject == this.GetCurrentlyDefendingGameObject();
          goto case HumanAIComponent.UsableObjectInterestKind.None;
        default:
          Debug.FailedAssert("Unexpected object interest kind: " + (object) this._objectInterestKind, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\AgentComponents\\HumanAIComponent.cs", nameof (IsInterestedInGameObject), 580);
          goto case HumanAIComponent.UsableObjectInterestKind.None;
      }
    }

    public void FollowAgent(Agent agent) => this.FollowedAgent = agent;

    public float GetDesiredSpeedInFormation(bool isCharging)
    {
      if (this.ShouldCatchUpWithFormation && (!isCharging || !Mission.Current.IsMissionEnding))
      {
        Agent mountAgent = this.Agent.MountAgent;
        float num1 = mountAgent != null ? mountAgent.MaximumForwardUnlimitedSpeed : this.Agent.MaximumForwardUnlimitedSpeed;
        bool flag = !isCharging;
        if (isCharging)
        {
          FormationQuerySystem closestEnemyFormation = this.Agent.Formation.QuerySystem.ClosestEnemyFormation;
          float num2 = float.MaxValue;
          float num3 = 4f * num1 * num1;
          if (closestEnemyFormation != null)
          {
            num2 = this.Agent.Formation.QuerySystem.MedianPosition.AsVec2.DistanceSquared(closestEnemyFormation.MedianPosition.AsVec2);
            if ((double) num2 <= (double) num3)
              num2 = this.Agent.Formation.QuerySystem.MedianPosition.GetNavMeshVec3().DistanceSquared(closestEnemyFormation.MedianPosition.GetNavMeshVec3());
          }
          flag = (double) num2 > (double) num3;
        }
        if (flag)
        {
          Vec2 v = this.Agent.Formation.GetCurrentGlobalPositionOfUnit(this.Agent, true) - this.Agent.Position.AsVec2;
          float num4 = MathF.Clamp(-this.Agent.GetMovementDirection().DotProduct(v), 0.0f, 100f);
          float num5 = this.Agent.MountAgent != null ? 4f : 2f;
          float num6 = (isCharging ? this.Agent.Formation.QuerySystem.FormationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents : this.Agent.Formation.QuerySystem.MovementSpeed) / num1;
          return MathF.Clamp((float) (0.699999988079071 + 0.40000000596046448 * (((double) num1 - (double) num4 * (double) num5) / ((double) num1 + (double) num4 * (double) num5))) * num6, 0.3f, 1f);
        }
      }
      return 1f;
    }

    private bool GetFormationFrame(
      out WorldPosition formationPosition,
      out Vec2 formationDirection,
      out float speedLimit,
      out bool isSettingDestinationSpeed,
      out bool limitIsMultiplier,
      bool finalDestination = false)
    {
      Formation formation = this.Agent.Formation;
      isSettingDestinationSpeed = false;
      limitIsMultiplier = false;
      bool formationFrame = false;
      if (formation != null)
      {
        formationPosition = formation.GetOrderPositionOfUnit(this.Agent);
        formationDirection = formation.GetDirectionOfUnit(this.Agent);
      }
      else
      {
        formationPosition = WorldPosition.Invalid;
        formationDirection = Vec2.Invalid;
      }
      if (HumanAIComponent.FormationSpeedAdjustmentEnabled && this.Agent.IsMount)
      {
        formationPosition = WorldPosition.Invalid;
        formationDirection = Vec2.Invalid;
        if (this.Agent.RiderAgent == null || this.Agent.RiderAgent != null && (!this.Agent.RiderAgent.IsActive() || this.Agent.RiderAgent.Formation == null))
        {
          speedLimit = -1f;
        }
        else
        {
          limitIsMultiplier = true;
          speedLimit = this.Agent.RiderAgent.HumanAIComponent.GetDesiredSpeedInFormation(formation.GetReadonlyMovementOrderReference().MovementState == MovementOrder.MovementStateEnum.Charge);
        }
      }
      else if (formation == null)
        speedLimit = -1f;
      else if (this.Agent.IsDetachedFromFormation)
      {
        speedLimit = -1f;
        WorldFrame? nullable = new WorldFrame?();
        if (formation.GetReadonlyMovementOrderReference().MovementState != MovementOrder.MovementStateEnum.Charge || this.Agent.Detachment != null && (!this.Agent.Detachment.IsLoose || formationPosition.IsValid))
          nullable = formation.GetDetachmentFrame(this.Agent);
        if (nullable.HasValue)
        {
          formationDirection = nullable.Value.Rotation.f.AsVec2.Normalized();
          formationFrame = true;
        }
        else
          formationDirection = Vec2.Invalid;
      }
      else
      {
        switch (formation.GetReadonlyMovementOrderReference().MovementState)
        {
          case MovementOrder.MovementStateEnum.Charge:
            limitIsMultiplier = true;
            speedLimit = HumanAIComponent.FormationSpeedAdjustmentEnabled ? this.GetDesiredSpeedInFormation(true) : -1f;
            formationFrame = formationPosition.IsValid;
            break;
          case MovementOrder.MovementStateEnum.Hold:
            isSettingDestinationSpeed = true;
            if (HumanAIComponent.FormationSpeedAdjustmentEnabled && this.ShouldCatchUpWithFormation)
            {
              limitIsMultiplier = true;
              speedLimit = this.GetDesiredSpeedInFormation(false);
            }
            else
              speedLimit = -1f;
            formationFrame = true;
            break;
          case MovementOrder.MovementStateEnum.Retreat:
            speedLimit = -1f;
            break;
          case MovementOrder.MovementStateEnum.StandGround:
            formationDirection = this.Agent.Frame.rotation.f.AsVec2;
            speedLimit = -1f;
            formationFrame = true;
            break;
          default:
            Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\AgentComponents\\HumanAIComponent.cs", nameof (GetFormationFrame), 767);
            speedLimit = -1f;
            break;
        }
      }
      return formationFrame;
    }

    public void AdjustSpeedLimit(Agent agent, float desiredSpeed, bool limitIsMultiplier)
    {
      if (agent.MissionPeer != null)
        desiredSpeed = -1f;
      this.Agent.SetMaximumSpeedLimit(desiredSpeed, limitIsMultiplier);
      agent.MountAgent?.SetMaximumSpeedLimit(desiredSpeed, limitIsMultiplier);
    }

    public void UpdateFormationMovement()
    {
      WorldPosition formationPosition;
      Vec2 formationDirection;
      float speedLimit;
      bool limitIsMultiplier;
      int num1 = this.GetFormationFrame(out formationPosition, out formationDirection, out speedLimit, out bool _, out limitIsMultiplier) ? 1 : 0;
      this.AdjustSpeedLimit(this.Agent, speedLimit, limitIsMultiplier);
      if (this.Agent.Controller == Agent.ControllerType.AI && this.Agent.Formation != null && this.Agent.Formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Stop && this.Agent.Formation.GetReadonlyMovementOrderReference().OrderEnum != MovementOrder.MovementOrderEnum.Retreat && !this.Agent.IsRetreating())
      {
        FormationQuerySystem.FormationIntegrityDataGroup formationIntegrityData = this.Agent.Formation.QuerySystem.FormationIntegrityData;
        float num2 = formationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents * 3f;
        if ((double) formationIntegrityData.DeviationOfPositionsExcludeFarAgents > (double) num2 * 100.0)
        {
          this.ShouldCatchUpWithFormation = false;
          this.Agent.SetFormationIntegrityData(Vec2.Zero, Vec2.Zero, Vec2.Zero, 0.0f, 0.0f);
        }
        else
        {
          Vec2 globalPositionOfUnit = this.Agent.Formation.GetCurrentGlobalPositionOfUnit(this.Agent, true);
          this.ShouldCatchUpWithFormation = (double) this.Agent.Position.AsVec2.Distance(globalPositionOfUnit) < (double) num2 * 2.0;
          this.Agent.SetFormationIntegrityData(this.ShouldCatchUpWithFormation ? globalPositionOfUnit : Vec2.Zero, this.Agent.Formation.CurrentDirection, formationIntegrityData.AverageVelocityExcludeFarAgents, formationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents, formationIntegrityData.DeviationOfPositionsExcludeFarAgents);
        }
      }
      else
        this.ShouldCatchUpWithFormation = false;
      bool flag = formationPosition.IsValid;
      if (num1 == 0 || !flag)
      {
        this.Agent.SetFormationFrameDisabled();
      }
      else
      {
        if (!GameNetwork.IsMultiplayer && this.Agent.Mission.Mode == MissionMode.Deployment)
        {
          MBSceneUtilities.ProjectPositionToDeploymentBoundaries(this.Agent.Formation.Team.Side, ref formationPosition);
          flag = this.Agent.Mission.IsFormationUnitPositionAvailable(ref formationPosition, this.Agent.Team);
        }
        if (flag)
        {
          this.Agent.SetFormationFrameEnabled(formationPosition, formationDirection, this.Agent.Formation.GetReadonlyMovementOrderReference().GetTargetVelocity(), this.Agent.Formation.CalculateFormationDirectionEnforcingFactorForRank(((IFormationUnit) this.Agent).FormationRankIndex));
          float tendency = 1f;
          if (this.Agent.Formation.ArrangementOrder.OrderEnum == ArrangementOrder.ArrangementOrderEnum.ShieldWall && !this.Agent.IsDetachedFromFormation)
            tendency = this.Agent.Formation.Arrangement.GetDirectionChangeTendencyOfUnit((IFormationUnit) this.Agent);
          this.Agent.SetDirectionChangeTendency(tendency);
        }
        else
          this.Agent.SetFormationFrameDisabled();
      }
    }

    public override void OnRetreating()
    {
      base.OnRetreating();
      this.AdjustSpeedLimit(this.Agent, -1f, false);
    }

    public override void OnDismount(Agent mount)
    {
      base.OnDismount(mount);
      mount.SetMaximumSpeedLimit(-1f, false);
    }

    public override void OnMount(Agent mount)
    {
      base.OnMount(mount);
      int selectedMountIndex = this.Agent.GetSelectedMountIndex();
      if (selectedMountIndex >= 0 && selectedMountIndex != mount.Index)
      {
        Agent agentWithIndex = Mission.Current.FindAgentWithIndex(selectedMountIndex);
        if (agentWithIndex != null)
          this.UnreserveMount(agentWithIndex);
      }
      int reservedRiderAgentIndex = mount.CommonAIComponent.ReservedRiderAgentIndex;
      if (reservedRiderAgentIndex < 0)
        return;
      if (reservedRiderAgentIndex == this.Agent.Index)
        this.UnreserveMount(mount);
      else
        Mission.Current.FindAgentWithIndex(reservedRiderAgentIndex)?.HumanAIComponent.UnreserveMount(mount);
    }

    public void SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet behaviorValueSet)
    {
      switch (behaviorValueSet)
      {
        case HumanAIComponent.BehaviorValueSet.Default:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 7f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 8f, 7f, 4f, 20f, 1f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 2f, 7f, 4f, 20f, 5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 2f, 25f, 5f, 30f, 5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 2f, 15f, 6.5f, 30f, 5.5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 4f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 5.5f, 12f, 8f, 30f, 4.5f);
          break;
        case HumanAIComponent.BehaviorValueSet.DefensiveArrangementMove:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 8f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 4f, 5f, 0.0f, 20f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 0.0f, 7f, 0.0f, 20f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 0.0f, 7f, 0.0f, 30f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 0.0f, 15f, 0.0f, 30f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 9f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 0.55f, 12f, 0.8f, 30f, 0.45f);
          break;
        case HumanAIComponent.BehaviorValueSet.Follow:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 7f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 6f, 7f, 4f, 20f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 0.0f, 7f, 0.0f, 20f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 0.0f, 7f, 0.0f, 30f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 0.0f, 15f, 0.0f, 30f, 0.0f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 9f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 0.55f, 12f, 0.8f, 30f, 0.45f);
          break;
        case HumanAIComponent.BehaviorValueSet.DefaultMove:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 7f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 8f, 7f, 5f, 20f, 0.01f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 0.02f, 7f, 0.04f, 20f, 0.03f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 10f, 7f, 5f, 30f, 0.05f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 0.02f, 15f, 0.065f, 30f, 0.055f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 9f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 0.55f, 12f, 0.8f, 30f, 0.45f);
          break;
        case HumanAIComponent.BehaviorValueSet.Charge:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 7f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 8f, 7f, 4f, 20f, 1f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 2f, 7f, 4f, 20f, 5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 2f, 25f, 5f, 30f, 5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 0.0f, 10f, 3f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 9f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 0.55f, 12f, 0.8f, 30f, 0.45f);
          break;
        case HumanAIComponent.BehaviorValueSet.DefaultDetached:
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.GoToPos, 3f, 7f, 5f, 20f, 6f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Melee, 8f, 7f, 4f, 20f, 1f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.Ranged, 0.2f, 7f, 0.4f, 20f, 0.5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.ChargeHorseback, 2f, 25f, 5f, 30f, 5f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.RangedHorseback, 0.2f, 15f, 0.65f, 30f, 0.55f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityMelee, 5f, 12f, 7.5f, 30f, 4f);
          this.SetBehaviorParams(HumanAIComponent.AISimpleBehaviorKind.AttackEntityRanged, 5.5f, 12f, 8f, 30f, 4.5f);
          break;
      }
    }

    public void RefreshBehaviorValues(
      MovementOrder.MovementOrderEnum movementOrder,
      ArrangementOrder.ArrangementOrderEnum arrangementOrder)
    {
      switch (movementOrder)
      {
        case MovementOrder.MovementOrderEnum.Charge:
        case MovementOrder.MovementOrderEnum.ChargeToTarget:
          this.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.Charge);
          break;
        case MovementOrder.MovementOrderEnum.Follow:
label_3:
          this.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.Follow);
          break;
        default:
          switch (arrangementOrder)
          {
            case ArrangementOrder.ArrangementOrderEnum.Circle:
            case ArrangementOrder.ArrangementOrderEnum.ShieldWall:
            case ArrangementOrder.ArrangementOrderEnum.Square:
              this.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.DefensiveArrangementMove);
              return;
            case ArrangementOrder.ArrangementOrderEnum.Column:
              goto label_3;
            default:
              this.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.DefaultMove);
              return;
          }
      }
    }

    [EngineStruct("behavior_values_struct", false)]
    public struct BehaviorValues
    {
      public float y1;
      public float x2;
      public float y2;
      public float x3;
      public float y3;

      public float GetValueAt(float x)
      {
        if ((double) x <= (double) this.x2)
          return (this.y2 - this.y1) * x / this.x2 + this.y1;
        return (double) x <= (double) this.x3 ? (float) (((double) this.y3 - (double) this.y2) * ((double) x - (double) this.x2) / ((double) this.x3 - (double) this.x2)) + this.y2 : this.y3;
      }
    }

    public enum AISimpleBehaviorKind
    {
      GoToPos,
      Melee,
      Ranged,
      ChargeHorseback,
      RangedHorseback,
      AttackEntityMelee,
      AttackEntityRanged,
      Count,
    }

    public enum BehaviorValueSet
    {
      Default,
      DefensiveArrangementMove,
      Follow,
      DefaultMove,
      Charge,
      DefaultDetached,
      Count,
    }

    public enum UsableObjectInterestKind
    {
      None,
      MovingTo,
      Defending,
      Count,
    }
  }
}
