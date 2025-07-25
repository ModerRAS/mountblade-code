// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BannerCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class BannerCampaignBehavior : CampaignBehaviorBase
  {
    private const int BannerLevel1CooldownDays = 4;
    private const int BannerLevel2CooldownDays = 8;
    private const int BannerLevel3CooldownDays = 12;
    private const float BannerItemUpdateChance = 0.1f;
    private Dictionary<Hero, CampaignTime> _heroNextBannerLootTime = new Dictionary<Hero, CampaignTime>();

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.GiveBannersToHeroes));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.CollectLootsEvent.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>, ItemRoster, MBList<TroopRosterElement>, float>(this.CollectLoots));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.OnCompanionClanCreatedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnCompanionClanCreated));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<Hero, CampaignTime>>("_heroNextBannerLootTime", ref this._heroNextBannerLootTime);
    }

    private void OnNewGameCreated(CampaignGameStarter campaignGameStarter)
    {
      this.GiveBannersToHeroes();
    }

    private void GiveBannersToHeroes()
    {
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (this.CanBannerBeGivenToHero(allAliveHero))
        {
          ItemObject bannerItemForHero = BannerHelper.GetRandomBannerItemForHero(allAliveHero);
          if (bannerItemForHero != null)
            allAliveHero.BannerItem = new EquipmentElement(bannerItemForHero);
        }
      }
    }

    private void DailyTickHero(Hero hero)
    {
      if (hero.Clan == Clan.PlayerClan)
        return;
      EquipmentElement bannerItem = hero.BannerItem;
      BannerItemModel bannerItemModel = Campaign.Current.Models.BannerItemModel;
      if (bannerItem.IsInvalid() || !bannerItemModel.CanBannerBeUpdated(bannerItem.Item) || (double) MBRandom.RandomFloat >= 0.10000000149011612)
        return;
      int bannerLevel = ((BannerComponent) bannerItem.Item.ItemComponent).BannerLevel;
      int itemLevelForHero = bannerItemModel.GetBannerItemLevelForHero(hero);
      int num = itemLevelForHero;
      if (bannerLevel == num)
        return;
      ItemObject upgradeBannerForHero = this.GetUpgradeBannerForHero(hero, itemLevelForHero);
      if (upgradeBannerForHero == null)
        return;
      hero.BannerItem = new EquipmentElement(upgradeBannerForHero);
    }

    private ItemObject GetUpgradeBannerForHero(Hero hero, int upgradeBannerLevel)
    {
      ItemObject itemObject = hero.BannerItem.Item;
      foreach (ItemObject rewardBannerItem in Campaign.Current.Models.BannerItemModel.GetPossibleRewardBannerItems())
      {
        BannerComponent itemComponent = (BannerComponent) rewardBannerItem.ItemComponent;
        if (rewardBannerItem.Culture == itemObject.Culture && itemComponent.BannerLevel == upgradeBannerLevel && itemComponent.BannerEffect == ((BannerComponent) itemObject.ItemComponent).BannerEffect)
          return rewardBannerItem;
      }
      return BannerHelper.GetRandomBannerItemForHero(hero);
    }

    private void CollectLoots(
      MapEvent mapEvent,
      PartyBase party,
      Dictionary<PartyBase, ItemRoster> loot,
      ItemRoster lootedItems,
      MBList<TroopRosterElement> lootedCasualties,
      float lootAmount)
    {
      if (party != PartyBase.MainParty || !mapEvent.IsPlayerMapEvent || mapEvent.WinningSide != mapEvent.PlayerSide)
        return;
      ItemObject[] itemObjectArray = new ItemObject[2];
      if (mapEvent.IsHideoutBattle)
        itemObjectArray[0] = this.GetBannerRewardForHideoutBattle();
      else if (mapEvent.AttackerSide.MissionSide == mapEvent.PlayerSide && mapEvent.IsSiegeAssault)
        itemObjectArray[0] = this.GetBannerRewardForCapturingFortification(mapEvent.MapEventSettlement);
      itemObjectArray[1] = this.GetBannerRewardForDefeatingNoble(mapEvent, lootedCasualties);
      for (int index = 0; index < itemObjectArray.Length; ++index)
      {
        ItemObject itemObject = itemObjectArray[index];
        if (itemObject != null)
          lootedItems.AddToCounts(itemObject, 1);
      }
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (!this.CanBannerBeGivenToHero(hero))
        return;
      ItemObject bannerItemForHero = BannerHelper.GetRandomBannerItemForHero(hero);
      if (bannerItemForHero == null)
        return;
      hero.BannerItem = new EquipmentElement(bannerItemForHero);
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally = false)
    {
      if (!this.CanBannerBeGivenToHero(hero))
        return;
      ItemObject bannerItemForHero = BannerHelper.GetRandomBannerItemForHero(hero);
      if (bannerItemForHero == null)
        return;
      hero.BannerItem = new EquipmentElement(bannerItemForHero);
    }

    private void OnCompanionClanCreated(Clan clan)
    {
      Hero leader = clan.Leader;
      if (!leader.BannerItem.IsInvalid())
        return;
      ItemObject bannerItemForHero = BannerHelper.GetRandomBannerItemForHero(leader);
      if (bannerItemForHero == null)
        return;
      leader.BannerItem = new EquipmentElement(bannerItemForHero);
    }

    private bool CanBannerBeLootedFromHero(Hero hero)
    {
      return !this._heroNextBannerLootTime.ContainsKey(hero) || this._heroNextBannerLootTime[hero].IsPast;
    }

    private int GetCooldownDays(int bannerLevel)
    {
      if (bannerLevel == 1)
        return 4;
      return bannerLevel == 1 ? 8 : 12;
    }

    private void LogBannerLootForHero(Hero hero, int bannerLevel)
    {
      CampaignTime campaignTime = CampaignTime.DaysFromNow((float) this.GetCooldownDays(bannerLevel));
      if (!this._heroNextBannerLootTime.ContainsKey(hero))
        this._heroNextBannerLootTime.Add(hero, campaignTime);
      else
        this._heroNextBannerLootTime[hero] = campaignTime;
    }

    private ItemObject GetBannerRewardForHideoutBattle()
    {
      return (double) MBRandom.RandomFloat <= (double) Campaign.Current.Models.BattleRewardModel.DestroyHideoutBannerLootChance ? Campaign.Current.Models.BannerItemModel.GetPossibleRewardBannerItems().ToMBList<ItemObject>().GetRandomElementWithPredicate<ItemObject>((Func<ItemObject, bool>) (i =>
      {
        if (((BannerComponent) i.ItemComponent).BannerLevel != 1)
          return false;
        return i.Culture == null || i.Culture.StringId == "neutral_culture";
      })) : (ItemObject) null;
    }

    private ItemObject GetBannerRewardForCapturingFortification(Settlement settlement)
    {
      if ((double) MBRandom.RandomFloat <= (double) Campaign.Current.Models.BattleRewardModel.CaptureSettlementBannerLootChance)
      {
        MBList<ItemObject> mbList = Campaign.Current.Models.BannerItemModel.GetPossibleRewardBannerItems().ToMBList<ItemObject>();
        mbList.Shuffle<ItemObject>();
        int wallLevel = settlement.Town.GetWallLevel();
        foreach (ItemObject capturingFortification in (List<ItemObject>) mbList)
        {
          if (((BannerComponent) capturingFortification.ItemComponent).BannerLevel == wallLevel && (capturingFortification.Culture == null || capturingFortification.Culture.StringId == "neutral_culture" || capturingFortification.Culture == settlement.Culture))
            return capturingFortification;
        }
      }
      return (ItemObject) null;
    }

    private ItemObject GetBannerRewardForDefeatingNoble(
      MapEvent mapEvent,
      MBList<TroopRosterElement> lootedCasualties)
    {
      Hero hero = (Hero) null;
      foreach (MapEventParty mapEventParty in (List<MapEventParty>) mapEvent.PartiesOnSide(mapEvent.DefeatedSide))
      {
        if (mapEventParty.Party.IsMobile && mapEventParty.Party.MobileParty.Army != null)
        {
          hero = mapEventParty.Party.MobileParty.Army.ArmyOwner;
          if (hero.BannerItem.IsInvalid())
          {
            hero = (Hero) null;
            break;
          }
          break;
        }
      }
      if (hero == null)
        hero = lootedCasualties.GetRandomElementWithPredicate<TroopRosterElement>((Func<TroopRosterElement, bool>) (t => t.Character.IsHero && !t.Character.HeroObject.BannerItem.IsInvalid())).Character?.HeroObject;
      if (hero == null || !this.CanBannerBeLootedFromHero(hero) || (double) MBRandom.RandomFloat > (hero.Clan?.Kingdom?.RulingClan.Leader != hero ? (hero.Clan?.Leader != hero ? (double) Campaign.Current.Models.BattleRewardModel.DefeatRegularHeroBannerLootChance : (double) Campaign.Current.Models.BattleRewardModel.DefeatClanLeaderBannerLootChance) : (double) Campaign.Current.Models.BattleRewardModel.DefeatKingdomRulerBannerLootChance))
        return (ItemObject) null;
      this.LogBannerLootForHero(hero, ((BannerComponent) hero.BannerItem.Item.ItemComponent).BannerLevel);
      return hero.BannerItem.Item;
    }

    private bool CanBannerBeGivenToHero(Hero hero)
    {
      int heroComesOfAge = Campaign.Current.Models.AgeModel.HeroComesOfAge;
      return hero.Occupation == Occupation.Lord && (double) hero.Age >= (double) heroComesOfAge && hero.BannerItem.IsInvalid() && hero.Clan != Clan.PlayerClan;
    }
  }
}
