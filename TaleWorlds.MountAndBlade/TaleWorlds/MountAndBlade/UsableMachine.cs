// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.UsableMachine
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class UsableMachine : SynchedMissionObject, IFocusable, IOrderable, IDetachment
  {
    public const string UsableMachineParentTag = "machine_parent";
    public string PilotStandingPointTag = "Pilot";
    public string AmmoPickUpTag = "ammopickup";
    public string WaitStandingPointTag = "Wait";
    protected GameEntity ActiveWaitStandingPoint;
    private readonly List<UsableMissionObjectComponent> _components;
    private DestructableComponent _destructionComponent;
    protected bool _areUsableStandingPointsVacant = true;
    protected List<(int, StandingPoint)> _usableStandingPoints;
    protected bool _isDetachmentRecentlyEvaluated;
    private int _reevaluatedCount;
    private bool _isEvaluated;
    private float _cachedDetachmentWeight;
    protected float EnemyRangeToStopUsing;
    protected Vec2 MachinePositionOffsetToStopUsingLocal = Vec2.Zero;
    protected bool MakeVisibilityCheck = true;
    private UsableMachineAIBase _ai;
    private StandingPoint _currentlyUsedAmmoPickUpPoint;
    private QueryData<bool> _isDisabledForAttackerAIDueToEnemyInRange;
    private QueryData<bool> _isDisabledForDefenderAIDueToEnemyInRange;
    protected bool _isDisabledForAI;
    protected MBList<Formation> _userFormations;
    private bool _isMachineDeactivated;

    public MBList<StandingPoint> StandingPoints { get; private set; }

    public StandingPoint PilotStandingPoint { get; private set; }

    protected internal List<StandingPoint> AmmoPickUpPoints { get; private set; }

    protected List<GameEntity> WaitStandingPoints { get; private set; }

    public DestructableComponent DestructionComponent => this._destructionComponent;

    public bool IsDestructible => this.DestructionComponent != null;

    public bool IsDestroyed
    {
      get => this.DestructionComponent != null && this.DestructionComponent.IsDestroyed;
    }

    public Agent PilotAgent => this.PilotStandingPoint?.UserAgent;

    public bool IsLoose => false;

    public UsableMachineAIBase Ai
    {
      get
      {
        if (this._ai == null)
          this._ai = this.CreateAIBehaviorObject();
        return this._ai;
      }
    }

    public virtual FocusableObjectType FocusableObjectType => FocusableObjectType.Item;

    public StandingPoint CurrentlyUsedAmmoPickUpPoint
    {
      get => this._currentlyUsedAmmoPickUpPoint;
      set
      {
        this._currentlyUsedAmmoPickUpPoint = value;
        this.SetScriptComponentToTick(this.GetTickRequirement());
      }
    }

    public bool HasAIPickingUpAmmo => this.CurrentlyUsedAmmoPickUpPoint != null;

    public MBReadOnlyList<Formation> UserFormations
    {
      get => (MBReadOnlyList<Formation>) this._userFormations;
    }

    protected UsableMachine() => this._components = new List<UsableMissionObjectComponent>();

    public void AddComponent(UsableMissionObjectComponent component)
    {
      this._components.Add(component);
      component.OnAdded(this.Scene);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void RemoveComponent(UsableMissionObjectComponent component)
    {
      component.OnRemoved();
      this._components.Remove(component);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public T GetComponent<T>() where T : UsableMissionObjectComponent
    {
      return this._components.Find((Predicate<UsableMissionObjectComponent>) (c => c is T)) as T;
    }

    public virtual OrderType GetOrder(BattleSideEnum side) => OrderType.Use;

    public virtual UsableMachineAIBase CreateAIBehaviorObject() => (UsableMachineAIBase) null;

    public GameEntity GetValidStandingPointForAgent(Agent agent)
    {
      float num = float.MaxValue;
      StandingPoint standingPoint1 = (StandingPoint) null;
      foreach (StandingPoint standingPoint2 in (List<StandingPoint>) this.StandingPoints)
      {
        if (!standingPoint2.IsDisabledForAgent(agent) && (!standingPoint2.HasUser || standingPoint2.HasAIUser))
        {
          float distanceSq = standingPoint2.GetUserFrameForAgent(agent).Origin.AsVec2.DistanceSquared(agent.Position.AsVec2);
          if (agent.CanReachAndUseObject((UsableMissionObject) standingPoint2, distanceSq) && (double) distanceSq < (double) num && (double) MathF.Abs(standingPoint2.GetUserFrameForAgent(agent).Origin.GetGroundVec3().z - agent.Position.z) < 1.5)
          {
            num = distanceSq;
            standingPoint1 = standingPoint2;
          }
        }
      }
      return standingPoint1?.GameEntity;
    }

    public GameEntity GetValidStandingPointForAgentWithoutDistanceCheck(Agent agent)
    {
      float num1 = float.MaxValue;
      StandingPoint standingPoint1 = (StandingPoint) null;
      foreach (StandingPoint standingPoint2 in (List<StandingPoint>) this.StandingPoints)
      {
        if (!standingPoint2.IsDisabledForAgent(agent) && (!standingPoint2.HasUser || standingPoint2.HasAIUser))
        {
          float num2 = standingPoint2.GetUserFrameForAgent(agent).Origin.AsVec2.DistanceSquared(agent.Position.AsVec2);
          if ((double) num2 < (double) num1 && (double) MathF.Abs(standingPoint2.GetUserFrameForAgent(agent).Origin.GetGroundVec3().z - agent.Position.z) < 1.5)
          {
            num1 = num2;
            standingPoint1 = standingPoint2;
          }
        }
      }
      return standingPoint1?.GameEntity;
    }

    public StandingPoint GetVacantStandingPointForAI(Agent agent)
    {
      if (this.PilotStandingPoint != null && !this.PilotStandingPoint.IsDisabledForAgent(agent) && !this.AmmoPickUpPoints.Contains(this.PilotStandingPoint))
        return this.PilotStandingPoint;
      float num = 1E+08f;
      StandingPoint standingPointForAi = (StandingPoint) null;
      foreach (StandingPoint standingPoint1 in (List<StandingPoint>) this.StandingPoints)
      {
        bool flag = true;
        if (this.AmmoPickUpPoints.Contains(standingPoint1))
        {
          foreach (StandingPoint standingPoint2 in (List<StandingPoint>) this.StandingPoints)
          {
            if (standingPoint2 is StandingPointWithWeaponRequirement && !this.AmmoPickUpPoints.Contains(standingPoint2) && (standingPoint2.IsDeactivated || standingPoint2.HasUser || standingPoint2.HasAIMovingTo))
            {
              flag = false;
              break;
            }
          }
        }
        if (flag && !standingPoint1.IsDisabledForAgent(agent))
        {
          float lengthSquared = (agent.Position - standingPoint1.GetUserFrameForAgent(agent).Origin.GetGroundVec3()).LengthSquared;
          if (!standingPoint1.IsDisabledForPlayers)
            lengthSquared -= 100000f;
          if ((double) lengthSquared < (double) num)
          {
            num = lengthSquared;
            standingPointForAi = standingPoint1;
          }
        }
      }
      return standingPointForAi;
    }

    public StandingPoint GetTargetStandingPointOfAIAgent(Agent agent)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.IsAIMovingTo(agent))
          return standingPoint;
      }
      return (StandingPoint) null;
    }

    public override void OnMissionEnded()
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        standingPoint.UserAgent?.StopUsingGameObject();
        standingPoint.IsDeactivated = true;
      }
    }

    public override void SetVisibleSynched(bool value, bool forceChildrenVisible = false)
    {
      base.SetVisibleSynched(value, forceChildrenVisible);
    }

    public override void SetPhysicsStateSynched(bool value, bool setChildren = true)
    {
      base.SetPhysicsStateSynched(value, setChildren);
      this.SetAbilityOfFaces(value);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.OnParentMachinePhysicsStateChanged();
    }

    public int UserCountNotInStruckAction
    {
      get
      {
        int notInStruckAction = 0;
        foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          if (standingPoint.HasUser && !standingPoint.UserAgent.IsInBeingStruckAction)
            ++notInStruckAction;
        }
        return notInStruckAction;
      }
    }

    public int UserCountIncludingInStruckAction
    {
      get
      {
        int includingInStruckAction = 0;
        foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        {
          if (standingPoint.HasUser)
            ++includingInStruckAction;
        }
        return includingInStruckAction;
      }
    }

    public virtual int MaxUserCount => this.StandingPoints.Count;

    protected internal override void OnEditorInit()
    {
      base.OnEditorInit();
      this.CollectAndSetStandingPoints();
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._isDisabledForAttackerAIDueToEnemyInRange = new QueryData<bool>((Func<bool>) (() =>
      {
        bool flag = false;
        if ((double) this.EnemyRangeToStopUsing > 0.0)
        {
          Vec3 position = this.GameEntity.GlobalPosition + this.GameEntity.GetGlobalFrame().rotation.TransformToParent(new Vec3(this.MachinePositionOffsetToStopUsingLocal));
          Agent closestEnemyAgent = Mission.Current.GetClosestEnemyAgent(Mission.Current.Teams.Attacker, position, this.EnemyRangeToStopUsing);
          flag = closestEnemyAgent != null && (double) closestEnemyAgent.Position.z > (double) position.z - 2.0 && (double) closestEnemyAgent.Position.z < (double) position.z + 4.0;
        }
        return flag;
      }), 1f);
      this._isDisabledForDefenderAIDueToEnemyInRange = new QueryData<bool>((Func<bool>) (() =>
      {
        bool flag = false;
        if ((double) this.EnemyRangeToStopUsing > 0.0)
        {
          Vec3 position = this.GameEntity.GlobalPosition + this.GameEntity.GetGlobalFrame().rotation.TransformToParent(new Vec3(this.MachinePositionOffsetToStopUsingLocal));
          Agent closestEnemyAgent = Mission.Current.GetClosestEnemyAgent(Mission.Current.Teams.Defender, position, this.EnemyRangeToStopUsing);
          flag = closestEnemyAgent != null && (double) closestEnemyAgent.Position.z > (double) position.z - 2.0 && (double) closestEnemyAgent.Position.z < (double) position.z + 4.0;
        }
        return flag;
      }), 1f);
      this.CollectAndSetStandingPoints();
      this.AmmoPickUpPoints = new List<StandingPoint>();
      this._destructionComponent = this.GameEntity.GetFirstScriptOfType<DestructableComponent>();
      this.PilotStandingPoint = (StandingPoint) null;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.GameEntity.HasTag(this.PilotStandingPointTag))
          this.PilotStandingPoint = standingPoint;
        if (standingPoint.GameEntity.HasTag(this.AmmoPickUpTag))
          this.AmmoPickUpPoints.Add(standingPoint);
        standingPoint.InitializeDefendingAgents();
      }
      this.WaitStandingPoints = this.GameEntity.CollectChildrenEntitiesWithTag(this.WaitStandingPointTag);
      if (this.WaitStandingPoints.Count > 0)
        this.ActiveWaitStandingPoint = this.WaitStandingPoints[0];
      this._userFormations = new MBList<Formation>();
      this._usableStandingPoints = new List<(int, StandingPoint)>();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    private void CollectAndSetStandingPoints()
    {
      GameEntity parent = this.GameEntity.Parent;
      if ((parent != null ? (parent.HasTag("machine_parent") ? 1 : 0) : 0) != 0)
        this.StandingPoints = this.GameEntity.Parent.CollectObjects<StandingPoint>();
      else
        this.StandingPoints = this.GameEntity.CollectObjects<StandingPoint>();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      bool flag = false;
      foreach (UsableMissionObjectComponent component in this._components)
      {
        if (component.IsOnTickRequired())
        {
          flag = true;
          break;
        }
      }
      return this.GameEntity.IsVisibleIncludeParents() && (flag || !GameNetwork.IsClientOrReplay && this.HasAIPickingUpAmmo) ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick : base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this.MakeVisibilityCheck && !this.GameEntity.IsVisibleIncludeParents())
        return;
      if (!GameNetwork.IsClientOrReplay && this.HasAIPickingUpAmmo && !this.CurrentlyUsedAmmoPickUpPoint.HasAIMovingTo && !this.CurrentlyUsedAmmoPickUpPoint.HasAIUser)
        this.CurrentlyUsedAmmoPickUpPoint = (StandingPoint) null;
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnTick(dt);
      int num = GameNetwork.IsClientOrReplay ? 1 : 0;
    }

    private static string DebugGetMemberNameOf<T>(object instance, T sp) where T : class
    {
      System.Type type = instance.GetType();
      foreach (PropertyInfo property in type.GetProperties(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
      {
        if (!(property.GetMethod == (MethodInfo) null))
        {
          if (property.GetValue(instance) == (object) sp)
            return property.Name;
          if (property.GetType().IsGenericType && (property.GetType().GetGenericTypeDefinition() == typeof (List<>) || property.GetType().GetGenericTypeDefinition() == typeof (MBList<>) || property.GetType().GetGenericTypeDefinition() == typeof (MBReadOnlyList<>)) && property.GetValue(instance) is IReadOnlyList<StandingPoint> standingPointList)
          {
            for (int index = 0; index < standingPointList.Count; ++index)
            {
              StandingPoint standingPoint = standingPointList[index];
              if ((object) sp == standingPoint)
                return property.Name + "[" + (object) index + "]";
            }
          }
        }
      }
      foreach (FieldInfo field in type.GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
      {
        if (field.GetValue(instance) == (object) sp)
          return field.Name;
        if (field.FieldType.IsGenericType && (field.FieldType.GetGenericTypeDefinition() == typeof (List<>) || field.FieldType.GetGenericTypeDefinition() == typeof (MBList<>) || field.FieldType.GetGenericTypeDefinition() == typeof (MBReadOnlyList<>)) && field.GetValue(instance) is IReadOnlyList<StandingPoint> standingPointList)
        {
          for (int index = 0; index < standingPointList.Count; ++index)
          {
            StandingPoint standingPoint = standingPointList[index];
            if ((object) sp == standingPoint)
              return field.Name + "[" + (object) index + "]";
          }
        }
      }
      return (string) null;
    }

    [Conditional("_RGL_KEEP_ASSERTS")]
    protected virtual void DebugTick(float dt)
    {
      if (!MBDebug.IsDisplayingHighLevelAI)
        return;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        Vec3 globalPosition = standingPoint.GameEntity.GlobalPosition;
        Vec3 vec3 = Vec3.One / 3f;
        int num = standingPoint.IsDeactivated ? 1 : 0;
      }
    }

    protected internal override void OnEditorTick(float dt)
    {
      base.OnEditorTick(dt);
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnEditorTick(dt);
    }

    protected internal override void OnEditorValidate()
    {
      base.OnEditorValidate();
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnEditorValidate();
    }

    public virtual void OnFocusGain(Agent userAgent)
    {
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnFocusGain(userAgent);
    }

    public virtual void OnFocusLose(Agent userAgent)
    {
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnFocusLose(userAgent);
    }

    public virtual TextObject GetInfoTextForBeingNotInteractable(Agent userAgent)
    {
      return TextObject.Empty;
    }

    public virtual bool HasWaitFrame
    {
      get => (NativeObject) this.ActiveWaitStandingPoint != (NativeObject) null;
    }

    public MatrixFrame WaitFrame
    {
      get
      {
        return (NativeObject) this.ActiveWaitStandingPoint != (NativeObject) null ? this.ActiveWaitStandingPoint.GetGlobalFrame() : new MatrixFrame();
      }
    }

    public GameEntity WaitEntity => this.ActiveWaitStandingPoint;

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnMissionReset();
    }

    public virtual bool IsDeactivated => this._isMachineDeactivated || this.IsDestroyed;

    public void Deactivate()
    {
      this._isMachineDeactivated = true;
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDeactivated = true;
    }

    public void Activate()
    {
      this._isMachineDeactivated = false;
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDeactivated = false;
    }

    public virtual bool IsDisabledForBattleSide(BattleSideEnum sideEnum) => this.IsDeactivated;

    public virtual bool IsDisabledForBattleSideAI(BattleSideEnum sideEnum)
    {
      if (this._isDisabledForAI)
        return true;
      return (double) this.EnemyRangeToStopUsing > 0.0 && sideEnum != BattleSideEnum.None && this.IsDisabledDueToEnemyInRange(sideEnum);
    }

    public virtual bool ShouldAutoLeaveDetachmentWhenDisabled(BattleSideEnum sideEnum) => true;

    protected bool IsDisabledDueToEnemyInRange(BattleSideEnum sideEnum)
    {
      return sideEnum == BattleSideEnum.Attacker ? this._isDisabledForAttackerAIDueToEnemyInRange.Value : this._isDisabledForDefenderAIDueToEnemyInRange.Value;
    }

    public virtual bool AutoAttachUserToFormation(BattleSideEnum sideEnum) => true;

    public virtual bool HasToBeDefendedByUser(BattleSideEnum sideEnum) => false;

    public virtual void Disable()
    {
      foreach (Team team in Mission.Current.Teams.Where<Team>((Func<Team, bool>) (t => t.DetachmentManager.ContainsDetachment((IDetachment) this))))
        team.DetachmentManager.DestroyDetachment((IDetachment) this);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (!standingPoint.GameEntity.HasTag(this.AmmoPickUpTag))
        {
          if (standingPoint.HasUser)
            standingPoint.UserAgent.StopUsingGameObject();
          standingPoint.SetIsDeactivatedSynched(true);
        }
      }
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      foreach (UsableMissionObjectComponent component in this._components)
        component.OnRemoved();
    }

    public override string ToString()
    {
      string str = this.GetType().ToString() + " with Components:";
      foreach (UsableMissionObjectComponent component in this._components)
        str = str + "[" + (object) component + "]";
      return str;
    }

    public abstract TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject);

    public virtual StandingPoint GetBestPointAlternativeTo(StandingPoint standingPoint, Agent agent)
    {
      return standingPoint;
    }

    public virtual bool IsInRangeToCheckAlternativePoints(Agent agent)
    {
      float num = this.StandingPoints.Count > 0 ? agent.GetInteractionDistanceToUsable((IUsable) this.StandingPoints[0]) + 1f : 2f;
      return (double) this.GameEntity.GlobalPosition.DistanceSquared(agent.Position) < (double) num * (double) num;
    }

    void IDetachment.OnFormationLeave(Formation formation)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        Agent userAgent = standingPoint.UserAgent;
        if (userAgent != null && userAgent.Formation == formation && !userAgent.IsPlayerControlled)
          this.OnFormationLeaveHelper(formation, userAgent);
        Agent movingAgent = standingPoint.MovingAgent;
        if (movingAgent != null && movingAgent.Formation == formation)
          this.OnFormationLeaveHelper(formation, movingAgent);
        for (int index = standingPoint.GetDefendingAgentCount() - 1; index >= 0; --index)
        {
          Agent defendingAgent = standingPoint.DefendingAgents[index];
          if (defendingAgent.Formation == formation)
            this.OnFormationLeaveHelper(formation, defendingAgent);
        }
      }
    }

    private void OnFormationLeaveHelper(Formation formation, Agent agent)
    {
      ((IDetachment) this).RemoveAgent(agent);
      formation.AttachUnit(agent);
    }

    bool IDetachment.IsAgentUsingOrInterested(Agent agent)
    {
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (agent.CurrentlyUsedGameObject == standingPoint || agent.IsAIControlled && agent.AIInterestedInGameObject((UsableMissionObject) standingPoint))
          return true;
      }
      return false;
    }

    protected virtual float GetWeightOfStandingPoint(StandingPoint sp)
    {
      return !sp.HasAIMovingTo ? 0.6f : 0.2f;
    }

    float IDetachment.GetDetachmentWeight(BattleSideEnum side) => this.GetDetachmentWeightAux(side);

    protected virtual float GetDetachmentWeightAux(BattleSideEnum side)
    {
      if (this.IsDisabledForBattleSideAI(side))
        return float.MinValue;
      this._usableStandingPoints.Clear();
      bool flag1 = false;
      bool flag2 = false;
      for (int index = 0; index < this.StandingPoints.Count; ++index)
      {
        StandingPoint standingPoint = this.StandingPoints[index];
        if (standingPoint.IsUsableBySide(side))
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

    void IDetachment.GetSlotIndexWeightTuples(List<(int, float)> slotIndexWeightTuples)
    {
      foreach ((int, StandingPoint) usableStandingPoint in this._usableStandingPoints)
      {
        StandingPoint sp = usableStandingPoint.Item2;
        slotIndexWeightTuples.Add((usableStandingPoint.Item1, this.GetWeightOfStandingPoint(sp) * (this._areUsableStandingPointsVacant || !sp.HasRecentlyBeenRechecked ? 1f : 0.1f)));
      }
    }

    bool IDetachment.IsSlotAtIndexAvailableForAgent(int slotIndex, Agent agent)
    {
      return agent.CanBeAssignedForScriptedMovement() && !this.StandingPoints[slotIndex].IsDisabledForAgent(agent) && !this.IsAgentOnInconvenientNavmesh(agent, this.StandingPoints[slotIndex]);
    }

    protected virtual bool IsAgentOnInconvenientNavmesh(Agent agent, StandingPoint standingPoint)
    {
      if (Mission.Current.MissionTeamAIType != Mission.MissionTeamAITypeEnum.Siege)
        return false;
      int navigationFaceId = agent.GetCurrentNavigationFaceId();
      if (agent.Team.TeamAI is TeamAISiegeComponent teamAi)
      {
        if (teamAi is TeamAISiegeAttacker && navigationFaceId % 10 == 1 || teamAi is TeamAISiegeDefender && navigationFaceId % 10 != 1)
          return true;
        foreach (int difficultNavmeshId in teamAi.DifficultNavmeshIDs)
        {
          if (navigationFaceId == difficultNavmeshId)
            return true;
        }
      }
      return false;
    }

    bool IDetachment.IsAgentEligible(Agent agent) => true;

    public void AddAgentAtSlotIndex(Agent agent, int slotIndex)
    {
      StandingPoint standingPoint = this.StandingPoints[slotIndex];
      if (standingPoint.HasAIMovingTo)
      {
        Agent movingAgent = standingPoint.MovingAgent;
        if (movingAgent != null)
        {
          ((IDetachment) this).RemoveAgent(movingAgent);
          movingAgent.Formation?.AttachUnit(movingAgent);
        }
      }
      if (standingPoint.HasDefendingAgent)
      {
        for (int index = standingPoint.DefendingAgents.Count - 1; index >= 0; --index)
        {
          Agent defendingAgent = standingPoint.DefendingAgents[index];
          if (defendingAgent != null)
          {
            ((IDetachment) this).RemoveAgent(defendingAgent);
            defendingAgent.Formation?.AttachUnit(defendingAgent);
          }
        }
      }
      ((IDetachment) this).AddAgent(agent, slotIndex);
      agent.Formation?.DetachUnit(agent, false);
      agent.Detachment = (IDetachment) this;
      agent.DetachmentWeight = 1f;
    }

    Agent IDetachment.GetMovingAgentAtSlotIndex(int slotIndex)
    {
      return this.StandingPoints[slotIndex].MovingAgent;
    }

    bool IDetachment.IsDetachmentRecentlyEvaluated() => this._isDetachmentRecentlyEvaluated;

    void IDetachment.UnmarkDetachment() => this._isDetachmentRecentlyEvaluated = false;

    void IDetachment.MarkSlotAtIndex(int slotIndex)
    {
      if (++this._reevaluatedCount >= this._usableStandingPoints.Count)
      {
        foreach ((int, StandingPoint) usableStandingPoint in this._usableStandingPoints)
          usableStandingPoint.Item2.HasRecentlyBeenRechecked = false;
        this._isDetachmentRecentlyEvaluated = true;
        this._reevaluatedCount = 0;
      }
      else
        this.StandingPoints[slotIndex].HasRecentlyBeenRechecked = true;
    }

    float? IDetachment.GetWeightOfNextSlot(BattleSideEnum side)
    {
      if (this.IsDisabledForBattleSideAI(side))
        return new float?();
      StandingPoint standingPointFor = this.GetSuitableStandingPointFor(side);
      return standingPointFor != null ? new float?(this.GetWeightOfStandingPoint(standingPointFor)) : new float?();
    }

    float IDetachment.GetExactCostOfAgentAtSlot(Agent candidate, int slotIndex)
    {
      StandingPoint standingPoint = this.StandingPoints[slotIndex];
      Vec3 globalPosition = standingPoint.GameEntity.GlobalPosition;
      WorldPosition point0 = new WorldPosition(candidate.Mission.Scene, globalPosition);
      WorldPosition worldPosition = candidate.GetWorldPosition();
      float pathDistance;
      if (!standingPoint.Scene.GetPathDistanceBetweenPositions(ref point0, ref worldPosition, candidate.Monster.BodyCapsuleRadius, out pathDistance))
        pathDistance = float.MaxValue;
      return pathDistance;
    }

    List<float> IDetachment.GetTemplateCostsOfAgent(Agent candidate, List<float> oldValue)
    {
      List<float> templateCostsOfAgent = oldValue ?? new List<float>(this.StandingPoints.Count);
      templateCostsOfAgent.Clear();
      for (int index = 0; index < this.StandingPoints.Count; ++index)
        templateCostsOfAgent.Add(float.MaxValue);
      foreach ((int, StandingPoint) usableStandingPoint in this._usableStandingPoints)
      {
        float num = usableStandingPoint.Item2.GameEntity.GlobalPosition.Distance(candidate.Position);
        templateCostsOfAgent[usableStandingPoint.Item1] = num * MissionGameModels.Current.AgentStatCalculateModel.GetDetachmentCostMultiplierOfAgent(candidate, (IDetachment) this);
      }
      return templateCostsOfAgent;
    }

    float IDetachment.GetTemplateWeightOfAgent(Agent candidate)
    {
      Scene scene = Mission.Current.Scene;
      Vec3 globalPosition = this.GameEntity.GlobalPosition;
      WorldPosition worldPosition = candidate.GetWorldPosition();
      WorldPosition point0 = new WorldPosition(scene, UIntPtr.Zero, globalPosition, true);
      float pathDistance;
      if (!scene.GetPathDistanceBetweenPositions(ref point0, ref worldPosition, candidate.Monster.BodyCapsuleRadius, out pathDistance))
        pathDistance = float.MaxValue;
      return pathDistance;
    }

    float IDetachment.GetWeightOfOccupiedSlot(Agent agent)
    {
      return this.GetWeightOfStandingPoint(this.StandingPoints.FirstOrDefault<StandingPoint>((Func<StandingPoint, bool>) (sp => sp.UserAgent == agent || sp.IsAIMovingTo(agent))));
    }

    WorldFrame? IDetachment.GetAgentFrame(Agent agent) => new WorldFrame?();

    void IDetachment.RemoveAgent(Agent agent)
    {
      agent.StopUsingGameObjectMT(flags: Agent.StopUsingGameObjectFlags.None);
    }

    public int GetNumberOfUsableSlots() => this._usableStandingPoints.Count;

    public bool IsStandingPointAvailableForAgent(Agent agent)
    {
      bool flag = false;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (!standingPoint.IsDeactivated && (standingPoint.IsInstantUse || (!standingPoint.HasUser || standingPoint.UserAgent == agent) && (!standingPoint.HasAIMovingTo || standingPoint.IsAIMovingTo(agent))) && !standingPoint.IsDisabledForAgent(agent) && !this.IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(standingPoint))
        {
          flag = true;
          break;
        }
      }
      return flag;
    }

    float? IDetachment.GetWeightOfAgentAtNextSlot(List<Agent> candidates, out Agent match)
    {
      BattleSideEnum side = candidates[0].Team.Side;
      StandingPoint standingPointFor = this.GetSuitableStandingPointFor(side, agents: candidates);
      if (standingPointFor != null)
      {
        match = UsableMachineAIBase.GetSuitableAgentForStandingPoint(this, standingPointFor, (IEnumerable<Agent>) candidates, new List<Agent>());
        if (match == null)
          return new float?();
        float? weightOfNextSlot = ((IDetachment) this).GetWeightOfNextSlot(side);
        float num = 1f;
        return !weightOfNextSlot.HasValue ? new float?() : new float?(weightOfNextSlot.GetValueOrDefault() * num);
      }
      match = (Agent) null;
      return new float?();
    }

    float? IDetachment.GetWeightOfAgentAtNextSlot(List<(Agent, float)> candidates, out Agent match)
    {
      BattleSideEnum side = candidates[0].Item1.Team.Side;
      StandingPoint standingPointFor = this.GetSuitableStandingPointFor(side, agentValuePairs: candidates);
      if (standingPointFor != null)
      {
        float? weightOfNextSlot = ((IDetachment) this).GetWeightOfNextSlot(side);
        match = UsableMachineAIBase.GetSuitableAgentForStandingPoint(this, standingPointFor, candidates, new List<Agent>(), weightOfNextSlot.Value);
        if (match == null)
          return new float?();
        float? nullable = weightOfNextSlot;
        float num = 1f;
        return !nullable.HasValue ? new float?() : new float?(nullable.GetValueOrDefault() * num);
      }
      match = (Agent) null;
      return new float?();
    }

    float? IDetachment.GetWeightOfAgentAtOccupiedSlot(
      Agent detachedAgent,
      List<Agent> candidates,
      out Agent match)
    {
      BattleSideEnum side = candidates[0].Team.Side;
      match = (Agent) null;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.IsAIMovingTo(detachedAgent) || standingPoint.UserAgent == detachedAgent)
        {
          match = UsableMachineAIBase.GetSuitableAgentForStandingPoint(this, standingPoint, (IEnumerable<Agent>) candidates, new List<Agent>());
          break;
        }
      }
      if (match == null)
        return new float?();
      float? weightOfNextSlot = ((IDetachment) this).GetWeightOfNextSlot(side);
      float num = 1f;
      return !weightOfNextSlot.HasValue ? new float?() : new float?((float) ((double) weightOfNextSlot.GetValueOrDefault() * (double) num * 0.5));
    }

    void IDetachment.AddAgent(Agent agent, int slotIndex)
    {
      StandingPoint usedObject = slotIndex == -1 ? this.GetSuitableStandingPointFor(agent.Team.Side, agent) : this.StandingPoints[slotIndex];
      if (usedObject != null)
      {
        if (usedObject.HasAIMovingTo && !usedObject.IsInstantUse)
          usedObject.MovingAgent.StopUsingGameObject();
        agent.AIMoveToGameObjectEnable((UsableMissionObject) usedObject, (IDetachment) this, this.Ai.GetScriptedFrameFlags(agent));
        if (!usedObject.GameEntity.HasTag(this.AmmoPickUpTag))
          return;
        this.CurrentlyUsedAmmoPickUpPoint = usedObject;
      }
      else
        TaleWorlds.Library.Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Objects\\Usables\\UsableMachine.cs", "AddAgent", 1367);
    }

    void IDetachment.FormationStartUsing(Formation formation)
    {
      this._userFormations.Add(formation);
    }

    void IDetachment.FormationStopUsing(Formation formation)
    {
      this._userFormations.Remove(formation);
    }

    public bool IsUsedByFormation(Formation formation) => this._userFormations.Contains(formation);

    void IDetachment.ResetEvaluation() => this._isEvaluated = false;

    bool IDetachment.IsEvaluated() => this._isEvaluated;

    void IDetachment.SetAsEvaluated() => this._isEvaluated = true;

    float IDetachment.GetDetachmentWeightFromCache() => this._cachedDetachmentWeight;

    float IDetachment.ComputeAndCacheDetachmentWeight(BattleSideEnum side)
    {
      this._cachedDetachmentWeight = this.GetDetachmentWeightAux(side);
      return this._cachedDetachmentWeight;
    }

    protected internal virtual bool IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(
      StandingPoint standingPoint)
    {
      return this.AmmoPickUpPoints.Contains(standingPoint) && (this.StandingPoints.Any<StandingPoint>((Func<StandingPoint, bool>) (standingPoint2 => (standingPoint2.IsDeactivated || standingPoint2.HasUser || standingPoint2.HasAIMovingTo) && !standingPoint2.GameEntity.HasTag(this.AmmoPickUpTag) && standingPoint2 is StandingPointWithWeaponRequirement)) || this.HasAIPickingUpAmmo);
    }

    protected virtual StandingPoint GetSuitableStandingPointFor(
      BattleSideEnum side,
      Agent agent = null,
      List<Agent> agents = null,
      List<(Agent, float)> agentValuePairs = null)
    {
      return this.StandingPoints.FirstOrDefault<StandingPoint>((Func<StandingPoint, bool>) (sp => !sp.IsDeactivated && (sp.IsInstantUse || !sp.HasUser && !sp.HasAIMovingTo) && (agent == null || !sp.IsDisabledForAgent(agent)) && (agents == null || agents.Any<Agent>((Func<Agent, bool>) (a => !sp.IsDisabledForAgent(a)))) && (agentValuePairs == null || agentValuePairs.Any<(Agent, float)>((Func<(Agent, float), bool>) (avp => !sp.IsDisabledForAgent(avp.Item1)))) && !this.IsStandingPointNotUsedOnAccountOfBeingAmmoLoad(sp)));
    }

    public abstract string GetDescriptionText(GameEntity gameEntity = null);
  }
}
