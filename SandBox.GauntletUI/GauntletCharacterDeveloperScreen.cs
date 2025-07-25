// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletCharacterDeveloperScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View;
using System;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Selector;
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
  [GameStateScreen(typeof (CharacterDeveloperState))]
  public class GauntletCharacterDeveloperScreen : 
    ScreenBase,
    IGameStateListener,
    IChangeableScreen,
    ICharacterDeveloperStateHandler
  {
    private CharacterDeveloperVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private SpriteCategory _characterdeveloper;
    private readonly CharacterDeveloperState _characterDeveloperState;

    public GauntletCharacterDeveloperScreen(CharacterDeveloperState clanState)
    {
      this._characterDeveloperState = clanState;
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      LoadingWindow.DisableGlobalLoadingWindow();
      if (this._gauntletLayer.Input.IsHotKeyReleased("Exit") || this._gauntletLayer.Input.IsGameKeyPressed(37))
      {
        if (this._dataSource.CurrentCharacter.IsInspectingAnAttribute)
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.CurrentCharacter.ExecuteStopInspectingCurrentAttribute();
        }
        else if (this._dataSource.CurrentCharacter.PerkSelection.IsActive)
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.CurrentCharacter.PerkSelection.ExecuteDeactivate();
        }
        else
          this.CloseCharacterDeveloperScreen();
      }
      else if (this._gauntletLayer.Input.IsHotKeyReleased("Confirm"))
        this.ExecuteConfirm();
      else if (this._gauntletLayer.Input.IsHotKeyReleased("Reset"))
        this.ExecuteReset();
      else if (this._gauntletLayer.Input.IsHotKeyPressed("SwitchToPreviousTab"))
      {
        this.ExecuteSwitchToPreviousTab();
      }
      else
      {
        if (!this._gauntletLayer.Input.IsHotKeyPressed("SwitchToNextTab"))
          return;
        this.ExecuteSwitchToNextTab();
      }
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._characterdeveloper = spriteData.SpriteCategories["ui_characterdeveloper"];
      this._characterdeveloper.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._dataSource = new CharacterDeveloperVM(new Action(this.CloseCharacterDeveloperScreen));
      this._dataSource.SetGetKeyTextFromKeyIDFunc(new Func<string, TextObject>(((GameKeyTextExtensions) Game.Current.GameTextManager).GetHotKeyGameTextFromKeyID));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._dataSource.SetPreviousCharacterInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToPreviousTab"));
      this._dataSource.SetNextCharacterInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("SwitchToNextTab"));
      if (this._characterDeveloperState.InitialSelectedHero != null)
        this._dataSource.SelectHero(this._characterDeveloperState.InitialSelectedHero);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.LoadMovie("CharacterDeveloper", (ViewModel) this._dataSource);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.CharacterScreen));
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_character_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
    }

    void IGameStateListener.OnDeactivate()
    {
      this.OnDeactivate();
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (CharacterDeveloperVM) null;
      this._gauntletLayer = (GauntletLayer) null;
      this._characterdeveloper.Unload();
    }

    private void CloseCharacterDeveloperScreen()
    {
      UISoundsHelper.PlayUISound("event:/ui/default");
      Game.Current.GameStateManager.PopState();
    }

    private void ExecuteConfirm()
    {
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.ExecuteDone();
    }

    private void ExecuteReset()
    {
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.ExecuteReset();
    }

    private void ExecuteSwitchToPreviousTab()
    {
      MBBindingList<SelectorItemVM> itemList = this._dataSource.CharacterList.ItemList;
      // ISSUE: explicit non-virtual call
      if ((itemList != null ? (__nonvirtual (itemList.Count) > 1 ? 1 : 0) : 0) != 0)
        UISoundsHelper.PlayUISound("event:/ui/checkbox");
      this._dataSource.CharacterList.ExecuteSelectPreviousItem();
    }

    private void ExecuteSwitchToNextTab()
    {
      MBBindingList<SelectorItemVM> itemList = this._dataSource.CharacterList.ItemList;
      // ISSUE: explicit non-virtual call
      if ((itemList != null ? (__nonvirtual (itemList.Count) > 1 ? 1 : 0) : 0) != 0)
        UISoundsHelper.PlayUISound("event:/ui/checkbox");
      this._dataSource.CharacterList.ExecuteSelectNextItem();
    }

    bool IChangeableScreen.AnyUnsavedChanges() => this._dataSource.IsThereAnyChanges();

    bool IChangeableScreen.CanChangesBeApplied() => true;

    void IChangeableScreen.ApplyChanges() => this._dataSource.ApplyAllChanges();

    void IChangeableScreen.ResetChanges() => this._dataSource.ExecuteReset();
  }
}
