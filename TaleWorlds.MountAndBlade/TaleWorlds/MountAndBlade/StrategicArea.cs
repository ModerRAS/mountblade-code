// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StrategicArea
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StrategicArea : MissionObject, IDetachment
  {
    private List<Agent> _agents;
    private WorldFrame _frame;
    [EditableScriptComponentVariable(true)]
    private float _width;
    private int _unitSpacing;
    private int _capacity;
    private MBList<Formation> _userFormations;
    private Dictionary<Formation, Formation> _simulationFormations;
    [EditableScriptComponentVariable(true)]
    private BattleSideEnum _side;
    [EditableScriptComponentVariable(true)]
    private float _depth = 1f;
    [EditableScriptComponentVariable(true)]
    private float _distanceToCheck = 10f;
    [EditableScriptComponentVariable(true)]
    private bool _ignoreHeight = true;
    private List<DestructableComponent> _nearbyDestructibleObjects = new List<DestructableComponent>();
    private bool _isActive;
    private float _lastShimmyTime;
    private float _lastShootTime;
    private StrategicArea.ShimmyDirection _shimmyDirection;
    private bool _doesFrameNeedUpdate = true;
    private readonly StrategicArea.StrategicAreaMutableTuple[] _strategicAreaSidesScoreTally = new StrategicArea.StrategicAreaMutableTuple[5];
    private WorldPosition? _centerPosition;
    private WorldFrame _cachedWorldFrame;
    private bool _isEvaluated;
    private float _cachedDetachmentWeight;

    public bool IsLoose => true;

    public MBReadOnlyList<Formation> UserFormations
    {
      get => (MBReadOnlyList<Formation>) this._userFormations;
    }

    public float DistanceToCheck => this._distanceToCheck;

    public bool IgnoreHeight => this._ignoreHeight;

    public bool IsActive
    {
      get => this._isActive;
      set
      {
        if (value == this._isActive)
          return;
        List<Team> list = Mission.Current.Teams.Where<Team>((Func<Team, bool>) (t => this.IsUsableBy(t.Side))).ToList<Team>();
        this._isActive = value;
        foreach (Team team in list)
        {
          if (team.TeamAI != null)
          {
            if (this._isActive)
              team.TeamAI.AddStrategicArea(this);
            else
              team.TeamAI.RemoveStrategicArea(this);
          }
        }
      }
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._agents = new List<Agent>();
      this._userFormations = new MBList<Formation>();
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      this._frame = new WorldFrame(globalFrame.rotation, new WorldPosition(this.Scene, UIntPtr.Zero, globalFrame.origin, false));
      this._frame.Rotation.Orthonormalize();
      this._unitSpacing = ArrangementOrder.GetUnitSpacingOf(ArrangementOrder.ArrangementOrderEnum.Line);
      this._capacity = this.CalculateCapacity();
      this._simulationFormations = new Dictionary<Formation, Formation>();
      this._isActive = true;
      for (int index = 0; index < 5; ++index)
        this._strategicAreaSidesScoreTally[index] = new StrategicArea.StrategicAreaMutableTuple(0, 0);
    }

    private int CalculateCapacity()
    {
      return MathF.Max(1, MathF.Ceiling(MathF.Max(1f, this._width) * MathF.Max(1f, this._depth)));
    }

    public Vec3 GetGroundPosition() => this._frame.Origin.GetGroundVec3();

    public void DetermineAssociatedDestructibleComponents(
      IEnumerable<DestructableComponent> destructibleComponents)
    {
      this._nearbyDestructibleObjects = new List<DestructableComponent>();
      foreach (DestructableComponent destructibleComponent in destructibleComponents)
      {
        destructibleComponent.GameEntity.GetGlobalFrame();
        Vec3 bbmin;
        Vec3 bbmax;
        destructibleComponent.GameEntity.GetPhysicsMinMax(true, out bbmin, out bbmax, false);
        if ((double) ((bbmax + bbmin) * 0.5f).DistanceSquared(this.GameEntity.GlobalPosition) <= 9.0)
          this._nearbyDestructibleObjects.Add(destructibleComponent);
      }
      foreach (DestructableComponent destructibleObject in this._nearbyDestructibleObjects)
        destructibleObject.OnDestroyed += new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnCoveringDestructibleObjectDestroyed);
    }

    public void OnParentGameEntityVisibilityChanged(bool isVisible) => this.IsActive = isVisible;

    private void OnCoveringDestructibleObjectDestroyed(
      DestructableComponent destroyedComponent,
      Agent destroyerAgent,
      in MissionWeapon weapon,
      ScriptComponentBehavior attackerScriptComponentBehavior,
      int inflictedDamage)
    {
      this.IsActive = false;
    }

    protected override void OnRemoved(int removeReason)
    {
      base.OnRemoved(removeReason);
      foreach (DestructableComponent destructibleObject in this._nearbyDestructibleObjects)
        destructibleObject.OnDestroyed -= new DestructableComponent.OnHitTakenAndDestroyedDelegate(this.OnCoveringDestructibleObjectDestroyed);
    }

    public void InitializeAutogenerated(float width, int capacity, BattleSideEnum side)
    {
      this._width = width;
      this._capacity = capacity;
      this._side = side;
    }

    public void AddAgent(Agent agent, int slotIndex)
    {
      this._agents.Add(agent);
      if (this._capacity == 1 && !this._centerPosition.HasValue)
      {
        this._centerPosition = new WorldPosition?(this._frame.Origin);
        Mat3 identity = Mat3.Identity with
        {
          f = this.GameEntity.GetGlobalFrame().rotation.f
        };
        identity.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
        this._cachedWorldFrame = new WorldFrame(identity, this._centerPosition.Value);
      }
      agent.SetPreciseRangedAimingEnabled(true);
    }

    public void AddAgentAtSlotIndex(Agent agent, int slotIndex)
    {
      this.AddAgent(agent, slotIndex);
      agent.Formation?.DetachUnit(agent, true);
      agent.Detachment = (IDetachment) this;
      agent.DetachmentWeight = 1f;
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

    Agent IDetachment.GetMovingAgentAtSlotIndex(int slotIndex) => (Agent) null;

    void IDetachment.GetSlotIndexWeightTuples(List<(int, float)> slotIndexWeightTuples)
    {
      for (int count = this._agents.Count; count < this._capacity; ++count)
        slotIndexWeightTuples.Add((count, StrategicArea.CalculateWeight(this._capacity, count)));
    }

    bool IDetachment.IsSlotAtIndexAvailableForAgent(int slotIndex, Agent agent)
    {
      return agent.CanBeAssignedForScriptedMovement() && slotIndex < this._capacity && slotIndex >= this._agents.Count && this.IsAgentEligible(agent) && !this.IsAgentOnInconvenientNavmesh(agent);
    }

    private bool IsAgentOnInconvenientNavmesh(Agent agent)
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

    public bool IsAgentEligible(Agent agent) => agent.IsRangedCached;

    void IDetachment.UnmarkDetachment()
    {
    }

    bool IDetachment.IsDetachmentRecentlyEvaluated() => false;

    void IDetachment.MarkSlotAtIndex(int slotIndex)
    {
      Debug.FailedAssert("This should never have been called because this detachment does not seek to replace moving agents.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\StrategicArea.cs", "MarkSlotAtIndex", 323);
    }

    bool IDetachment.IsAgentUsingOrInterested(Agent agent) => this._agents.Contains(agent);

    void IDetachment.OnFormationLeave(Formation formation)
    {
      for (int index = this._agents.Count - 1; index >= 0; --index)
      {
        Agent agent = this._agents[index];
        if (agent.Formation == formation && !agent.IsPlayerControlled)
        {
          this.RemoveAgent(agent);
          formation.AttachUnit(agent);
        }
      }
    }

    public bool IsStandingPointAvailableForAgent(Agent agent)
    {
      return this._agents.Count < this._capacity;
    }

    public List<float> GetTemplateCostsOfAgent(Agent candidate, List<float> oldValue)
    {
      WorldPosition worldPosition = candidate.GetWorldPosition();
      float num = (candidate.Mission.Scene.DoesPathExistBetweenPositions(worldPosition, this._frame.Origin) ? worldPosition.GetNavMeshVec3().DistanceSquared(this._frame.Origin.GetNavMeshVec3()) : float.MaxValue) * MissionGameModels.Current.AgentStatCalculateModel.GetDetachmentCostMultiplierOfAgent(candidate, (IDetachment) this);
      List<float> templateCostsOfAgent = oldValue ?? new List<float>(this._capacity);
      templateCostsOfAgent.Clear();
      for (int index = 0; index < this._capacity; ++index)
        templateCostsOfAgent.Add(num);
      return templateCostsOfAgent;
    }

    float IDetachment.GetExactCostOfAgentAtSlot(Agent candidate, int slotIndex)
    {
      Debug.FailedAssert("This should never have been called because this detachment does not seek to replace moving agents.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\StrategicArea.cs", "GetExactCostOfAgentAtSlot", 373);
      return 0.0f;
    }

    public float GetTemplateWeightOfAgent(Agent candidate)
    {
      WorldPosition worldPosition = candidate.GetWorldPosition();
      WorldPosition origin = this._frame.Origin;
      return !candidate.Mission.Scene.DoesPathExistBetweenPositions(worldPosition, origin) ? float.MaxValue : worldPosition.GetNavMeshVec3().DistanceSquared(origin.GetNavMeshVec3());
    }

    public float? GetWeightOfAgentAtNextSlot(List<Agent> newAgents, out Agent match)
    {
      float? weightOfNextSlot = this.GetWeightOfNextSlot(newAgents[0].Team.Side);
      if (this._agents.Count < this._capacity)
      {
        Vec3 position = this.GameEntity.GlobalPosition;
        match = newAgents.MinBy<Agent, float>((Func<Agent, float>) (a => a.Position.DistanceSquared(position)));
        return weightOfNextSlot;
      }
      match = (Agent) null;
      return new float?();
    }

    public float? GetWeightOfAgentAtNextSlot(
      List<(Agent, float)> agentTemplateScores,
      out Agent match)
    {
      float? weight = this.GetWeightOfNextSlot(agentTemplateScores[0].Item1.Team.Side);
      if (this._agents.Count < this._capacity)
      {
        IEnumerable<(Agent, float)> source = agentTemplateScores.Where<(Agent, float)>((Func<(Agent, float), bool>) (a =>
        {
          Agent agent = a.Item1;
          if (!agent.IsDetachedFromFormation)
            return true;
          double detachmentWeight = (double) agent.DetachmentWeight;
          float? nullable1 = weight;
          float num = 0.4f;
          float? nullable2 = nullable1.HasValue ? new float?(nullable1.GetValueOrDefault() * num) : new float?();
          double valueOrDefault = (double) nullable2.GetValueOrDefault();
          return detachmentWeight < valueOrDefault & nullable2.HasValue;
        }));
        if (source.Any<(Agent, float)>())
        {
          match = source.MinBy<(Agent, float), float>((Func<(Agent, float), float>) (a => a.Item2)).Item1;
          return weight;
        }
      }
      match = (Agent) null;
      return new float?();
    }

    public float? GetWeightOfAgentAtOccupiedSlot(
      Agent detachedAgent,
      List<Agent> newAgents,
      out Agent match)
    {
      double weightOfOccupiedSlot = (double) this.GetWeightOfOccupiedSlot(detachedAgent);
      Vec3 position = this.GameEntity.GlobalPosition;
      match = newAgents.MinBy<Agent, float>((Func<Agent, float>) (a => a.Position.DistanceSquared(position)));
      return new float?((float) (weightOfOccupiedSlot * 0.5));
    }

    public void RemoveAgent(Agent agent)
    {
      this._agents.Remove(agent);
      agent.SetPreciseRangedAimingEnabled(false);
    }

    public int GetNumberOfUsableSlots() => this._capacity;

    private Formation GetSimulationFormation(Formation formation)
    {
      if (!this._simulationFormations.ContainsKey(formation))
        this._simulationFormations[formation] = new Formation((Team) null, -1);
      return this._simulationFormations[formation];
    }

    protected internal override bool OnCheckForProblems()
    {
      bool flag = base.OnCheckForProblems();
      if (this.GameEntity.IsVisibleIncludeParents() && this.CalculateCapacity() == 1)
      {
        MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
        if (new WorldFrame(globalFrame.rotation, new WorldPosition(this.Scene, globalFrame.origin)).Origin.GetNavMesh() == UIntPtr.Zero)
        {
          uint levelMaskCumulative = (uint) this.GameEntity.GetUpgradeLevelMaskCumulative();
          int upgradeLevelCount = this.Scene.GetUpgradeLevelCount();
          string str = "";
          for (int index = 0; index < upgradeLevelCount; ++index)
          {
            if (((long) levelMaskCumulative & (long) (1 << index)) != 0L)
              str = str + this.Scene.GetUpgradeLevelNameOfIndex(index) + ",";
          }
          MBEditor.AddEntityWarning(this.GameEntity, "Strategic archer position at position at X=" + (object) globalFrame.origin.X + " Y=" + (object) globalFrame.origin.Y + " Z=" + (object) globalFrame.origin.Z + "doesn't yield a viable frame. It may be in the air, underground or off the navmesh, please check. Scene: " + this.Scene.GetName() + "Upgrade Mask: " + (object) levelMaskCumulative + ", Upgrade Level Names: " + str);
          flag = true;
        }
      }
      return flag;
    }

    public WorldFrame? GetAgentFrame(Agent agent)
    {
      if (this._capacity > 1)
      {
        int num = this._agents.IndexOf(agent);
        Formation formation1 = agent.Formation;
        Formation simulationFormation1 = this.GetSimulationFormation(formation1);
        Formation formation2 = formation1;
        Formation simulationFormation2 = simulationFormation1;
        int unitIndex = num;
        ref WorldPosition local1 = ref this._frame.Origin;
        Vec2 vec2 = this._frame.Rotation.f.AsVec2;
        vec2 = vec2.Normalized();
        ref Vec2 local2 = ref vec2;
        double width = (double) this._width;
        int unitSpacing = this._unitSpacing;
        int count = this._agents.Count;
        WorldPosition? nullable1;
        ref WorldPosition? local3 = ref nullable1;
        Vec2? nullable2;
        ref Vec2? local4 = ref nullable2;
        formation2.GetUnitPositionWithIndexAccordingToNewOrder(simulationFormation2, unitIndex, in local1, in local2, (float) width, unitSpacing, count, out local3, out local4);
        if (nullable1.HasValue)
          return new WorldFrame?(new WorldFrame(this._frame.Rotation, nullable1.Value));
        if (!this._centerPosition.HasValue)
          MBDebug.ShowWarning("Strategic archer position at position at X=" + (object) this._frame.Origin.GetGroundVec3().x + " Y=" + (object) this._frame.Origin.GetGroundVec3().y + " Z=" + (object) this._frame.Origin.GetGroundVec3().z + "doesn't yield a viable frame. It may be in the air, underground or off the navmesh, please check. Scene: " + this.Scene.GetName());
        return new WorldFrame?(agent.GetWorldFrame());
      }
      float totalMissionTime = MBCommon.GetTotalMissionTime();
      StrategicArea.ShimmyDirection index1 = this._shimmyDirection;
      int num1 = 0;
      foreach (StrategicArea.StrategicAreaMutableTuple areaMutableTuple in this._strategicAreaSidesScoreTally)
      {
        if (areaMutableTuple != null)
          ++num1;
      }
      int num2 = num1 > 1 ? 1 : 0;
      if (num2 != 0 && (double) this._lastShootTime < (double) agent.LastRangedAttackTime)
      {
        this._lastShootTime = agent.LastRangedAttackTime;
        StrategicArea.StrategicAreaMutableTuple areaMutableTuple = this._strategicAreaSidesScoreTally[(int) this._shimmyDirection];
        if (areaMutableTuple != null)
          ++areaMutableTuple.RangedHitScoredCount;
        else
          this._strategicAreaSidesScoreTally[(int) this._shimmyDirection] = new StrategicArea.StrategicAreaMutableTuple(0, 1);
      }
      bool flag1 = false;
      if (num2 != 0 && (double) this._lastShimmyTime < (double) agent.LastRangedHitTime)
      {
        StrategicArea.StrategicAreaMutableTuple areaMutableTuple = this._strategicAreaSidesScoreTally[(int) this._shimmyDirection];
        if (areaMutableTuple != null)
          ++areaMutableTuple.RangedHitReceivedCount;
        else
          this._strategicAreaSidesScoreTally[(int) this._shimmyDirection] = new StrategicArea.StrategicAreaMutableTuple(1, 0);
        flag1 = true;
      }
      bool flag2 = false;
      if (num2 != 0 && !flag1 && (double) totalMissionTime - (double) MathF.Max(agent.LastRangedAttackTime, this._lastShimmyTime) > 8.0)
      {
        StrategicArea.StrategicAreaMutableTuple areaMutableTuple = this._strategicAreaSidesScoreTally[(int) this._shimmyDirection];
        if (areaMutableTuple != null)
          --areaMutableTuple.RangedHitScoredCount;
        else
          this._strategicAreaSidesScoreTally[(int) this._shimmyDirection] = new StrategicArea.StrategicAreaMutableTuple(0, -1);
        flag2 = true;
      }
      if (flag1 | flag2)
      {
        int num3 = int.MinValue;
        int num4 = 0;
        for (int index2 = 0; index2 < 5; ++index2)
        {
          if ((StrategicArea.ShimmyDirection) index2 != this._shimmyDirection && this._strategicAreaSidesScoreTally[index2] != null)
          {
            int num5 = this._strategicAreaSidesScoreTally[index2].RangedHitScoredCount - this._strategicAreaSidesScoreTally[index2].RangedHitReceivedCount;
            if (num5 > num3)
            {
              num3 = num5;
              num4 = 1;
            }
            else if (num5 == num3)
              ++num4;
          }
        }
        int num6 = MBRandom.RandomInt(num4 - 1);
        for (int index3 = 0; index3 < 5; ++index3)
        {
          if ((StrategicArea.ShimmyDirection) index3 != this._shimmyDirection && this._strategicAreaSidesScoreTally[index3] != null && this._strategicAreaSidesScoreTally[index3].RangedHitScoredCount - this._strategicAreaSidesScoreTally[index3].RangedHitReceivedCount == num3 && --num6 < 0)
            index1 = (StrategicArea.ShimmyDirection) index3;
        }
        this._doesFrameNeedUpdate = true;
      }
      if (!this._doesFrameNeedUpdate)
        return new WorldFrame?(this._cachedWorldFrame);
      if (this._centerPosition.HasValue)
      {
        WorldPosition origin = this._centerPosition.Value;
        Vec2 xy = this._frame.Rotation.f.AsVec2.Normalized();
        Vec2 vec2;
        switch (index1)
        {
          case StrategicArea.ShimmyDirection.Center:
            vec2 = Vec2.Zero;
            break;
          case StrategicArea.ShimmyDirection.Left:
            vec2 = xy.RightVec();
            break;
          case StrategicArea.ShimmyDirection.Forward:
            vec2 = xy;
            break;
          case StrategicArea.ShimmyDirection.Right:
            vec2 = xy.LeftVec();
            break;
          case StrategicArea.ShimmyDirection.Back:
            vec2 = -xy;
            break;
          default:
            vec2 = Vec2.Zero;
            break;
        }
        WorldPosition worldPosition = origin;
        int num7 = 8;
        bool flag3 = false;
        while (num7-- > 0)
        {
          origin.SetVec2(worldPosition.AsVec2 + (float) (0.60000002384185791 + 0.05000000074505806 * (double) num7) * vec2);
          if (origin.GetNavMesh() != UIntPtr.Zero)
          {
            flag3 = true;
            break;
          }
        }
        this._doesFrameNeedUpdate = false;
        if (!flag3)
        {
          this._strategicAreaSidesScoreTally[(int) index1] = (StrategicArea.StrategicAreaMutableTuple) null;
        }
        else
        {
          this._shimmyDirection = index1;
          this._lastShimmyTime = totalMissionTime;
          Mat3 identity = Mat3.Identity with
          {
            f = new Vec3(xy)
          };
          identity.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
          this._cachedWorldFrame = new WorldFrame(identity, origin);
        }
        return new WorldFrame?(this._cachedWorldFrame);
      }
      MBDebug.ShowWarning("Strategic archer position at position at X=" + (object) this._frame.Origin.GetGroundVec3().x + " Y=" + (object) this._frame.Origin.GetGroundVec3().y + " Z=" + (object) this._frame.Origin.GetGroundVec3().z + "doesn't yield a viable frame. It may be in the air, underground or off the navmesh, please check. Scene: " + this.Scene.GetName());
      return new WorldFrame?(agent.GetWorldFrame());
    }

    private static float CalculateWeight(int capacity, int index)
    {
      return (float) ((double) (capacity - index) * 1.0 / (double) capacity * 0.5);
    }

    public float? GetWeightOfNextSlot(BattleSideEnum side)
    {
      return this._agents.Count < this._capacity ? new float?(StrategicArea.CalculateWeight(this._capacity, this._agents.Count)) : new float?();
    }

    public float GetWeightOfOccupiedSlot(Agent agent)
    {
      return StrategicArea.CalculateWeight(this._capacity, this._agents.IndexOf(agent));
    }

    public bool IsUsableBy(BattleSideEnum side)
    {
      return this._side == side || this._side == BattleSideEnum.None;
    }

    float IDetachment.GetDetachmentWeight(BattleSideEnum side)
    {
      return this._agents.Count < this._capacity ? (float) (this._capacity - this._agents.Count) * 1f / (float) this._capacity : float.MinValue;
    }

    void IDetachment.ResetEvaluation() => this._isEvaluated = false;

    bool IDetachment.IsEvaluated() => this._isEvaluated;

    void IDetachment.SetAsEvaluated() => this._isEvaluated = true;

    float IDetachment.GetDetachmentWeightFromCache() => this._cachedDetachmentWeight;

    float IDetachment.ComputeAndCacheDetachmentWeight(BattleSideEnum side)
    {
      this._cachedDetachmentWeight = ((IDetachment) this).GetDetachmentWeight(side);
      return this._cachedDetachmentWeight;
    }

    private class StrategicAreaMutableTuple
    {
      public int RangedHitReceivedCount;
      public int RangedHitScoredCount;

      public StrategicAreaMutableTuple(int rangedHitReceivedCount, int rangedHitScoredCount)
      {
        this.RangedHitReceivedCount = rangedHitReceivedCount;
        this.RangedHitScoredCount = rangedHitScoredCount;
      }
    }

    private enum ShimmyDirection
    {
      Center,
      Left,
      Forward,
      Right,
      Back,
      NumDirections,
    }
  }
}
