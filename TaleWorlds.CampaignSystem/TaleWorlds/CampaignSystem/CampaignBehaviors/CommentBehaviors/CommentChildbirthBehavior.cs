// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentChildbirthBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentChildbirthBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnGivenBirthEvent.AddNonSerializedListener((object) this, new Action<Hero, List<Hero>, int>(this.OnGivenBirthEvent));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnGivenBirthEvent(Hero mother, List<Hero> aliveChildren, int stillbornCount)
    {
      if (!mother.IsHumanPlayerCharacter && mother.Clan != Hero.MainHero.Clan)
        return;
      for (int index = 0; index < stillbornCount; ++index)
      {
        ChildbirthLogEntry childbirthLogEntry = new ChildbirthLogEntry(mother, (Hero) null);
        LogEntry.AddLogEntry((LogEntry) childbirthLogEntry);
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new ChildBornMapNotification((Hero) null, childbirthLogEntry.GetEncyclopediaText(), CampaignTime.Now));
      }
      foreach (Hero aliveChild in aliveChildren)
      {
        ChildbirthLogEntry childbirthLogEntry = new ChildbirthLogEntry(mother, aliveChild);
        LogEntry.AddLogEntry((LogEntry) childbirthLogEntry);
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new ChildBornMapNotification(aliveChild, childbirthLogEntry.GetEncyclopediaText(), CampaignTime.Now));
      }
    }
  }
}
