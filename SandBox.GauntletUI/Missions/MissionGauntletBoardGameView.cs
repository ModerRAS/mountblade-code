// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Missions.MissionGauntletBoardGameView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.BoardGames.MissionLogics;
using SandBox.ViewModelCollection.BoardGame;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Engine.Screens;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Missions
{
  [OverrideView(typeof (BoardGameView))]
  public class MissionGauntletBoardGameView : MissionView, IBoardGameHandler
  {
    private BoardGameVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private IGauntletMovie _gauntletMovie;
    private GameEntity _cameraHolder;
    private SpriteCategory _spriteCategory;
    private bool _missionMouseVisibilityState;
    private InputUsageMask _missionInputRestrictions;

    public MissionBoardGameLogic _missionBoardGameHandler { get; private set; }

    public Camera Camera { get; private set; }

    public MissionGauntletBoardGameView() => this.ViewOrderPriority = 2;

    public override void OnMissionScreenInitialize()
    {
      base.OnMissionScreenInitialize();
      this.MissionScreen.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("BoardGameHotkeyCategory"));
    }

    public override void OnMissionScreenActivate()
    {
      base.OnMissionScreenActivate();
      this._missionBoardGameHandler = this.Mission.GetMissionBehavior<MissionBoardGameLogic>();
      if (this._missionBoardGameHandler == null)
        return;
      this._missionBoardGameHandler.Handler = (IBoardGameHandler) this;
    }

    void IBoardGameHandler.Activate() => this._dataSource.Activate();

    void IBoardGameHandler.SwitchTurns() => this._dataSource?.SwitchTurns();

    void IBoardGameHandler.DiceRoll(int roll) => this._dataSource?.DiceRoll(roll);

    void IBoardGameHandler.Install()
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._spriteCategory = spriteData.SpriteCategories["ui_boardgame"];
      this._spriteCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._dataSource = new BoardGameVM();
      this._dataSource.SetRollDiceKey(HotKeyManager.GetCategory("BoardGameHotkeyCategory").GetHotKey("BoardGameRollDice"));
      this._gauntletLayer = new GauntletLayer(this.ViewOrderPriority, "BoardGame");
      this._gauntletMovie = this._gauntletLayer.LoadMovie("BoardGame", (ViewModel) this._dataSource);
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._cameraHolder = this.Mission.Scene.FindEntityWithTag("camera_holder");
      this.CreateCamera();
      if ((NativeObject) this._cameraHolder == (NativeObject) null)
        this._cameraHolder = this.Mission.Scene.FindEntityWithTag("camera_holder");
      if ((NativeObject) this.Camera == (NativeObject) null)
        this.CreateCamera();
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._missionMouseVisibilityState = this.MissionScreen.SceneLayer.InputRestrictions.MouseVisibility;
      this._missionInputRestrictions = this.MissionScreen.SceneLayer.InputRestrictions.InputUsageMask;
      this.MissionScreen.SceneLayer.InputRestrictions.SetInputRestrictions(false);
      this.MissionScreen.SceneLayer.IsFocusLayer = true;
      this.MissionScreen.AddLayer((ScreenLayer) this._gauntletLayer);
      this.MissionScreen.SetLayerCategoriesStateAndDeactivateOthers(new string[2]
      {
        "SceneLayer",
        "BoardGame"
      }, true);
      ScreenManager.TrySetFocus((ScreenLayer) this.MissionScreen.SceneLayer);
      this.SetStaticCamera();
    }

    void IBoardGameHandler.Uninstall()
    {
      if (this._dataSource != null)
      {
        this._dataSource.OnFinalize();
        this._dataSource = (BoardGameVM) null;
      }
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.InputRestrictions.ResetInputRestrictions();
      this.MissionScreen.SceneLayer.InputRestrictions.SetInputRestrictions(this._missionMouseVisibilityState, this._missionInputRestrictions);
      this.MissionScreen.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletMovie = (IGauntletMovie) null;
      this._gauntletLayer = (GauntletLayer) null;
      this.Camera = (Camera) null;
      this._cameraHolder = (GameEntity) null;
      this.MissionScreen.CustomCamera = (Camera) null;
      this.MissionScreen.SetLayerCategoriesStateAndToggleOthers(new string[1]
      {
        "BoardGame"
      }, false);
      this.MissionScreen.SetLayerCategoriesState(new string[1]
      {
        "SceneLayer"
      }, true);
      this._spriteCategory.Unload();
    }

    private bool IsHotkeyPressedInAnyLayer(string hotkeyID)
    {
      SceneLayer sceneLayer = this.MissionScreen.SceneLayer;
      int num1 = sceneLayer != null ? (sceneLayer.Input.IsHotKeyPressed(hotkeyID) ? 1 : 0) : 0;
      GauntletLayer gauntletLayer = this._gauntletLayer;
      int num2 = gauntletLayer != null ? (gauntletLayer.Input.IsHotKeyPressed(hotkeyID) ? 1 : 0) : (false ? 1 : 0);
      return (num1 | num2) != 0;
    }

    private bool IsHotkeyDownInAnyLayer(string hotkeyID)
    {
      SceneLayer sceneLayer = this.MissionScreen.SceneLayer;
      int num1 = sceneLayer != null ? (sceneLayer.Input.IsHotKeyDown(hotkeyID) ? 1 : 0) : 0;
      GauntletLayer gauntletLayer = this._gauntletLayer;
      int num2 = gauntletLayer != null ? (gauntletLayer.Input.IsHotKeyDown(hotkeyID) ? 1 : 0) : (false ? 1 : 0);
      return (num1 | num2) != 0;
    }

    private bool IsGameKeyReleasedInAnyLayer(string hotKeyID)
    {
      SceneLayer sceneLayer = this.MissionScreen.SceneLayer;
      int num1 = sceneLayer != null ? (sceneLayer.Input.IsHotKeyReleased(hotKeyID) ? 1 : 0) : 0;
      GauntletLayer gauntletLayer = this._gauntletLayer;
      int num2 = gauntletLayer != null ? (gauntletLayer.Input.IsHotKeyReleased(hotKeyID) ? 1 : 0) : (false ? 1 : 0);
      return (num1 | num2) != 0;
    }

    private void CreateCamera()
    {
      this.Camera = Camera.CreateCamera();
      if ((NativeObject) this._cameraHolder != (NativeObject) null)
        this.Camera.Entity = this._cameraHolder;
      this.Camera.SetFovVertical(0.7853982f, 1.77777779f, 0.01f, 3000f);
    }

    private void SetStaticCamera()
    {
      if ((NativeObject) this._cameraHolder != (NativeObject) null && (NativeObject) this.Camera.Entity != (NativeObject) null)
        this.MissionScreen.CustomCamera = this.Camera;
      else
        Debug.FailedAssert("[DEBUG]Camera entities are null.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.GauntletUI\\Missions\\MissionGauntletBoardGameView.cs", nameof (SetStaticCamera), 189);
    }

    public override void OnMissionScreenTick(float dt)
    {
      MissionBoardGameLogic boardGameHandler = this._missionBoardGameHandler;
      if ((boardGameHandler != null ? (!boardGameHandler.IsGameInProgress ? 1 : 0) : 1) != 0)
        return;
      MissionScreen missionScreen = this.MissionScreen;
      if ((missionScreen != null ? (missionScreen.IsPhotoModeEnabled ? 1 : 0) : 0) != 0)
        return;
      base.OnMissionScreenTick(dt);
      if (this._gauntletLayer != null && this._dataSource != null)
      {
        if (this.IsHotkeyPressedInAnyLayer("Exit"))
          this._dataSource.ExecuteForfeit();
        else if (this.IsHotkeyPressedInAnyLayer("BoardGameRollDice") && this._dataSource.IsGameUsingDice)
          this._dataSource.ExecuteRoll();
      }
      if (this._missionBoardGameHandler.Board == null)
        return;
      Vec3 rayBegin;
      Vec3 rayEnd;
      this.MissionScreen.ScreenPointToWorldRay(this.Input.GetMousePositionRanged(), out rayBegin, out rayEnd);
      this._missionBoardGameHandler.Board.SetUserRay(rayBegin, rayEnd);
    }

    public override void OnMissionScreenFinalize()
    {
      if (this._dataSource != null)
      {
        this._dataSource.OnFinalize();
        this._dataSource = (BoardGameVM) null;
      }
      this._gauntletLayer = (GauntletLayer) null;
      this._gauntletMovie = (IGauntletMovie) null;
      base.OnMissionScreenFinalize();
    }

    public override void OnPhotoModeActivated()
    {
      base.OnPhotoModeActivated();
      if (this._gauntletLayer == null)
        return;
      this._gauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    public override void OnPhotoModeDeactivated()
    {
      base.OnPhotoModeDeactivated();
      if (this._gauntletLayer == null)
        return;
      this._gauntletLayer.UIContext.ContextAlpha = 1f;
    }
  }
}
