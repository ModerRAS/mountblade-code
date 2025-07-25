// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Encyclopedia.EncyclopediaData
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.Encyclopedia.Pages;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.List;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Pages;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Encyclopedia
{
  public class EncyclopediaData
  {
    private Dictionary<string, EncyclopediaPage> _pages;
    private string _previousPageID;
    private EncyclopediaHomeVM _homeDatasource;
    private IGauntletMovie _homeGauntletMovie;
    private Dictionary<EncyclopediaPage, EncyclopediaListVM> _lists;
    private EncyclopediaPageVM _activeDatasource;
    private GauntletLayer _activeGauntletLayer;
    private IGauntletMovie _activeGauntletMovie;
    private EncyclopediaNavigatorVM _navigatorDatasource;
    private IGauntletMovie _navigatorActiveGauntletMovie;
    private readonly ScreenBase _screen;
    private TutorialContexts _prevContext;
    private readonly GauntletMapEncyclopediaView _manager;
    private object _initialState;

    public EncyclopediaData(
      GauntletMapEncyclopediaView manager,
      ScreenBase screen,
      EncyclopediaHomeVM homeDatasource,
      EncyclopediaNavigatorVM navigatorDatasource)
    {
      this._manager = manager;
      this._screen = screen;
      this._pages = new Dictionary<string, EncyclopediaPage>();
      foreach (EncyclopediaPage encyclopediaPage in Campaign.Current.EncyclopediaManager.GetEncyclopediaPages())
      {
        foreach (string identifierName in encyclopediaPage.GetIdentifierNames())
        {
          if (!this._pages.ContainsKey(identifierName))
            this._pages.Add(identifierName, encyclopediaPage);
        }
      }
      this._homeDatasource = homeDatasource;
      this._lists = new Dictionary<EncyclopediaPage, EncyclopediaListVM>();
      foreach (EncyclopediaPage encyclopediaPage in Campaign.Current.EncyclopediaManager.GetEncyclopediaPages())
      {
        if (!this._lists.ContainsKey(encyclopediaPage))
        {
          EncyclopediaListVM list = new EncyclopediaListVM(new EncyclopediaPageArgs((object) encyclopediaPage));
          this._manager.ListViewDataController.LoadListData(list);
          this._lists.Add(encyclopediaPage, list);
        }
      }
      this._navigatorDatasource = navigatorDatasource;
      this._navigatorDatasource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._navigatorDatasource.SetPreviousPageInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToPreviousTab"));
      this._navigatorDatasource.SetNextPageInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToNextTab"));
      Game.Current.EventManager.RegisterEvent<TutorialContextChangedEvent>(new Action<TutorialContextChangedEvent>(this.OnTutorialContextChanged));
    }

    private void OnTutorialContextChanged(TutorialContextChangedEvent obj)
    {
      if (obj.NewContext == TutorialContexts.EncyclopediaWindow)
        return;
      this._prevContext = obj.NewContext;
    }

    internal void OnTick()
    {
      this._navigatorDatasource.CanSwitchTabs = !Input.IsGamepadActive || !InformationManager.GetIsAnyTooltipActiveAndExtended();
      if (this._activeGauntletLayer.Input.IsHotKeyDownAndReleased("Exit") || this._activeGauntletLayer.Input.IsGameKeyDownAndReleased(39) && !this._activeGauntletLayer.IsFocusedOnInput())
      {
        if (this._navigatorDatasource.IsSearchResultsShown)
        {
          this._navigatorDatasource.SearchText = string.Empty;
        }
        else
        {
          this._manager.CloseEncyclopedia();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
      }
      else if (!this._activeGauntletLayer.IsFocusedOnInput() && this._navigatorDatasource.CanSwitchTabs)
      {
        if (Input.IsKeyPressed(InputKey.BackSpace) && this._navigatorDatasource.IsBackEnabled || this._activeGauntletLayer.Input.IsHotKeyReleased("SwitchToPreviousTab"))
          this._navigatorDatasource.ExecuteBack();
        else if (this._activeGauntletLayer.Input.IsHotKeyReleased("SwitchToNextTab"))
          this._navigatorDatasource.ExecuteForward();
      }
      if (this._activeGauntletLayer != null && this._initialState != Game.Current?.GameStateManager?.ActiveState)
        this._manager.CloseEncyclopedia();
      this._activeDatasource?.OnTick();
    }

    private void SetEncyclopediaPage(string pageId, object obj)
    {
      GauntletLayer activeGauntletLayer = this._activeGauntletLayer;
      if (this._activeGauntletLayer != null && this._activeGauntletMovie != null)
        this._activeGauntletLayer.ReleaseMovie(this._activeGauntletMovie);
      if (this._activeDatasource is EncyclopediaListVM activeDatasource1)
      {
        EncyclopediaListItemVM encyclopediaListItemVm = ((EncyclopediaPageVM) activeDatasource1).Items.FirstOrDefault<EncyclopediaListItemVM>((Func<EncyclopediaListItemVM, bool>) (x => x.Object == obj));
        this._manager.ListViewDataController.SaveListData(activeDatasource1, encyclopediaListItemVm != null ? encyclopediaListItemVm.Id : activeDatasource1.LastSelectedItemId);
      }
      if (this._activeGauntletLayer == null)
      {
        this._activeGauntletLayer = new GauntletLayer(310);
        this._navigatorActiveGauntletMovie = this._activeGauntletLayer.LoadMovie("EncyclopediaBar", (ViewModel) this._navigatorDatasource);
        this._navigatorDatasource.PageName = ((EncyclopediaPageVM) this._homeDatasource).GetName();
        this._activeGauntletLayer.IsFocusLayer = true;
        ScreenManager.TrySetFocus((ScreenLayer) this._activeGauntletLayer);
        this._activeGauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
        this._activeGauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
        Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
        Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.EncyclopediaWindow));
        this._initialState = (object) Game.Current.GameStateManager.ActiveState;
      }
      switch (pageId)
      {
        case "Home":
          this._activeGauntletMovie = this._activeGauntletLayer.LoadMovie("EncyclopediaHome", (ViewModel) this._homeDatasource);
          this._homeGauntletMovie = this._activeGauntletMovie;
          this._activeDatasource = (EncyclopediaPageVM) this._homeDatasource;
          this._activeDatasource.Refresh();
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 1, false));
          break;
        case "ListPage":
          EncyclopediaPage encyclopediaPage = obj as EncyclopediaPage;
          this._activeDatasource = (EncyclopediaPageVM) this._lists[encyclopediaPage];
          this._activeGauntletMovie = this._activeGauntletLayer.LoadMovie("EncyclopediaItemList", (ViewModel) this._activeDatasource);
          this._activeDatasource.Refresh();
          this._manager.ListViewDataController.LoadListData(this._activeDatasource as EncyclopediaListVM);
          this.SetTutorialListPageContext(encyclopediaPage);
          break;
        default:
          EncyclopediaPage page = this._pages[pageId];
          this._activeDatasource = this.GetEncyclopediaPageInstance(page, obj);
          if (this._activeDatasource is EncyclopediaContentPageVM activeDatasource2)
            activeDatasource2.InitializeQuickNavigation(this._lists[page]);
          this._activeGauntletMovie = this._activeGauntletLayer.LoadMovie(this._pages[pageId].GetViewFullyQualifiedName(), (ViewModel) this._activeDatasource);
          this.SetTutorialPageContext(this._activeDatasource);
          break;
      }
      this._navigatorDatasource.NavBarString = this._activeDatasource.GetNavigationBarURL();
      if (activeGauntletLayer != null && activeGauntletLayer != this._activeGauntletLayer)
      {
        this._screen.RemoveLayer((ScreenLayer) activeGauntletLayer);
        this._screen.AddLayer((ScreenLayer) this._activeGauntletLayer);
      }
      else if (activeGauntletLayer == null && this._activeGauntletLayer != null)
        this._screen.AddLayer((ScreenLayer) this._activeGauntletLayer);
      this._activeGauntletLayer.InputRestrictions.SetInputRestrictions();
      this._previousPageID = pageId;
    }

    internal EncyclopediaPageVM ExecuteLink(string pageId, object obj, bool needsRefresh)
    {
      this.SetEncyclopediaPage(pageId, obj);
      return this._activeDatasource;
    }

    private EncyclopediaPageVM GetEncyclopediaPageInstance(EncyclopediaPage page, object o)
    {
      EncyclopediaPageArgs encyclopediaPageArgs;
      // ISSUE: explicit constructor call
      ((EncyclopediaPageArgs) ref encyclopediaPageArgs).\u002Ector(o);
      foreach (Type type in typeof (EncyclopediaHomeVM).Assembly.GetTypesSafe())
      {
        if (typeof (EncyclopediaPageVM).IsAssignableFrom(type))
        {
          foreach (object obj in type.GetCustomAttributesSafe(typeof (EncyclopediaViewModel), false))
          {
            if (obj is EncyclopediaViewModel encyclopediaViewModel && page.HasIdentifierType(encyclopediaViewModel.PageTargetType))
              return Activator.CreateInstance(type, (object) encyclopediaPageArgs) as EncyclopediaPageVM;
          }
        }
      }
      return (EncyclopediaPageVM) null;
    }

    public void OnFinalize()
    {
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
      this._pages = (Dictionary<string, EncyclopediaPage>) null;
      this._homeDatasource = (EncyclopediaHomeVM) null;
      this._lists = (Dictionary<EncyclopediaPage, EncyclopediaListVM>) null;
      this._activeGauntletMovie = (IGauntletMovie) null;
      this._activeDatasource = (EncyclopediaPageVM) null;
      this._activeGauntletLayer = (GauntletLayer) null;
      this._navigatorActiveGauntletMovie = (IGauntletMovie) null;
      this._navigatorDatasource = (EncyclopediaNavigatorVM) null;
      this._initialState = (object) null;
      Game.Current.EventManager.UnregisterEvent<TutorialContextChangedEvent>(new Action<TutorialContextChangedEvent>(this.OnTutorialContextChanged));
    }

    public void CloseEncyclopedia()
    {
      if (this._activeDatasource is EncyclopediaListVM activeDatasource)
        this._manager.ListViewDataController.SaveListData(activeDatasource, activeDatasource.LastSelectedItemId);
      this.ResetPageFilters();
      this._activeGauntletLayer.ReleaseMovie(this._activeGauntletMovie);
      this._screen.RemoveLayer((ScreenLayer) this._activeGauntletLayer);
      this._activeGauntletLayer.InputRestrictions.ResetInputRestrictions();
      this.OnFinalize();
      Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 0, false));
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(this._prevContext));
    }

    private void ResetPageFilters()
    {
      foreach (EncyclopediaPageVM encyclopediaPageVm in this._lists.Values)
      {
        foreach (EncyclopediaFilterGroupVM filterGroup in (Collection<EncyclopediaFilterGroupVM>) encyclopediaPageVm.FilterGroups)
        {
          foreach (EncyclopediaListFilterVM filter in (Collection<EncyclopediaListFilterVM>) filterGroup.Filters)
            filter.IsSelected = false;
        }
      }
    }

    private void SetTutorialPageContext(EncyclopediaPageVM _page)
    {
      switch (_page)
      {
        case EncyclopediaClanPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 8, false));
          break;
        case EncyclopediaConceptPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 13, false));
          break;
        case EncyclopediaFactionPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 11, false));
          break;
        case EncyclopediaUnitPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 10, false));
          break;
        case EncyclopediaHeroPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 12, false));
          break;
        case EncyclopediaSettlementPageVM _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 9, false));
          break;
      }
    }

    private void SetTutorialListPageContext(EncyclopediaPage _page)
    {
      switch (_page)
      {
        case DefaultEncyclopediaClanPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 4, false));
          break;
        case DefaultEncyclopediaConceptPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 7, false));
          break;
        case DefaultEncyclopediaFactionPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 5, false));
          break;
        case DefaultEncyclopediaUnitPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 3, false));
          break;
        case DefaultEncyclopediaHeroPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 6, false));
          break;
        case DefaultEncyclopediaSettlementPage _:
          Game.Current.EventManager.TriggerEvent<EncyclopediaPageChangedEvent>(new EncyclopediaPageChangedEvent((EncyclopediaPages) 2, false));
          break;
      }
    }
  }
}
