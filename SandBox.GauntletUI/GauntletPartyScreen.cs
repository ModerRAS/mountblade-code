// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletPartyScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.Party.PartyTroopManagerPopUp;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
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
  [GameStateScreen(typeof (PartyState))]
  public class GauntletPartyScreen : ScreenBase, IGameStateListener, IChangeableScreen
  {
    private PartyVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private SpriteCategory _partyscreenCategory;
    private readonly PartyState _partyState;

    public GauntletPartyScreen(PartyState partyState) => this._partyState = partyState;

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      LoadingWindow.DisableGlobalLoadingWindow();
      this._dataSource.IsFiveStackModifierActive = this._gauntletLayer.Input.IsHotKeyDown("FiveStackModifier");
      this._dataSource.IsEntireStackModifierActive = this._gauntletLayer.Input.IsHotKeyDown("EntireStackModifier");
      if (!this._partyState.IsActive || this._gauntletLayer.Input.IsHotKeyDownAndReleased("Exit") || !this._gauntletLayer.Input.IsControlDown() && this._gauntletLayer.Input.IsGameKeyDownAndReleased(43))
        this.HandleCancelInput();
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm"))
        this.HandleDoneInput();
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Reset"))
        this.HandleResetInput();
      else if (!this._dataSource.IsAnyPopUpOpen)
      {
        if (this._gauntletLayer.Input.IsHotKeyPressed("TakeAllTroops"))
        {
          if (!this._dataSource.IsOtherTroopsHaveTransferableTroops)
            return;
          UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
          this._dataSource.ExecuteTransferAllOtherTroops();
        }
        else if (this._gauntletLayer.Input.IsHotKeyPressed("GiveAllTroops"))
        {
          if (!this._dataSource.IsMainTroopsHaveTransferableTroops)
            return;
          UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
          this._dataSource.ExecuteTransferAllMainTroops();
        }
        else if (this._gauntletLayer.Input.IsHotKeyPressed("TakeAllPrisoners"))
        {
          if (this._dataSource.CurrentFocusedCharacter != null && Input.IsGamepadActive)
          {
            if (!this._dataSource.CurrentFocusedCharacter.IsTroopTransferrable || this._dataSource.CurrentFocusedCharacter.Side != PartyScreenLogic.PartyRosterSide.Left)
              return;
            this._dataSource.CurrentFocusedCharacter.ExecuteTransferSingle();
            UISoundsHelper.PlayUISound("event:/ui/transfer");
          }
          else
          {
            if (!this._dataSource.IsOtherPrisonersHaveTransferableTroops)
              return;
            UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
            this._dataSource.ExecuteTransferAllOtherPrisoners();
          }
        }
        else if (this._gauntletLayer.Input.IsHotKeyPressed("GiveAllPrisoners"))
        {
          if (this._dataSource.CurrentFocusedCharacter != null && Input.IsGamepadActive)
          {
            if (!this._dataSource.CurrentFocusedCharacter.IsTroopTransferrable || this._dataSource.CurrentFocusedCharacter.Side != PartyScreenLogic.PartyRosterSide.Right)
              return;
            this._dataSource.CurrentFocusedCharacter.ExecuteTransferSingle();
            UISoundsHelper.PlayUISound("event:/ui/transfer");
          }
          else
          {
            if (!this._dataSource.IsMainPrisonersHaveTransferableTroops)
              return;
            UISoundsHelper.PlayUISound("event:/ui/inventory/take_all");
            this._dataSource.ExecuteTransferAllMainPrisoners();
          }
        }
        else if (this._gauntletLayer.Input.IsHotKeyPressed("OpenUpgradePopup"))
        {
          if (this._dataSource.IsUpgradePopUpDisabled)
            return;
          this._dataSource.ExecuteOpenUpgradePopUp();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
        else if (this._gauntletLayer.Input.IsHotKeyPressed("OpenRecruitPopup"))
        {
          if (this._dataSource.IsRecruitPopUpDisabled)
            return;
          this._dataSource.ExecuteOpenRecruitPopUp();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
        else
        {
          if (!this._gauntletLayer.Input.IsGameKeyReleased(39) || this._dataSource.CurrentFocusedCharacter == null || !Input.IsGamepadActive)
            return;
          this._dataSource.CurrentFocusedCharacter.ExecuteOpenTroopEncyclopedia();
        }
      }
      else if (this._gauntletLayer.Input.IsHotKeyPressed("PopupItemPrimaryAction"))
      {
        PartyUpgradeTroopVM upgradePopUp = this._dataSource.UpgradePopUp;
        if ((upgradePopUp != null ? (((PartyTroopManagerVM) upgradePopUp).IsOpen ? 1 : 0) : 0) != 0)
        {
          if (((PartyTroopManagerVM) this._dataSource.UpgradePopUp).IsFocusedOnACharacter && ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop.PartyCharacter.Upgrades.Count > 0 && ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop.PartyCharacter.Upgrades[0].IsAvailable)
            UISoundsHelper.PlayUISound("event:/ui/party/upgrade");
          ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).ExecuteItemPrimaryAction();
        }
        else
        {
          PartyRecruitTroopVM recruitPopUp = this._dataSource.RecruitPopUp;
          if ((recruitPopUp != null ? (((PartyTroopManagerVM) recruitPopUp).IsOpen ? 1 : 0) : 0) == 0)
            return;
          ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).ExecuteItemPrimaryAction();
        }
      }
      else if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("PopupItemSecondaryAction"))
      {
        PartyUpgradeTroopVM upgradePopUp = this._dataSource.UpgradePopUp;
        if ((upgradePopUp != null ? (((PartyTroopManagerVM) upgradePopUp).IsOpen ? 1 : 0) : 0) != 0)
        {
          if (((PartyTroopManagerVM) this._dataSource.UpgradePopUp).IsFocusedOnACharacter && ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop.PartyCharacter.Upgrades.Count > 1 && ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop.PartyCharacter.Upgrades[1].IsAvailable)
            UISoundsHelper.PlayUISound("event:/ui/party/upgrade");
          ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).ExecuteItemSecondaryAction();
        }
        else
        {
          PartyRecruitTroopVM recruitPopUp = this._dataSource.RecruitPopUp;
          if ((recruitPopUp != null ? (((PartyTroopManagerVM) recruitPopUp).IsOpen ? 1 : 0) : 0) == 0)
            return;
          PartyTroopManagerItemVM focusedTroop = ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).FocusedTroop;
          if ((focusedTroop != null ? (focusedTroop.PartyCharacter.IsTroopRecruitable ? 1 : 0) : 0) != 0)
            UISoundsHelper.PlayUISound("event:/ui/party/recruit_prisoner");
          ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).ExecuteItemSecondaryAction();
        }
      }
      else
      {
        if (!Input.IsGamepadActive || !this._gauntletLayer.Input.IsGameKeyReleased(39))
          return;
        PartyRecruitTroopVM recruitPopUp = this._dataSource.RecruitPopUp;
        if ((recruitPopUp != null ? (((PartyTroopManagerVM) recruitPopUp).IsOpen ? 1 : 0) : 0) != 0 && ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).FocusedTroop != null)
        {
          ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).FocusedTroop.PartyCharacter.ExecuteOpenTroopEncyclopedia();
        }
        else
        {
          PartyUpgradeTroopVM upgradePopUp = this._dataSource.UpgradePopUp;
          if ((upgradePopUp != null ? (((PartyTroopManagerVM) upgradePopUp).IsOpen ? 1 : 0) : 0) == 0)
            return;
          if (((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop != null)
          {
            ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).FocusedTroop.ExecuteOpenTroopEncyclopedia();
          }
          else
          {
            if (this._dataSource.CurrentFocusedUpgrade == null)
              return;
            this._dataSource.CurrentFocusedUpgrade.ExecuteUpgradeEncyclopediaLink();
          }
        }
      }
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._partyscreenCategory = spriteData.SpriteCategories["ui_partyscreen"];
      this._partyscreenCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("PartyHotKeyCategory"));
      this._dataSource = new PartyVM(this._partyState.PartyScreenLogic);
      this._dataSource.SetGetKeyTextFromKeyIDFunc(new Func<string, TextObject>(((GameKeyTextExtensions) Game.Current.GameTextManager).GetHotKeyGameTextFromKeyID));
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetTakeAllTroopsInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("TakeAllTroops"));
      this._dataSource.SetDismissAllTroopsInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("GiveAllTroops"));
      this._dataSource.SetTakeAllPrisonersInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("TakeAllPrisoners"));
      this._dataSource.SetDismissAllPrisonersInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("GiveAllPrisoners"));
      this._dataSource.SetOpenUpgradePanelInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("OpenUpgradePopup"));
      this._dataSource.SetOpenRecruitPanelInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("OpenRecruitPopup"));
      ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).SetPrimaryActionInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("PopupItemPrimaryAction"));
      ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).SetSecondaryActionInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("PopupItemSecondaryAction"));
      ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).SetPrimaryActionInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("PopupItemPrimaryAction"));
      ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).SetSecondaryActionInputKey(HotKeyManager.GetCategory("PartyHotKeyCategory").GetHotKey("PopupItemSecondaryAction"));
      this._dataSource.SetFiveStackShortcutKeyText(this.GetFiveStackShortcutkeyText());
      this._dataSource.SetEntireStackShortcutKeyText(this.GetEntireStackShortcutkeyText());
      this._partyState.Handler = (IPartyScreenLogicHandler) this._dataSource;
      this._gauntletLayer.LoadMovie("PartyScreen", (ViewModel) this._dataSource);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.PartyScreen));
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_party_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
    }

    void IGameStateListener.OnDeactivate()
    {
      this.OnDeactivate();
      PartyBase.MainParty.SetVisualAsDirty();
      this._gauntletLayer.IsFocusLayer = false;
      this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
      if (!Campaign.Current.ConversationManager.IsConversationInProgress || Campaign.Current.ConversationManager.IsConversationFlowActive)
        return;
      Campaign.Current.ConversationManager.OnConversationActivate();
    }

    void IGameStateListener.OnInitialize()
    {
      CampaignEvents.CompanionRemoved.AddNonSerializedListener((object) this, new Action<Hero, RemoveCompanionAction.RemoveCompanionDetail>(this.OnCompanionRemoved));
    }

    void IGameStateListener.OnFinalize()
    {
      CampaignEvents.CompanionRemoved.ClearListeners((object) this);
      ((ViewModel) this._dataSource).OnFinalize();
      this._partyscreenCategory.Unload();
      this._dataSource = (PartyVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    protected override void OnResume()
    {
      base.OnResume();
      PartyVM dataSource = this._dataSource;
      if ((dataSource != null ? (dataSource.IsInConversation ? 1 : 0) : 0) == 0)
        return;
      this._dataSource.IsInConversation = false;
      if (!this._dataSource.PartyScreenLogic.IsDoneActive())
        return;
      this._dataSource.PartyScreenLogic.DoneLogic(false);
    }

    private void HandleResetInput()
    {
      if (this._dataSource.IsAnyPopUpOpen)
        return;
      this._dataSource.ExecuteReset();
      UISoundsHelper.PlayUISound("event:/ui/default");
    }

    private void HandleCancelInput()
    {
      PartyUpgradeTroopVM upgradePopUp = this._dataSource.UpgradePopUp;
      if ((upgradePopUp != null ? (((PartyTroopManagerVM) upgradePopUp).IsOpen ? 1 : 0) : 0) != 0)
      {
        ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).ExecuteCancel();
      }
      else
      {
        PartyRecruitTroopVM recruitPopUp = this._dataSource.RecruitPopUp;
        if ((recruitPopUp != null ? (((PartyTroopManagerVM) recruitPopUp).IsOpen ? 1 : 0) : 0) != 0)
          ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).ExecuteCancel();
        else
          this._dataSource.ExecuteCancel();
      }
      UISoundsHelper.PlayUISound("event:/ui/default");
    }

    private void HandleDoneInput()
    {
      PartyUpgradeTroopVM upgradePopUp = this._dataSource.UpgradePopUp;
      if ((upgradePopUp != null ? (((PartyTroopManagerVM) upgradePopUp).IsOpen ? 1 : 0) : 0) != 0)
      {
        ((PartyTroopManagerVM) this._dataSource.UpgradePopUp).ExecuteDone();
      }
      else
      {
        PartyRecruitTroopVM recruitPopUp = this._dataSource.RecruitPopUp;
        if ((recruitPopUp != null ? (((PartyTroopManagerVM) recruitPopUp).IsOpen ? 1 : 0) : 0) != 0)
          ((PartyTroopManagerVM) this._dataSource.RecruitPopUp).ExecuteDone();
        else
          this._dataSource.ExecuteDone();
      }
      UISoundsHelper.PlayUISound("event:/ui/default");
    }

    private void OnCompanionRemoved(Hero arg1, RemoveCompanionAction.RemoveCompanionDetail arg2)
    {
      ((IChangeableScreen) this).ApplyChanges();
    }

    private string GetFiveStackShortcutkeyText()
    {
      return (!Input.IsControllerConnected ? 0 : (!Input.IsMouseActive ? 1 : 0)) == 0 ? Module.CurrentModule.GlobalTextManager.FindText("str_game_key_text", "anyshift").ToString() : string.Empty;
    }

    private string GetEntireStackShortcutkeyText()
    {
      return (!Input.IsControllerConnected ? 0 : (!Input.IsMouseActive ? 1 : 0)) == 0 ? Module.CurrentModule.GlobalTextManager.FindText("str_game_key_text", "anycontrol").ToString() : (string) null;
    }

    bool IChangeableScreen.AnyUnsavedChanges()
    {
      return this._partyState.PartyScreenLogic.IsThereAnyChanges();
    }

    bool IChangeableScreen.CanChangesBeApplied()
    {
      return this._partyState.PartyScreenLogic.IsDoneActive();
    }

    void IChangeableScreen.ApplyChanges() => this._partyState.PartyScreenLogic.DoneLogic(true);

    void IChangeableScreen.ResetChanges() => this._partyState.PartyScreenLogic.Reset(true);
  }
}
