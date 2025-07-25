// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.IAgentBehaviorManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public interface IAgentBehaviorManager
  {
    void AddQuestCharacterBehaviors(IAgent agent);

    void AddWandererBehaviors(IAgent agent);

    void AddOutdoorWandererBehaviors(IAgent agent);

    void AddIndoorWandererBehaviors(IAgent agent);

    void AddFixedCharacterBehaviors(IAgent agent);

    void AddAmbushPlayerBehaviors(IAgent agent);

    void AddStandGuardBehaviors(IAgent agent);

    void AddPatrollingGuardBehaviors(IAgent agent);

    void AddCompanionBehaviors(IAgent agent);

    void AddBodyguardBehaviors(IAgent agent);

    void AddFirstCompanionBehavior(IAgent agent);
  }
}
