// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionConversationCameraView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionConversationCameraView : MissionView
  {
    private MissionMainAgentController _missionMainAgentController;
    private Agent _speakerAgent;
    private Agent _listenerAgent;

    public override void AfterStart()
    {
      this._missionMainAgentController = this.Mission.GetMissionBehavior<MissionMainAgentController>();
    }

    public override bool UpdateOverridenCamera(float dt)
    {
      switch (this.Mission.Mode)
      {
        case MissionMode.Conversation:
        case MissionMode.Barter:
          if (!this.MissionScreen.IsCheatGhostMode)
          {
            this.UpdateAgentLooksForConversation();
            break;
          }
          goto default;
        default:
          if (this._missionMainAgentController.CustomLookDir.IsNonZero)
          {
            this._missionMainAgentController.CustomLookDir = Vec3.Zero;
            break;
          }
          break;
      }
      return false;
    }

    private void UpdateAgentLooksForConversation()
    {
      Agent agent = (Agent) null;
      ConversationManager conversationManager = Campaign.Current.ConversationManager;
      if (conversationManager.ConversationAgents != null && conversationManager.ConversationAgents.Count > 0)
      {
        this._speakerAgent = (Agent) conversationManager.SpeakerAgent;
        this._listenerAgent = (Agent) conversationManager.ListenerAgent;
        agent = Agent.Main.GetLookAgent();
        if (this._speakerAgent == null)
          return;
        foreach (IAgent conversationAgent in (IEnumerable<IAgent>) conversationManager.ConversationAgents)
        {
          if (conversationAgent != this._speakerAgent)
            this.MakeAgentLookToSpeaker((Agent) conversationAgent);
        }
        this.MakeSpeakerLookToListener();
      }
      this.SetFocusedObjectForCameraFocus();
      if (Agent.Main.GetLookAgent() == agent || this._speakerAgent == null)
        return;
      this.SpeakerAgentIsChanged();
    }

    private void SpeakerAgentIsChanged() => Mission.Current.ConversationCharacterChanged();

    private void SetFocusedObjectForCameraFocus()
    {
      if (this._speakerAgent == Agent.Main)
      {
        this._missionMainAgentController.InteractionComponent.SetCurrentFocusedObject((IFocusable) this._listenerAgent, (IFocusable) null, true);
        this._missionMainAgentController.CustomLookDir = (this._listenerAgent.Position - Agent.Main.Position).NormalizedCopy();
        Agent.Main.SetLookAgent(this._listenerAgent);
      }
      else
      {
        this._missionMainAgentController.InteractionComponent.SetCurrentFocusedObject((IFocusable) this._speakerAgent, (IFocusable) null, true);
        this._missionMainAgentController.CustomLookDir = (this._speakerAgent.Position - Agent.Main.Position).NormalizedCopy();
        Agent.Main.SetLookAgent(this._speakerAgent);
      }
    }

    private void MakeAgentLookToSpeaker(Agent agent)
    {
      Vec3 position1 = agent.Position;
      Vec3 position2 = this._speakerAgent.Position;
      position1.z = agent.AgentVisuals.GetGlobalStableEyePoint(true).z;
      position2.z = this._speakerAgent.AgentVisuals.GetGlobalStableEyePoint(true).z;
      agent.SetLookToPointOfInterest(this._speakerAgent.AgentVisuals.GetGlobalStableEyePoint(true));
      agent.AgentVisuals.GetSkeleton().ForceUpdateBoneFrames();
      agent.LookDirection = (position2 - position1).NormalizedCopy();
      agent.SetLookAgent(this._speakerAgent);
    }

    private void MakeSpeakerLookToListener()
    {
      Vec3 position1 = this._speakerAgent.Position;
      Vec3 position2 = this._listenerAgent.Position;
      position1.z = this._speakerAgent.AgentVisuals.GetGlobalStableEyePoint(true).z;
      position2.z = this._listenerAgent.AgentVisuals.GetGlobalStableEyePoint(true).z;
      this._speakerAgent.SetLookToPointOfInterest(this._listenerAgent.AgentVisuals.GetGlobalStableEyePoint(true));
      this._speakerAgent.AgentVisuals.GetSkeleton().ForceUpdateBoneFrames();
      this._speakerAgent.LookDirection = (position2 - position1).NormalizedCopy();
      this._speakerAgent.SetLookAgent(this._listenerAgent);
    }

    private void SetConversationLook(Agent agent1, Agent agent2)
    {
      Vec3 position1 = agent2.Position;
      Vec3 position2 = agent1.Position;
      agent2.AgentVisuals.GetSkeleton().ForceUpdateBoneFrames();
      agent1.AgentVisuals.GetSkeleton().ForceUpdateBoneFrames();
      position1.z = agent2.AgentVisuals.GetGlobalStableEyePoint(true).z;
      position2.z = agent1.AgentVisuals.GetGlobalStableEyePoint(true).z;
      agent1.SetLookToPointOfInterest(agent2.AgentVisuals.GetGlobalStableEyePoint(true));
      agent2.SetLookToPointOfInterest(agent1.AgentVisuals.GetGlobalStableEyePoint(true));
      agent1.LookDirection = (position2 - position1).NormalizedCopy();
      agent2.LookDirection = (position1 - position2).NormalizedCopy();
      agent2.SetLookAgent(agent1);
      agent1.SetLookAgent(agent2);
    }
  }
}
