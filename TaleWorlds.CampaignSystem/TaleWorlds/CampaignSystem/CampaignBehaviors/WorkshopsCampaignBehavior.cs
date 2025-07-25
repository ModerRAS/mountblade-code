// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.WorkshopsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class WorkshopsCampaignBehavior : CampaignBehaviorBase, IWorkshopWarehouseCampaignBehavior
  {
    private KeyValuePair<Settlement, ItemRoster>[] _warehouseRosterPerSettlement;
    private WorkshopsCampaignBehavior.WorkshopData[] _workshopData;
    private readonly Dictionary<ItemCategory, List<ItemObject>> _itemsInCategory = new Dictionary<ItemCategory, List<ItemObject>>();

    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.OnAfterSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterSessionLaunched));
      CampaignEvents.OnGameLoadedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnGameLoaded));
      CampaignEvents.DailyTickTownEvent.AddNonSerializedListener((object) this, new Action<Town>(this.DailyTickTown));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.WorkshopOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Workshop, Hero>(this.OnWorkshopOwnerChanged));
      CampaignEvents.WorkshopTypeChangedEvent.AddNonSerializedListener((object) this, new Action<Workshop>(this.OnWorkshopTypeChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<KeyValuePair<Settlement, ItemRoster>[]>("_warehouseRosterPerSettlement", ref this._warehouseRosterPerSettlement);
      dataStore.SyncData<WorkshopsCampaignBehavior.WorkshopData[]>("_workshopData", ref this._workshopData);
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      if (i < 10)
        return;
      if (i == 10)
      {
        this.InitializeBehaviorData();
        this.FillItemsInAllCategories();
        this.InitializeWorkshops();
        this.BuildWorkshopsAtGameStart();
      }
      if (i % 20 != 0)
        return;
      this.RunTownShopsAtGameStart();
    }

    private void InitializeBehaviorData()
    {
      if (this._workshopData == null)
        this._workshopData = new WorkshopsCampaignBehavior.WorkshopData[Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave];
      if (this._warehouseRosterPerSettlement != null)
        return;
      this._warehouseRosterPerSettlement = new KeyValuePair<Settlement, ItemRoster>[Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave];
    }

    private void OnGameLoaded(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeBehaviorData();
      if (MBSaveLoad.IsUpdatingGameVersion && MBSaveLoad.LastLoadedGameVersion < ApplicationVersion.FromString("v1.2.0"))
      {
        foreach (Workshop ownedWorkshop in (List<Workshop>) Hero.MainHero.OwnedWorkshops)
        {
          this.AddNewWorkshopData(ownedWorkshop);
          this.AddNewWarehouseDataIfNeeded(ownedWorkshop.Settlement);
        }
      }
      this.EnsureBehaviorDataSize();
      this.FillItemsInAllCategories();
    }

    private void EnsureBehaviorDataSize()
    {
      if (this._workshopData.Length < Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave)
      {
        WorkshopsCampaignBehavior.WorkshopData[] workshopDataArray = new WorkshopsCampaignBehavior.WorkshopData[Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave];
        for (int index = 0; index < Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave; ++index)
          workshopDataArray[index] = index >= this._workshopData.Length ? (WorkshopsCampaignBehavior.WorkshopData) null : this._workshopData[index];
        this._workshopData = workshopDataArray;
      }
      if (this._warehouseRosterPerSettlement.Length >= Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave)
        return;
      KeyValuePair<Settlement, ItemRoster>[] keyValuePairArray = new KeyValuePair<Settlement, ItemRoster>[Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave];
      for (int index = 0; index < Campaign.Current.Models.WorkshopModel.MaximumWorkshopsPlayerCanHave; ++index)
      {
        if (index < this._warehouseRosterPerSettlement.Length && this._warehouseRosterPerSettlement[index].Key != null && this._warehouseRosterPerSettlement[index].Value != null)
          keyValuePairArray[index] = this._warehouseRosterPerSettlement[index];
      }
      this._warehouseRosterPerSettlement = keyValuePairArray;
    }

    private void OnWorkshopTypeChanged(Workshop workshop)
    {
      if (workshop.Owner != Hero.MainHero)
        return;
      this.RemoveWorkshopData(workshop);
      this.AddNewWorkshopData(workshop);
    }

    private void OnWorkshopOwnerChanged(Workshop workshop, Hero oldOwner)
    {
      Hero owner = workshop.Owner;
      if (owner == Hero.MainHero)
      {
        this.AddNewWarehouseDataIfNeeded(workshop.Settlement);
        this.AddNewWorkshopData(workshop);
      }
      else
      {
        if (oldOwner != Hero.MainHero || Clan.PlayerClan.Leader == owner)
          return;
        if (Hero.MainHero.OwnedWorkshops.All<Workshop>((Func<Workshop, bool>) (x => x.Settlement != workshop.Settlement)))
        {
          if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement == workshop.Settlement)
            this.TransferWarehouseToPlayerParty(Settlement.CurrentSettlement);
          this.RemoveWarehouseData(workshop.Settlement);
        }
        this.RemoveWorkshopData(workshop);
      }
    }

    private void DailyTickTown(Town town)
    {
      if (town.InRebelliousState)
        return;
      foreach (Workshop workshop in town.Workshops)
      {
        this.RunTownWorkshop(town, workshop);
        this.HandleDailyExpense(workshop);
      }
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (victim.IsHumanPlayerCharacter)
        return;
      foreach (Workshop workshop in victim.OwnedWorkshops.ToList<Workshop>())
      {
        Hero ownerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(workshop);
        ChangeOwnerOfWorkshopAction.ApplyByDeath(workshop, ownerForWorkshop);
      }
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      this.TransferPlayerWorkshopsIfNeeded();
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail)
    {
      this.TransferPlayerWorkshopsIfNeeded();
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newSettlementOwner,
      Hero oldSettlementOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (!settlement.IsTown)
        return;
      foreach (Workshop workshop in settlement.Town.Workshops)
      {
        if (workshop.Owner != null && workshop.Owner.MapFaction.IsAtWarWith(newSettlementOwner.MapFaction) && workshop.Owner.GetPerkValue(DefaultPerks.Trade.RapidDevelopment))
          GiveGoldAction.ApplyBetweenCharacters((Hero) null, workshop.Owner, MathF.Round(DefaultPerks.Trade.RapidDevelopment.PrimaryBonus));
      }
      this.TransferPlayerWorkshopsIfNeeded();
    }

    private void OnAfterSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.InitializeGameMenus(campaignGameStarter);
    }

    protected void InitializeGameMenus(CampaignGameStarter campaignGameStarter)
    {
      campaignGameStarter.AddGameMenuOption("town", "manage_warehouse", "{=LK4kNZkb}Enter the warehouse", new GameMenuOption.OnConditionDelegate(this.warehouse_manage_on_condition), new GameMenuOption.OnConsequenceDelegate(this.warehouse_manage_on_consequence), index: 8);
      campaignGameStarter.AddPlayerLine("workshop_worker_manage_warehouse", "player_options", "warehouse", "{=mBnoWa8R}I would like to access the Warehouse.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameStarter.AddDialogLine("workshop_worker_manage_warehouse_answer", "warehouse", "player_options", "{=Y4LhmAdi}Sure, boss. Go ahead.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.warehouse_manage_on_consequence));
    }

    private void warehouse_manage_on_consequence()
    {
      InventoryLogic.CapacityData otherSideCapacity = new InventoryLogic.CapacityData(new Func<int>(CapacityDelegate), new Func<TextObject>(CapacityExceededWarningDelegate), new Func<TextObject>(CapacityExceededHintDelegate));
      InventoryManager.OpenScreenAsWarehouse(this.GetWarehouseRoster(Settlement.CurrentSettlement), otherSideCapacity);
      Campaign.Current.ConversationManager.ContinueConversation();

      int CapacityDelegate() => Campaign.Current.Models.WorkshopModel.WarehouseCapacity;

      TextObject CapacityExceededWarningDelegate()
      {
        return new TextObject("{=Drj5gIZu}Warehouse Capacity Exceeded");
      }

      TextObject CapacityExceededHintDelegate()
      {
        return new TextObject("{=Drj5gIZu}Warehouse Capacity Exceeded");
      }
    }

    private void warehouse_manage_on_consequence(MenuCallbackArgs args)
    {
      InventoryLogic.CapacityData otherSideCapacity = new InventoryLogic.CapacityData(new Func<int>(CapacityDelegate), new Func<TextObject>(CapacityExceededWarningDelegate), new Func<TextObject>(CapacityExceededHintDelegate));
      InventoryManager.OpenScreenAsWarehouse(this.GetWarehouseRoster(Settlement.CurrentSettlement), otherSideCapacity);

      int CapacityDelegate() => Campaign.Current.Models.WorkshopModel.WarehouseCapacity;

      TextObject CapacityExceededWarningDelegate()
      {
        return new TextObject("{=Drj5gIZu}Warehouse Capacity Exceeded");
      }

      TextObject CapacityExceededHintDelegate()
      {
        return new TextObject("{=Drj5gIZu}Warehouse Capacity Exceeded");
      }
    }

    private bool warehouse_manage_on_condition(MenuCallbackArgs args)
    {
      args.optionLeaveType = GameMenuOption.LeaveType.Warehouse;
      return this.GetWarehouseRoster(Settlement.CurrentSettlement) != null;
    }

    bool IWorkshopWarehouseCampaignBehavior.IsGettingInputsFromWarehouse(Workshop workshop)
    {
      WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop = this.GetDataOfWorkshop(workshop);
      return dataOfWorkshop != null && dataOfWorkshop.IsGettingInputsFromWarehouse;
    }

    void IWorkshopWarehouseCampaignBehavior.SetIsGettingInputsFromWarehouse(
      Workshop workshop,
      bool isActive)
    {
      WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop = this.GetDataOfWorkshop(workshop);
      if (dataOfWorkshop == null)
        return;
      dataOfWorkshop.IsGettingInputsFromWarehouse = isActive;
    }

    float IWorkshopWarehouseCampaignBehavior.GetStockProductionInWarehouseRatio(Workshop workshop)
    {
      WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop = this.GetDataOfWorkshop(workshop);
      return dataOfWorkshop != null ? dataOfWorkshop.StockProductionInWarehouseRatio : 0.0f;
    }

    void IWorkshopWarehouseCampaignBehavior.SetStockProductionInWarehouseRatio(
      Workshop workshop,
      float ratio)
    {
      WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop = this.GetDataOfWorkshop(workshop);
      if (dataOfWorkshop == null)
        return;
      dataOfWorkshop.StockProductionInWarehouseRatio = ratio;
    }

    int IWorkshopWarehouseCampaignBehavior.GetInputCount(Workshop workshop)
    {
      ItemRoster warehouseRoster = this.GetWarehouseRoster(workshop.Settlement);
      int inputCount = 0;
      List<ItemCategory> itemCategoryList = new List<ItemCategory>();
      foreach (WorkshopType.Production production in (List<WorkshopType.Production>) workshop.WorkshopType.Productions)
      {
        foreach ((ItemCategory itemCategory, int _) in (List<(ItemCategory, int)>) production.Inputs)
        {
          if (!itemCategoryList.Contains(itemCategory))
            itemCategoryList.Add(itemCategory);
        }
      }
      foreach (ItemCategory itemCategory in itemCategoryList)
      {
        foreach (ItemRosterElement itemRosterElement in warehouseRoster)
        {
          if (itemRosterElement.EquipmentElement.Item.ItemCategory == itemCategory)
          {
            inputCount += itemRosterElement.Amount;
            break;
          }
        }
      }
      return inputCount;
    }

    ExplainedNumber IWorkshopWarehouseCampaignBehavior.GetInputDailyChange(Workshop workshop)
    {
      ItemRoster warehouseRoster = this.GetWarehouseRoster(workshop.Settlement);
      ExplainedNumber inputDailyChange = new ExplainedNumber(includeDescriptions: true);
      Dictionary<ItemCategory, float> dictionary = new Dictionary<ItemCategory, float>();
      foreach (WorkshopType.Production production in (List<WorkshopType.Production>) workshop.WorkshopType.Productions)
      {
        foreach ((ItemCategory, int) input in (List<(ItemCategory, int)>) production.Inputs)
        {
          float num1 = Campaign.Current.Models.WorkshopModel.GetEffectiveConversionSpeedOfProduction(workshop, production.ConversionSpeed, false).ResultNumber * (float) input.Item2;
          ItemCategory key = input.Item1;
          float num2;
          if (!dictionary.TryGetValue(key, out num2))
            dictionary.Add(key, num1);
          else
            dictionary[key] = num2 + num1;
        }
      }
      foreach (KeyValuePair<ItemCategory, float> keyValuePair in dictionary)
      {
        int variable = 0;
        foreach (ItemRosterElement itemRosterElement in warehouseRoster)
        {
          if (itemRosterElement.EquipmentElement.Item.ItemCategory == keyValuePair.Key)
            variable += itemRosterElement.Amount;
        }
        if (variable > 0)
        {
          TextObject text = GameTexts.FindText("str_RANK_with_NUM_between_parenthesis");
          text.SetTextVariable("RANK", keyValuePair.Key.GetName());
          text.SetTextVariable("NUMBER", variable);
          inputDailyChange.Add(-keyValuePair.Value, text);
        }
      }
      return inputDailyChange;
    }

    int IWorkshopWarehouseCampaignBehavior.GetOutputCount(Workshop workshop)
    {
      ItemRoster warehouseRoster = this.GetWarehouseRoster(workshop.Settlement);
      int outputCount = 0;
      List<ItemCategory> itemCategoryList = new List<ItemCategory>();
      foreach (WorkshopType.Production production in (List<WorkshopType.Production>) workshop.WorkshopType.Productions)
      {
        foreach ((ItemCategory itemCategory, int _) in (List<(ItemCategory, int)>) production.Outputs)
        {
          if (!itemCategoryList.Contains(itemCategory))
            itemCategoryList.Add(itemCategory);
        }
      }
      foreach (ItemCategory itemCategory in itemCategoryList)
      {
        foreach (ItemRosterElement itemRosterElement in warehouseRoster)
        {
          if (itemRosterElement.EquipmentElement.Item.ItemCategory == itemCategory)
          {
            outputCount += itemRosterElement.Amount;
            break;
          }
        }
      }
      return outputCount;
    }

    ExplainedNumber IWorkshopWarehouseCampaignBehavior.GetOutputDailyChange(Workshop workshop)
    {
      ExplainedNumber outputDailyChange = new ExplainedNumber(includeDescriptions: true);
      ItemRoster warehouseRoster = this.GetWarehouseRoster(workshop.Settlement);
      Dictionary<ItemCategory, float> dictionary = new Dictionary<ItemCategory, float>();
      foreach (WorkshopType.Production production in (List<WorkshopType.Production>) workshop.WorkshopType.Productions)
      {
        foreach ((ItemCategory, int) output in (List<(ItemCategory, int)>) production.Outputs)
        {
          ItemCategory key = output.Item1;
          if (key.IsTradeGood)
          {
            int num1 = output.Item2;
            float num2 = Campaign.Current.Models.WorkshopModel.GetEffectiveConversionSpeedOfProduction(workshop, production.ConversionSpeed, false).ResultNumber * (float) num1 * this.GetDataOfWorkshop(workshop).StockProductionInWarehouseRatio;
            float num3;
            if (!dictionary.TryGetValue(key, out num3))
              dictionary.Add(key, num2);
            else
              dictionary[key] = num3 + num2;
          }
        }
      }
      foreach (KeyValuePair<ItemCategory, float> keyValuePair in dictionary)
      {
        int variable = 0;
        foreach (ItemRosterElement itemRosterElement in warehouseRoster)
        {
          if (itemRosterElement.EquipmentElement.Item.ItemCategory == keyValuePair.Key)
            variable += itemRosterElement.Amount;
        }
        TextObject text = GameTexts.FindText("str_RANK_with_NUM_between_parenthesis");
        text.SetTextVariable("RANK", keyValuePair.Key.GetName());
        text.SetTextVariable("NUMBER", variable);
        outputDailyChange.Add(keyValuePair.Value, text);
      }
      return outputDailyChange;
    }

    bool IWorkshopWarehouseCampaignBehavior.IsRawMaterialsSufficientInTownMarket(Workshop workshop)
    {
      for (int index = 0; index < workshop.WorkshopType.Productions.Count; ++index)
      {
        if (this.DetermineItemRosterHasSufficientInputs(workshop.WorkshopType.Productions[index], workshop.Settlement.Town.Owner.ItemRoster, workshop.Settlement.Town, out int _))
          return true;
      }
      return false;
    }

    public float GetWarehouseItemRosterWeight(Settlement settlement)
    {
      ItemRoster warehouseRoster = this.GetWarehouseRoster(settlement);
      float itemRosterWeight = 0.0f;
      foreach (ItemRosterElement itemRosterElement in warehouseRoster)
        itemRosterWeight += itemRosterElement.GetRosterElementWeight();
      return itemRosterWeight;
    }

    private bool TickOneProductionCycleForPlayerWorkshop(
      WorkshopType.Production production,
      Workshop workshop)
    {
      bool flag1 = false;
      int inputMaterialCost = 0;
      Town town = workshop.Settlement.Town;
      WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop1 = this.GetDataOfWorkshop(workshop);
      bool flag2 = dataOfWorkshop1.IsGettingInputsFromWarehouse;
      if (flag2)
      {
        flag1 = this.DetermineItemRosterHasSufficientInputs(production, this.GetWarehouseRoster(workshop.Settlement), town, out inputMaterialCost);
        if (flag1)
          inputMaterialCost = 0;
        else
          flag2 = false;
      }
      if (!flag1)
        flag1 = this.DetermineItemRosterHasSufficientInputs(production, town.Owner.ItemRoster, town, out inputMaterialCost);
      if (flag1)
      {
        int income;
        List<EquipmentElement> itemsToProduce = this.GetItemsToProduce(production, workshop, out income);
        bool effectCapital = !production.Inputs.Any<(ItemCategory, int)>((Func<(ItemCategory, int), bool>) (x => !x.Item1.IsTradeGood)) && !production.Outputs.Any<(ItemCategory, int)>((Func<(ItemCategory, int), bool>) (x => !x.Item1.IsTradeGood));
        float num = dataOfWorkshop1.StockProductionInWarehouseRatio;
        bool allOutputsWillBeSentToWarehouse = num.ApproximatelyEqualsTo(1f);
        if (this.CanPlayerWorkshopProduceThisCycle(production, workshop, inputMaterialCost, income, effectCapital, allOutputsWillBeSentToWarehouse))
        {
          Dictionary<ItemObject, int> dictionary = new Dictionary<ItemObject, int>();
          foreach ((ItemCategory, int) input in (List<(ItemCategory, int)>) production.Inputs)
          {
            if (flag2)
              this.ConsumeInputFromWarehouse(input.Item1, input.Item2, workshop);
            else
              this.ConsumeInputFromTownMarket(input.Item1, input.Item2, town, workshop, effectCapital);
          }
          foreach (EquipmentElement equipmentElement in itemsToProduce)
          {
            WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop2 = this.GetDataOfWorkshop(workshop);
            if (equipmentElement.Item.IsTradeGood && this.CanItemFitInWarehouse(workshop.Settlement, equipmentElement))
            {
              this.AddOutputProgressForWarehouse(workshop, num);
              if ((double) dataOfWorkshop2.ProductionProgressForWarehouse >= 1.0)
              {
                this.ProduceAnOutputToWarehouse(equipmentElement, workshop);
                SkillLevelingManager.OnProductionProducedToWarehouse(equipmentElement);
                this.AddOutputProgressForWarehouse(workshop, -1f);
                if (dictionary.ContainsKey(equipmentElement.Item))
                  dictionary[equipmentElement.Item]++;
                else
                  dictionary.Add(equipmentElement.Item, 1);
              }
            }
            else
              num = 0.0f;
            this.AddOutputProgressForTown(workshop, 1f - num);
            if ((double) dataOfWorkshop2.ProductionProgressForTown >= 1.0)
            {
              this.ProduceAnOutputToTown(equipmentElement, workshop, effectCapital);
              this.AddOutputProgressForTown(workshop, -1f);
              if (dictionary.ContainsKey(equipmentElement.Item))
                dictionary[equipmentElement.Item]++;
              else
                dictionary.Add(equipmentElement.Item, 1);
            }
          }
          foreach (KeyValuePair<ItemObject, int> keyValuePair in dictionary)
          {
            ItemObject key = keyValuePair.Key;
            int count = keyValuePair.Value;
            CampaignEventDispatcher.Instance.OnItemProduced(key, workshop.Settlement, count);
          }
          return true;
        }
      }
      return false;
    }

    private void ProduceAnOutputToWarehouse(EquipmentElement outputItem, Workshop workshop)
    {
      this.GetWarehouseRoster(workshop.Settlement).AddToCounts(outputItem, 1);
    }

    private void ConsumeInputFromWarehouse(
      ItemCategory productionInput,
      int inputCount,
      Workshop workshop)
    {
      ItemRoster warehouseRoster = this.GetWarehouseRoster(workshop.Settlement);
      int a = inputCount;
      for (int index = 0; index < warehouseRoster.Count && a != 0; ++index)
      {
        ItemObject itemAtIndex = warehouseRoster.GetItemAtIndex(index);
        if (itemAtIndex.ItemCategory == productionInput)
        {
          int elementNumber = warehouseRoster.GetElementNumber(index);
          int num = MathF.Min(a, elementNumber);
          a -= num;
          warehouseRoster.AddToCounts(itemAtIndex, -inputCount);
          CampaignEventDispatcher.Instance.OnItemConsumed(itemAtIndex, workshop.Settlement, inputCount);
        }
      }
    }

    private bool CanPlayerWorkshopProduceThisCycle(
      WorkshopType.Production production,
      Workshop workshop,
      int inputMaterialCost,
      int outputIncome,
      bool effectCapital,
      bool allOutputsWillBeSentToWarehouse)
    {
      float num1 = workshop.WorkshopType.IsHidden ? (float) inputMaterialCost : (float) inputMaterialCost + 200f / production.ConversionSpeed;
      if (Campaign.Current.GameStarted && (double) outputIncome <= (double) num1 || workshop.Capital < inputMaterialCost)
        return false;
      if (effectCapital)
      {
        int num2 = workshop.Settlement.Town.Gold >= outputIncome ? 1 : 0;
        bool flag = !this.IsWarehouseAtLimit(workshop.Settlement);
        if (num2 == 0 && !allOutputsWillBeSentToWarehouse | flag)
          return false;
      }
      return true;
    }

    private void HandlePlayerWorkshopExpense(Workshop shop)
    {
      int expense = shop.Expense;
      if (shop.Capital > Campaign.Current.Models.WorkshopModel.CapitalLowLimit)
        shop.ChangeGold(-expense);
      else if (shop.Owner.Gold >= expense)
        shop.Owner.Gold -= expense;
      else if (shop.Capital >= expense)
        shop.ChangeGold(-expense);
      else
        this.ChangeWorkshopOwnerByBankruptcy(shop);
    }

    private bool TickOneProductionCycleForNotableWorkshop(
      WorkshopType.Production production,
      Workshop workshop)
    {
      Town town = workshop.Settlement.Town;
      int inputMaterialCost = 0;
      if (!this.DetermineItemRosterHasSufficientInputs(production, town.Owner.ItemRoster, town, out inputMaterialCost))
        return false;
      int income;
      List<EquipmentElement> itemsToProduce = this.GetItemsToProduce(production, workshop, out income);
      bool effectCapital = !production.Inputs.Any<(ItemCategory, int)>((Func<(ItemCategory, int), bool>) (x => !x.Item1.IsTradeGood)) && !production.Outputs.Any<(ItemCategory, int)>((Func<(ItemCategory, int), bool>) (x => !x.Item1.IsTradeGood));
      if (!this.CanNotableWorkshopProduceThisCycle(production, workshop, inputMaterialCost, income, effectCapital))
        return false;
      foreach ((ItemCategory, int) input in (List<(ItemCategory, int)>) production.Inputs)
        this.ConsumeInputFromTownMarket(input.Item1, input.Item2, town, workshop, effectCapital);
      foreach (EquipmentElement outputItem in itemsToProduce)
      {
        this.ProduceAnOutputToTown(outputItem, workshop, effectCapital);
        CampaignEventDispatcher.Instance.OnItemProduced(outputItem.Item, workshop.Settlement, 1);
      }
      return true;
    }

    private bool CanNotableWorkshopProduceThisCycle(
      WorkshopType.Production production,
      Workshop workshop,
      int inputMaterialCost,
      int outputIncome,
      bool effectCapital)
    {
      float num = workshop.WorkshopType.IsHidden ? (float) inputMaterialCost : (float) inputMaterialCost + 200f / production.ConversionSpeed;
      return (!Campaign.Current.GameStarted || (double) outputIncome > (double) num) && !(workshop.Settlement.Town.Gold < outputIncome & effectCapital) && workshop.Capital >= inputMaterialCost;
    }

    private void HandleNotableWorkshopExpense(Workshop shop)
    {
      int expense = shop.Expense;
      if (shop.Capital >= expense)
        shop.ChangeGold(-expense);
      else
        this.ChangeWorkshopOwnerByBankruptcy(shop);
    }

    private WorkshopsCampaignBehavior.WorkshopData GetDataOfWorkshop(Workshop workshop)
    {
      for (int index = 0; index < this._workshopData.Length; ++index)
      {
        WorkshopsCampaignBehavior.WorkshopData dataOfWorkshop = this._workshopData[index];
        if (dataOfWorkshop != null && dataOfWorkshop.Workshop == workshop)
          return dataOfWorkshop;
      }
      return (WorkshopsCampaignBehavior.WorkshopData) null;
    }

    private List<EquipmentElement> GetItemsToProduce(
      WorkshopType.Production production,
      Workshop workshop,
      out int income)
    {
      List<EquipmentElement> itemsToProduce = new List<EquipmentElement>();
      income = 0;
      for (int index1 = 0; index1 < production.Outputs.Count; ++index1)
      {
        int num = production.Outputs[index1].Item2;
        for (int index2 = 0; index2 < num; ++index2)
        {
          EquipmentElement randomItem = this.GetRandomItem(production.Outputs[index1].Item1, workshop.Settlement.Town);
          itemsToProduce.Add(randomItem);
          income += workshop.Settlement.Town.GetItemPrice(randomItem, (MobileParty) null, true);
        }
      }
      return itemsToProduce;
    }

    private void ProduceAnOutputToTown(
      EquipmentElement outputItem,
      Workshop workshop,
      bool effectCapital)
    {
      Town town = workshop.Settlement.Town;
      int itemPrice = town.GetItemPrice(outputItem, (MobileParty) null, false);
      town.Owner.ItemRoster.AddToCounts(outputItem, 1);
      if (!(Campaign.Current.GameStarted & effectCapital))
        return;
      int goldChange = MathF.Min(1000, itemPrice);
      workshop.ChangeGold(goldChange);
      town.ChangeGold(-goldChange);
    }

    private void ConsumeInputFromTownMarket(
      ItemCategory productionInput,
      int productionInputCount,
      Town town,
      Workshop workshop,
      bool effectCapital)
    {
      ItemRoster itemRoster = town.Owner.ItemRoster;
      int index = itemRoster.FindIndex((Predicate<ItemObject>) (x => x.ItemCategory == productionInput));
      if (index < 0)
        return;
      ItemObject itemAtIndex = itemRoster.GetItemAtIndex(index);
      if (Campaign.Current.GameStarted & effectCapital)
      {
        int itemPrice = town.GetItemPrice(itemAtIndex, (MobileParty) null, false);
        workshop.ChangeGold(-itemPrice);
        town.ChangeGold(itemPrice);
      }
      itemRoster.AddToCounts(itemAtIndex, -productionInputCount);
      CampaignEventDispatcher.Instance.OnItemConsumed(itemAtIndex, town.Owner.Settlement, productionInputCount);
    }

    private bool IsItemPreferredForTown(ItemObject item, Town townComponent)
    {
      return item.Culture == null || item.Culture.StringId == "neutral_culture" || item.Culture == townComponent.Culture;
    }

    private bool DetermineItemRosterHasSufficientInputs(
      WorkshopType.Production production,
      ItemRoster itemRoster,
      Town town,
      out int inputMaterialCost)
    {
      MBReadOnlyList<(ItemCategory, int)> inputs = production.Inputs;
      inputMaterialCost = 0;
      foreach ((ItemCategory itemCategory, int a) in (List<(ItemCategory, int)>) inputs)
      {
        for (int index = 0; index < itemRoster.Count; ++index)
        {
          ItemObject itemAtIndex = itemRoster.GetItemAtIndex(index);
          if (itemAtIndex.ItemCategory == itemCategory)
          {
            int elementNumber = itemRoster.GetElementNumber(index);
            int num = MathF.Min(a, elementNumber);
            a -= num;
            inputMaterialCost += town.GetItemPrice(itemAtIndex, (MobileParty) null, false) * num;
          }
        }
        if (a > 0)
          return false;
      }
      return true;
    }

    private void AddOutputProgressForWarehouse(Workshop workshop, float progressToAdd)
    {
      this.GetDataOfWorkshop(workshop).ProductionProgressForWarehouse += progressToAdd;
    }

    private void AddOutputProgressForTown(Workshop workshop, float progressToAdd)
    {
      this.GetDataOfWorkshop(workshop).ProductionProgressForTown += progressToAdd;
    }

    private bool CanItemFitInWarehouse(Settlement settlement, EquipmentElement equipmentElement)
    {
      return (double) this.GetWarehouseItemRosterWeight(settlement) + (double) equipmentElement.Weight <= (double) Campaign.Current.Models.WorkshopModel.WarehouseCapacity;
    }

    private bool IsWarehouseAtLimit(Settlement settlement)
    {
      return (double) this.GetWarehouseItemRosterWeight(settlement) >= (double) Campaign.Current.Models.WorkshopModel.WarehouseCapacity;
    }

    private void AddNewWorkshopData(Workshop workshop)
    {
      for (int index = 0; index < this._workshopData.Length; ++index)
      {
        if (this._workshopData[index] == null)
        {
          this._workshopData[index] = new WorkshopsCampaignBehavior.WorkshopData(workshop);
          break;
        }
      }
    }

    private void RemoveWorkshopData(Workshop workshop)
    {
      for (int index = 0; index < this._workshopData.Length; ++index)
      {
        WorkshopsCampaignBehavior.WorkshopData workshopData = this._workshopData[index];
        if (workshopData != null && workshopData.Workshop == workshop)
        {
          this._workshopData[index] = (WorkshopsCampaignBehavior.WorkshopData) null;
          break;
        }
      }
    }

    private ItemRoster GetWarehouseRoster(Settlement settlement)
    {
      foreach (KeyValuePair<Settlement, ItemRoster> keyValuePair in this._warehouseRosterPerSettlement)
      {
        if (keyValuePair.Key == settlement)
          return keyValuePair.Value;
      }
      return (ItemRoster) null;
    }

    private void FillItemsInAllCategories()
    {
      foreach (ItemObject objectType in (List<ItemObject>) Game.Current.ObjectManager.GetObjectTypeList<ItemObject>())
      {
        if (this.IsProducable(objectType))
        {
          ItemCategory itemCategory = objectType.ItemCategory;
          if (itemCategory != null)
          {
            List<ItemObject> itemObjectList;
            if (!this._itemsInCategory.TryGetValue(itemCategory, out itemObjectList))
            {
              itemObjectList = new List<ItemObject>();
              this._itemsInCategory[itemCategory] = itemObjectList;
            }
            itemObjectList.Add(objectType);
          }
        }
      }
    }

    private bool IsProducable(ItemObject item)
    {
      return !item.MultiplayerItem && !item.NotMerchandise && !item.IsCraftedByPlayer;
    }

    private void RemoveWarehouseData(Settlement settlement)
    {
      for (int index = 0; index < this._warehouseRosterPerSettlement.Length; ++index)
      {
        if (this._warehouseRosterPerSettlement[index].Key == settlement)
        {
          this._warehouseRosterPerSettlement[index] = new KeyValuePair<Settlement, ItemRoster>((Settlement) null, (ItemRoster) null);
          break;
        }
      }
    }

    private void AddNewWarehouseDataIfNeeded(Settlement settlement)
    {
      bool flag = false;
      foreach (KeyValuePair<Settlement, ItemRoster> keyValuePair in this._warehouseRosterPerSettlement)
      {
        if (keyValuePair.Key == settlement)
        {
          flag = true;
          break;
        }
      }
      if (flag)
        return;
      for (int index = 0; index < this._warehouseRosterPerSettlement.Length; ++index)
      {
        if (this._warehouseRosterPerSettlement[index].Value == null)
        {
          this._warehouseRosterPerSettlement[index] = new KeyValuePair<Settlement, ItemRoster>(settlement, new ItemRoster());
          break;
        }
      }
    }

    private EquipmentElement GetRandomItem(ItemCategory itemGroupBase, Town townComponent)
    {
      EquipmentElement randomItemAux = this.GetRandomItemAux(itemGroupBase, townComponent);
      return randomItemAux.Item != null ? randomItemAux : this.GetRandomItemAux(itemGroupBase);
    }

    private EquipmentElement GetRandomItemAux(ItemCategory itemGroupBase, Town townComponent = null)
    {
      ItemObject itemObject1 = (ItemObject) null;
      ItemModifier itemModifier = (ItemModifier) null;
      List<(ItemObject, float)> weightList = new List<(ItemObject, float)>();
      List<ItemObject> itemObjectList;
      if (this._itemsInCategory.TryGetValue(itemGroupBase, out itemObjectList))
      {
        foreach (ItemObject itemObject2 in itemObjectList)
        {
          if ((townComponent == null || this.IsItemPreferredForTown(itemObject2, townComponent)) && itemObject2.ItemCategory == itemGroupBase)
          {
            float num = (float) (1.0 / ((double) MathF.Max(100, itemObject2.Value) + 100.0));
            weightList.Add((itemObject2, num));
          }
        }
        itemObject1 = MBRandom.ChooseWeighted<ItemObject>((IReadOnlyList<(ItemObject, float)>) weightList);
        ItemModifierGroup itemModifierGroup = itemObject1?.ItemComponent?.ItemModifierGroup;
        if (itemModifierGroup != null)
          itemModifier = itemModifierGroup.GetRandomItemModifierProductionScoreBased();
      }
      return new EquipmentElement(itemObject1, itemModifier);
    }

    private void TransferPlayerWorkshopsIfNeeded()
    {
      int count = Hero.MainHero.OwnedWorkshops.Count;
      List<Workshop> list = Hero.MainHero.OwnedWorkshops.ToList<Workshop>();
      for (int index = 0; index < count; ++index)
      {
        Workshop workshop = list[index];
        if (workshop.Settlement.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
        {
          Hero ownerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(workshop);
          if (ownerForWorkshop != null)
          {
            WorkshopType workshopType = this.DecideBestWorkshopType(workshop.Settlement, false, workshop.WorkshopType);
            ChangeOwnerOfWorkshopAction.ApplyByWar(workshop, ownerForWorkshop, workshopType);
          }
        }
      }
    }

    private void ChangeWorkshopOwnerByBankruptcy(Workshop workshop)
    {
      int costForNotable = Campaign.Current.Models.WorkshopModel.GetCostForNotable(workshop);
      Hero ownerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(workshop);
      WorkshopType workshopType = this.DecideBestWorkshopType(workshop.Settlement, false, workshop.WorkshopType);
      ChangeOwnerOfWorkshopAction.ApplyByBankruptcy(workshop, ownerForWorkshop, workshopType, costForNotable);
    }

    private void HandleDailyExpense(Workshop shop)
    {
      if (shop.WorkshopType.IsHidden)
        return;
      if (shop.Owner != Hero.MainHero)
        this.HandleNotableWorkshopExpense(shop);
      else
        this.HandlePlayerWorkshopExpense(shop);
    }

    private float FindTotalInputDensityScore(
      Settlement settlement,
      WorkshopType workshop,
      IDictionary<ItemCategory, float> productionDict,
      bool atGameStart)
    {
      int num1 = 0;
      for (int index = 0; index < settlement.Town.Workshops.Length; ++index)
      {
        if (settlement.Town.Workshops[index].WorkshopType == workshop)
          ++num1;
      }
      float num2 = 0.01f;
      float num3 = 0.0f;
      foreach (WorkshopType.Production production in (List<WorkshopType.Production>) workshop.Productions)
      {
        bool flag = false;
        foreach ((ItemCategory, int) output in (List<(ItemCategory, int)>) production.Outputs)
        {
          if (output.Item1.IsTradeGood)
          {
            flag = true;
            break;
          }
        }
        if (flag)
        {
          foreach ((ItemCategory itemCategory, int num4) in (List<(ItemCategory, int)>) production.Inputs)
          {
            float num5;
            if (productionDict.TryGetValue(itemCategory, out num5))
              num2 += num5 / (production.ConversionSpeed * (float) num4);
            if (!atGameStart)
            {
              float priceFactor = settlement.Town.MarketData.GetPriceFactor(itemCategory);
              num3 += Math.Max(0.0f, 1f - priceFactor);
            }
          }
        }
      }
      float x = 1f + (float) (num1 * 6);
      return MathF.Pow(num2 * ((float) workshop.Frequency * (float) (1.0 / Math.Pow((double) x, 3.0))) + num3, 0.6f);
    }

    private void BuildWorkshopForHeroAtGameStart(Hero ownerHero)
    {
      Settlement bornSettlement = ownerHero.BornSettlement;
      WorkshopType workshopType = this.DecideBestWorkshopType(bornSettlement, true);
      if (workshopType == null)
        return;
      Hero workshopOwner = ownerHero;
      int index1 = -1;
      for (int index2 = 0; index2 < bornSettlement.Town.Workshops.Length; ++index2)
      {
        if (bornSettlement.Town.Workshops[index2].WorkshopType == null)
        {
          index1 = index2;
          break;
        }
      }
      if (index1 < 0)
        return;
      InitializeWorkshopAction.ApplyByNewGame(bornSettlement.Town.Workshops[index1], workshopOwner, workshopType);
    }

    private WorkshopType DecideBestWorkshopType(
      Settlement currentSettlement,
      bool atGameStart,
      WorkshopType workshopToExclude = null)
    {
      IDictionary<ItemCategory, float> productionDict = (IDictionary<ItemCategory, float>) new Dictionary<ItemCategory, float>();
      foreach (Village village in Village.All.Where<Village>((Func<Village, bool>) (x => x.TradeBound == currentSettlement)))
      {
        foreach ((ItemObject, float) production in (List<(ItemObject, float)>) village.VillageType.Productions)
        {
          ItemCategory key = production.Item1.ItemCategory;
          if (key != DefaultItemCategories.Grain || village.VillageType.PrimaryProduction == DefaultItems.Grain)
          {
            float num1 = production.Item2;
            if (key == DefaultItemCategories.Cow || key == DefaultItemCategories.Hog)
              key = DefaultItemCategories.Hides;
            if (key == DefaultItemCategories.Sheep)
              key = DefaultItemCategories.Wool;
            float num2;
            if (productionDict.TryGetValue(key, out num2))
              productionDict[key] = num2 + num1;
            else
              productionDict.Add(key, num1);
          }
        }
      }
      Dictionary<WorkshopType, float> dictionary = new Dictionary<WorkshopType, float>();
      float num3 = 0.0f;
      foreach (WorkshopType workshopType in (List<WorkshopType>) WorkshopType.All)
      {
        if (!workshopType.IsHidden && (workshopToExclude == null || workshopToExclude != workshopType))
        {
          float inputDensityScore = this.FindTotalInputDensityScore(currentSettlement, workshopType, productionDict, atGameStart);
          dictionary.Add(workshopType, inputDensityScore);
          num3 += inputDensityScore;
        }
      }
      float num4 = num3 * MBRandom.RandomFloat;
      WorkshopType workshopType1 = (WorkshopType) null;
      foreach (WorkshopType key in (List<WorkshopType>) WorkshopType.All)
      {
        if (!key.IsHidden && (workshopToExclude == null || workshopToExclude != key))
        {
          num4 -= dictionary[key];
          if ((double) num4 < 0.0)
          {
            workshopType1 = key;
            break;
          }
        }
      }
      if (workshopType1 == null)
        workshopType1 = WorkshopType.All[MBRandom.RandomInt(1, WorkshopType.All.Count)];
      return workshopType1;
    }

    private void InitializeWorkshops()
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
        allTown.InitializeWorkshops(Campaign.Current.Models.WorkshopModel.DefaultWorkshopCountInSettlement);
    }

    private void BuildWorkshopsAtGameStart()
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        this.BuildArtisanWorkshop(allTown);
        for (int index = 1; index < allTown.Workshops.Length; ++index)
          this.BuildWorkshopForHeroAtGameStart(Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(allTown.Workshops[index]));
      }
    }

    private void BuildArtisanWorkshop(Town town)
    {
      Hero owner = town.Settlement.Notables.FirstOrDefault<Hero>((Func<Hero, bool>) (x => x.IsArtisan)) ?? town.Settlement.Notables.FirstOrDefault<Hero>();
      if (owner == null)
        return;
      WorkshopType type = WorkshopType.Find("artisans");
      town.Workshops[0].InitializeWorkshop(owner, type);
    }

    private void RunTownShopsAtGameStart()
    {
      foreach (Town allTown in (List<Town>) Town.AllTowns)
      {
        foreach (Workshop workshop in allTown.Workshops)
          this.RunTownWorkshop(allTown, workshop);
      }
    }

    private void RunTownWorkshop(Town townComponent, Workshop workshop)
    {
      WorkshopType workshopType = workshop.WorkshopType;
      bool flag1 = false;
      for (int index = 0; index < workshopType.Productions.Count; ++index)
      {
        float num1 = workshop.GetProductionProgress(index);
        if ((double) num1 > 1.0)
          num1 = 1f;
        ExplainedNumber speedOfProduction = Campaign.Current.Models.WorkshopModel.GetEffectiveConversionSpeedOfProduction(workshop, workshopType.Productions[index].ConversionSpeed, false);
        float num2 = num1 + speedOfProduction.ResultNumber;
        if ((double) num2 >= 1.0)
        {
          for (bool flag2 = true; flag2 && (double) num2 >= 1.0; --num2)
          {
            flag2 = workshop.Owner == Hero.MainHero ? this.TickOneProductionCycleForPlayerWorkshop(workshopType.Productions[index], workshop) : this.TickOneProductionCycleForNotableWorkshop(workshopType.Productions[index], workshop);
            if (flag2)
              flag1 = true;
          }
        }
        workshop.SetProgress(index, num2);
      }
      if (!flag1)
        return;
      workshop.UpdateLastRunTime();
    }

    public void TransferWarehouseToPlayerParty(Settlement settlement)
    {
      foreach (ItemRosterElement itemRosterElement in this.GetWarehouseRoster(settlement))
        MobileParty.MainParty.ItemRoster.AddToCounts(itemRosterElement.EquipmentElement, itemRosterElement.Amount);
      this.RemoveWarehouseData(settlement);
    }

    public class WorkshopsCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public WorkshopsCampaignBehaviorTypeDefiner()
        : base(155828)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (WorkshopsCampaignBehavior.WorkshopData), 10);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<Workshop, WorkshopsCampaignBehavior.WorkshopData>));
        this.ConstructContainerDefinition(typeof (WorkshopsCampaignBehavior.WorkshopData[]));
      }
    }

    internal class WorkshopData
    {
      [SaveableField(1)]
      public Workshop Workshop;
      [SaveableField(2)]
      public bool IsGettingInputsFromWarehouse;
      [SaveableField(3)]
      public float ProductionProgressForWarehouse;
      [SaveableField(4)]
      public float ProductionProgressForTown;
      [SaveableField(5)]
      public float StockProductionInWarehouseRatio;

      public WorkshopData(Workshop workshop) => this.Workshop = workshop;

      public override string ToString()
      {
        return this.Workshop.WorkshopType.ToString() + " in " + (object) this.Workshop.Settlement.GetName();
      }

      internal static void AutoGeneratedStaticCollectObjectsWorkshopData(
        object o,
        List<object> collectedObjects)
      {
        ((WorkshopsCampaignBehavior.WorkshopData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.Workshop);
      }

      internal static object AutoGeneratedGetMemberValueWorkshop(object o)
      {
        return (object) ((WorkshopsCampaignBehavior.WorkshopData) o).Workshop;
      }

      internal static object AutoGeneratedGetMemberValueIsGettingInputsFromWarehouse(object o)
      {
        return (object) ((WorkshopsCampaignBehavior.WorkshopData) o).IsGettingInputsFromWarehouse;
      }

      internal static object AutoGeneratedGetMemberValueProductionProgressForWarehouse(object o)
      {
        return (object) ((WorkshopsCampaignBehavior.WorkshopData) o).ProductionProgressForWarehouse;
      }

      internal static object AutoGeneratedGetMemberValueProductionProgressForTown(object o)
      {
        return (object) ((WorkshopsCampaignBehavior.WorkshopData) o).ProductionProgressForTown;
      }

      internal static object AutoGeneratedGetMemberValueStockProductionInWarehouseRatio(object o)
      {
        return (object) ((WorkshopsCampaignBehavior.WorkshopData) o).StockProductionInWarehouseRatio;
      }
    }
  }
}
