// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CraftingCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.CraftingSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class CraftingCampaignBehavior : 
    CampaignBehaviorBase,
    ICraftingCampaignBehavior,
    ICampaignBehavior
  {
    private const float WaitTargetHours = 8f;
    private const float CraftingOrderReplaceChance = 0.05f;
    private const float CreateCraftingOrderChance = 0.05f;
    private const int TownCraftingOrderCount = 6;
    private const int DefaultCraftingOrderPieceTier = 1;
    private const int CraftingOrderTroopBonusAmount = 1;
    private const int MinOrderDifficulty = 40;
    private const int MaxOrderDifficulty = 240;
    private const int MaxCraftingHistoryDesigns = 10;
    private ItemObject _latestCraftedItem;
    private ItemModifier _currentItemModifier;
    private Dictionary<CraftingTemplate, List<CraftingPiece>> _openedPartsDictionary = new Dictionary<CraftingTemplate, List<CraftingPiece>>();
    private Dictionary<CraftingTemplate, float> _openNewPartXpDictionary = new Dictionary<CraftingTemplate, float>();
    private Dictionary<ItemObject, CraftingCampaignBehavior.CraftedItemInitializationData> _craftedItemDictionary = new Dictionary<ItemObject, CraftingCampaignBehavior.CraftedItemInitializationData>();
    private Dictionary<Hero, CraftingCampaignBehavior.HeroCraftingRecord> _heroCraftingRecords = new Dictionary<Hero, CraftingCampaignBehavior.HeroCraftingRecord>();
    private List<WeaponDesign> _craftingHistory = new List<WeaponDesign>();
    private Dictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots> _craftingOrders = new Dictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots>();

    public IReadOnlyDictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots> CraftingOrders
    {
      get
      {
        return (IReadOnlyDictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots>) this._craftingOrders;
      }
    }

    public IReadOnlyCollection<WeaponDesign> CraftingHistory
    {
      get => (IReadOnlyCollection<WeaponDesign>) this._craftingHistory;
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<ItemObject>("_latestCraftedItem", ref this._latestCraftedItem);
      dataStore.SyncData<Dictionary<ItemObject, CraftingCampaignBehavior.CraftedItemInitializationData>>("_craftedItemDictionary", ref this._craftedItemDictionary);
      dataStore.SyncData<Dictionary<Hero, CraftingCampaignBehavior.HeroCraftingRecord>>("_heroCraftingRecordsNew", ref this._heroCraftingRecords);
      dataStore.SyncData<Dictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots>>("_craftingOrders", ref this._craftingOrders);
      dataStore.SyncData<List<WeaponDesign>>("_craftingHistory", ref this._craftingHistory);
      dataStore.SyncData<Dictionary<CraftingTemplate, List<CraftingPiece>>>("_openedPartsDictionary", ref this._openedPartsDictionary);
      dataStore.SyncData<Dictionary<CraftingTemplate, float>>("_openNewPartXpDictionary", ref this._openNewPartXpDictionary);
      if (!dataStore.IsLoading || !MBSaveLoad.IsUpdatingGameVersion || !(MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("e1.8.0")))
        return;
      List<CraftingPiece> data = new List<CraftingPiece>();
      dataStore.SyncData<List<CraftingPiece>>("_openedParts", ref data);
      if (data == null)
        return;
      this._openedPartsDictionary = new Dictionary<CraftingTemplate, List<CraftingPiece>>();
      foreach (CraftingTemplate key in (List<CraftingTemplate>) CraftingTemplate.All)
      {
        this._openedPartsDictionary.Add(key, new List<CraftingPiece>());
        foreach (CraftingPiece craftingPiece in data)
        {
          if (key.Pieces.Contains(craftingPiece) && !this._openedPartsDictionary[key].Contains(craftingPiece))
            this._openedPartsDictionary[key].Add(craftingPiece);
        }
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnNewItemCraftedEvent.AddNonSerializedListener((object) this, new Action<ItemObject, ItemModifier, bool>(this.OnNewItemCrafted));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.DailyTickSettlementEvent.AddNonSerializedListener((object) this, new Action<Settlement>(this.DailyTickSettlement));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      this.InitializeLists();
      MBList<Hero> e = new MBList<Hero>();
      foreach (SettlementComponent allTown in (List<Town>) Town.AllTowns)
      {
        Settlement settlement = allTown.Settlement;
        e.AddRange((IEnumerable<Hero>) settlement.HeroesWithoutParty);
        foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
        {
          if (party.LeaderHero != null && !party.IsMainParty)
            e.Add(party.LeaderHero);
        }
        if (e.Count > 0)
        {
          for (int orderSlot = 0; orderSlot < 6; ++orderSlot)
          {
            if (this.CraftingOrders[settlement.Town].GetAvailableSlot() > -1)
              this.CreateTownOrder(e.GetRandomElement<Hero>(), orderSlot);
          }
        }
        e.Clear();
      }
    }

    private void DailyTickSettlement(Settlement settlement)
    {
      if (!settlement.IsTown || !this.CraftingOrders[settlement.Town].IsThereAvailableSlot())
        return;
      List<Hero> heroList = new List<Hero>();
      heroList.AddRange((IEnumerable<Hero>) settlement.HeroesWithoutParty);
      foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
      {
        if (party.LeaderHero != null && !party.IsMainParty)
          heroList.Add(party.LeaderHero);
      }
      foreach (Hero orderOwner in heroList)
      {
        if (orderOwner != Hero.MainHero && (double) MBRandom.RandomFloat <= 0.05000000074505806)
        {
          int availableSlot = this.CraftingOrders[settlement.Town].GetAvailableSlot();
          if (availableSlot > -1)
            this.CreateTownOrder(orderOwner, availableSlot);
        }
      }
    }

    private void DailyTick()
    {
      foreach (KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots> craftingOrder in (IEnumerable<KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots>>) this.CraftingOrders)
      {
        foreach (CraftingOrder slot in craftingOrder.Value.Slots)
        {
          if (slot != null && (double) MBRandom.RandomFloat <= 0.05000000074505806)
            this.ReplaceCraftingOrder(craftingOrder.Key, slot);
        }
      }
    }

    private void HourlyTick()
    {
      foreach (KeyValuePair<Hero, CraftingCampaignBehavior.HeroCraftingRecord> heroCraftingRecord in this._heroCraftingRecords)
      {
        int heroCraftingStamina = this.GetMaxHeroCraftingStamina(heroCraftingRecord.Key);
        if (heroCraftingRecord.Value.CraftingStamina < heroCraftingStamina)
        {
          Hero key = heroCraftingRecord.Key;
          if (key.CurrentSettlement != null)
            heroCraftingRecord.Value.CraftingStamina = MathF.Min(heroCraftingStamina, heroCraftingRecord.Value.CraftingStamina + this.GetStaminaHourlyRecoveryRate(key));
        }
      }
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      this.RemoveOrdersOfHeroWithoutCompletionIfExists(victim);
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeLists();
      foreach (KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots> craftingOrder in this._craftingOrders)
      {
        for (int index = 0; index < 6; ++index)
        {
          CraftingOrder slot = craftingOrder.Value.Slots[index];
          if (slot != null && (slot.PreCraftedWeaponDesignItem == DefaultItems.Trash || slot.PreCraftedWeaponDesignItem == null || !slot.PreCraftedWeaponDesignItem.IsReady))
            this.CancelOrder(craftingOrder.Key, slot);
        }
      }
    }

    private int GetStaminaHourlyRecoveryRate(Hero hero)
    {
      int hourlyRecoveryRate = 5 + MathF.Round((float) hero.GetSkillValue(DefaultSkills.Crafting) * 0.025f);
      if (hero.GetPerkValue(DefaultPerks.Athletics.Stamina))
        hourlyRecoveryRate += MathF.Round((float) hourlyRecoveryRate * DefaultPerks.Athletics.Stamina.PrimaryBonus);
      return hourlyRecoveryRate;
    }

    private void OnNewItemCrafted(
      ItemObject itemObject,
      ItemModifier overridenItemModifier,
      bool isCraftingOrderItem)
    {
      if (this._craftedItemDictionary.ContainsKey(itemObject))
        return;
      CultureObject culture = MBObjectManager.Instance.GetObject<CultureObject>(itemObject.Culture.StringId);
      CraftingCampaignBehavior.CraftedItemInitializationData initializationData = new CraftingCampaignBehavior.CraftedItemInitializationData(itemObject.WeaponDesign, itemObject.Name, culture);
      this._craftedItemDictionary.Add(itemObject, initializationData);
    }

    private void AddResearchPoints(CraftingTemplate craftingTemplate, int researchPoints)
    {
      this._openNewPartXpDictionary[craftingTemplate] += (float) researchPoints;
      int count = craftingTemplate.Pieces.Count;
      int openedPartCount = craftingTemplate.Pieces.Count<CraftingPiece>((Func<CraftingPiece, bool>) (x => this.IsOpened(x, craftingTemplate)));
      float num = Campaign.Current.Models.SmithingModel.ResearchPointsNeedForNewPart(count, openedPartCount);
      do
      {
        if ((double) this._openNewPartXpDictionary[craftingTemplate] > (double) num)
        {
          this._openNewPartXpDictionary[craftingTemplate] -= num;
          if (this.OpenNewPart(craftingTemplate))
            ++openedPartCount;
        }
        num = Campaign.Current.Models.SmithingModel.ResearchPointsNeedForNewPart(count, craftingTemplate.Pieces.Count<CraftingPiece>((Func<CraftingPiece, bool>) (x => this.IsOpened(x, craftingTemplate))));
      }
      while ((double) this._openNewPartXpDictionary[craftingTemplate] > (double) num && openedPartCount < count);
    }

    private bool OpenNewPart(CraftingTemplate craftingTemplate)
    {
      int num = int.MaxValue;
      MBList<CraftingPiece> e = new MBList<CraftingPiece>();
      foreach (CraftingPiece piece in craftingTemplate.Pieces)
      {
        int pieceTier = piece.PieceTier;
        if (num >= pieceTier && !piece.IsHiddenOnDesigner && !this.IsOpened(piece, craftingTemplate))
        {
          if (num > piece.PieceTier)
          {
            e.Clear();
            num = pieceTier;
          }
          e.Add(piece);
        }
      }
      if (e.Count <= 0)
        return false;
      this.OpenPart(e.GetRandomElement<CraftingPiece>(), craftingTemplate);
      return true;
    }

    private void OpenPart(
      CraftingPiece selectedPiece,
      CraftingTemplate craftingTemplate,
      bool showNotification = true)
    {
      this._openedPartsDictionary[craftingTemplate].Add(selectedPiece);
      CampaignEventDispatcher.Instance.CraftingPartUnlocked(selectedPiece);
      if (!showNotification)
        return;
      TextObject message = new TextObject("{=p9F90bc0}New Smithing Part Unlocked: {PART_NAME} for {WEAPON_TYPE}.");
      message.SetTextVariable("PART_NAME", selectedPiece.Name);
      message.SetTextVariable("WEAPON_TYPE", craftingTemplate.TemplateName);
      MBInformationManager.AddQuickInformation(message);
    }

    public bool IsOpened(CraftingPiece craftingPiece, CraftingTemplate craftingTemplate)
    {
      return craftingPiece.IsGivenByDefault || this._openedPartsDictionary[craftingTemplate].Contains(craftingPiece);
    }

    public void InitializeCraftingElements()
    {
      List<ItemObject> itemObjectList = new List<ItemObject>();
      foreach (KeyValuePair<ItemObject, CraftingCampaignBehavior.CraftedItemInitializationData> craftedItem in this._craftedItemDictionary)
      {
        bool flag1 = true;
        WeaponDesign craftedData = craftedItem.Value.CraftedData;
        if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.1.0"))
        {
          if (craftedData.Template.BuildOrders == null)
          {
            flag1 = false;
          }
          else
          {
            WeaponDesignElement[] usedPieces = new WeaponDesignElement[craftedItem.Value.CraftedData.UsedPieces.Length];
            for (int index = 0; index < craftedItem.Value.CraftedData.UsedPieces.Length; ++index)
              usedPieces[index] = craftedItem.Value.CraftedData.UsedPieces[index].GetCopy();
            craftedData = new WeaponDesign(craftedData.Template, craftedData.WeaponName, usedPieces);
          }
        }
        if (flag1)
        {
          foreach (PieceData buildOrder in craftedData.Template.BuildOrders)
          {
            bool flag2 = false;
            foreach (WeaponDesignElement usedPiece in craftedData.UsedPieces)
            {
              if (buildOrder.PieceType == usedPiece.CraftingPiece.PieceType && usedPiece.CraftingPiece.IsValid)
                flag2 = true;
            }
            if (!flag2)
            {
              flag1 = false;
              break;
            }
          }
        }
        if (flag1)
        {
          ItemObject itemObject = TaleWorlds.Core.Crafting.InitializePreCraftedWeaponOnLoad(craftedItem.Key, craftedData, craftedItem.Value.ItemName, (BasicCultureObject) craftedItem.Value.Culture);
          if (itemObject == DefaultItems.Trash || itemObject == null)
          {
            itemObjectList.Add(craftedItem.Key);
            if (MBObjectManager.Instance.GetObject(craftedItem.Key.Id) != null)
              MBObjectManager.Instance.UnregisterObject((MBObjectBase) craftedItem.Key);
          }
          else
          {
            ItemObject.InitAsPlayerCraftedItem(ref itemObject);
            itemObject.IsReady = true;
          }
        }
        else
          itemObjectList.Add(craftedItem.Key);
      }
      foreach (ItemObject key in itemObjectList)
        this._craftedItemDictionary.Remove(key);
      foreach (KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots> craftingOrder in (IEnumerable<KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots>>) this.CraftingOrders)
      {
        foreach (CraftingOrder slot in craftingOrder.Value.Slots)
        {
          if (slot != null && !slot.IsPreCraftedWeaponDesignValid())
            craftingOrder.Value.RemoveTownOrder(slot);
          else
            slot?.InitializeCraftingOrderOnLoad();
        }
        List<CraftingOrder> craftingOrderList = new List<CraftingOrder>();
        foreach (CraftingOrder customOrder in (List<CraftingOrder>) craftingOrder.Value.CustomOrders)
        {
          if (!customOrder.IsPreCraftedWeaponDesignValid())
            craftingOrderList.Add(customOrder);
          else
            customOrder.InitializeCraftingOrderOnLoad();
        }
        foreach (CraftingOrder order in craftingOrderList)
          craftingOrder.Value.RemoveCustomOrder(order);
      }
    }

    public int GetCraftingDifficulty(WeaponDesign weaponDesign)
    {
      return Campaign.Current.Models.SmithingModel.CalculateWeaponDesignDifficulty(weaponDesign);
    }

    private void InitializeLists()
    {
      if (this._craftingOrders.IsEmpty<KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots>>())
      {
        foreach (Settlement settlement in (List<Settlement>) Settlement.All)
        {
          if (settlement.IsTown)
            this._craftingOrders.Add(settlement.Town, new CraftingCampaignBehavior.CraftingOrderSlots());
        }
      }
      foreach (KeyValuePair<CraftingTemplate, List<CraftingPiece>> keyValuePair in this._openedPartsDictionary.ToList<KeyValuePair<CraftingTemplate, List<CraftingPiece>>>())
      {
        if (!CraftingTemplate.All.Contains(keyValuePair.Key))
          this._openedPartsDictionary.Remove(keyValuePair.Key);
      }
      foreach (KeyValuePair<CraftingTemplate, float> keyValuePair in this._openNewPartXpDictionary.ToList<KeyValuePair<CraftingTemplate, float>>())
      {
        if (!CraftingTemplate.All.Contains(keyValuePair.Key))
          this._openNewPartXpDictionary.Remove(keyValuePair.Key);
      }
      foreach (CraftingTemplate key in (List<CraftingTemplate>) CraftingTemplate.All)
      {
        if (!this._openNewPartXpDictionary.ContainsKey(key))
          this._openNewPartXpDictionary.Add(key, 0.0f);
        if (!this._openedPartsDictionary.ContainsKey(key))
          this._openedPartsDictionary.Add(key, new List<CraftingPiece>());
        foreach (CraftingPiece craftingPiece in this._openedPartsDictionary[key].ToList<CraftingPiece>())
        {
          if (!key.Pieces.Contains(craftingPiece))
            this._openedPartsDictionary[key].Remove(craftingPiece);
        }
      }
    }

    private void AddDialogs(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddDialogLine("blacksmith_begin", "start", "blacksmith_player", "{=gYByVHQy}Good day, {?PLAYER.GENDER}madam{?}sir{\\?}. How may I help you?", new ConversationSentence.OnConditionDelegate(this.conversation_blacksmith_begin_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("blacksmith_craft_items", "blacksmith_player", "blacksmith_player_ok", "{=VXKGD0ta}I want to use your forge.", (ConversationSentence.OnConditionDelegate) (() => Campaign.Current.IsCraftingEnabled), new ConversationSentence.OnConsequenceDelegate(this.conversation_blacksmith_craft_items_on_consequence));
      campaignGameStarter.AddPlayerLine("blacksmith_leave", "blacksmith_player", "close_window", "{=iW9iKbb8}Nothing.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("blacksmith_player_ok", "blacksmith_player_ok", "blacksmith_player_after_craft", "{=FJ0uAo6p}{CRAFTING_END_TEXT}", new ConversationSentence.OnConditionDelegate(this.conversation_blacksmith_player_ok_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("blacksmith_player_after_craft_accept", "blacksmith_player_after_craft", "player_blacksmith_after_craft", "{=QUn2ugIX}Thank you. Here's your pay.", new ConversationSentence.OnConditionDelegate(this.conversation_blacksmith_player_after_craft_accept_on_condition), new ConversationSentence.OnConsequenceDelegate(this.conversation_blacksmith_player_after_craft_accept_on_consequence));
      campaignGameStarter.AddDialogLine("blacksmith_player_after_craft_anything_else", "player_blacksmith_after_craft", "blacksmith_player_1", "{=IvY187PJ}No matter. Anything else?", new ConversationSentence.OnConditionDelegate(this.conversation_blacksmith_player_after_craft_anything_else_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddPlayerLine("blacksmith_craft_items_1", "blacksmith_player_1", "blacksmith_player_ok", "{=hrn1Cdwo}There is something else I need you to make.", (ConversationSentence.OnConditionDelegate) (() => Campaign.Current.IsCraftingEnabled), new ConversationSentence.OnConsequenceDelegate(this.conversation_blacksmith_craft_items_on_consequence));
      campaignGameStarter.AddPlayerLine("blacksmith_leave_1", "blacksmith_player_1", "close_window", "{=iW9iKbb8}Nothing.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private bool conversation_blacksmith_begin_on_condition()
    {
      return CharacterObject.OneToOneConversationCharacter.Occupation == Occupation.Blacksmith;
    }

    private void conversation_blacksmith_craft_items_on_consequence()
    {
      CraftingHelper.OpenCrafting(CraftingTemplate.All[0]);
    }

    private bool conversation_blacksmith_player_ok_on_condition()
    {
      if (CharacterObject.OneToOneConversationCharacter.Occupation != Occupation.Blacksmith)
        return false;
      if (this._latestCraftedItem != null)
      {
        int num = this._latestCraftedItem.Value;
        TextObject text = new TextObject("{=zr80RMa6}This will cost you {AMOUNT}{GOLD_ICON}. Paid in advance, of course.");
        text.SetTextVariable("AMOUNT", num.ToString());
        MBTextManager.SetTextVariable("CRAFTING_END_TEXT", text, false);
      }
      else
        MBTextManager.SetTextVariable("CRAFTING_END_TEXT", new TextObject("{=rrQx9jaV}It seems you're not interested."), false);
      return true;
    }

    private bool conversation_blacksmith_player_after_craft_accept_on_condition()
    {
      return this._latestCraftedItem != null && Hero.MainHero.Gold >= this._latestCraftedItem.Value;
    }

    private void conversation_blacksmith_player_after_craft_accept_on_consequence()
    {
      ItemRoster leftRoster = new ItemRoster();
      leftRoster.AddToCounts(this._latestCraftedItem, 1);
      this._latestCraftedItem = (ItemObject) null;
      InventoryManager.OpenScreenAsTrade(leftRoster, (SettlementComponent) Settlement.CurrentSettlement.Town);
    }

    private bool conversation_blacksmith_player_after_craft_anything_else_on_condition()
    {
      this._latestCraftedItem = (ItemObject) null;
      return true;
    }

    public bool CanHeroUsePart(Hero hero, CraftingPiece craftingPiece) => true;

    public int GetHeroCraftingStamina(Hero hero)
    {
      return this.GetRecordForCompanion(hero).CraftingStamina;
    }

    private CraftingCampaignBehavior.HeroCraftingRecord GetRecordForCompanion(Hero hero)
    {
      CraftingCampaignBehavior.HeroCraftingRecord recordForCompanion;
      if (!this._heroCraftingRecords.TryGetValue(hero, out recordForCompanion))
      {
        recordForCompanion = new CraftingCampaignBehavior.HeroCraftingRecord(this.GetMaxHeroCraftingStamina(hero));
        this._heroCraftingRecords[hero] = recordForCompanion;
      }
      return recordForCompanion;
    }

    public void SetHeroCraftingStamina(Hero hero, int value)
    {
      this.GetRecordForCompanion(hero).CraftingStamina = MathF.Max(0, value);
    }

    public void SetCraftedWeaponName(ItemObject craftedWeaponItem, TextObject name)
    {
      CraftingCampaignBehavior.CraftedItemInitializationData initializationData;
      if (!this._craftedItemDictionary.TryGetValue(craftedWeaponItem, out initializationData))
        return;
      this._craftedItemDictionary[craftedWeaponItem] = new CraftingCampaignBehavior.CraftedItemInitializationData(initializationData.CraftedData, name, initializationData.Culture);
    }

    public int GetMaxHeroCraftingStamina(Hero hero)
    {
      return 100 + MathF.Round((float) hero.GetSkillValue(DefaultSkills.Crafting) * 0.5f);
    }

    public void DoRefinement(Hero hero, TaleWorlds.Core.Crafting.RefiningFormula refineFormula)
    {
      ItemRoster itemRoster = MobileParty.MainParty.ItemRoster;
      if (refineFormula.Input1Count > 0)
      {
        ItemObject craftingMaterialItem = Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(refineFormula.Input1);
        itemRoster.AddToCounts(craftingMaterialItem, -refineFormula.Input1Count);
      }
      if (refineFormula.Input2Count > 0)
      {
        ItemObject craftingMaterialItem = Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(refineFormula.Input2);
        itemRoster.AddToCounts(craftingMaterialItem, -refineFormula.Input2Count);
      }
      if (refineFormula.OutputCount > 0)
      {
        ItemObject craftingMaterialItem = Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(refineFormula.Output);
        itemRoster.AddToCounts(craftingMaterialItem, refineFormula.OutputCount);
      }
      if (refineFormula.Output2Count > 0)
      {
        ItemObject craftingMaterialItem = Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem(refineFormula.Output2);
        itemRoster.AddToCounts(craftingMaterialItem, refineFormula.Output2Count);
      }
      hero.AddSkillXp(DefaultSkills.Crafting, (float) Campaign.Current.Models.SmithingModel.GetSkillXpForRefining(ref refineFormula));
      int energyCostForRefining = Campaign.Current.Models.SmithingModel.GetEnergyCostForRefining(ref refineFormula, hero);
      this.SetHeroCraftingStamina(hero, this.GetHeroCraftingStamina(hero) - energyCostForRefining);
      CampaignEventDispatcher.Instance.OnItemsRefined(hero, refineFormula);
    }

    public void DoSmelting(Hero hero, EquipmentElement equipmentElement)
    {
      ItemRoster itemRoster = MobileParty.MainParty.ItemRoster;
      ItemObject itemObject = equipmentElement.Item;
      int[] smeltingOutputForItem = Campaign.Current.Models.SmithingModel.GetSmeltingOutputForItem(itemObject);
      for (int craftingMaterial = 8; craftingMaterial >= 0; --craftingMaterial)
      {
        if (smeltingOutputForItem[craftingMaterial] != 0)
          itemRoster.AddToCounts(Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem((CraftingMaterials) craftingMaterial), smeltingOutputForItem[craftingMaterial]);
      }
      itemRoster.AddToCounts(equipmentElement, -1);
      hero.AddSkillXp(DefaultSkills.Crafting, (float) Campaign.Current.Models.SmithingModel.GetSkillXpForSmelting(itemObject));
      int energyCostForSmelting = Campaign.Current.Models.SmithingModel.GetEnergyCostForSmelting(itemObject, hero);
      this.SetHeroCraftingStamina(hero, this.GetHeroCraftingStamina(hero) - energyCostForSmelting);
      this.AddResearchPoints(itemObject.WeaponDesign.Template, Campaign.Current.Models.SmithingModel.GetPartResearchGainForSmeltingItem(itemObject, hero));
      CampaignEventDispatcher.Instance.OnEquipmentSmeltedByHero(hero, equipmentElement);
    }

    public ItemObject CreateCraftedWeaponInFreeBuildMode(
      Hero hero,
      WeaponDesign weaponDesign,
      ItemModifier weaponModifier = null)
    {
      CraftingCampaignBehavior.SpendMaterials(weaponDesign);
      if (!(GameStateManager.Current.ActiveState is CraftingState activeState))
        return (ItemObject) null;
      ItemObject craftedItemObject = activeState.CraftingLogic.GetCurrentCraftedItemObject(true);
      ItemObject.InitAsPlayerCraftedItem(ref craftedItemObject);
      MBObjectManager.Instance.RegisterObject<ItemObject>(craftedItemObject);
      if (weaponModifier == null)
        PartyBase.MainParty.ItemRoster.AddToCounts(craftedItemObject, 1);
      else
        PartyBase.MainParty.ItemRoster.AddToCounts(new EquipmentElement(craftedItemObject, weaponModifier), 1);
      CampaignEventDispatcher.Instance.OnNewItemCrafted(craftedItemObject, weaponModifier, false);
      hero.AddSkillXp(DefaultSkills.Crafting, (float) Campaign.Current.Models.SmithingModel.GetSkillXpForSmithingInFreeBuildMode(craftedItemObject));
      int energyCostForSmithing = Campaign.Current.Models.SmithingModel.GetEnergyCostForSmithing(craftedItemObject, hero);
      this.SetHeroCraftingStamina(hero, this.GetHeroCraftingStamina(hero) - energyCostForSmithing);
      this.AddResearchPoints(weaponDesign.Template, Campaign.Current.Models.SmithingModel.GetPartResearchGainForSmithingItem(craftedItemObject, hero, true));
      this.AddItemToHistory(activeState.CraftingLogic.CurrentWeaponDesign);
      return craftedItemObject;
    }

    public ItemObject CreateCraftedWeaponInCraftingOrderMode(
      Hero crafterHero,
      CraftingOrder craftingOrder,
      WeaponDesign weaponDesign)
    {
      CraftingCampaignBehavior.SpendMaterials(weaponDesign);
      if (!(GameStateManager.Current.ActiveState is CraftingState activeState))
        return (ItemObject) null;
      ItemObject craftedItemObject = activeState.CraftingLogic.GetCurrentCraftedItemObject(true);
      ItemObject.InitAsPlayerCraftedItem(ref craftedItemObject);
      MBObjectManager.Instance.RegisterObject<ItemObject>(craftedItemObject);
      Campaign.Current.CampaignEvents.OnNewItemCrafted(craftedItemObject, (ItemModifier) null, true);
      float xpAmount = craftingOrder.GetOrderExperience(craftedItemObject, this._currentItemModifier) + (float) Campaign.Current.Models.SmithingModel.GetSkillXpForSmithingInCraftingOrderMode(craftedItemObject);
      crafterHero.AddSkillXp(DefaultSkills.Crafting, xpAmount);
      int energyCostForSmithing = Campaign.Current.Models.SmithingModel.GetEnergyCostForSmithing(craftedItemObject, crafterHero);
      this.SetHeroCraftingStamina(crafterHero, this.GetHeroCraftingStamina(crafterHero) - energyCostForSmithing);
      this.AddResearchPoints(weaponDesign.Template, Campaign.Current.Models.SmithingModel.GetPartResearchGainForSmithingItem(craftedItemObject, crafterHero, false));
      return craftedItemObject;
    }

    private static void SpendMaterials(WeaponDesign weaponDesign)
    {
      ItemRoster itemRoster = MobileParty.MainParty.ItemRoster;
      int[] costsForWeaponDesign = Campaign.Current.Models.SmithingModel.GetSmithingCostsForWeaponDesign(weaponDesign);
      for (int craftingMaterial = 8; craftingMaterial >= 0; --craftingMaterial)
      {
        if (costsForWeaponDesign[craftingMaterial] != 0)
          itemRoster.AddToCounts(Campaign.Current.Models.SmithingModel.GetCraftingMaterialItem((CraftingMaterials) craftingMaterial), costsForWeaponDesign[craftingMaterial]);
      }
    }

    private void AddItemToHistory(WeaponDesign design)
    {
      while (this._craftingHistory.Count >= 10)
        this._craftingHistory.RemoveAt(0);
      this._craftingHistory.Add(design);
    }

    public void CreateTownOrder(Hero orderOwner, int orderSlot)
    {
      if (orderOwner.CurrentSettlement == null || !orderOwner.CurrentSettlement.IsTown)
        Debug.Print("Order owner: " + orderOwner.StringId + " Settlement" + (orderOwner.CurrentSettlement == null ? "null" : orderOwner.CurrentSettlement.StringId) + " Order owner party: " + (orderOwner.PartyBelongedTo == null ? "null" : orderOwner.PartyBelongedTo.StringId));
      float townOrderDifficulty = this.GetTownOrderDifficulty(orderOwner.CurrentSettlement.Town, orderSlot);
      int pieceTier = (int) townOrderDifficulty / 50;
      CraftingTemplate randomElement = CraftingTemplate.All.GetRandomElement<CraftingTemplate>();
      WeaponDesign weaponDesignTemplate = new WeaponDesign(randomElement, TextObject.Empty, this.GetWeaponPieces(randomElement, pieceTier));
      this._craftingOrders[orderOwner.CurrentSettlement.Town].AddTownOrder(new CraftingOrder(orderOwner, townOrderDifficulty, weaponDesignTemplate, randomElement, orderSlot));
    }

    private float GetTownOrderDifficulty(Town town, int orderSlot)
    {
      int num = 0;
      switch (orderSlot)
      {
        case 0:
          num = MBRandom.RandomInt(40, 80);
          break;
        case 1:
          num = MBRandom.RandomInt(80, 120);
          break;
        case 2:
          num = MBRandom.RandomInt(120, 160);
          break;
        case 3:
          num = MBRandom.RandomInt(160, 200);
          break;
        case 4:
          num = MBRandom.RandomInt(200, 241);
          break;
        case 5:
          num = Hero.MainHero.GetSkillValue(DefaultSkills.Crafting);
          break;
      }
      return (float) num + town.Prosperity / 500f;
    }

    public CraftingOrder CreateCustomOrderForHero(
      Hero orderOwner,
      float orderDifficulty = -1f,
      WeaponDesign weaponDesign = null,
      CraftingTemplate craftingTemplate = null)
    {
      if ((double) orderDifficulty < 0.0)
        orderDifficulty = this.GetRandomOrderDifficulty(orderOwner.CurrentSettlement.Town);
      if (craftingTemplate == null)
        craftingTemplate = CraftingTemplate.All.GetRandomElement<CraftingTemplate>();
      if (weaponDesign == (WeaponDesign) null)
      {
        int pieceTier = (int) orderDifficulty / 40;
        weaponDesign = new WeaponDesign(craftingTemplate, TextObject.Empty, this.GetWeaponPieces(craftingTemplate, pieceTier));
      }
      CraftingOrder order = new CraftingOrder(orderOwner, orderDifficulty, weaponDesign, craftingTemplate);
      this._craftingOrders[orderOwner.CurrentSettlement.Town].AddCustomOrder(order);
      return order;
    }

    private float GetRandomOrderDifficulty(Town town)
    {
      int num1 = MBRandom.RandomInt(0, 6);
      int num2 = 0;
      switch (num1)
      {
        case 0:
          num2 = MBRandom.RandomInt(40, 80);
          break;
        case 1:
          num2 = MBRandom.RandomInt(80, 120);
          break;
        case 2:
          num2 = MBRandom.RandomInt(120, 160);
          break;
        case 3:
          num2 = MBRandom.RandomInt(160, 200);
          break;
        case 4:
          num2 = MBRandom.RandomInt(200, 241);
          break;
        case 5:
          num2 = Hero.MainHero.GetSkillValue(DefaultSkills.Crafting);
          break;
      }
      return (float) num2 + town.Prosperity / 500f;
    }

    private WeaponDesignElement[] GetWeaponPieces(CraftingTemplate craftingTemplate, int pieceTier)
    {
      WeaponDesignElement[] weaponPieces = new WeaponDesignElement[4];
      List<WeaponDesignElement>[] weaponDesignElementListArray = new List<WeaponDesignElement>[4];
      foreach (CraftingPiece piece in craftingTemplate.Pieces)
      {
        bool flag = false;
        foreach (PieceData buildOrder in craftingTemplate.BuildOrders)
        {
          if (buildOrder.PieceType == piece.PieceType)
          {
            flag = true;
            break;
          }
        }
        if (flag)
        {
          int pieceType = (int) piece.PieceType;
          if (weaponDesignElementListArray[pieceType] == null)
            weaponDesignElementListArray[pieceType] = new List<WeaponDesignElement>();
          weaponDesignElementListArray[pieceType].Add(WeaponDesignElement.CreateUsablePiece(piece));
        }
      }
      for (int pieceType = 0; pieceType < weaponPieces.Length; ++pieceType)
        weaponPieces[pieceType] = weaponDesignElementListArray[pieceType] == null ? WeaponDesignElement.GetInvalidPieceForType((CraftingPiece.PieceTypes) pieceType) : (weaponDesignElementListArray[pieceType].FirstOrDefaultQ<WeaponDesignElement>((Func<WeaponDesignElement, bool>) (p => !p.CraftingPiece.IsHiddenOnDesigner && p.CraftingPiece.PieceTier == pieceTier)) ?? weaponDesignElementListArray[pieceType].FirstOrDefaultQ<WeaponDesignElement>((Func<WeaponDesignElement, bool>) (p => !p.CraftingPiece.IsHiddenOnDesigner && p.CraftingPiece.PieceTier == 1))) ?? weaponDesignElementListArray[pieceType].First<WeaponDesignElement>((Func<WeaponDesignElement, bool>) (p => !p.CraftingPiece.IsHiddenOnDesigner));
      return weaponPieces;
    }

    private void ReplaceCraftingOrder(Town town, CraftingOrder order)
    {
      MBList<Hero> e = new MBList<Hero>();
      Settlement settlement = town.Settlement;
      e.AddRange((IEnumerable<Hero>) settlement.HeroesWithoutParty);
      foreach (MobileParty party in (List<MobileParty>) settlement.Parties)
      {
        if (party.LeaderHero != null && !party.IsMainParty)
          e.Add(party.LeaderHero);
      }
      int difficultyLevel = order.DifficultyLevel;
      this._craftingOrders[town].RemoveTownOrder(order);
      if (e.Count > 0)
        this.CreateTownOrder(e.GetRandomElement<Hero>(), difficultyLevel);
    }

    public void GetOrderResult(
      CraftingOrder craftingOrder,
      ItemObject craftedItem,
      out bool isSucceed,
      out TextObject orderRemark,
      out TextObject orderResult,
      out int finalReward)
    {
      finalReward = this.CalculateOrderPriceDifference(craftingOrder, craftedItem);
      float craftedStatsSum;
      float requiredStatsSum;
      bool thrustDamageCheck;
      bool swingDamageCheck;
      craftingOrder.CheckForBonusesAndPenalties(craftedItem, this._currentItemModifier, out craftedStatsSum, out requiredStatsSum, out thrustDamageCheck, out swingDamageCheck);
      isSucceed = (double) craftedStatsSum >= (double) requiredStatsSum & thrustDamageCheck & swingDamageCheck;
      int f = finalReward - craftingOrder.BaseGoldReward;
      orderRemark = TextObject.Empty;
      if (isSucceed)
      {
        orderResult = new TextObject("{=Nn49hU2W}The client is satisfied.");
        if (f == 0)
        {
          orderRemark = new TextObject("{=FWHvvZFq}\"This is exactly what I wanted. Here is your money, you've earned it.\"");
        }
        else
        {
          if ((double) f <= 0.0)
            return;
          orderRemark = new TextObject("{=raCa7QXj}\"This is even better than what I have imagined. Here is your money, and I'm putting a little extra for your effort.\"");
        }
      }
      else
      {
        orderResult = new TextObject("{=bC2jevlu}The client is displeased.");
        if (finalReward <= 0)
        {
          orderRemark = new TextObject("{=NZynd8vT}\"This weapon is worthless. I'm not giving you a dime!\"");
        }
        else
        {
          if (finalReward >= craftingOrder.BaseGoldReward)
            return;
          TextObject empty = TextObject.Empty;
          TextObject textObject = !thrustDamageCheck || !swingDamageCheck ? new TextObject("{=WyuIksRB}\"This weapon does not have the damage type I wanted. I'm cutting {AMOUNT}{GOLD_ICON} from the price.\"") : new TextObject("{=wU76OPxM}\"This is worse than what I've asked for. I'm cutting {AMOUNT}{GOLD_ICON} from the price.\"");
          textObject.SetTextVariable("AMOUNT", MathF.Abs(f));
          orderRemark = textObject;
        }
      }
    }

    private int CalculateOrderPriceDifference(CraftingOrder craftingOrder, ItemObject craftedItem)
    {
      float craftedStatsSum;
      float requiredStatsSum;
      bool thrustDamageCheck;
      bool swingDamageCheck;
      craftingOrder.CheckForBonusesAndPenalties(craftedItem, this._currentItemModifier, out craftedStatsSum, out requiredStatsSum, out thrustDamageCheck, out swingDamageCheck);
      float orderPriceDifference = (float) craftingOrder.BaseGoldReward;
      if (!craftedStatsSum.ApproximatelyEqualsTo(0.0f) && !requiredStatsSum.ApproximatelyEqualsTo(0.0f))
      {
        if ((double) craftedStatsSum < (double) requiredStatsSum || !thrustDamageCheck || !swingDamageCheck)
        {
          float b = (float) Campaign.Current.Models.TradeItemPriceFactorModel.GetTheoreticalMaxItemMarketValue(craftedItem) / (float) Campaign.Current.Models.TradeItemPriceFactorModel.GetTheoreticalMaxItemMarketValue(craftingOrder.PreCraftedWeaponDesignItem);
          orderPriceDifference = (float) craftingOrder.BaseGoldReward * 0.5f * MathF.Min(1f, b);
          if ((double) orderPriceDifference > (double) craftingOrder.BaseGoldReward)
            orderPriceDifference = (float) craftingOrder.BaseGoldReward * 0.5f;
        }
        else if ((double) craftedStatsSum > (double) requiredStatsSum)
          orderPriceDifference = (float) craftingOrder.BaseGoldReward * (float) (1.0 + ((double) craftedStatsSum - (double) requiredStatsSum) / (double) requiredStatsSum * 0.10000000149011612);
      }
      return (int) orderPriceDifference;
    }

    public void CompleteOrder(
      Town town,
      CraftingOrder craftingOrder,
      ItemObject craftedItem,
      Hero completerHero)
    {
      int orderPriceDifference = this.CalculateOrderPriceDifference(craftingOrder, craftedItem);
      bool isSucceed;
      this.GetOrderResult(craftingOrder, craftedItem, out isSucceed, out TextObject _, out TextObject _, out int _);
      GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, orderPriceDifference);
      if (this._craftingOrders[town].CustomOrders.Contains(craftingOrder))
      {
        this._craftingOrders[town].RemoveCustomOrder(craftingOrder);
      }
      else
      {
        if (craftingOrder.IsLordOrder)
        {
          this.ChangeCraftedOrderWithTheNoblesWeaponIfItIsBetter(craftedItem, craftingOrder);
          if (craftingOrder.OrderOwner.PartyBelongedTo != null)
            this.GiveTroopToNobleAtWeaponTier((int) craftedItem.Tier, craftingOrder.OrderOwner);
          if (isSucceed && completerHero.GetPerkValue(DefaultPerks.Crafting.SteelMaker3))
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(completerHero, craftingOrder.OrderOwner, (int) DefaultPerks.Crafting.SteelMaker3.SecondaryBonus);
        }
        else
        {
          craftingOrder.OrderOwner.AddPower((float) (craftedItem.Tier + 1));
          if (isSucceed && completerHero.GetPerkValue(DefaultPerks.Crafting.ExperiencedSmith))
            ChangeRelationAction.ApplyRelationChangeBetweenHeroes(completerHero, craftingOrder.OrderOwner, (int) DefaultPerks.Crafting.ExperiencedSmith.SecondaryBonus);
        }
        this._craftingOrders[town].RemoveTownOrder(craftingOrder);
      }
      CampaignEventDispatcher.Instance.OnCraftingOrderCompleted(town, craftingOrder, craftedItem, completerHero);
    }

    public ItemModifier GetCurrentItemModifier() => this._currentItemModifier;

    public void SetCurrentItemModifier(ItemModifier modifier)
    {
      this._currentItemModifier = modifier;
    }

    private void RemoveOrdersOfHeroWithoutCompletionIfExists(Hero hero)
    {
      List<CraftingOrder> craftingOrderList = new List<CraftingOrder>();
      foreach (KeyValuePair<Town, CraftingCampaignBehavior.CraftingOrderSlots> craftingOrder in this._craftingOrders)
      {
        for (int index = 0; index < 6; ++index)
        {
          if (craftingOrder.Value.Slots[index] != null && craftingOrder.Value.Slots[index].OrderOwner == hero)
            craftingOrder.Value.RemoveTownOrder(craftingOrder.Value.Slots[index]);
        }
      }
    }

    public void CancelCustomOrder(Town town, CraftingOrder craftingOrder)
    {
      if (this._craftingOrders[town].CustomOrders.Contains(craftingOrder))
        this._craftingOrders[town].RemoveCustomOrder(craftingOrder);
      else
        Debug.FailedAssert("Trying to cancel a custom order that doesn't exist.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\CampaignBehaviors\\CraftingCampaignBehavior.cs", nameof (CancelCustomOrder), 1251);
    }

    private void CancelOrder(Town town, CraftingOrder craftingOrder)
    {
      this._craftingOrders[town].RemoveTownOrder(craftingOrder);
    }

    private void ChangeCraftedOrderWithTheNoblesWeaponIfItIsBetter(
      ItemObject craftedItem,
      CraftingOrder craftingOrder)
    {
      Equipment battleEquipment = craftingOrder.OrderOwner.BattleEquipment;
      for (int index = 0; index < 12; ++index)
      {
        if (!battleEquipment[index].IsEmpty)
        {
          int weaponClass1 = (int) craftedItem.PrimaryWeapon.WeaponClass;
          WeaponClass? weaponClass2 = battleEquipment[index].Item.PrimaryWeapon?.WeaponClass;
          int valueOrDefault = (int) weaponClass2.GetValueOrDefault();
          if (weaponClass1 == valueOrDefault & weaponClass2.HasValue)
          {
            ItemObject itemObject = battleEquipment[index].Item;
            int thrustSpeed1 = itemObject.PrimaryWeapon.ThrustSpeed;
            int thrustSpeed2 = craftedItem.PrimaryWeapon.ThrustSpeed;
            int swingSpeed1 = itemObject.PrimaryWeapon.SwingSpeed;
            int swingSpeed2 = craftedItem.PrimaryWeapon.SwingSpeed;
            int missileSpeed1 = itemObject.PrimaryWeapon.MissileSpeed;
            int missileSpeed2 = craftedItem.PrimaryWeapon.MissileSpeed;
            float weaponBalance1 = itemObject.PrimaryWeapon.WeaponBalance;
            float weaponBalance2 = craftedItem.PrimaryWeapon.WeaponBalance;
            int thrustDamage1 = itemObject.PrimaryWeapon.ThrustDamage;
            int thrustDamage2 = craftedItem.PrimaryWeapon.ThrustDamage;
            DamageTypes thrustDamageType1 = itemObject.PrimaryWeapon.ThrustDamageType;
            DamageTypes thrustDamageType2 = craftedItem.PrimaryWeapon.ThrustDamageType;
            int swingDamage1 = itemObject.PrimaryWeapon.SwingDamage;
            int swingDamage2 = craftedItem.PrimaryWeapon.SwingDamage;
            DamageTypes swingDamageType1 = itemObject.PrimaryWeapon.SwingDamageType;
            DamageTypes swingDamageType2 = craftedItem.PrimaryWeapon.SwingDamageType;
            int accuracy1 = itemObject.PrimaryWeapon.Accuracy;
            int accuracy2 = craftedItem.PrimaryWeapon.Accuracy;
            float weight1 = itemObject.Weight;
            float weight2 = craftedItem.Weight;
            if (thrustSpeed2 > thrustSpeed1 && swingSpeed2 > swingSpeed1 && missileSpeed2 > missileSpeed1 && (double) weaponBalance2 > (double) weaponBalance1 && thrustDamage2 > thrustDamage1 && thrustDamageType1 == thrustDamageType2 && swingDamage2 > swingDamage1 && swingDamageType2 == swingDamageType1 && accuracy2 > accuracy1 && (double) weight2 < (double) weight1)
            {
              battleEquipment[index] = new EquipmentElement(craftedItem);
              break;
            }
          }
        }
      }
    }

    private void GiveTroopToNobleAtWeaponTier(int tier, Hero noble)
    {
      CharacterObject element = noble.Culture.BasicTroop;
      for (int index = 0; index < tier; ++index)
      {
        if (element.UpgradeTargets.Length != 0)
          element = element.UpgradeTargets.GetRandomElement<CharacterObject>();
      }
      noble.PartyBelongedTo.AddElementToMemberRoster(element, 1);
    }

    public class CraftingCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public CraftingCampaignBehaviorTypeDefiner()
        : base(150000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (CraftingCampaignBehavior.CraftedItemInitializationData), 10);
        this.AddClassDefinition(typeof (CraftingCampaignBehavior.HeroCraftingRecord), 20);
        this.AddClassDefinition(typeof (CraftingCampaignBehavior.CraftingOrderSlots), 30);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<ItemObject, CraftingCampaignBehavior.CraftedItemInitializationData>));
        this.ConstructContainerDefinition(typeof (Dictionary<Hero, CraftingCampaignBehavior.HeroCraftingRecord>));
        this.ConstructContainerDefinition(typeof (Dictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots>));
        this.ConstructContainerDefinition(typeof (List<CraftingOrder>));
      }
    }

    internal class CraftedItemInitializationData
    {
      [SaveableField(10)]
      public readonly WeaponDesign CraftedData;
      [SaveableField(20)]
      public readonly TextObject ItemName;
      [SaveableField(30)]
      public readonly CultureObject Culture;

      public CraftedItemInitializationData(
        WeaponDesign craftedData,
        TextObject itemName,
        CultureObject culture)
      {
        this.CraftedData = craftedData;
        this.ItemName = itemName;
        this.Culture = culture;
      }

      internal static void AutoGeneratedStaticCollectObjectsCraftedItemInitializationData(
        object o,
        List<object> collectedObjects)
      {
        ((CraftingCampaignBehavior.CraftedItemInitializationData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.CraftedData);
        collectedObjects.Add((object) this.ItemName);
        collectedObjects.Add((object) this.Culture);
      }

      internal static object AutoGeneratedGetMemberValueCraftedData(object o)
      {
        return (object) ((CraftingCampaignBehavior.CraftedItemInitializationData) o).CraftedData;
      }

      internal static object AutoGeneratedGetMemberValueItemName(object o)
      {
        return (object) ((CraftingCampaignBehavior.CraftedItemInitializationData) o).ItemName;
      }

      internal static object AutoGeneratedGetMemberValueCulture(object o)
      {
        return (object) ((CraftingCampaignBehavior.CraftedItemInitializationData) o).Culture;
      }
    }

    internal class HeroCraftingRecord
    {
      [SaveableField(10)]
      public int CraftingStamina;

      public HeroCraftingRecord(int maxStamina) => this.CraftingStamina = maxStamina;

      internal static void AutoGeneratedStaticCollectObjectsHeroCraftingRecord(
        object o,
        List<object> collectedObjects)
      {
        ((CraftingCampaignBehavior.HeroCraftingRecord) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
      }

      internal static object AutoGeneratedGetMemberValueCraftingStamina(object o)
      {
        return (object) ((CraftingCampaignBehavior.HeroCraftingRecord) o).CraftingStamina;
      }
    }

    public class CraftingOrderSlots
    {
      private const int SlotCount = 6;
      [SaveableField(10)]
      public CraftingOrder[] Slots;
      [SaveableField(30)]
      private MBList<CraftingOrder> _customOrders;

      public MBReadOnlyList<CraftingOrder> CustomOrders
      {
        get => (MBReadOnlyList<CraftingOrder>) this._customOrders;
      }

      public CraftingOrderSlots()
      {
        this.Slots = new CraftingOrder[6];
        for (int index = 0; index < 6; ++index)
          this.Slots[index] = (CraftingOrder) null;
        this._customOrders = new MBList<CraftingOrder>();
      }

      [LoadInitializationCallback]
      private void OnLoad()
      {
        if (this._customOrders != null)
          return;
        this._customOrders = new MBList<CraftingOrder>();
      }

      public bool IsThereAvailableSlot()
      {
        for (int index = 0; index < 6; ++index)
        {
          if (this.Slots[index] == null)
            return true;
        }
        return false;
      }

      public int GetAvailableSlot()
      {
        for (int availableSlot = 0; availableSlot < 6; ++availableSlot)
        {
          if (this.Slots[availableSlot] == null)
            return availableSlot;
        }
        return -1;
      }

      internal void AddTownOrder(CraftingOrder craftingOrder)
      {
        this.Slots[craftingOrder.DifficultyLevel] = craftingOrder;
      }

      internal void RemoveTownOrder(CraftingOrder craftingOrder)
      {
        this.Slots[craftingOrder.DifficultyLevel] = (CraftingOrder) null;
      }

      internal void AddCustomOrder(CraftingOrder order) => this._customOrders.Add(order);

      internal void RemoveCustomOrder(CraftingOrder order) => this._customOrders.Remove(order);

      internal static void AutoGeneratedStaticCollectObjectsCraftingOrderSlots(
        object o,
        List<object> collectedObjects)
      {
        ((CraftingCampaignBehavior.CraftingOrderSlots) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.Slots);
        collectedObjects.Add((object) this._customOrders);
      }

      internal static object AutoGeneratedGetMemberValueSlots(object o)
      {
        return (object) ((CraftingCampaignBehavior.CraftingOrderSlots) o).Slots;
      }

      internal static object AutoGeneratedGetMemberValue_customOrders(object o)
      {
        return (object) ((CraftingCampaignBehavior.CraftingOrderSlots) o)._customOrders;
      }
    }
  }
}
