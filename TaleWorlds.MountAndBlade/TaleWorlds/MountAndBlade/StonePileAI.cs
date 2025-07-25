// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StonePileAI
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StonePileAI : UsableMachineAIBase
  {
    public StonePileAI(StonePile stonePile)
      : base((UsableMachine) stonePile)
    {
    }

    public static Agent GetSuitableAgentForStandingPoint(
      StonePile usableMachine,
      StandingPoint standingPoint,
      List<Agent> agents,
      List<Agent> usedAgents)
    {
      float num = float.MinValue;
      Agent forStandingPoint = (Agent) null;
      foreach (Agent agent in agents)
      {
        if (StonePileAI.IsAgentAssignable(agent) && !standingPoint.IsDisabledForAgent(agent) && (double) standingPoint.GetUsageScoreForAgent(agent) > (double) num)
        {
          num = standingPoint.GetUsageScoreForAgent(agent);
          forStandingPoint = agent;
        }
      }
      return forStandingPoint;
    }

    public static Agent GetSuitableAgentForStandingPoint(
      StonePile stonePile,
      StandingPoint standingPoint,
      List<(Agent, float)> agents,
      List<Agent> usedAgents,
      float weight)
    {
      float num = float.MinValue;
      Agent forStandingPoint = (Agent) null;
      foreach ((Agent agent, float _) in agents)
      {
        if (StonePileAI.IsAgentAssignable(agent) && !standingPoint.IsDisabledForAgent(agent) && (double) standingPoint.GetUsageScoreForAgent(agent) > (double) num)
        {
          num = standingPoint.GetUsageScoreForAgent(agent);
          forStandingPoint = agent;
        }
      }
      return forStandingPoint;
    }

    public static bool IsAgentAssignable(Agent agent)
    {
      if (agent == null || !agent.IsAIControlled || !agent.IsActive() || agent.IsRunningAway || agent.InteractingWithAnyGameObject())
        return false;
      return agent.Formation == null || !agent.IsDetachedFromFormation;
    }

    protected override void HandleAgentStopUsingStandingPoint(
      Agent agent,
      StandingPoint standingPoint)
    {
      agent.DisableScriptedCombatMovement();
      base.HandleAgentStopUsingStandingPoint(agent, standingPoint);
    }
  }
}
