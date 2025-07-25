// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Conversation.MapConversationAgent
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Conversation
{
  public class MapConversationAgent : IAgent
  {
    private CharacterObject _characterObject;
    public bool DeliveredLine;

    public MapConversationAgent(CharacterObject characterObject)
    {
      this._characterObject = characterObject;
    }

    public BasicCharacterObject Character => (BasicCharacterObject) this._characterObject;

    public bool IsEnemyOf(IAgent agent) => false;

    public bool IsFriendOf(IAgent agent) => true;

    public AgentState State => AgentState.Active;

    public IMissionTeam Team => (IMissionTeam) null;

    public IAgentOriginBase Origin => (IAgentOriginBase) null;

    public float Age => this.Character.Age;

    public bool IsActive() => true;

    public void SetAsConversationAgent(bool set)
    {
    }
  }
}
