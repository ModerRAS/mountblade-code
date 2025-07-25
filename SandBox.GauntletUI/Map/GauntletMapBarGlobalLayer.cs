// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapBarGlobalLayer
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapBar;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  public class GauntletMapBarGlobalLayer : GlobalLayer
  {
    private MapBarVM _mapDataSource;
    private GauntletLayer _gauntletLayer;
    private IGauntletMovie _movie;
    private SpriteCategory _mapBarCategory;
    private MapScreen _mapScreen;
    private MapNavigationHandler _mapNavigationHandler;
    private INavigationHandler _mapNavigationHandlerAsInterface;
    private MapEncyclopediaView _encyclopediaManager;
    private float _contextAlphaTarget = 1f;
    private float _contextAlphaModifider;
    private GauntletLayer _armyManagementLayer;
    private SpriteCategory _armyManagementCategory;
    private ArmyManagementVM _armyManagementVM;
    private IGauntletMovie _gauntletArmyManagementMovie;
    private CampaignTimeControlMode _timeControlModeBeforeArmyManagementOpened;

    public void Initialize(MapScreen mapScreen, float contextAlphaModifider)
    {
      this._mapScreen = mapScreen;
      this._contextAlphaModifider = contextAlphaModifider;
      this._mapNavigationHandler = new MapNavigationHandler();
      this._mapNavigationHandlerAsInterface = (INavigationHandler) this._mapNavigationHandler;
      this._mapDataSource = new MapBarVM((INavigationHandler) this._mapNavigationHandler, (IMapStateHandler) this._mapScreen, new Func<MapBarShortcuts>(this.GetMapBarShortcuts), new Action(this.OpenArmyManagement));
      this._gauntletLayer = new GauntletLayer(202);
      this.Layer = (ScreenLayer) this._gauntletLayer;
      this._mapBarCategory = UIResourceManager.SpriteData.SpriteCategories["ui_mapbar"];
      this._mapBarCategory.Load((ITwoDimensionResourceContext) UIResourceManager.ResourceContext, UIResourceManager.UIResourceDepot);
      this._movie = this._gauntletLayer.LoadMovie("MapBar", (ViewModel) this._mapDataSource);
      this._encyclopediaManager = mapScreen.EncyclopediaScreenManager;
    }

    public void OnFinalize()
    {
      ((ViewModel) this._armyManagementVM)?.OnFinalize();
      ((ViewModel) this._mapDataSource).OnFinalize();
      this._gauntletArmyManagementMovie?.Release();
      this._movie.Release();
      this._mapBarCategory.Unload();
      this._armyManagementVM = (ArmyManagementVM) null;
      this._gauntletLayer = (GauntletLayer) null;
      this._mapDataSource = (MapBarVM) null;
      this._encyclopediaManager = (MapEncyclopediaView) null;
      this._mapScreen = (MapScreen) null;
    }

    public void Refresh() => this._mapDataSource?.OnRefresh();

    private MapBarShortcuts GetMapBarShortcuts()
    {
      return new MapBarShortcuts()
      {
        EscapeMenuHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericPanelGameKeyCategory", "ToggleEscapeMenu").ToString(),
        CharacterHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 37).ToString(),
        QuestHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 42).ToString(),
        PartyHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 43).ToString(),
        KingdomHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 40).ToString(),
        ClanHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 41).ToString(),
        InventoryHotkey = Game.Current.GameTextManager.GetHotKeyGameText("GenericCampaignPanelsGameKeyCategory", 38).ToString(),
        FastForwardHotkey = Game.Current.GameTextManager.GetHotKeyGameText("MapHotKeyCategory", 61).ToString(),
        PauseHotkey = Game.Current.GameTextManager.GetHotKeyGameText("MapHotKeyCategory", 59).ToString(),
        PlayHotkey = Game.Current.GameTextManager.GetHotKeyGameText("MapHotKeyCategory", 60).ToString()
      };
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      this._gauntletLayer.UIContext.ContextAlpha = MathF.Lerp(this._gauntletLayer.UIContext.ContextAlpha, this._contextAlphaTarget, dt * this._contextAlphaModifider);
      TaleWorlds.Core.GameState activeState = Game.Current.GameStateManager.ActiveState;
      ScreenBase topScreen1 = ScreenManager.TopScreen;
      PanelScreenStatus screenStatus = new PanelScreenStatus(topScreen1);
      if (this._mapNavigationHandler != null)
        this._mapNavigationHandler.IsNavigationLocked = screenStatus.IsCurrentScreenLocksNavigation;
      if (topScreen1 is MapScreen || screenStatus.IsAnyPanelScreenOpen)
      {
        this._mapDataSource.IsEnabled = true;
        this._mapDataSource.CurrentScreen = topScreen1.GetType().Name;
        bool flag = ScreenManager.TopScreen is MapScreen;
        this._mapDataSource.MapTimeControl.IsInMap = flag;
        this.Layer.InputRestrictions.SetInputRestrictions(false);
        if (!(activeState is MapState))
        {
          this._mapDataSource.MapTimeControl.IsCenterPanelEnabled = false;
          if (screenStatus.IsAnyPanelScreenOpen)
            this.HandlePanelSwitching(screenStatus);
        }
        else if (flag)
        {
          MapScreen topScreen2 = ScreenManager.TopScreen as MapScreen;
          topScreen2.SetIsBarExtended(this._mapDataSource.MapInfo.IsInfoBarExtended);
          this._mapDataSource.MapTimeControl.IsInRecruitment = topScreen2.IsInRecruitment;
          this._mapDataSource.MapTimeControl.IsInBattleSimulation = topScreen2.IsInBattleSimulation;
          this._mapDataSource.MapTimeControl.IsEncyclopediaOpen = this._encyclopediaManager.IsEncyclopediaOpen;
          this._mapDataSource.MapTimeControl.IsInArmyManagement = topScreen2.IsInArmyManagement;
          this._mapDataSource.MapTimeControl.IsInTownManagement = topScreen2.IsInTownManagement;
          this._mapDataSource.MapTimeControl.IsInHideoutTroopManage = topScreen2.IsInHideoutTroopManage;
          this._mapDataSource.MapTimeControl.IsInCampaignOptions = topScreen2.IsInCampaignOptions;
          this._mapDataSource.MapTimeControl.IsEscapeMenuOpened = topScreen2.IsEscapeMenuOpened;
          this._mapDataSource.MapTimeControl.IsMarriageOfferPopupActive = topScreen2.IsMarriageOfferPopupActive;
          this._mapDataSource.MapTimeControl.IsMapCheatsActive = topScreen2.IsMapCheatsActive;
          if (this._armyManagementVM != null)
            this.HandleArmyManagementInput();
        }
        else
          this._mapDataSource.MapTimeControl.IsCenterPanelEnabled = false;
        this._mapDataSource.Tick(dt);
      }
      else
      {
        this._mapDataSource.IsEnabled = false;
        this.Layer.InputRestrictions.ResetInputRestrictions();
      }
    }

    private void HandleArmyManagementInput()
    {
      if (this._armyManagementLayer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementVM.ExecuteCancel();
      }
      else if (this._armyManagementLayer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementVM.ExecuteDone();
      }
      else if (this._armyManagementLayer.Input.IsHotKeyReleased("Reset"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementVM.ExecuteReset();
      }
      else
      {
        if (!this._armyManagementLayer.Input.IsHotKeyReleased("RemoveParty") || this._armyManagementVM.FocusedItem == null)
          return;
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._armyManagementVM.FocusedItem.ExecuteAction();
      }
    }

    private void HandlePanelSwitching(PanelScreenStatus screenStatus)
    {
      GauntletLayer layer = ScreenManager.TopScreen.FindLayer<GauntletLayer>();
      if (layer?.Input == null || layer.IsFocusedOnInput())
        return;
      InputContext input = layer.Input;
      if (input.IsGameKeyReleased(37) && !screenStatus.IsCharacterScreenOpen)
        this._mapNavigationHandlerAsInterface?.OpenCharacterDeveloper();
      else if (input.IsGameKeyReleased(43) && !screenStatus.IsPartyScreenOpen)
        this._mapNavigationHandlerAsInterface?.OpenParty();
      else if (input.IsGameKeyReleased(42) && !screenStatus.IsQuestsScreenOpen)
        this._mapNavigationHandlerAsInterface?.OpenQuests();
      else if (input.IsGameKeyReleased(38) && !screenStatus.IsInventoryScreenOpen)
        this._mapNavigationHandlerAsInterface?.OpenInventory();
      else if (input.IsGameKeyReleased(41) && !screenStatus.IsClanScreenOpen)
      {
        this._mapNavigationHandlerAsInterface?.OpenClan();
      }
      else
      {
        if (!input.IsGameKeyReleased(40) || screenStatus.IsKingdomScreenOpen)
          return;
        this._mapNavigationHandlerAsInterface?.OpenKingdom();
      }
    }

    private void OpenArmyManagement()
    {
      if (this._gauntletLayer == null)
        return;
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._armyManagementLayer = new GauntletLayer(300);
      this._armyManagementCategory = spriteData.SpriteCategories["ui_armymanagement"];
      this._armyManagementCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._armyManagementVM = new ArmyManagementVM(new Action(this.CloseArmyManagement));
      this._gauntletArmyManagementMovie = this._armyManagementLayer.LoadMovie("ArmyManagement", (ViewModel) this._armyManagementVM);
      this._armyManagementLayer.InputRestrictions.SetInputRestrictions();
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("Generic"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory"));
      this._armyManagementLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._armyManagementLayer);
      this._mapScreen.AddLayer((ScreenLayer) this._armyManagementLayer);
      this._armyManagementVM.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._armyManagementVM.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._armyManagementVM.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._armyManagementVM.SetRemoveInputKey(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory").GetHotKey("RemoveParty"));
      this._timeControlModeBeforeArmyManagementOpened = Campaign.Current.TimeControlMode;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      Campaign.Current.SetTimeControlModeLock(true);
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInArmyManagement(true);
    }

    private void CloseArmyManagement()
    {
      ((ViewModel) this._armyManagementVM).OnFinalize();
      this._armyManagementLayer.ReleaseMovie(this._gauntletArmyManagementMovie);
      this._mapScreen.RemoveLayer((ScreenLayer) this._armyManagementLayer);
      this._armyManagementCategory.Unload();
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.MapWindow));
      this._gauntletArmyManagementMovie = (IGauntletMovie) null;
      this._armyManagementVM = (ArmyManagementVM) null;
      this._armyManagementLayer = (GauntletLayer) null;
      Campaign.Current.SetTimeControlModeLock(false);
      Campaign.Current.TimeControlMode = this._timeControlModeBeforeArmyManagementOpened;
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInArmyManagement(false);
    }

    internal bool IsEscaped()
    {
      if (this._armyManagementVM == null)
        return false;
      this._armyManagementVM.ExecuteCancel();
      return true;
    }

    internal void OnMapConversationStart() => this._contextAlphaTarget = 0.0f;

    internal void OnMapConversationEnd() => this._contextAlphaTarget = 1f;
  }
}
