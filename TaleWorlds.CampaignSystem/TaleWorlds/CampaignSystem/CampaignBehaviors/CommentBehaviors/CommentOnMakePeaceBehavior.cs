// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnMakePeaceBehavior
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
  public class CommentOnMakePeaceBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnMakePeace(
      IFaction faction1,
      IFaction faction2,
      MakePeaceAction.MakePeaceDetail detail)
    {
      MakePeaceLogEntry makePeaceLogEntry = new MakePeaceLogEntry(faction1, faction2);
      LogEntry.AddLogEntry((LogEntry) makePeaceLogEntry);
      if (faction2 != Hero.MainHero.MapFaction && (faction1 != Hero.MainHero.MapFaction || detail == MakePeaceAction.MakePeaceDetail.ByKingdomDecision))
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new PeaceMapNotification(faction1, faction2, makePeaceLogEntry.GetEncyclopediaText()));
    }
  }
}
