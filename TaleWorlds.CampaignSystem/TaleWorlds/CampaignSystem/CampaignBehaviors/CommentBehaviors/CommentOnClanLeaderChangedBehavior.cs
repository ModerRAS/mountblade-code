// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnClanLeaderChangedBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.LogEntries;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnClanLeaderChangedBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnClanLeaderChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(CommentOnClanLeaderChangedBehavior.OnClanLeaderChanged));
    }

    private static void OnClanLeaderChanged(Hero oldLeader, Hero newLeader)
    {
      LogEntry.AddLogEntry((LogEntry) new ClanLeaderChangedLogEntry(oldLeader, newLeader));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
