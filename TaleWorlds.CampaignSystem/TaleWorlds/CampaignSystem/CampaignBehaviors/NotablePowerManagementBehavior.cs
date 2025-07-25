// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.NotablePowerManagementBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class NotablePowerManagementBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.RaidCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, RaidEventComponent>(this.OnRaidCompleted));
    }

    private void OnHeroCreated(Hero hero, bool isMaternal)
    {
      if (!hero.IsNotable)
        return;
      hero.AddPower((float) Campaign.Current.Models.NotablePowerModel.GetInitialPower());
    }

    private void DailyTickHero(Hero hero)
    {
      if (!hero.IsAlive || !hero.IsNotable)
        return;
      hero.AddPower(Campaign.Current.Models.NotablePowerModel.CalculateDailyPowerChangeForHero(hero).ResultNumber);
    }

    private void OnRaidCompleted(BattleSideEnum winnerSide, RaidEventComponent mapEvent)
    {
      foreach (Hero notable in (List<Hero>) mapEvent.MapEventSettlement.Notables)
        notable.AddPower(-5f);
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
