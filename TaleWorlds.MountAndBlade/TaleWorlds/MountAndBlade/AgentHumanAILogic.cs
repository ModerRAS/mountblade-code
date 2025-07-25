// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentHumanAILogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class AgentHumanAILogic : MissionLogic
  {
    public override void OnAgentCreated(Agent agent)
    {
      base.OnAgentCreated(agent);
      if (!agent.IsAIControlled || !agent.IsHuman)
        return;
      agent.AddComponent((AgentComponent) new HumanAIComponent(agent));
    }

    protected internal override void OnAgentControllerChanged(
      Agent agent,
      Agent.ControllerType oldController)
    {
      base.OnAgentControllerChanged(agent, oldController);
      if (!agent.IsHuman)
        return;
      if (agent.Controller == Agent.ControllerType.AI)
      {
        agent.AddComponent((AgentComponent) new HumanAIComponent(agent));
      }
      else
      {
        if (oldController != Agent.ControllerType.AI || agent.HumanAIComponent == null)
          return;
        agent.RemoveComponent((AgentComponent) agent.HumanAIComponent);
      }
    }
  }
}
