// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnChangeRomanticStateBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.LogEntries;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnChangeRomanticStateBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.RomanticStateChanged.AddNonSerializedListener((object) this, new Action<Hero, Hero, Romance.RomanceLevelEnum>(this.OnRomanticStateChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnRomanticStateChanged(Hero hero1, Hero hero2, Romance.RomanceLevelEnum level)
    {
      if (hero1 != Hero.MainHero && hero2 != Hero.MainHero && hero1.Clan.Leader != hero1 && hero2.Clan.Leader != hero2)
        return;
      LogEntry.AddLogEntry((LogEntry) new ChangeRomanticStateLogEntry(hero1, hero2, level));
    }
  }
}
