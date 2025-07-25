// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletKingdomScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement;
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
  [GameStateScreen(typeof (KingdomState))]
  public class GauntletKingdomScreen : ScreenBase, IGameStateListener
  {
    private GauntletLayer _gauntletLayer;
    private readonly KingdomState _kingdomState;
    private GauntletLayer _armyManagementLayer;
    private ArmyManagementVM _armyManagementDatasource;
    private SpriteCategory _kingdomCategory;
    private SpriteCategory _armyManagementCategory;

    public KingdomManagementVM DataSource { get; private set; }

    public bool IsMakingDecision => this.DataSource.Decision.IsActive;

    public GauntletKingdomScreen(KingdomState kingdomState) => this._kingdomState = kingdomState;

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      LoadingWindow.DisableGlobalLoadingWindow();
      this.DataSource.CanSwitchTabs = !InformationManager.GetIsAnyTooltipActiveAndExtended();
      if (this.DataSource.Decision.IsActive)
      {
        if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm"))
          this.DataSource.Decision.CurrentDecision?.ExecuteFinalSelection();
      }
      else if (this._armyManagementDatasource != null)
      {
        if (this._armyManagementLayer.Input.IsHotKeyDownAndReleased("Exit"))
        {
          this._armyManagementDatasource.ExecuteCancel();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
        else if (this._armyManagementLayer.Input.IsHotKeyDownAndReleased("Confirm"))
        {
          this._armyManagementDatasource.ExecuteDone();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
        else if (this._armyManagementLayer.Input.IsHotKeyDownAndReleased("Reset"))
        {
          this._armyManagementDatasource.ExecuteReset();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
        else if (this._armyManagementLayer.Input.IsHotKeyReleased("RemoveParty") && this._armyManagementDatasource.FocusedItem != null)
        {
          this._armyManagementDatasource.FocusedItem.ExecuteAction();
          UISoundsHelper.PlayUISound("event:/ui/default");
        }
      }
      else if (this._gauntletLayer.Input.IsHotKeyReleased("Exit") || this._gauntletLayer.Input.IsGameKeyPressed(40) || this._gauntletLayer.Input.IsHotKeyReleased("Confirm"))
        this.CloseKingdomScreen();
      else if (this.DataSource.CanSwitchTabs)
      {
        if (this._gauntletLayer.Input.IsHotKeyReleased("SwitchToPreviousTab"))
        {
          this.DataSource.SelectPreviousCategory();
          UISoundsHelper.PlayUISound("event:/ui/tab");
        }
        else if (this._gauntletLayer.Input.IsHotKeyReleased("SwitchToNextTab"))
        {
          this.DataSource.SelectNextCategory();
          UISoundsHelper.PlayUISound("event:/ui/tab");
        }
      }
      this.DataSource?.OnFrameTick();
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._kingdomCategory = spriteData.SpriteCategories["ui_kingdom"];
      this._kingdomCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this.DataSource = new KingdomManagementVM(new Action(this.CloseKingdomScreen), new Action(this.OpenArmyManagement), new Action<Army>(this.ShowArmyOnMap));
      this.DataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this.DataSource.SetPreviousTabInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToPreviousTab"));
      this.DataSource.SetNextTabInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToNextTab"));
      if (this._kingdomState.InitialSelectedDecision != null)
        this.DataSource.Decision.HandleDecision(this._kingdomState.InitialSelectedDecision);
      else if (this._kingdomState.InitialSelectedArmy != null)
        this.DataSource.SelectArmy(this._kingdomState.InitialSelectedArmy);
      else if (this._kingdomState.InitialSelectedSettlement != null)
        this.DataSource.SelectSettlement(this._kingdomState.InitialSelectedSettlement);
      else if (this._kingdomState.InitialSelectedClan != null)
        this.DataSource.SelectClan(this._kingdomState.InitialSelectedClan);
      else if (this._kingdomState.InitialSelectedPolicy != null)
        this.DataSource.SelectPolicy(this._kingdomState.InitialSelectedPolicy);
      else if (this._kingdomState.InitialSelectedKingdom != null)
        this.DataSource.SelectKingdom(this._kingdomState.InitialSelectedKingdom);
      this._gauntletLayer.LoadMovie("KingdomManagement", (ViewModel) this.DataSource);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.KingdomScreen));
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_kingdom_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
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
      this._kingdomCategory.Unload();
      ((ViewModel) this.DataSource).OnFinalize();
      this.DataSource = (KingdomManagementVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    private void ShowArmyOnMap(Army army)
    {
      Vec2 position2D = army.LeaderParty.Position2D;
      this.CloseKingdomScreen();
      MapScreen.Instance.FastMoveCameraToPosition(position2D);
    }

    private void OpenArmyManagement()
    {
      if (this._gauntletLayer == null)
        return;
      this._armyManagementDatasource = new ArmyManagementVM(new Action(this.CloseArmyManagement));
      this._armyManagementDatasource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._armyManagementDatasource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._armyManagementDatasource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._armyManagementDatasource.SetRemoveInputKey(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory").GetHotKey("RemoveParty"));
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._armyManagementCategory = spriteData.SpriteCategories["ui_armymanagement"];
      this._armyManagementCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._armyManagementLayer = new GauntletLayer(2);
      this._armyManagementLayer.LoadMovie("ArmyManagement", (ViewModel) this._armyManagementDatasource);
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._armyManagementLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("ArmyManagementHotkeyCategory"));
      this._armyManagementLayer.InputRestrictions.SetInputRestrictions();
      this._armyManagementLayer.IsFocusLayer = true;
      this.AddLayer((ScreenLayer) this._armyManagementLayer);
      ScreenManager.TrySetFocus((ScreenLayer) this._armyManagementLayer);
    }

    private void CloseArmyManagement()
    {
      if (this._armyManagementLayer != null)
      {
        this._armyManagementLayer.InputRestrictions.ResetInputRestrictions();
        this._armyManagementLayer.IsFocusLayer = false;
        ScreenManager.TryLoseFocus((ScreenLayer) this._armyManagementLayer);
        this.RemoveLayer((ScreenLayer) this._armyManagementLayer);
        this._armyManagementLayer = (GauntletLayer) null;
      }
      if (this._armyManagementDatasource != null)
      {
        ((ViewModel) this._armyManagementDatasource).OnFinalize();
        this._armyManagementDatasource = (ArmyManagementVM) null;
      }
      if (this._armyManagementCategory != null)
      {
        this._armyManagementCategory.Unload();
        this._armyManagementCategory = (SpriteCategory) null;
      }
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.KingdomScreen));
      this.DataSource.OnRefresh();
    }

    private void CloseKingdomScreen()
    {
      Game.Current.GameStateManager.PopState();
      UISoundsHelper.PlayUISound("event:/ui/default");
    }
  }
}
