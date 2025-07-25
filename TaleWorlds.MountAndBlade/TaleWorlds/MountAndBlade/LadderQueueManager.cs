// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.LadderQueueManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class LadderQueueManager : MissionObject
  {
    public int ManagedNavigationFaceId;
    public int ManagedNavigationFaceAlternateID1;
    public int ManagedNavigationFaceAlternateID2;
    public float CostAddition;
    private readonly List<Agent> _userAgents = new List<Agent>();
    private readonly List<Agent> _queuedAgents = new List<Agent>();
    private MatrixFrame _managedEntitialFrame;
    private Vec2 _managedEntitialDirection;
    private Vec3 _lastCachedGameEntityGlobalPosition;
    private MatrixFrame _managedGlobalFrame;
    private WorldPosition _managedGlobalWorldPosition;
    private Vec2 _managedGlobalDirection;
    private BattleSideEnum _managedSide;
    private bool _blockUsage;
    private int _maxUserCount;
    private int _queuedAgentCount;
    private float _arcAngle = 2.3561945f;
    private float _queueBeginDistance = 1f;
    private float _queueRowSize = 0.8f;
    private float _agentSpacing = 1f;
    private float _timeSinceLastUpdate;
    private float _updatePeriod;
    private float _usingAgentResetTime;
    private float _costPerRow;
    private float _baseCost;
    private float _zDifferenceToStopUsing = 2f;
    private float _distanceToStopUsing2d = 5f;
    private bool _doesManageMultipleIDs;
    private int _maxClimberCount = 18;
    private int _maxRunnerCount = 6;
    private Timer _deactivateTimer;
    private bool _deactivationDelayTimerElapsed = true;
    private LadderQueueManager _neighborLadderQueueManager;
    private (int, bool)[] _lastUserCountPerLadder;

    public bool IsDeactivated { get; private set; }

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public void DeactivateImmediate()
    {
      this.IsDeactivated = true;
      this._deactivationDelayTimerElapsed = true;
    }

    public void Deactivate()
    {
      this.IsDeactivated = true;
      this._deactivateTimer.Reset(Mission.Current.CurrentTime, 10f);
      int num1 = Math.Min(2, this._queuedAgentCount);
      int num2 = 0;
      for (int index = 0; index < this._queuedAgents.Count && num1 > 0; ++index)
      {
        if (this._queuedAgents[index] != null)
        {
          ++num2;
          if (num2 == num1)
          {
            this.RemoveAgentFromQueueAtIndex(index);
            --num1;
            index = -1;
            num2 = 0;
          }
        }
      }
    }

    public void Activate()
    {
      this.IsDeactivated = false;
      this._deactivationDelayTimerElapsed = false;
    }

    public void Initialize(
      int managedNavigationFaceId,
      MatrixFrame managedFrame,
      Vec3 managedDirection,
      BattleSideEnum managedSide,
      int maxUserCount,
      float arcAngle,
      float queueBeginDistance,
      float queueRowSize,
      float costPerRow,
      float baseCost,
      bool blockUsage,
      float agentSpacing,
      float zDifferenceToStopUsing,
      float distanceToStopUsing2d,
      bool doesManageMultipleIDs,
      int managedNavigationFaceAlternateID1,
      int managedNavigationFaceAlternateID2,
      int maxClimberCount,
      int maxRunnerCount)
    {
      this.ManagedNavigationFaceId = managedNavigationFaceId;
      this._managedEntitialFrame = managedFrame;
      this._managedEntitialDirection = managedDirection.AsVec2.Normalized();
      this._managedGlobalFrame = this.GameEntity.GetGlobalFrame().TransformToParent(managedFrame);
      this._managedGlobalWorldPosition = new WorldPosition(this.GameEntity.GetScenePointer(), UIntPtr.Zero, this._managedGlobalFrame.origin, false);
      this._managedGlobalWorldPosition.GetGroundVec3();
      this._managedGlobalDirection = this.GameEntity.GetGlobalFrame().rotation.TransformToParent(managedDirection).AsVec2.Normalized();
      this._lastCachedGameEntityGlobalPosition = this.GameEntity.GetGlobalFrame().origin;
      this._managedSide = managedSide;
      this._maxUserCount = maxUserCount;
      this._arcAngle = arcAngle;
      this._queueBeginDistance = queueBeginDistance;
      this._queueRowSize = queueRowSize;
      this._costPerRow = costPerRow;
      this._baseCost = baseCost;
      this._blockUsage = blockUsage;
      this._agentSpacing = agentSpacing;
      this._zDifferenceToStopUsing = zDifferenceToStopUsing;
      this._distanceToStopUsing2d = distanceToStopUsing2d;
      this._doesManageMultipleIDs = doesManageMultipleIDs;
      this.ManagedNavigationFaceAlternateID1 = managedNavigationFaceAlternateID1;
      this.ManagedNavigationFaceAlternateID2 = managedNavigationFaceAlternateID2;
      this._maxClimberCount = maxClimberCount;
      this._maxRunnerCount = maxRunnerCount;
      this._lastUserCountPerLadder = new (int, bool)[3];
      this._deactivateTimer = new Timer(0.0f, 0.0f);
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return !GameNetwork.IsClientOrReplay ? base.GetTickRequirement() | ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel : base.GetTickRequirement();
    }

    private void UpdateGlobalFrameCache()
    {
      MatrixFrame globalFrame = this.GameEntity.GetGlobalFrame();
      if (!(this._lastCachedGameEntityGlobalPosition != globalFrame.origin))
        return;
      this._lastCachedGameEntityGlobalPosition = globalFrame.origin;
      this._managedGlobalFrame = globalFrame.TransformToParent(this._managedEntitialFrame);
      this._managedGlobalWorldPosition = new WorldPosition(this.GameEntity.GetScenePointer(), UIntPtr.Zero, this._managedGlobalFrame.origin, false);
      this._managedGlobalWorldPosition.GetGroundVec3MT();
      this._managedGlobalDirection = globalFrame.rotation.TransformToParent(new Vec3(this._managedEntitialDirection)).AsVec2.Normalized();
    }

    private void OnTickParallelAux(float dt)
    {
      if (this.IsDeactivated && !this._deactivationDelayTimerElapsed && this._deactivateTimer.Check(Mission.Current.CurrentTime))
        this._deactivationDelayTimerElapsed = true;
      if (this._deactivationDelayTimerElapsed)
      {
        this._userAgents.Clear();
        for (int index = 0; index < this._queuedAgents.Count; ++index)
        {
          if (this._queuedAgents[index] != null && this._queuedAgents[index].IsActive())
            this.RemoveAgentFromQueueAtIndex(index);
        }
        this._queuedAgents.Clear();
      }
      else
      {
        this.UpdateGlobalFrameCache();
        Vec3 groundVec3 = this._managedGlobalWorldPosition.GetGroundVec3();
        this._timeSinceLastUpdate += dt;
        if ((double) this._timeSinceLastUpdate < (double) this._updatePeriod)
          return;
        if (this._neighborLadderQueueManager != null && (double) this._neighborLadderQueueManager._queuedAgentCount < (double) this._queuedAgentCount * 0.40000000596046448 && (double) this._neighborLadderQueueManager.CostAddition < (double) this.CostAddition * 0.666700005531311)
          this.FlushQueueManager();
        this._usingAgentResetTime -= this._timeSinceLastUpdate;
        this._timeSinceLastUpdate = 0.0f;
        this._updatePeriod = (float) (0.20000000298023224 + (double) MBRandom.RandomFloat * 0.10000000149011612);
        StackArray.StackArray3Int stackArray3Int = new StackArray.StackArray3Int();
        int num1 = 0;
        for (int index = this._userAgents.Count - 1; index >= 0; --index)
        {
          Agent userAgent = this._userAgents[index];
          bool flag1 = false;
          int navigationFaceId = userAgent.GetCurrentNavigationFaceId();
          if (!userAgent.IsActive())
            flag1 = true;
          else if ((double) this._usingAgentResetTime < 0.0 && ((double) userAgent.Position.z - (double) groundVec3.z > (double) this._zDifferenceToStopUsing || (double) (userAgent.Position.AsVec2 - groundVec3.AsVec2).LengthSquared > (double) this._distanceToStopUsing2d * (double) this._distanceToStopUsing2d))
          {
            if (navigationFaceId == this.ManagedNavigationFaceId || this._doesManageMultipleIDs && (navigationFaceId == this.ManagedNavigationFaceAlternateID1 || navigationFaceId == this.ManagedNavigationFaceAlternateID2))
              flag1 = true;
            else if ((this._doesManageMultipleIDs ? (!userAgent.HasPathThroughNavigationFacesIDFromDirectionMT(this.ManagedNavigationFaceId, this.ManagedNavigationFaceAlternateID1, this.ManagedNavigationFaceAlternateID2, this._managedGlobalDirection) ? 1 : 0) : (!userAgent.HasPathThroughNavigationFaceIdFromDirectionMT(this.ManagedNavigationFaceId, this._managedGlobalDirection) ? 1 : 0)) != 0)
              flag1 = true;
          }
          if (flag1)
          {
            this._userAgents[index].HumanAIComponent.AdjustSpeedLimit(this._userAgents[index], -1f, false);
            this._userAgents.RemoveAt(index);
          }
          else
          {
            bool flag2 = false;
            if (navigationFaceId == this.ManagedNavigationFaceId)
            {
              ++stackArray3Int[0];
              ++num1;
              flag2 = true;
            }
            else if (this._doesManageMultipleIDs)
            {
              if (navigationFaceId == this.ManagedNavigationFaceAlternateID1)
              {
                ++stackArray3Int[1];
                ++num1;
                flag2 = true;
              }
              else if (navigationFaceId == this.ManagedNavigationFaceAlternateID2)
              {
                ++stackArray3Int[2];
                ++num1;
                flag2 = true;
              }
            }
            if (!flag2)
            {
              if (this._userAgents[index].HasPathThroughNavigationFaceIdFromDirectionMT(this.ManagedNavigationFaceId, this._managedGlobalDirection))
                ++stackArray3Int[0];
              else if (this._userAgents[index].HasPathThroughNavigationFaceIdFromDirectionMT(this.ManagedNavigationFaceAlternateID1, this._managedGlobalDirection))
                ++stackArray3Int[1];
              else if (this._userAgents[index].HasPathThroughNavigationFaceIdFromDirectionMT(this.ManagedNavigationFaceAlternateID2, this._managedGlobalDirection))
                ++stackArray3Int[2];
            }
          }
        }
        if (this._neighborLadderQueueManager != null)
        {
          for (int index = this._neighborLadderQueueManager._userAgents.Count - 1; index >= 0; --index)
          {
            int navigationFaceId = this._neighborLadderQueueManager._userAgents[index].GetCurrentNavigationFaceId();
            if (navigationFaceId == this.ManagedNavigationFaceId)
            {
              ++stackArray3Int[0];
              ++num1;
            }
            else if (this._doesManageMultipleIDs)
            {
              if (navigationFaceId == this.ManagedNavigationFaceAlternateID1)
              {
                ++stackArray3Int[1];
                ++num1;
              }
              else if (navigationFaceId == this.ManagedNavigationFaceAlternateID2)
              {
                ++stackArray3Int[2];
                ++num1;
              }
            }
          }
        }
        for (int index = 0; index < 3; ++index)
        {
          if (this._lastUserCountPerLadder[index].Item1 != stackArray3Int[index])
          {
            this._lastUserCountPerLadder[index].Item1 = stackArray3Int[index];
            this._lastUserCountPerLadder[index].Item2 = true;
          }
        }
        for (int index = this._queuedAgents.Count - 1; index >= 0; --index)
        {
          if (this._queuedAgents[index] != null)
          {
            if (!this.ConditionsAreMet(this._queuedAgents[index], Agent.AIScriptedFrameFlags.GoToPosition))
            {
              this.RemoveAgentFromQueueAtIndex(index);
            }
            else
            {
              float num2 = MBRandom.RandomFloat * (float) this._maxUserCount;
              if ((double) num2 > 0.699999988079071)
              {
                int parentIndex1;
                int parentIndex2;
                this.GetParentIndicesForQueueIndex(index, out parentIndex1, out parentIndex2);
                if (parentIndex1 >= 0 && this._queuedAgents[parentIndex1] == null && (double) num2 > (parentIndex2 >= 0 ? 0.85000002384185791 : 0.699999988079071))
                  this.MoveAgentFromQueueIndexToQueueIndex(index, parentIndex1);
                else if (parentIndex2 >= 0 && this._queuedAgents[parentIndex2] == null)
                  this.MoveAgentFromQueueIndexToQueueIndex(index, parentIndex2);
              }
            }
          }
        }
        AgentProximityMap.ProximityMapSearchStruct searchStruct = AgentProximityMap.BeginSearch(Mission.Current, groundVec3.AsVec2, 30f);
        while (searchStruct.LastFoundAgent != null)
        {
          Agent lastFoundAgent = searchStruct.LastFoundAgent;
          if (this.ConditionsAreMet(lastFoundAgent, Agent.AIScriptedFrameFlags.None) && (double) lastFoundAgent.Position.DistanceSquared(groundVec3) < 900.0 && !this._queuedAgents.Contains(lastFoundAgent) && lastFoundAgent.HasPathThroughNavigationFacesIDFromDirectionMT(this.ManagedNavigationFaceId, this.ManagedNavigationFaceAlternateID1, this.ManagedNavigationFaceAlternateID2, Vec2.Zero))
          {
            if (this._neighborLadderQueueManager == null)
              this.AddAgentToQueue(lastFoundAgent);
            else if (!this._neighborLadderQueueManager._userAgents.Contains(lastFoundAgent))
              this.AddAgentToQueue(lastFoundAgent);
            else
              this._userAgents.Add(lastFoundAgent);
          }
          AgentProximityMap.FindNext(Mission.Current, ref searchStruct);
        }
        int num3 = this._userAgents.Count - num1;
        int num4 = Math.Min(this._maxClimberCount - num1, this._maxRunnerCount - num3);
        if (this._blockUsage || num4 <= 0)
          return;
        float num5 = float.MaxValue;
        int num6 = -1;
        for (int index = 0; index < this._queuedAgents.Count; ++index)
        {
          if (this._queuedAgents[index] != null)
          {
            float lengthSquared = (this._queuedAgents[index].Position - groundVec3).LengthSquared;
            if ((double) lengthSquared < (double) num5)
            {
              num5 = lengthSquared;
              num6 = index;
            }
          }
        }
        if (num6 < 0)
          return;
        this._userAgents.Add(this._queuedAgents[num6]);
        this._queuedAgents[num6].HumanAIComponent.AdjustSpeedLimit(this._queuedAgents[num6], 0.2f, true);
        this._usingAgentResetTime = 2f;
        this.RemoveAgentFromQueueAtIndex(num6);
      }
    }

    protected internal override void OnTickParallel(float dt)
    {
      if (this._neighborLadderQueueManager == null)
      {
        this.OnTickParallelAux(dt);
      }
      else
      {
        lock (this.Id.Id < this._neighborLadderQueueManager.Id.Id ? this : this._neighborLadderQueueManager)
          this.OnTickParallelAux(dt);
      }
    }

    protected internal override void OnTick(float dt)
    {
      if (GameNetwork.IsClientOrReplay || this.IsDeactivated || this._blockUsage)
        return;
      if (this.ManagedNavigationFaceId > 1 && this._lastUserCountPerLadder[0].Item2)
      {
        this._lastUserCountPerLadder[0].Item2 = false;
        this.CostAddition = this.GetNavigationFaceCostPerClimber(this._lastUserCountPerLadder[0].Item1);
        Mission.Current.SetNavigationFaceCostWithIdAroundPosition(this.ManagedNavigationFaceId, this._managedGlobalWorldPosition.GetGroundVec3(), this.CostAddition);
      }
      if (this.ManagedNavigationFaceAlternateID1 > 1 && this._lastUserCountPerLadder[1].Item2)
      {
        this._lastUserCountPerLadder[1].Item2 = false;
        Mission.Current.SetNavigationFaceCostWithIdAroundPosition(this.ManagedNavigationFaceAlternateID1, this._managedGlobalWorldPosition.GetGroundVec3(), this.GetNavigationFaceCostPerClimber(this._lastUserCountPerLadder[1].Item1));
      }
      if (this.ManagedNavigationFaceAlternateID2 <= 1 || !this._lastUserCountPerLadder[2].Item2)
        return;
      this._lastUserCountPerLadder[2].Item2 = false;
      Mission.Current.SetNavigationFaceCostWithIdAroundPosition(this.ManagedNavigationFaceAlternateID2, this._managedGlobalWorldPosition.GetGroundVec3(), this.GetNavigationFaceCostPerClimber(this._lastUserCountPerLadder[2].Item1));
    }

    private bool ConditionsAreMet(Agent agent, Agent.AIScriptedFrameFlags flags)
    {
      if (!agent.IsAIControlled || !agent.IsActive() || agent.Team == null || agent.Team.Side != this._managedSide || agent.MovementLockedState != AgentMovementLockedState.None || agent.IsUsingGameObject || agent.InteractingWithAnyGameObject() || agent.IsDetachedFromFormation || (double) agent.Position.z - (double) this._managedGlobalWorldPosition.GetGroundZ() >= (double) this._zDifferenceToStopUsing || this._userAgents.Contains(agent) || agent.GetScriptedFlags() != flags || agent.GetCurrentNavigationFaceId() == this.ManagedNavigationFaceId)
        return false;
      if (!this._doesManageMultipleIDs)
        return true;
      return agent.GetCurrentNavigationFaceId() != this.ManagedNavigationFaceAlternateID1 && agent.GetCurrentNavigationFaceId() != this.ManagedNavigationFaceAlternateID2;
    }

    protected internal override void OnMissionReset()
    {
      base.OnMissionReset();
      this._userAgents.Clear();
      this.IsDeactivated = true;
      this._deactivationDelayTimerElapsed = true;
      this._queuedAgents.Clear();
      this._queuedAgentCount = 0;
    }

    private void GetParentIndicesForQueueIndex(
      int queueIndex,
      out int parentIndex1,
      out int parentIndex2)
    {
      parentIndex1 = -1;
      parentIndex2 = -1;
      Vec2i coordinatesForQueueIndex = this.GetCoordinatesForQueueIndex(queueIndex);
      int num1 = coordinatesForQueueIndex.Y - 1;
      if (num1 < 0)
        return;
      int num2 = MathF.Max(this.GetRowSize(num1) - 1, 1);
      int num3 = MathF.Max(this.GetRowSize(coordinatesForQueueIndex.Y) - 1, 1);
      float num4 = (float) coordinatesForQueueIndex.X * (float) num2 / (float) num3;
      parentIndex1 = (int) num4;
      float num5 = MathF.Abs(num4 - (float) parentIndex1);
      if ((double) num5 > 0.20000000298023224)
      {
        if ((double) num5 > 0.800000011920929)
          ++parentIndex1;
        else
          parentIndex2 = parentIndex1 + 1;
      }
      parentIndex1 = this.GetQueueIndexForCoordinates(new Vec2i(parentIndex1, num1));
      if (parentIndex2 < 0)
        return;
      parentIndex2 = this.GetQueueIndexForCoordinates(new Vec2i(parentIndex2, num1));
    }

    private float GetScoreForAddingAgentToQueueIndex(
      Vec3 agentPosition,
      int queueIndex,
      out int scoreOfQueueIndex)
    {
      scoreOfQueueIndex = queueIndex;
      float agentToQueueIndex1 = float.MinValue;
      if (this._queuedAgents.Count <= queueIndex || this._queuedAgents[queueIndex] == null)
      {
        int parentIndex1;
        int parentIndex2;
        this.GetParentIndicesForQueueIndex(queueIndex, out parentIndex1, out parentIndex2);
        if (parentIndex1 < 0 || this._queuedAgents.Count > parentIndex1 && this._queuedAgents[parentIndex1] != null || parentIndex2 >= 0 && this._queuedAgents.Count > parentIndex2 && this._queuedAgents[parentIndex2] != null)
        {
          Vec2i coordinatesForQueueIndex = this.GetCoordinatesForQueueIndex(queueIndex);
          agentToQueueIndex1 = (float) ((double) coordinatesForQueueIndex.Y * (double) this._queueRowSize * -3.0) - (agentPosition.AsVec2 - this.GetQueuePositionForCoordinates(coordinatesForQueueIndex, -1).AsVec2).Length;
        }
        if (parentIndex1 >= 0 && (this._queuedAgents.Count <= parentIndex1 || this._queuedAgents[parentIndex1] == null))
        {
          int scoreOfQueueIndex1;
          float agentToQueueIndex2 = this.GetScoreForAddingAgentToQueueIndex(agentPosition, parentIndex1, out scoreOfQueueIndex1);
          if ((double) agentToQueueIndex1 < (double) agentToQueueIndex2)
          {
            scoreOfQueueIndex = scoreOfQueueIndex1;
            agentToQueueIndex1 = agentToQueueIndex2;
          }
        }
        if (parentIndex2 >= 0 && (this._queuedAgents.Count <= parentIndex2 || this._queuedAgents[parentIndex2] == null))
        {
          int scoreOfQueueIndex2;
          float agentToQueueIndex3 = this.GetScoreForAddingAgentToQueueIndex(agentPosition, parentIndex2, out scoreOfQueueIndex2);
          if ((double) agentToQueueIndex1 < (double) agentToQueueIndex3)
          {
            scoreOfQueueIndex = scoreOfQueueIndex2;
            agentToQueueIndex1 = agentToQueueIndex3;
          }
        }
      }
      return agentToQueueIndex1;
    }

    private void AddAgentToQueue(Agent agent)
    {
      int y = this.GetCoordinatesForQueueIndex(this._queuedAgents.Count).Y;
      int rowSize = this.GetRowSize(y);
      Vec3 position = agent.Position;
      int num1 = -1;
      float num2 = float.MinValue;
      for (int x = 0; x < rowSize; ++x)
      {
        int scoreOfQueueIndex;
        float agentToQueueIndex = this.GetScoreForAddingAgentToQueueIndex(position, this.GetQueueIndexForCoordinates(new Vec2i(x, y)), out scoreOfQueueIndex);
        if ((double) agentToQueueIndex > (double) num2)
        {
          num2 = agentToQueueIndex;
          num1 = scoreOfQueueIndex;
        }
      }
      while (this._queuedAgents.Count <= num1)
        this._queuedAgents.Add((Agent) null);
      this._queuedAgents[num1] = agent;
      WorldPosition positionForIndex = this.GetQueuePositionForIndex(num1, agent.Index);
      agent.SetScriptedPosition(ref positionForIndex, false);
      ++this._queuedAgentCount;
    }

    private void RemoveAgentFromQueueAtIndex(int queueIndex)
    {
      --this._queuedAgentCount;
      if (!this._queuedAgents[queueIndex].IsUsingGameObject && (!this._queuedAgents[queueIndex].IsAIControlled || !this._queuedAgents[queueIndex].AIMoveToGameObjectIsEnabled()))
        this._queuedAgents[queueIndex].DisableScriptedMovement();
      this._queuedAgents[queueIndex] = (Agent) null;
    }

    private float GetNavigationFaceCost(int rowIndex)
    {
      return this._baseCost + (float) MathF.Max(rowIndex - 1, 0) * this._costPerRow;
    }

    private float GetNavigationFaceCostPerClimber(int count)
    {
      return this._baseCost + (float) count * this._costPerRow;
    }

    private void MoveAgentFromQueueIndexToQueueIndex(int fromQueueIndex, int toQueueIndex)
    {
      this._queuedAgents[toQueueIndex] = this._queuedAgents[fromQueueIndex];
      this._queuedAgents[fromQueueIndex] = (Agent) null;
      WorldPosition positionForIndex = this.GetQueuePositionForIndex(toQueueIndex, this._queuedAgents[toQueueIndex].Index);
      this._queuedAgents[toQueueIndex].SetScriptedPosition(ref positionForIndex, false);
    }

    private int GetRowSize(int rowIndex)
    {
      return 1 + (int) ((double) (this._arcAngle * (this._queueBeginDistance + this._queueRowSize * (float) rowIndex)) / (double) this._agentSpacing);
    }

    private int GetQueueIndexForCoordinates(Vec2i coordinates)
    {
      int x = coordinates.X;
      for (int rowIndex = 0; rowIndex < coordinates.Y; ++rowIndex)
        x += this.GetRowSize(rowIndex);
      return x;
    }

    private Vec2i GetCoordinatesForQueueIndex(int queueIndex)
    {
      Vec2i coordinatesForQueueIndex = new Vec2i();
      while (true)
      {
        int rowSize = this.GetRowSize(coordinatesForQueueIndex.Y);
        if (rowSize <= queueIndex)
        {
          queueIndex -= rowSize;
          ++coordinatesForQueueIndex.Y;
        }
        else
          break;
      }
      coordinatesForQueueIndex.X = queueIndex;
      return coordinatesForQueueIndex;
    }

    private WorldPosition GetQueuePositionForCoordinates(Vec2i coordinates, int randomSeed)
    {
      MatrixFrame managedGlobalFrame = this._managedGlobalFrame;
      WorldPosition globalWorldPosition = this._managedGlobalWorldPosition;
      float a = 0.0f;
      int rowSize = this.GetRowSize(coordinates.Y);
      if (rowSize > 1)
        a = this._arcAngle * (float) ((double) coordinates.X / (double) (rowSize - 1) - 0.5);
      managedGlobalFrame.rotation.RotateAboutForward(a);
      managedGlobalFrame.origin += managedGlobalFrame.rotation.u * (this._queueBeginDistance + this._queueRowSize * (float) coordinates.Y);
      if (randomSeed >= 0)
      {
        Random random = new Random(coordinates.X * 100000 + coordinates.Y * 10000000 + randomSeed);
        managedGlobalFrame.rotation.RotateAboutForward((float) ((double) random.NextFloat() * 3.1415927410125732 * 2.0));
        managedGlobalFrame.origin += managedGlobalFrame.rotation.u * random.NextFloat() * 0.3f;
      }
      globalWorldPosition.SetVec2(managedGlobalFrame.origin.AsVec2);
      return globalWorldPosition;
    }

    private WorldPosition GetQueuePositionForIndex(int queueIndex, int randomSeed)
    {
      return this.GetQueuePositionForCoordinates(this.GetCoordinatesForQueueIndex(queueIndex), randomSeed);
    }

    public void FlushQueueManager()
    {
      int num = this._queuedAgentCount / 2;
      for (int index = this._queuedAgents.Count - 1; index >= num; --index)
      {
        if (this._queuedAgents[index] != null)
          this.RemoveAgentFromQueueAtIndex(index);
      }
    }

    public void AssignNeighborQueueManager(LadderQueueManager neighborLadderQueueManager)
    {
      this._neighborLadderQueueManager = neighborLadderQueueManager;
    }
  }
}
