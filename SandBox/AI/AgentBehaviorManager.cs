// Decompiled with JetBrains decompiler
// Type: SandBox.AI.AgentBehaviorManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentBehaviors;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.AI
{
  public class AgentBehaviorManager : IAgentBehaviorManager
  {
    public void AddQuestCharacterBehaviors(IAgent agent)
    {
      BehaviorSets.AddQuestCharacterBehaviors(agent);
    }

    void IAgentBehaviorManager.AddWandererBehaviors(IAgent agent)
    {
      BehaviorSets.AddWandererBehaviors(agent);
    }

    void IAgentBehaviorManager.AddOutdoorWandererBehaviors(IAgent agent)
    {
      BehaviorSets.AddOutdoorWandererBehaviors(agent);
    }

    void IAgentBehaviorManager.AddIndoorWandererBehaviors(IAgent agent)
    {
      BehaviorSets.AddIndoorWandererBehaviors(agent);
    }

    void IAgentBehaviorManager.AddFixedCharacterBehaviors(IAgent agent)
    {
      BehaviorSets.AddFixedCharacterBehaviors(agent);
    }

    void IAgentBehaviorManager.AddAmbushPlayerBehaviors(IAgent agent)
    {
      BehaviorSets.AddAmbushPlayerBehaviors(agent);
    }

    void IAgentBehaviorManager.AddStandGuardBehaviors(IAgent agent)
    {
      BehaviorSets.AddStandGuardBehaviors(agent);
    }

    void IAgentBehaviorManager.AddPatrollingGuardBehaviors(IAgent agent)
    {
      BehaviorSets.AddPatrollingGuardBehaviors(agent);
    }

    void IAgentBehaviorManager.AddCompanionBehaviors(IAgent agent)
    {
      BehaviorSets.AddCompanionBehaviors(agent);
    }

    void IAgentBehaviorManager.AddBodyguardBehaviors(IAgent agent)
    {
      BehaviorSets.AddBodyguardBehaviors(agent);
    }

    public void AddFirstCompanionBehavior(IAgent agent)
    {
      BehaviorSets.AddFirstCompanionBehavior(agent);
    }
  }
}
