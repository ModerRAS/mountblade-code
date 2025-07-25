// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CharacterDevelopmentCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CharacterDevelopmentCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
    }

    private void DailyTickHero(Hero hero)
    {
      if (hero.IsChild || !hero.IsAlive || hero.Clan == Clan.PlayerClan && (hero == Hero.MainHero || !CampaignOptions.AutoAllocateClanMemberPerks) || hero.PartyBelongedTo?.MapEvent != null)
        return;
      hero.HeroDeveloper.DevelopCharacterStats();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
