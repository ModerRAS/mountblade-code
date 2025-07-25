// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignAgentComponent
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class CampaignAgentComponent : AgentComponent
  {
    public AgentNavigator AgentNavigator { get; private set; }

    public PartyBase OwnerParty => (PartyBase) this.Agent.Origin?.BattleCombatant;

    public CampaignAgentComponent(Agent agent)
      : base(agent)
    {
    }

    public AgentNavigator CreateAgentNavigator(LocationCharacter locationCharacter)
    {
      this.AgentNavigator = new AgentNavigator(this.Agent, locationCharacter);
      return this.AgentNavigator;
    }

    public AgentNavigator CreateAgentNavigator()
    {
      this.AgentNavigator = new AgentNavigator(this.Agent);
      return this.AgentNavigator;
    }

    public void OnAgentRemoved(Agent agent) => this.AgentNavigator?.OnAgentRemoved(agent);

    public override void OnTickAsAI(float dt) => this.AgentNavigator?.Tick(dt);

    public override float GetMoraleDecreaseConstant()
    {
      if (this.OwnerParty?.MapEvent == null || !this.OwnerParty.MapEvent.IsSiegeAssault)
        return 1f;
      return this.OwnerParty.MapEvent.AttackerSide.Parties.FindIndexQ<MapEventParty>((Func<MapEventParty, bool>) (p => p.Party == this.OwnerParty)) < 0 ? 0.5f : 0.33f;
    }

    public override float GetMoraleAddition()
    {
      float moraleAddition = 0.0f;
      if (this.OwnerParty?.MapEvent != null)
      {
        float partySideStrength;
        float opposingSideStrength;
        this.OwnerParty.MapEvent.GetStrengthsRelativeToParty(this.OwnerParty.Side, out partySideStrength, out opposingSideStrength);
        if (this.OwnerParty.IsMobile)
        {
          float num = (float) (((double) this.OwnerParty.MobileParty.Morale - 50.0) / 2.0);
          moraleAddition += num;
        }
        float num1 = (float) ((double) partySideStrength / ((double) partySideStrength + (double) opposingSideStrength) * 10.0 - 5.0);
        moraleAddition += num1;
      }
      return moraleAddition;
    }

    public override void OnStopUsingGameObject()
    {
      if (!this.Agent.IsAIControlled)
        return;
      this.AgentNavigator?.OnStopUsingGameObject();
    }
  }
}
