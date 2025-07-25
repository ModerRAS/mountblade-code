// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnCharacterKilledBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnCharacterKilledBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification)
    {
      if (victim.Clan == null || Clan.BanditFactions.Contains<Clan>(victim.Clan))
        return;
      CharacterKilledLogEntry characterKilledLogEntry = new CharacterKilledLogEntry(victim, killer, detail);
      LogEntry.AddLogEntry((LogEntry) characterKilledLogEntry);
      if (!this.IsRelatedToPlayer(victim))
        return;
      Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new DeathMapNotification(victim, killer, characterKilledLogEntry.GetEncyclopediaText(), detail, CampaignTime.Now));
    }

    private bool IsRelatedToPlayer(Hero victim)
    {
      bool player = victim == Hero.MainHero.Mother || victim == Hero.MainHero.Father || victim == Hero.MainHero.Spouse || victim == Hero.MainHero;
      if (!player)
      {
        foreach (Hero child in (List<Hero>) Hero.MainHero.Children)
        {
          if (victim == child)
          {
            player = true;
            break;
          }
        }
      }
      if (!player)
      {
        foreach (Hero sibling in Hero.MainHero.Siblings)
        {
          if (victim == sibling)
          {
            player = true;
            break;
          }
        }
      }
      return player;
    }
  }
}
