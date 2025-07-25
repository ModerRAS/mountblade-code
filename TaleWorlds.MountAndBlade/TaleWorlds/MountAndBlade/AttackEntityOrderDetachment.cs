// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AttackEntityOrderDetachment
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class AttackEntityOrderDetachment : IDetachment
  {
    private const int Capacity = 8;
    private readonly List<Agent> _agents;
    private readonly MBList<Formation> _userFormations;
    private WorldFrame _frame;
    private readonly GameEntity _targetEntity;
    private readonly DestructableComponent _targetEntityDestructableComponent;
    private readonly bool _surroundEntity;
    private bool _isEvaluated;
    private float _cachedDetachmentWeight;

    public MBReadOnlyList<Formation> UserFormations
    {
      get => (MBReadOnlyList<Formation>) this._userFormations;
    }

    public bool IsLoose => true;

    public bool IsActive
    {
      get
      {
        return this._targetEntityDestructableComponent != null && !this._targetEntityDestructableComponent.IsDestroyed;
      }
    }

    public AttackEntityOrderDetachment(GameEntity targetEntity)
    {
      this._targetEntity = targetEntity;
      this._targetEntityDestructableComponent = this._targetEntity.GetFirstScriptOfType<DestructableComponent>();
      this._surroundEntity = this._targetEntity.GetFirstScriptOfType<CastleGate>() == null;
      this._agents = new List<Agent>();
      this._userFormations = new MBList<Formation>();
      MatrixFrame globalFrame = this._targetEntity.GetGlobalFrame();
      this._frame = new WorldFrame(globalFrame.rotation, new WorldPosition(targetEntity.GetScenePointer(), UIntPtr.Zero, globalFrame.origin, false));
      this._frame.Rotation.Orthonormalize();
    }

    public Vec3 GetPosition() => this._frame.Origin.GetGroundVec3();

    public void AddAgent(Agent agent, int slotIndex)
    {
      this._agents.Add(agent);
      agent.SetScriptedTargetEntityAndPosition(this._targetEntity, new WorldPosition(agent.Mission.Scene, UIntPtr.Zero, this._targetEntity.GlobalPosition, false), this._surroundEntity ? Agent.AISpecialCombatModeFlags.SurroundAttackEntity : Agent.AISpecialCombatModeFlags.None);
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
      for (int count = this._agents.Count; count < 8; ++count)
        slotIndexWeightTuples.Add((count, AttackEntityOrderDetachment.CalculateWeight(count)));
    }

    bool IDetachment.IsSlotAtIndexAvailableForAgent(int slotIndex, Agent agent)
    {
      return slotIndex < 8 && slotIndex >= this._agents.Count && agent.CanBeAssignedForScriptedMovement() && !this.IsAgentOnInconvenientNavmesh(agent);
    }

    private bool IsAgentOnInconvenientNavmesh(Agent agent)
    {
      if (Mission.Current.MissionTeamAIType != Mission.MissionTeamAITypeEnum.Siege)
        return false;
      int navigationFaceId = agent.GetCurrentNavigationFaceId();
      if (agent.Team.TeamAI is TeamAISiegeComponent teamAi)
      {
        foreach (int difficultNavmeshId in teamAi.DifficultNavmeshIDs)
        {
          if (navigationFaceId == difficultNavmeshId)
            return true;
        }
      }
      return false;
    }

    bool IDetachment.IsAgentEligible(Agent agent) => true;

    void IDetachment.UnmarkDetachment()
    {
    }

    bool IDetachment.IsDetachmentRecentlyEvaluated() => false;

    void IDetachment.MarkSlotAtIndex(int slotIndex)
    {
      Debug.FailedAssert("This should never have been called because this detachment does not seek to replace moving agents.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\TeamAI\\AttackEntityOrderDetachment.cs", "MarkSlotAtIndex", 149);
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

    public bool IsStandingPointAvailableForAgent(Agent agent) => this._agents.Count < 8;

    public List<float> GetTemplateCostsOfAgent(Agent candidate, List<float> oldValue)
    {
      WorldPosition worldPosition = candidate.GetWorldPosition();
      WorldPosition origin = this._frame.Origin;
      origin.SetVec2(origin.AsVec2 + this._frame.Rotation.f.AsVec2.Normalized() * 0.7f);
      float pathDistance;
      float num = (Mission.Current.Scene.GetPathDistanceBetweenPositions(ref worldPosition, ref origin, candidate.Monster.BodyCapsuleRadius, out pathDistance) ? pathDistance : float.MaxValue) * MissionGameModels.Current.AgentStatCalculateModel.GetDetachmentCostMultiplierOfAgent(candidate, (IDetachment) this);
      List<float> templateCostsOfAgent = oldValue ?? new List<float>(8);
      templateCostsOfAgent.Clear();
      for (int index = 0; index < 8; ++index)
        templateCostsOfAgent.Add(num);
      return templateCostsOfAgent;
    }

    float IDetachment.GetExactCostOfAgentAtSlot(Agent candidate, int slotIndex)
    {
      Debug.FailedAssert("This should never have been called because this detachment does not seek to replace moving agents.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\TeamAI\\AttackEntityOrderDetachment.cs", "GetExactCostOfAgentAtSlot", 205);
      return 0.0f;
    }

    public float GetTemplateWeightOfAgent(Agent candidate)
    {
      WorldPosition worldPosition = candidate.GetWorldPosition();
      WorldPosition origin = this._frame.Origin;
      float pathDistance;
      return !Mission.Current.Scene.GetPathDistanceBetweenPositions(ref worldPosition, ref origin, candidate.Monster.BodyCapsuleRadius, out pathDistance) ? float.MaxValue : pathDistance;
    }

    public float? GetWeightOfAgentAtNextSlot(List<Agent> newAgents, out Agent match)
    {
      float? weightOfNextSlot = this.GetWeightOfNextSlot(newAgents[0].Team.Side);
      if (this._agents.Count < 8)
      {
        Vec3 position = this._targetEntity.GlobalPosition;
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
      if (this._agents.Count < 8)
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
      Vec3 position = this._targetEntity.GlobalPosition;
      match = newAgents.MinBy<Agent, float>((Func<Agent, float>) (a => a.Position.DistanceSquared(position)));
      return new float?((float) (weightOfOccupiedSlot * 0.5));
    }

    public void RemoveAgent(Agent agent)
    {
      this._agents.Remove(agent);
      agent.DisableScriptedMovement();
      agent.DisableScriptedCombatMovement();
    }

    public int GetNumberOfUsableSlots() => 8;

    public WorldFrame? GetAgentFrame(Agent agent) => new WorldFrame?();

    private static float CalculateWeight(int index) => (float) (1.0 + (1.0 - (double) index / 8.0));

    public float? GetWeightOfNextSlot(BattleSideEnum side)
    {
      return this._agents.Count < 8 ? new float?(AttackEntityOrderDetachment.CalculateWeight(this._agents.Count)) : new float?();
    }

    public float GetWeightOfOccupiedSlot(Agent agent)
    {
      return AttackEntityOrderDetachment.CalculateWeight(this._agents.IndexOf(agent));
    }

    float IDetachment.GetDetachmentWeight(BattleSideEnum side)
    {
      return this._agents.Count < 8 ? (float) ((double) (8 - this._agents.Count) * 1.0 / 8.0) : float.MinValue;
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
  }
}
