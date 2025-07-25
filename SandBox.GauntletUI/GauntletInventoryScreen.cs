// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletInventoryScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View;
using System;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (InventoryState))]
  public class GauntletInventoryScreen : 
    ScreenBase,
    IInventoryStateHandler,
    IGameStateListener,
    IChangeableScreen
  {
    private IGauntletMovie _gauntletMovie;
    private SPInventoryVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private bool _closed;
    private bool _openedFromMission;
    private SpriteCategory _inventoryCategory;

    public InventoryState InventoryState { get; private set; }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (!this._closed)
        LoadingWindow.DisableGlobalLoadingWindow();
      this._dataSource.IsFiveStackModifierActive = this._gauntletLayer.Input.IsHotKeyDown("FiveStackModifier");
      this._dataSource.IsEntireStackModifierActive = this._gauntletLayer.Input.IsHotKeyDown("EntireStackModifier");
      if (this._dataSource.IsSearchAvailable && this._gauntletLayer.IsFocusedOnInput())
        return;
      if (this._gauntletLayer.Input.IsHotKeyReleased("SwitchAlternative") && this._dataSource != null)
        this._dataSource.CompareNextItem();
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Exit") || this._gauntletLayer.Input.IsGameKeyDownAndReleased(38))
        this.ExecuteCancel();
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm"))
        this.ExecuteConfirm();
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Reset"))
        this.HandleResetInput();
      else if (this._gauntletLayer.Input.IsHotKeyPressed("SwitchToPreviousTab"))
      {
        if (this._dataSource.IsFocusedOnItemList && Input.IsGamepadActive)
        {
          if (this._dataSource.CurrentFocusedItem == null || !this._dataSource.CurrentFocusedItem.IsTransferable || this._dataSource.CurrentFocusedItem.InventorySide != InventoryLogic.InventorySide.OtherInventory)
            return;
          this.ExecuteBuySingle();
        }
        else
          this.ExecuteSwitchToPreviousTab();
      }
      else if (this._gauntletLayer.Input.IsHotKeyPressed("SwitchToNextTab"))
      {
        if (this._dataSource.IsFocusedOnItemList && Input.IsGamepadActive)
        {
          if (this._dataSource.CurrentFocusedItem == null || !this._dataSource.CurrentFocusedItem.IsTransferable || this._dataSource.CurrentFocusedItem.InventorySide != InventoryLogic.InventorySide.PlayerInventory)
            return;
          this.ExecuteSellSingle();
        }
        else
          this.ExecuteSwitchToNextTab();
      }
      else if (this._gauntletLayer.Input.IsHotKeyPressed("TakeAll"))
      {
        this.ExecuteTakeAll();
      }
      else
      {
        if (!this._gauntletLayer.Input.IsHotKeyPressed("GiveAll"))
          return;
        this.ExecuteGiveAll();
      }
    }

    public GauntletInventoryScreen(InventoryState inventoryState)
    {
      this.InventoryState = inventoryState;
      this.InventoryState.Handler = (IInventoryStateHandler) this;
    }

    protected override void OnInitialize()
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._inventoryCategory = spriteData.SpriteCategories["ui_inventory"];
      this._inventoryCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      InventoryLogic inventoryLogic = this.InventoryState.InventoryLogic;
      Mission current = Mission.Current;
      int num = current != null ? (current.DoesMissionRequireCivilianEquipment ? 1 : 0) : 0;
      Func<WeaponComponentData, ItemObject.ItemUsageSetFlags> func = new Func<WeaponComponentData, ItemObject.ItemUsageSetFlags>(this.GetItemUsageSetFlag);
      string stackShortcutkeyText1 = this.GetFiveStackShortcutkeyText();
      string stackShortcutkeyText2 = this.GetEntireStackShortcutkeyText();
      this._dataSource = new SPInventoryVM(inventoryLogic, num != 0, func, stackShortcutkeyText1, stackShortcutkeyText2);
      this._dataSource.SetGetKeyTextFromKeyIDFunc(new Func<string, TextObject>(((GameKeyTextExtensions) Game.Current.GameTextManager).GetHotKeyGameTextFromKeyID));
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetPreviousCharacterInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToPreviousTab"));
      this._dataSource.SetNextCharacterInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToNextTab"));
      this._dataSource.SetBuyAllInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("TakeAll"));
      this._dataSource.SetSellAllInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("GiveAll"));
      GauntletLayer gauntletLayer = new GauntletLayer(15, shouldClear: true);
      gauntletLayer.IsFocusLayer = true;
      this._gauntletLayer = gauntletLayer;
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("InventoryHotKeyCategory"));
      this._gauntletMovie = this._gauntletLayer.LoadMovie("Inventory", (ViewModel) this._dataSource);
      this._openedFromMission = this.InventoryState.Predecessor is MissionState;
      InformationManager.ClearAllMessages();
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_inventory_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
    }

    private string GetFiveStackShortcutkeyText()
    {
      return (!Input.IsControllerConnected ? 0 : (!Input.IsMouseActive ? 1 : 0)) == 0 ? Module.CurrentModule.GlobalTextManager.FindText("str_game_key_text", "anyshift").ToString() : string.Empty;
    }

    private string GetEntireStackShortcutkeyText()
    {
      return (!Input.IsControllerConnected ? 0 : (!Input.IsMouseActive ? 1 : 0)) == 0 ? Module.CurrentModule.GlobalTextManager.FindText("str_game_key_text", "anycontrol").ToString() : (string) null;
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this._closed = true;
      MBInformationManager.HideInformations();
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._dataSource?.RefreshCallbacks();
      if (this._gauntletLayer == null)
        return;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this._gauntletMovie = (IGauntletMovie) null;
      this._inventoryCategory.Unload();
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (SPInventoryVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    void IGameStateListener.OnActivate()
    {
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.InventoryScreen));
    }

    void IGameStateListener.OnDeactivate()
    {
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
    }

    void IInventoryStateHandler.FilterInventoryAtOpening(
      InventoryManager.InventoryCategoryType inventoryCategoryType)
    {
      if (this._dataSource == null)
      {
        Debug.FailedAssert("Data source is not initialized when filtering inventory", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\GauntletInventoryScreen.cs", "FilterInventoryAtOpening", 234);
      }
      else
      {
        switch (inventoryCategoryType)
        {
          case InventoryManager.InventoryCategoryType.Armors:
            this._dataSource.ExecuteFilterArmors();
            break;
          case InventoryManager.InventoryCategoryType.Weapon:
            this._dataSource.ExecuteFilterWeapons();
            break;
          case InventoryManager.InventoryCategoryType.HorseCategory:
            this._dataSource.ExecuteFilterMounts();
            break;
          case InventoryManager.InventoryCategoryType.Goods:
            this._dataSource.ExecuteFilterMisc();
            break;
        }
      }
    }

    public void ExecuteLootingScript() => this._dataSource.ExecuteBuyAllItems();

    public void ExecuteSellAllLoot() => this._dataSource.ExecuteSellAllItems();

    private void HandleResetInput()
    {
      if (this._dataSource.ItemPreview.IsSelected)
        return;
      this._dataSource.ExecuteResetTranstactions();
      UISoundsHelper.PlayUISound("event:/ui/default");
    }

    public void ExecuteCancel()
    {
      if (this._dataSource.ItemPreview.IsSelected)
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ClosePreview();
      }
      else if (this._dataSource.IsExtendedEquipmentControlsEnabled)
      {
        this._dataSource.IsExtendedEquipmentControlsEnabled = false;
      }
      else
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteResetAndCompleteTranstactions();
      }
    }

    public void ExecuteConfirm()
    {
      if (this._dataSource.ItemPreview.IsSelected || this._dataSource.IsDoneDisabled)
        return;
      this._dataSource.ExecuteCompleteTranstactions();
      UISoundsHelper.PlayUISound("event:/ui/default");
    }

    public void ExecuteSwitchToPreviousTab()
    {
      if (this._dataSource.ItemPreview.IsSelected)
        return;
      MBBindingList<InventoryCharacterSelectorItemVM> itemList = this._dataSource.CharacterList.ItemList;
      // ISSUE: explicit non-virtual call
      if ((itemList != null ? (__nonvirtual (itemList.Count) > 1 ? 1 : 0) : 0) != 0)
        UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.CharacterList.ExecuteSelectPreviousItem();
    }

    public void ExecuteSwitchToNextTab()
    {
      if (this._dataSource.ItemPreview.IsSelected)
        return;
      MBBindingList<InventoryCharacterSelectorItemVM> itemList = this._dataSource.CharacterList.ItemList;
      // ISSUE: explicit non-virtual call
      if ((itemList != null ? (__nonvirtual (itemList.Count) > 1 ? 1 : 0) : 0) != 0)
        UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.CharacterList.ExecuteSelectNextItem();
    }

    public void ExecuteBuySingle()
    {
      this._dataSource.CurrentFocusedItem.ExecuteBuySingle();
      UISoundsHelper.PlayUISound("event:/ui/transfer");
    }

    public void ExecuteSellSingle()
    {
      this._dataSource.CurrentFocusedItem.ExecuteSellSingle();
      UISoundsHelper.PlayUISound("event:/ui/transfer");
    }

    public void ExecuteTakeAll()
    {
      if (this._dataSource.ItemPreview.IsSelected)
        return;
      this._dataSource.ExecuteBuyAllItems();
      UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
    }

    public void ExecuteGiveAll()
    {
      if (this._dataSource.ItemPreview.IsSelected)
        return;
      this._dataSource.ExecuteSellAllItems();
      UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
    }

    public void ExecuteBuyConsumableItem() => this._dataSource.ExecuteBuyItemTest();

    private ItemObject.ItemUsageSetFlags GetItemUsageSetFlag(WeaponComponentData item)
    {
      return !string.IsNullOrEmpty(item.ItemUsage) ? MBItem.GetItemUsageSetFlags(item.ItemUsage) : (ItemObject.ItemUsageSetFlags) 0;
    }

    private void CloseInventoryScreen()
    {
      InventoryManager.Instance.CloseInventoryPresentation(false);
    }

    bool IChangeableScreen.AnyUnsavedChanges()
    {
      return this.InventoryState.InventoryLogic.IsThereAnyChanges();
    }

    bool IChangeableScreen.CanChangesBeApplied()
    {
      return this.InventoryState.InventoryLogic.CanPlayerCompleteTransaction();
    }

    void IChangeableScreen.ApplyChanges()
    {
      this._dataSource.ItemPreview.Close();
      this.InventoryState.InventoryLogic.DoneLogic();
    }

    void IChangeableScreen.ResetChanges() => this.InventoryState.InventoryLogic.Reset(true);
  }
}
