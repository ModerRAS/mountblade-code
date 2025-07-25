// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnDestroyMobilePartyBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnDestroyMobilePartyBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      Hero leaderHero = destroyerParty?.LeaderHero;
      IFaction mapFaction = destroyerParty?.MapFaction;
      Hero mainHero = Hero.MainHero;
      if (leaderHero != mainHero && mobileParty.LeaderHero != Hero.MainHero && (mapFaction == null || mobileParty.MapFaction == null || !mapFaction.IsKingdomFaction || !mobileParty.MapFaction.IsKingdomFaction))
        return;
      LogEntry.AddLogEntry((LogEntry) new DestroyMobilePartyLogEntry(mobileParty, destroyerParty));
    }
  }
}
