// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic.AgentMoraleInteractionLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions.Handlers.Logic
{
  public class AgentMoraleInteractionLogic : MissionLogic
  {
    private const float DebacleVoiceChance = 0.7f;
    private const float MoraleEffectRadius = 4f;
    private const int MaxNumAgentsToGainMorale = 10;
    private const int MaxNumAgentsToLoseMorale = 10;
    private const float SquaredDistanceForSeparateAffectorQuery = 2.25f;
    private const ushort RandomSelectorCapacity = 1024;
    private readonly HashSet<Agent> _agentsToReceiveMoraleGain = new HashSet<Agent>();
    private readonly HashSet<Agent> _agentsToReceiveMoraleLoss = new HashSet<Agent>();
    private readonly MBFastRandomSelector<Agent> _randomAgentSelector = new MBFastRandomSelector<Agent>((ushort) 1024);
    private readonly MBFastRandomSelector<IFormationUnit> _randomFormationUnitSelector = new MBFastRandomSelector<IFormationUnit>((ushort) 1024);
    private readonly MBList<Agent> _nearbyAgentsCache;
    private readonly MBList<Agent> _nearbyAllyAgentsCache;

    public AgentMoraleInteractionLogic()
    {
      this._nearbyAgentsCache = new MBList<Agent>();
      this._nearbyAllyAgentsCache = new MBList<Agent>();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectedAgent == null || !affectedAgent.IsHuman || agentState != AgentState.Killed && agentState != AgentState.Unconscious)
        return;
      (float affectedSideMaxMoraleLoss, float num) = MissionGameModels.Current.BattleMoraleModel.CalculateMaxMoraleChangeDueToAgentIncapacitated(affectedAgent, agentState, affectorAgent, in killingBlow);
      if ((double) affectedSideMaxMoraleLoss <= 0.0 && (double) num <= 0.0)
        return;
      if (affectorAgent != null)
        affectorAgent = affectorAgent.IsHuman ? affectorAgent : (affectorAgent.IsMount ? affectorAgent.RiderAgent : (Agent) null);
      this.ApplyMoraleEffectOnAgentIncapacitated(affectedAgent, affectorAgent, affectedSideMaxMoraleLoss, num, 4f);
    }

    public override void OnAgentFleeing(Agent affectedAgent)
    {
      if (affectedAgent == null || !affectedAgent.IsHuman)
        return;
      (float affectedSideMaxMoraleLoss, float num) = MissionGameModels.Current.BattleMoraleModel.CalculateMaxMoraleChangeDueToAgentPanicked(affectedAgent);
      if ((double) affectedSideMaxMoraleLoss > 0.0 || (double) num > 0.0)
        this.ApplyMoraleEffectOnAgentIncapacitated(affectedAgent, (Agent) null, affectedSideMaxMoraleLoss, num, 4f);
      if ((double) MBRandom.RandomFloat >= 0.699999988079071)
        return;
      affectedAgent.MakeVoice(SkinVoiceManager.VoiceType.Debacle, SkinVoiceManager.CombatVoiceNetworkPredictionType.NoPrediction);
    }

    private void ApplyMoraleEffectOnAgentIncapacitated(
      Agent affectedAgent,
      Agent affectorAgent,
      float affectedSideMaxMoraleLoss,
      float affectorSideMoraleMaxGain,
      float effectRadius)
    {
      this._agentsToReceiveMoraleLoss.Clear();
      this._agentsToReceiveMoraleGain.Clear();
      if (affectedAgent != null && affectedAgent.IsHuman)
      {
        WorldPosition worldPosition = affectedAgent.GetWorldPosition();
        Vec2 asVec2_1 = worldPosition.AsVec2;
        this.Mission.GetNearbyAgents(asVec2_1, effectRadius, this._nearbyAgentsCache);
        this.SelectRandomAgentsFromListToAgentSet((MBReadOnlyList<Agent>) this._nearbyAgentsCache, this._agentsToReceiveMoraleLoss, 10, new Predicate<Agent>(AffectedsAllyCondition));
        if (this._agentsToReceiveMoraleLoss.Count < 10 && affectedAgent.Formation != null)
        {
          this.SelectRandomAgentsFromFormationToAgentSet(affectedAgent.Formation, this._agentsToReceiveMoraleLoss, 10, new Predicate<IFormationUnit>(FormationCondition));

          bool FormationCondition(IFormationUnit unit)
          {
            return unit is Agent agent && agent.IsActive() && agent.IsHuman && agent.IsAIControlled;
          }
        }
        if (affectorAgent != null && affectorAgent.IsActive() && affectorAgent.IsHuman && affectorAgent.IsAIControlled && affectorAgent.IsEnemyOf(affectedAgent))
          this._agentsToReceiveMoraleGain.Add(affectorAgent);
        if (this._agentsToReceiveMoraleGain.Count < 10)
          this.SelectRandomAgentsFromListToAgentSet((MBReadOnlyList<Agent>) this._nearbyAgentsCache, this._agentsToReceiveMoraleGain, 10, new Predicate<Agent>(AffectedsEnemyCondition));
        if (this._agentsToReceiveMoraleGain.Count < 10 && affectorAgent?.Team != null && affectorAgent.IsEnemyOf(affectedAgent))
        {
          worldPosition = affectorAgent.GetWorldPosition();
          Vec2 asVec2_2 = worldPosition.AsVec2;
          if ((double) asVec2_2.DistanceSquared(asVec2_1) > 2.25)
          {
            this.Mission.GetNearbyAllyAgents(asVec2_2, effectRadius, affectedAgent.Team, this._nearbyAllyAgentsCache);
            this.SelectRandomAgentsFromListToAgentSet((MBReadOnlyList<Agent>) this._nearbyAllyAgentsCache, this._agentsToReceiveMoraleGain, 10, new Predicate<Agent>(AffectorsAllyCondition));
          }
        }
        if (this._agentsToReceiveMoraleGain.Count < 10 && affectorAgent?.Formation != null)
        {
          this.SelectRandomAgentsFromFormationToAgentSet(affectorAgent.Formation, this._agentsToReceiveMoraleGain, 10, new Predicate<IFormationUnit>(FormationCondition));

          bool FormationCondition(IFormationUnit unit)
          {
            return unit is Agent agent && agent.IsActive() && agent.IsHuman && agent.IsAIControlled;
          }
        }
      }
      foreach (Agent agent in this._agentsToReceiveMoraleLoss)
      {
        float delta = -MissionGameModels.Current.BattleMoraleModel.CalculateMoraleChangeToCharacter(agent, affectedSideMaxMoraleLoss);
        agent.ChangeMorale(delta);
      }
      foreach (Agent agent in this._agentsToReceiveMoraleGain)
      {
        float changeToCharacter = MissionGameModels.Current.BattleMoraleModel.CalculateMoraleChangeToCharacter(agent, affectorSideMoraleMaxGain);
        agent.ChangeMorale(changeToCharacter);
      }

      bool AffectedsAllyCondition(Agent agent)
      {
        return agent.IsActive() && agent.IsHuman && agent.IsAIControlled && agent != affectedAgent && agent.IsFriendOf(affectedAgent);
      }

      bool AffectedsEnemyCondition(Agent agent)
      {
        return agent.IsActive() && agent.IsHuman && agent.IsAIControlled && agent != affectorAgent && agent.IsEnemyOf(affectedAgent);
      }

      bool AffectorsAllyCondition(Agent agent)
      {
        return agent.IsActive() && agent.IsHuman && agent.IsAIControlled && agent != affectorAgent;
      }
    }

    private void SelectRandomAgentsFromListToAgentSet(
      MBReadOnlyList<Agent> agentsList,
      HashSet<Agent> outputAgentsSet,
      int maxCountInSet,
      Predicate<Agent> conditions = null)
    {
      if (outputAgentsSet == null || agentsList == null)
        return;
      this._randomAgentSelector.Initialize(agentsList);
      Agent selection;
      while (outputAgentsSet.Count < maxCountInSet && this._randomAgentSelector.SelectRandom(out selection, conditions))
        outputAgentsSet.Add(selection);
    }

    private void SelectRandomAgentsFromFormationToAgentSet(
      Formation formation,
      HashSet<Agent> outputAgentsSet,
      int maxCountInSet,
      Predicate<IFormationUnit> conditions = null)
    {
      if (outputAgentsSet == null || formation == null || formation.CountOfUnits <= 0)
        return;
      int num1 = Math.Max(0, maxCountInSet - outputAgentsSet.Count);
      if (num1 <= 0)
        return;
      int num2 = (int) ((double) formation.CountOfDetachedUnits / (double) formation.CountOfUnits * (double) num1);
      if (num2 > 0)
      {
        this._randomAgentSelector.Initialize(formation.DetachedUnits);
        int num3 = 0;
        Agent selection;
        while (num3 < num2 && outputAgentsSet.Count < maxCountInSet && this._randomAgentSelector.SelectRandom(out selection, (Predicate<Agent>) conditions))
        {
          if (outputAgentsSet.Add(selection))
            ++num3;
        }
      }
      if (outputAgentsSet.Count >= maxCountInSet || !(formation.Arrangement?.GetAllUnits() is MBList<IFormationUnit> allUnits) || allUnits.Count <= 0)
        return;
      this._randomFormationUnitSelector.Initialize((MBReadOnlyList<IFormationUnit>) allUnits);
      IFormationUnit selection1;
      while (outputAgentsSet.Count < maxCountInSet && this._randomFormationUnitSelector.SelectRandom(out selection1, conditions))
      {
        if (selection1 is Agent agent)
          outputAgentsSet.Add(agent);
      }
    }
  }
}
