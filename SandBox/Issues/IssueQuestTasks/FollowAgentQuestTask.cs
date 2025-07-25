// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.IssueQuestTasks.FollowAgentQuestTask
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentBehaviors;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Issues.IssueQuestTasks
{
  public class FollowAgentQuestTask : QuestTaskBase
  {
    private Agent _followedAgent;
    private CharacterObject _followedAgentChar;
    private GameEntity _targetEntity;
    private Agent _targetAgent;

    public FollowAgentQuestTask(
      Agent followedAgent,
      GameEntity targetEntity,
      Action onSucceededAction,
      Action onCanceledAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction, onCanceledAction: onCanceledAction)
    {
      this._followedAgent = followedAgent;
      this._followedAgentChar = (CharacterObject) this._followedAgent.Character;
      this._targetEntity = targetEntity;
      this.StartAgentMovement();
    }

    public FollowAgentQuestTask(
      Agent followedAgent,
      Agent targetAgent,
      Action onSucceededAction,
      Action onCanceledAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction, onCanceledAction: onCanceledAction)
    {
      this._followedAgent = followedAgent;
      this._targetAgent = targetAgent;
      this.StartAgentMovement();
    }

    private void StartAgentMovement()
    {
      if ((NativeObject) this._targetEntity != (NativeObject) null)
      {
        ScriptBehavior.AddUsableMachineTarget(this._followedAgent, this._targetEntity.GetFirstScriptOfType<UsableMachine>());
      }
      else
      {
        if (this._targetAgent == null)
          return;
        ScriptBehavior.AddAgentTarget(this._followedAgent, this._targetAgent);
      }
    }

    public void MissionTick(float dt)
    {
      ScriptBehavior behavior = (ScriptBehavior) this._followedAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehavior<ScriptBehavior>();
      if ((behavior == null || !behavior.IsNearTarget(this._targetAgent) || (double) this._followedAgent.GetCurrentVelocity().LengthSquared >= 9.9999997473787516E-05 ? 0 : ((double) this._followedAgent.Position.DistanceSquared(Mission.Current.MainAgent.Position) < 16.0 ? 1 : 0)) == 0)
        return;
      this.Finish(QuestTaskBase.FinishStates.Success);
    }

    protected override void OnFinished()
    {
      this._followedAgent = (Agent) null;
      this._followedAgentChar = (CharacterObject) null;
      this._targetEntity = (GameEntity) null;
      this._targetAgent = (Agent) null;
    }

    public override void SetReferences()
    {
      CampaignEvents.MissionTickEvent.AddNonSerializedListener((object) this, new Action<float>(this.MissionTick));
    }
  }
}
