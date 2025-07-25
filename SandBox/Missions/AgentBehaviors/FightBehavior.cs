// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.FightBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.MissionLogics;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class FightBehavior : AgentBehavior
  {
    private readonly MissionAgentHandler _missionAgentHandler;

    public FightBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
      if (this.OwnerAgent.HumanAIComponent != null)
        return;
      this.OwnerAgent.AddComponent((AgentComponent) new HumanAIComponent(this.OwnerAgent));
    }

    public override float GetAvailability(bool isSimulation)
    {
      return !MissionFightHandler.IsAgentAggressive(this.OwnerAgent) ? 0.1f : 1f;
    }

    protected override void OnActivate()
    {
      TextObject textObject = new TextObject("{=!}{p0} {p1} activate alarmed behavior group.");
      textObject.SetTextVariable("p0", this.OwnerAgent.Name.ToString());
      textObject.SetTextVariable("p1", this.OwnerAgent.Index.ToString());
    }

    protected override void OnDeactivate()
    {
      TextObject textObject = new TextObject("{=!}{p0} {p1} deactivate fight behavior.");
      textObject.SetTextVariable("p0", this.OwnerAgent.Name.ToString());
      textObject.SetTextVariable("p1", this.OwnerAgent.Index.ToString());
    }

    public override string GetDebugInfo() => "Fight";
  }
}
