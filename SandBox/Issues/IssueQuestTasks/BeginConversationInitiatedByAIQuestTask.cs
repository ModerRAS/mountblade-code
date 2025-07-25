// Decompiled with JetBrains decompiler
// Type: SandBox.Issues.IssueQuestTasks.BeginConversationInitiatedByAIQuestTask
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Issues.IssueQuestTasks
{
  public class BeginConversationInitiatedByAIQuestTask : QuestTaskBase
  {
    private bool _conversationOpened;
    private Agent _conversationAgent;

    public BeginConversationInitiatedByAIQuestTask(
      Agent agent,
      Action onSucceededAction,
      Action onFailedAction,
      Action onCanceledAction,
      DialogFlow dialogFlow = null)
      : base(dialogFlow, onSucceededAction, onFailedAction, onCanceledAction)
    {
      this._conversationAgent = agent;
      this.IsLogged = false;
    }

    public void MissionTick(float dt)
    {
      if (Mission.Current.MainAgent == null || this._conversationAgent == null || this._conversationOpened || Mission.Current.Mode == MissionMode.Conversation)
        return;
      this.OpenConversation(this._conversationAgent);
    }

    private void OpenConversation(Agent agent)
    {
      ConversationMission.StartConversationWithAgent(agent);
    }

    protected override void OnFinished() => this._conversationAgent = (Agent) null;

    public override void SetReferences()
    {
      CampaignEvents.MissionTickEvent.AddNonSerializedListener((object) this, new Action<float>(this.MissionTick));
    }
  }
}
