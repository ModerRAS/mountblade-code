// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnChangeVillageStateBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnChangeVillageStateBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.VillageStateChanged.AddNonSerializedListener((object) this, new Action<Village, Village.VillageStates, Village.VillageStates, MobileParty>(this.OnVillageStateChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnVillageStateChanged(
      Village village,
      Village.VillageStates oldState,
      Village.VillageStates newState,
      MobileParty raiderParty)
    {
      if (newState == Village.VillageStates.Normal || raiderParty == null || raiderParty.LeaderHero != Hero.MainHero && village.Owner.Settlement.OwnerClan.Leader != Hero.MainHero && !village.Settlement.MapFaction.IsKingdomFaction && !raiderParty.MapFaction.IsKingdomFaction)
        return;
      LogEntry.AddLogEntry((LogEntry) new VillageStateChangedLogEntry(village, oldState, newState, raiderParty));
    }
  }
}
