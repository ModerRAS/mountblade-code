// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletQuestsScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.Quests;
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
  [GameStateScreen(typeof (QuestsState))]
  public class GauntletQuestsScreen : ScreenBase, IGameStateListener
  {
    private QuestsVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private SpriteCategory _questCategory;
    private readonly QuestsState _questsState;

    public GauntletQuestsScreen(QuestsState questsState) => this._questsState = questsState;

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      LoadingWindow.DisableGlobalLoadingWindow();
      if (!this._gauntletLayer.Input.IsHotKeyDownAndReleased("Exit") && !this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm") && !this._gauntletLayer.Input.IsGameKeyDownAndReleased(42))
        return;
      UISoundsHelper.PlayUISound("event:/ui/default");
      this._dataSource.ExecuteClose();
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._questCategory = spriteData.SpriteCategories["ui_quest"];
      this._questCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._dataSource = new QuestsVM(new Action(this.CloseQuestsScreen));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.LoadMovie("QuestsScreen", (ViewModel) this._dataSource);
      this._gauntletLayer.IsFocusLayer = true;
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.QuestsScreen));
      if (this._questsState.InitialSelectedIssue != null)
        this._dataSource.SetSelectedIssue(this._questsState.InitialSelectedIssue);
      else if (this._questsState.InitialSelectedQuest != null)
        this._dataSource.SetSelectedQuest(this._questsState.InitialSelectedQuest);
      else if (this._questsState.InitialSelectedLog != null)
        this._dataSource.SetSelectedLog(this._questsState.InitialSelectedLog);
      UISoundsHelper.PlayUISound("event:/ui/panels/panel_quest_open");
      this._gauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(2, (Func<bool>) null);
    }

    void IGameStateListener.OnDeactivate()
    {
      this.OnDeactivate();
      this._questCategory.Unload();
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (QuestsVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    private void CloseQuestsScreen() => Game.Current.GameStateManager.PopState();
  }
}
