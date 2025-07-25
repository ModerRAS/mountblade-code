// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.InventoryLogic
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  public class InventoryLogic
  {
    private ItemRoster[] _rosters;
    private ItemRoster[] _rostersBackup;
    public bool IsPreviewingItem;
    private InventoryLogic.PartyEquipment _partyInitialEquipment;
    private float _xpGainFromDonations;
    private int _transactionDebt;
    private bool _playerAcceptsTraderOffer;
    private InventoryLogic.TransactionHistory _transactionHistory = new InventoryLogic.TransactionHistory();
    private Dictionary<ItemCategory, float> _itemCategoryAverages = new Dictionary<ItemCategory, float>();
    private bool _useBasePrices;
    public InventoryManager.InventoryCategoryType MerchantItemType = InventoryManager.InventoryCategoryType.None;

    public bool DisableNetwork { get; set; }

    public Action<int> TotalAmountChange { get; set; }

    public Action DonationXpChange { get; set; }

    public event InventoryLogic.AfterResetDelegate AfterReset;

    public event InventoryLogic.ProcessResultListDelegate AfterTransfer;

    public TroopRoster RightMemberRoster { get; private set; }

    public TroopRoster LeftMemberRoster { get; private set; }

    public CharacterObject InitialEquipmentCharacter { get; private set; }

    public bool IsTrading { get; private set; }

    public bool IsSpecialActionsPermitted { get; private set; }

    public CharacterObject OwnerCharacter { get; private set; }

    public MobileParty OwnerParty { get; private set; }

    public PartyBase OtherParty { get; private set; }

    public IMarketData MarketData { get; private set; }

    public InventoryLogic.CapacityData OtherSideCapacityData { get; private set; }

    public TextObject LeftRosterName { get; private set; }

    public bool IsDiscardDonating { get; private set; }

    public bool IsOtherPartyFromPlayerClan { get; private set; }

    public InventoryListener InventoryListener { get; private set; }

    public int TotalAmount => this.TransactionDebt;

    public PartyBase OppositePartyFromListener => this.InventoryListener.GetOppositeParty();

    public SettlementComponent CurrentSettlementComponent
    {
      get => Settlement.CurrentSettlement?.SettlementComponent;
    }

    public MobileParty CurrentMobileParty
    {
      get
      {
        if (PlayerEncounter.Current != null)
          return PlayerEncounter.EncounteredParty.MobileParty;
        return PartyBase.MainParty.MapEvent?.GetLeaderParty(PartyBase.MainParty.OpponentSide)?.MobileParty != null ? PartyBase.MainParty.MapEvent.GetLeaderParty(PartyBase.MainParty.OpponentSide).MobileParty : (MobileParty) null;
      }
    }

    public int TransactionDebt
    {
      get => this._transactionDebt;
      private set
      {
        if (value == this._transactionDebt)
          return;
        this._transactionDebt = value;
        this.TotalAmountChange(this._transactionDebt);
      }
    }

    public float XpGainFromDonations
    {
      get => this._xpGainFromDonations;
      private set
      {
        if ((double) value == (double) this._xpGainFromDonations)
          return;
        this._xpGainFromDonations = value;
        if ((double) this._xpGainFromDonations < 0.0)
          this._xpGainFromDonations = 0.0f;
        Action donationXpChange = this.DonationXpChange;
        if (donationXpChange == null)
          return;
        donationXpChange();
      }
    }

    public InventoryLogic(
      MobileParty ownerParty,
      CharacterObject ownerCharacter,
      PartyBase merchantParty)
    {
      this._rosters = new ItemRoster[2];
      this._rostersBackup = new ItemRoster[2];
      this.OwnerParty = ownerParty;
      this.OwnerCharacter = ownerCharacter;
      this.OtherParty = merchantParty;
    }

    public InventoryLogic(PartyBase merchantParty)
      : this(MobileParty.MainParty, CharacterObject.PlayerCharacter, merchantParty)
    {
    }

    public void Initialize(
      ItemRoster leftItemRoster,
      MobileParty party,
      bool isTrading,
      bool isSpecialActionsPermitted,
      CharacterObject initialCharacterOfRightRoster,
      InventoryManager.InventoryCategoryType merchantItemType,
      IMarketData marketData,
      bool useBasePrices,
      TextObject leftRosterName = null,
      TroopRoster leftMemberRoster = null,
      InventoryLogic.CapacityData otherSideCapacityData = null)
    {
      this.Initialize(leftItemRoster, party.ItemRoster, party.MemberRoster, isTrading, isSpecialActionsPermitted, initialCharacterOfRightRoster, merchantItemType, marketData, useBasePrices, leftRosterName, leftMemberRoster, otherSideCapacityData);
    }

    public void Initialize(
      ItemRoster leftItemRoster,
      ItemRoster rightItemRoster,
      TroopRoster rightMemberRoster,
      bool isTrading,
      bool isSpecialActionsPermitted,
      CharacterObject initialCharacterOfRightRoster,
      InventoryManager.InventoryCategoryType merchantItemType,
      IMarketData marketData,
      bool useBasePrices,
      TextObject leftRosterName = null,
      TroopRoster leftMemberRoster = null,
      InventoryLogic.CapacityData otherSideCapacityData = null)
    {
      this.OtherSideCapacityData = otherSideCapacityData;
      this.MarketData = marketData;
      this.TransactionDebt = 0;
      this.MerchantItemType = merchantItemType;
      this.InventoryListener = (InventoryListener) new FakeInventoryListener();
      this._useBasePrices = useBasePrices;
      this.LeftRosterName = leftRosterName;
      this.IsTrading = isTrading;
      this.IsSpecialActionsPermitted = isSpecialActionsPermitted;
      this.InitializeRosters(leftItemRoster, rightItemRoster, rightMemberRoster, initialCharacterOfRightRoster, leftMemberRoster);
      this._transactionHistory.Clear();
      this.InitializeCategoryAverages();
      this.IsDiscardDonating = InventoryManager.Instance.CurrentMode == InventoryMode.Default && !Game.Current.CheatMode || InventoryManager.Instance.CurrentMode == InventoryMode.Loot;
      this.InitializeXpGainFromDonations();
      if (this.OtherParty?.MobileParty?.ActualClan != Hero.MainHero.Clan)
        return;
      this.IsOtherPartyFromPlayerClan = true;
    }

    private void InitializeRosters(
      ItemRoster leftItemRoster,
      ItemRoster rightItemRoster,
      TroopRoster rightMemberRoster,
      CharacterObject initialCharacterOfRightRoster,
      TroopRoster leftMemberRoster = null)
    {
      this._rosters[0] = leftItemRoster;
      this._rosters[1] = rightItemRoster;
      this.RightMemberRoster = rightMemberRoster;
      this.LeftMemberRoster = leftMemberRoster;
      this.InitialEquipmentCharacter = initialCharacterOfRightRoster;
      this.SetCurrentStateAsInitial();
    }

    public int GetItemTotalPrice(
      ItemRosterElement itemRosterElement,
      int absStockChange,
      out int lastPrice,
      bool isBuying)
    {
      lastPrice = this.GetItemPrice(itemRosterElement.EquipmentElement, isBuying);
      return lastPrice;
    }

    public void SetPlayerAcceptTraderOffer() => this._playerAcceptsTraderOffer = true;

    public bool DoneLogic()
    {
      if (this.IsPreviewingItem)
        return false;
      SettlementComponent settlementComponent = this.CurrentSettlementComponent;
      MobileParty currentMobileParty = this.CurrentMobileParty;
      PartyBase receipentParty = (PartyBase) null;
      if (currentMobileParty != null)
        receipentParty = currentMobileParty.Party;
      else if (settlementComponent != null)
        receipentParty = settlementComponent.Owner;
      if (!this._playerAcceptsTraderOffer)
      {
        int? gold = this.InventoryListener?.GetGold();
        int totalAmount = this.TotalAmount;
        int? nullable = gold.HasValue ? new int?(gold.GetValueOrDefault() + totalAmount) : new int?();
        int num1 = 0;
        int num2 = nullable.GetValueOrDefault() < num1 & nullable.HasValue ? 1 : 0;
      }
      if (this.InventoryListener != null && this.IsTrading && this.OwnerCharacter.HeroObject.Gold - this.TotalAmount < 0)
      {
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_warning_you_dont_have_enough_money"));
        return false;
      }
      if (this._playerAcceptsTraderOffer)
      {
        this._playerAcceptsTraderOffer = false;
        if (this.InventoryListener != null)
          this.TransactionDebt = -this.InventoryListener.GetGold();
      }
      if (this.OwnerCharacter != null && this.OwnerCharacter.HeroObject != null && this.IsTrading)
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, this.OwnerCharacter.HeroObject, MathF.Min(-this.TotalAmount, this.InventoryListener.GetGold()));
        if (settlementComponent != null && settlementComponent.IsTown && this.OwnerCharacter.GetPerkValue(DefaultPerks.Trade.TrickleDown))
        {
          int num = 0;
          List<(ItemRosterElement, int)> boughtItems = this._transactionHistory.GetBoughtItems();
          for (int index = 0; boughtItems != null && index < boughtItems.Count; ++index)
          {
            ItemObject itemObject = boughtItems[index].Item1.EquipmentElement.Item;
            if ((itemObject != null ? (itemObject.IsTradeGood ? 1 : 0) : 0) != 0)
              num += boughtItems[index].Item2;
          }
          if (num >= 10000)
          {
            for (int index = 0; index < settlementComponent.Settlement.Notables.Count; ++index)
            {
              if (settlementComponent.Settlement.Notables[index].IsMerchant)
                ChangeRelationAction.ApplyRelationChangeBetweenHeroes(settlementComponent.Settlement.Notables[index], this.OwnerCharacter.HeroObject, MathF.Floor(DefaultPerks.Trade.TrickleDown.PrimaryBonus));
            }
          }
        }
      }
      if (this.IsDiscardDonating)
        CampaignEventDispatcher.Instance.OnItemsDiscardedByPlayer(this._rosters[0]);
      CampaignEventDispatcher.Instance.OnPlayerInventoryExchange(this._transactionHistory.GetBoughtItems(), this._transactionHistory.GetSoldItems(), this.IsTrading);
      if (settlementComponent != null && this.InventoryListener != null && this.IsTrading)
        this.InventoryListener.SetGold(this.InventoryListener.GetGold() + this.TotalAmount);
      else if (currentMobileParty?.Party.LeaderHero != null && this.IsTrading)
      {
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, this.CurrentMobileParty.Party.LeaderHero, this.TotalAmount);
        if (this.CurrentMobileParty.Party.LeaderHero.CompanionOf != null)
          this.CurrentMobileParty.AddTaxGold((int) ((double) this.TotalAmount * 0.10000000149011612));
      }
      else if (receipentParty != null && receipentParty.LeaderHero == null && this.IsTrading)
        GiveGoldAction.ApplyForCharacterToParty((Hero) null, receipentParty, this.TotalAmount);
      this._partyInitialEquipment = new InventoryLogic.PartyEquipment(this.OwnerParty);
      return true;
    }

    public List<(ItemRosterElement, int)> GetBoughtItems()
    {
      return this._transactionHistory.GetBoughtItems();
    }

    public List<(ItemRosterElement, int)> GetSoldItems() => this._transactionHistory.GetSoldItems();

    public bool CanInventoryCapacityIncrease(InventoryLogic.InventorySide side)
    {
      return InventoryManager.Instance.CurrentMode != InventoryMode.Warehouse || side != 0;
    }

    public bool GetCanItemIncreaseInventoryCapacity(ItemObject item) => item.HasHorseComponent;

    private void InitializeCategoryAverages()
    {
      if (Campaign.Current == null || Settlement.CurrentSettlement == null)
        return;
      Town town = Settlement.CurrentSettlement.IsVillage ? Settlement.CurrentSettlement.Village.Bound.Town : Settlement.CurrentSettlement.Town;
      foreach (ItemCategory itemCategory in (List<ItemCategory>) ItemCategories.All)
      {
        float num1 = 0.0f;
        for (int index = 0; index < Town.AllTowns.Count; ++index)
        {
          if (Town.AllTowns[index] != town)
            num1 += Town.AllTowns[index].MarketData.GetPriceFactor(itemCategory);
        }
        float num2 = num1 / (float) (Town.AllTowns.Count - 1);
        this._itemCategoryAverages.Add(itemCategory, num2);
        Debug.Print(string.Format("Average value of {0} : {1}", (object) itemCategory.GetName(), (object) num2));
      }
    }

    private void InitializeXpGainFromDonations()
    {
      this.XpGainFromDonations = 0.0f;
      if (!(PerkHelper.PlayerHasAnyItemDonationPerk() & InventoryManager.Instance.CurrentMode == InventoryMode.Loot))
        return;
      this.XpGainFromDonations = (float) Campaign.Current.Models.ItemDiscardModel.GetXpBonusForDiscardingItems(this._rosters[0]);
    }

    private void HandleDonationOnTransferItem(
      ItemRosterElement rosterElement,
      int amount,
      bool isBuying,
      bool isSelling)
    {
      ItemObject itemObject = rosterElement.EquipmentElement.Item;
      ItemDiscardModel itemDiscardModel = Campaign.Current.Models.ItemDiscardModel;
      if (!this.IsDiscardDonating || !(isSelling | isBuying) || itemObject == null)
        return;
      this.XpGainFromDonations += (float) (itemDiscardModel.GetXpBonusForDiscardingItem(itemObject, amount) * (isSelling ? 1 : -1));
    }

    public float GetAveragePriceFactorItemCategory(ItemCategory category)
    {
      return this._itemCategoryAverages.ContainsKey(category) ? this._itemCategoryAverages[category] : -99f;
    }

    public bool IsThereAnyChanges()
    {
      return this.IsThereAnyChangeBetweenRosters(this._rosters[1], this._rostersBackup[1]) || !this._partyInitialEquipment.IsEqual(new InventoryLogic.PartyEquipment(this.OwnerParty));
    }

    private bool IsThereAnyChangeBetweenRosters(ItemRoster roster1, ItemRoster roster2)
    {
      if (roster1.Count != roster2.Count)
        return true;
      foreach (ItemRosterElement itemRosterElement in roster1)
      {
        ItemRosterElement item = itemRosterElement;
        if (!roster2.Any<ItemRosterElement>((Func<ItemRosterElement, bool>) (e => e.IsEqualTo(item))))
          return true;
      }
      return false;
    }

    public void Reset(bool fromCancel) => this.ResetLogic(fromCancel);

    private void ResetLogic(bool fromCancel)
    {
      Debug.Print("InventoryLogic::Reset");
      for (int index = 0; index < 2; ++index)
      {
        this._rosters[index].Clear();
        this._rosters[index].Add((IEnumerable<ItemRosterElement>) this._rostersBackup[index]);
      }
      this.TransactionDebt = 0;
      this._transactionHistory.Clear();
      this.InitializeXpGainFromDonations();
      this._partyInitialEquipment.ResetEquipment(this.OwnerParty);
      InventoryLogic.AfterResetDelegate afterReset = this.AfterReset;
      if (afterReset != null)
        afterReset(this, fromCancel);
      List<TransferCommandResult> resultList = new List<TransferCommandResult>();
      if (fromCancel)
        return;
      this.OnAfterTransfer(resultList);
    }

    public bool CanPlayerCompleteTransaction()
    {
      InventoryLogic.CapacityData sideCapacityData = this.OtherSideCapacityData;
      int num = sideCapacityData != null ? sideCapacityData.GetCapacity() : -1;
      if (num != -1 && (double) this._rosters[0].Sum<ItemRosterElement>((Func<ItemRosterElement, float>) (x => x.GetRosterElementWeight())) > (double) num)
        return false;
      if (!this.IsPreviewingItem || !this.IsTrading || this.TotalAmount <= 0)
        return true;
      return this.TotalAmount >= 0 && this.OwnerCharacter.HeroObject.Gold - this.TotalAmount >= 0;
    }

    public bool CanSlaughterItem(ItemRosterElement element, InventoryLogic.InventorySide sideOfItem)
    {
      return (!this.IsTrading || this._transactionHistory.IsEmpty) && this.IsSpecialActionsPermitted && this.IsSlaughterable(element.EquipmentElement.Item) && sideOfItem == InventoryLogic.InventorySide.PlayerInventory && element.Amount > 0 && !this._transactionHistory.GetBoughtItems().Any<(ItemRosterElement, int)>((Func<(ItemRosterElement, int), bool>) (i =>
      {
        EquipmentElement equipmentElement = i.Item1.EquipmentElement;
        ItemObject itemObject1 = equipmentElement.Item;
        equipmentElement = element.EquipmentElement;
        ItemObject itemObject2 = equipmentElement.Item;
        return itemObject1 == itemObject2;
      }));
    }

    public bool IsSlaughterable(ItemObject item)
    {
      return item.Type == ItemObject.ItemTypeEnum.Animal || item.Type == ItemObject.ItemTypeEnum.Horse;
    }

    public bool CanDonateItem(ItemRosterElement element, InventoryLogic.InventorySide sideOfItem)
    {
      return Game.Current.IsDevelopmentMode && this.IsSpecialActionsPermitted && element.Amount > 0 && this.IsDonatable(element.EquipmentElement.Item) && sideOfItem == InventoryLogic.InventorySide.PlayerInventory;
    }

    public bool IsDonatable(ItemObject item)
    {
      return item.Type == ItemObject.ItemTypeEnum.Arrows || item.Type == ItemObject.ItemTypeEnum.BodyArmor || item.Type == ItemObject.ItemTypeEnum.Bolts || item.Type == ItemObject.ItemTypeEnum.Bow || item.Type == ItemObject.ItemTypeEnum.Bullets || item.Type == ItemObject.ItemTypeEnum.Cape || item.Type == ItemObject.ItemTypeEnum.ChestArmor || item.Type == ItemObject.ItemTypeEnum.Crossbow || item.Type == ItemObject.ItemTypeEnum.HandArmor || item.Type == ItemObject.ItemTypeEnum.HeadArmor || item.Type == ItemObject.ItemTypeEnum.HorseHarness || item.Type == ItemObject.ItemTypeEnum.LegArmor || item.Type == ItemObject.ItemTypeEnum.Musket || item.Type == ItemObject.ItemTypeEnum.OneHandedWeapon || item.Type == ItemObject.ItemTypeEnum.Pistol || item.Type == ItemObject.ItemTypeEnum.Polearm || item.Type == ItemObject.ItemTypeEnum.Shield || item.Type == ItemObject.ItemTypeEnum.Thrown || item.Type == ItemObject.ItemTypeEnum.TwoHandedWeapon;
    }

    public void SetInventoryListener(InventoryListener inventoryListener)
    {
      this.InventoryListener = inventoryListener;
    }

    public int GetItemPrice(EquipmentElement equipmentElement, bool isBuying = false)
    {
      bool isSelling = !isBuying;
      bool flag = false;
      int num = 0;
      int lastPrice;
      bool lastIsSelling;
      if (this._transactionHistory.GetLastTransfer(equipmentElement, out lastPrice, out lastIsSelling) && lastIsSelling != isSelling)
      {
        flag = true;
        num = lastPrice;
      }
      if (this._useBasePrices)
        return equipmentElement.GetBaseValue();
      return flag ? num : this.MarketData.GetPrice(equipmentElement, this.OwnerParty, isSelling, this.OtherParty);
    }

    public int GetCostOfItemRosterElement(
      ItemRosterElement itemRosterElement,
      InventoryLogic.InventorySide side)
    {
      bool isBuying = side == InventoryLogic.InventorySide.OtherInventory && this.IsTrading;
      return this.GetItemPrice(itemRosterElement.EquipmentElement, isBuying);
    }

    private void OnAfterTransfer(List<TransferCommandResult> resultList)
    {
      InventoryLogic.ProcessResultListDelegate afterTransfer = this.AfterTransfer;
      if (afterTransfer != null)
        afterTransfer(this, resultList);
      foreach (TransferCommandResult result in resultList)
      {
        if (result.EffectedNumber > 0)
          Game.Current.EventManager.TriggerEvent<InventoryTransferItemEvent>(new InventoryTransferItemEvent(result.EffectedItemRosterElement.EquipmentElement.Item, result.ResultSide == InventoryLogic.InventorySide.PlayerInventory));
      }
    }

    public void AddTransferCommand(TransferCommand command) => this.ProcessTransferCommand(command);

    public void AddTransferCommands(IEnumerable<TransferCommand> commands)
    {
      foreach (TransferCommand command in commands)
        this.ProcessTransferCommand(command);
    }

    public bool CheckItemRosterHasElement(
      InventoryLogic.InventorySide side,
      ItemRosterElement rosterElement,
      int number)
    {
      int indexOfElement = this._rosters[(int) side].FindIndexOfElement(rosterElement.EquipmentElement);
      return indexOfElement != -1 && this._rosters[(int) side].GetElementCopyAtIndex(indexOfElement).Amount >= number;
    }

    private void ProcessTransferCommand(TransferCommand command)
    {
      this.OnAfterTransfer(this.TransferItem(ref command));
    }

    private List<TransferCommandResult> TransferItem(ref TransferCommand transferCommand)
    {
      List<TransferCommandResult> transferCommandResultList1 = new List<TransferCommandResult>();
      Debug.Print(string.Format("TransferItem Name: {0} | From: {1} To: {2} | Amount: {3}", (object) transferCommand.ElementToTransfer.EquipmentElement.Item.Name.ToString(), (object) transferCommand.FromSide, (object) transferCommand.ToSide, (object) transferCommand.Amount));
      if (transferCommand.ElementToTransfer.EquipmentElement.Item != null && InventoryLogic.TransferIsMovementValid(ref transferCommand) && this.DoesTransferItemExist(ref transferCommand))
      {
        int num1 = 0;
        bool flag = false;
        if (transferCommand.FromSide != InventoryLogic.InventorySide.Equipment && transferCommand.FromSide != InventoryLogic.InventorySide.None)
        {
          int indexOfElement = this._rosters[(int) transferCommand.FromSide].FindIndexOfElement(transferCommand.ElementToTransfer.EquipmentElement);
          ItemRosterElement elementCopyAtIndex = this._rosters[(int) transferCommand.FromSide].GetElementCopyAtIndex(indexOfElement);
          flag = transferCommand.Amount == elementCopyAtIndex.Amount;
        }
        bool isSelling = this.IsSell(transferCommand.FromSide, transferCommand.ToSide);
        bool isBuying = this.IsBuy(transferCommand.FromSide, transferCommand.ToSide);
        ItemRosterElement elementToTransfer1;
        for (int index = 0; index < transferCommand.Amount; ++index)
        {
          if (transferCommand.ToSide == InventoryLogic.InventorySide.Equipment && transferCommand.CharacterEquipment[(int) transferCommand.ToEquipmentIndex].Item != null)
          {
            TransferCommand transferCommand1 = TransferCommand.Transfer(1, InventoryLogic.InventorySide.Equipment, InventoryLogic.InventorySide.PlayerInventory, new ItemRosterElement(transferCommand.CharacterEquipment[(int) transferCommand.ToEquipmentIndex], 1), transferCommand.ToEquipmentIndex, EquipmentIndex.None, transferCommand.Character, transferCommand.IsCivilianEquipment);
            transferCommandResultList1.AddRange((IEnumerable<TransferCommandResult>) this.TransferItem(ref transferCommand1));
          }
          elementToTransfer1 = transferCommand.ElementToTransfer;
          EquipmentElement equipmentElement1 = elementToTransfer1.EquipmentElement;
          int itemPrice = this.GetItemPrice(equipmentElement1, isBuying);
          if (isBuying | isSelling)
            this._transactionHistory.RecordTransaction(equipmentElement1, isSelling, itemPrice);
          if (this.IsTrading)
          {
            if (isBuying)
              num1 += itemPrice;
            else if (isSelling)
              num1 -= itemPrice;
          }
          if (transferCommand.FromSide == InventoryLogic.InventorySide.Equipment)
          {
            ItemRosterElement itemRosterElement = new ItemRosterElement(transferCommand.CharacterEquipment[(int) transferCommand.FromEquipmentIndex], transferCommand.Amount);
            --itemRosterElement.Amount;
            transferCommand.CharacterEquipment[(int) transferCommand.FromEquipmentIndex] = itemRosterElement.EquipmentElement;
          }
          else if (transferCommand.FromSide == InventoryLogic.InventorySide.PlayerInventory || transferCommand.FromSide == InventoryLogic.InventorySide.OtherInventory)
          {
            ItemRoster roster = this._rosters[(int) transferCommand.FromSide];
            elementToTransfer1 = transferCommand.ElementToTransfer;
            EquipmentElement equipmentElement2 = elementToTransfer1.EquipmentElement;
            roster.AddToCounts(equipmentElement2, -1);
          }
          if (transferCommand.ToSide == InventoryLogic.InventorySide.Equipment)
          {
            ItemRosterElement elementToTransfer2 = transferCommand.ElementToTransfer with
            {
              Amount = 1
            };
            transferCommand.CharacterEquipment[(int) transferCommand.ToEquipmentIndex] = elementToTransfer2.EquipmentElement;
          }
          else if (transferCommand.ToSide == InventoryLogic.InventorySide.PlayerInventory || transferCommand.ToSide == InventoryLogic.InventorySide.OtherInventory)
          {
            ItemRoster roster = this._rosters[(int) transferCommand.ToSide];
            elementToTransfer1 = transferCommand.ElementToTransfer;
            EquipmentElement equipmentElement3 = elementToTransfer1.EquipmentElement;
            roster.AddToCounts(equipmentElement3, 1);
          }
        }
        if (transferCommand.FromSide == InventoryLogic.InventorySide.Equipment)
        {
          ItemRosterElement effectedItemRosterElement = new ItemRosterElement(transferCommand.CharacterEquipment[(int) transferCommand.FromEquipmentIndex], transferCommand.Amount);
          --effectedItemRosterElement.Amount;
          transferCommandResultList1.Add(new TransferCommandResult(transferCommand.FromSide, effectedItemRosterElement, -transferCommand.Amount, effectedItemRosterElement.Amount, transferCommand.FromEquipmentIndex, transferCommand.Character, transferCommand.IsCivilianEquipment));
        }
        else if (transferCommand.FromSide == InventoryLogic.InventorySide.PlayerInventory || transferCommand.FromSide == InventoryLogic.InventorySide.OtherInventory)
        {
          if (flag)
          {
            List<TransferCommandResult> transferCommandResultList2 = transferCommandResultList1;
            int fromSide = (int) transferCommand.FromSide;
            elementToTransfer1 = transferCommand.ElementToTransfer;
            ItemRosterElement effectedItemRosterElement = new ItemRosterElement(elementToTransfer1.EquipmentElement, 0);
            int effectedNumber = -transferCommand.Amount;
            int fromEquipmentIndex = (int) transferCommand.FromEquipmentIndex;
            CharacterObject character = transferCommand.Character;
            int num2 = transferCommand.IsCivilianEquipment ? 1 : 0;
            TransferCommandResult transferCommandResult = new TransferCommandResult((InventoryLogic.InventorySide) fromSide, effectedItemRosterElement, effectedNumber, 0, (EquipmentIndex) fromEquipmentIndex, character, num2 != 0);
            transferCommandResultList2.Add(transferCommandResult);
          }
          else
          {
            ItemRoster roster = this._rosters[(int) transferCommand.FromSide];
            elementToTransfer1 = transferCommand.ElementToTransfer;
            EquipmentElement equipmentElement = elementToTransfer1.EquipmentElement;
            int indexOfElement = roster.FindIndexOfElement(equipmentElement);
            ItemRosterElement elementCopyAtIndex = this._rosters[(int) transferCommand.FromSide].GetElementCopyAtIndex(indexOfElement);
            transferCommandResultList1.Add(new TransferCommandResult(transferCommand.FromSide, elementCopyAtIndex, -transferCommand.Amount, elementCopyAtIndex.Amount, transferCommand.FromEquipmentIndex, transferCommand.Character, transferCommand.IsCivilianEquipment));
          }
        }
        if (transferCommand.ToSide == InventoryLogic.InventorySide.Equipment)
        {
          ItemRosterElement elementToTransfer3 = transferCommand.ElementToTransfer with
          {
            Amount = 1
          };
          transferCommandResultList1.Add(new TransferCommandResult(transferCommand.ToSide, elementToTransfer3, 1, 1, transferCommand.ToEquipmentIndex, transferCommand.Character, transferCommand.IsCivilianEquipment));
        }
        else if (transferCommand.ToSide == InventoryLogic.InventorySide.PlayerInventory || transferCommand.ToSide == InventoryLogic.InventorySide.OtherInventory)
        {
          ItemRoster roster = this._rosters[(int) transferCommand.ToSide];
          elementToTransfer1 = transferCommand.ElementToTransfer;
          EquipmentElement equipmentElement = elementToTransfer1.EquipmentElement;
          int indexOfElement = roster.FindIndexOfElement(equipmentElement);
          ItemRosterElement elementCopyAtIndex = this._rosters[(int) transferCommand.ToSide].GetElementCopyAtIndex(indexOfElement);
          transferCommandResultList1.Add(new TransferCommandResult(transferCommand.ToSide, elementCopyAtIndex, transferCommand.Amount, elementCopyAtIndex.Amount, transferCommand.ToEquipmentIndex, transferCommand.Character, transferCommand.IsCivilianEquipment));
        }
        this.HandleDonationOnTransferItem(transferCommand.ElementToTransfer, transferCommand.Amount, isBuying, isSelling);
        this.TransactionDebt += num1;
      }
      return transferCommandResultList1;
    }

    private bool IsSell(InventoryLogic.InventorySide fromSide, InventoryLogic.InventorySide toSide)
    {
      if (toSide != InventoryLogic.InventorySide.OtherInventory)
        return false;
      return fromSide == InventoryLogic.InventorySide.Equipment || fromSide == InventoryLogic.InventorySide.PlayerInventory;
    }

    private bool IsBuy(InventoryLogic.InventorySide fromSide, InventoryLogic.InventorySide toSide)
    {
      if (fromSide != InventoryLogic.InventorySide.OtherInventory)
        return false;
      return toSide == InventoryLogic.InventorySide.Equipment || toSide == InventoryLogic.InventorySide.PlayerInventory;
    }

    public void SlaughterItem(ItemRosterElement itemRosterElement)
    {
      List<TransferCommandResult> resultList = new List<TransferCommandResult>();
      EquipmentElement equipmentElement = itemRosterElement.EquipmentElement;
      int meatCount = equipmentElement.Item.HorseComponent.MeatCount;
      int hideCount = equipmentElement.Item.HorseComponent.HideCount;
      ItemRosterElement elementCopyAtIndex1 = this._rosters[1].GetElementCopyAtIndex(this._rosters[1].AddToCounts(DefaultItems.Meat, meatCount));
      int num = itemRosterElement.Amount == 1 ? 1 : 0;
      int counts = this._rosters[1].AddToCounts(itemRosterElement.EquipmentElement, -1);
      if (num != 0)
      {
        resultList.Add(new TransferCommandResult(InventoryLogic.InventorySide.PlayerInventory, new ItemRosterElement(equipmentElement, 0), -1, 0, EquipmentIndex.None, (CharacterObject) null, equipmentElement.Item.IsCivilian));
      }
      else
      {
        ItemRosterElement elementCopyAtIndex2 = this._rosters[1].GetElementCopyAtIndex(counts);
        resultList.Add(new TransferCommandResult(InventoryLogic.InventorySide.PlayerInventory, elementCopyAtIndex2, -1, elementCopyAtIndex2.Amount, EquipmentIndex.None, (CharacterObject) null, elementCopyAtIndex2.EquipmentElement.Item.IsCivilian));
      }
      resultList.Add(new TransferCommandResult(InventoryLogic.InventorySide.PlayerInventory, elementCopyAtIndex1, meatCount, elementCopyAtIndex1.Amount, EquipmentIndex.None, (CharacterObject) null, elementCopyAtIndex1.EquipmentElement.Item.IsCivilian));
      if (hideCount > 0)
      {
        ItemRosterElement elementCopyAtIndex3 = this._rosters[1].GetElementCopyAtIndex(this._rosters[1].AddToCounts(DefaultItems.Hides, hideCount));
        resultList.Add(new TransferCommandResult(InventoryLogic.InventorySide.PlayerInventory, elementCopyAtIndex3, hideCount, elementCopyAtIndex3.Amount, EquipmentIndex.None, (CharacterObject) null, elementCopyAtIndex3.EquipmentElement.Item.IsCivilian));
      }
      this.SetCurrentStateAsInitial();
      this.OnAfterTransfer(resultList);
    }

    public void DonateItem(ItemRosterElement itemRosterElement)
    {
      List<TransferCommandResult> resultList = new List<TransferCommandResult>();
      int num = 100 * (int) (itemRosterElement.EquipmentElement.Item.Tier + 1);
      InventoryLogic.InventorySide index = InventoryLogic.InventorySide.PlayerInventory;
      int counts = this._rosters[(int) index].AddToCounts(itemRosterElement.EquipmentElement, -1);
      ItemRosterElement elementCopyAtIndex = this._rosters[(int) index].GetElementCopyAtIndex(counts);
      resultList.Add(new TransferCommandResult(InventoryLogic.InventorySide.PlayerInventory, elementCopyAtIndex, -1, elementCopyAtIndex.Amount, EquipmentIndex.None, (CharacterObject) null, elementCopyAtIndex.EquipmentElement.Item.IsCivilian));
      if (num > 0)
      {
        TroopRosterElement elementWithPredicate = PartyBase.MainParty.MemberRoster.GetTroopRoster().GetRandomElementWithPredicate<TroopRosterElement>((Func<TroopRosterElement, bool>) (m => !m.Character.IsHero && m.Character.UpgradeTargets.Length != 0));
        if (elementWithPredicate.Character != null)
        {
          PartyBase.MainParty.MemberRoster.AddXpToTroop(num, elementWithPredicate.Character);
          TextObject message = new TextObject("{=Kwja0a4s}Added {XPAMOUNT} amount of xp to {TROOPNAME}");
          message.SetTextVariable("XPAMOUNT", num);
          message.SetTextVariable("TROOPNAME", elementWithPredicate.Character.Name.ToString());
          Debug.Print(message.ToString());
          MBInformationManager.AddQuickInformation(message);
        }
      }
      this.SetCurrentStateAsInitial();
      this.OnAfterTransfer(resultList);
    }

    private static bool TransferIsMovementValid(ref TransferCommand transferCommand)
    {
      if (transferCommand.ElementToTransfer.EquipmentElement.IsQuestItem && (transferCommand.ElementToTransfer.EquipmentElement.Item.BannerComponent?.BannerEffect == null || (transferCommand.FromSide != InventoryLogic.InventorySide.PlayerInventory || transferCommand.ToSide != InventoryLogic.InventorySide.Equipment) && (transferCommand.FromSide != InventoryLogic.InventorySide.Equipment || transferCommand.ToSide != InventoryLogic.InventorySide.PlayerInventory)))
        return false;
      bool flag = false;
      if (transferCommand.ToSide == InventoryLogic.InventorySide.Equipment)
      {
        InventoryItemType inventoryItemTypeOfItem = InventoryManager.GetInventoryItemTypeOfItem(transferCommand.ElementToTransfer.EquipmentElement.Item);
        switch (transferCommand.ToEquipmentIndex)
        {
          case EquipmentIndex.WeaponItemBeginSlot:
          case EquipmentIndex.Weapon1:
          case EquipmentIndex.Weapon2:
          case EquipmentIndex.Weapon3:
            flag = inventoryItemTypeOfItem == InventoryItemType.Weapon || inventoryItemTypeOfItem == InventoryItemType.Shield;
            break;
          case EquipmentIndex.ExtraWeaponSlot:
            flag = inventoryItemTypeOfItem == InventoryItemType.Banner;
            break;
          case EquipmentIndex.NumAllWeaponSlots:
            flag = inventoryItemTypeOfItem == InventoryItemType.HeadArmor;
            break;
          case EquipmentIndex.Body:
            flag = inventoryItemTypeOfItem == InventoryItemType.BodyArmor;
            break;
          case EquipmentIndex.Leg:
            flag = inventoryItemTypeOfItem == InventoryItemType.LegArmor;
            break;
          case EquipmentIndex.Gloves:
            flag = inventoryItemTypeOfItem == InventoryItemType.HandArmor;
            break;
          case EquipmentIndex.Cape:
            flag = inventoryItemTypeOfItem == InventoryItemType.Cape;
            break;
          case EquipmentIndex.ArmorItemEndSlot:
            flag = inventoryItemTypeOfItem == InventoryItemType.Horse;
            break;
          case EquipmentIndex.HorseHarness:
            flag = inventoryItemTypeOfItem == InventoryItemType.HorseHarness;
            break;
        }
      }
      else
        flag = true;
      return flag;
    }

    private bool DoesTransferItemExist(ref TransferCommand transferCommand)
    {
      if (transferCommand.FromSide == InventoryLogic.InventorySide.OtherInventory || transferCommand.FromSide == InventoryLogic.InventorySide.PlayerInventory)
        return this.CheckItemRosterHasElement(transferCommand.FromSide, transferCommand.ElementToTransfer, transferCommand.Amount);
      if (transferCommand.FromSide != InventoryLogic.InventorySide.Equipment)
        return false;
      EquipmentElement equipmentElement = transferCommand.CharacterEquipment[(int) transferCommand.FromEquipmentIndex];
      if (equipmentElement.Item == null)
        return false;
      equipmentElement = transferCommand.ElementToTransfer.EquipmentElement;
      return equipmentElement.IsEqualTo(transferCommand.CharacterEquipment[(int) transferCommand.FromEquipmentIndex]);
    }

    public void TransferOne(ItemRosterElement itemRosterElement)
    {
    }

    public int GetElementCountOnSide(InventoryLogic.InventorySide side)
    {
      return this._rosters[(int) side].Count;
    }

    public IEnumerable<ItemRosterElement> GetElementsInInitialRoster(
      InventoryLogic.InventorySide side)
    {
      return (IEnumerable<ItemRosterElement>) this._rostersBackup[(int) side];
    }

    public IEnumerable<ItemRosterElement> GetElementsInRoster(InventoryLogic.InventorySide side)
    {
      return (IEnumerable<ItemRosterElement>) this._rosters[(int) side];
    }

    private void SetCurrentStateAsInitial()
    {
      for (int index = 0; index < this._rostersBackup.Length; ++index)
        this._rostersBackup[index] = new ItemRoster(this._rosters[index]);
      this._partyInitialEquipment = new InventoryLogic.PartyEquipment(this.OwnerParty);
    }

    public ItemRosterElement? FindItemFromSide(
      InventoryLogic.InventorySide side,
      EquipmentElement item)
    {
      int indexOfElement = this._rosters[(int) side].FindIndexOfElement(item);
      return indexOfElement >= 0 ? new ItemRosterElement?(this._rosters[(int) side].ElementAt<ItemRosterElement>(indexOfElement)) : new ItemRosterElement?();
    }

    public enum TransferType
    {
      Neutral,
      Sell,
      Buy,
    }

    public enum InventorySide
    {
      None = -1, // 0xFFFFFFFF
      OtherInventory = 0,
      PlayerInventory = 1,
      Equipment = 2,
    }

    public delegate void AfterResetDelegate(InventoryLogic inventoryLogic, bool fromCancel);

    public delegate void TotalAmountChangeDelegate(int newTotalAmount);

    public delegate void ProcessResultListDelegate(
      InventoryLogic inventoryLogic,
      List<TransferCommandResult> results);

    private class PartyEquipment
    {
      public Dictionary<CharacterObject, Equipment[]> CharacterEquipments { get; private set; }

      public PartyEquipment(MobileParty party)
      {
        this.CharacterEquipments = new Dictionary<CharacterObject, Equipment[]>();
        this.InitializeCopyFrom(party);
      }

      public void InitializeCopyFrom(MobileParty party)
      {
        this.CharacterEquipments = new Dictionary<CharacterObject, Equipment[]>();
        for (int index = 0; index < party.MemberRoster.Count; ++index)
        {
          CharacterObject character = party.MemberRoster.GetElementCopyAtIndex(index).Character;
          if (character.IsHero)
            this.CharacterEquipments.Add(character, new Equipment[2]
            {
              new Equipment(character.Equipment),
              new Equipment(character.FirstCivilianEquipment)
            });
        }
      }

      internal void ResetEquipment(MobileParty ownerParty)
      {
        foreach (KeyValuePair<CharacterObject, Equipment[]> characterEquipment in this.CharacterEquipments)
        {
          characterEquipment.Key.Equipment.FillFrom(characterEquipment.Value[0]);
          characterEquipment.Key.FirstCivilianEquipment.FillFrom(characterEquipment.Value[1]);
        }
      }

      public void SetReference(InventoryLogic.PartyEquipment partyEquipment)
      {
        this.CharacterEquipments.Clear();
        this.CharacterEquipments = partyEquipment.CharacterEquipments;
      }

      public bool IsEqual(InventoryLogic.PartyEquipment partyEquipment)
      {
        if (partyEquipment.CharacterEquipments.Keys.Count != this.CharacterEquipments.Keys.Count)
          return false;
        foreach (CharacterObject key in partyEquipment.CharacterEquipments.Keys)
        {
          Equipment[] equipmentArray1;
          Equipment[] equipmentArray2;
          if (!this.CharacterEquipments.Keys.Contains<CharacterObject>(key) || !this.CharacterEquipments.TryGetValue(key, out equipmentArray1) || !partyEquipment.CharacterEquipments.TryGetValue(key, out equipmentArray2) || equipmentArray2.Length != equipmentArray1.Length)
            return false;
          for (int index = 0; index < equipmentArray1.Length; ++index)
          {
            if (!equipmentArray1[index].IsEquipmentEqualTo(equipmentArray2[index]))
              return false;
          }
        }
        return true;
      }
    }

    private class ItemLog : IReadOnlyCollection<int>, IEnumerable<int>, IEnumerable
    {
      private List<int> _transactions = new List<int>();
      private bool _isSelling;

      public bool IsSelling => this._isSelling;

      public int Count => this._transactions.Count;

      private void AddTransaction(int price, bool isSelling)
      {
        if (this._transactions.IsEmpty<int>())
          this._isSelling = isSelling;
        this._transactions.Add(price);
      }

      private void RemoveLastTransaction()
      {
        if (!this._transactions.IsEmpty<int>())
          this._transactions.RemoveAt(this._transactions.Count - 1);
        else
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Inventory\\InventoryLogic.cs", nameof (RemoveLastTransaction), 1177);
      }

      public void RecordTransaction(int price, bool isSelling)
      {
        if (!this._transactions.IsEmpty<int>() && isSelling != this._isSelling)
          this.RemoveLastTransaction();
        else
          this.AddTransaction(price, isSelling);
      }

      public bool GetLastTransaction(out int price, out bool isSelling)
      {
        if (this._transactions.IsEmpty<int>())
        {
          price = 0;
          isSelling = false;
          return false;
        }
        price = this._transactions[this._transactions.Count - 1];
        isSelling = this._isSelling;
        return true;
      }

      public IEnumerator<int> GetEnumerator()
      {
        return ((IEnumerable<int>) this._transactions).GetEnumerator();
      }

      IEnumerator IEnumerable.GetEnumerator()
      {
        return (IEnumerator) ((IEnumerable<int>) this._transactions).GetEnumerator();
      }
    }

    public class CapacityData
    {
      private readonly Func<int> _getCapacity;
      private readonly Func<TextObject> _getCapacityExceededWarningText;
      private readonly Func<TextObject> _getCapacityExceededHintText;

      public CapacityData(
        Func<int> getCapacity,
        Func<TextObject> getCapacityExceededWarningText,
        Func<TextObject> getCapacityExceededHintText)
      {
        this._getCapacity = getCapacity;
        this._getCapacityExceededWarningText = getCapacityExceededHintText;
        this._getCapacityExceededHintText = getCapacityExceededWarningText;
      }

      public int GetCapacity()
      {
        Func<int> getCapacity = this._getCapacity;
        return getCapacity == null ? -1 : getCapacity();
      }

      public TextObject GetCapacityExceededWarningText()
      {
        Func<TextObject> exceededWarningText = this._getCapacityExceededWarningText;
        return exceededWarningText == null ? (TextObject) null : exceededWarningText();
      }

      public TextObject GetCapacityExceededHintText()
      {
        Func<TextObject> exceededHintText = this._getCapacityExceededHintText;
        return exceededHintText == null ? (TextObject) null : exceededHintText();
      }
    }

    private class TransactionHistory
    {
      private Dictionary<EquipmentElement, InventoryLogic.ItemLog> _transactionLogs = new Dictionary<EquipmentElement, InventoryLogic.ItemLog>();

      internal void RecordTransaction(
        EquipmentElement elementToTransfer,
        bool isSelling,
        int price)
      {
        InventoryLogic.ItemLog itemLog;
        if (!this._transactionLogs.TryGetValue(elementToTransfer, out itemLog))
        {
          itemLog = new InventoryLogic.ItemLog();
          this._transactionLogs[elementToTransfer] = itemLog;
        }
        itemLog.RecordTransaction(price, isSelling);
      }

      public bool IsEmpty
      {
        get
        {
          return this._transactionLogs.IsEmpty<KeyValuePair<EquipmentElement, InventoryLogic.ItemLog>>();
        }
      }

      public void Clear() => this._transactionLogs.Clear();

      public bool GetLastTransfer(
        EquipmentElement equipmentElement,
        out int lastPrice,
        out bool lastIsSelling)
      {
        InventoryLogic.ItemLog itemLog;
        int num = this._transactionLogs.TryGetValue(equipmentElement, out itemLog) ? 1 : 0;
        lastPrice = 0;
        lastIsSelling = false;
        return num != 0 && itemLog.GetLastTransaction(out lastPrice, out lastIsSelling);
      }

      internal List<(ItemRosterElement, int)> GetTransferredItems(bool isSelling)
      {
        List<(ItemRosterElement, int)> transferredItems = new List<(ItemRosterElement, int)>();
        foreach (KeyValuePair<EquipmentElement, InventoryLogic.ItemLog> transactionLog in this._transactionLogs)
        {
          if (transactionLog.Value.Count > 0 && !transactionLog.Value.IsSelling == isSelling)
          {
            int num = transactionLog.Value.Sum();
            transferredItems.Add((new ItemRosterElement(transactionLog.Key.Item, transactionLog.Value.Count, transactionLog.Key.ItemModifier), num));
          }
        }
        return transferredItems;
      }

      internal List<(ItemRosterElement, int)> GetBoughtItems() => this.GetTransferredItems(true);

      internal List<(ItemRosterElement, int)> GetSoldItems() => this.GetTransferredItems(false);
    }
  }
}
