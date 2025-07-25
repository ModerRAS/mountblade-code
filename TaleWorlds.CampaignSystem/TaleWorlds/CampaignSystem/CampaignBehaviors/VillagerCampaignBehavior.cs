// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.VillagerCampaignBehavior
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
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Map;
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
  public class VillagerCampaignBehavior : CampaignBehaviorBase
  {
    private const int MinimumNumberOfVillagersAtVillagerParty = 12;
    private const int OneVillagerPerHearth = 40;
    private float _collectFoodTotalWaitHours;
    private float _collectVolunteersTotalWaitHours;
    private float _collectFoodWaitHoursProgress;
    private float _collectVolunteerWaitHoursProgress;
    private Dictionary<MobileParty, CampaignTime> _lootedVillagers = new Dictionary<MobileParty, CampaignTime>();
    private Dictionary<MobileParty, VillagerCampaignBehavior.PlayerInteraction> _interactedVillagers = new Dictionary<MobileParty, VillagerCampaignBehavior.PlayerInteraction>();
    private Dictionary<Village, CampaignTime> _villageLastVillagerSendTime = new Dictionary<Village, CampaignTime>();
    private Dictionary<MobileParty, List<Settlement>> _previouslyChangedVillagerTargetsDueToEnemyOnWay = new Dictionary<MobileParty, List<Settlement>>();

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.HourlyTickSettlement));
      CampaignEvents.HourlyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.HourlyTickParty));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnMobilePartyCreated));
      CampaignEvents.DistributeLootToPartyEvent.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, Dictionary<PartyBase, ItemRoster>>(this.OnVillagerPartyLooted));
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
    }

    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      for (int index = 0; index < siegeEvent.BesiegedSettlement.Parties.Count; ++index)
      {
        if (siegeEvent.BesiegedSettlement.Parties[index].IsVillager)
          siegeEvent.BesiegedSettlement.Parties[index].Ai.SetMoveModeHold();
      }
    }

    private void OnVillagerPartyLooted(
      MapEvent mapEvent,
      PartyBase party,
      Dictionary<PartyBase, ItemRoster> loot)
    {
      foreach (PartyBase key in loot.Keys)
      {
        if (key.IsMobile && key.MobileParty.IsVillager && party.IsMobile)
          SkillLevelingManager.OnLoot(party.MobileParty, key.MobileParty, loot[key], true);
      }
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<float>("_collectFoodWaitHoursProgress", ref this._collectFoodWaitHoursProgress);
      dataStore.SyncData<float>("_collectVolunteerWaitHoursProgress", ref this._collectVolunteerWaitHoursProgress);
      dataStore.SyncData<Dictionary<MobileParty, CampaignTime>>("_lootedVillagers", ref this._lootedVillagers);
      dataStore.SyncData<Dictionary<MobileParty, VillagerCampaignBehavior.PlayerInteraction>>("_interactedVillagers", ref this._interactedVillagers);
      dataStore.SyncData<Dictionary<Village, CampaignTime>>("_villageLastVillagerSendTime", ref this._villageLastVillagerSendTime);
      dataStore.SyncData<Dictionary<MobileParty, List<Settlement>>>("_previouslyChangedVillagerTargetsDueToEnemyOnWay", ref this._previouslyChangedVillagerTargetsDueToEnemyOnWay);
    }

    private void DeleteExpiredLootedVillagers()
    {
      List<MobileParty> mobilePartyList = new List<MobileParty>();
      foreach (KeyValuePair<MobileParty, CampaignTime> lootedVillager in this._lootedVillagers)
      {
        if (CampaignTime.Now - lootedVillager.Value >= CampaignTime.Days(10f))
          mobilePartyList.Add(lootedVillager.Key);
      }
      foreach (MobileParty key in mobilePartyList)
        this._lootedVillagers.Remove(key);
    }

    public void DailyTick() => this.DeleteExpiredLootedVillagers();

    private void TickVillageThink(Settlement settlement)
    {
      Village village = settlement.Village;
      if (village == null || village.VillageState != Village.VillageStates.Normal || settlement.Party.MapEvent != null)
        return;
      this.ThinkAboutSendingItemToTown(village);
    }

    private void ThinkAboutSendingItemToTown(Village village)
    {
      if ((double) MBRandom.RandomFloat >= 0.15000000596046448)
        return;
      MobileParty mobileParty = village.VillagerPartyComponent?.MobileParty;
      if (mobileParty != null && (mobileParty.CurrentSettlement != village.Owner.Settlement || mobileParty.MapEvent != null) || village.Owner.MapEvent != null)
        return;
      int num = 0;
      for (int index = 0; index < village.Owner.ItemRoster.Count; ++index)
        num += village.Owner.ItemRoster[index].Amount;
      int werehouseCapacity = village.GetWerehouseCapacity();
      if (num < werehouseCapacity || village.Owner.MapEvent != null)
        return;
      if (mobileParty == null || this._villageLastVillagerSendTime.ContainsKey(village) && (double) this._villageLastVillagerSendTime[village].ElapsedDaysUntilNow > 7.0 && mobileParty.CurrentSettlement != village.Settlement)
      {
        if ((double) village.Hearth > 12.0)
          this.CreateVillagerParty(village);
      }
      else
      {
        int idealPartySize = this.FindIdealPartySize(village);
        if (mobileParty.MemberRoster.TotalManCount < idealPartySize)
          this.AddVillagersToParty(mobileParty, idealPartySize - mobileParty.MemberRoster.TotalManCount);
      }
      if (mobileParty == null)
        return;
      this.LoadAndSendVillagerParty(village, mobileParty);
    }

    private void AddVillagersToParty(MobileParty villagerParty, int numberOfVillagersToAdd)
    {
      if (numberOfVillagersToAdd > (int) villagerParty.HomeSettlement.Village.Hearth)
        numberOfVillagersToAdd = (int) villagerParty.HomeSettlement.Village.Hearth;
      villagerParty.HomeSettlement.Village.Hearth -= (float) ((numberOfVillagersToAdd + 1) / 2);
      CharacterObject character = villagerParty.HomeSettlement.Culture.VillagerPartyTemplate.Stacks.GetRandomElement<PartyTemplateStack>().Character;
      villagerParty.MemberRoster.AddToCounts(character, numberOfVillagersToAdd);
    }

    private int FindIdealPartySize(Village village)
    {
      float b = 0.0f;
      foreach ((ItemObject, float) production in (List<(ItemObject, float)>) village.VillageType.Productions)
      {
        float productionAmount = Campaign.Current.Models.VillageProductionCalculatorModel.CalculateDailyProductionAmount(village, production.Item1);
        b += productionAmount;
      }
      float num = (double) b > 10.0 ? (float) (40.0 * (1.0 - ((double) MathF.Min(40f, b) - 10.0) / 60.0)) : 40f;
      return 12 + (int) ((double) village.Hearth / (double) num);
    }

    private void CreateVillagerParty(Village village)
    {
      EnterSettlementAction.ApplyForParty(VillagerPartyComponent.CreateVillagerParty(village.Settlement.Culture.VillagerPartyTemplate.StringId + "_1", village, this.FindIdealPartySize(village)), village.Settlement);
    }

    private void LoadAndSendVillagerParty(Village village, MobileParty villagerParty)
    {
      if (!this._villageLastVillagerSendTime.ContainsKey(village))
        this._villageLastVillagerSendTime.Add(village, CampaignTime.Now);
      else
        this._villageLastVillagerSendTime[village] = CampaignTime.Now;
      VillagerCampaignBehavior.MoveItemsToVillagerParty(village, villagerParty);
      this.SendVillagerPartyToTradeBoundTown(villagerParty);
    }

    private static void MoveItemsToVillagerParty(Village village, MobileParty villagerParty)
    {
      ItemRoster itemRoster = village.Settlement.ItemRoster;
      float num = (float) villagerParty.InventoryCapacity - villagerParty.ItemRoster.TotalWeight;
      for (int index1 = 0; index1 < 4; ++index1)
      {
        for (int index2 = 0; index2 < itemRoster.Count; ++index2)
        {
          ItemRosterElement itemRosterElement = itemRoster[index2];
          ItemObject itemObject = itemRosterElement.EquipmentElement.Item;
          int number = MBRandom.RoundRandomized((float) itemRosterElement.Amount * 0.2f);
          if (number > 0)
          {
            if (!itemObject.HasHorseComponent && (double) itemObject.Weight * (double) number > (double) num)
            {
              number = MathF.Ceiling(num / itemObject.Weight);
              if (number <= 0)
                continue;
            }
            if (!itemObject.HasHorseComponent)
              num -= (float) number * itemObject.Weight;
            villagerParty.Party.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, number);
            itemRoster.AddToCounts(itemRosterElement.EquipmentElement, -number);
          }
        }
      }
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (this._interactedVillagers.ContainsKey(mobileParty))
        this._interactedVillagers.Remove(mobileParty);
      if (!this._previouslyChangedVillagerTargetsDueToEnemyOnWay.ContainsKey(mobileParty))
        return;
      this._previouslyChangedVillagerTargetsDueToEnemyOnWay.Remove(mobileParty);
    }

    private void OnMobilePartyCreated(MobileParty mobileParty)
    {
      if (!mobileParty.IsVillager)
        return;
      this._previouslyChangedVillagerTargetsDueToEnemyOnWay.Add(mobileParty, new List<Settlement>());
    }

    private void HourlyTickSettlement(Settlement settlement)
    {
      this.DestroyVillagerPartyIfMemberCountIsZero(settlement);
      this.ThinkAboutSendingInsideVillagersToTheirHomeVillage(settlement);
      this.TickVillageThink(settlement);
    }

    private void DestroyVillagerPartyIfMemberCountIsZero(Settlement settlement)
    {
      Village village = settlement.Village;
      if (village == null || village.VillagerPartyComponent == null || village.VillagerPartyComponent.MobileParty.MapEvent != null || village.VillagerPartyComponent.MobileParty.MemberRoster.TotalHealthyCount != 0)
        return;
      DestroyPartyAction.Apply((PartyBase) null, village.VillagerPartyComponent.MobileParty);
    }

    private void HourlyTickParty(MobileParty villagerParty)
    {
      if (!villagerParty.IsVillager || villagerParty.MapEvent != null)
        return;
      bool flag = false;
      if (villagerParty.CurrentSettlement != null)
      {
        if (villagerParty.HomeSettlement.Village.VillagerPartyComponent == null || villagerParty.HomeSettlement.Village.VillagerPartyComponent.MobileParty != villagerParty)
          DestroyPartyAction.Apply((PartyBase) null, villagerParty);
      }
      else if (villagerParty.DefaultBehavior == AiBehavior.GoToSettlement)
      {
        if (villagerParty.TargetSettlement.IsTown && (villagerParty.TargetSettlement == null || villagerParty.TargetSettlement.IsUnderSiege || villagerParty.Ai.NeedTargetReset || FactionManager.IsAtWarAgainstFaction(villagerParty.MapFaction, villagerParty.TargetSettlement.MapFaction)))
          flag = true;
      }
      else
        flag = true;
      if (!flag)
        return;
      if (villagerParty.ItemRoster.Count > 1)
      {
        if (villagerParty.Ai.NeedTargetReset)
          this._previouslyChangedVillagerTargetsDueToEnemyOnWay[villagerParty].Add(villagerParty.TargetSettlement);
        this.SendVillagerPartyToTradeBoundTown(villagerParty);
      }
      else
        this.SendVillagerPartyToVillage(villagerParty);
    }

    private void SendVillagerPartyToVillage(MobileParty villagerParty)
    {
      villagerParty.Ai.SetMoveGoToSettlement(villagerParty.HomeSettlement);
    }

    private void SendVillagerPartyToTradeBoundTown(MobileParty villagerParty)
    {
      Settlement tradeBound = villagerParty.HomeSettlement.Village.TradeBound;
      if (tradeBound == null || tradeBound.IsUnderSiege)
        return;
      villagerParty.Ai.SetMoveGoToSettlement(tradeBound);
    }

    private void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      if (mobileParty == null || !mobileParty.IsActive || !mobileParty.IsVillager)
        return;
      this._previouslyChangedVillagerTargetsDueToEnemyOnWay[mobileParty].Clear();
      if (settlement.IsTown)
        SellGoodsForTradeAction.ApplyByVillagerTrade(settlement, mobileParty);
      if (settlement.IsVillage)
      {
        int villageTaxFromIncome = Campaign.Current.Models.SettlementTaxModel.CalculateVillageTaxFromIncome(mobileParty.HomeSettlement.Village, mobileParty.PartyTradeGold);
        mobileParty.PartyTradeGold = 0;
        mobileParty.HomeSettlement.Village.TradeTaxAccumulated += villageTaxFromIncome;
      }
      if (!settlement.IsTown || settlement.Town.Governor == null || !settlement.Town.Governor.GetPerkValue(DefaultPerks.Trade.TravelingRumors))
        return;
      settlement.Town.TradeTaxAccumulated += MathF.Round(DefaultPerks.Trade.TravelingRumors.SecondaryBonus);
    }

    private void SetPlayerInteraction(
      MobileParty mobileParty,
      VillagerCampaignBehavior.PlayerInteraction interaction)
    {
      if (this._interactedVillagers.ContainsKey(mobileParty))
        this._interactedVillagers[mobileParty] = interaction;
      else
        this._interactedVillagers.Add(mobileParty, interaction);
    }

    private VillagerCampaignBehavior.PlayerInteraction GetPlayerInteraction(MobileParty mobileParty)
    {
      VillagerCampaignBehavior.PlayerInteraction playerInteraction;
      return this._interactedVillagers.TryGetValue(mobileParty, out playerInteraction) ? playerInteraction : VillagerCampaignBehavior.PlayerInteraction.None;
    }

    private void ThinkAboutSendingInsideVillagersToTheirHomeVillage(Settlement settlement)
    {
      if (!settlement.IsVillage && !settlement.IsTown || settlement.IsUnderSiege || settlement.Party.MapEvent != null)
        return;
      for (int index = 0; index < settlement.Parties.Count; ++index)
      {
        MobileParty party = settlement.Parties[index];
        if (party.IsActive && party.IsVillager && (double) MBRandom.RandomFloat < 0.20000000298023224)
        {
          if (settlement.IsTown)
            party.Ai.SetMoveGoToSettlement(party.HomeSettlement);
          else if (party.ItemRoster.Count > 1 && settlement != party.HomeSettlement)
            this.SendVillagerPartyToTradeBoundTown(party);
        }
      }
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
      this.AddMenus(campaignGameStarter);
    }

    protected void AddDialogs(CampaignGameStarter campaignGameSystemStarter)
    {
      this.AddVillageFarmerTradeAndLootDialogs(campaignGameSystemStarter);
    }

    private void AddMenus(CampaignGameStarter campaignGameSystemStarter)
    {
    }

    private void take_food_confirm_forget_it_on_consequence(MenuCallbackArgs args)
    {
      GameMenu.SwitchToMenu("village_hostile_action");
    }

    public bool taking_food_from_villagers_wait_on_condition(MenuCallbackArgs args)
    {
      this._collectFoodTotalWaitHours = (float) (12 - (int) ((double) MobilePartyHelper.GetHeroWithHighestSkill(MobileParty.MainParty, DefaultSkills.Roguery).GetSkillValue(DefaultSkills.Roguery) / 30.0));
      args.MenuContext.GameMenu.SetTargetedWaitingTimeAndInitialProgress(this._collectFoodTotalWaitHours, this._collectFoodWaitHoursProgress / this._collectFoodTotalWaitHours);
      return true;
    }

    public bool press_into_service_confirm_on_condition(MenuCallbackArgs args)
    {
      this._collectVolunteersTotalWaitHours = (float) (24 - (int) ((double) MobilePartyHelper.GetHeroWithHighestSkill(MobileParty.MainParty, DefaultSkills.Roguery).GetSkillValue(DefaultSkills.Roguery) / 15.0));
      args.MenuContext.GameMenu.SetTargetedWaitingTimeAndInitialProgress(this._collectVolunteersTotalWaitHours, this._collectFoodWaitHoursProgress / this._collectFoodTotalWaitHours);
      return true;
    }

    public void taking_food_from_villagers_wait_on_tick(
      MenuCallbackArgs args,
      CampaignTime campaignTime)
    {
      this._collectFoodWaitHoursProgress += (float) campaignTime.ToHours;
      args.MenuContext.GameMenu.SetProgressOfWaitingInMenu(this._collectFoodWaitHoursProgress / this._collectFoodTotalWaitHours);
    }

    public void press_into_service_confirm_on_tick(MenuCallbackArgs args, CampaignTime campaignTime)
    {
      this._collectVolunteerWaitHoursProgress += (float) campaignTime.ToHours;
      args.MenuContext.GameMenu.SetProgressOfWaitingInMenu(this._collectVolunteerWaitHoursProgress / this._collectVolunteersTotalWaitHours);
    }

    public void taking_food_from_villagers_wait_on_consequence(MenuCallbackArgs args)
    {
      Village village = Settlement.CurrentSettlement.Village;
      GameMenu.ActivateGameMenu("menu_village_take_food_success");
      ChangeVillageStateAction.ApplyBySettingToNormal(MobileParty.MainParty.CurrentSettlement);
    }

    private void press_into_service_confirm_on_consequence(MenuCallbackArgs args)
    {
      Village village = Settlement.CurrentSettlement.Village;
      GameMenu.ActivateGameMenu("menu_press_into_service_success");
      ChangeVillageStateAction.ApplyBySettingToNormal(MobileParty.MainParty.CurrentSettlement);
    }

    private void AddVillageFarmerTradeAndLootDialogs(CampaignGameStarter starter)
    {
      starter.AddDialogLine("village_farmer_talk_start", "start", "village_farmer_talk", "{=ddymPMWg}{VILLAGER_GREETING}", new ConversationSentence.OnConditionDelegate(this.village_farmer_talk_start_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("village_farmer_pretalk_start", "village_farmer_pretalk", "village_farmer_talk", "{=cZjaGL9R}Is there anything else I can do it for you?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("village_farmer_buy_products", "village_farmer_talk", "village_farmer_player_trade", "{=r46NWboa}I'm going to market too. What kind of products do you have?", new ConversationSentence.OnConditionDelegate(this.village_farmer_buy_products_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("village_farmer_specify_products", "village_farmer_player_trade", "player_trade_decision", "{=BxazyNwY}We have {PRODUCTS}. We can let you have them for {TOTAL_PRICE}{GOLD_ICON}.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_buy", "player_trade_decision", "close_window", "{=HQ6hyVNH}All right. Here is {TOTAL_PRICE}{GOLD_ICON}.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_player_decided_to_buy_on_consequence));
      starter.AddPlayerLine("player_decided_not_to_buy", "player_trade_decision", "village_farmer_pretalk", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("village_farmer_loot", "village_farmer_talk", "village_farmer_loot_talk", "{=XaPMUJV0}Whatever you have, I'm taking it. Surrender or die!", new ConversationSentence.OnConditionDelegate(this.village_farmer_loot_on_condition), (ConversationSentence.OnConsequenceDelegate) null, clickableConditionDelegate: new ConversationSentence.OnClickableConditionDelegate(this.village_farmer_loot_on_clickable_condition));
      starter.AddDialogLine("village_farmer_fight", "village_farmer_loot_talk", "village_farmer_do_not_bribe", "{=ctEEfvsk}What? We're not warriors, but I bet we can take you. If you want our goods, you'll have to fight us![rf:idle_angry][ib:aggressive]", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_not_bribe_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("village_farmer_leave", "village_farmer_talk", "close_window", "{=1IJouNaM}Carry on, then. Farewell.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_leave_on_consequence));
      starter.AddPlayerLine("player_decided_to_fight_villagers", "village_farmer_do_not_bribe", "close_window", "{=1r0tDsrR}Attack!", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_fight_on_consequence));
      starter.AddPlayerLine("player_decided_to_not_fight_villagers_1", "village_farmer_do_not_bribe", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_leave_on_consequence));
      starter.AddDialogLine("village_farmer_accepted_to_give_some_goods", "village_farmer_loot_talk", "village_farmer_give_some_goods", "{=dMc3SjOK}We can pay you. {TAKE_MONEY_AND_PRODUCT_STRING}[rf:idle_angry][ib:nervous]", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_give_goods_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_some_goods_villagers", "village_farmer_give_some_goods", "village_farmer_end_talk", "{=VT1hSCaw}All right.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_everything_villagers", "village_farmer_give_some_goods", "player_wants_everything_villagers", "{=VpGjkNrF}I want everything.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_not_fight_villagers_2", "village_farmer_give_some_goods", "close_window", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_leave_on_consequence));
      starter.AddDialogLine("village_farmer_fight_no_surrender", "player_wants_everything_villagers", "close_window", "{=wAhXFoNH}You'll have to fight us first![rf:idle_angry][ib:aggressive]", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_not_surrender_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_fight_on_consequence));
      starter.AddDialogLine("village_farmer_accepted_to_give_everything", "player_wants_everything_villagers", "player_decision_to_take_prisoner_villagers", "{=33mKghKQ}Please don't kill us. We surrender.[rf:idle_angry][ib:nervous]", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_give_goods_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_do_not_take_prisoner_villagers", "player_decision_to_take_prisoner_villagers", "village_farmer_end_talk_surrender", "{=6kaia5qP}Give me all your wares!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddPlayerLine("player_decided_to_take_prisoner_2", "player_decision_to_take_prisoner_villagers", "villager_taken_prisoner_warning", "{=g5G8AJ5n}You are my prisoner now.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("villager_warn_player_to_take_prisoner", "villager_taken_prisoner_warning", "villager_taken_prisoner_warning_answer", "{=dPOOmYGQ}You think the lords and warriors of the {KINGDOM} won't just stand by idly when their people are kidnapped? You'd best let us go!", new ConversationSentence.OnConditionDelegate(this.conversation_warn_player_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("villager_warn_player_to_take_prisoner_2", "villager_taken_prisoner_warning", "close_window", "{=BvytaDUJ}Heaven protect us from the likes of you.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() => Campaign.Current.ConversationManager.ConversationEndOneShot += new Action(this.conversation_village_farmer_took_prisoner_on_consequence)));
      starter.AddPlayerLine("player_decided_to_take_prisoner_continue_2", "villager_taken_prisoner_warning_answer", "close_window", "{=Dfl5WJfN}Enough talking. Now march.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_took_prisoner_on_consequence));
      starter.AddPlayerLine("player_decided_to_take_prisoner_leave_2", "villager_taken_prisoner_warning_answer", "village_farmer_loot_talk", "{=BNb88lyN}Never mind. Go on your way.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      starter.AddDialogLine("village_farmer_bribery_leave", "village_farmer_end_talk", "close_window", "{=Pa1ZtapI}Okay. Okay then. We're going.", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_looted_leave_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_looted_leave_on_consequence));
      starter.AddDialogLine("village_farmer_surrender_leave", "village_farmer_end_talk_surrender", "close_window", "{=Pa1ZtapI}Okay. Okay then. We're going.", new ConversationSentence.OnConditionDelegate(this.conversation_village_farmer_looted_leave_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_village_farmer_surrender_leave_on_consequence));
    }

    private bool village_farmer_loot_on_clickable_condition(out TextObject explanation)
    {
      if (this._lootedVillagers.ContainsKey(MobileParty.ConversationParty))
      {
        explanation = new TextObject("{=PVPBqy1e}You just looted these people.");
        return false;
      }
      explanation = TextObject.Empty;
      int gold;
      ItemRoster items;
      this.CalculateConversationPartyBribeAmount(out gold, out items);
      int num = gold > 0 ? 1 : 0;
      bool flag = !items.IsEmpty<ItemRosterElement>();
      if (num != 0 || flag)
        return true;
      explanation = new TextObject("{=pbRwAjUN}They seem to have no valuable goods.");
      return false;
    }

    private bool village_farmer_talk_start_on_condition()
    {
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      if (PlayerEncounter.Current == null || Campaign.Current.CurrentConversationContext != ConversationContext.PartyEncounter || !encounteredParty.IsMobile || !encounteredParty.MobileParty.IsVillager)
        return false;
      VillagerCampaignBehavior.PlayerInteraction playerInteraction = this.GetPlayerInteraction(encounteredParty.MobileParty);
      if (playerInteraction == VillagerCampaignBehavior.PlayerInteraction.None)
      {
        MBTextManager.SetTextVariable("VILLAGE", encounteredParty.MobileParty.HomeSettlement.EncyclopediaLinkWithName, false);
        MBTextManager.SetTextVariable("TOWN", (encounteredParty.MobileParty.HomeSettlement.Village.TradeBound == null ? (encounteredParty.MobileParty.LastVisitedSettlement == null || !encounteredParty.MobileParty.LastVisitedSettlement.IsTown ? SettlementHelper.FindNearestTown(toMapPoint: (IMapPoint) encounteredParty.MobileParty.HomeSettlement) : encounteredParty.MobileParty.LastVisitedSettlement) : encounteredParty.MobileParty.HomeSettlement.Village.TradeBound).EncyclopediaLinkWithName, false);
        if (encounteredParty.MobileParty.DefaultBehavior == AiBehavior.GoToSettlement && encounteredParty.MobileParty.TargetSettlement.IsTown)
          MBTextManager.SetTextVariable("VILLAGER_STATE", GameTexts.FindText("str_villager_goes_to_town"), false);
        else
          MBTextManager.SetTextVariable("VILLAGER_STATE", encounteredParty.MobileParty.PartyTradeGold > 0 ? GameTexts.FindText("str_villager_returns_to_village") : GameTexts.FindText("str_looted_villager_returns_to_village"), false);
        MBTextManager.SetTextVariable("VILLAGER_GREETING", "{=a7NrxcAD}Greetings, my {?PLAYER.GENDER}lady{?}lord{\\?}. We're farmers from the village of {VILLAGE}. {VILLAGER_STATE}".ToString(), false);
      }
      else if (playerInteraction == VillagerCampaignBehavior.PlayerInteraction.Hostile)
        MBTextManager.SetTextVariable("VILLAGER_GREETING", "{=L7AN6ybY}What do you want with us now?", false);
      else if (playerInteraction == VillagerCampaignBehavior.PlayerInteraction.Friendly)
        MBTextManager.SetTextVariable("VILLAGER_GREETING", "{=5Mu1cdbc}Greetings, once again. How may we help you?", false);
      if (playerInteraction == VillagerCampaignBehavior.PlayerInteraction.None)
        this.SetPlayerInteraction(encounteredParty.MobileParty, VillagerCampaignBehavior.PlayerInteraction.Friendly);
      return true;
    }

    private bool village_farmer_loot_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsVillager && MobileParty.ConversationParty.Party.MapFaction != Hero.MainHero.MapFaction;
    }

    private void conversation_village_farmer_leave_on_consequence()
    {
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool village_farmer_buy_products_on_condition()
    {
      bool flag = true;
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      if (!encounteredParty.MobileParty.IsVillager || encounteredParty.ItemRoster.IsEmpty<ItemRosterElement>())
        return false;
      int content1 = 0;
      for (int index = 0; index < encounteredParty.ItemRoster.Count; ++index)
      {
        ItemRosterElement elementCopyAtIndex = encounteredParty.ItemRoster.GetElementCopyAtIndex(index);
        if (elementCopyAtIndex.EquipmentElement.Item.ItemCategory != DefaultItemCategories.PackAnimal)
        {
          int content2 = encounteredParty.MobileParty.HomeSettlement.Village.GetItemPrice(elementCopyAtIndex.EquipmentElement, MobileParty.MainParty, true);
          int num = encounteredParty.MobileParty.HomeSettlement.Village.GetItemPrice(elementCopyAtIndex.EquipmentElement, MobileParty.MainParty, true);
          if (MobileParty.MainParty.HasPerk(DefaultPerks.Trade.SilverTongue, true))
          {
            content2 = MathF.Ceiling((float) content2 * (1f - DefaultPerks.Trade.SilverTongue.SecondaryBonus));
            num = MathF.Ceiling((float) num * (1f - DefaultPerks.Trade.SilverTongue.SecondaryBonus));
          }
          int elementNumber = encounteredParty.ItemRoster.GetElementNumber(index);
          content1 += num * elementNumber;
          MBTextManager.SetTextVariable("NUMBER_OF", elementNumber);
          MBTextManager.SetTextVariable("ITEM", elementCopyAtIndex.EquipmentElement.Item.Name, false);
          MBTextManager.SetTextVariable("AMOUNT", content2);
          if (flag)
          {
            MBTextManager.SetTextVariable("LEFT", GameTexts.FindText("str_number_of_item_and_price").ToString(), false);
            flag = false;
          }
          else
          {
            MBTextManager.SetTextVariable("RIGHT", GameTexts.FindText("str_number_of_item_and_price").ToString(), false);
            MBTextManager.SetTextVariable("LEFT", GameTexts.FindText("str_LEFT_comma_RIGHT").ToString(), false);
          }
        }
      }
      if (Hero.MainHero.Gold < content1 || content1 <= 0)
        return false;
      MBTextManager.SetTextVariable("PRODUCTS", GameTexts.FindText("str_LEFT_ONLY").ToString(), false);
      MBTextManager.SetTextVariable("TOTAL_PRICE", content1);
      return true;
    }

    private void conversation_player_decided_to_buy_on_consequence()
    {
      if (MobileParty.ConversationParty.IsVillager && MobileParty.ConversationParty.ItemRoster.Count > 0)
      {
        for (int index = MobileParty.ConversationParty.ItemRoster.Count - 1; index >= 0; --index)
        {
          ItemRosterElement elementCopyAtIndex1 = MobileParty.ConversationParty.ItemRoster.GetElementCopyAtIndex(index);
          if (elementCopyAtIndex1.EquipmentElement.Item.ItemCategory != DefaultItemCategories.PackAnimal)
          {
            int itemPrice = MobileParty.ConversationParty.HomeSettlement.Village.GetItemPrice(elementCopyAtIndex1.EquipmentElement, MobileParty.MainParty, true);
            int elementNumber = MobileParty.ConversationParty.ItemRoster.GetElementNumber(index);
            int num = elementNumber;
            int amount = itemPrice * num;
            if (elementNumber > 0)
            {
              GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, amount);
              MobileParty.ConversationParty.PartyTradeGold += amount;
              ItemRoster itemRoster1 = PartyBase.MainParty.ItemRoster;
              ItemRosterElement elementCopyAtIndex2 = MobileParty.ConversationParty.ItemRoster.GetElementCopyAtIndex(index);
              EquipmentElement equipmentElement1 = elementCopyAtIndex2.EquipmentElement;
              int number1 = elementNumber;
              itemRoster1.AddToCounts(equipmentElement1, number1);
              ItemRoster itemRoster2 = MobileParty.ConversationParty.ItemRoster;
              elementCopyAtIndex2 = MobileParty.ConversationParty.ItemRoster.GetElementCopyAtIndex(index);
              EquipmentElement equipmentElement2 = elementCopyAtIndex2.EquipmentElement;
              int number2 = -1 * elementNumber;
              itemRoster2.AddToCounts(equipmentElement2, number2);
            }
          }
        }
      }
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool conversation_village_farmer_not_bribe_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsVillager && !this.IsBribeFeasible(MobileParty.ConversationParty);
    }

    private bool conversation_village_farmer_not_surrender_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsVillager && !this.IsSurrenderFeasible(MobileParty.ConversationParty);
    }

    private bool conversation_village_farmer_looted_leave_on_condition()
    {
      return MobileParty.ConversationParty != null && MobileParty.ConversationParty.IsVillager;
    }

    private bool conversation_warn_player_on_condition()
    {
      MBTextManager.SetTextVariable("KINGDOM", MobileParty.ConversationParty.MapFaction.InformalName, false);
      return !MobileParty.MainParty.MapFaction.IsAtWarWith(MobileParty.ConversationParty.MapFaction);
    }

    private void conversation_village_farmer_took_prisoner_on_consequence()
    {
      ItemRoster lootedItems = new ItemRoster(PlayerEncounter.EncounteredParty.ItemRoster);
      if (lootedItems.Count > 0)
      {
        InventoryManager.OpenScreenAsLoot(new Dictionary<PartyBase, ItemRoster>()
        {
          {
            PartyBase.MainParty,
            lootedItems
          }
        });
        PlayerEncounter.EncounteredParty.ItemRoster.Clear();
      }
      int partyTradeGold = PlayerEncounter.EncounteredParty.MobileParty.PartyTradeGold;
      if (partyTradeGold > 0)
        GiveGoldAction.ApplyForPartyToCharacter(PlayerEncounter.EncounteredParty, Hero.MainHero, partyTradeGold);
      BeHostileAction.ApplyEncounterHostileAction(PartyBase.MainParty, PlayerEncounter.EncounteredParty);
      TroopRoster dummyTroopRoster = TroopRoster.CreateDummyTroopRoster();
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) PlayerEncounter.EncounteredParty.MemberRoster.GetTroopRoster())
        dummyTroopRoster.AddToCounts(troopRosterElement.Character, troopRosterElement.Number);
      PartyScreenManager.OpenScreenAsLoot(TroopRoster.CreateDummyTroopRoster(), dummyTroopRoster, PlayerEncounter.EncounteredParty.Name, dummyTroopRoster.TotalManCount);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, PlayerEncounter.EncounteredParty.MobileParty, lootedItems, false);
      DestroyPartyAction.Apply(MobileParty.MainParty.Party, PlayerEncounter.EncounteredParty.MobileParty);
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_village_farmer_fight_on_consequence()
    {
      PlayerEncounter.Current.IsEnemy = true;
      this.SetPlayerInteraction(MobileParty.ConversationParty, VillagerCampaignBehavior.PlayerInteraction.Hostile);
    }

    private bool conversation_village_farmer_give_goods_on_condition()
    {
      int gold;
      ItemRoster items;
      this.CalculateConversationPartyBribeAmount(out gold, out items);
      int num = gold > 0 ? 1 : 0;
      bool flag = !items.IsEmpty<ItemRosterElement>();
      if (num != 0)
      {
        if (flag)
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
      else if (flag)
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
      return true;
    }

    private void conversation_village_farmer_looted_leave_on_consequence()
    {
      int gold;
      ItemRoster items;
      this.CalculateConversationPartyBribeAmount(out gold, out items);
      GiveGoldAction.ApplyForPartyToCharacter(MobileParty.ConversationParty.Party, Hero.MainHero, gold);
      if (!items.IsEmpty<ItemRosterElement>())
      {
        for (int index = items.Count - 1; index >= 0; --index)
          GiveItemAction.ApplyForParties(MobileParty.ConversationParty.Party, Hero.MainHero.PartyBelongedTo.Party, items[index]);
      }
      BeHostileAction.ApplyMinorCoercionHostileAction(PartyBase.MainParty, MobileParty.ConversationParty.Party);
      this.SetPlayerInteraction(MobileParty.ConversationParty, VillagerCampaignBehavior.PlayerInteraction.Hostile);
      this._lootedVillagers.Add(MobileParty.ConversationParty, CampaignTime.Now);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, MobileParty.ConversationParty, items, false);
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_village_farmer_surrender_leave_on_consequence()
    {
      ItemRoster lootedItems = new ItemRoster(MobileParty.ConversationParty.ItemRoster);
      if (lootedItems.Count > 0)
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
      int partyTradeGold = MobileParty.ConversationParty.PartyTradeGold;
      if (partyTradeGold > 0)
        GiveGoldAction.ApplyForPartyToCharacter(MobileParty.ConversationParty.Party, Hero.MainHero, partyTradeGold);
      BeHostileAction.ApplyMajorCoercionHostileAction(PartyBase.MainParty, MobileParty.ConversationParty.Party);
      this._lootedVillagers.Add(MobileParty.ConversationParty, CampaignTime.Now);
      SkillLevelingManager.OnLoot(MobileParty.MainParty, MobileParty.ConversationParty, lootedItems, false);
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool IsBribeFeasible(MobileParty conversationParty)
    {
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.05f) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f + DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return conversationParty.Party.RandomIntWithSeed(3U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(conversationParty, MobileParty.MainParty, 0.4f);
    }

    private bool IsSurrenderFeasible(MobileParty conversationParty)
    {
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.05f) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f + DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return conversationParty.Party.RandomIntWithSeed(4U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(conversationParty, MobileParty.MainParty);
    }

    private void CalculateConversationPartyBribeAmount(out int gold, out ItemRoster items)
    {
      int num1 = 0;
      ItemRoster itemRoster1 = new ItemRoster();
      bool flag = false;
      for (int index = 0; index < MobileParty.ConversationParty.ItemRoster.Count; ++index)
      {
        num1 += MobileParty.ConversationParty.ItemRoster.GetElementUnitCost(index) * MobileParty.ConversationParty.ItemRoster.GetElementNumber(index);
        if (!flag && MobileParty.ConversationParty.ItemRoster.GetElementNumber(index) > 0)
          flag = true;
      }
      int b = MathF.Min((int) ((double) (num1 + MobileParty.ConversationParty.PartyTradeGold) * 0.20000000298023224), 2000);
      if (MobileParty.MainParty.HasPerk(DefaultPerks.Roguery.SaltTheEarth))
        b = MathF.Round((float) b * (1f + DefaultPerks.Roguery.SaltTheEarth.PrimaryBonus));
      int num2 = MathF.Min(MobileParty.ConversationParty.PartyTradeGold, b);
      if (num2 < b & flag)
      {
        ItemRoster itemRoster2 = new ItemRoster(MobileParty.ConversationParty.ItemRoster);
        int num3 = 0;
        while (num2 + num3 < b)
        {
          ItemRosterElement randomElement = itemRoster2.GetRandomElement<ItemRosterElement>();
          int num4 = num3;
          EquipmentElement equipmentElement = randomElement.EquipmentElement;
          int itemValue = equipmentElement.ItemValue;
          num3 = num4 + itemValue;
          EquipmentElement rosterElement;
          ref EquipmentElement local = ref rosterElement;
          equipmentElement = randomElement.EquipmentElement;
          ItemObject itemObject = equipmentElement.Item;
          equipmentElement = randomElement.EquipmentElement;
          ItemModifier itemModifier = equipmentElement.ItemModifier;
          local = new EquipmentElement(itemObject, itemModifier);
          itemRoster1.AddToCounts(rosterElement, 1);
          itemRoster2.AddToCounts(rosterElement, -1);
          if (itemRoster2.IsEmpty<ItemRosterElement>())
            break;
        }
      }
      gold = num2;
      items = itemRoster1;
    }

    public class VillagerCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public VillagerCampaignBehaviorTypeDefiner()
        : base(140000)
      {
      }

      protected override void DefineEnumTypes()
      {
        this.AddEnumDefinition(typeof (VillagerCampaignBehavior.PlayerInteraction), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<MobileParty, VillagerCampaignBehavior.PlayerInteraction>));
      }
    }

    private enum PlayerInteraction
    {
      None,
      Friendly,
      TradedWith,
      Hostile,
    }
  }
}
