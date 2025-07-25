// Decompiled with JetBrains decompiler
// Type: SandBox.Conversation.ConversationMission
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Conversation.MissionLogics;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Conversation
{
  public static class ConversationMission
  {
    public static Agent OneToOneConversationAgent
    {
      get => Campaign.Current.ConversationManager.OneToOneConversationAgent as Agent;
    }

    public static CharacterObject OneToOneConversationCharacter
    {
      get => Campaign.Current.ConversationManager.OneToOneConversationCharacter;
    }

    public static IEnumerable<Agent> ConversationAgents
    {
      get
      {
        foreach (IAgent conversationAgent in (IEnumerable<IAgent>) Campaign.Current.ConversationManager.ConversationAgents)
          yield return conversationAgent as Agent;
      }
    }

    public static void StartConversationWithAgent(Agent agent)
    {
      Mission.Current.GetMissionBehavior<MissionConversationLogic>()?.StartConversation(agent, true);
    }
  }
}
