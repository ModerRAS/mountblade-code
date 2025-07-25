// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BackstoryCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class BackstoryCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      Hero heroObject1 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_1_7").HeroObject;
      Hero heroObject2 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_1_1").HeroObject;
      LogEntry.AddLogEntry((LogEntry) new CharacterInsultedLogEntry(heroObject1, heroObject2, (CharacterObject) null, ActionNotes.ValorStrategyQuarrel), CampaignTime.Years(1075f) + CampaignTime.Weeks(3f) + CampaignTime.Days(2f));
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(heroObject1, heroObject2, -50, false);
      Hero heroObject3 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_4_1").HeroObject;
      Hero heroObject4 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_4_16").HeroObject;
      Hero wrongedLord = heroObject4;
      LogEntry.AddLogEntry((LogEntry) new OverruleInfluenceLogEntry(heroObject3, wrongedLord), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      Settlement settlement = Game.Current.ObjectManager.GetObject<Settlement>("town_V6");
      LogEntry.AddLogEntry((LogEntry) new SettlementClaimedLogEntry(heroObject4, settlement), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      ClaimSettlementAction.Apply(heroObject4, settlement);
      Hero heroObject5 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_2_1").HeroObject;
      Hero heroObject6 = Game.Current.ObjectManager.GetObject<CharacterObject>("dead_lord_2_2").HeroObject;
      LogEntry.AddLogEntry((LogEntry) new CharacterKilledLogEntry(heroObject6, heroObject5, KillCharacterAction.KillCharacterActionDetail.Murdered), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      if (!heroObject6.Clan.IsMapFaction && heroObject6.Clan.Leader != null)
        ChangeRelationAction.ApplyRelationChangeBetweenHeroes(heroObject5, heroObject6.Clan.Leader, -75, false);
      Hero heroObject7 = Game.Current.ObjectManager.GetObject<CharacterObject>("lord_3_5").HeroObject;
      Hero nimr = Game.Current.ObjectManager.GetObject<CharacterObject>("dead_lord_3_1").HeroObject;
      LogEntry.AddLogEntry((LogEntry) new CharacterKilledLogEntry(nimr, heroObject7, KillCharacterAction.KillCharacterActionDetail.Murdered), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      foreach (Hero hero in (List<Hero>) nimr.Clan.Heroes)
      {
        if (hero.IsLord && (double) hero.Age < 35.0 && !hero.IsFemale && hero.GetTraitLevel(DefaultTraits.Mercy) < 1)
          LogEntry.AddLogEntry((LogEntry) new CharacterInsultedLogEntry(hero, heroObject7, nimr.CharacterObject, ActionNotes.VengeanceQuarrel), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      }
      foreach (Hero insultee in Hero.DeadOrDisabledHeroes.Where<Hero>((Func<Hero, bool>) (x => x.Clan == nimr.Clan)))
      {
        if (insultee.IsLord && (double) insultee.Age < 35.0 && !insultee.IsFemale && insultee.GetTraitLevel(DefaultTraits.Mercy) < 1)
          LogEntry.AddLogEntry((LogEntry) new CharacterInsultedLogEntry(insultee, heroObject7, nimr.CharacterObject, ActionNotes.VengeanceQuarrel), CampaignTime.Years(1080f) + CampaignTime.Weeks(4f) + CampaignTime.Days(2f));
      }
      if (nimr.Clan.Leader == null)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(heroObject7, nimr.Clan.Leader, -75, false);
    }
  }
}
