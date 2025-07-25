// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Inventory.InventoryManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Inventory
{
  public class InventoryManager
  {
    private InventoryMode _currentMode;
    private InventoryLogic _inventoryLogic;
    private InventoryManager.DoneLogicExtrasDelegate _doneLogicExtrasDelegate;

    public InventoryMode CurrentMode => this._currentMode;

    public static InventoryManager Instance => Campaign.Current.InventoryManager;

    public static InventoryLogic InventoryLogic => InventoryManager.Instance._inventoryLogic;

    public void PlayerAcceptTradeOffer() => this._inventoryLogic?.SetPlayerAcceptTraderOffer();

    public void CloseInventoryPresentation(bool fromCancel)
    {
      if (!this._inventoryLogic.DoneLogic())
        return;
      Game.Current.GameStateManager.PopState();
      InventoryManager.DoneLogicExtrasDelegate logicExtrasDelegate = this._doneLogicExtrasDelegate;
      if (logicExtrasDelegate != null)
        logicExtrasDelegate();
      this._doneLogicExtrasDelegate = (InventoryManager.DoneLogicExtrasDelegate) null;
      this._inventoryLogic = (InventoryLogic) null;
    }

    private void OpenInventoryPresentation(TextObject leftRosterName)
    {
      ItemRoster leftItemRoster = new ItemRoster();
      if (Game.Current.CheatMode)
      {
        TestCommonBase baseInstance = TestCommonBase.BaseInstance;
        if ((baseInstance != null ? (!baseInstance.IsTestEnabled ? 1 : 0) : 1) != 0)
        {
          MBReadOnlyList<ItemObject> objectTypeList = Game.Current.ObjectManager.GetObjectTypeList<ItemObject>();
          for (int index = 0; index != objectTypeList.Count; ++index)
          {
            ItemObject itemObject = objectTypeList[index];
            leftItemRoster.AddToCounts(itemObject, 10);
          }
        }
      }
      this._inventoryLogic = new InventoryLogic((PartyBase) null);
      this._inventoryLogic.Initialize(leftItemRoster, MobileParty.MainParty, false, true, CharacterObject.PlayerCharacter, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false, leftRosterName);
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(this._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    private static IMarketData GetCurrentMarketData()
    {
      IMarketData currentMarketData = (IMarketData) null;
      if (Campaign.Current.GameMode == CampaignGameMode.Campaign)
      {
        Settlement settlement = MobileParty.MainParty.CurrentSettlement ?? SettlementHelper.FindNearestTown();
        if (settlement != null)
        {
          if (settlement.IsVillage)
            currentMarketData = (IMarketData) settlement.Village.MarketData;
          else if (settlement.IsTown)
            currentMarketData = (IMarketData) settlement.Town.MarketData;
        }
      }
      if (currentMarketData == null)
        currentMarketData = (IMarketData) new FakeMarketData();
      return currentMarketData;
    }

    public static void OpenScreenAsInventoryOfSubParty(
      MobileParty rightParty,
      MobileParty leftParty,
      InventoryManager.DoneLogicExtrasDelegate doneLogicExtrasDelegate)
    {
      InventoryLogic inventoryLogic = new InventoryLogic(rightParty, rightParty.LeaderHero?.CharacterObject, leftParty.Party);
      inventoryLogic.Initialize(leftParty.ItemRoster, rightParty.ItemRoster, rightParty.MemberRoster, false, false, rightParty.LeaderHero?.CharacterObject, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false);
      InventoryManager.Instance._doneLogicExtrasDelegate = doneLogicExtrasDelegate;
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsInventoryForCraftedItemDecomposition(
      MobileParty party,
      CharacterObject character,
      InventoryManager.DoneLogicExtrasDelegate doneLogicExtrasDelegate)
    {
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(new ItemRoster(), party.ItemRoster, party.MemberRoster, false, false, character, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false);
      InventoryManager.Instance._doneLogicExtrasDelegate = doneLogicExtrasDelegate;
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsInventoryOf(MobileParty party, CharacterObject character)
    {
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(new ItemRoster(), party.ItemRoster, party.MemberRoster, false, true, character, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false);
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsInventoryOf(PartyBase rightParty, PartyBase leftParty)
    {
      InventoryManager.Instance._inventoryLogic = new InventoryLogic(leftParty);
      InventoryManager.Instance._inventoryLogic.Initialize(leftParty.ItemRoster, rightParty.ItemRoster, rightParty.MemberRoster, false, false, rightParty.LeaderHero?.CharacterObject, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false, leftMemberRoster: leftParty.MemberRoster);
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsInventory(
      InventoryManager.DoneLogicExtrasDelegate doneLogicExtrasDelegate = null)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Default;
      InventoryManager.Instance.OpenInventoryPresentation(new TextObject("{=02c5bQSM}Discard"));
      InventoryManager.Instance._doneLogicExtrasDelegate = doneLogicExtrasDelegate;
    }

    public static void OpenCampaignBattleLootScreen()
    {
      InventoryManager.OpenScreenAsLoot(new Dictionary<PartyBase, ItemRoster>()
      {
        {
          PartyBase.MainParty,
          MapEvent.PlayerMapEvent.ItemRosterForPlayerLootShare(PartyBase.MainParty)
        }
      });
    }

    public static void OpenScreenAsLoot(
      Dictionary<PartyBase, ItemRoster> itemRostersToLoot)
    {
      ItemRoster leftItemRoster = itemRostersToLoot[PartyBase.MainParty];
      InventoryManager.Instance._currentMode = InventoryMode.Loot;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(leftItemRoster, MobileParty.MainParty.ItemRoster, MobileParty.MainParty.MemberRoster, false, true, CharacterObject.PlayerCharacter, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false);
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsStash(ItemRoster stash)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Stash;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(stash, MobileParty.MainParty, false, false, CharacterObject.PlayerCharacter, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false, new TextObject("{=nZbaYvVx}Stash"));
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsWarehouse(
      ItemRoster stash,
      InventoryLogic.CapacityData otherSideCapacity)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Warehouse;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(stash, MobileParty.MainParty, false, false, CharacterObject.PlayerCharacter, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false, new TextObject("{=anTRftmb}Warehouse"), otherSideCapacityData: otherSideCapacity);
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenScreenAsReceiveItems(
      ItemRoster items,
      TextObject leftRosterName,
      InventoryManager.DoneLogicExtrasDelegate doneLogicDelegate = null)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Default;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic((PartyBase) null);
      InventoryManager.Instance._inventoryLogic.Initialize(items, MobileParty.MainParty.ItemRoster, MobileParty.MainParty.MemberRoster, false, true, CharacterObject.PlayerCharacter, InventoryManager.InventoryCategoryType.None, InventoryManager.GetCurrentMarketData(), false, leftRosterName);
      InventoryManager.Instance._doneLogicExtrasDelegate = doneLogicDelegate;
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void OpenTradeWithCaravanOrAlleyParty(
      MobileParty caravan,
      InventoryManager.InventoryCategoryType merchantItemType = InventoryManager.InventoryCategoryType.None)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Trade;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic(caravan.Party);
      InventoryManager.Instance._inventoryLogic.Initialize(caravan.Party.ItemRoster, PartyBase.MainParty.ItemRoster, PartyBase.MainParty.MemberRoster, true, true, CharacterObject.PlayerCharacter, merchantItemType, InventoryManager.GetCurrentMarketData(), false);
      InventoryManager.Instance._inventoryLogic.SetInventoryListener((InventoryListener) new InventoryManager.CaravanInventoryListener(caravan));
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
    }

    public static void ActivateTradeWithCurrentSettlement()
    {
      InventoryManager.OpenScreenAsTrade(Settlement.CurrentSettlement.ItemRoster, Settlement.CurrentSettlement.SettlementComponent);
    }

    public static void OpenScreenAsTrade(
      ItemRoster leftRoster,
      SettlementComponent settlementComponent,
      InventoryManager.InventoryCategoryType merchantItemType = InventoryManager.InventoryCategoryType.None,
      InventoryManager.DoneLogicExtrasDelegate doneLogicExtrasDelegate = null)
    {
      InventoryManager.Instance._currentMode = InventoryMode.Trade;
      InventoryManager.Instance._inventoryLogic = new InventoryLogic(settlementComponent.Owner);
      InventoryManager.Instance._inventoryLogic.Initialize(leftRoster, PartyBase.MainParty.ItemRoster, PartyBase.MainParty.MemberRoster, true, true, CharacterObject.PlayerCharacter, merchantItemType, InventoryManager.GetCurrentMarketData(), false);
      InventoryManager.Instance._inventoryLogic.SetInventoryListener((InventoryListener) new InventoryManager.MerchantInventoryListener(settlementComponent));
      InventoryManager.Instance._doneLogicExtrasDelegate = doneLogicExtrasDelegate;
      InventoryState state = Game.Current.GameStateManager.CreateState<InventoryState>();
      state.InitializeLogic(InventoryManager.Instance._inventoryLogic);
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
      if (state.Handler != null)
        state.Handler.FilterInventoryAtOpening(merchantItemType);
      else
        Debug.FailedAssert("Inventory State handler is not initialized when filtering inventory", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Inventory\\InventoryManager.cs", nameof (OpenScreenAsTrade), 395);
    }

    public static InventoryItemType GetInventoryItemTypeOfItem(ItemObject item)
    {
      if (item != null)
      {
        switch (item.ItemType)
        {
          case ItemObject.ItemTypeEnum.Horse:
            return InventoryItemType.Horse;
          case ItemObject.ItemTypeEnum.OneHandedWeapon:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.TwoHandedWeapon:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Polearm:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Arrows:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Bolts:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Shield:
            return InventoryItemType.Shield;
          case ItemObject.ItemTypeEnum.Bow:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Crossbow:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Thrown:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Goods:
            return InventoryItemType.Goods;
          case ItemObject.ItemTypeEnum.HeadArmor:
            return InventoryItemType.HeadArmor;
          case ItemObject.ItemTypeEnum.BodyArmor:
            return InventoryItemType.BodyArmor;
          case ItemObject.ItemTypeEnum.LegArmor:
            return InventoryItemType.LegArmor;
          case ItemObject.ItemTypeEnum.HandArmor:
            return InventoryItemType.HandArmor;
          case ItemObject.ItemTypeEnum.Pistol:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Musket:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Bullets:
            return InventoryItemType.Weapon;
          case ItemObject.ItemTypeEnum.Animal:
            return InventoryItemType.Animal;
          case ItemObject.ItemTypeEnum.Book:
            return InventoryItemType.Book;
          case ItemObject.ItemTypeEnum.Cape:
            return InventoryItemType.Cape;
          case ItemObject.ItemTypeEnum.HorseHarness:
            return InventoryItemType.HorseHarness;
          case ItemObject.ItemTypeEnum.Banner:
            return InventoryItemType.Banner;
        }
      }
      return InventoryItemType.None;
    }

    public enum InventoryCategoryType
    {
      None = -1, // 0xFFFFFFFF
      All = 0,
      Armors = 1,
      Weapon = 2,
      Shield = 3,
      HorseCategory = 4,
      Goods = 5,
      CategoryTypeAmount = 6,
    }

    public delegate void DoneLogicExtrasDelegate();

    private class CaravanInventoryListener : InventoryListener
    {
      private MobileParty _caravan;

      public CaravanInventoryListener(MobileParty caravan) => this._caravan = caravan;

      public override int GetGold() => this._caravan.PartyTradeGold;

      public override TextObject GetTraderName()
      {
        return this._caravan.LeaderHero == null ? this._caravan.Name : this._caravan.LeaderHero.Name;
      }

      public override void SetGold(int gold) => this._caravan.PartyTradeGold = gold;

      public override PartyBase GetOppositeParty() => this._caravan.Party;

      public override void OnTransaction() => throw new NotImplementedException();
    }

    private class MerchantInventoryListener : InventoryListener
    {
      private SettlementComponent _settlementComponent;

      public MerchantInventoryListener(SettlementComponent settlementComponent)
      {
        this._settlementComponent = settlementComponent;
      }

      public override TextObject GetTraderName() => this._settlementComponent.Owner.Name;

      public override PartyBase GetOppositeParty() => this._settlementComponent.Owner;

      public override int GetGold() => this._settlementComponent.Gold;

      public override void SetGold(int gold)
      {
        this._settlementComponent.ChangeGold(gold - this._settlementComponent.Gold);
      }

      public override void OnTransaction() => throw new NotImplementedException();
    }
  }
}
