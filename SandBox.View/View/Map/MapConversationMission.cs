// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapConversationMission
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.View.Map
{
  public class MapConversationMission : ICampaignMission
  {
    private Queue<MapConversationMission.ConversationPlayArgs> _conversationPlayQueue;

    GameState ICampaignMission.State => GameStateManager.Current.ActiveState;

    IMissionTroopSupplier ICampaignMission.AgentSupplier => (IMissionTroopSupplier) null;

    Location ICampaignMission.Location { get; set; }

    Alley ICampaignMission.LastVisitedAlley { get; set; }

    MissionMode ICampaignMission.Mode => MissionMode.Conversation;

    public MapConversationTableau ConversationTableau { get; private set; }

    public MapConversationMission()
    {
      CampaignMission.Current = (ICampaignMission) this;
      this._conversationPlayQueue = new Queue<MapConversationMission.ConversationPlayArgs>();
    }

    public void SetConversationTableau(MapConversationTableau tableau)
    {
      this.ConversationTableau = tableau;
      this.PlayCachedConversations();
    }

    public void Tick(float dt) => this.PlayCachedConversations();

    public void OnFinalize()
    {
      this.ConversationTableau = (MapConversationTableau) null;
      this._conversationPlayQueue = (Queue<MapConversationMission.ConversationPlayArgs>) null;
      CampaignMission.Current = (ICampaignMission) null;
    }

    private void PlayCachedConversations()
    {
      if (this.ConversationTableau == null)
        return;
      while (this._conversationPlayQueue.Count > 0)
      {
        MapConversationMission.ConversationPlayArgs conversationPlayArgs = this._conversationPlayQueue.Dequeue();
        this.ConversationTableau.OnConversationPlay(conversationPlayArgs.IdleActionId, conversationPlayArgs.IdleFaceAnimId, conversationPlayArgs.ReactionId, conversationPlayArgs.ReactionFaceAnimId, conversationPlayArgs.SoundPath);
      }
    }

    void ICampaignMission.OnConversationPlay(
      string idleActionId,
      string idleFaceAnimId,
      string reactionId,
      string reactionFaceAnimId,
      string soundPath)
    {
      if (this.ConversationTableau != null)
        this.ConversationTableau.OnConversationPlay(idleActionId, idleFaceAnimId, reactionId, reactionFaceAnimId, soundPath);
      else
        this._conversationPlayQueue.Enqueue(new MapConversationMission.ConversationPlayArgs(idleActionId, idleFaceAnimId, reactionId, reactionFaceAnimId, soundPath));
    }

    void ICampaignMission.AddAgentFollowing(IAgent agent)
    {
    }

    bool ICampaignMission.AgentLookingAtAgent(IAgent agent1, IAgent agent2) => false;

    bool ICampaignMission.CheckIfAgentCanFollow(IAgent agent) => false;

    bool ICampaignMission.CheckIfAgentCanUnFollow(IAgent agent) => false;

    void ICampaignMission.EndMission()
    {
    }

    void ICampaignMission.OnCharacterLocationChanged(
      LocationCharacter locationCharacter,
      Location fromLocation,
      Location toLocation)
    {
    }

    void ICampaignMission.OnCloseEncounterMenu()
    {
    }

    void ICampaignMission.OnConversationContinue()
    {
    }

    void ICampaignMission.OnConversationEnd(IAgent agent)
    {
    }

    void ICampaignMission.OnConversationStart(IAgent agent, bool setActionsInstantly)
    {
    }

    void ICampaignMission.OnProcessSentence()
    {
    }

    void ICampaignMission.RemoveAgentFollowing(IAgent agent)
    {
    }

    void ICampaignMission.SetMissionMode(MissionMode newMode, bool atStart)
    {
    }

    public struct ConversationPlayArgs
    {
      public readonly string IdleActionId;
      public readonly string IdleFaceAnimId;
      public readonly string ReactionId;
      public readonly string ReactionFaceAnimId;
      public readonly string SoundPath;

      public ConversationPlayArgs(
        string idleActionId,
        string idleFaceAnimId,
        string reactionId,
        string reactionFaceAnimId,
        string soundPath)
      {
        this.IdleActionId = idleActionId;
        this.IdleFaceAnimId = idleFaceAnimId;
        this.ReactionId = reactionId;
        this.ReactionFaceAnimId = reactionFaceAnimId;
        this.SoundPath = soundPath;
      }
    }
  }
}
