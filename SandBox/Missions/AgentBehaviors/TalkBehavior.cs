// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.TalkBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation.MissionLogics;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class TalkBehavior : AgentBehavior
  {
    private bool _doNotMove;
    private bool _startConversation;

    public TalkBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
      this._startConversation = true;
      this._doNotMove = true;
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (!this._startConversation || this.Mission.MainAgent == null || !this.Mission.MainAgent.IsActive() || this.Mission.Mode == MissionMode.Conversation || this.Mission.Mode == MissionMode.Battle || this.Mission.Mode == MissionMode.Barter)
        return;
      float distanceToUsable = this.OwnerAgent.GetInteractionDistanceToUsable((IUsable) this.Mission.MainAgent);
      if ((double) this.OwnerAgent.Position.DistanceSquared(this.Mission.MainAgent.Position) < ((double) distanceToUsable + 3.0) * ((double) distanceToUsable + 3.0) && this.Navigator.CanSeeAgent(this.Mission.MainAgent))
      {
        this.Navigator.SetTargetFrame(this.OwnerAgent.GetWorldPosition(), this.OwnerAgent.Frame.rotation.f.AsVec2.RotationInRadians, flags: Agent.AIScriptedFrameFlags.DoNotRun);
        MissionConversationLogic missionBehavior = this.Mission.GetMissionBehavior<MissionConversationLogic>();
        if (missionBehavior == null || !missionBehavior.IsReadyForConversation)
          return;
        missionBehavior.OnAgentInteraction(this.Mission.MainAgent, this.OwnerAgent);
        this._startConversation = false;
      }
      else
      {
        if (this._doNotMove)
          return;
        this.Navigator.SetTargetFrame(Agent.Main.GetWorldPosition(), Agent.Main.Frame.rotation.f.AsVec2.RotationInRadians, flags: Agent.AIScriptedFrameFlags.DoNotRun);
      }
    }

    public override float GetAvailability(bool isSimulation)
    {
      if (isSimulation || !this._startConversation || this.Mission.MainAgent == null || !this.Mission.MainAgent.IsActive())
        return 0.0f;
      float num = this.OwnerAgent.GetInteractionDistanceToUsable((IUsable) this.Mission.MainAgent) + 3f;
      return (double) this.OwnerAgent.Position.DistanceSquared(this.Mission.MainAgent.Position) < (double) num * (double) num && this.Mission.Mode != MissionMode.Conversation && !this.Mission.MainAgent.IsEnemyOf(this.OwnerAgent) ? 1f : 0.0f;
    }

    public override string GetDebugInfo() => "Talk";

    protected override void OnDeactivate()
    {
      this.Navigator.ClearTarget();
      this.Disable();
    }

    public void Disable()
    {
      this._startConversation = false;
      this._doNotMove = true;
    }

    public void Enable(bool doNotMove)
    {
      this._startConversation = true;
      this._doNotMove = doNotMove;
    }
  }
}
