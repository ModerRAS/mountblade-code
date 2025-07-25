// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CaravansCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CaravansCampaignBehavior : CampaignBehaviorBase
  {
    private const float AverageCaravanWaitAtSettlement = 3f;
    private const int MaxMoneyToSpendOnSingleCategory = 1500;
    private const int MaxNumberOfItemsToBuyFromSingleCategory = 100;
    public const int InitialCaravanGold = 10000;
    private const float ProfitRateRumorThreshold = 1.2f;
    private float ReferenceBudgetValue = 5000f;
    private Dictionary<MobileParty, CampaignTime> _tradeRumorTakenCaravans = new Dictionary<MobileParty, CampaignTime>();
    private Dictionary<MobileParty, CampaignTime> _caravanLastHomeTownVisitTime = new Dictionary<MobileParty, CampaignTime>();
    private Dictionary<MobileParty, CampaignTime> _lootedCaravans = new Dictionary<MobileParty, CampaignTime>();
    private Dictionary<MobileParty, CaravansCampaignBehavior.PlayerInteraction> _interactedCaravans = new Dictionary<MobileParty, CaravansCampaignBehavior.PlayerInteraction>();
    private Dictionary<MobileParty, List<CaravansCampaignBehavior.TradeActionLog>> _tradeActionLogs = new Dictionary<MobileParty, List<CaravansCampaignBehavior.TradeActionLog>>();
    private Dictionary<MobileParty, List<Settlement>> _previouslyChangedCaravanTargetsDueToEnemyOnWay = new Dictionary<MobileParty, List<Settlement>>();
    private CaravansCampaignBehavior.TradeActionLogPool _tradeActionLogPool;
    private int _packAnimalCategoryIndex = -1;
    private readonly Dictionary<ItemCategory, float> _averageValuesCached = new Dictionary<ItemCategory, float>();
    private readonly Dictionary<ItemCategory, CaravansCampaignBehavior.PriceIndexData> _priceDictionary = new Dictionary<ItemCategory, CaravansCampaignBehavior.PriceIndexData>();
    private readonly Dictionary<ItemCategory, int> _totalValueOfItemsAtCategory = new Dictionary<ItemCategory, int>();

    private float DistanceScoreDivider
    {
      get
      {
        return (float) ((636.0 + 11.359999656677246 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float DistanceLimitVeryFar
    {
      get
      {
        return (float) ((508.0 + 9.0 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float DistanceLimitFar
    {
      get
      {
        return (float) ((381.0 + 6.75 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float DistanceLimitMedium
    {
      get
      {
        return (float) ((254.0 + 4.5 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    private float DistanceLimitClose
    {
      get
      {
        return (float) (((double) sbyte.MaxValue + 2.25 * (double) Campaign.AverageDistanceBetweenTwoFortifications) / 2.0);
      }
    }

    public CaravansCampaignBehavior()
    {
      this._tradeActionLogPool = new CaravansCampaignBehavior.TradeActionLogPool(4096);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.DailyTickHeroEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.DailyTickHero));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUpEvent));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEndEvent));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnMobilePartyCreated));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.DistributeLootToPartyEvent.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>>(this.OnLootCaravanParties));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
    }

    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      for (int index = 0; index < siegeEvent.BesiegedSettlement.Parties.Count; ++index)
      {
        if (siegeEvent.BesiegedSettlement.Parties[index].IsCaravan)
          siegeEvent.BesiegedSettlement.Parties[index].Ai.SetMoveModeHold();
      }
    }

    private void OnLootCaravanParties(
      MapEvent mapEvent,
      PartyBase party,
      Dictionary<PartyBase, ItemRoster> loot)
    {
      foreach (PartyBase key in loot.Keys)
      {
        if (key.IsMobile && key.MobileParty.IsCaravan && party.IsMobile)
          SkillLevelingManager.OnLoot(party.MobileParty, key.MobileParty, loot[key], true);
      }
    }

    public void OnNewGameCreatedPartialFollowUpEvent(CampaignGameStarter starter, int i)
    {
      List<Hero> heroList = new List<Hero>();
      foreach (Hero allAliveHero in (List<Hero>) Hero.AllAliveHeroes)
      {
        if (allAliveHero.Clan != Clan.PlayerClan && this.ShouldHaveCaravan(allAliveHero))
          heroList.Add(allAliveHero);
      }
      int count = heroList.Count;
      int num1 = count / 100 + (count % 100 > i ? 1 : 0);
      int num2 = count / 100 * i;
      for (int index = 0; index < i; ++index)
        num2 += count % 100 > index ? 1 : 0;
      for (int index = 0; index < num1; ++index)
        this.SpawnCaravan(heroList[num2 + index], true);
    }

    private void OnNewGameCreatedPartialFollowUpEndEvent(CampaignGameStarter obj)
    {
      for (int index = 0; index < 2; ++index)
      {
        this.UpdateAverageValues();
        this.DoInitialTradeRuns();
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<MobileParty, CampaignTime>>("_tradeRumorTakenCaravans", ref this._tradeRumorTakenCaravans);
      dataStore.SyncData<Dictionary<MobileParty, CampaignTime>>("_lootedCaravans", ref this._lootedCaravans);
      dataStore.SyncData<Dictionary<MobileParty, CaravansCampaignBehavior.PlayerInteraction>>("_interactedCaravans", ref this._interactedCaravans);
      dataStore.SyncData<Dictionary<MobileParty, List<CaravansCampaignBehavior.TradeActionLog>>>("_tradeActionLogs", ref this._tradeActionLogs);
      dataStore.SyncData<Dictionary<MobileParty, List<Settlement>>>("_previouslyChangedCaravanTargetsDueToEnemyOnWay", ref this._previouslyChangedCaravanTargetsDueToEnemyOnWay);
    }

    private void DoInitialTradeRuns()
    {
      foreach (MobileParty allCaravanParty in (List<MobileParty>) MobileParty.AllCaravanParties)
      {
        Town town1 = (Town) null;
        Town town2 = (Town) null;
        float num1 = 0.0f;
        foreach (Town allTown in (List<Town>) Town.AllTowns)
        {
          float x = allCaravanParty.Position2D.Distance(allTown.Settlement.GatePosition);
          if ((double) x > 1.0)
            num1 += 1f / MathF.Pow(x, 1.5f);
          else
            town2 = allTown;
        }
        float num2 = MBRandom.RandomFloat * num1;
        foreach (Town allTown in (List<Town>) Town.AllTowns)
        {
          float x = allCaravanParty.Position2D.Distance(allTown.Settlement.GatePosition);
          if ((double) x > 1.0)
          {
            num2 -= 1f / MathF.Pow(x, 1.5f);
            if ((double) num2 <= 0.0)
            {
              town1 = allTown;
              break;
            }
          }
        }
        if (town1 != null && town2 != null)
        {
          this.CreatePriceDataCache();
          if ((double) MBRandom.RandomFloat < 0.5)
          {
            this.SellGoods(allCaravanParty, town2, 0.7f);
            this.BuyGoods(allCaravanParty, town2);
            this.SellGoods(allCaravanParty, town1, 0.7f);
          }
          else
          {
            this.SellGoods(allCaravanParty, town1, 0.7f);
            this.BuyGoods(allCaravanParty, town1);
            this.SellGoods(allCaravanParty, town2, 0.7f);
          }
        }
      }
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
      this.UpdateAverageValues();
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      foreach (PartyBase involvedParty in mapEvent.InvolvedParties)
      {
        if (involvedParty.IsMobile && involvedParty.MobileParty.IsCaravan && mapEvent.IsWinnerSide(involvedParty.Side))
        {
          MobileParty mobileParty = involvedParty.MobileParty;
          int numberOfPackAnimals = mobileParty.ItemRoster.NumberOfPackAnimals;
          int livestockAnimals = mobileParty.ItemRoster.NumberOfLivestockAnimals;
          int numberOfMounts = mobileParty.ItemRoster.NumberOfMounts;
          int totalManCount = mobileParty.MemberRoster.TotalManCount;
          int num1;
          if ((double) (numberOfPackAnimals + livestockAnimals + numberOfMounts) > (double) totalManCount * 1.2000000476837158)
          {
            for (int index = numberOfPackAnimals + livestockAnimals + numberOfMounts; index > totalManCount; index -= num1)
            {
              int num2 = 10000;
              ItemRosterElement itemRosterElement1 = involvedParty.MobileParty.ItemRoster[0];
              foreach (ItemRosterElement itemRosterElement2 in involvedParty.MobileParty.ItemRoster)
              {
                EquipmentElement equipmentElement;
                if (!itemRosterElement2.EquipmentElement.Item.IsMountable)
                {
                  equipmentElement = itemRosterElement2.EquipmentElement;
                  if (equipmentElement.Item.ItemCategory != DefaultItemCategories.PackAnimal)
                  {
                    equipmentElement = itemRosterElement2.EquipmentElement;
                    if (!equipmentElement.Item.IsAnimal)
                      continue;
                  }
                }
                equipmentElement = itemRosterElement2.EquipmentElement;
                int itemValue = equipmentElement.ItemValue;
                if (itemValue < num2)
                {
                  num2 = itemValue;
                  itemRosterElement1 = itemRosterElement2;
                }
              }
              num1 = MathF.Min(itemRosterElement1.Amount, MathF.Max(1, index - totalManCount));
              mobileParty.ItemRoster.AddToCounts(itemRosterElement1.EquipmentElement, -num1);
            }
          }
          int inventoryCapacity = mobileParty.InventoryCapacity;
          float totalWeight = mobileParty.ItemRoster.TotalWeight;
          float num3 = 0.0f;
          int num4;
          float weight;
          if ((double) totalWeight - (double) num3 > (double) inventoryCapacity)
          {
            for (; (double) totalWeight - (double) num3 > (double) inventoryCapacity; num3 += weight * (float) num4)
            {
              int num5 = 10000;
              ItemRosterElement itemRosterElement3 = involvedParty.MobileParty.ItemRoster[0];
              foreach (ItemRosterElement itemRosterElement4 in involvedParty.MobileParty.ItemRoster)
              {
                EquipmentElement equipmentElement = itemRosterElement4.EquipmentElement;
                if (!equipmentElement.Item.IsMountable)
                {
                  equipmentElement = itemRosterElement4.EquipmentElement;
                  int itemValue = equipmentElement.ItemValue;
                  if (itemValue < num5)
                  {
                    num5 = itemValue;
                    itemRosterElement3 = itemRosterElement4;
                  }
                }
              }
              int val2 = MathF.Ceiling((totalWeight - num3 - (float) inventoryCapacity) / itemRosterElement3.EquipmentElement.Weight);
              num4 = Math.Max(1, Math.Min(itemRosterElement3.Amount, val2));
              weight = itemRosterElement3.EquipmentElement.Weight;
              mobileParty.ItemRoster.AddToCounts(itemRosterElement3.EquipmentElement, -num4);
            }
          }
        }
      }
    }

    public bool ShouldHaveCaravan(Hero hero)
    {
      return hero.PartyBelongedTo == null && hero.IsMerchant && (hero.IsFugitive || hero.IsReleased || hero.IsNotSpawned || hero.IsActive) && !hero.IsTemplate && hero.CanLeadParty();
    }

    public void SpawnCaravan(Hero hero, bool initialSpawn = false)
    {
      if (hero.OwnedCaravans.Count > 0)
        return;
      Settlement settlement = hero.HomeSettlement ?? hero.BornSettlement;
      Settlement spawnSettlement = settlement != null ? (!settlement.IsTown ? (!settlement.IsVillage ? Town.AllTowns.GetRandomElement<Town>().Settlement : settlement.Village.TradeBound ?? Town.AllTowns.GetRandomElement<Town>().Settlement) : settlement) : Town.AllTowns.GetRandomElement<Town>().Settlement;
      bool isElite = false;
      if ((double) hero.Power >= 112.0)
      {
        float num = (float) ((double) hero.Power * 0.0044999998062849045 - 0.5);
        isElite = (double) hero.RandomFloat() < (double) num;
      }
      CaravanPartyComponent.CreateCaravanParty(hero, spawnSettlement, initialSpawn, isElite: isElite);
      if (initialSpawn || (double) hero.Power < 50.0)
        return;
      hero.AddPower(-30f);
    }

    private void UpdateAverageValues()
    {
      Dictionary<ItemCategory, (float, int)> dictionary = new Dictionary<ItemCategory, (float, int)>();
      foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
      {
        if (itemObject.IsReady)
        {
          (float, int) valueTuple;
          dictionary.TryGetValue(itemObject.ItemCategory, out valueTuple);
          dictionary[itemObject.ItemCategory] = (valueTuple.Item1 + (float) MathF.Min(500, itemObject.Value), valueTuple.Item2 + 1);
        }
      }
      this._packAnimalCategoryIndex = -1;
      for (int index = 0; index < ItemCategories.All.Count; ++index)
      {
        ItemCategory key = ItemCategories.All[index];
        (float, int) valueTuple;
        bool flag = dictionary.TryGetValue(key, out valueTuple);
        this._averageValuesCached[key] = flag ? valueTuple.Item1 / (float) valueTuple.Item2 : 1f;
        if (key == DefaultItemCategories.PackAnimal)
          this._packAnimalCategoryIndex = index;
      }
    }

    private void CreatePriceDataCache()
    {
      foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
      {
        float num = 0.0f;
        float minBuySellPriceIndex = 1000f;
        foreach (Town allTown in (List<Town>) Town.AllTowns)
        {
          float categoryPriceIndex = allTown.GetItemCategoryPriceIndex(itemCategory);
          num += categoryPriceIndex;
          if ((double) categoryPriceIndex < (double) minBuySellPriceIndex)
            minBuySellPriceIndex = categoryPriceIndex;
        }
        float averageBuySellPriceIndex = num / (float) Town.AllTowns.Count;
        this._priceDictionary[itemCategory] = new CaravansCampaignBehavior.PriceIndexData(averageBuySellPriceIndex, minBuySellPriceIndex);
      }
    }

    public void DailyTick()
    {
      this.DeleteExpiredTradeRumorTakenCaravans();
      this.DeleteExpiredLootedCaravans();
      this.CreatePriceDataCache();
    }

    private void DailyTickHero(Hero hero)
    {
      if (hero == Hero.MainHero || !this.ShouldHaveCaravan(hero))
        return;
      this.SpawnCaravan(hero);
    }

    private void DeleteExpiredTradeRumorTakenCaravans()
    {
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      foreach (KeyValuePair<MobileParty, CampaignTime> rumorTakenCaravan in this._tradeRumorTakenCaravans)
      {
        if (CampaignTime.Now - rumorTakenCaravan.Value >= CampaignTime.Days(1f))
          mobilePartyList.Add(rumorTakenCaravan.Key);
      }
      foreach (MobileParty key in mobilePartyList)
        this._tradeRumorTakenCaravans.Remove(key);
    }

    private void DeleteExpiredLootedCaravans()
    {
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      foreach (KeyValuePair<MobileParty, CampaignTime> lootedCaravan in this._lootedCaravans)
      {
        if (CampaignTime.Now - lootedCaravan.Value >= CampaignTime.Days(10f))
          mobilePartyList.Add(lootedCaravan.Key);
      }
      foreach (MobileParty key in mobilePartyList)
        this._lootedCaravans.Remove(key);
    }

    private Town GetDestinationForMobileParty(MobileParty party) => party.TargetSettlement?.Town;

    public void HourlyTickParty(MobileParty caravanParty)
    {
      if (!Campaign.Current.GameStarted || !caravanParty.IsCaravan)
        return;
      bool flag = false;
      float randomFloat1 = MBRandom.RandomFloat;
      if (caravanParty.MapEvent != null || !caravanParty.IsPartyTradeActive || caravanParty.Ai.DoNotMakeNewDecisions)
        return;
      if (caravanParty.CurrentSettlement != null && caravanParty.CurrentSettlement.IsTown)
      {
        if (!caravanParty.CurrentSettlement.IsUnderSiege && caravanParty.ShortTermBehavior != AiBehavior.FleeToPoint && !caravanParty.Ai.IsAlerted && (caravanParty.IsCurrentlyUsedByAQuest || (double) randomFloat1 < 0.3333333432674408))
        {
          float num1 = caravanParty.MemberRoster.TotalManCount > 0 ? (float) caravanParty.MemberRoster.TotalWounded / (float) caravanParty.MemberRoster.TotalManCount : 1f;
          float num2 = 1f;
          if ((double) num1 > 0.4)
            num2 = 0.0f;
          else if ((double) num1 > 0.2)
            num2 = 0.1f;
          else if ((double) num1 > 0.1)
            num2 = 0.2f;
          else if ((double) num1 > 0.05)
            num2 = 0.3f;
          else if ((double) num1 > 0.025)
            num2 = 0.4f;
          float randomFloat2 = MBRandom.RandomFloat;
          if ((double) num2 > (double) randomFloat2)
            flag = true;
        }
      }
      else
      {
        Town destinationForMobileParty = this.GetDestinationForMobileParty(caravanParty);
        flag = destinationForMobileParty == null || destinationForMobileParty.IsUnderSiege || caravanParty.MapFaction.IsAtWarWith(destinationForMobileParty.MapFaction) || caravanParty.Ai.NeedTargetReset || !caravanParty.IsCurrentlyUsedByAQuest && (double) randomFloat1 < 0.0099999997764825821;
      }
      if (flag)
      {
        if (caravanParty.CurrentSettlement != null && caravanParty.CurrentSettlement.IsTown)
        {
          Town town = caravanParty.CurrentSettlement.Town;
          this.BuyGoods(caravanParty, town);
        }
        if (!this._previouslyChangedCaravanTargetsDueToEnemyOnWay.ContainsKey(caravanParty))
          this._previouslyChangedCaravanTargetsDueToEnemyOnWay.Add(caravanParty, new List<Settlement>());
        if (caravanParty.Ai.NeedTargetReset && caravanParty.TargetSettlement != null)
          this._previouslyChangedCaravanTargetsDueToEnemyOnWay[caravanParty].Add(caravanParty.TargetSettlement);
        Town town1 = this.ThinkNextDestination(caravanParty);
        if (town1 != null)
          caravanParty.Ai.SetMoveGoToSettlement(town1.Settlement);
      }
      Town destinationForMobileParty1 = this.GetDestinationForMobileParty(caravanParty);
      if (caravanParty.CurrentSettlement != null || destinationForMobileParty1 == null || caravanParty.TargetSettlement == destinationForMobileParty1.Settlement)
        return;
      caravanParty.Ai.SetMoveGoToSettlement(destinationForMobileParty1.Settlement);
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      Town town = settlement.Town;
      if (Campaign.Current.GameStarted && mobileParty != null && town != null && mobileParty.IsCaravan && mobileParty.IsPartyTradeActive && mobileParty.IsActive)
      {
        if (this._previouslyChangedCaravanTargetsDueToEnemyOnWay.ContainsKey(mobileParty))
          this._previouslyChangedCaravanTargetsDueToEnemyOnWay[mobileParty].Clear();
        else
          this._previouslyChangedCaravanTargetsDueToEnemyOnWay.Add(mobileParty, new List<Settlement>());
        if (Campaign.Current.GameStarted)
        {
          List<CaravansCampaignBehavior.TradeActionLog> tradeActionLogList;
          if (this._tradeActionLogs.TryGetValue(mobileParty, out tradeActionLogList))
          {
            for (int index = tradeActionLogList.Count - 1; index >= 0; --index)
            {
              CaravansCampaignBehavior.TradeActionLog log = tradeActionLogList[index];
              if ((double) log.BoughtTime.ElapsedDaysUntilNow > 7.0)
              {
                tradeActionLogList.RemoveAt(index);
                this._tradeActionLogPool.ReleaseLog(log);
              }
            }
          }
          this.SellGoods(mobileParty, town);
        }
        if (mobileParty.HomeSettlement == settlement)
          this._caravanLastHomeTownVisitTime[mobileParty] = CampaignTime.Now;
      }
      if (mobileParty == null || !mobileParty.IsCaravan || !settlement.IsTown || settlement.Town.Governor == null || !settlement.Town.Governor.GetPerkValue(DefaultPerks.Trade.Tollgates))
        return;
      settlement.Town.TradeTaxAccumulated += MathF.Round(DefaultPerks.Trade.Tollgates.SecondaryBonus);
    }

    public void OnSettlementLeft(MobileParty mobileParty, Settlement settlement)
    {
      if (mobileParty == null || mobileParty == MobileParty.MainParty || !mobileParty.IsCaravan && !mobileParty.IsLordParty)
        return;
      int inventoryCapacity = mobileParty.InventoryCapacity;
      float totalWeight = mobileParty.ItemRoster.TotalWeight;
      Town town = settlement.IsTown ? settlement.Town : (settlement.IsVillage ? settlement.Village.Bound.Town : (Town) null);
      if (town == null)
        return;
      float priceIndexSellLimit = 1.1f;
      for (; (double) totalWeight > (double) inventoryCapacity; totalWeight = mobileParty.ItemRoster.TotalWeight)
      {
        this.SellGoods(mobileParty, town, priceIndexSellLimit, true);
        priceIndexSellLimit -= 0.02f;
        if ((double) priceIndexSellLimit < 0.75)
          break;
        inventoryCapacity = mobileParty.InventoryCapacity;
      }
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (this._interactedCaravans.ContainsKey(mobileParty))
        this._interactedCaravans.Remove(mobileParty);
      List<CaravansCampaignBehavior.TradeActionLog> tradeActionLogList;
      if (this._tradeActionLogs.TryGetValue(mobileParty, out tradeActionLogList))
      {
        this._tradeActionLogs.Remove(mobileParty);
        for (int index = 0; index < tradeActionLogList.Count; ++index)
          this._tradeActionLogPool.ReleaseLog(tradeActionLogList[index]);
      }
      if (!this._previouslyChangedCaravanTargetsDueToEnemyOnWay.ContainsKey(mobileParty))
        return;
      this._previouslyChangedCaravanTargetsDueToEnemyOnWay.Remove(mobileParty);
    }

    private void OnMobilePartyCreated(MobileParty mobileParty)
    {
      if (!mobileParty.IsCaravan)
        return;
      this._previouslyChangedCaravanTargetsDueToEnemyOnWay.Add(mobileParty, new List<Settlement>());
    }

    private Town ThinkNextDestination(MobileParty caravanParty)
    {
      this.RefreshTotalValueOfItemsAtCategoryForParty(caravanParty);
      return this.FindNextDestinationForCaravan(caravanParty, true) ?? this.FindNextDestinationForCaravan(caravanParty, false);
    }

    private Town FindNextDestinationForCaravan(MobileParty caravanParty, bool distanceCut)
    {
      float num = 0.0f;
      Town destinationForCaravan = (Town) null;
      float caravanFullness = caravanParty.ItemRoster.TotalWeight / (float) caravanParty.InventoryCapacity;
      CampaignTime lastHomeVisitTimeOfCaravan;
      this._caravanLastHomeTownVisitTime.TryGetValue(caravanParty, out lastHomeVisitTimeOfCaravan);
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        if (allTown.Owner.Settlement != caravanParty.CurrentSettlement && !allTown.IsUnderSiege && !allTown.MapFaction.IsAtWarWith(caravanParty.MapFaction) && (!allTown.Settlement.Parties.Contains(MobileParty.MainParty) || !MobileParty.MainParty.MapFaction.IsAtWarWith(caravanParty.MapFaction)) && !this._previouslyChangedCaravanTargetsDueToEnemyOnWay[caravanParty].Contains(allTown.Settlement))
        {
          float tradeScoreForTown = this.GetTradeScoreForTown(caravanParty, allTown, lastHomeVisitTimeOfCaravan, caravanFullness, distanceCut);
          if ((double) tradeScoreForTown > (double) num)
          {
            num = tradeScoreForTown;
            destinationForCaravan = allTown;
          }
        }
      }
      return destinationForCaravan;
    }

    private void AdjustVeryFarAddition(
      float distance,
      float minimumAddition,
      ref float veryFarAddition)
    {
      if ((double) distance > (double) this.DistanceLimitVeryFar)
        veryFarAddition += (float) (((double) distance - (double) this.DistanceLimitVeryFar) * (double) minimumAddition * 4.0);
      if ((double) distance > (double) this.DistanceLimitFar)
        veryFarAddition += (float) (((double) distance - (double) this.DistanceLimitFar) * (double) minimumAddition * 3.0);
      if ((double) distance > (double) this.DistanceLimitMedium)
        veryFarAddition += (float) (((double) distance - (double) this.DistanceLimitMedium) * (double) minimumAddition * 2.0);
      if ((double) distance <= (double) this.DistanceLimitClose)
        return;
      veryFarAddition += (distance - this.DistanceLimitClose) * minimumAddition;
    }

    private float GetTradeScoreForTown(
      MobileParty caravanParty,
      Town town,
      CampaignTime lastHomeVisitTimeOfCaravan,
      float caravanFullness,
      bool distanceCut)
    {
      float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(caravanParty, town.Owner.Settlement);
      float veryFarAddition = 0.0f;
      this.AdjustVeryFarAddition(distance, 0.15f, ref veryFarAddition);
      float elapsedDaysUntilNow = lastHomeVisitTimeOfCaravan.ElapsedDaysUntilNow;
      bool flag = (double) elapsedDaysUntilNow > 2.0;
      if (flag)
        this.AdjustVeryFarAddition(Campaign.Current.Models.MapDistanceModel.GetDistance(town.Owner.Settlement, caravanParty.HomeSettlement), (float) ((((double) elapsedDaysUntilNow - 1.0) * (double) MathF.Sqrt(elapsedDaysUntilNow - 1f) - 1.0) * 0.00800000037997961), ref veryFarAddition);
      float num1 = (float) (1.0 / ((double) distance + (double) veryFarAddition + 8.0));
      if (distanceCut && (town.Owner.Settlement != caravanParty.HomeSettlement || !flag) && (double) num1 < 1.0 / (double) this.DistanceScoreDivider)
        return -1f;
      float num2 = 1f;
      if (caravanParty.HomeSettlement == town.Owner.Settlement)
        num2 = (float) (1.0 + (double) elapsedDaysUntilNow * 0.10000000149011612 * ((double) elapsedDaysUntilNow * 0.10000000149011612));
      TownMarketData marketData = town.MarketData;
      float num3 = 0.0f;
      for (int index = 0; index < caravanParty.Party.ItemRoster.Count; ++index)
      {
        float limitValue = (float) (1.1000000238418579 - (double) MathF.Sqrt((float) MathF.Min(this._totalValueOfItemsAtCategory[caravanParty.ItemRoster.GetElementCopyAtIndex(index).EquipmentElement.Item.ItemCategory], 5000) / 5000f) * 0.20000000298023224);
        num3 += this.CalculateTownSellScoreForCategory(caravanParty, marketData, index, limitValue);
      }
      float a = num3 * (0.3f + caravanFullness);
      float num4 = 0.0f;
      for (int index = 0; index < ItemCategories.All.Count; ++index)
      {
        ItemCategory itemCategory = ItemCategories.All[index];
        if (itemCategory.IsTradeGood || itemCategory.IsAnimal)
          num4 += this.CalculateTownBuyScoreForCategory(marketData, index);
      }
      float num5 = MathF.Min(num4 * MathF.Max(0.1f, (float) (1.0 - ((double) caravanFullness - 0.20000000298023224 * (double) MathF.Min(a, 1000f) / 1000.0))), (float) (int) (0.5 * (double) caravanParty.PartyTradeGold));
      float num6 = !caravanParty.Ai.NeedTargetReset || caravanParty.TargetSettlement != town.Settlement ? 1f : 0.1f;
      float num7 = !caravanParty.IsCurrentlyUsedByAQuest || town.Settlement != caravanParty.HomeSettlement || (double) caravanParty.Position2D.Distance(caravanParty.HomeSettlement.GatePosition) >= 3.0 ? 1f : 0.1f;
      return (a + num5) * num6 * num1 * num2 * num7;
    }

    private float CalculateTownSellScoreForCategory(
      MobileParty party,
      TownMarketData marketData,
      int i,
      float limitValue)
    {
      ItemRosterElement itemRosterElement = party.Party.ItemRoster[i];
      ItemCategory itemCategory = itemRosterElement.EquipmentElement.Item.ItemCategory;
      CaravansCampaignBehavior.PriceIndexData categoryPriceData = this.GetCategoryPriceData(itemCategory);
      float num1 = marketData.GetPriceFactor(itemCategory) - categoryPriceData.AverageBuySellPriceIndex * limitValue;
      if ((double) num1 <= 0.0)
        return 0.0f;
      int num2 = itemRosterElement.EquipmentElement.Item.ItemCategory != DefaultItemCategories.PackAnimal ? itemRosterElement.Amount : MathF.Max(0, itemRosterElement.Amount - party.MemberRoster.TotalManCount);
      float num3 = itemCategory.Properties == ItemCategory.Property.BonusToFoodStores ? 1.1f : 1f;
      return num1 * num3 * (float) MathF.Min(4000, itemRosterElement.EquipmentElement.Item.Value * num2);
    }

    private void SetPlayerInteraction(
      MobileParty mobileParty,
      CaravansCampaignBehavior.PlayerInteraction interaction)
    {
      if (this._interactedCaravans.ContainsKey(mobileParty))
        this._interactedCaravans[mobileParty] = interaction;
      else
        this._interactedCaravans.Add(mobileParty, interaction);
    }

    private CaravansCampaignBehavior.PlayerInteraction GetPlayerInteraction(MobileParty mobileParty)
    {
      CaravansCampaignBehavior.PlayerInteraction playerInteraction;
      return this._interactedCaravans.TryGetValue(mobileParty, out playerInteraction) ? playerInteraction : CaravansCampaignBehavior.PlayerInteraction.None;
    }

    private float CalculateTownBuyScoreForCategory(TownMarketData marketData, int categoryIndex)
    {
      ItemCategory itemCategory = ItemCategories.All[categoryIndex];
      double num1 = (double) this.GetCategoryPriceData(itemCategory).AverageBuySellPriceIndex / (double) marketData.GetPriceFactor(itemCategory);
      float num2 = (float) (num1 * num1 - 1.1000000238418579);
      return (double) num2 > 0.0 ? MathF.Min(MathF.Sqrt(this._averageValuesCached[itemCategory]) * 3f * num2, 0.3f * (float) marketData.GetCategoryData(itemCategory).InStoreValue) : 0.0f;
    }

    private CaravansCampaignBehavior.PriceIndexData GetCategoryPriceData(ItemCategory category)
    {
      CaravansCampaignBehavior.PriceIndexData priceIndexData;
      return !this._priceDictionary.TryGetValue(category, out priceIndexData) ? new CaravansCampaignBehavior.PriceIndexData(1f, 1f) : priceIndexData;
    }

    private void RefreshTotalValueOfItemsAtCategoryForParty(MobileParty caravanParty)
    {
      this._totalValueOfItemsAtCategory.Clear();
      for (int index = 0; index < caravanParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = caravanParty.ItemRoster.GetElementCopyAtIndex(index);
        ItemObject itemObject = elementCopyAtIndex.EquipmentElement.Item;
        int num1 = elementCopyAtIndex.Amount * (itemObject.Value + 10);
        int num2;
        if (this._totalValueOfItemsAtCategory.TryGetValue(itemObject.ItemCategory, out num2))
          this._totalValueOfItemsAtCategory[itemObject.ItemCategory] = num2 + num1;
        else
          this._totalValueOfItemsAtCategory.Add(itemObject.ItemCategory, num1);
      }
    }

    private void SellGoods(
      MobileParty caravanParty,
      Town town,
      float priceIndexSellLimit = 1.1f,
      bool toLoseWeight = false)
    {
      int gold = town.Gold;
      int num1 = (int) ((double) caravanParty.ItemRoster.NumberOfPackAnimals - (double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791);
      int num2 = (int) ((double) caravanParty.ItemRoster.NumberOfLivestockAnimals - (double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791);
      int itemAverageWeight = Campaign.Current.Models.InventoryCapacityModel.GetItemAverageWeight();
      this.RefreshTotalValueOfItemsAtCategoryForParty(caravanParty);
      List<(EquipmentElement, int)> valueTupleList = new List<(EquipmentElement, int)>();
      for (int index1 = 0; index1 < 2; ++index1)
      {
        for (int index2 = caravanParty.ItemRoster.Count - 1; index2 >= 0; --index2)
        {
          ItemRosterElement elementCopyAtIndex = caravanParty.ItemRoster.GetElementCopyAtIndex(index2);
          ItemObject itemObject = elementCopyAtIndex.EquipmentElement.Item;
          CaravansCampaignBehavior.PriceIndexData priceIndexData;
          if (this._priceDictionary.TryGetValue(itemObject.GetItemCategory(), out priceIndexData) && (index1 != 0 || !itemObject.HasHorseComponent && itemObject.ItemCategory != DefaultItemCategories.PackAnimal) && (index1 != 1 || itemObject.HasHorseComponent || itemObject.ItemCategory == DefaultItemCategories.PackAnimal) && (!toLoseWeight || !itemObject.HasHorseComponent))
          {
            bool flag1 = itemObject.ItemCategory == DefaultItemCategories.PackAnimal;
            if (!flag1 || num1 > 0)
            {
              bool flag2 = itemObject.HorseComponent != null && itemObject.HorseComponent.IsLiveStock;
              TownMarketData marketData1 = town.MarketData;
              EquipmentElement equipmentElement = elementCopyAtIndex.EquipmentElement;
              ItemCategory itemCategory1 = equipmentElement.Item.GetItemCategory();
              float priceFactor = marketData1.GetPriceFactor(itemCategory1);
              TownMarketData marketData2 = town.MarketData;
              equipmentElement = elementCopyAtIndex.EquipmentElement;
              ItemCategory itemCategory2 = equipmentElement.Item.GetItemCategory();
              float demand = marketData2.GetDemand(itemCategory2);
              float x = priceFactor / priceIndexData.AverageBuySellPriceIndex;
              float num3 = Campaign.Current.GameStarted ? MathF.Sqrt((float) MathF.Min(this._totalValueOfItemsAtCategory[itemObject.ItemCategory], 5000) / 5000f) * 0.4f : 0.0f;
              float num4 = priceIndexSellLimit - num3;
              if ((double) x >= (double) num4 || num2 > 0 & flag2 || num1 > 0 & flag1)
              {
                float num5 = (float) (0.800000011920929 * (double) priceIndexData.AverageBuySellPriceIndex + 0.20000000298023224 * (double) priceIndexData.MinBuySellPriceIndex);
                if ((double) priceFactor >= (double) num5 * (double) num4 || num2 > 0 & flag2 || num1 > 0 & flag1)
                {
                  double num6 = (double) priceFactor - (double) num5 * (double) num4;
                  float num7 = (float) num6 * (float) itemObject.Value + (float) (num6 * 200.0);
                  int itemPrice = town.GetItemPrice(itemObject, caravanParty, true);
                  float num8 = itemObject.ItemCategory.Properties == ItemCategory.Property.BonusToFoodStores ? 1.1f : 1f;
                  float num9 = itemObject.ItemCategory == DefaultItemCategories.PackAnimal ? 1.5f : 1f;
                  float num10 = (float) (((double) x > 1.0 ? (double) MathF.Pow(x, 0.67f) : (double) x) * (double) num7 * (double) num8 * (double) num9 * 3.0);
                  if ((double) num10 > (double) demand * 20.0)
                    num10 = demand * 20f;
                  if ((double) num10 > 0.0 || num2 > 0 & flag2 || num1 > 0 & flag1)
                  {
                    int number = num1 > 0 & flag1 ? num1 : (num2 > 0 & flag2 ? num2 : MBRandom.RoundRandomized(num10 / (float) itemPrice));
                    int amount = elementCopyAtIndex.Amount;
                    if (number > amount)
                      number = amount;
                    if (number * itemPrice > gold)
                      number = gold / itemPrice;
                    if (toLoseWeight && (double) caravanParty.ItemRoster.TotalWeight - (double) (number * itemAverageWeight) < (double) caravanParty.InventoryCapacity)
                      number = (int) (((double) caravanParty.ItemRoster.TotalWeight - (double) caravanParty.InventoryCapacity) / (double) itemAverageWeight + 0.99000000953674316);
                    if (number > elementCopyAtIndex.Amount)
                      number = elementCopyAtIndex.Amount;
                    if (number * itemPrice > gold)
                      number = gold / itemPrice;
                    if (number > 0)
                    {
                      valueTupleList.Add((elementCopyAtIndex.EquipmentElement, number));
                      if (Campaign.Current.GameStarted)
                        this.OnSellItems(caravanParty, elementCopyAtIndex, town);
                      SellItemsAction.Apply(caravanParty.Party, town.Owner, elementCopyAtIndex, number, town.Owner.Settlement);
                      num1 = (int) ((double) caravanParty.ItemRoster.NumberOfPackAnimals - (double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791);
                      num2 = (int) ((double) caravanParty.ItemRoster.NumberOfLivestockAnimals - (double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (valueTupleList.IsEmpty<(EquipmentElement, int)>() || !caravanParty.IsCaravan)
        return;
      CampaignEventDispatcher.Instance.OnCaravanTransactionCompleted(caravanParty, town, valueTupleList);
    }

    private void OnSellItems(
      MobileParty caravanParty,
      ItemRosterElement rosterElement,
      Town soldTown)
    {
      int itemPrice = soldTown.GetItemPrice(rosterElement.EquipmentElement.Item, caravanParty, true);
      List<CaravansCampaignBehavior.TradeActionLog> tradeActionLogList;
      if (!this._tradeActionLogs.TryGetValue(caravanParty, out tradeActionLogList))
        return;
      foreach (CaravansCampaignBehavior.TradeActionLog tradeActionLog in tradeActionLogList)
      {
        if (tradeActionLog.ItemRosterElement.EquipmentElement.Item == rosterElement.EquipmentElement.Item && itemPrice > tradeActionLog.SellPrice)
          tradeActionLog.OnSellAction(soldTown.Settlement, itemPrice);
      }
    }

    private void BuyGoods(MobileParty caravanParty, Town town)
    {
      this.CaravanTotalValue(caravanParty);
      List<(EquipmentElement, int)> valueTupleList = new List<(EquipmentElement, int)>();
      float capacityFactor = this.CalculateCapacityFactor(caravanParty);
      float budgetFactor = this.CalculateBudgetFactor(caravanParty);
      this.RefreshTotalValueOfItemsAtCategoryForParty(caravanParty);
      (ItemCategory category1, ItemCategory category2, ItemCategory category3, ItemCategory category4, ItemCategory category5) = MBMath.MaxElements5<ItemCategory>((IEnumerable<ItemCategory>) ItemCategories.All, (Func<ItemCategory, float>) (x => this.CalculateBuyValue(x, town, budgetFactor, capacityFactor)));
      if (category1 != null)
        this.BuyCategory(caravanParty, town, category1, budgetFactor, capacityFactor, valueTupleList);
      if (category2 != null)
        this.BuyCategory(caravanParty, town, category2, budgetFactor, capacityFactor, valueTupleList);
      if (category3 != null)
        this.BuyCategory(caravanParty, town, category3, budgetFactor, capacityFactor, valueTupleList);
      if (category4 != null)
        this.BuyCategory(caravanParty, town, category4, budgetFactor, capacityFactor, valueTupleList);
      if (category5 != null)
        this.BuyCategory(caravanParty, town, category5, budgetFactor, capacityFactor, valueTupleList);
      if ((double) (caravanParty.ItemRoster.NumberOfPackAnimals + caravanParty.ItemRoster.NumberOfLivestockAnimals) < (double) caravanParty.Party.NumberOfAllMembers * 2.0 && caravanParty.ItemRoster.NumberOfPackAnimals < caravanParty.Party.NumberOfAllMembers && this._packAnimalCategoryIndex >= 0 && caravanParty.PartyTradeGold > 1000)
        this.BuyCategory(caravanParty, town, DefaultItemCategories.PackAnimal, budgetFactor, capacityFactor, valueTupleList);
      if (valueTupleList.IsEmpty<(EquipmentElement, int)>())
        return;
      CampaignEventDispatcher.Instance.OnCaravanTransactionCompleted(caravanParty, town, valueTupleList);
    }

    private float CalculateBudgetFactor(MobileParty caravanParty)
    {
      return 0.1f + MathF.Clamp((float) caravanParty.PartyTradeGold / this.ReferenceBudgetValue, 0.0f, 1f);
    }

    private float CalculateCapacityFactor(MobileParty caravanParty)
    {
      return 1.1f - MathF.Clamp(caravanParty.Party.ItemRoster.TotalWeight / ((float) caravanParty.InventoryCapacity + 1f), 0.0f, 1f);
    }

    private void BuyCategory(
      MobileParty caravanParty,
      Town town,
      ItemCategory category,
      float budgetFactor,
      float capacityFactor,
      List<(EquipmentElement, int)> boughtItems)
    {
      float buyValue = this.CalculateBuyValue(category, town, budgetFactor, capacityFactor);
      if ((double) buyValue < 7.0 || (double) caravanParty.TotalWeightCarried / (double) caravanParty.InventoryCapacity > 0.800000011920929 && !category.IsAnimal || town.MarketData.GetCategoryData(category).InStore == 0)
        return;
      float num1 = MathF.Min((float) caravanParty.PartyTradeGold * 0.5f, buyValue * 1.5f);
      if ((double) num1 > 1500.0)
        num1 = 1500f;
      if (!Campaign.Current.GameStarted)
        num1 *= 0.5f;
      float num2 = num1;
      int num3;
      do
      {
        num3 = 0;
        int x1 = (int) ((double) MBRandom.RandomFloat * (double) town.Owner.ItemRoster.Count);
        int firstAfterXthElement = town.Owner.ItemRoster.FindIndexFirstAfterXthElement((Predicate<ItemObject>) (x => x.ItemCategory == category), x1);
        if (firstAfterXthElement < 0)
          break;
        ItemRosterElement elementCopyAtIndex = town.Owner.ItemRoster.GetElementCopyAtIndex(firstAfterXthElement);
        ItemObject itemObject = elementCopyAtIndex.EquipmentElement.Item;
        int itemPrice1 = town.GetItemPrice(itemObject, caravanParty, false);
        int number = MBRandom.RoundRandomized(num2 / (float) itemPrice1);
        if (number > elementCopyAtIndex.Amount)
          number = elementCopyAtIndex.Amount;
        if (number > 100)
          number = 100;
        if (!category.IsAnimal && (double) caravanParty.TotalWeightCarried + (double) number * (double) itemObject.Weight > (double) caravanParty.InventoryCapacity)
          number = (int) (((double) caravanParty.InventoryCapacity * 0.800000011920929 - (double) caravanParty.TotalWeightCarried) / (double) itemObject.Weight);
        if (elementCopyAtIndex.EquipmentElement.Item.HorseComponent != null && (elementCopyAtIndex.EquipmentElement.Item.HorseComponent.IsLiveStock || elementCopyAtIndex.EquipmentElement.Item.HorseComponent.IsPackAnimal))
        {
          int numberOfPackAnimals = caravanParty.ItemRoster.NumberOfPackAnimals;
          int livestockAnimals = caravanParty.ItemRoster.NumberOfLivestockAnimals;
          if (elementCopyAtIndex.EquipmentElement.Item.HorseComponent.IsLiveStock && (double) (livestockAnimals + number) > (double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791)
            number = (int) ((double) caravanParty.Party.NumberOfAllMembers * 0.60000002384185791) - livestockAnimals;
          else if (elementCopyAtIndex.EquipmentElement.Item.HorseComponent.IsPackAnimal && numberOfPackAnimals + number > caravanParty.Party.NumberOfAllMembers)
            number = caravanParty.Party.NumberOfAllMembers - numberOfPackAnimals;
        }
        if (number > 0)
        {
          SellItemsAction.Apply(town.Owner, caravanParty.Party, elementCopyAtIndex, number, town.Owner.Settlement);
          boughtItems.Add((elementCopyAtIndex.EquipmentElement, -number));
          num3 = number;
          num2 -= (float) ((number + 1) * itemPrice1);
          Town destinationForMobileParty = this.GetDestinationForMobileParty(caravanParty);
          if (caravanParty.LastVisitedSettlement != null && destinationForMobileParty != null && Campaign.Current.GameStarted)
          {
            List<CaravansCampaignBehavior.TradeActionLog> tradeActionLogList;
            if (!this._tradeActionLogs.TryGetValue(caravanParty, out tradeActionLogList))
            {
              tradeActionLogList = new List<CaravansCampaignBehavior.TradeActionLog>();
              this._tradeActionLogs.Add(caravanParty, tradeActionLogList);
            }
            int itemPrice2 = town.GetItemPrice(elementCopyAtIndex.EquipmentElement, caravanParty, false);
            tradeActionLogList.Add(this._tradeActionLogPool.CreateNewLog(town.Settlement, itemPrice2, elementCopyAtIndex));
          }
        }
      }
      while ((double) num2 > 0.0 && num3 > 0 && num3 < 100);
    }

    private int CaravanTotalValue(MobileParty caravanParty)
    {
      float num = 0.0f;
      for (int index = 0; index < caravanParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement itemRosterElement = caravanParty.ItemRoster[index];
        num += this.GetGlobalItemSellPrice(itemRosterElement.EquipmentElement.Item) * (float) itemRosterElement.Amount;
      }
      return (int) num + caravanParty.PartyTradeGold;
    }

    private float CalculateBuyValue(
      ItemCategory category,
      Town town,
      float budgetFactor,
      float capacityFactor)
    {
      CaravansCampaignBehavior.PriceIndexData priceIndexData;
      if (!category.IsTradeGood && !category.IsAnimal || !this._priceDictionary.TryGetValue(category, out priceIndexData) || town.MarketData.GetItemCountOfCategory(category) == 0)
        return 0.0f;
      float num1 = 0.0f;
      if (Campaign.Current.GameStarted && this._totalValueOfItemsAtCategory.ContainsKey(category))
        num1 = MathF.Sqrt((float) MathF.Min(this._totalValueOfItemsAtCategory[category], 5000) / 5000f) * 0.4f;
      float categoryPriceIndex = town.GetItemCategoryPriceIndex(category);
      float buySellPriceIndex = priceIndexData.AverageBuySellPriceIndex;
      float num2 = buySellPriceIndex * (1f - num1) - categoryPriceIndex;
      float num3 = 0.1f * MathF.Pow(town.MarketData.GetDemand(category), 0.5f);
      if ((double) num2 < 0.0)
        return 0.0f;
      float num4 = num2 * this._averageValuesCached[category];
      float num5 = num2 * 200f;
      float num6 = buySellPriceIndex / categoryPriceIndex;
      float num7 = category.Properties == ItemCategory.Property.BonusToFoodStores ? 1.1f : 1f;
      return (float) ((category == DefaultItemCategories.PackAnimal ? 1.5 : 1.0) * (double) num7 * (double) num6 * (double) num3 * ((double) num4 * (double) budgetFactor + (double) num5 * (double) capacityFactor));
    }

    private float GetGlobalItemSellPrice(ItemObject item)
    {
      CaravansCampaignBehavior.PriceIndexData priceIndexData;
      return !this._priceDictionary.TryGetValue(item.ItemCategory, out priceIndexData) ? 1f : priceIndexData.AverageBuySellPriceIndex * (float) item.Value;
    }

    protected void AddDialogs(CampaignGameStarter starter)
    {
      starter.AddPlayerLine("caravan_companion_talk_start", "hero_main_options", "caravan_companion_talk_start", "{=q0RY0dQG}We need to talk business.", new ConversationSentence.OnConditionDelegate(this.companion_is_caravan_leader_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_companion_talk_start_reply", "caravan_companion_talk_start", "caravan_companion_talk_start_reply", "{=9RiXgPc1}Certainly. What do you need to know?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_companion_trade_rumors", "caravan_companion_talk_start_reply", "caravan_companion_ask_trade_rumors", "{=oMuxr3X6}What news of the markets? Any good deals to be had?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_companion_ask_trade_rumors", "caravan_companion_ask_trade_rumors", "caravan_companion_anything_else", "{=sC4ZLZ8x}{COMMENT}", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_ask_trade_rumors_on_consequence));
      starter.AddDialogLine("caravan_companion_talk_player_thank", "caravan_companion_anything_else", "caravan_companion_talk_end", "{=DQBaaC0e}Is there anything else?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_companion_talk_not_leave", "caravan_companion_talk_end", "lord_pretalk", "{=i2FwKPmC}Yes, I wanted to talk about something else..", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_companion_talk_leave", "caravan_companion_talk_end", "close_window", "{=1IJouNaM}Carry on, then. Farewell.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_player_leave_encounter_on_consequence));
      starter.AddPlayerLine("caravan_companion_nevermind", "caravan_companion_talk_start_reply", "lord_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("player_caravan_talk_start", "start", "player_caravan_talk_start", "{=BsVXQEhj}How may I help you?", new ConversationSentence.OnConditionDelegate(this.player_caravan_talk_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_caravan_trade_rumors", "player_caravan_talk_start", "player_caravan_ask_trade_rumors", "{=shNl2Npf}What news of the markets?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("player_caravan_ask_trade_rumors", "player_caravan_ask_trade_rumors", "player_caravan_anything_else", "{=sC4ZLZ8x}{COMMENT}", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_ask_trade_rumors_on_consequence));
      starter.AddDialogLine("player_caravan_talk_player_thank", "player_caravan_anything_else", "player_caravan_talk_end", "{=DQBaaC0e}Is there anything else?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_caravan_talk_not_leave", "player_caravan_talk_end", "start", "{=i2FwKPmC}Yes, I wanted to talk about something else..", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_caravan_talk_leave", "player_caravan_talk_end", "close_window", "{=1IJouNaM}Carry on, then. Farewell.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_player_leave_encounter_on_consequence));
      starter.AddPlayerLine("player_caravan_nevermind", "player_caravan_talk_start", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_player_leave_encounter_on_consequence));
      starter.AddDialogLine("caravan_hero_leader_talk_start", "start", "caravan_talk", "{=!}{CARAVAN_GREETING}", new ConversationSentence.OnConditionDelegate(this.caravan_start_talk_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_pretalk", "caravan_pretalk", "caravan_talk", "{=3cBfSJOI}Is there anything else?[ib:normal]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_buy_products", "caravan_talk", "caravan_player_trade", "{=t0UGXPV4}I'm interested in trading. What kind of products do you have?", new ConversationSentence.OnConditionDelegate(this.caravan_buy_products_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_trade_rumors", "caravan_talk", "caravan_ask_trade_rumors", "{=b5Ucatkb}Tell me about your journeys. What news of the markets?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_ask_trade_rumors", "caravan_ask_trade_rumors", "caravan_trade_rumors_player_answer", "{=sC4ZLZ8x}{COMMENT}", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_ask_trade_rumors_on_consequence));
      starter.AddPlayerLine("caravan_trade_rumors_player_answer", "caravan_trade_rumors_player_answer", "caravan_talk_player_thank", "{=ha7EmrU9}Thank you for that information.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_talk_player_thank", "caravan_talk_player_thank", "caravan_talk", "{=BQuVWKvq}You're welcome. Is there anything we need to discuss?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("caravan_loot", "caravan_talk", "caravan_loot_talk", "{=WOBy5UfY}Hand over your goods, or die!", new ConversationSentence.OnConditionDelegate(this.caravan_loot_on_condition), (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.caravan_loot_on_clickable_condition));
      starter.AddPlayerLine("caravan_talk_leave", "caravan_talk", "close_window", "{=1IJouNaM}Carry on, then. Farewell.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_talk_leave_on_consequence));
      starter.AddDialogLine("caravan_player_trade_end", "caravan_player_trade", "caravan_pretalk", "{=tlLDHAIu}Very well. A pleasure doing business with you.[rf:convo_relaxed_happy][ib:demure]", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_player_trade_end_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_player_trade_end_response", "caravan_player_trade_response", "close_window", "{=2g2FhKb5}Farewell.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_fight", "caravan_loot_talk", "caravan_do_not_bribe", "{=QNaKmkt9}We're paid to guard this caravan. If you want to rob it, it's going to be over our dead bodies![rf:idle_angry][ib:aggressive]", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_not_bribe_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_fight", "caravan_do_not_bribe", "close_window", "{=EhxS7NQ4}So be it. Attack!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_fight_on_consequence));
      starter.AddPlayerLine("player_decided_to_not_fight_1", "caravan_do_not_bribe", "close_window", "{=bfPsE9M1}You must have misunderstood me. Go in peace.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_talk_leave_on_consequence));
      starter.AddDialogLine("caravan_accepted_to_give_some_goods", "caravan_loot_talk", "caravan_give_some_goods", "{=dMc3SjOK}We can pay you. {TAKE_MONEY_AND_PRODUCT_STRING}[rf:idle_angry][ib:nervous]", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_give_goods_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_some_goods", "caravan_give_some_goods", "caravan_end_talk_bribe", "{=0Pd84h4W}I'll accept that.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_everything", "caravan_give_some_goods", "player_wants_everything", "{=QZ6IcCIm}I want everything you've got.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_not_fight_2", "caravan_give_some_goods", "close_window", "{=bfPsE9M1}You must have misunderstood me. Go in peace.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.caravan_talk_leave_on_consequence));
      starter.AddDialogLine("caravan_fight_no_surrender", "player_wants_everything", "close_window", "{=3JfCwL31}You will have to fight us first![rf:idle_angry][ib:aggressive]", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_not_surrender_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_fight_on_consequence));
      starter.AddDialogLine("caravan_accepted_to_give_everything", "player_wants_everything", "player_decision_to_take_prisoners", "{=hbtbSag8}We can't fight you. We surrender. Please don't hurt us. Take what you want.[if:idle_angry][ib:nervous]", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_give_goods_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_do_not_take_prisoners", "player_decision_to_take_prisoners", "caravan_end_talk_surrender", "{=6kaia5qP}Give me all your wares!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_prisoner", "player_decision_to_take_prisoners", "caravan_taken_prisoner_warning_check", "{=1gv0AVUN}You are my prisoners now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_warn_player_to_take_prisoner", "caravan_taken_prisoner_warning_check", "caravan_taken_prisoner_warning_answer", "{=NuYzgBZB}You are going too far. The {KINGDOM} won't stand for the destruction of its caravans.", new ConversationSentence.OnConditionDelegate(this.conversation_warn_player_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_do_not_warn_player", "caravan_taken_prisoner_warning_check", "close_window", "{=BvytaDUJ}Heaven protect us from the likes of you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.player_take_prisoner_consequence)));
      starter.AddPlayerLine("player_decided_to_take_prisoner_continue", "caravan_taken_prisoner_warning_answer", "close_window", "{=WVkc4UgX}Continue.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_took_prisoner_on_consequence));
      starter.AddPlayerLine("player_decided_to_take_prisoner_leave", "caravan_taken_prisoner_warning_answer", "caravan_loot_talk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("caravan_bribery_leave", "caravan_end_talk_bribe", "close_window", "{=uPwKhAps}Can we leave now?", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_looted_leave_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_looted_leave_on_consequence));
      starter.AddDialogLine("caravan_surrender_leave", "caravan_end_talk_surrender", "close_window", "{=uPwKhAps}Can we leave now?", new ConversationSentence.OnConditionDelegate(this.conversation_caravan_looted_leave_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_caravan_surrender_leave_on_consequence));
    }

    private bool companion_is_caravan_leader_on_condition()
    {
      if (Hero.OneToOneConversationHero == null || MobileParty.ConversationParty == null || MobileParty.ConversationParty.Party.Owner != Hero.MainHero || !MobileParty.ConversationParty.IsCaravan)
        return false;
      return Hero.OneToOneConversationHero.IsPlayerCompanion || Hero.OneToOneConversationHero.Clan == Clan.PlayerClan;
    }

    private bool player_caravan_talk_start_on_condition()
    {
      return Hero.OneToOneConversationHero == null && MobileParty.ConversationParty != null && MobileParty.ConversationParty.Party.Owner == Hero.MainHero && MobileParty.ConversationParty.IsCaravan && PartyBase.MainParty.Side == BattleSideEnum.Attacker;
    }

    private void player_take_prisoner_consequence()
    {
      if (!MobileParty.MainParty.MapFaction.IsAtWarWith(PlayerEncounter.EncounteredMobileParty.MapFaction))
        return;
      this.conversation_caravan_took_prisoner_on_consequence();
    }

    private bool conversation_warn_player_on_condition()
    {
      IFaction mapFaction = MobileParty.ConversationParty.MapFaction;
      MBTextManager.SetTextVariable("KINGDOM", mapFaction.IsKingdomFaction ? ((Kingdom) mapFaction).EncyclopediaTitle : mapFaction.Name, false);
      return PlayerEncounter.Current != null && !PlayerEncounter.LeaveEncounter && !MobileParty.MainParty.MapFaction.IsAtWarWith(MobileParty.ConversationParty.MapFaction);
    }

    private bool caravan_start_talk_on_condition()
    {
      if (MobileParty.ConversationParty == null || !MobileParty.ConversationParty.IsCaravan)
        return false;
      CaravansCampaignBehavior.PlayerInteraction playerInteraction = this.GetPlayerInteraction(MobileParty.ConversationParty);
      this.SetPlayerInteraction(MobileParty.ConversationParty, CaravansCampaignBehavior.PlayerInteraction.Friendly);
      switch (playerInteraction)
      {
        case CaravansCampaignBehavior.PlayerInteraction.None:
          if (CharacterObject.OneToOneConversationCharacter.IsHero && PartyBase.MainParty.Side == BattleSideEnum.Attacker && MobileParty.ConversationParty.Party.Owner != Hero.MainHero)
          {
            StringHelpers.SetCharacterProperties("LEADER", CharacterObject.OneToOneConversationCharacter);
            MBTextManager.SetTextVariable("CARAVAN_GREETING", "{=afVsbikp}Greetings, traveller. How may we help you?", false);
            break;
          }
          MBTextManager.SetTextVariable("HOMETOWN", MobileParty.ConversationParty.HomeSettlement.EncyclopediaLinkWithName, false);
          StringHelpers.SetCharacterProperties("MERCHANT", MobileParty.ConversationParty.Party.Owner.CharacterObject);
          StringHelpers.SetCharacterProperties("PROTECTOR", MobileParty.ConversationParty.HomeSettlement.OwnerClan.Leader.CharacterObject);
          MBTextManager.SetTextVariable("CARAVAN_GREETING", new TextObject("{=FpUybbSk}Greetings. This caravan is owned by {MERCHANT.LINK}. We trade under the protection of {PROTECTOR.LINK}, master of {HOMETOWN}. How may we help you?[if:convo_normal]"), false);
          break;
        case CaravansCampaignBehavior.PlayerInteraction.Hostile:
          MBTextManager.SetTextVariable("CARAVAN_GREETING", "{=L7AN6ybY}What do you want with us now?", false);
          break;
        default:
          MBTextManager.SetTextVariable("CARAVAN_GREETING", "{=Z5kqbeyu}Greetings, once again. Is there anything else?", false);
          break;
      }
      return true;
    }

    private bool caravan_loot_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan && MobileParty.ConversationParty.Party.MapFaction != Hero.MainHero.MapFaction && MobileParty.ConversationParty.Party.Owner != Hero.MainHero;
    }

    private bool caravan_loot_on_clickable_condition(out TextObject explanation)
    {
      if (this._lootedCaravans.ContainsKey(MobileParty.ConversationParty))
      {
        explanation = new TextObject("{=il2khBNl}You just looted this party.");
        return false;
      }
      explanation = TextObject.Empty;
      int gold;
      ItemRoster items;
      this.BribeAmount(MobileParty.ConversationParty.Party, out gold, out items);
      bool flag1 = gold > 0;
      bool flag2 = !items.IsEmpty<ItemRosterElement>();
      if (flag1)
      {
        if (flag2)
        {
          TextObject variable = items.Count == 1 ? GameTexts.FindText("str_LEFT_RIGHT") : GameTexts.FindText("str_LEFT_comma_RIGHT");
          TextObject text1 = GameTexts.FindText("str_looted_party_have_money");
          text1.SetTextVariable("MONEY", gold);
          text1.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          text1.SetTextVariable("ITEM_LIST", variable);
          for (int index = 0; index < items.Count; ++index)
          {
            ItemRosterElement elementCopyAtIndex = items.GetElementCopyAtIndex(index);
            TextObject text2 = GameTexts.FindText("str_offered_item_list");
            text2.SetTextVariable("COUNT", elementCopyAtIndex.Amount);
            text2.SetTextVariable("ITEM", elementCopyAtIndex.EquipmentElement.Item.Name);
            variable.SetTextVariable("LEFT", text2);
            if (items.Count == 1)
              variable.SetTextVariable("RIGHT", TextObject.Empty);
            else if (items.Count - 2 > index)
            {
              TextObject text3 = GameTexts.FindText("str_LEFT_comma_RIGHT");
              variable.SetTextVariable("RIGHT", text3);
              variable = text3;
            }
            else
            {
              TextObject text4 = GameTexts.FindText("str_LEFT_ONLY");
              variable.SetTextVariable("RIGHT", text4);
              variable = text4;
            }
          }
          MBTextManager.SetTextVariable("TAKE_MONEY_AND_PRODUCT_STRING", text1, false);
        }
        else
        {
          TextObject text = GameTexts.FindText("str_looted_party_have_money_but_no_item");
          text.SetTextVariable("MONEY", gold);
          text.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
          MBTextManager.SetTextVariable("TAKE_MONEY_AND_PRODUCT_STRING", text, false);
        }
      }
      else if (flag2)
      {
        TextObject variable = items.Count == 1 ? GameTexts.FindText("str_LEFT_RIGHT") : GameTexts.FindText("str_LEFT_comma_RIGHT");
        TextObject text5 = GameTexts.FindText("str_looted_party_have_no_money");
        text5.SetTextVariable("ITEM_LIST", variable);
        for (int index = 0; index < items.Count; ++index)
        {
          ItemRosterElement elementCopyAtIndex = items.GetElementCopyAtIndex(index);
          TextObject text6 = GameTexts.FindText("str_offered_item_list");
          text6.SetTextVariable("COUNT", elementCopyAtIndex.Amount);
          text6.SetTextVariable("ITEM", elementCopyAtIndex.EquipmentElement.Item.Name);
          variable.SetTextVariable("LEFT", text6);
          if (items.Count == 1)
            variable.SetTextVariable("RIGHT", TextObject.Empty);
          else if (items.Count - 2 > index)
          {
            TextObject text7 = GameTexts.FindText("str_LEFT_comma_RIGHT");
            variable.SetTextVariable("RIGHT", text7);
            variable = text7;
          }
          else
          {
            TextObject text8 = GameTexts.FindText("str_LEFT_ONLY");
            variable.SetTextVariable("RIGHT", text8);
            variable = text8;
          }
        }
        MBTextManager.SetTextVariable("TAKE_MONEY_AND_PRODUCT_STRING", text5, false);
      }
      if (flag1 || flag2)
        return true;
      explanation = new TextObject("{=pbRwAjUN}They seem to have no valuable goods.");
      return false;
    }

    private bool caravan_buy_products_on_condition()
    {
      if (MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan)
      {
        for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count; ++index)
        {
          if (MobileParty.ConversationParty.ItemRoster.GetElementNumber(index) > 0)
            return true;
        }
      }
      return false;
    }

    private void caravan_player_leave_encounter_on_consequence()
    {
      PlayerEncounter.LeaveEncounter = true;
    }

    private void caravan_ask_trade_rumors_on_consequence()
    {
      Town destinationForMobileParty = this.GetDestinationForMobileParty(MobileParty.ConversationParty);
      if (MobileParty.ConversationParty.LastVisitedSettlement != null && destinationForMobileParty != null && MobileParty.ConversationParty.LastVisitedSettlement != destinationForMobileParty.Settlement)
      {
        List<(CaravansCampaignBehavior.TradeActionLog, float)> weightList = new List<(CaravansCampaignBehavior.TradeActionLog, float)>();
        List<CaravansCampaignBehavior.TradeActionLog> tradeActionLogList;
        if (this._tradeActionLogs.TryGetValue(MobileParty.ConversationParty, out tradeActionLogList))
        {
          foreach (CaravansCampaignBehavior.TradeActionLog tradeActionLog in tradeActionLogList)
          {
            float profitRate = tradeActionLog.ProfitRate;
            if ((double) profitRate > 1.2000000476837158 && tradeActionLog.SoldSettlement != null && tradeActionLog.SoldSettlement != tradeActionLog.BoughtSettlement)
              weightList.Add((tradeActionLog, profitRate));
          }
        }
        if (weightList.Count > 0)
        {
          CaravansCampaignBehavior.TradeActionLog tradeActionLog = MBRandom.ChooseWeighted<CaravansCampaignBehavior.TradeActionLog>((IReadOnlyList<(CaravansCampaignBehavior.TradeActionLog, float)>) weightList);
          EquipmentElement equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
          MBTextManager.SetTextVariable("ITEM_NAME", equipmentElement.Item.Name, false);
          MBTextManager.SetTextVariable("SETTLEMENT", tradeActionLog.BoughtSettlement.EncyclopediaLinkWithName, false);
          MBTextManager.SetTextVariable("DESTINATION", tradeActionLog.SoldSettlement.EncyclopediaLinkWithName, false);
          MBTextManager.SetTextVariable("BUY_COST", tradeActionLog.BuyPrice);
          MBTextManager.SetTextVariable("SELL_COST", tradeActionLog.SellPrice);
          MBTextManager.SetTextVariable("COMMENT", GameTexts.FindText("str_caravan_trade_comment"), false);
          if (this._tradeRumorTakenCaravans.ContainsKey(MobileParty.ConversationParty) && (!this._tradeRumorTakenCaravans.ContainsKey(MobileParty.ConversationParty) || !(CampaignTime.Now - this._tradeRumorTakenCaravans[MobileParty.ConversationParty] >= CampaignTime.Days(1f))))
            return;
          List<TradeRumor> newRumors = new List<TradeRumor>();
          List<TradeRumor> tradeRumorList1 = newRumors;
          Settlement settlement1 = destinationForMobileParty.Owner.Settlement;
          equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
          ItemObject itemCategory1 = equipmentElement.Item;
          Town town1 = destinationForMobileParty;
          equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
          ItemObject itemObject1 = equipmentElement.Item;
          int itemPrice1 = town1.GetItemPrice(itemObject1, (MobileParty) null, false);
          Town town2 = destinationForMobileParty;
          equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
          ItemObject itemObject2 = equipmentElement.Item;
          int itemPrice2 = town2.GetItemPrice(itemObject2, (MobileParty) null, true);
          TradeRumor tradeRumor1 = new TradeRumor(settlement1, itemCategory1, itemPrice1, itemPrice2, 10);
          tradeRumorList1.Add(tradeRumor1);
          Town town3 = MobileParty.ConversationParty.LastVisitedSettlement.Town;
          if (town3 != null)
          {
            List<TradeRumor> tradeRumorList2 = newRumors;
            Settlement settlement2 = town3.Owner.Settlement;
            equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
            ItemObject itemCategory2 = equipmentElement.Item;
            Town town4 = town3;
            equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
            ItemObject itemObject3 = equipmentElement.Item;
            int itemPrice3 = town4.GetItemPrice(itemObject3, (MobileParty) null, false);
            Town town5 = town3;
            equipmentElement = tradeActionLog.ItemRosterElement.EquipmentElement;
            ItemObject itemObject4 = equipmentElement.Item;
            int itemPrice4 = town5.GetItemPrice(itemObject4, (MobileParty) null, true);
            TradeRumor tradeRumor2 = new TradeRumor(settlement2, itemCategory2, itemPrice3, itemPrice4, 10);
            tradeRumorList2.Add(tradeRumor2);
          }
          if (newRumors.Count <= 0)
            return;
          CampaignEventDispatcher.Instance.OnTradeRumorIsTaken(newRumors, (Settlement) null);
          if (this._tradeRumorTakenCaravans.ContainsKey(MobileParty.ConversationParty) && CampaignTime.Now - this._tradeRumorTakenCaravans[MobileParty.ConversationParty] >= CampaignTime.Days(1f))
            this._tradeRumorTakenCaravans[MobileParty.ConversationParty] = CampaignTime.Now;
          else
            this._tradeRumorTakenCaravans.Add(MobileParty.ConversationParty, CampaignTime.Now);
        }
        else
          MBTextManager.SetTextVariable("COMMENT", GameTexts.FindText("str_caravan_trade_comment_no_profit"), false);
      }
      else
        MBTextManager.SetTextVariable("COMMENT", new TextObject("{=TEUVTPIa}Well, we've been resting in town for a while, so our information is probably quite out of date."), false);
    }

    private void caravan_talk_leave_on_consequence()
    {
      if (PlayerEncounter.Current == null)
        return;
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool conversation_caravan_player_trade_end_on_condition()
    {
      if (MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan)
        InventoryManager.OpenTradeWithCaravanOrAlleyParty(MobileParty.ConversationParty);
      return true;
    }

    private bool conversation_caravan_not_bribe_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan && !this.IsBribeFeasible();
    }

    private bool conversation_caravan_not_surrender_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan && !this.IsSurrenderFeasible(MobileParty.ConversationParty, MobileParty.MainParty);
    }

    private void conversation_caravan_fight_on_consequence()
    {
      this.SetPlayerInteraction(MobileParty.ConversationParty, CaravansCampaignBehavior.PlayerInteraction.Hostile);
      PlayerEncounter.Current.IsEnemy = true;
    }

    private bool conversation_caravan_give_goods_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan;
    }

    private bool conversation_caravan_looted_leave_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsCaravan;
    }

    private void conversation_caravan_looted_leave_on_consequence()
    {
      int gold;
      ItemRoster items;
      this.BribeAmount(MobileParty.ConversationParty.Party, out gold, out items);
      GiveGoldAction.ApplyForPartyToCharacter(MobileParty.ConversationParty.Party, Hero.MainHero, gold);
      if (!items.IsEmpty<ItemRosterElement>())
      {
        for (int index = items.Count - 1; index >= 0; --index)
          GiveItemAction.ApplyForParties(MobileParty.ConversationParty.Party, Hero.MainHero.PartyBelongedTo.Party, items[index]);
      }
      BeHostileAction.ApplyMinorCoercionHostileAction(PartyBase.MainParty, MobileParty.ConversationParty.Party);
      this._lootedCaravans.Add(MobileParty.ConversationParty, CampaignTime.Now);
      this.SetPlayerInteraction(MobileParty.ConversationParty, CaravansCampaignBehavior.PlayerInteraction.Hostile);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, MobileParty.ConversationParty, items, false);
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_caravan_surrender_leave_on_consequence()
    {
      ItemRoster lootedItems = new ItemRoster(MobileParty.ConversationParty.ItemRoster);
      bool flag = false;
      for (int index = 0; index < lootedItems.Count; ++index)
      {
        if (lootedItems.GetElementNumber(index) > 0)
        {
          flag = true;
          break;
        }
      }
      if (flag)
      {
        InventoryManager.OpenScreenAsLoot(new Dictionary<PartyBase, ItemRoster>()
        {
          {
            PartyBase.MainParty,
            lootedItems
          }
        });
        MobileParty.ConversationParty.ItemRoster.Clear();
      }
      int amount = MathF.Max(MobileParty.ConversationParty.PartyTradeGold, 0);
      if (amount > 0)
        GiveGoldAction.ApplyForPartyToCharacter(MobileParty.ConversationParty.Party, Hero.MainHero, amount);
      BeHostileAction.ApplyMajorCoercionHostileAction(PartyBase.MainParty, MobileParty.ConversationParty.Party);
      this._lootedCaravans.Add(MobileParty.ConversationParty, CampaignTime.Now);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, MobileParty.ConversationParty, lootedItems, false);
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_caravan_took_prisoner_on_consequence()
    {
      MobileParty encounteredMobileParty = PlayerEncounter.EncounteredMobileParty;
      ItemRoster lootedItems = new ItemRoster(encounteredMobileParty.ItemRoster);
      bool flag = false;
      for (int index = 0; index < lootedItems.Count; ++index)
      {
        if (lootedItems.GetElementNumber(index) > 0)
        {
          flag = true;
          break;
        }
      }
      if (flag)
      {
        InventoryManager.OpenScreenAsLoot(new Dictionary<PartyBase, ItemRoster>()
        {
          {
            PartyBase.MainParty,
            lootedItems
          }
        });
        encounteredMobileParty.ItemRoster.Clear();
      }
      int amount = MathF.Max(encounteredMobileParty.PartyTradeGold, 0);
      if (amount > 0)
        GiveGoldAction.ApplyForPartyToCharacter(encounteredMobileParty.Party, Hero.MainHero, amount);
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, encounteredMobileParty.Party);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) encounteredMobileParty.MemberRoster.GetTroopRoster())
        dummyTroopRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number);
      PartyScreenManager.OpenScreenAsLoot(TroopRoster.CreateDummyTroopRoster(), dummyTroopRoster, encounteredMobileParty.Name, dummyTroopRoster.TotalManCount);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, encounteredMobileParty, lootedItems, false);
      DestroyPartyAction.Apply(MobileParty.MainParty.Party, encounteredMobileParty);
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool IsBribeFeasible()
    {
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f - DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return MobileParty.ConversationParty.Party.RandomIntWithSeed(5U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.6f);
    }

    private bool IsSurrenderFeasible(MobileParty conversationParty, MobileParty mainParty)
    {
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f - DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return conversationParty.Party.RandomIntWithSeed(7U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty);
    }

    private void BribeAmount(PartyBase party, out int gold, out ItemRoster items)
    {
      int num1 = 0;
      ItemRoster source = new ItemRoster();
      bool flag = false;
      for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count; ++index)
      {
        num1 += MobileParty.ConversationParty.ItemRoster.GetElementUnitCost(index) * MobileParty.ConversationParty.ItemRoster.GetElementNumber(index);
        flag = true;
      }
      int b = MathF.Min((int) ((double) (num1 + MobileParty.ConversationParty.PartyTradeGold) * 0.05000000074505806), 2000);
      int num2 = MathF.Min(MobileParty.ConversationParty.PartyTradeGold, b);
      if (num2 < b & flag)
      {
        EquipmentElement equipmentElement;
        for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count; ++index)
        {
          ItemRosterElement elementCopyAtIndex = MobileParty.ConversationParty.ItemRoster.GetElementCopyAtIndex(index);
          equipmentElement = elementCopyAtIndex.EquipmentElement;
          if (equipmentElement.ItemValue * elementCopyAtIndex.Amount >= b - num2)
          {
            equipmentElement = elementCopyAtIndex.EquipmentElement;
            if (equipmentElement.Item.Type == ItemObject.ItemTypeEnum.Goods)
            {
              if (!source.IsEmpty<ItemRosterElement>())
                source.Clear();
              ItemRoster itemRoster = source;
              equipmentElement = elementCopyAtIndex.EquipmentElement;
              ItemObject itemObject = equipmentElement.Item;
              int amount = elementCopyAtIndex.Amount;
              itemRoster.AddToCounts(itemObject, amount);
              break;
            }
            if (source.IsEmpty<ItemRosterElement>())
            {
              ItemRoster itemRoster = source;
              equipmentElement = elementCopyAtIndex.EquipmentElement;
              ItemObject itemObject = equipmentElement.Item;
              int amount = elementCopyAtIndex.Amount;
              itemRoster.AddToCounts(itemObject, amount);
            }
          }
        }
        if (source.IsEmpty<ItemRosterElement>())
        {
          int num3 = b - num2;
          for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count && num3 > 0; ++index)
          {
            ItemRosterElement randomElement = MobileParty.ConversationParty.ItemRoster.GetRandomElement<ItemRosterElement>();
            int num4 = num3;
            int amount1 = randomElement.Amount;
            equipmentElement = randomElement.EquipmentElement;
            int itemValue = equipmentElement.ItemValue;
            int num5 = amount1 * itemValue;
            num3 = num4 - num5;
            ItemRoster itemRoster = source;
            equipmentElement = randomElement.EquipmentElement;
            ItemObject itemObject = equipmentElement.Item;
            int amount2 = randomElement.Amount;
            itemRoster.AddToCounts(itemObject, amount2);
          }
        }
      }
      gold = num2;
      items = source;
    }

    public class CaravansCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public CaravansCampaignBehaviorTypeDefiner()
        : base(60000)
      {
      }

      protected override void DefineEnumTypes()
      {
        this.AddEnumDefinition(typeof (CaravansCampaignBehavior.PlayerInteraction), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<MobileParty, CaravansCampaignBehavior.PlayerInteraction>));
        this.ConstructContainerDefinition(typeof (List<CaravansCampaignBehavior.TradeActionLog>));
        this.ConstructContainerDefinition(typeof (Dictionary<MobileParty, List<CaravansCampaignBehavior.TradeActionLog>>));
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (CaravansCampaignBehavior.TradeActionLog), 2);
      }
    }

    private enum PlayerInteraction
    {
      None,
      Friendly,
      TradedWith,
      Hostile,
    }

    private struct PriceIndexData
    {
      internal readonly float AverageBuySellPriceIndex;
      internal readonly float MinBuySellPriceIndex;

      public PriceIndexData(float averageBuySellPriceIndex, float minBuySellPriceIndex)
      {
        this.AverageBuySellPriceIndex = averageBuySellPriceIndex;
        this.MinBuySellPriceIndex = minBuySellPriceIndex;
      }
    }

    internal class TradeActionLog
    {
      [SaveableField(0)]
      public Settlement BoughtSettlement;
      [SaveableField(1)]
      public int BuyPrice;
      [SaveableField(2)]
      public int SellPrice;
      [SaveableField(3)]
      public ItemRosterElement ItemRosterElement;
      [SaveableField(4)]
      public Settlement SoldSettlement;
      [SaveableField(5)]
      public CampaignTime BoughtTime;

      public float ProfitRate => (float) this.SellPrice / (float) this.BuyPrice;

      public void OnSellAction(Settlement soldSettlement, int sellPrice)
      {
        this.SellPrice = sellPrice;
        this.SoldSettlement = soldSettlement;
      }

      public void Reset()
      {
        this.BoughtSettlement = (Settlement) null;
        this.SoldSettlement = (Settlement) null;
        this.SellPrice = 0;
        this.BuyPrice = 0;
      }

      internal static void AutoGeneratedStaticCollectObjectsTradeActionLog(
        object o,
        List<object> collectedObjects)
      {
        ((CaravansCampaignBehavior.TradeActionLog) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.BoughtSettlement);
        ItemRosterElement.AutoGeneratedStaticCollectObjectsItemRosterElement((object) this.ItemRosterElement, collectedObjects);
        collectedObjects.Add((object) this.SoldSettlement);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.BoughtTime, collectedObjects);
      }

      internal static object AutoGeneratedGetMemberValueBoughtSettlement(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).BoughtSettlement;
      }

      internal static object AutoGeneratedGetMemberValueBuyPrice(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).BuyPrice;
      }

      internal static object AutoGeneratedGetMemberValueSellPrice(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).SellPrice;
      }

      internal static object AutoGeneratedGetMemberValueItemRosterElement(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).ItemRosterElement;
      }

      internal static object AutoGeneratedGetMemberValueSoldSettlement(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).SoldSettlement;
      }

      internal static object AutoGeneratedGetMemberValueBoughtTime(object o)
      {
        return (object) ((CaravansCampaignBehavior.TradeActionLog) o).BoughtTime;
      }
    }

    internal class TradeActionLogPool
    {
      private Stack<CaravansCampaignBehavior.TradeActionLog> _stack;

      public int Size
      {
        get
        {
          Stack<CaravansCampaignBehavior.TradeActionLog> stack = this._stack;
          return stack == null ? 0 : __nonvirtual (stack.Count);
        }
      }

      private int MaxSize { get; }

      public TradeActionLogPool(int size)
      {
        this.MaxSize = size;
        this._stack = new Stack<CaravansCampaignBehavior.TradeActionLog>(size);
        for (int index = 0; index < size; ++index)
          this._stack.Push(new CaravansCampaignBehavior.TradeActionLog());
      }

      public CaravansCampaignBehavior.TradeActionLog CreateNewLog(
        Settlement boughtSettlement,
        int buyPrice,
        ItemRosterElement itemRosterElement)
      {
        CaravansCampaignBehavior.TradeActionLog newLog = this._stack.Count > 0 ? this._stack.Pop() : new CaravansCampaignBehavior.TradeActionLog();
        newLog.BoughtSettlement = boughtSettlement;
        newLog.BuyPrice = buyPrice;
        newLog.ItemRosterElement = itemRosterElement;
        newLog.BoughtTime = CampaignTime.Now;
        return newLog;
      }

      public void ReleaseLog(CaravansCampaignBehavior.TradeActionLog log)
      {
        log.Reset();
        if (this._stack.Count >= this.MaxSize)
          return;
        this._stack.Push(log);
      }

      public override string ToString() => string.Format("TrackPool: {0}", (object) this.Size);
    }
  }
}
