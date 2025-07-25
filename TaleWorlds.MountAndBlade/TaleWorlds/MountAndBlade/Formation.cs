// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Formation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.Network.Messages;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class Formation : IFormation
  {
    public const float AveragePositionCalculatePeriod = 0.05f;
    public const int MinimumUnitSpacing = 0;
    public const int MaximumUnitSpacing = 2;
    public const int RetreatPositionDistanceCacheCount = 2;
    public const float RetreatPositionCacheUseDistanceSquared = 400f;
    private static Formation _simulationFormationTemp;
    private static int _simulationFormationUniqueIdentifier;
    public readonly Team Team;
    public readonly int Index;
    public readonly FormationClass FormationIndex;
    public Banner Banner;
    public bool HasBeenPositioned;
    public Vec2? ReferencePosition;
    private FormationClass _representativeClass = FormationClass.NumberOfAllFormations;
    private bool _logicalClassNeedsUpdate;
    private FormationClass _logicalClass = FormationClass.NumberOfAllFormations;
    private int[] _logicalClassCounts = new int[4];
    private Agent _playerOwner;
    private string _bannerCode;
    private bool _isAIControlled = true;
    private bool _enforceNotSplittableByAI = true;
    private WorldPosition _orderPosition;
    private Vec2 _direction;
    private int _unitSpacing;
    private Vec2 _orderLocalAveragePosition;
    private bool _orderLocalAveragePositionIsDirty = true;
    private int _formationOrderDefensivenessFactor = 2;
    private MovementOrder _movementOrder;
    private FacingOrder _facingOrder;
    private ArrangementOrder _arrangementOrder;
    private Timer _arrangementOrderTickOccasionallyTimer;
    private FormOrder _formOrder;
    private RidingOrder _ridingOrder;
    private FiringOrder _firingOrder;
    private Agent _captain;
    private Vec2 _smoothedAverageUnitPosition = Vec2.Invalid;
    private MBList<IDetachment> _detachments;
    private IFormationArrangement _arrangement;
    private int[] _agentIndicesCache;
    private MBList<Agent> _detachedUnits;
    private int _undetachableNonPlayerUnitCount;
    private MBList<Agent> _looseDetachedUnits;
    private bool? _overridenHasAnyMountedUnit;
    private bool _isArrangementShapeChanged;
    private int _currentSpawnIndex;
    private Formation _targetFormation;

    public event Action<Formation, Agent> OnUnitAdded;

    public event Action<Formation, Agent> OnUnitRemoved;

    public event Action<Formation> OnUnitCountChanged;

    public event Action<Formation> OnUnitSpacingChanged;

    public event Action<Formation> OnTick;

    public event Action<Formation> OnWidthChanged;

    public event Action<Formation, MovementOrder.MovementOrderEnum> OnBeforeMovementOrderApplied;

    public event Action<Formation, ArrangementOrder.ArrangementOrderEnum> OnAfterArrangementOrderApplied;

    public Formation.RetreatPositionCacheSystem RetreatPositionCache { get; private set; } = new Formation.RetreatPositionCacheSystem(2);

    public int CountOfUnits => this.Arrangement.UnitCount + this._detachedUnits.Count;

    public int CountOfDetachedUnits => this._detachedUnits.Count;

    public int CountOfUndetachableNonPlayerUnits => this._undetachableNonPlayerUnitCount;

    public int CountOfUnitsWithoutDetachedOnes
    {
      get => this.Arrangement.UnitCount + this._looseDetachedUnits.Count;
    }

    public MBReadOnlyList<IFormationUnit> UnitsWithoutLooseDetachedOnes
    {
      get => this.Arrangement.GetAllUnits();
    }

    public int CountOfUnitsWithoutLooseDetachedOnes => this.Arrangement.UnitCount;

    public int CountOfDetachableNonplayerUnits
    {
      get
      {
        return this.Arrangement.UnitCount - (this.IsPlayerTroopInFormation || this.HasPlayerControlledTroop ? 1 : 0) - this.CountOfUndetachableNonPlayerUnits;
      }
    }

    public Vec2 OrderPosition => this._orderPosition.AsVec2;

    public Vec3 OrderGroundPosition => this._orderPosition.GetGroundVec3();

    public bool OrderPositionIsValid => this._orderPosition.IsValid;

    public float Depth => this.Arrangement.Depth;

    public float MinimumWidth => this.Arrangement.MinimumWidth;

    public float MaximumWidth => this.Arrangement.MaximumWidth;

    public float UnitDiameter
    {
      get
      {
        return Formation.GetDefaultUnitDiameter(this.CalculateHasSignificantNumberOfMounted && !(this.RidingOrder == RidingOrder.RidingOrderDismount));
      }
    }

    public Vec2 Direction => this._direction;

    public Vec2 CurrentDirection
    {
      get => (this.QuerySystem.EstimatedDirection * 0.8f + this.Direction * 0.2f).Normalized();
    }

    public Vec2 SmoothedAverageUnitPosition => this._smoothedAverageUnitPosition;

    public int UnitSpacing => this._unitSpacing;

    public MBReadOnlyList<Agent> LooseDetachedUnits
    {
      get => (MBReadOnlyList<Agent>) this._looseDetachedUnits;
    }

    public MBReadOnlyList<Agent> DetachedUnits => (MBReadOnlyList<Agent>) this._detachedUnits;

    public AttackEntityOrderDetachment AttackEntityOrderDetachment { get; private set; }

    public FormationAI AI { get; private set; }

    public Formation TargetFormation
    {
      get => this._targetFormation;
      private set
      {
        if (this._targetFormation == value)
          return;
        this._targetFormation = value;
        this.ApplyActionOnEachUnit((Action<Agent>) (agent =>
        {
          Agent agent1 = agent;
          Formation formation = value;
          int targetFormationIndex = formation != null ? formation.Index : -1;
          agent1.SetTargetFormationIndex(targetFormationIndex);
        }));
      }
    }

    public FormationQuerySystem QuerySystem { get; private set; }

    public MBReadOnlyList<IDetachment> Detachments
    {
      get => (MBReadOnlyList<IDetachment>) this._detachments;
    }

    public int? OverridenUnitCount { get; private set; }

    public bool IsSpawning { get; private set; }

    public bool IsAITickedAfterSplit { get; set; }

    public bool HasPlayerControlledTroop { get; private set; }

    public bool IsPlayerTroopInFormation { get; private set; }

    public bool ContainsAgentVisuals { get; set; }

    public Agent PlayerOwner
    {
      get => this._playerOwner;
      set
      {
        this._playerOwner = value;
        this.SetControlledByAI(value == null);
      }
    }

    public string BannerCode
    {
      set
      {
        this._bannerCode = value;
        if (!GameNetwork.IsServer)
          return;
        GameNetwork.BeginBroadcastModuleEvent();
        GameNetwork.WriteMessage((GameNetworkMessage) new InitializeFormation(this, this.Team.TeamIndex, this._bannerCode));
        GameNetwork.EndBroadcastModuleEvent(GameNetwork.EventBroadcastFlags.None);
      }
      get => this._bannerCode;
    }

    public bool IsSplittableByAI => this.IsAIOwned && this.IsConvenientForTransfer;

    public bool IsAIOwned
    {
      get
      {
        if (this._enforceNotSplittableByAI)
          return false;
        if (this.IsAIControlled)
          return true;
        if (this.Team.IsPlayerGeneral)
          return false;
        return !this.Team.IsPlayerSergeant || this.PlayerOwner != Agent.Main;
      }
    }

    public bool IsConvenientForTransfer
    {
      get
      {
        return Mission.Current.MissionTeamAIType != Mission.MissionTeamAITypeEnum.Siege || this.Team.Side != BattleSideEnum.Attacker || this.QuerySystem.InsideCastleUnitCountIncludingUnpositioned == 0;
      }
    }

    public bool EnforceNotSplittableByAI => this._enforceNotSplittableByAI;

    public bool IsAIControlled => this._isAIControlled;

    public Vec2 OrderLocalAveragePosition
    {
      get
      {
        if (this._orderLocalAveragePositionIsDirty)
        {
          this._orderLocalAveragePositionIsDirty = false;
          this._orderLocalAveragePosition = new Vec2();
          if (this.UnitsWithoutLooseDetachedOnes.Count > 0)
          {
            int num = 0;
            foreach (IFormationUnit looseDetachedOne in (List<IFormationUnit>) this.UnitsWithoutLooseDetachedOnes)
            {
              Vec2? positionOfUnitOrDefault = this.Arrangement.GetLocalPositionOfUnitOrDefault(looseDetachedOne);
              if (positionOfUnitOrDefault.HasValue)
              {
                this._orderLocalAveragePosition += positionOfUnitOrDefault.Value;
                ++num;
              }
            }
            if (num > 0)
              this._orderLocalAveragePosition *= 1f / (float) num;
          }
        }
        return this._orderLocalAveragePosition;
      }
    }

    public FacingOrder FacingOrder
    {
      get => this._facingOrder;
      set => this._facingOrder = value;
    }

    public ArrangementOrder ArrangementOrder
    {
      get => this._arrangementOrder;
      set
      {
        if (value.OrderType != this._arrangementOrder.OrderType)
        {
          this._arrangementOrder.OnCancel(this);
          int defensivenessChange = ArrangementOrder.GetArrangementOrderDefensivenessChange(this._arrangementOrder.OrderEnum, value.OrderEnum);
          if (defensivenessChange != 0 && MovementOrder.GetMovementOrderDefensiveness(this._movementOrder.OrderEnum) != 0)
          {
            this._formationOrderDefensivenessFactor += defensivenessChange;
            this.UpdateAgentDrivenPropertiesBasedOnOrderDefensiveness();
          }
          if (this.FormOrder.OrderEnum == FormOrder.FormOrderEnum.Custom)
            this.FormOrder = FormOrder.FormOrderCustom(Formation.TransformCustomWidthBetweenArrangementOrientations(this._arrangementOrder.OrderEnum, value.OrderEnum, this.Arrangement.FlankWidth));
          this._arrangementOrder = value;
          this._arrangementOrder.OnApply(this);
          Action<Formation, ArrangementOrder.ArrangementOrderEnum> arrangementOrderApplied = this.OnAfterArrangementOrderApplied;
          if (arrangementOrderApplied == null)
            return;
          arrangementOrderApplied(this, this._arrangementOrder.OrderEnum);
        }
        else
          this._arrangementOrder.SoftUpdate(this);
      }
    }

    public FormOrder FormOrder
    {
      get => this._formOrder;
      set
      {
        this._formOrder = value;
        this._formOrder.OnApply(this);
      }
    }

    public RidingOrder RidingOrder
    {
      get => this._ridingOrder;
      set
      {
        if (!(this._ridingOrder != value))
          return;
        this._ridingOrder = value;
        this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.SetRidingOrder(value.OrderEnum)));
        this.Arrangement_OnShapeChanged();
      }
    }

    public FiringOrder FiringOrder
    {
      get => this._firingOrder;
      set
      {
        if (!(this._firingOrder != value))
          return;
        this._firingOrder = value;
        this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.SetFiringOrder(value.OrderEnum)));
      }
    }

    private bool IsSimulationFormation => this.Team == null;

    public bool HasAnyMountedUnit
    {
      get
      {
        return this._overridenHasAnyMountedUnit.HasValue ? this._overridenHasAnyMountedUnit.Value : (int) ((double) this.QuerySystem.GetRangedCavalryUnitRatioWithoutExpiration * (double) this.CountOfUnits + 9.9999997473787516E-06) + (int) ((double) this.QuerySystem.GetCavalryUnitRatioWithoutExpiration * (double) this.CountOfUnits + 9.9999997473787516E-06) > 0;
      }
    }

    public float Width
    {
      get => this.Arrangement.Width;
      private set => this.Arrangement.Width = value;
    }

    public bool IsDeployment
    {
      get => Mission.Current.GetMissionBehavior<BattleDeploymentHandler>() != null;
    }

    public FormationClass RepresentativeClass => this._representativeClass;

    public FormationClass LogicalClass => this._logicalClass;

    public IEnumerable<FormationClass> SecondaryLogicalClasses
    {
      get
      {
        FormationClass primaryLogicalClass = this.LogicalClass;
        if (primaryLogicalClass != FormationClass.NumberOfAllFormations)
        {
          List<(FormationClass, int)> valueTupleList = new List<(FormationClass, int)>();
          for (int index = 0; index < this._logicalClassCounts.Length; ++index)
          {
            if (this._logicalClassCounts[index] > 0)
              valueTupleList.Add(((FormationClass) index, this._logicalClassCounts[index]));
          }
          if (valueTupleList.Count > 0)
          {
            valueTupleList.Sort((IComparer<(FormationClass, int)>) Comparer<(FormationClass, int)>.Create((Comparison<(FormationClass, int)>) ((x, y) =>
            {
              if (x.count < y.count)
                return 1;
              return x.count <= y.count ? 0 : -1;
            })));
            foreach ((FormationClass, int) valueTuple in valueTupleList)
            {
              if (valueTuple.Item1 != primaryLogicalClass)
                yield return valueTuple.Item1;
            }
          }
        }
      }
    }

    public IFormationArrangement Arrangement
    {
      get => this._arrangement;
      set
      {
        if (this._arrangement != null)
        {
          this._arrangement.OnWidthChanged -= new Action(this.Arrangement_OnWidthChanged);
          this._arrangement.OnShapeChanged -= new Action(this.Arrangement_OnShapeChanged);
        }
        this._arrangement = value;
        if (this._arrangement != null)
        {
          this._arrangement.OnWidthChanged += new Action(this.Arrangement_OnWidthChanged);
          this._arrangement.OnShapeChanged += new Action(this.Arrangement_OnShapeChanged);
        }
        this.Arrangement_OnWidthChanged();
        this.Arrangement_OnShapeChanged();
      }
    }

    public FormationClass PhysicalClass => this.QuerySystem.MainClass;

    public IEnumerable<FormationClass> SecondaryPhysicalClasses
    {
      get
      {
        FormationClass primaryPhysicalClass = this.PhysicalClass;
        if (primaryPhysicalClass != FormationClass.Infantry && (double) this.QuerySystem.InfantryUnitRatio > 0.0)
          yield return FormationClass.Infantry;
        if (primaryPhysicalClass != FormationClass.Ranged && (double) this.QuerySystem.RangedUnitRatio > 0.0)
          yield return FormationClass.Ranged;
        if (primaryPhysicalClass != FormationClass.Cavalry && (double) this.QuerySystem.CavalryUnitRatio > 0.0)
          yield return FormationClass.Cavalry;
        if (primaryPhysicalClass != FormationClass.HorseArcher && (double) this.QuerySystem.RangedCavalryUnitRatio > 0.0)
          yield return FormationClass.HorseArcher;
      }
    }

    public float Interval
    {
      get
      {
        return this.CalculateHasSignificantNumberOfMounted && !(this.RidingOrder == RidingOrder.RidingOrderDismount) ? Formation.CavalryInterval(this.UnitSpacing) : Formation.InfantryInterval(this.UnitSpacing);
      }
    }

    public bool CalculateHasSignificantNumberOfMounted
    {
      get
      {
        return this._overridenHasAnyMountedUnit.HasValue ? this._overridenHasAnyMountedUnit.Value : (double) this.QuerySystem.CavalryUnitRatio + (double) this.QuerySystem.RangedCavalryUnitRatio >= 0.10000000149011612;
      }
    }

    public float Distance
    {
      get
      {
        return this.CalculateHasSignificantNumberOfMounted && !(this.RidingOrder == RidingOrder.RidingOrderDismount) ? Formation.CavalryDistance(this.UnitSpacing) : Formation.InfantryDistance(this.UnitSpacing);
      }
    }

    public Vec2 CurrentPosition
    {
      get
      {
        return this.QuerySystem.GetAveragePositionWithMaxAge(0.1f) + this.CurrentDirection.TransformToParentUnitF(-this.OrderLocalAveragePosition);
      }
    }

    public Agent Captain
    {
      get => this._captain;
      set
      {
        if (this._captain == value)
          return;
        this._captain = value;
        this.OnCaptainChanged();
      }
    }

    public float MinimumDistance
    {
      get
      {
        return Formation.GetDefaultMinimumDistance(this.HasAnyMountedUnit && !(this.RidingOrder == RidingOrder.RidingOrderDismount));
      }
    }

    public bool IsLoose => ArrangementOrder.GetUnitLooseness(this.ArrangementOrder.OrderEnum);

    public float MinimumInterval
    {
      get
      {
        return Formation.GetDefaultMinimumInterval(this.HasAnyMountedUnit && !(this.RidingOrder == RidingOrder.RidingOrderDismount));
      }
    }

    public float MaximumInterval
    {
      get
      {
        return Formation.GetDefaultMaximumInterval(this.HasAnyMountedUnit && !(this.RidingOrder == RidingOrder.RidingOrderDismount));
      }
    }

    public float MaximumDistance
    {
      get
      {
        return Formation.GetDefaultMaximumDistance(this.HasAnyMountedUnit && !(this.RidingOrder == RidingOrder.RidingOrderDismount));
      }
    }

    internal bool PostponeCostlyOperations { get; private set; }

    public Formation(Team team, int index)
    {
      this.Team = team;
      this.Index = index;
      this.FormationIndex = (FormationClass) index;
      this.IsSpawning = false;
      this.Reset();
    }

    ~Formation()
    {
      if (this.IsSimulationFormation)
        return;
      Formation._simulationFormationTemp = (Formation) null;
    }

    bool IFormation.GetIsLocalPositionAvailable(
      Vec2 localPosition,
      Vec2? nearestAvailableUnitPositionLocal)
    {
      Vec2 parentUnitF1 = this.Direction.TransformToParentUnitF(localPosition);
      WorldPosition orderWorldPosition = this.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
      orderWorldPosition.SetVec2(this.OrderPosition + parentUnitF1);
      WorldPosition nearestAvailableUnitPosition = WorldPosition.Invalid;
      if (nearestAvailableUnitPositionLocal.HasValue)
      {
        Vec2 parentUnitF2 = this.Direction.TransformToParentUnitF(nearestAvailableUnitPositionLocal.Value);
        nearestAvailableUnitPosition = this.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
        nearestAvailableUnitPosition.SetVec2(this.OrderPosition + parentUnitF2);
      }
      float manhattanDistance = (float) ((double) MathF.Abs(localPosition.x) + (double) MathF.Abs(localPosition.y) + ((double) this.Interval + (double) this.Distance) * 2.0);
      return Mission.Current.IsFormationUnitPositionAvailable(ref this._orderPosition, ref orderWorldPosition, ref nearestAvailableUnitPosition, manhattanDistance, this.Team);
    }

    IFormationUnit IFormation.GetClosestUnitTo(
      Vec2 localPosition,
      MBList<IFormationUnit> unitsWithSpaces,
      float? maxDistance)
    {
      return this.GetClosestUnitToAux(this.OrderPosition + this.Direction.TransformToParentUnitF(localPosition), (MBReadOnlyList<IFormationUnit>) unitsWithSpaces, maxDistance);
    }

    IFormationUnit IFormation.GetClosestUnitTo(
      IFormationUnit targetUnit,
      MBList<IFormationUnit> unitsWithSpaces,
      float? maxDistance)
    {
      return this.GetClosestUnitToAux(((Agent) targetUnit).Position.AsVec2, (MBReadOnlyList<IFormationUnit>) unitsWithSpaces, maxDistance);
    }

    void IFormation.SetUnitToFollow(IFormationUnit unit, IFormationUnit toFollow, Vec2 vector)
    {
      (unit as Agent).SetColumnwiseFollowAgent(toFollow as Agent, ref vector);
    }

    bool IFormation.BatchUnitPositions(
      MBArrayList<Vec2i> orderedPositionIndices,
      MBArrayList<Vec2> orderedLocalPositions,
      MBList2D<int> availabilityTable,
      MBList2D<WorldPosition> globalPositionTable,
      int fileCount,
      int rankCount)
    {
      if (!this._orderPosition.IsValid || !(this._orderPosition.GetNavMesh() != UIntPtr.Zero))
        return false;
      Mission.Current.BatchFormationUnitPositions(orderedPositionIndices, orderedLocalPositions, availabilityTable, globalPositionTable, this._orderPosition, this.Direction, fileCount, rankCount);
      return true;
    }

    public WorldPosition CreateNewOrderWorldPosition(
      WorldPosition.WorldPositionEnforcedCache worldPositionEnforcedCache)
    {
      if (!this.OrderPositionIsValid)
        TaleWorlds.Library.Debug.Print("Formation order position is not valid. Team: " + (object) this.Team.TeamIndex + ", Formation: " + (object) (int) this.FormationIndex, color: TaleWorlds.Library.Debug.DebugColor.Yellow);
      switch (worldPositionEnforcedCache)
      {
        case WorldPosition.WorldPositionEnforcedCache.NavMeshVec3:
          this._orderPosition.GetNavMeshVec3();
          break;
        case WorldPosition.WorldPositionEnforcedCache.GroundVec3:
          this._orderPosition.GetGroundVec3();
          break;
      }
      return this._orderPosition;
    }

    public void SetMovementOrder(MovementOrder input)
    {
      Action<Formation, MovementOrder.MovementOrderEnum> movementOrderApplied = this.OnBeforeMovementOrderApplied;
      if (movementOrderApplied != null)
        movementOrderApplied(this, input.OrderEnum);
      if (input.OrderEnum == MovementOrder.MovementOrderEnum.Invalid)
        input = MovementOrder.MovementOrderStop;
      int num = !this._movementOrder.AreOrdersPracticallySame(this._movementOrder, input, this.IsAIControlled) ? 1 : 0;
      if (num != 0)
        this._movementOrder.OnCancel(this);
      if (num != 0)
      {
        if (MovementOrder.GetMovementOrderDefensivenessChange(this._movementOrder.OrderEnum, input.OrderEnum) != 0)
        {
          this._formationOrderDefensivenessFactor = MovementOrder.GetMovementOrderDefensiveness(input.OrderEnum) != 0 ? MovementOrder.GetMovementOrderDefensiveness(input.OrderEnum) + ArrangementOrder.GetArrangementOrderDefensiveness(this._arrangementOrder.OrderEnum) : 0;
          this.UpdateAgentDrivenPropertiesBasedOnOrderDefensiveness();
        }
        this._movementOrder = input;
        this._movementOrder.OnApply(this);
      }
      this.SetTargetFormation((Formation) null);
    }

    public void SetControlledByAI(bool isControlledByAI, bool enforceNotSplittableByAI = false)
    {
      if (this._isAIControlled == isControlledByAI)
        return;
      this._isAIControlled = isControlledByAI;
      if (this._isAIControlled)
      {
        if (this.AI.ActiveBehavior != null && this.CountOfUnits > 0)
        {
          bool tickOccasionally = Mission.Current.ForceTickOccasionally;
          Mission.Current.ForceTickOccasionally = true;
          BehaviorComponent activeBehavior1 = this.AI.ActiveBehavior;
          this.AI.Tick();
          Mission.Current.ForceTickOccasionally = tickOccasionally;
          BehaviorComponent activeBehavior2 = this.AI.ActiveBehavior;
          if (activeBehavior1 == activeBehavior2)
            this.AI.ActiveBehavior.OnBehaviorActivated();
          this.SetMovementOrder(this.AI.ActiveBehavior.CurrentOrder);
        }
        this._enforceNotSplittableByAI = enforceNotSplittableByAI;
      }
      else
        this._enforceNotSplittableByAI = false;
    }

    public void SetTargetFormation(Formation targetFormation)
    {
      this.TargetFormation = targetFormation;
    }

    public void OnDeploymentFinished() => this.AI?.OnDeploymentFinished();

    public void ResetArrangementOrderTickTimer()
    {
      this._arrangementOrderTickOccasionallyTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
    }

    public void SetPositioning(WorldPosition? position = null, Vec2? direction = null, int? unitSpacing = null)
    {
      Vec2 orderPosition = this.OrderPosition;
      Vec2 direction1 = this.Direction;
      WorldPosition? newPosition = new WorldPosition?();
      bool hasNewDirection = false;
      bool flag = false;
      if (position.HasValue && position.Value.IsValid)
      {
        if (!this.HasBeenPositioned && !this.IsSimulationFormation)
          this.HasBeenPositioned = true;
        if (position.Value.AsVec2 != this.OrderPosition)
        {
          if (!Mission.Current.IsPositionInsideBoundaries(position.Value.AsVec2))
          {
            Vec2 boundaryPosition = Mission.Current.GetClosestBoundaryPosition(position.Value.AsVec2);
            if (this.OrderPosition != boundaryPosition)
            {
              WorldPosition worldPosition = position.Value;
              worldPosition.SetVec2(boundaryPosition);
              newPosition = new WorldPosition?(worldPosition);
            }
          }
          else
            newPosition = position;
        }
      }
      if (direction.HasValue && this.Direction != direction.Value)
        hasNewDirection = true;
      if (unitSpacing.HasValue && this.UnitSpacing != unitSpacing.Value)
        flag = true;
      if (!(newPosition.HasValue | hasNewDirection | flag))
        return;
      this.Arrangement.BeforeFormationFrameChange();
      if (newPosition.HasValue)
        this._orderPosition = newPosition.Value;
      if (hasNewDirection)
        this._direction = direction.Value;
      if (flag)
      {
        this._unitSpacing = unitSpacing.Value;
        Action<Formation> unitSpacingChanged = this.OnUnitSpacingChanged;
        if (unitSpacingChanged != null)
          unitSpacingChanged(this);
        this.Arrangement_OnShapeChanged();
        this.Arrangement.AreLocalPositionsDirty = true;
      }
      if (!this.IsSimulationFormation && this.Arrangement.IsTurnBackwardsNecessary(orderPosition, newPosition, direction1, hasNewDirection, direction))
        this.Arrangement.TurnBackwards();
      this.Arrangement.OnFormationFrameChanged();
      if (!newPosition.HasValue)
        return;
      this.ArrangementOrder.OnOrderPositionChanged(this, orderPosition);
    }

    public int GetCountOfUnitsWithCondition(Func<Agent, bool> function)
    {
      int unitsWithCondition = 0;
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        if (function((Agent) allUnit))
          ++unitsWithCondition;
      }
      foreach (Agent detachedUnit in (List<Agent>) this._detachedUnits)
      {
        if (function(detachedUnit))
          ++unitsWithCondition;
      }
      return unitsWithCondition;
    }

    public ref readonly MovementOrder GetReadonlyMovementOrderReference()
    {
      return ref this._movementOrder;
    }

    public Agent GetFirstUnit() => this.GetUnitWithIndex(0);

    public int GetCountOfUnitsBelongingToLogicalClass(FormationClass logicalClass)
    {
      return this._logicalClassCounts[(int) logicalClass];
    }

    public int GetCountOfUnitsBelongingToPhysicalClass(
      FormationClass physicalClass,
      bool excludeBannerBearers)
    {
      int belongingToPhysicalClass = 0;
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        bool flag = false;
        switch (physicalClass)
        {
          case FormationClass.Infantry:
            flag = excludeBannerBearers ? QueryLibrary.IsInfantryWithoutBanner((Agent) allUnit) : QueryLibrary.IsInfantry((Agent) allUnit);
            break;
          case FormationClass.Ranged:
            flag = excludeBannerBearers ? QueryLibrary.IsRangedWithoutBanner((Agent) allUnit) : QueryLibrary.IsRanged((Agent) allUnit);
            break;
          case FormationClass.Cavalry:
            flag = excludeBannerBearers ? QueryLibrary.IsCavalryWithoutBanner((Agent) allUnit) : QueryLibrary.IsCavalry((Agent) allUnit);
            break;
          case FormationClass.HorseArcher:
            flag = excludeBannerBearers ? QueryLibrary.IsRangedCavalryWithoutBanner((Agent) allUnit) : QueryLibrary.IsRangedCavalry((Agent) allUnit);
            break;
        }
        if (flag)
          ++belongingToPhysicalClass;
      }
      foreach (Agent detachedUnit in (List<Agent>) this._detachedUnits)
      {
        bool flag = false;
        switch (physicalClass)
        {
          case FormationClass.Infantry:
            flag = excludeBannerBearers ? QueryLibrary.IsInfantryWithoutBanner(detachedUnit) : QueryLibrary.IsInfantry(detachedUnit);
            break;
          case FormationClass.Ranged:
            flag = excludeBannerBearers ? QueryLibrary.IsRangedWithoutBanner(detachedUnit) : QueryLibrary.IsRanged(detachedUnit);
            break;
          case FormationClass.Cavalry:
            flag = excludeBannerBearers ? QueryLibrary.IsCavalryWithoutBanner(detachedUnit) : QueryLibrary.IsCavalry(detachedUnit);
            break;
          case FormationClass.HorseArcher:
            flag = excludeBannerBearers ? QueryLibrary.IsRangedCavalryWithoutBanner(detachedUnit) : QueryLibrary.IsRangedCavalry(detachedUnit);
            break;
        }
        if (flag)
          ++belongingToPhysicalClass;
      }
      return belongingToPhysicalClass;
    }

    public void SetSpawnIndex(int value = 0) => this._currentSpawnIndex = value;

    public int GetNextSpawnIndex()
    {
      int currentSpawnIndex = this._currentSpawnIndex;
      ++this._currentSpawnIndex;
      return currentSpawnIndex;
    }

    public Agent GetUnitWithIndex(int unitIndex)
    {
      if (this.Arrangement.GetAllUnits().Count > unitIndex)
        return (Agent) this.Arrangement.GetAllUnits()[unitIndex];
      unitIndex -= this.Arrangement.GetAllUnits().Count;
      return this._detachedUnits.Count > unitIndex ? this._detachedUnits[unitIndex] : (Agent) null;
    }

    public Vec2 GetAveragePositionOfUnits(bool excludeDetachedUnits, bool excludePlayer)
    {
      int num = excludeDetachedUnits ? this.CountOfUnitsWithoutDetachedOnes : this.CountOfUnits;
      if (num > 0)
      {
        Vec2 zero = Vec2.Zero;
        foreach (Agent allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
        {
          if (!excludePlayer || !allUnit.IsMainAgent)
            zero += allUnit.Position.AsVec2;
          else
            --num;
        }
        if (excludeDetachedUnits)
        {
          for (int index = 0; index < this._looseDetachedUnits.Count; ++index)
            zero += this._looseDetachedUnits[index].Position.AsVec2;
        }
        else
        {
          for (int index = 0; index < this._detachedUnits.Count; ++index)
            zero += this._detachedUnits[index].Position.AsVec2;
        }
        if (num > 0)
          return zero * (1f / (float) num);
      }
      return Vec2.Invalid;
    }

    public Agent GetMedianAgent(
      bool excludeDetachedUnits,
      bool excludePlayer,
      Vec2 averagePosition)
    {
      excludeDetachedUnits = excludeDetachedUnits && this.CountOfUnitsWithoutDetachedOnes > 0;
      excludePlayer = excludePlayer && (this.CountOfUndetachableNonPlayerUnits > 0 || this.CountOfDetachableNonplayerUnits > 0);
      float num1 = float.MaxValue;
      Agent medianAgent = (Agent) null;
      foreach (Agent allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        if (!excludePlayer || !allUnit.IsMainAgent)
        {
          float num2 = allUnit.Position.AsVec2.DistanceSquared(averagePosition);
          if ((double) num2 <= (double) num1)
          {
            medianAgent = allUnit;
            num1 = num2;
          }
        }
      }
      if (excludeDetachedUnits)
      {
        for (int index = 0; index < this._looseDetachedUnits.Count; ++index)
        {
          float num3 = this._looseDetachedUnits[index].Position.AsVec2.DistanceSquared(averagePosition);
          if ((double) num3 <= (double) num1)
          {
            medianAgent = this._looseDetachedUnits[index];
            num1 = num3;
          }
        }
      }
      else
      {
        for (int index = 0; index < this._detachedUnits.Count; ++index)
        {
          float num4 = this._detachedUnits[index].Position.AsVec2.DistanceSquared(averagePosition);
          if ((double) num4 <= (double) num1)
          {
            medianAgent = this._detachedUnits[index];
            num1 = num4;
          }
        }
      }
      return medianAgent;
    }

    public Agent.UnderAttackType GetUnderAttackTypeOfUnits(float timeLimit = 3f)
    {
      float a1 = float.MinValue;
      float a2 = float.MinValue;
      timeLimit += MBCommon.GetTotalMissionTime();
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        a1 = MathF.Max(a1, ((Agent) allUnit).LastMeleeHitTime);
        a2 = MathF.Max(a2, ((Agent) allUnit).LastRangedHitTime);
        if ((double) a2 >= 0.0 && (double) a2 < (double) timeLimit)
          return Agent.UnderAttackType.UnderRangedAttack;
        if ((double) a1 >= 0.0 && (double) a1 < (double) timeLimit)
          return Agent.UnderAttackType.UnderMeleeAttack;
      }
      for (int index = 0; index < this._detachedUnits.Count; ++index)
      {
        a1 = MathF.Max(a1, this._detachedUnits[index].LastMeleeHitTime);
        a2 = MathF.Max(a2, this._detachedUnits[index].LastRangedHitTime);
        if ((double) a2 >= 0.0 && (double) a2 < (double) timeLimit)
          return Agent.UnderAttackType.UnderRangedAttack;
        if ((double) a1 >= 0.0 && (double) a1 < (double) timeLimit)
          return Agent.UnderAttackType.UnderMeleeAttack;
      }
      return Agent.UnderAttackType.NotUnderAttack;
    }

    public Agent.MovementBehaviorType GetMovementTypeOfUnits()
    {
      float curMissionTime = MBCommon.GetTotalMissionTime();
      int retreatingCount = 0;
      int attackingCount = 0;
      this.ApplyActionOnEachUnit((Action<Agent>) (agent =>
      {
        if (agent.IsAIControlled && (agent.IsRetreating() || agent.Formation != null && agent.Formation._movementOrder.OrderType == OrderType.Retreat))
          ++retreatingCount;
        if ((double) curMissionTime - (double) agent.LastMeleeAttackTime >= 3.0)
          return;
        ++attackingCount;
      }));
      if (this.CountOfUnits > 0 && (double) retreatingCount / (double) this.CountOfUnits > 0.30000001192092896)
        return Agent.MovementBehaviorType.Flee;
      return attackingCount > 0 ? Agent.MovementBehaviorType.Engaged : Agent.MovementBehaviorType.Idle;
    }

    public IEnumerable<Agent> GetUnitsWithoutDetachedOnes()
    {
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
        yield return allUnit as Agent;
      for (int i = 0; i < this._looseDetachedUnits.Count; ++i)
        yield return this._looseDetachedUnits[i];
    }

    public Vec2 GetWallDirectionOfRelativeFormationLocation(Agent unit)
    {
      if (unit.IsDetachedFromFormation)
        return Vec2.Invalid;
      Vec2? formationLocation = this.Arrangement.GetLocalWallDirectionOfRelativeFormationLocation((IFormationUnit) unit);
      return formationLocation.HasValue ? this.Direction.TransformToParentUnitF(formationLocation.Value) : Vec2.Invalid;
    }

    public Vec2 GetDirectionOfUnit(Agent unit)
    {
      if (unit.IsDetachedFromFormation)
        return unit.GetMovementDirection();
      Vec2? directionOfUnitOrDefault = this.Arrangement.GetLocalDirectionOfUnitOrDefault((IFormationUnit) unit);
      return directionOfUnitOrDefault.HasValue ? this.Direction.TransformToParentUnitF(directionOfUnitOrDefault.Value) : unit.GetMovementDirection();
    }

    private WorldPosition GetOrderPositionOfUnitAux(Agent unit)
    {
      WorldPosition? positionOfUnitOrDefault = this.Arrangement.GetWorldPositionOfUnitOrDefault((IFormationUnit) unit);
      if (positionOfUnitOrDefault.HasValue)
        return positionOfUnitOrDefault.Value;
      if (!this.OrderPositionIsValid)
        TaleWorlds.Library.Debug.Print("Formation order position is not valid. Team: " + (object) this.Team.TeamIndex + ", Formation: " + (object) (int) this.FormationIndex + "Unit Pos: " + (object) unit.GetWorldPosition().GetGroundVec3() + "Mission Mode: " + Mission.Current.Mode.ToString(), color: TaleWorlds.Library.Debug.DebugColor.Yellow);
      WorldPosition orderWorldPosition = this._movementOrder.CreateNewOrderWorldPosition(this, WorldPosition.WorldPositionEnforcedCache.NavMeshVec3);
      return orderWorldPosition.GetNavMesh() == UIntPtr.Zero || !Mission.Current.IsPositionInsideBoundaries(orderWorldPosition.AsVec2) ? unit.GetWorldPosition() : orderWorldPosition;
    }

    public WorldPosition GetOrderPositionOfUnit(Agent unit)
    {
      if (unit.IsDetachedFromFormation && (this._movementOrder.MovementState != MovementOrder.MovementStateEnum.Charge || !unit.Detachment.IsLoose || unit.Mission.Mode == MissionMode.Deployment))
      {
        WorldFrame? detachmentFrame = this.GetDetachmentFrame(unit);
        return detachmentFrame.HasValue ? detachmentFrame.Value.Origin : WorldPosition.Invalid;
      }
      switch (this._movementOrder.MovementState)
      {
        case MovementOrder.MovementStateEnum.Charge:
          if (unit.Mission.Mode == MissionMode.Deployment)
            return this.GetOrderPositionOfUnitAux(unit);
          if (!this.OrderPositionIsValid)
            TaleWorlds.Library.Debug.Print("Formation order position is not valid. Team: " + (object) this.Team.TeamIndex + ", Formation: " + (object) (int) this.FormationIndex + "Unit Pos: " + (object) unit.GetWorldPosition().GetGroundVec3(), color: TaleWorlds.Library.Debug.DebugColor.Yellow);
          return this._movementOrder.CreateNewOrderWorldPosition(this, WorldPosition.WorldPositionEnforcedCache.None);
        case MovementOrder.MovementStateEnum.Hold:
          return this.GetOrderPositionOfUnitAux(unit);
        case MovementOrder.MovementStateEnum.Retreat:
          return WorldPosition.Invalid;
        case MovementOrder.MovementStateEnum.StandGround:
          return unit.GetWorldPosition();
        default:
          TaleWorlds.Library.Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Formation.cs", nameof (GetOrderPositionOfUnit), 1567);
          return WorldPosition.Invalid;
      }
    }

    public Vec2 GetCurrentGlobalPositionOfUnit(Agent unit, bool blendWithOrderDirection)
    {
      if (unit.IsDetachedFromFormation)
        return unit.Position.AsVec2;
      Vec2? defaultWithAdjustment = this.Arrangement.GetLocalPositionOfUnitOrDefaultWithAdjustment((IFormationUnit) unit, blendWithOrderDirection ? (float) (((double) this.QuerySystem.EstimatedInterval - (double) this.Interval) * 0.89999997615814209) : 0.0f);
      return defaultWithAdjustment.HasValue ? (blendWithOrderDirection ? this.CurrentDirection : this.QuerySystem.EstimatedDirection).TransformToParentUnitF(defaultWithAdjustment.Value) + this.CurrentPosition : unit.Position.AsVec2;
    }

    public float GetAverageMaximumMovementSpeedOfUnits()
    {
      if (this.CountOfUnitsWithoutDetachedOnes == 0)
        return 0.1f;
      float num = 0.0f;
      foreach (Agent withoutDetachedOne in this.GetUnitsWithoutDetachedOnes())
        num += withoutDetachedOne.RunSpeedCached;
      return num / (float) this.CountOfUnitsWithoutDetachedOnes;
    }

    public float GetMovementSpeedOfUnits()
    {
      float? runRestriction;
      float? walkRestriction;
      this.ArrangementOrder.GetMovementSpeedRestriction(out runRestriction, out walkRestriction);
      if (!runRestriction.HasValue && !walkRestriction.HasValue)
        runRestriction = new float?(1f);
      if (walkRestriction.HasValue)
        return this.CountOfUnits == 0 ? 0.1f : (this.CountOfUnitsWithoutDetachedOnes == 0 ? (IEnumerable<Agent>) this._detachedUnits : this.GetUnitsWithoutDetachedOnes()).Min<Agent>((Func<Agent, float>) (u => u.WalkSpeedCached)) * walkRestriction.Value;
      if (this.CountOfUnits == 0)
        return 0.1f;
      float num = (this.CountOfUnitsWithoutDetachedOnes == 0 ? (IEnumerable<Agent>) this._detachedUnits : this.GetUnitsWithoutDetachedOnes()).Average<Agent>((Func<Agent, float>) (u => u.RunSpeedCached));
      FormationQuerySystem.FormationIntegrityDataGroup formationIntegrityData = this.QuerySystem.FormationIntegrityData;
      return (double) formationIntegrityData.DeviationOfPositionsExcludeFarAgents < (double) formationIntegrityData.AverageMaxUnlimitedSpeedExcludeFarAgents * 0.25 ? num * runRestriction.Value : num;
    }

    public float GetFormationPower()
    {
      float sum = 0.0f;
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => sum += agent.CharacterPowerCached));
      return sum;
    }

    public float GetFormationMeleeFightingPower()
    {
      float sum = 0.0f;
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => sum += agent.CharacterPowerCached * (this.FormationIndex == FormationClass.Ranged || this.FormationIndex == FormationClass.HorseArcher ? 0.4f : 1f)));
      return sum;
    }

    internal IDetachment GetDetachmentForDebug(Agent agent)
    {
      return this.Detachments.FirstOrDefault<IDetachment>((Func<IDetachment, bool>) (d => d.IsAgentUsingOrInterested(agent)));
    }

    public IDetachment GetDetachmentOrDefault(Agent agent) => agent.Detachment;

    public WorldFrame? GetDetachmentFrame(Agent agent) => agent.Detachment.GetAgentFrame(agent);

    public Vec2 GetMiddleFrontUnitPositionOffset()
    {
      return this.Direction.TransformToParentUnitF(this.Arrangement.GetLocalPositionOfReservedUnitPosition());
    }

    public List<IFormationUnit> GetUnitsToPopWithReferencePosition(int count, Vec3 targetPosition)
    {
      int count1 = MathF.Min(count, this.Arrangement.UnitCount);
      List<IFormationUnit> referencePosition = count1 == 0 ? new List<IFormationUnit>() : this.Arrangement.GetUnitsToPop(count1, targetPosition);
      int count2 = count - referencePosition.Count;
      if (count2 > 0)
      {
        List<Agent> list = this._looseDetachedUnits.Take<Agent>(count2).ToList<Agent>();
        count2 -= list.Count;
        referencePosition.AddRange((IEnumerable<IFormationUnit>) list);
      }
      if (count2 > 0)
      {
        IEnumerable<Agent> agents = this._detachedUnits.Take<Agent>(count2);
        int num = count2 - agents.Count<Agent>();
        referencePosition.AddRange((IEnumerable<IFormationUnit>) agents);
      }
      return referencePosition;
    }

    public List<IFormationUnit> GetUnitsToPop(int count)
    {
      int count1 = MathF.Min(count, this.Arrangement.UnitCount);
      List<IFormationUnit> unitsToPop = count1 == 0 ? new List<IFormationUnit>() : this.Arrangement.GetUnitsToPop(count1);
      int count2 = count - unitsToPop.Count;
      if (count2 > 0)
      {
        List<Agent> list = this._looseDetachedUnits.Take<Agent>(count2).ToList<Agent>();
        count2 -= list.Count;
        unitsToPop.AddRange((IEnumerable<IFormationUnit>) list);
      }
      if (count2 > 0)
      {
        IEnumerable<Agent> agents = this._detachedUnits.Take<Agent>(count2);
        int num = count2 - agents.Count<Agent>();
        unitsToPop.AddRange((IEnumerable<IFormationUnit>) agents);
      }
      return unitsToPop;
    }

    public IEnumerable<(WorldPosition, Vec2)> GetUnavailableUnitPositionsAccordingToNewOrder(
      Formation simulationFormation,
      in WorldPosition position,
      in Vec2 direction,
      float width,
      int unitSpacing)
    {
      return Formation.GetUnavailableUnitPositionsAccordingToNewOrder(this, simulationFormation, position, direction, this.Arrangement, width, unitSpacing);
    }

    public void GetUnitSpawnFrameWithIndex(
      int unitIndex,
      in WorldPosition formationPosition,
      in Vec2 formationDirection,
      float width,
      int unitCount,
      int unitSpacing,
      bool isMountedFormation,
      out WorldPosition? unitSpawnPosition,
      out Vec2? unitSpawnDirection)
    {
      Formation.GetUnitPositionWithIndexAccordingToNewOrder((Formation) null, unitIndex, in formationPosition, in formationDirection, this.Arrangement, width, unitSpacing, unitCount, isMountedFormation, this.Index, out unitSpawnPosition, out unitSpawnDirection, out float _);
    }

    public void GetUnitPositionWithIndexAccordingToNewOrder(
      Formation simulationFormation,
      int unitIndex,
      in WorldPosition formationPosition,
      in Vec2 formationDirection,
      float width,
      int unitSpacing,
      out WorldPosition? unitSpawnPosition,
      out Vec2? unitSpawnDirection)
    {
      Formation.GetUnitPositionWithIndexAccordingToNewOrder(simulationFormation, unitIndex, in formationPosition, in formationDirection, this.Arrangement, width, unitSpacing, this.Arrangement.UnitCount, this.HasAnyMountedUnit, this.Index, out unitSpawnPosition, out unitSpawnDirection, out float _);
    }

    public void GetUnitPositionWithIndexAccordingToNewOrder(
      Formation simulationFormation,
      int unitIndex,
      in WorldPosition formationPosition,
      in Vec2 formationDirection,
      float width,
      int unitSpacing,
      int overridenUnitCount,
      out WorldPosition? unitPosition,
      out Vec2? unitDirection)
    {
      Formation.GetUnitPositionWithIndexAccordingToNewOrder(simulationFormation, unitIndex, in formationPosition, in formationDirection, this.Arrangement, width, unitSpacing, overridenUnitCount, this.HasAnyMountedUnit, this.Index, out unitPosition, out unitDirection, out float _);
    }

    public void GetUnitPositionWithIndexAccordingToNewOrder(
      Formation simulationFormation,
      int unitIndex,
      in WorldPosition formationPosition,
      in Vec2 formationDirection,
      float width,
      int unitSpacing,
      out WorldPosition? unitSpawnPosition,
      out Vec2? unitSpawnDirection,
      out float actualWidth)
    {
      Formation.GetUnitPositionWithIndexAccordingToNewOrder(simulationFormation, unitIndex, in formationPosition, in formationDirection, this.Arrangement, width, unitSpacing, this.Arrangement.UnitCount, this.HasAnyMountedUnit, this.Index, out unitSpawnPosition, out unitSpawnDirection, out actualWidth);
    }

    public bool HasUnitsWithCondition(Func<Agent, bool> function)
    {
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        if (function((Agent) allUnit))
          return true;
      }
      for (int index = 0; index < this._detachedUnits.Count; ++index)
      {
        if (function(this._detachedUnits[index]))
          return true;
      }
      return false;
    }

    public bool HasUnitsWithCondition(Func<Agent, bool> function, out Agent result)
    {
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        if (function((Agent) allUnit))
        {
          result = (Agent) allUnit;
          return true;
        }
      }
      for (int index = 0; index < this._detachedUnits.Count; ++index)
      {
        if (function(this._detachedUnits[index]))
        {
          result = this._detachedUnits[index];
          return true;
        }
      }
      result = (Agent) null;
      return false;
    }

    public bool HasAnyEnemyFormationsThatIsNotEmpty()
    {
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.IsEnemyOf(this.Team))
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
              return true;
          }
        }
      }
      return false;
    }

    public bool HasUnitWithConditionLimitedRandom(
      Func<Agent, bool> function,
      int startingIndex,
      int willBeCheckedUnitCount,
      out Agent resultAgent)
    {
      int unitCount = this.Arrangement.UnitCount;
      int count = this._detachedUnits.Count;
      if (unitCount + count <= willBeCheckedUnitCount)
        return this.HasUnitsWithCondition(function, out resultAgent);
      for (int index1 = 0; index1 < willBeCheckedUnitCount; ++index1)
      {
        if (startingIndex < unitCount)
        {
          int index2 = MBRandom.RandomInt(unitCount);
          if (function((Agent) this.Arrangement.GetAllUnits()[index2]))
          {
            resultAgent = (Agent) this.Arrangement.GetAllUnits()[index2];
            return true;
          }
        }
        else if (count > 0)
        {
          int index3 = MBRandom.RandomInt(count);
          if (function(this._detachedUnits[index3]))
          {
            resultAgent = this._detachedUnits[index3];
            return true;
          }
        }
      }
      resultAgent = (Agent) null;
      return false;
    }

    public int[] CollectUnitIndices()
    {
      if (this._agentIndicesCache == null || this._agentIndicesCache.Length != this.CountOfUnits)
        this._agentIndicesCache = new int[this.CountOfUnits];
      int index1 = 0;
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        this._agentIndicesCache[index1] = ((Agent) allUnit).Index;
        ++index1;
      }
      for (int index2 = 0; index2 < this._detachedUnits.Count; ++index2)
      {
        this._agentIndicesCache[index1] = this._detachedUnits[index2].Index;
        ++index1;
      }
      return this._agentIndicesCache;
    }

    public void ApplyActionOnEachUnit(Action<Agent> action, Agent ignoreAgent = null)
    {
      if (ignoreAgent == null)
      {
        foreach (Agent allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
          action(allUnit);
        for (int index = 0; index < this._detachedUnits.Count; ++index)
          action(this._detachedUnits[index]);
      }
      else
      {
        foreach (Agent allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
        {
          if (allUnit != ignoreAgent)
            action(allUnit);
        }
        for (int index = 0; index < this._detachedUnits.Count; ++index)
        {
          Agent detachedUnit = this._detachedUnits[index];
          if (detachedUnit != ignoreAgent)
            action(detachedUnit);
        }
      }
    }

    public void ApplyActionOnEachAttachedUnit(Action<Agent> action)
    {
      foreach (Agent allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
        action(allUnit);
    }

    public void ApplyActionOnEachDetachedUnit(Action<Agent> action)
    {
      for (int index = 0; index < this._detachedUnits.Count; ++index)
        action(this._detachedUnits[index]);
    }

    public void ApplyActionOnEachUnitViaBackupList(Action<Agent> action)
    {
      if (this.Arrangement.GetAllUnits().Count > 0)
      {
        foreach (IFormationUnit formationUnit in this.Arrangement.GetAllUnits().ToArray())
          action((Agent) formationUnit);
      }
      if (this._detachedUnits.Count <= 0)
        return;
      foreach (Agent agent in this._detachedUnits.ToArray())
        action(agent);
    }

    public void ApplyActionOnEachUnit(
      Action<Agent, List<WorldPosition>> action,
      List<WorldPosition> list)
    {
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
        action((Agent) allUnit, list);
      for (int index = 0; index < this._detachedUnits.Count; ++index)
        action(this._detachedUnits[index], list);
    }

    public int CountUnitsOnNavMeshIDMod10(int navMeshID, bool includeOnlyPositionedUnits)
    {
      int num = 0;
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.Arrangement.GetAllUnits())
      {
        if (((Agent) allUnit).GetCurrentNavigationFaceId() % 10 == navMeshID && (!includeOnlyPositionedUnits || this.Arrangement.GetUnpositionedUnits() == null || this.Arrangement.GetUnpositionedUnits().IndexOf(allUnit) < 0))
          ++num;
      }
      if (!includeOnlyPositionedUnits)
      {
        foreach (Agent detachedUnit in (List<Agent>) this._detachedUnits)
        {
          if (detachedUnit.GetCurrentNavigationFaceId() % 10 == navMeshID)
            ++num;
        }
      }
      return num;
    }

    public void OnAgentControllerChanged(Agent agent, Agent.ControllerType oldController)
    {
      Agent.ControllerType controller = agent.Controller;
      if (oldController != Agent.ControllerType.Player && controller == Agent.ControllerType.Player)
      {
        this.HasPlayerControlledTroop = true;
        if (!GameNetwork.IsMultiplayer)
          this.TryRelocatePlayerUnit();
        if (agent.IsDetachableFromFormation)
          return;
        this.OnUndetachableNonPlayerUnitRemoved(agent);
      }
      else
      {
        if (oldController != Agent.ControllerType.Player || controller == Agent.ControllerType.Player)
          return;
        this.HasPlayerControlledTroop = false;
        if (agent.IsDetachableFromFormation)
          return;
        this.OnUndetachableNonPlayerUnitAdded(agent);
      }
    }

    public void OnMassUnitTransferStart() => this.PostponeCostlyOperations = true;

    public void OnMassUnitTransferEnd()
    {
      this.ReapplyFormOrder();
      this.QuerySystem.Expire();
      this.Team.QuerySystem.ExpireAfterUnitAddRemove();
      if (this._logicalClassNeedsUpdate)
        this.CalculateLogicalClass();
      if (this.CountOfUnits == 0)
        this._representativeClass = FormationClass.NumberOfAllFormations;
      if (Mission.Current.IsTeleportingAgents)
      {
        this.SetPositioning(new WorldPosition?(this._orderPosition));
        this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.UpdateCachedAndFormationValues(true, false)));
      }
      this.PostponeCostlyOperations = false;
    }

    public void OnBatchUnitRemovalStart()
    {
      this.PostponeCostlyOperations = true;
      this.Arrangement.OnBatchRemoveStart();
    }

    public void OnBatchUnitRemovalEnd()
    {
      this.Arrangement.OnBatchRemoveEnd();
      this.ReapplyFormOrder();
      this.QuerySystem.ExpireAfterUnitAddRemove();
      this.Team.QuerySystem.ExpireAfterUnitAddRemove();
      if (this._logicalClassNeedsUpdate)
        this.CalculateLogicalClass();
      this.PostponeCostlyOperations = false;
    }

    public void OnUnitAddedOrRemoved()
    {
      if (!this.PostponeCostlyOperations)
      {
        this.ReapplyFormOrder();
        this.QuerySystem.ExpireAfterUnitAddRemove();
        this.Team?.QuerySystem.ExpireAfterUnitAddRemove();
      }
      Action<Formation> unitCountChanged = this.OnUnitCountChanged;
      if (unitCountChanged == null)
        return;
      unitCountChanged(this);
    }

    public void OnAgentLostMount(Agent agent)
    {
      if (agent.IsDetachedFromFormation)
        return;
      this._arrangement.OnUnitLostMount((IFormationUnit) agent);
    }

    public void OnFormationDispersed()
    {
      this.Arrangement.OnFormationDispersed();
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.UpdateCachedAndFormationValues(true, false)));
    }

    public void OnUnitDetachmentChanged(
      Agent unit,
      bool isOldDetachmentLoose,
      bool isNewDetachmentLoose)
    {
      if (isOldDetachmentLoose && !isNewDetachmentLoose)
      {
        this._looseDetachedUnits.Remove(unit);
      }
      else
      {
        if (!(!isOldDetachmentLoose & isNewDetachmentLoose))
          return;
        this._looseDetachedUnits.Add(unit);
      }
    }

    public void OnUndetachableNonPlayerUnitAdded(Agent unit)
    {
      if ((unit.Formation != this ? 0 : (!unit.IsPlayerControlled ? 1 : 0)) == 0)
        return;
      ++this._undetachableNonPlayerUnitCount;
    }

    public void OnUndetachableNonPlayerUnitRemoved(Agent unit)
    {
      if ((unit.Formation != this ? 0 : (!unit.IsPlayerControlled ? 1 : 0)) == 0)
        return;
      --this._undetachableNonPlayerUnitCount;
    }

    public void ResetMovementOrderPositionCache() => this._movementOrder.ResetPositionCache();

    public void Reset()
    {
      this.Arrangement = (IFormationArrangement) new LineFormation((IFormation) this);
      this._arrangementOrderTickOccasionallyTimer = new Timer(Mission.Current.CurrentTime, 0.5f);
      this.ResetAux();
      this.FacingOrder = FacingOrder.FacingOrderLookAtEnemy;
      this._enforceNotSplittableByAI = false;
      this.ContainsAgentVisuals = false;
      this.PlayerOwner = (Agent) null;
    }

    public IEnumerable<Formation> Split(int count = 2)
    {
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
        formation.PostponeCostlyOperations = true;
      IEnumerable<Formation> source = this.Team.MasterOrderController.SplitFormation(this, count);
      if (source.Count<Formation>() > 1 && this.Team != null)
      {
        foreach (Formation formation in source)
          formation.QuerySystem.Expire();
      }
      foreach (Formation formation in (List<Formation>) this.Team.FormationsIncludingEmpty)
      {
        formation.CalculateLogicalClass();
        formation.PostponeCostlyOperations = false;
      }
      if (this.CountOfUnits == 0)
        this._representativeClass = FormationClass.NumberOfAllFormations;
      return source;
    }

    public void TransferUnits(Formation target, int unitCount)
    {
      this.PostponeCostlyOperations = true;
      target.PostponeCostlyOperations = true;
      this.Team.MasterOrderController.TransferUnits(this, target, unitCount);
      this.CalculateLogicalClass();
      target.CalculateLogicalClass();
      if (this.CountOfUnits == 0)
        this._representativeClass = FormationClass.NumberOfAllFormations;
      this.PostponeCostlyOperations = false;
      target.PostponeCostlyOperations = false;
      this.QuerySystem.Expire();
      target.QuerySystem.Expire();
      this.Team.QuerySystem.ExpireAfterUnitAddRemove();
      target.Team.QuerySystem.ExpireAfterUnitAddRemove();
    }

    public void TransferUnitsAux(
      Formation target,
      int unitCount,
      bool isPlayerOrder,
      bool useSelectivePop)
    {
      if (!isPlayerOrder && !this.IsSplittableByAI)
        return;
      MBDebug.Print(this.FormationIndex.GetName() + " has " + (object) this.CountOfUnits + " units, " + target.FormationIndex.GetName() + " has " + (object) target.CountOfUnits + " units");
      MBDebug.Print(this.Team.Side.ToString() + " " + this.FormationIndex.GetName() + " transfers " + (object) unitCount + " units to " + target.FormationIndex.GetName());
      if (unitCount == 0)
        return;
      if (target.CountOfUnits == 0)
      {
        target.CopyOrdersFrom(this);
        target.SetPositioning(new WorldPosition?(this._orderPosition), new Vec2?(this._direction), new int?(this._unitSpacing));
      }
      BattleBannerBearersModel bannerBearersModel = MissionGameModels.Current.BattleBannerBearersModel;
      List<IFormationUnit> formationUnitList;
      if (bannerBearersModel.GetFormationBanner(this) == null)
      {
        formationUnitList = useSelectivePop ? this.GetUnitsToPopWithReferencePosition(unitCount, target.OrderPositionIsValid ? target.OrderPosition.ToVec3() : target.QuerySystem.MedianPosition.GetGroundVec3()) : this.GetUnitsToPop(unitCount).ToList<IFormationUnit>();
      }
      else
      {
        List<Agent> formationBannerBearers = bannerBearersModel.GetFormationBannerBearers(this);
        int count1 = Math.Min(this.CountOfUnits, unitCount + formationBannerBearers.Count);
        formationUnitList = useSelectivePop ? this.GetUnitsToPopWithReferencePosition(count1, target.OrderPositionIsValid ? target.OrderPosition.ToVec3() : target.QuerySystem.MedianPosition.GetGroundVec3()) : this.GetUnitsToPop(count1).ToList<IFormationUnit>();
        foreach (Agent agent in formationBannerBearers)
        {
          if (formationUnitList.Count > unitCount)
            formationUnitList.Remove((IFormationUnit) agent);
          else
            break;
        }
        if (formationUnitList.Count > unitCount)
        {
          int count2 = formationUnitList.Count - unitCount;
          formationUnitList.RemoveRange(formationUnitList.Count - count2, count2);
        }
      }
      if (bannerBearersModel.GetFormationBanner(target) != null)
      {
        foreach (Agent formationBannerBearer in bannerBearersModel.GetFormationBannerBearers(target))
        {
          if (formationBannerBearer.Formation == this && !formationUnitList.Contains((IFormationUnit) formationBannerBearer))
          {
            int index = formationUnitList.FindIndex((Predicate<IFormationUnit>) (unit => unit is Agent agent && agent.Banner == null));
            if (index >= 0)
              formationUnitList[index] = (IFormationUnit) formationBannerBearer;
            else
              break;
          }
        }
      }
      foreach (Agent agent in formationUnitList)
        agent.Formation = target;
      this.Team.TriggerOnFormationsChanged(this);
      this.Team.TriggerOnFormationsChanged(target);
      MBDebug.Print(this.FormationIndex.GetName() + " has " + (object) this.CountOfUnits + " units, " + target.FormationIndex.GetName() + " has " + (object) target.CountOfUnits + " units");
    }

    [Conditional("DEBUG")]
    public void DebugArrangements()
    {
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
        {
          if (formation.CountOfUnits > 0)
            formation.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.AgentVisuals.SetContourColor(new uint?())));
        }
      }
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.AgentVisuals.SetContourColor(new uint?(4294901760U))));
      Vec3 vec3_1 = this.Direction.ToVec3();
      vec3_1.RotateAboutZ(1.57079637f);
      int num1 = this.IsSimulationFormation ? 1 : 0;
      Vec3 vec3_2 = vec3_1 * this.Width * 0.5f;
      Vec3 vec3_3 = this.Direction.ToVec3() * this.Depth * 0.5f;
      int num2 = this.OrderPositionIsValid ? 1 : 0;
      this.QuerySystem.MedianPosition.SetVec2(this.CurrentPosition);
      this.ApplyActionOnEachUnit((Action<Agent>) (agent =>
      {
        WorldPosition orderPositionOfUnit = this.GetOrderPositionOfUnit(agent);
        if (!orderPositionOfUnit.IsValid)
          return;
        Vec2 directionOfUnit = this.GetDirectionOfUnit(agent);
        double num3 = (double) directionOfUnit.Normalize();
        Vec2 vec2 = directionOfUnit * 0.1f;
        Vec3 vec3_4 = orderPositionOfUnit.GetGroundVec3() + vec2.ToVec3();
        Vec3 vec3_5 = orderPositionOfUnit.GetGroundVec3() - vec2.LeftVec().ToVec3();
        Vec3 vec3_6 = orderPositionOfUnit.GetGroundVec3() + vec2.LeftVec().ToVec3();
        IFormationUnit formationUnit = (IFormationUnit) agent;
        "(" + (object) formationUnit.FormationFileIndex + "," + (object) formationUnit.FormationRankIndex + ")";
      }));
      int num4 = this.OrderPositionIsValid ? 1 : 0;
      foreach (IDetachment detachment in (List<IDetachment>) this.Detachments)
      {
        UsableMachine usableMachine = detachment as UsableMachine;
        RangedSiegeWeapon rangedSiegeWeapon = detachment as RangedSiegeWeapon;
      }
      if (!(this.Arrangement is ColumnFormation))
        return;
      this.ApplyActionOnEachUnit((Action<Agent>) (agent =>
      {
        agent.GetFollowedUnit();
        IFormationUnit formationUnit = (IFormationUnit) agent;
        "(" + (object) formationUnit.FormationFileIndex + "," + (object) formationUnit.FormationRankIndex + ")";
      }));
    }

    public void AddUnit(Agent unit)
    {
      int countOfUnits = this.CountOfUnits;
      if (this.Arrangement.AddUnit((IFormationUnit) unit) && Mission.Current.HasMissionBehavior<AmmoSupplyLogic>() && Mission.Current.GetMissionBehavior<AmmoSupplyLogic>().IsAgentEligibleForAmmoSupply(unit))
      {
        unit.SetScriptedCombatFlags(unit.GetScriptedCombatFlags() | Agent.AISpecialCombatModeFlags.IgnoreAmmoLimitForRangeCalculation);
        unit.ResetAiWaitBeforeShootFactor();
        unit.UpdateAgentStats();
      }
      if (unit.IsPlayerControlled)
        this.HasPlayerControlledTroop = true;
      if (unit.IsPlayerTroop)
        this.IsPlayerTroopInFormation = true;
      if (!unit.IsDetachableFromFormation && !unit.IsPlayerControlled)
        this.OnUndetachableNonPlayerUnitAdded(unit);
      if (unit.Character != null)
      {
        FormationClass index = this.Team.Mission.GetAgentTroopClass(this.Team.Side, unit.Character).DefaultClass();
        ++this._logicalClassCounts[(int) index];
        if (this._logicalClass != index)
        {
          if (this.PostponeCostlyOperations)
          {
            this._logicalClassNeedsUpdate = true;
          }
          else
          {
            this.CalculateLogicalClass();
            this._logicalClassNeedsUpdate = false;
          }
        }
      }
      this._movementOrder.OnUnitJoinOrLeave(this, unit, true);
      Agent agent = unit;
      Formation targetFormation = this.TargetFormation;
      int targetFormationIndex = targetFormation != null ? targetFormation.Index : -1;
      agent.SetTargetFormationIndex(targetFormationIndex);
      unit.SetFiringOrder(this.FiringOrder.OrderEnum);
      unit.SetRidingOrder(this.RidingOrder.OrderEnum);
      this.OnUnitAddedOrRemoved();
      Action<Formation, Agent> onUnitAdded = this.OnUnitAdded;
      if (onUnitAdded != null)
        onUnitAdded(this, unit);
      if (countOfUnits != 0 || this.CountOfUnits <= 0)
        return;
      this.Team.TeamAI?.OnUnitAddedToFormationForTheFirstTime(this);
    }

    public void RemoveUnit(Agent unit)
    {
      if (unit.IsDetachedFromFormation)
      {
        unit.Detachment.RemoveAgent(unit);
        this._detachedUnits.Remove(unit);
        this._looseDetachedUnits.Remove(unit);
        unit.Detachment = (IDetachment) null;
        unit.DetachmentWeight = -1f;
      }
      else
        this.Arrangement.RemoveUnit((IFormationUnit) unit);
      if (unit.Character != null)
      {
        FormationClass index = this.Team.Mission.GetAgentTroopClass(this.Team.Side, unit.Character).DefaultClass();
        --this._logicalClassCounts[(int) index];
        if (this._logicalClass == index)
        {
          if (this.PostponeCostlyOperations)
          {
            this._logicalClassNeedsUpdate = true;
          }
          else
          {
            this.CalculateLogicalClass();
            this._logicalClassNeedsUpdate = false;
          }
        }
      }
      if (unit.IsPlayerTroop)
        this.IsPlayerTroopInFormation = false;
      if (unit.IsPlayerControlled)
        this.HasPlayerControlledTroop = false;
      if (unit == this.Captain && !unit.CanLeadFormationsRemotely)
        this.Captain = (Agent) null;
      if (!unit.IsDetachableFromFormation && !unit.IsPlayerControlled)
        this.OnUndetachableNonPlayerUnitRemoved(unit);
      if (Mission.Current.Mode != MissionMode.Deployment && !this.IsAIControlled && this.CountOfUnits == 0)
        this.SetControlledByAI(true);
      this._movementOrder.OnUnitJoinOrLeave(this, unit, false);
      unit.SetTargetFormationIndex(-1);
      unit.SetFiringOrder(FiringOrder.RangedWeaponUsageOrderEnum.FireAtWill);
      unit.SetRidingOrder(RidingOrder.RidingOrderEnum.Free);
      this.OnUnitAddedOrRemoved();
      Action<Formation, Agent> onUnitRemoved = this.OnUnitRemoved;
      if (onUnitRemoved == null)
        return;
      onUnitRemoved(this, unit);
    }

    public void DetachUnit(Agent unit, bool isLoose)
    {
      this.Arrangement.RemoveUnit((IFormationUnit) unit);
      this._detachedUnits.Add(unit);
      if (isLoose)
        this._looseDetachedUnits.Add(unit);
      unit.SetBehaviorValueSet(HumanAIComponent.BehaviorValueSet.DefaultDetached);
      this.OnUnitAttachedOrDetached();
    }

    public void AttachUnit(Agent unit)
    {
      this._detachedUnits.Remove(unit);
      this._looseDetachedUnits.Remove(unit);
      this.Arrangement.AddUnit((IFormationUnit) unit);
      unit.Detachment = (IDetachment) null;
      unit.DetachmentWeight = -1f;
      this._movementOrder.OnUnitJoinOrLeave(this, unit, true);
      this.OnUnitAttachedOrDetached();
    }

    public void SwitchUnitLocations(Agent firstUnit, Agent secondUnit)
    {
      if (firstUnit.IsDetachedFromFormation || secondUnit.IsDetachedFromFormation || ((IFormationUnit) firstUnit).FormationFileIndex == -1 && ((IFormationUnit) secondUnit).FormationFileIndex == -1)
        return;
      if (((IFormationUnit) firstUnit).FormationFileIndex == -1)
        this.Arrangement.SwitchUnitLocationsWithUnpositionedUnit((IFormationUnit) secondUnit, (IFormationUnit) firstUnit);
      else if (((IFormationUnit) secondUnit).FormationFileIndex == -1)
        this.Arrangement.SwitchUnitLocationsWithUnpositionedUnit((IFormationUnit) firstUnit, (IFormationUnit) secondUnit);
      else
        this.Arrangement.SwitchUnitLocations((IFormationUnit) firstUnit, (IFormationUnit) secondUnit);
    }

    public void Tick(float dt)
    {
      if ((!this.Team.HasTeamAi ? 0 : (this.IsAIControlled ? 1 : (this.Team.IsPlayerSergeant ? 1 : 0))) != 0 && this.CountOfUnitsWithoutDetachedOnes > 0)
        this.AI.Tick();
      else
        this.IsAITickedAfterSplit = true;
      int num = 0;
      while (!this._movementOrder.IsApplicable(this) && num++ < 10)
        this.SetMovementOrder(this._movementOrder.GetSubstituteOrder(this));
      Formation targetFormation = this.TargetFormation;
      if ((targetFormation != null ? (targetFormation.CountOfUnits <= 0 ? 1 : 0) : 0) != 0)
        this.TargetFormation = (Formation) null;
      if (this._arrangementOrderTickOccasionallyTimer.Check(Mission.Current.CurrentTime))
        this._arrangementOrder.TickOccasionally(this);
      this._movementOrder.Tick(this);
      WorldPosition orderWorldPosition = this._movementOrder.CreateNewOrderWorldPosition(this, WorldPosition.WorldPositionEnforcedCache.None);
      Vec2 direction = this._facingOrder.GetDirection(this, this._movementOrder._targetAgent);
      if (orderWorldPosition.IsValid || direction.IsValid)
        this.SetPositioning(new WorldPosition?(orderWorldPosition), new Vec2?(direction));
      this.TickDetachments(dt);
      Action<Formation> onTick = this.OnTick;
      if (onTick != null)
        onTick(this);
      this.SmoothAverageUnitPosition(dt);
      if (!this._isArrangementShapeChanged)
        return;
      this._isArrangementShapeChanged = false;
    }

    public void JoinDetachment(IDetachment detachment)
    {
      if (!this.Team.DetachmentManager.ContainsDetachment(detachment))
        this.Team.DetachmentManager.MakeDetachment(detachment);
      this._detachments.Add(detachment);
      this.Team.DetachmentManager.OnFormationJoinDetachment(this, detachment);
    }

    public void FormAttackEntityDetachment(GameEntity targetEntity)
    {
      this.AttackEntityOrderDetachment = new AttackEntityOrderDetachment(targetEntity);
      this.JoinDetachment((IDetachment) this.AttackEntityOrderDetachment);
    }

    public void LeaveDetachment(IDetachment detachment)
    {
      detachment.OnFormationLeave(this);
      this._detachments.Remove(detachment);
      this.Team.DetachmentManager.OnFormationLeaveDetachment(this, detachment);
    }

    public void DisbandAttackEntityDetachment()
    {
      if (this.AttackEntityOrderDetachment == null)
        return;
      this.Team.DetachmentManager.DestroyDetachment((IDetachment) this.AttackEntityOrderDetachment);
      this.AttackEntityOrderDetachment = (AttackEntityOrderDetachment) null;
    }

    public void Rearrange(IFormationArrangement arrangement)
    {
      if (this.Arrangement.GetType() == arrangement.GetType())
        return;
      IFormationArrangement arrangement1 = this.Arrangement;
      IFormationArrangement arrangement2 = arrangement;
      this.Arrangement = arrangement;
      arrangement1.RearrangeTo(arrangement2);
      arrangement2.RearrangeFrom(arrangement1);
      arrangement1.RearrangeTransferUnits(arrangement2);
      this.ReapplyFormOrder();
      this._movementOrder.OnArrangementChanged(this);
    }

    public void TickForColumnArrangementInitialPositioning(Formation formation)
    {
      if ((double) (this.ReferencePosition.Value - this.OrderPosition).LengthSquared < 1.0 || this.IsDeployment)
        return;
      this.ArrangementOrder.RearrangeAux(this, true);
    }

    public float CalculateFormationDirectionEnforcingFactorForRank(int rankIndex)
    {
      return rankIndex == -1 ? 0.0f : this.ArrangementOrder.CalculateFormationDirectionEnforcingFactorForRank(rankIndex, this.Arrangement.RankCount);
    }

    public void BeginSpawn(int unitCount, bool isMounted)
    {
      this.IsSpawning = true;
      this.OverridenUnitCount = new int?(unitCount);
      this._overridenHasAnyMountedUnit = new bool?(isMounted);
    }

    public void EndSpawn()
    {
      this.IsSpawning = false;
      this.OverridenUnitCount = new int?();
      this._overridenHasAnyMountedUnit = new bool?();
    }

    public override int GetHashCode() => (int) (this.Team.TeamIndex * 10 + this.FormationIndex);

    internal bool IsUnitDetachedForDebug(Agent unit) => this._detachedUnits.Contains(unit);

    internal IEnumerable<IFormationUnit> GetUnitsToPopWithPriorityFunction(
      int count,
      Func<Agent, int> priorityFunction,
      List<Agent> excludedHeroes,
      bool excludeBannerman)
    {
      List<IFormationUnit> priorityFunction1 = new List<IFormationUnit>();
      if (count <= 0)
        return (IEnumerable<IFormationUnit>) priorityFunction1;
      Func<Agent, bool> selectCondition = (Func<Agent, bool>) (agent =>
      {
        if (excludedHeroes.Contains(agent))
          return false;
        return !excludeBannerman || agent.Banner == null;
      });
      List<Agent> list = this._arrangement.GetAllUnits().Concat<IFormationUnit>((IEnumerable<IFormationUnit>) this._detachedUnits).Where<IFormationUnit>((Func<IFormationUnit, bool>) (unit => unit is Agent agent1 && selectCondition(agent1))).Select<IFormationUnit, Agent>((Func<IFormationUnit, Agent>) (unit => unit as Agent)).ToList<Agent>();
      if (list.IsEmpty<Agent>())
        return (IEnumerable<IFormationUnit>) priorityFunction1;
      int num = count;
      int bestFit = int.MaxValue;
      while (num > 0 && bestFit > 0 && list.Count > 0)
      {
        bestFit = list.Max<Agent>((Func<Agent, int>) (unit => priorityFunction(unit)));
        Func<IFormationUnit, bool> bestFitCondition = (Func<IFormationUnit, bool>) (unit => unit is Agent agent2 && selectCondition(agent2) && priorityFunction(agent2) == bestFit);
        int count1 = Math.Min(num, this._arrangement.GetAllUnits().Count<IFormationUnit>((Func<IFormationUnit, bool>) (unit => bestFitCondition(unit))));
        if (count1 > 0)
        {
          IEnumerable<IFormationUnit> toPop = this._arrangement.GetUnitsToPopWithCondition(count1, bestFitCondition);
          if (!toPop.IsEmpty<IFormationUnit>())
          {
            priorityFunction1.AddRange(toPop);
            num -= toPop.Count<IFormationUnit>();
            list.RemoveAll((Predicate<Agent>) (unit => toPop.Contains<IFormationUnit>((IFormationUnit) unit)));
          }
        }
        if (num > 0)
        {
          IEnumerable<Agent> toPop = this._looseDetachedUnits.Where<Agent>((Func<Agent, bool>) (agent => bestFitCondition((IFormationUnit) agent))).Take<Agent>(num);
          if (!toPop.IsEmpty<Agent>())
          {
            priorityFunction1.AddRange((IEnumerable<IFormationUnit>) toPop);
            num -= toPop.Count<Agent>();
            list.RemoveAll((Predicate<Agent>) (unit => toPop.Contains<Agent>(unit)));
          }
        }
        if (num > 0)
        {
          IEnumerable<Agent> toPop = this._detachedUnits.Where<Agent>((Func<Agent, bool>) (agent => bestFitCondition((IFormationUnit) agent))).Take<Agent>(num);
          if (!toPop.IsEmpty<Agent>())
          {
            priorityFunction1.AddRange((IEnumerable<IFormationUnit>) toPop);
            num -= toPop.Count<Agent>();
            list.RemoveAll((Predicate<Agent>) (unit => toPop.Contains<Agent>(unit)));
          }
        }
      }
      return (IEnumerable<IFormationUnit>) priorityFunction1;
    }

    internal void TransferUnitsWithPriorityFunction(
      Formation target,
      int unitCount,
      Func<Agent, int> priorityFunction,
      bool excludeBannerman,
      List<Agent> excludedAgents)
    {
      MBDebug.Print(this.FormationIndex.GetName() + " has " + (object) this.CountOfUnits + " units, " + target.FormationIndex.GetName() + " has " + (object) target.CountOfUnits + " units");
      MBDebug.Print(this.Team.Side.ToString() + " " + this.FormationIndex.GetName() + " transfers " + (object) unitCount + " units to " + target.FormationIndex.GetName());
      if (unitCount == 0)
        return;
      if (target.CountOfUnits == 0)
      {
        target.CopyOrdersFrom(this);
        target.SetPositioning(new WorldPosition?(this._orderPosition), new Vec2?(this._direction), new int?(this._unitSpacing));
      }
      foreach (Agent agent in new List<IFormationUnit>(this.GetUnitsToPopWithPriorityFunction(unitCount, priorityFunction, excludedAgents, excludeBannerman)))
        agent.Formation = target;
      this.Team.TriggerOnFormationsChanged(this);
      this.Team.TriggerOnFormationsChanged(target);
      MBDebug.Print(this.FormationIndex.GetName() + " has " + (object) this.CountOfUnits + " units, " + target.FormationIndex.GetName() + " has " + (object) target.CountOfUnits + " units");
    }

    private IFormationUnit GetClosestUnitToAux(
      Vec2 position,
      MBReadOnlyList<IFormationUnit> unitsWithSpaces,
      float? maxDistance)
    {
      if (unitsWithSpaces == null)
        unitsWithSpaces = this.Arrangement.GetAllUnits();
      IFormationUnit closestUnitToAux = (IFormationUnit) null;
      float num1 = maxDistance.HasValue ? maxDistance.Value * maxDistance.Value : float.MaxValue;
      for (int index = 0; index < unitsWithSpaces.Count; ++index)
      {
        IFormationUnit unitsWithSpace = unitsWithSpaces[index];
        if (unitsWithSpace != null)
        {
          float num2 = ((Agent) unitsWithSpace).Position.AsVec2.DistanceSquared(position);
          if ((double) num1 > (double) num2)
          {
            num1 = num2;
            closestUnitToAux = unitsWithSpace;
          }
        }
      }
      return closestUnitToAux;
    }

    private void CopyOrdersFrom(Formation target)
    {
      this.SetMovementOrder(target._movementOrder);
      this.FormOrder = target.FormOrder;
      this.SetPositioning(unitSpacing: new int?(target.UnitSpacing));
      this.RidingOrder = target.RidingOrder;
      this.FiringOrder = target.FiringOrder;
      this.SetControlledByAI(target.IsAIControlled || !target.Team.IsPlayerGeneral);
      if (target.AI.Side != FormationAI.BehaviorSide.BehaviorSideNotSet)
        this.AI.Side = target.AI.Side;
      this.SetMovementOrder(target._movementOrder);
      this.TargetFormation = target.TargetFormation;
      this.FacingOrder = target.FacingOrder;
      this.ArrangementOrder = target.ArrangementOrder;
    }

    private void TickDetachments(float dt)
    {
      if (this.IsDeployment)
        return;
      for (int index = this._detachments.Count - 1; index >= 0; --index)
      {
        IDetachment detachment = this._detachments[index];
        if ((detachment is UsableMachine usableMachine ? usableMachine.Ai : (UsableMachineAIBase) null) != null)
        {
          usableMachine.Ai.Tick((Agent) null, this, this.Team, dt);
          if (usableMachine.Ai.HasActionCompleted || usableMachine.IsDisabledForBattleSideAI(this.Team.Side) && usableMachine.ShouldAutoLeaveDetachmentWhenDisabled(this.Team.Side))
            this.LeaveDetachment(detachment);
        }
      }
    }

    [Conditional("DEBUG")]
    private void TickOrderDebug()
    {
      WorldPosition medianPosition = this.QuerySystem.MedianPosition;
      WorldPosition orderWorldPosition = this.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.GroundVec3);
      medianPosition.SetVec2(this.QuerySystem.AveragePosition);
      if (orderWorldPosition.IsValid)
      {
        if (!this._movementOrder.GetPosition(this).IsValid)
        {
          if (this.AI == null)
            return;
          BehaviorComponent activeBehavior = this.AI.ActiveBehavior;
        }
        else
        {
          if (this.AI == null)
            return;
          BehaviorComponent activeBehavior = this.AI.ActiveBehavior;
        }
      }
      else
      {
        if (this.AI == null)
          return;
        BehaviorComponent activeBehavior = this.AI.ActiveBehavior;
      }
    }

    [Conditional("DEBUG")]
    private void TickDebug(float dt)
    {
      if (!MBDebug.IsDisplayingHighLevelAI || this.IsSimulationFormation || this._movementOrder.OrderEnum != MovementOrder.MovementOrderEnum.FollowEntity)
        return;
      string name = this._movementOrder.TargetEntity.Name;
    }

    private void OnUnitAttachedOrDetached() => this.ReapplyFormOrder();

    [Conditional("DEBUG")]
    private void DebugAssertDetachments()
    {
    }

    private void SetOrderPosition(WorldPosition pos) => this._orderPosition = pos;

    private int GetHeroPointForCaptainSelection(Agent agent)
    {
      return agent.Character.Level + 100 * agent.Character.GetSkillValue(DefaultSkills.Charm);
    }

    private void OnCaptainChanged()
    {
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.UpdateAgentProperties()));
    }

    private void UpdateAgentDrivenPropertiesBasedOnOrderDefensiveness()
    {
      this.ApplyActionOnEachUnit((Action<Agent>) (agent => agent.Defensiveness = (float) this._formationOrderDefensivenessFactor));
    }

    private void ResetAux()
    {
      if (this._detachments != null)
      {
        for (int index = this._detachments.Count - 1; index >= 0; --index)
          this.LeaveDetachment(this._detachments[index]);
      }
      else
        this._detachments = new MBList<IDetachment>();
      this._detachedUnits = new MBList<Agent>();
      this._looseDetachedUnits = new MBList<Agent>();
      this.AttackEntityOrderDetachment = (AttackEntityOrderDetachment) null;
      this.AI = new FormationAI(this);
      this.QuerySystem = new FormationQuerySystem(this);
      this.SetPositioning(direction: new Vec2?(Vec2.Forward), unitSpacing: new int?(1));
      this.SetMovementOrder(MovementOrder.MovementOrderStop);
      if (this._overridenHasAnyMountedUnit.HasValue)
      {
        bool? hasAnyMountedUnit = this._overridenHasAnyMountedUnit;
        bool flag = true;
        if (hasAnyMountedUnit.GetValueOrDefault() == flag & hasAnyMountedUnit.HasValue)
        {
          this.ArrangementOrder = ArrangementOrder.ArrangementOrderSkein;
          goto label_9;
        }
      }
      this.FormOrder = FormOrder.FormOrderWide;
      this.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
label_9:
      this.RidingOrder = RidingOrder.RidingOrderFree;
      this.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Width = (float) (0.0 * ((double) this.Interval + (double) this.UnitDiameter)) + this.UnitDiameter;
      this.HasBeenPositioned = false;
      this._currentSpawnIndex = 0;
      this.IsPlayerTroopInFormation = false;
      this.HasPlayerControlledTroop = false;
    }

    private void ResetForSimulation()
    {
      this.Arrangement.Reset();
      this.ResetAux();
    }

    private void TryRelocatePlayerUnit()
    {
      if (!this.HasPlayerControlledTroop && !this.IsPlayerTroopInFormation)
        return;
      IFormationUnit playerUnit = this.Arrangement.GetPlayerUnit();
      if (playerUnit == null || playerUnit.FormationFileIndex < 0 || playerUnit.FormationRankIndex < 0)
        return;
      this.Arrangement.SwitchUnitLocationsWithBackMostUnit(playerUnit);
    }

    private void ReapplyFormOrder()
    {
      FormOrder formOrder = this.FormOrder;
      if (this.FormOrder.OrderEnum == FormOrder.FormOrderEnum.Custom && this.ArrangementOrder.OrderEnum != ArrangementOrder.ArrangementOrderEnum.Circle)
        formOrder.CustomFlankWidth = this.Arrangement.FlankWidth;
      this.FormOrder = formOrder;
    }

    private void CalculateLogicalClass()
    {
      int num = 0;
      FormationClass formationClass1 = FormationClass.NumberOfAllFormations;
      for (int index = 0; index < this._logicalClassCounts.Length; ++index)
      {
        FormationClass formationClass2 = (FormationClass) index;
        int logicalClassCount = this._logicalClassCounts[index];
        if (logicalClassCount > num)
        {
          num = logicalClassCount;
          formationClass1 = formationClass2;
        }
      }
      this._logicalClass = formationClass1;
      if (this._logicalClass == FormationClass.NumberOfAllFormations)
        return;
      this._representativeClass = this._logicalClass;
    }

    private void SmoothAverageUnitPosition(float dt)
    {
      this._smoothedAverageUnitPosition = !this._smoothedAverageUnitPosition.IsValid ? this.QuerySystem.AveragePosition : Vec2.Lerp(this._smoothedAverageUnitPosition, this.QuerySystem.AveragePosition, dt * 3f);
    }

    private void Arrangement_OnWidthChanged()
    {
      Action<Formation> onWidthChanged = this.OnWidthChanged;
      if (onWidthChanged == null)
        return;
      onWidthChanged(this);
    }

    private void Arrangement_OnShapeChanged()
    {
      this._orderLocalAveragePositionIsDirty = true;
      this._isArrangementShapeChanged = true;
      if (GameNetwork.IsMultiplayer)
        return;
      this.TryRelocatePlayerUnit();
    }

    public static float GetLastSimulatedFormationsOccupationWidthIfLesserThanActualWidth(
      Formation simulationFormation)
    {
      float occupationWidth = simulationFormation.Arrangement.GetOccupationWidth(simulationFormation.OverridenUnitCount.GetValueOrDefault());
      return (double) simulationFormation.Width > (double) occupationWidth ? occupationWidth : -1f;
    }

    public static List<WorldFrame> GetFormationFramesForBeforeFormationCreation(
      float width,
      int manCount,
      bool areMounted,
      WorldPosition spawnOrigin,
      Mat3 spawnRotation)
    {
      List<Formation.AgentArrangementData> agentArrangementDataList = new List<Formation.AgentArrangementData>();
      Formation ownerFormation = new Formation((Team) null, -1);
      ownerFormation.SetOrderPosition(spawnOrigin);
      ownerFormation._direction = spawnRotation.f.AsVec2;
      LineFormation arrangement = new LineFormation((IFormation) ownerFormation);
      arrangement.Width = width;
      for (int index = 0; index < manCount; ++index)
        agentArrangementDataList.Add(new Formation.AgentArrangementData(index, (IFormationArrangement) arrangement));
      arrangement.OnFormationFrameChanged();
      foreach (Formation.AgentArrangementData unit in agentArrangementDataList)
        arrangement.AddUnit((IFormationUnit) unit);
      List<WorldFrame> formationCreation = new List<WorldFrame>();
      int positionIndicesCount = arrangement.GetCachedOrderedAndAvailableUnitPositionIndicesCount();
      for (int i = 0; i < positionIndicesCount; ++i)
      {
        Vec2i unitPositionIndexAt = arrangement.GetCachedOrderedAndAvailableUnitPositionIndexAt(i);
        WorldPosition globalPositionAtIndex = arrangement.GetGlobalPositionAtIndex(unitPositionIndexAt.X, unitPositionIndexAt.Y);
        formationCreation.Add(new WorldFrame(spawnRotation, globalPositionAtIndex));
      }
      return formationCreation;
    }

    public static float GetDefaultUnitDiameter(bool isMounted)
    {
      return isMounted ? ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.QuadrupedalRadius) * 2f : ManagedParameters.Instance.GetManagedParameter(ManagedParametersEnum.BipedalRadius) * 2f;
    }

    public static float GetDefaultMinimumInterval(bool isMounted)
    {
      return !isMounted ? Formation.InfantryInterval(0) : Formation.CavalryInterval(0);
    }

    public static float GetDefaultMaximumInterval(bool isMounted)
    {
      return !isMounted ? Formation.InfantryInterval(2) : Formation.CavalryInterval(2);
    }

    public static float GetDefaultMinimumDistance(bool isMounted)
    {
      return !isMounted ? Formation.InfantryDistance(0) : Formation.CavalryDistance(0);
    }

    public static float GetDefaultMaximumDistance(bool isMounted)
    {
      return !isMounted ? Formation.InfantryDistance(2) : Formation.CavalryDistance(2);
    }

    public static float InfantryInterval(int unitSpacing) => 0.38f * (float) unitSpacing;

    public static float CavalryInterval(int unitSpacing)
    {
      return (float) (0.18000000715255737 + 0.31999999284744263 * (double) unitSpacing);
    }

    public static float InfantryDistance(int unitSpacing) => 0.4f * (float) unitSpacing;

    public static float CavalryDistance(int unitSpacing)
    {
      return (float) (1.7000000476837158 + 0.30000001192092896 * (double) unitSpacing);
    }

    public static bool IsDefenseRelatedAIDrivenComponent(DrivenProperty drivenProperty)
    {
      return drivenProperty == DrivenProperty.AIDecideOnAttackChance || drivenProperty == DrivenProperty.AIAttackOnDecideChance || drivenProperty == DrivenProperty.AIAttackOnParryChance || drivenProperty == DrivenProperty.AiUseShieldAgainstEnemyMissileProbability || drivenProperty == DrivenProperty.AiDefendWithShieldDecisionChanceValue;
    }

    private static void GetUnitPositionWithIndexAccordingToNewOrder(
      Formation simulationFormation,
      int unitIndex,
      in WorldPosition formationPosition,
      in Vec2 formationDirection,
      IFormationArrangement arrangement,
      float width,
      int unitSpacing,
      int unitCount,
      bool isMounted,
      int index,
      out WorldPosition? unitPosition,
      out Vec2? unitDirection,
      out float actualWidth)
    {
      unitPosition = new WorldPosition?();
      unitDirection = new Vec2?();
      if (simulationFormation == null)
      {
        if (Formation._simulationFormationTemp == null || Formation._simulationFormationUniqueIdentifier != index)
          Formation._simulationFormationTemp = new Formation((Team) null, -1);
        simulationFormation = Formation._simulationFormationTemp;
      }
      Vec2 direction;
      if (simulationFormation.UnitSpacing == unitSpacing && (double) MathF.Abs((float) ((double) simulationFormation.Width - (double) width + 9.9999997473787516E-06)) < (double) simulationFormation.Interval + (double) simulationFormation.UnitDiameter - 9.9999997473787516E-06 && simulationFormation.OrderPositionIsValid && simulationFormation.OrderGroundPosition.NearlyEquals(formationPosition.GetGroundVec3(), 0.1f))
      {
        direction = simulationFormation.Direction;
        if (direction.NearlyEquals(formationDirection, 0.1f) && !(simulationFormation.Arrangement.GetType() != arrangement.GetType()))
          goto label_7;
      }
      simulationFormation._overridenHasAnyMountedUnit = new bool?(isMounted);
      simulationFormation.ResetForSimulation();
      simulationFormation.SetPositioning(unitSpacing: new int?(unitSpacing));
      simulationFormation.OverridenUnitCount = new int?(unitCount);
      simulationFormation.SetPositioning(new WorldPosition?(formationPosition), new Vec2?(formationDirection));
      simulationFormation.Rearrange(arrangement.Clone((IFormation) simulationFormation));
      simulationFormation.Arrangement.DeepCopyFrom(arrangement);
      simulationFormation.Width = width;
      Formation._simulationFormationUniqueIdentifier = index;
label_7:
      actualWidth = simulationFormation.Width;
      if ((double) width < (double) actualWidth)
        return;
      Vec2? nullable = simulationFormation.Arrangement.GetLocalPositionOfUnitOrDefault(unitIndex);
      if (!nullable.HasValue)
        nullable = simulationFormation.Arrangement.CreateNewPosition(unitIndex);
      if (!nullable.HasValue)
        return;
      direction = simulationFormation.Direction;
      Vec2 parentUnitF = direction.TransformToParentUnitF(nullable.Value);
      WorldPosition orderWorldPosition = simulationFormation.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.None);
      orderWorldPosition.SetVec2(orderWorldPosition.AsVec2 + parentUnitF);
      unitPosition = new WorldPosition?(orderWorldPosition);
      unitDirection = new Vec2?(formationDirection);
    }

    private static IEnumerable<(WorldPosition, Vec2)> GetUnavailableUnitPositionsAccordingToNewOrder(
      Formation formation,
      Formation simulationFormation,
      WorldPosition position,
      Vec2 direction,
      IFormationArrangement arrangement,
      float width,
      int unitSpacing)
    {
      if (simulationFormation == null)
      {
        if (Formation._simulationFormationTemp == null || Formation._simulationFormationUniqueIdentifier != formation.Index)
          Formation._simulationFormationTemp = new Formation((Team) null, -1);
        simulationFormation = Formation._simulationFormationTemp;
      }
      Vec2 direction1;
      if (simulationFormation.UnitSpacing == unitSpacing && (double) MathF.Abs(simulationFormation.Width - width) < (double) simulationFormation.Interval + (double) simulationFormation.UnitDiameter && simulationFormation.OrderPositionIsValid && simulationFormation.OrderGroundPosition.NearlyEquals(position.GetGroundVec3(), 0.1f))
      {
        direction1 = simulationFormation.Direction;
        if (direction1.NearlyEquals(direction, 0.1f) && !(simulationFormation.Arrangement.GetType() != arrangement.GetType()))
          goto label_10;
      }
      simulationFormation._overridenHasAnyMountedUnit = new bool?(formation.HasAnyMountedUnit);
      simulationFormation.ResetForSimulation();
      simulationFormation.SetPositioning(unitSpacing: new int?(unitSpacing));
      simulationFormation.OverridenUnitCount = new int?(formation.CountOfUnitsWithoutDetachedOnes);
      simulationFormation.SetPositioning(new WorldPosition?(position), new Vec2?(direction));
      simulationFormation.Rearrange(arrangement.Clone((IFormation) simulationFormation));
      simulationFormation.Arrangement.DeepCopyFrom(arrangement);
      simulationFormation.Width = width;
      Formation._simulationFormationUniqueIdentifier = formation.Index;
label_10:
      foreach (Vec2 unavailableUnitPosition in simulationFormation.Arrangement.GetUnavailableUnitPositions())
      {
        direction1 = simulationFormation.Direction;
        Vec2 parentUnitF = direction1.TransformToParentUnitF(unavailableUnitPosition);
        WorldPosition orderWorldPosition = simulationFormation.CreateNewOrderWorldPosition(WorldPosition.WorldPositionEnforcedCache.None);
        orderWorldPosition.SetVec2(orderWorldPosition.AsVec2 + parentUnitF);
        yield return (orderWorldPosition, direction);
      }
    }

    private static float TransformCustomWidthBetweenArrangementOrientations(
      ArrangementOrder.ArrangementOrderEnum orderTypeOld,
      ArrangementOrder.ArrangementOrderEnum orderTypeNew,
      float currentCustomWidth)
    {
      if (orderTypeOld != ArrangementOrder.ArrangementOrderEnum.Column && orderTypeNew == ArrangementOrder.ArrangementOrderEnum.Column)
        return currentCustomWidth * 0.1f;
      return orderTypeOld == ArrangementOrder.ArrangementOrderEnum.Column && orderTypeNew != ArrangementOrder.ArrangementOrderEnum.Column ? currentCustomWidth / 0.1f : currentCustomWidth;
    }

    private class AgentArrangementData : IFormationUnit
    {
      public IFormationArrangement Formation { get; private set; }

      public int FormationFileIndex { get; set; } = -1;

      public int FormationRankIndex { get; set; } = -1;

      public IFormationUnit FollowedUnit { get; }

      public bool IsShieldUsageEncouraged => true;

      public bool IsPlayerUnit => false;

      public AgentArrangementData(int index, IFormationArrangement arrangement)
      {
        this.Formation = arrangement;
      }
    }

    public class RetreatPositionCacheSystem
    {
      private List<(Vec2, WorldPosition)> _retreatPositionDistance;

      public RetreatPositionCacheSystem(int cacheCount)
      {
        this._retreatPositionDistance = new List<(Vec2, WorldPosition)>(2);
      }

      public WorldPosition GetRetreatPositionFromCache(Vec2 agentPosition)
      {
        for (int index = this._retreatPositionDistance.Count - 1; index >= 0; --index)
        {
          if ((double) this._retreatPositionDistance[index].Item1.DistanceSquared(agentPosition) < 400.0)
            return this._retreatPositionDistance[index].Item2;
        }
        return WorldPosition.Invalid;
      }

      public void AddNewPositionToCache(Vec2 agentPostion, WorldPosition retreatingPosition)
      {
        if (this._retreatPositionDistance.Count >= 2)
          this._retreatPositionDistance.RemoveAt(0);
        this._retreatPositionDistance.Add((agentPostion, retreatingPosition));
      }
    }
  }
}
