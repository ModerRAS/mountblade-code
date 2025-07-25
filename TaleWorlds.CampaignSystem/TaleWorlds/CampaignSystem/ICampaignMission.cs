// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ICampaignMission
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public interface ICampaignMission
  {
    GameState State { get; }

    IMissionTroopSupplier AgentSupplier { get; }

    Location Location { get; set; }

    Alley LastVisitedAlley { get; set; }

    MissionMode Mode { get; }

    void SetMissionMode(MissionMode newMode, bool atStart);

    void OnCloseEncounterMenu();

    bool AgentLookingAtAgent(IAgent agent1, IAgent agent2);

    void OnCharacterLocationChanged(
      LocationCharacter locationCharacter,
      Location fromLocation,
      Location toLocation);

    void OnProcessSentence();

    void OnConversationContinue();

    bool CheckIfAgentCanFollow(IAgent agent);

    void AddAgentFollowing(IAgent agent);

    bool CheckIfAgentCanUnFollow(IAgent agent);

    void RemoveAgentFollowing(IAgent agent);

    void OnConversationPlay(
      string idleActionId,
      string idleFaceAnimId,
      string reactionId,
      string reactionFaceAnimId,
      string soundPath);

    void OnConversationStart(IAgent agent, bool setActionsInstantly);

    void OnConversationEnd(IAgent agent);

    void EndMission();
  }
}
