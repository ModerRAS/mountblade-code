// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnLeaveFactionBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.LogEntries;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnLeaveFactionBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanLeaveKingdom));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnClanLeaveKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      LogEntry.AddLogEntry((LogEntry) new ClanChangeKingdomLogEntry(clan, oldKingdom, newKingdom, detail == ChangeKingdomAction.ChangeKingdomActionDetail.LeaveWithRebellion));
    }
  }
}
