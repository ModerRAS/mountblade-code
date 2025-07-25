// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.BattleSurgeonLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class BattleSurgeonLogic : MissionLogic
  {
    private Dictionary<string, Agent> _surgeonAgents = new Dictionary<string, Agent>();

    protected override void OnGetAgentState(Agent agent, bool usedSurgery)
    {
      if (!usedSurgery)
        return;
      PartyBase ownerParty = agent.GetComponent<CampaignAgentComponent>().OwnerParty;
      Agent agent1;
      if (ownerParty == null || !this._surgeonAgents.TryGetValue(ownerParty.Id, out agent1) || agent1.State != AgentState.Active)
        return;
      SkillLevelingManager.OnSurgeryApplied(ownerParty.MobileParty, true, ((CharacterObject) agent.Character).Tier);
    }

    public override void OnAgentCreated(Agent agent)
    {
      base.OnAgentCreated(agent);
      CharacterObject character = (CharacterObject) agent.Character;
      if (character?.HeroObject?.PartyBelongedTo == null || character.HeroObject != character.HeroObject.PartyBelongedTo.EffectiveSurgeon)
        return;
      string id = character.HeroObject.PartyBelongedTo.Party.Id;
      if (this._surgeonAgents.ContainsKey(id))
        this._surgeonAgents.Remove(id);
      this._surgeonAgents.Add(id, agent);
    }
  }
}
