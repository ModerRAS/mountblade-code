// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletClanScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.Categories;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (ClanState))]
  public class GauntletClanScreen : ScreenBase, IGameStateListener
  {
    private ClanManagementVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private SpriteCategory _clanCategory;
    private readonly ClanState _clanState;
    private bool _isCreatingPartyWithMembers;

    public GauntletClanScreen(ClanState clanState) => this._clanState = clanState;

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      LoadingWindow.DisableGlobalLoadingWindow();
      this._dataSource.CanSwitchTabs = !Input.IsGamepadActive || !InformationManager.GetIsAnyTooltipActiveAndExtended() && this._gauntletLayer.IsHitThisFrame;
      ClanManagementVM dataSource = this._dataSource;
      int num;
      if (dataSource == null)
      {
        num = 0;
      }
      else
      {
        bool? isVisible = dataSource.CardSelectionPopup?.IsVisible;
        bool flag = true;
        num = isVisible.GetValueOrDefault() == flag & isVisible.HasValue ? 1 : 0;
      }
      if (num != 0)
      {
        if (this._gauntletLayer.Input.IsHotKeyReleased("Confirm"))
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.CardSelectionPopup.ExecuteDone();
        }
        else
        {
          if (!this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
            return;
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.CardSelectionPopup.ExecuteCancel();
        }
      }
      else if (this._gauntletLayer.Input.IsHotKeyReleased("Exit") || this._gauntletLayer.Input.IsGameKeyPressed(41) || this._gauntletLayer.Input.IsHotKeyReleased("Confirm"))
      {
        this.CloseClanScreen();
      }
      else
      {
        if (!this._dataSource.CanSwitchTabs)
          return;
        if (this._gauntletLayer.Input.IsHotKeyReleased("SwitchToPreviousTab"))
        {
          UISoundsHelper.PlayUISound("event:/ui/tab");
          this._dataSource.SelectPreviousCategory();
        }
        else
        {
          if (!this._gauntletLayer.Input.IsHotKeyReleased("SwitchToNextTab"))
            return;
          UISoundsHelper.PlayUISound("event:/ui/tab");
          this._dataSource.SelectNextCategory();
        }
      }
    }

    private void OpenPartyScreenForNewClanParty(Hero hero)
    {
      this._isCreatingPartyWithMembers = true;
      PartyScreenManager.OpenScreenAsCreateClanPartyForHero(hero);
    }

    private void OpenBannerEditorWithPlayerClan()
    {
      Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<BannerEditorState>());
    }

    void IGameStateListener.OnActivate()
    {
      base.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._clanCategory = spriteData.SpriteCategories["ui_clan"];
      this._clanCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this._dataSource = new ClanManagementVM(new Action(this.CloseClanScreen), new Action<Hero>(this.ShowHeroOnMap), new Action<Hero>(this.OpenPartyScreenForNewClanParty), new Action(this.OpenBannerEditorWithPlayerClan));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetPreviousTabInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToPreviousTab"));
      this._dataSource.SetNextTabInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToNextTab"));
      if (this._isCreatingPartyWithMembers)
      {
        this._dataSource.SelectParty(PartyBase.MainParty);
        this._isCreatingPartyWithMembers = false;
      }
      else if (this._clanState.InitialSelectedHero != null)
        this._dataSource.SelectHero(this._clanState.InitialSelectedHero);
      else if (this._clanState.InitialSelectedParty != null)
      {
        this._dataSource.SelectParty(this._clanState.InitialSelectedParty);
        if (this._clanState.InitialSelectedParty.LeaderHero == null)
        {
          ClanPartiesVM clanParties = this._dataSource.ClanParties;
          int num;
          if (clanParties == null)
          {
            num = 0;
          }
          else
          {
            bool? changeLeaderEnabled = clanParties.CurrentSelectedParty?.IsChangeLeaderEnabled;
            bool flag = true;
            num = changeLeaderEnabled.GetValueOrDefault() == flag & changeLeaderEnabled.HasValue ? 1 : 0;
          }
          if (num != 0)
            this._dataSource.ClanParties.OnShowChangeLeaderPopup();
        }
      }
      else if (this._clanState.InitialSelectedSettlement != null)
        this._dataSource.SelectSettlement(this._clanState.InitialSelectedSettlement);
      else if (this._clanState.InitialSelectedWorkshop != null)
        this._dataSource.SelectWorkshop(this._clanState.InitialSelectedWorkshop);
      else if (this._clanState.InitialSelectedAlley != null)
        this._dataSource.SelectAlley(this._clanState.InitialSelectedAlley);
      this._gauntletLayer.LoadMovie("ClanScreen", (ViewModel) this._dataSource);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.ClanScreen));
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_clan_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
    }

    private void ShowHeroOnMap(Hero hero)
    {
      Vec2 asVec2 = hero.GetPosition().AsVec2;
      this.CloseClanScreen();
      MapScreen.Instance.FastMoveCameraToPosition(asVec2);
    }

    void IGameStateListener.OnDeactivate()
    {
      this.OnDeactivate();
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
      this._clanCategory.Unload();
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (ClanManagementVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this._dataSource?.UpdateBannerVisuals();
      this._dataSource?.RefreshCategoryValues();
    }

    private void CloseClanScreen()
    {
      Game.Current.GameStateManager.PopState();
      UISoundsHelper.PlayUISound("event:/ui/default");
    }
  }
}
