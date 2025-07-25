// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.FleeBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using SandBox.Objects.Usables;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class FleeBehavior : AgentBehavior
  {
    private static readonly ActionIndexCache act_scared_reaction_1 = ActionIndexCache.Create(nameof (act_scared_reaction_1));
    private static readonly ActionIndexCache act_scared_idle_1 = ActionIndexCache.Create(nameof (act_scared_idle_1));
    private static readonly ActionIndexCache act_cheer_1 = ActionIndexCache.Create(nameof (act_cheer_1));
    public const float ScoreThreshold = 1f;
    public const float DangerDistance = 5f;
    public const float ImmediateDangerDistance = 2f;
    public const float DangerDistanceSquared = 25f;
    public const float ImmediateDangerDistanceSquared = 4f;
    private readonly MissionAgentHandler _missionAgentHandler;
    private readonly MissionFightHandler _missionFightHandler;
    private FleeBehavior.State _state;
    private readonly BasicMissionTimer _reconsiderFleeTargetTimer;
    private const float ReconsiderImmobilizedFleeTargetTime = 0.5f;
    private const float ReconsiderDefaultFleeTargetTime = 1f;
    private FleeBehavior.FleeGoalBase _selectedGoal;
    private BasicMissionTimer _scareTimer;
    private float _scareTime;
    private BasicMissionTimer _complainToGuardTimer;
    private const float ComplainToGuardTime = 2f;
    private FleeBehavior.FleeTargetType _selectedFleeTargetType;

    private FleeBehavior.FleeTargetType SelectedFleeTargetType
    {
      get => this._selectedFleeTargetType;
      set
      {
        if (value == this._selectedFleeTargetType)
          return;
        this._selectedFleeTargetType = value;
        MBActionSet actionSet = this.OwnerAgent.ActionSet;
        ActionIndexValueCache currentActionValue = this.OwnerAgent.GetCurrentActionValue(1);
        if (this._selectedFleeTargetType != FleeBehavior.FleeTargetType.Cover && !actionSet.AreActionsAlternatives(currentActionValue, FleeBehavior.act_scared_idle_1) && !actionSet.AreActionsAlternatives(currentActionValue, FleeBehavior.act_scared_reaction_1))
          this.OwnerAgent.SetActionChannel(1, FleeBehavior.act_scared_reaction_1);
        if (this._selectedFleeTargetType == FleeBehavior.FleeTargetType.Cover)
          this.BeAfraid();
        this._selectedGoal.GoToTarget();
      }
    }

    public FleeBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      this._missionFightHandler = this.Mission.GetMissionBehavior<MissionFightHandler>();
      this._reconsiderFleeTargetTimer = new BasicMissionTimer();
      this._state = FleeBehavior.State.None;
    }

    public override void Tick(float dt, bool isSimulation)
    {
      switch (this._state)
      {
        case FleeBehavior.State.None:
          this.OwnerAgent.DisableScriptedMovement();
          this.OwnerAgent.SetActionChannel(1, FleeBehavior.act_scared_reaction_1, startProgress: MBRandom.RandomFloat);
          this._selectedGoal = (FleeBehavior.FleeGoalBase) new FleeBehavior.FleeCoverTarget(this.Navigator, this.OwnerAgent);
          this.SelectedFleeTargetType = FleeBehavior.FleeTargetType.Cover;
          break;
        case FleeBehavior.State.Afraid:
          if ((double) this._scareTimer.ElapsedTime <= (double) this._scareTime)
            break;
          this._state = FleeBehavior.State.LookForPlace;
          this._scareTimer = (BasicMissionTimer) null;
          break;
        case FleeBehavior.State.LookForPlace:
          this.LookForPlace();
          break;
        case FleeBehavior.State.Flee:
          this.Flee();
          break;
        case FleeBehavior.State.Complain:
          if (this._complainToGuardTimer == null || (double) this._complainToGuardTimer.ElapsedTime <= 2.0)
            break;
          this._complainToGuardTimer = (BasicMissionTimer) null;
          this.OwnerAgent.SetActionChannel(0, ActionIndexCache.act_none);
          this.OwnerAgent.SetLookAgent((Agent) null);
          (this._selectedGoal as FleeBehavior.FleeAgentTarget).Savior.SetLookAgent((Agent) null);
          AlarmedBehaviorGroup.AlarmAgent((this._selectedGoal as FleeBehavior.FleeAgentTarget).Savior);
          this._state = FleeBehavior.State.LookForPlace;
          break;
      }
    }

    private Vec3 GetDangerPosition()
    {
      Vec3 zero = Vec3.Zero;
      if (this._missionFightHandler != null)
      {
        IEnumerable<Agent> dangerSources = this._missionFightHandler.GetDangerSources(this.OwnerAgent);
        if (dangerSources.Any<Agent>())
        {
          foreach (Agent agent in dangerSources)
            zero += agent.Position;
          zero /= (float) dangerSources.Count<Agent>();
        }
      }
      return zero;
    }

    private bool IsThereDanger()
    {
      return this._missionFightHandler != null && this._missionFightHandler.GetDangerSources(this.OwnerAgent).Any<Agent>();
    }

    private float GetPathScore(WorldPosition startWorldPos, WorldPosition targetWorldPos)
    {
      float num1 = 1f;
      NavigationPath path = new NavigationPath();
      this.Mission.Scene.GetPathBetweenAIFaces(startWorldPos.GetNearestNavMesh(), targetWorldPos.GetNearestNavMesh(), startWorldPos.AsVec2, targetWorldPos.AsVec2, 0.0f, path);
      Vec2 asVec2 = this.GetDangerPosition().AsVec2;
      float toAngle = MBMath.WrapAngle((asVec2 - startWorldPos.AsVec2).RotationInRadians);
      Vec2 vec2;
      double rotationInRadians;
      if (path.Size <= 0)
      {
        rotationInRadians = (double) (targetWorldPos.AsVec2 - startWorldPos.AsVec2).RotationInRadians;
      }
      else
      {
        vec2 = path.PathPoints[0] - startWorldPos.AsVec2;
        rotationInRadians = (double) vec2.RotationInRadians;
      }
      float num2 = (float) ((double) MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles(MBMath.WrapAngle((float) rotationInRadians), toAngle)) / 3.1415927410125732 * 1.0);
      vec2 = startWorldPos.AsVec2;
      float num3 = vec2.DistanceSquared(asVec2);
      if (path.Size > 0)
      {
        float num4 = float.MaxValue;
        Vec2 line2 = startWorldPos.AsVec2;
        for (int index = 0; index < path.Size; ++index)
        {
          float lineSegmentSquared = Vec2.DistanceToLineSegmentSquared(path.PathPoints[index], line2, asVec2);
          line2 = path.PathPoints[index];
          if ((double) lineSegmentSquared < (double) num4)
            num4 = lineSegmentSquared;
        }
        num1 = (double) num3 <= (double) num4 || (double) num4 >= 25.0 ? ((double) num3 <= 4.0 ? 1f : (float) (1.0 * (double) num4 / 225.0)) : (float) (1.0 * ((double) num4 - (double) num3) / 225.0);
      }
      vec2 = startWorldPos.AsVec2;
      float num5 = (float) (1.0 * (225.0 / (double) vec2.DistanceSquared(targetWorldPos.AsVec2)));
      return (float) ((1.0 + (double) num2) * (1.0 + (double) num2) - 2.0) + num1 + num5;
    }

    private void LookForPlace()
    {
      FleeBehavior.FleeGoalBase fleeGoalBase = (FleeBehavior.FleeGoalBase) new FleeBehavior.FleeCoverTarget(this.Navigator, this.OwnerAgent);
      FleeBehavior.FleeTargetType fleeTargetType = FleeBehavior.FleeTargetType.Cover;
      if (this.IsThereDanger())
      {
        List<(float, Agent)> availableGuardScores = this.GetAvailableGuardScores();
        List<(float, Passage)> availablePassageScores = this.GetAvailablePassageScores();
        float num1 = float.MinValue;
        foreach ((float, Passage) tuple in availablePassageScores)
        {
          float num2 = tuple.Item1;
          if ((double) num2 > (double) num1)
          {
            num1 = num2;
            fleeTargetType = FleeBehavior.FleeTargetType.Indoor;
            fleeGoalBase = (FleeBehavior.FleeGoalBase) new FleeBehavior.FleePassageTarget(this.Navigator, this.OwnerAgent, tuple.Item2);
          }
        }
        foreach ((float, Agent) tuple in availableGuardScores)
        {
          float num3 = tuple.Item1;
          if ((double) num3 > (double) num1)
          {
            num1 = num3;
            fleeTargetType = FleeBehavior.FleeTargetType.Guard;
            fleeGoalBase = (FleeBehavior.FleeGoalBase) new FleeBehavior.FleeAgentTarget(this.Navigator, this.OwnerAgent, tuple.Item2);
          }
        }
      }
      this._selectedGoal = fleeGoalBase;
      this.SelectedFleeTargetType = fleeTargetType;
      this._state = FleeBehavior.State.Flee;
    }

    private bool ShouldChangeTarget()
    {
      if (this._selectedFleeTargetType == FleeBehavior.FleeTargetType.Guard)
      {
        WorldPosition worldPosition = (this._selectedGoal as FleeBehavior.FleeAgentTarget).Savior.GetWorldPosition();
        return (double) this.GetPathScore(this.OwnerAgent.GetWorldPosition(), worldPosition) <= 1.0 && this.IsThereASafePlaceToEscape();
      }
      if (this._selectedFleeTargetType != FleeBehavior.FleeTargetType.Indoor)
        return true;
      StandingPoint standingPointForAi = (this._selectedGoal as FleeBehavior.FleePassageTarget).EscapePortal.GetVacantStandingPointForAI(this.OwnerAgent);
      if (standingPointForAi == null)
        return true;
      return (double) this.GetPathScore(this.OwnerAgent.GetWorldPosition(), standingPointForAi.GetUserFrameForAgent(this.OwnerAgent).Origin) <= 1.0 && this.IsThereASafePlaceToEscape();
    }

    private bool IsThereASafePlaceToEscape()
    {
      return this.GetAvailablePassageScores(1).Any<(float, Passage)>((Func<(float, Passage), bool>) (d => (double) d.Item1 > 1.0)) || this.GetAvailableGuardScores(1).Any<(float, Agent)>((Func<(float, Agent), bool>) (d => (double) d.Item1 > 1.0));
    }

    private List<(float, Passage)> GetAvailablePassageScores(int maxPaths = 10)
    {
      WorldPosition worldPosition = this.OwnerAgent.GetWorldPosition();
      List<(float, Passage)> valueTupleList1 = new List<(float, Passage)>();
      List<(float, Passage)> valueTupleList2 = new List<(float, Passage)>();
      List<(WorldPosition, Passage)> source = new List<(WorldPosition, Passage)>();
      if (this._missionAgentHandler.TownPassageProps != null)
      {
        foreach (UsableMachine townPassageProp in this._missionAgentHandler.TownPassageProps)
        {
          StandingPoint standingPointForAi = townPassageProp.GetVacantStandingPointForAI(this.OwnerAgent);
          Passage passage = townPassageProp as Passage;
          if (standingPointForAi != null && passage != null)
          {
            WorldPosition origin = standingPointForAi.GetUserFrameForAgent(this.OwnerAgent).Origin;
            source.Add((origin, passage));
          }
        }
      }
      foreach ((WorldPosition, Passage) tuple in source.OrderBy<(WorldPosition, Passage), float>((Func<(WorldPosition, Passage), float>) (a => this.OwnerAgent.Position.AsVec2.DistanceSquared(a.Item1.AsVec2))).ToList<(WorldPosition, Passage)>())
      {
        WorldPosition targetWorldPos = tuple.Item1;
        if (targetWorldPos.IsValid && !(targetWorldPos.GetNearestNavMesh() == UIntPtr.Zero))
        {
          float pathScore = this.GetPathScore(worldPosition, targetWorldPos);
          (float, Passage) valueTuple = (pathScore, tuple.Item2);
          valueTupleList1.Add(valueTuple);
          if ((double) pathScore > 1.0)
            valueTupleList2.Add(valueTuple);
          if (valueTupleList2.Count >= maxPaths)
            break;
        }
      }
      return valueTupleList2.Count > 0 ? valueTupleList2 : valueTupleList1;
    }

    private List<(float, Agent)> GetAvailableGuardScores(int maxGuards = 5)
    {
      WorldPosition worldPosition1 = this.OwnerAgent.GetWorldPosition();
      List<(float, Agent)> valueTupleList1 = new List<(float, Agent)>();
      List<(float, Agent)> valueTupleList2 = new List<(float, Agent)>();
      List<Agent> source = new List<Agent>();
      foreach (Agent activeAgent in (List<Agent>) this.OwnerAgent.Team.ActiveAgents)
      {
        if (activeAgent.Character is CharacterObject character && activeAgent.IsAIControlled && activeAgent.CurrentWatchState != Agent.WatchState.Alarmed && (character.Occupation == Occupation.Soldier || character.Occupation == Occupation.Guard || character.Occupation == Occupation.PrisonGuard))
          source.Add(activeAgent);
      }
      foreach (Agent agent in source.OrderBy<Agent, float>((Func<Agent, float>) (a => this.OwnerAgent.Position.DistanceSquared(a.Position))).ToList<Agent>())
      {
        WorldPosition worldPosition2 = agent.GetWorldPosition();
        if (worldPosition2.IsValid)
        {
          float pathScore = this.GetPathScore(worldPosition1, worldPosition2);
          (float, Agent) valueTuple = (pathScore, agent);
          valueTupleList1.Add(valueTuple);
          if ((double) pathScore > 1.0)
            valueTupleList2.Add(valueTuple);
          if (valueTupleList2.Count >= maxGuards)
            break;
        }
      }
      return valueTupleList2.Count > 0 ? valueTupleList2 : valueTupleList1;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._state = FleeBehavior.State.None;
    }

    private void Flee()
    {
      if (this._selectedGoal.IsGoalAchievable())
      {
        if (this._selectedGoal.IsGoalAchieved())
        {
          this._selectedGoal.TargetReached();
          switch (this.SelectedFleeTargetType)
          {
            case FleeBehavior.FleeTargetType.Guard:
              this._complainToGuardTimer = new BasicMissionTimer();
              this._state = FleeBehavior.State.Complain;
              break;
            case FleeBehavior.FleeTargetType.Cover:
              if ((double) this._reconsiderFleeTargetTimer.ElapsedTime <= 0.5)
                break;
              this._state = FleeBehavior.State.LookForPlace;
              this._reconsiderFleeTargetTimer.Reset();
              break;
          }
        }
        else
        {
          if (this.SelectedFleeTargetType == FleeBehavior.FleeTargetType.Guard)
            this._selectedGoal.GoToTarget();
          if ((double) this._reconsiderFleeTargetTimer.ElapsedTime <= 1.0)
            return;
          this._reconsiderFleeTargetTimer.Reset();
          if (!this.ShouldChangeTarget())
            return;
          this._state = FleeBehavior.State.LookForPlace;
        }
      }
      else
        this._state = FleeBehavior.State.LookForPlace;
    }

    private void BeAfraid()
    {
      this._scareTimer = new BasicMissionTimer();
      this._scareTime = (float) (0.5 + (double) MBRandom.RandomFloat * 0.5);
      this._state = FleeBehavior.State.Afraid;
    }

    public override string GetDebugInfo() => "Flee " + (object) this._state;

    public override float GetAvailability(bool isSimulation)
    {
      if ((double) this.Mission.CurrentTime < 3.0)
        return 0.0f;
      return !MissionFightHandler.IsAgentAggressive(this.OwnerAgent) ? 0.9f : 0.1f;
    }

    private abstract class FleeGoalBase
    {
      protected readonly AgentNavigator _navigator;
      protected readonly Agent _ownerAgent;

      protected FleeGoalBase(AgentNavigator navigator, Agent ownerAgent)
      {
        this._navigator = navigator;
        this._ownerAgent = ownerAgent;
      }

      public abstract void TargetReached();

      public abstract void GoToTarget();

      public abstract bool IsGoalAchievable();

      public abstract bool IsGoalAchieved();
    }

    private class FleeAgentTarget : FleeBehavior.FleeGoalBase
    {
      public Agent Savior { get; private set; }

      public FleeAgentTarget(AgentNavigator navigator, Agent ownerAgent, Agent savior)
        : base(navigator, ownerAgent)
      {
        this.Savior = savior;
      }

      public override void GoToTarget()
      {
        this._navigator.SetTargetFrame(this.Savior.GetWorldPosition(), this.Savior.Frame.rotation.f.AsVec2.RotationInRadians, 0.2f, 0.02f, Agent.AIScriptedFrameFlags.NoAttack | Agent.AIScriptedFrameFlags.NeverSlowDown);
      }

      public override bool IsGoalAchievable()
      {
        return this.Savior.GetWorldPosition().GetNearestNavMesh() != UIntPtr.Zero && this._navigator.TargetPosition.IsValid && this.Savior.IsActive() && this.Savior.CurrentWatchState != Agent.WatchState.Alarmed;
      }

      public override bool IsGoalAchieved()
      {
        return this._navigator.TargetPosition.IsValid && (double) this._navigator.TargetPosition.GetGroundVec3().Distance(this._ownerAgent.Position) <= (double) this._ownerAgent.GetInteractionDistanceToUsable((IUsable) this.Savior);
      }

      public override void TargetReached()
      {
        this._ownerAgent.SetActionChannel(0, FleeBehavior.act_cheer_1, true);
        this._ownerAgent.SetActionChannel(1, ActionIndexCache.act_none, true);
        this._ownerAgent.DisableScriptedMovement();
        this.Savior.DisableScriptedMovement();
        this.Savior.SetLookAgent(this._ownerAgent);
        this._ownerAgent.SetLookAgent(this.Savior);
      }
    }

    private class FleePassageTarget : FleeBehavior.FleeGoalBase
    {
      public Passage EscapePortal { get; private set; }

      public FleePassageTarget(AgentNavigator navigator, Agent ownerAgent, Passage escapePortal)
        : base(navigator, ownerAgent)
      {
        this.EscapePortal = escapePortal;
      }

      public override void GoToTarget()
      {
        this._navigator.SetTarget((UsableMachine) this.EscapePortal);
      }

      public override bool IsGoalAchievable()
      {
        return this.EscapePortal.GetVacantStandingPointForAI(this._ownerAgent) != null && !this.EscapePortal.IsDestroyed;
      }

      public override bool IsGoalAchieved()
      {
        StandingPoint standingPointForAi = this.EscapePortal.GetVacantStandingPointForAI(this._ownerAgent);
        return standingPointForAi != null && standingPointForAi.IsUsableByAgent(this._ownerAgent);
      }

      public override void TargetReached()
      {
      }
    }

    private class FleePositionTarget : FleeBehavior.FleeGoalBase
    {
      public Vec3 Position { get; private set; }

      public FleePositionTarget(AgentNavigator navigator, Agent ownerAgent, Vec3 position)
        : base(navigator, ownerAgent)
      {
        this.Position = position;
      }

      public override void GoToTarget()
      {
      }

      public override bool IsGoalAchievable() => this._navigator.TargetPosition.IsValid;

      public override bool IsGoalAchieved()
      {
        return this._navigator.TargetPosition.IsValid && this._navigator.IsTargetReached();
      }

      public override void TargetReached()
      {
      }
    }

    private class FleeCoverTarget : FleeBehavior.FleeGoalBase
    {
      public FleeCoverTarget(AgentNavigator navigator, Agent ownerAgent)
        : base(navigator, ownerAgent)
      {
      }

      public override void GoToTarget() => this._ownerAgent.DisableScriptedMovement();

      public override bool IsGoalAchievable() => true;

      public override bool IsGoalAchieved() => true;

      public override void TargetReached()
      {
      }
    }

    private enum State
    {
      None,
      Afraid,
      LookForPlace,
      Flee,
      Complain,
    }

    private enum FleeTargetType
    {
      Indoor,
      Guard,
      Cover,
    }
  }
}
