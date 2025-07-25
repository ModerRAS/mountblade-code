// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnDeclareWarBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnDeclareWarBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail)
    {
      DeclareWarLogEntry declareWarLogEntry = new DeclareWarLogEntry(faction1, faction2);
      LogEntry.AddLogEntry((LogEntry) declareWarLogEntry);
      if (faction2 != Hero.MainHero.MapFaction && (faction1 != Hero.MainHero.MapFaction || detail == DeclareWarAction.DeclareWarDetail.CausedByKingdomDecision))
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new WarMapNotification(faction1, faction2, declareWarLogEntry.GetEncyclopediaText()));
    }
  }
}
