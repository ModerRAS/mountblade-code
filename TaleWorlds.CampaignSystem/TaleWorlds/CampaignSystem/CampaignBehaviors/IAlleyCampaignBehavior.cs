// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IAlleyCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IAlleyCampaignBehavior : ICampaignBehavior
  {
    bool GetIsAlleyUnderAttack(Alley alley);

    int GetPlayerOwnedAlleyTroopCount(Alley alley);

    int GetResponseTimeLeftForAttackInDays(Alley alley);

    void AbandonAlleyFromClanMenu(Alley alley);

    Hero GetAssignedClanMemberOfAlley(Alley alley);

    bool IsHeroAlleyLeaderOfAnyPlayerAlley(Hero hero);

    List<Hero> GetAllAssignedClanMembersForOwnedAlleys();

    void ChangeAlleyMember(Alley alley, Hero newAlleyLead);

    void OnPlayerRetreatedFromMission();

    void OnPlayerDiedInMission();
  }
}
