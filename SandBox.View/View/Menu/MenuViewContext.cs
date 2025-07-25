// Decompiled with JetBrains decompiler
// Type: SandBox.View.Menu.MenuViewContext
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Overlay;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.Menu
{
  public class MenuViewContext : IMenuContextHandler
  {
    private MenuContext _menuContext;
    private MenuView _currentMenuBase;
    private MenuView _currentMenuBackground;
    private MenuView _menuCharacterDeveloper;
    private MenuView _menuOverlayBase;
    private MenuView _menuRecruitVolunteers;
    private MenuView _menuTournamentLeaderboard;
    private MenuView _menuTroopSelection;
    private MenuView _menuTownManagement;
    private SoundEvent _panelSound;
    private SoundEvent _ambientSound;
    private GameOverlays.MenuOverlayType _currentOverlayType;
    private ScreenBase _screen;

    internal GameMenu CurGameMenu => this._menuContext.GameMenu;

    public MenuContext MenuContext => this._menuContext;

    public List<MenuView> MenuViews { get; private set; }

    public MenuViewContext(ScreenBase screen, MenuContext menuContext)
    {
      this._screen = screen;
      this._menuContext = menuContext;
      this.MenuViews = new List<MenuView>();
      this._menuContext.Handler = (IMenuContextHandler) this;
      if (Campaign.Current.GameMode == CampaignGameMode.Tutorial || !(this.CurGameMenu.StringId != "siege_test_menu"))
        return;
      ((IMenuContextHandler) this).OnMenuCreate();
      ((IMenuContextHandler) this).OnMenuActivate();
    }

    public void UpdateMenuContext(MenuContext menuContext)
    {
      this._menuContext = menuContext;
      this._menuContext.Handler = (IMenuContextHandler) this;
      this.MenuViews.ForEach((Action<MenuView>) (m => m.MenuContext = menuContext));
      this.MenuViews.ForEach((Action<MenuView>) (m => m.OnMenuContextUpdated(menuContext)));
      this.CheckAndInitializeOverlay();
    }

    public void AddLayer(ScreenLayer layer) => this._screen.AddLayer(layer);

    public void RemoveLayer(ScreenLayer layer) => this._screen.RemoveLayer(layer);

    public T FindLayer<T>() where T : ScreenLayer => this._screen.FindLayer<T>();

    public T FindLayer<T>(string name) where T : ScreenLayer => this._screen.FindLayer<T>(name);

    public void OnFrameTick(float dt)
    {
      for (int index = 0; index < this.MenuViews.Count; ++index)
      {
        MenuView menuView = this.MenuViews[index];
        menuView.OnFrameTick(dt);
        if (menuView.Removed)
          --index;
      }
    }

    public void OnResume()
    {
      for (int index = 0; index < this.MenuViews.Count; ++index)
        this.MenuViews[index].OnResume();
    }

    public void OnHourlyTick()
    {
      for (int index = 0; index < this.MenuViews.Count; ++index)
        this.MenuViews[index].OnHourlyTick();
    }

    public void OnActivate()
    {
      if (!string.IsNullOrEmpty(this.MenuContext?.CurrentAmbientSoundID))
        this.PlayAmbientSound(this.MenuContext.CurrentAmbientSoundID);
      if (string.IsNullOrEmpty(this.MenuContext?.CurrentPanelSoundID))
        return;
      this.PlayPanelSound(this.MenuContext.CurrentPanelSoundID);
    }

    public void OnDeactivate() => this.StopAllSounds();

    public void OnInitialize()
    {
    }

    public void OnFinalize()
    {
      this.ClearMenuViews();
      MBInformationManager.HideInformations();
      this._menuContext = (MenuContext) null;
    }

    private void ClearMenuViews()
    {
      foreach (MenuView menuView in this.MenuViews.ToArray())
        this.RemoveMenuView(menuView);
      this._menuCharacterDeveloper = (MenuView) null;
      this._menuOverlayBase = (MenuView) null;
      this._menuRecruitVolunteers = (MenuView) null;
      this._menuTownManagement = (MenuView) null;
      this._menuTroopSelection = (MenuView) null;
    }

    public void StopAllSounds()
    {
      this._ambientSound?.Release();
      this._panelSound?.Release();
    }

    private void PlayAmbientSound(string ambientSoundID)
    {
      this._ambientSound?.Release();
      this._ambientSound = SoundEvent.CreateEventFromString(ambientSoundID, (Scene) null);
      this._ambientSound.Play();
    }

    private void PlayPanelSound(string panelSoundID)
    {
      this._panelSound?.Release();
      this._panelSound = SoundEvent.CreateEventFromString(panelSoundID, (Scene) null);
      this._panelSound.Play();
    }

    void IMenuContextHandler.OnAmbientSoundIDSet(string ambientSoundID)
    {
      this.PlayAmbientSound(ambientSoundID);
    }

    void IMenuContextHandler.OnPanelSoundIDSet(string panelSoundID)
    {
      this.PlayPanelSound(panelSoundID);
    }

    void IMenuContextHandler.OnMenuCreate()
    {
      int num = Campaign.Current.GameMode == CampaignGameMode.Tutorial ? 1 : (this.CurGameMenu.StringId == "siege_test_menu" ? 1 : 0);
      if (num != 0 && this._currentMenuBackground == null)
        this._currentMenuBackground = this.AddMenuView<MenuBackgroundView>();
      if (this._currentMenuBase == null)
        this._currentMenuBase = this.AddMenuView<MenuBaseView>();
      if (num == 0)
        this.CheckAndInitializeOverlay();
      this.StopAllSounds();
    }

    void IMenuContextHandler.OnMenuActivate()
    {
      foreach (SandboxView menuView in this.MenuViews)
        menuView.OnActivate();
    }

    public void OnMapConversationActivated()
    {
      for (int index = 0; index < this.MenuViews.Count; ++index)
      {
        MenuView menuView = this.MenuViews[index];
        menuView.OnMapConversationActivated();
        if (menuView.Removed)
          --index;
      }
    }

    public void OnMapConversationDeactivated()
    {
      for (int index = 0; index < this.MenuViews.Count; ++index)
      {
        MenuView menuView = this.MenuViews[index];
        menuView.OnMapConversationDeactivated();
        if (menuView.Removed)
          --index;
      }
    }

    public void OnGameStateDeactivate()
    {
    }

    public void OnGameStateInitialize()
    {
    }

    public void OnGameStateFinalize()
    {
    }

    private void CheckAndInitializeOverlay()
    {
      GameOverlays.MenuOverlayType menuOverlayType = Campaign.Current.GameMenuManager.GetMenuOverlayType(this._menuContext);
      if (menuOverlayType != GameOverlays.MenuOverlayType.None)
      {
        if (menuOverlayType != this._currentOverlayType)
        {
          if (this._menuOverlayBase != null && (this._currentOverlayType != GameOverlays.MenuOverlayType.Encounter && menuOverlayType == GameOverlays.MenuOverlayType.Encounter || this._currentOverlayType == GameOverlays.MenuOverlayType.Encounter && (menuOverlayType == GameOverlays.MenuOverlayType.SettlementWithBoth || menuOverlayType == GameOverlays.MenuOverlayType.SettlementWithCharacters || menuOverlayType == GameOverlays.MenuOverlayType.SettlementWithParties)))
          {
            this.RemoveMenuView(this._menuOverlayBase);
            this._menuOverlayBase = (MenuView) null;
          }
          if (this._menuOverlayBase == null)
            this._menuOverlayBase = this.AddMenuView<MenuOverlayBaseView>();
          else
            this._menuOverlayBase.OnOverlayTypeChange(menuOverlayType);
        }
        else
          this._menuOverlayBase?.OnOverlayTypeChange(menuOverlayType);
      }
      else
      {
        if (this._menuOverlayBase != null)
        {
          this.RemoveMenuView(this._menuOverlayBase);
          this._menuOverlayBase = (MenuView) null;
        }
        if (this._currentMenuBackground != null)
        {
          this.RemoveMenuView(this._currentMenuBackground);
          this._currentMenuBackground = (MenuView) null;
        }
      }
      this._currentOverlayType = menuOverlayType;
    }

    public void CloseCharacterDeveloper()
    {
      this.RemoveMenuView(this._menuCharacterDeveloper);
      this._menuCharacterDeveloper = (MenuView) null;
      foreach (MenuView menuView in this.MenuViews)
        menuView.OnCharacterDeveloperClosed();
    }

    public MenuView AddMenuView<T>(params object[] parameters) where T : MenuView, new()
    {
      MenuView menuView = SandBoxViewCreator.CreateMenuView<T>(parameters);
      menuView.MenuViewContext = this;
      menuView.MenuContext = this._menuContext;
      this.MenuViews.Add(menuView);
      menuView.OnInitialize();
      return menuView;
    }

    public T GetMenuView<T>() where T : MenuView
    {
      foreach (MenuView menuView1 in this.MenuViews)
      {
        if (menuView1 is T menuView2)
          return menuView2;
      }
      return default (T);
    }

    public void RemoveMenuView(MenuView menuView)
    {
      menuView.OnFinalize();
      menuView.Removed = true;
      this.MenuViews.Remove(menuView);
      if (!menuView.ShouldUpdateMenuAfterRemoved)
        return;
      this.MenuViews.ForEach((Action<MenuView>) (m => m.OnMenuContextUpdated(this._menuContext)));
    }

    void IMenuContextHandler.OnBackgroundMeshNameSet(string name)
    {
      foreach (MenuView menuView in this.MenuViews)
        menuView.OnBackgroundMeshNameSet(name);
    }

    void IMenuContextHandler.OnOpenTownManagement()
    {
      if (this._menuTownManagement != null)
        return;
      this._menuTownManagement = this.AddMenuView<MenuTownManagementView>();
    }

    public void CloseTownManagement()
    {
      this.RemoveMenuView(this._menuTownManagement);
      this._menuTownManagement = (MenuView) null;
    }

    void IMenuContextHandler.OnOpenRecruitVolunteers()
    {
      if (this._menuRecruitVolunteers != null)
        return;
      this._menuRecruitVolunteers = this.AddMenuView<MenuRecruitVolunteersView>();
    }

    public void CloseRecruitVolunteers()
    {
      this.RemoveMenuView(this._menuRecruitVolunteers);
      this._menuRecruitVolunteers = (MenuView) null;
    }

    void IMenuContextHandler.OnOpenTournamentLeaderboard()
    {
      if (this._menuTournamentLeaderboard != null)
        return;
      this._menuTournamentLeaderboard = this.AddMenuView<MenuTournamentLeaderboardView>();
    }

    public void CloseTournamentLeaderboard()
    {
      this.RemoveMenuView(this._menuTournamentLeaderboard);
      this._menuTournamentLeaderboard = (MenuView) null;
    }

    void IMenuContextHandler.OnOpenTroopSelection(
      TroopRoster fullRoster,
      TroopRoster initialSelections,
      Func<CharacterObject, bool> canChangeStatusOfTroop,
      Action<TroopRoster> onDone,
      int maxSelectableTroopCount,
      int minSelectableTroopCount)
    {
      if (this._menuTroopSelection != null)
        return;
      this._menuTroopSelection = this.AddMenuView<MenuTroopSelectionView>((object) fullRoster, (object) initialSelections, (object) canChangeStatusOfTroop, (object) onDone, (object) maxSelectableTroopCount, (object) minSelectableTroopCount);
    }

    public void CloseTroopSelection()
    {
      this.RemoveMenuView(this._menuTroopSelection);
      this._menuTroopSelection = (MenuView) null;
    }
  }
}
