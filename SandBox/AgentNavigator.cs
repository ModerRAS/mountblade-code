// Decompiled with JetBrains decompiler
// Type: SandBox.AgentNavigator
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation;
using SandBox.Conversation.MissionLogics;
using SandBox.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public sealed class AgentNavigator
  {
    private const float SeeingDistance = 30f;
    public readonly Agent OwnerAgent;
    private readonly Mission _mission;
    private readonly List<AgentBehaviorGroup> _behaviorGroups;
    private readonly ItemObject _specialItem;
    private UsableMachineAIBase _targetBehavior;
    private bool _targetReached;
    private float _rangeThreshold;
    private float _rotationScoreThreshold;
    private string _specialTargetTag;
    private bool _disableClearTargetWhenTargetIsReached;
    private readonly Dictionary<sbyte, string> _prefabNamesForBones;
    private readonly List<int> _prevPrefabs;
    private readonly MissionConversationLogic _conversationHandler;
    private readonly BasicMissionTimer _checkBehaviorGroupsTimer;

    public UsableMachine TargetUsableMachine { get; private set; }

    public WorldPosition TargetPosition { get; private set; }

    public Vec2 TargetDirection { get; private set; }

    public GameEntity TargetEntity { get; private set; }

    public Alley MemberOfAlley { get; private set; }

    public string SpecialTargetTag
    {
      get => this._specialTargetTag;
      set
      {
        if (!(value != this._specialTargetTag))
          return;
        this._specialTargetTag = value;
        this.GetActiveBehavior()?.OnSpecialTargetChanged();
      }
    }

    private Dictionary<KeyValuePair<sbyte, string>, int> _bodyComponents { get; set; }

    public AgentNavigator.NavigationState _agentState { get; private set; }

    public bool CharacterHasVisiblePrefabs { get; private set; }

    public AgentNavigator(Agent agent, LocationCharacter locationCharacter)
      : this(agent)
    {
      this.SpecialTargetTag = locationCharacter.SpecialTargetTag;
      this._prefabNamesForBones = locationCharacter.PrefabNamesForBones;
      this._specialItem = locationCharacter.SpecialItem;
      this.MemberOfAlley = locationCharacter.MemberOfAlley;
      this.SetItemsVisibility(true);
      this.SetSpecialItem();
    }

    public AgentNavigator(Agent agent)
    {
      this._mission = agent.Mission;
      this._conversationHandler = this._mission.GetMissionBehavior<MissionConversationLogic>();
      this.OwnerAgent = agent;
      this._prefabNamesForBones = new Dictionary<sbyte, string>();
      this._behaviorGroups = new List<AgentBehaviorGroup>();
      this._bodyComponents = new Dictionary<KeyValuePair<sbyte, string>, int>();
      this.SpecialTargetTag = string.Empty;
      this.MemberOfAlley = (Alley) null;
      this.TargetUsableMachine = (UsableMachine) null;
      this._checkBehaviorGroupsTimer = new BasicMissionTimer();
      this._prevPrefabs = new List<int>();
      this.CharacterHasVisiblePrefabs = false;
    }

    public void OnStopUsingGameObject()
    {
      this._targetBehavior = (UsableMachineAIBase) null;
      this.TargetUsableMachine = (UsableMachine) null;
      this._agentState = AgentNavigator.NavigationState.NoTarget;
    }

    public void OnAgentRemoved(Agent agent)
    {
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
      {
        if (behaviorGroup.IsActive)
          behaviorGroup.OnAgentRemoved(agent);
      }
    }

    public void SetTarget(UsableMachine usableMachine, bool isInitialTarget = false)
    {
      if (usableMachine == null)
      {
        ((IDetachment) this.TargetUsableMachine)?.RemoveAgent(this.OwnerAgent);
        this.TargetUsableMachine = (UsableMachine) null;
        this.OwnerAgent.DisableScriptedMovement();
        this.OwnerAgent.ClearTargetFrame();
        this.TargetPosition = WorldPosition.Invalid;
        this.TargetEntity = (GameEntity) null;
        this._agentState = AgentNavigator.NavigationState.NoTarget;
      }
      else
      {
        if (!(this.TargetUsableMachine != usableMachine | isInitialTarget))
          return;
        this.TargetPosition = WorldPosition.Invalid;
        this._agentState = AgentNavigator.NavigationState.NoTarget;
        ((IDetachment) this.TargetUsableMachine)?.RemoveAgent(this.OwnerAgent);
        if (!usableMachine.IsStandingPointAvailableForAgent(this.OwnerAgent))
          return;
        this.TargetUsableMachine = usableMachine;
        this.TargetPosition = WorldPosition.Invalid;
        this._agentState = AgentNavigator.NavigationState.UseMachine;
        this._targetBehavior = this.TargetUsableMachine.CreateAIBehaviorObject();
        ((IDetachment) this.TargetUsableMachine).AddAgent(this.OwnerAgent);
        this._targetReached = false;
      }
    }

    public void SetTargetFrame(
      WorldPosition position,
      float rotation,
      float rangeThreshold = 1f,
      float rotationThreshold = -10f,
      Agent.AIScriptedFrameFlags flags = Agent.AIScriptedFrameFlags.None,
      bool disableClearTargetWhenTargetIsReached = false)
    {
      if (this._agentState != AgentNavigator.NavigationState.NoTarget)
        this.ClearTarget();
      this.TargetPosition = position;
      this.TargetDirection = Vec2.FromRotation(rotation);
      this._rangeThreshold = rangeThreshold;
      this._rotationScoreThreshold = rotationThreshold;
      this._disableClearTargetWhenTargetIsReached = disableClearTargetWhenTargetIsReached;
      if (this.IsTargetReached())
      {
        this.TargetPosition = WorldPosition.Invalid;
        this._agentState = AgentNavigator.NavigationState.NoTarget;
      }
      else
      {
        this.OwnerAgent.SetScriptedPositionAndDirection(ref position, rotation, false, flags);
        this._agentState = AgentNavigator.NavigationState.GoToTarget;
      }
    }

    public void ClearTarget() => this.SetTarget((UsableMachine) null);

    public void Tick(float dt, bool isSimulation = false)
    {
      this.HandleBehaviorGroups(isSimulation);
      if (ConversationMission.ConversationAgents.Contains<Agent>(this.OwnerAgent))
      {
        foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
        {
          if (behaviorGroup.IsActive)
            behaviorGroup.ConversationTick();
        }
      }
      else
        this.TickActiveGroups(dt, isSimulation);
      if (this.TargetUsableMachine != null)
        this._targetBehavior.Tick(this.OwnerAgent, (Formation) null, (Team) null, dt);
      else
        this.HandleMovement();
      if (!(this.TargetUsableMachine != null & isSimulation))
        return;
      this._targetBehavior.TeleportUserAgentsToMachine(new List<Agent>()
      {
        this.OwnerAgent
      });
    }

    public float GetDistanceToTarget(UsableMachine target)
    {
      float distanceToTarget = 100000f;
      if (target != null && this.OwnerAgent.CurrentlyUsedGameObject != null)
        distanceToTarget = this.OwnerAgent.CurrentlyUsedGameObject.GetUserFrameForAgent(this.OwnerAgent).Origin.GetGroundVec3().Distance(this.OwnerAgent.Position);
      return distanceToTarget;
    }

    public bool IsTargetReached()
    {
      if (this.TargetDirection.IsValid && this.TargetPosition.IsValid)
      {
        float num = Vec2.DotProduct(this.TargetDirection, this.OwnerAgent.GetMovementDirection());
        this._targetReached = (double) (this.OwnerAgent.Position - this.TargetPosition.GetGroundVec3()).LengthSquared < (double) this._rangeThreshold * (double) this._rangeThreshold && (double) num > (double) this._rotationScoreThreshold;
      }
      return this._targetReached;
    }

    private void HandleMovement()
    {
      if (this._agentState != AgentNavigator.NavigationState.GoToTarget || !this.IsTargetReached())
        return;
      this._agentState = AgentNavigator.NavigationState.AtTargetPosition;
      if (this._disableClearTargetWhenTargetIsReached)
        return;
      this.OwnerAgent.ClearTargetFrame();
    }

    public void HoldAndHideRecentlyUsedMeshes()
    {
      foreach (KeyValuePair<KeyValuePair<sbyte, string>, int> bodyComponent in this._bodyComponents)
      {
        if (this.OwnerAgent.IsSynchedPrefabComponentVisible(bodyComponent.Value))
        {
          this.OwnerAgent.SetSynchedPrefabComponentVisibility(bodyComponent.Value, false);
          this._prevPrefabs.Add(bodyComponent.Value);
        }
      }
    }

    public void RecoverRecentlyUsedMeshes()
    {
      foreach (int prevPrefab in this._prevPrefabs)
        this.OwnerAgent.SetSynchedPrefabComponentVisibility(prevPrefab, true);
      this._prevPrefabs.Clear();
    }

    public bool CanSeeAgent(Agent otherAgent)
    {
      if ((double) (this.OwnerAgent.Position - otherAgent.Position).Length < 30.0)
      {
        Vec3 eyeGlobalPosition1 = otherAgent.GetEyeGlobalPosition();
        Vec3 eyeGlobalPosition2 = this.OwnerAgent.GetEyeGlobalPosition();
        if ((double) MathF.Abs(Vec3.AngleBetweenTwoVectors(otherAgent.Position - this.OwnerAgent.Position, this.OwnerAgent.LookDirection)) < 1.5)
          return !Mission.Current.Scene.RayCastForClosestEntityOrTerrain(eyeGlobalPosition2, eyeGlobalPosition1, out float _);
      }
      return false;
    }

    public bool IsCarryingSomething()
    {
      return this.OwnerAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand) >= EquipmentIndex.WeaponItemBeginSlot || this.OwnerAgent.GetWieldedItemIndex(Agent.HandIndex.OffHand) >= EquipmentIndex.WeaponItemBeginSlot || this._bodyComponents.Any<KeyValuePair<KeyValuePair<sbyte, string>, int>>((Func<KeyValuePair<KeyValuePair<sbyte, string>, int>, bool>) (component => this.OwnerAgent.IsSynchedPrefabComponentVisible(component.Value)));
    }

    public void SetPrefabVisibility(sbyte realBoneIndex, string prefabName, bool isVisible)
    {
      KeyValuePair<sbyte, string> key = new KeyValuePair<sbyte, string>(realBoneIndex, prefabName);
      if (isVisible)
      {
        int componentIndex;
        if (!this._bodyComponents.TryGetValue(key, out componentIndex))
        {
          this._bodyComponents.Add(key, this.OwnerAgent.AddSynchedPrefabComponentToBone(prefabName, realBoneIndex));
        }
        else
        {
          if (this.OwnerAgent.IsSynchedPrefabComponentVisible(componentIndex))
            return;
          this.OwnerAgent.SetSynchedPrefabComponentVisibility(componentIndex, true);
        }
      }
      else
      {
        int componentIndex;
        if (!this._bodyComponents.TryGetValue(key, out componentIndex) || !this.OwnerAgent.IsSynchedPrefabComponentVisible(componentIndex))
          return;
        this.OwnerAgent.SetSynchedPrefabComponentVisibility(componentIndex, false);
      }
    }

    public bool GetPrefabVisibility(sbyte realBoneIndex, string prefabName)
    {
      int componentIndex;
      return this._bodyComponents.TryGetValue(new KeyValuePair<sbyte, string>(realBoneIndex, prefabName), out componentIndex) && this.OwnerAgent.IsSynchedPrefabComponentVisible(componentIndex);
    }

    public void SetSpecialItem()
    {
      if (this._specialItem == null)
        return;
      bool flag = false;
      EquipmentIndex slotIndex = EquipmentIndex.None;
      for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index <= EquipmentIndex.Weapon3; ++index)
      {
        MissionWeapon missionWeapon = this.OwnerAgent.Equipment[index];
        if (missionWeapon.IsEmpty)
        {
          slotIndex = index;
        }
        else
        {
          missionWeapon = this.OwnerAgent.Equipment[index];
          if (missionWeapon.Item == this._specialItem)
          {
            slotIndex = index;
            flag = true;
            break;
          }
        }
      }
      if (slotIndex == EquipmentIndex.None)
      {
        this.OwnerAgent.DropItem(EquipmentIndex.Weapon3);
        slotIndex = EquipmentIndex.Weapon3;
      }
      if (!flag)
      {
        MissionWeapon weapon = new MissionWeapon(this._specialItem, (ItemModifier) null, this.OwnerAgent.Origin?.Banner);
        this.OwnerAgent.EquipWeaponWithNewEntity(slotIndex, ref weapon);
      }
      this.OwnerAgent.TryToWieldWeaponInSlot(slotIndex, Agent.WeaponWieldActionType.Instant, false);
    }

    public void SetItemsVisibility(bool isVisible)
    {
      foreach (KeyValuePair<sbyte, string> prefabNamesForBone in this._prefabNamesForBones)
        this.SetPrefabVisibility(prefabNamesForBone.Key, prefabNamesForBone.Value, isVisible);
      this.CharacterHasVisiblePrefabs = this._prefabNamesForBones.Count > 0 & isVisible;
    }

    public void SetCommonArea(Alley alley)
    {
      if (alley == this.MemberOfAlley)
        return;
      this.MemberOfAlley = alley;
      this.SpecialTargetTag = alley == null ? "" : alley.Tag;
    }

    public void ForceThink(float inSeconds)
    {
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
        behaviorGroup.ForceThink(inSeconds);
    }

    public T AddBehaviorGroup<T>() where T : AgentBehaviorGroup
    {
      obj = this.GetBehaviorGroup<T>();
      if ((object) obj == null)
      {
        if (Activator.CreateInstance(typeof (T), (object) this, (object) this._mission) is T obj)
          this._behaviorGroups.Add((AgentBehaviorGroup) obj);
      }
      return obj;
    }

    public T GetBehaviorGroup<T>() where T : AgentBehaviorGroup
    {
      foreach (AgentBehaviorGroup behaviorGroup1 in this._behaviorGroups)
      {
        if (behaviorGroup1 is T behaviorGroup2)
          return behaviorGroup2;
      }
      return default (T);
    }

    public AgentBehavior GetBehavior<T>() where T : AgentBehavior
    {
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
      {
        foreach (AgentBehavior behavior in behaviorGroup.Behaviors)
        {
          if (behavior.GetType() == typeof (T))
            return behavior;
        }
      }
      return (AgentBehavior) null;
    }

    public bool HasBehaviorGroup<T>()
    {
      foreach (object behaviorGroup in this._behaviorGroups)
      {
        if (behaviorGroup.GetType() is T)
          return true;
      }
      return false;
    }

    public void RemoveBehaviorGroup<T>() where T : AgentBehaviorGroup
    {
      for (int index = 0; index < this._behaviorGroups.Count; ++index)
      {
        if (this._behaviorGroups[index] is T)
          this._behaviorGroups.RemoveAt(index);
      }
    }

    public void RefreshBehaviorGroups(bool isSimulation)
    {
      this._checkBehaviorGroupsTimer.Reset();
      float num = 0.0f;
      AgentBehaviorGroup behaviorGroup1 = (AgentBehaviorGroup) null;
      foreach (AgentBehaviorGroup behaviorGroup2 in this._behaviorGroups)
      {
        float score = behaviorGroup2.GetScore(isSimulation);
        if ((double) score > (double) num)
        {
          num = score;
          behaviorGroup1 = behaviorGroup2;
        }
      }
      if ((double) num <= 0.0 || behaviorGroup1 == null || behaviorGroup1.IsActive)
        return;
      this.ActivateGroup(behaviorGroup1);
    }

    private void ActivateGroup(AgentBehaviorGroup behaviorGroup)
    {
      foreach (AgentBehaviorGroup behaviorGroup1 in this._behaviorGroups)
        behaviorGroup1.IsActive = false;
      behaviorGroup.IsActive = true;
    }

    private void HandleBehaviorGroups(bool isSimulation)
    {
      if (!isSimulation && (double) this._checkBehaviorGroupsTimer.ElapsedTime <= 1.0)
        return;
      this.RefreshBehaviorGroups(isSimulation);
    }

    private void TickActiveGroups(float dt, bool isSimulation)
    {
      if (!this.OwnerAgent.IsActive())
        return;
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
      {
        if (behaviorGroup.IsActive)
          behaviorGroup.Tick(dt, isSimulation);
      }
    }

    public AgentBehavior GetActiveBehavior()
    {
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
      {
        if (behaviorGroup.IsActive)
          return behaviorGroup.GetActiveBehavior();
      }
      return (AgentBehavior) null;
    }

    public AgentBehaviorGroup GetActiveBehaviorGroup()
    {
      foreach (AgentBehaviorGroup behaviorGroup in this._behaviorGroups)
      {
        if (behaviorGroup.IsActive)
          return behaviorGroup;
      }
      return (AgentBehaviorGroup) null;
    }

    public enum NavigationState
    {
      NoTarget,
      GoToTarget,
      AtTargetPosition,
      UseMachine,
    }
  }
}
