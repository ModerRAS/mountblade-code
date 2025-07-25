// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletGameOverScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.ViewModelCollection.GameOver;
using System;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (GameOverState))]
  public class GauntletGameOverScreen : ScreenBase, IGameOverStateHandler, IGameStateListener
  {
    private SpriteCategory _gameOverCategory;
    private GameOverVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private readonly GameOverState _gameOverState;

    public GauntletGameOverScreen(GameOverState gameOverState)
    {
      this._gameOverState = gameOverState;
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (!this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
        return;
      UISoundsHelper.PlayUISound("event:/ui/default");
      this.CloseGameOverScreen();
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._gameOverCategory = spriteData.SpriteCategories["ui_gameover"];
      this._gameOverCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1, shouldClear: true);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this._dataSource = new GameOverVM(this._gameOverState.Reason, new Action(this.CloseGameOverScreen));
      this._dataSource.SetCloseInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._gauntletLayer.LoadMovie("GameOverScreen", (ViewModel) this._dataSource);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.GameOverScreen));
      switch (this._gameOverState.Reason)
      {
        case GameOverState.GameOverReason.Retirement:
          UISoundsHelper.PlayUISound("event:/ui/endgame/end_retirement");
          break;
        case GameOverState.GameOverReason.ClanDestroyed:
          UISoundsHelper.PlayUISound("event:/ui/endgame/end_clan_destroyed");
          break;
        case GameOverState.GameOverReason.Victory:
          UISoundsHelper.PlayUISound("event:/ui/endgame/end_victory");
          break;
      }
      LoadingWindow.DisableGlobalLoadingWindow();
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
      this._gameOverCategory.Unload();
      this._dataSource.OnFinalize();
      this._dataSource = (GameOverVM) null;
      this._gauntletLayer = (GauntletLayer) null;
    }

    private void CloseGameOverScreen()
    {
      if (Game.Current.IsDevelopmentMode || this._gameOverState.Reason == GameOverState.GameOverReason.Victory)
        Game.Current.GameStateManager.PopState();
      else
        MBGameManager.EndGame();
    }
  }
}
