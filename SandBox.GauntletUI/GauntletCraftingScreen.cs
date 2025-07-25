// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletCraftingScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Engine.Screens;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ObjectSystem;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (CraftingState))]
  public class GauntletCraftingScreen : ScreenBase, ICraftingStateHandler, IGameStateListener
  {
    private const float _controllerRotationSensitivity = 2f;
    private Scene _craftingScene;
    private SceneLayer _sceneLayer;
    private readonly CraftingState _craftingState;
    private CraftingVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private IGauntletMovie _gauntletMovie;
    private SpriteCategory _craftingCategory;
    private Camera _camera;
    private MatrixFrame _cameraFrame;
    private MatrixFrame _initialCameraFrame;
    private Vec3 _dofParams;
    private Vec2 _curCamSpeed;
    private float _zoomAmount;
    private GameEntity _craftingEntity;
    private MatrixFrame _craftingEntityFrame = MatrixFrame.Identity;
    private MatrixFrame _initialEntityFrame;
    private WeaponDesign _craftedData;
    private bool _isInitialized;
    private static KeyValuePair<string, string> _reloadXmlPath;

    private SceneView SceneView => this._sceneLayer.SceneView;

    public GauntletCraftingScreen(CraftingState craftingState)
    {
      this._craftingState = craftingState;
      this._craftingState.Handler = (ICraftingStateHandler) this;
    }

    private void ReloadPieces()
    {
      string key = GauntletCraftingScreen._reloadXmlPath.Key;
      string str = GauntletCraftingScreen._reloadXmlPath.Value;
      if (!str.EndsWith(".xml"))
        str += ".xml";
      GauntletCraftingScreen._reloadXmlPath = new KeyValuePair<string, string>((string) null, (string) null);
      XmlDocument xmlDocument = Game.Current.ObjectManager.LoadXMLFromFileSkipValidation(ModuleHelper.GetModuleFullPath(key) + "ModuleData/" + str, "");
      if (xmlDocument == null)
        return;
      foreach (XmlNode childNode in xmlDocument.ChildNodes[1].ChildNodes)
      {
        XmlAttributeCollection attributes = childNode.Attributes;
        if (attributes != null)
          Game.Current.ObjectManager.GetObject<CraftingPiece>(attributes["id"].InnerText)?.Deserialize(Game.Current.ObjectManager, childNode);
      }
      this._craftingState.CraftingLogic.ReIndex(true);
      this.RefreshItemEntity(this._dataSource.IsInCraftingMode);
      this._dataSource.WeaponDesign.RefreshItem();
    }

    public void Initialize()
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._craftingCategory = spriteData.SpriteCategories["ui_crafting"];
      this._craftingCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._gauntletLayer = new GauntletLayer(1);
      this._gauntletMovie = this._gauntletLayer.LoadMovie("Crafting", (ViewModel) this._dataSource);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.InputRestrictions.SetCanOverrideFocusOnHit(true);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this.OpenScene();
      this.RefreshItemEntity(true);
      this._isInitialized = true;
      Game.Current?.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.CraftingScreen));
    }

    protected override void OnInitialize()
    {
      this.Initialize();
      this._sceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("Generic"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("Generic"));
      this._sceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("CraftingHotkeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("CraftingHotkeyCategory"));
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      Game.Current?.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
      this.SceneView.ClearAll(true, true);
      this._craftingCategory.Unload();
      ((ViewModel) this._dataSource)?.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      LoadingWindow.DisableGlobalLoadingWindow();
      base.OnFrameTick(dt);
      this._dataSource.CanSwitchTabs = !Input.IsGamepadActive || !InformationManager.GetIsAnyTooltipActiveAndExtended();
      this._dataSource.AreGamepadControlHintsEnabled = Input.IsGamepadActive && this._sceneLayer.IsHitThisFrame && this._dataSource.IsInCraftingMode;
      if (this._dataSource.IsInCraftingMode)
        this._dataSource.WeaponDesign.WeaponControlsEnabled = this._sceneLayer.IsHitThisFrame;
      if (this._sceneLayer.Input.IsControlDown() || this._gauntletLayer.Input.IsControlDown())
      {
        if (this._sceneLayer.Input.IsHotKeyPressed("Copy") || this._gauntletLayer.Input.IsHotKeyPressed("Copy"))
          this.CopyXmlCode();
        else if (this._sceneLayer.Input.IsHotKeyPressed("Paste") || this._gauntletLayer.Input.IsHotKeyPressed("Paste"))
          this.PasteXmlCode();
      }
      if (this._craftingState.CraftingLogic.CurrentCraftingTemplate == null)
        return;
      if (!this._sceneLayer.Input.IsHotKeyDown("Rotate") && !this._sceneLayer.Input.IsHotKeyDown("Zoom"))
        this._sceneLayer.InputRestrictions.SetMouseVisibility(true);
      this._craftingScene.Tick(dt);
      if (Input.IsGamepadActive || !this._gauntletLayer.IsFocusedOnInput() && !this._sceneLayer.IsFocusedOnInput())
      {
        if (this.IsHotKeyReleasedInAnyLayer("Exit"))
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._dataSource.ExecuteCancel();
        }
        else if (this.IsHotKeyReleasedInAnyLayer("Confirm"))
        {
          bool isInCraftingMode = this._dataSource.IsInCraftingMode;
          bool inRefinementMode = this._dataSource.IsInRefinementMode;
          bool isInSmeltingMode = this._dataSource.IsInSmeltingMode;
          (bool flag1, bool flag2) = this._dataSource.ExecuteConfirm();
          if (flag1)
          {
            if (flag2)
            {
              if (isInCraftingMode)
                UISoundsHelper.PlayUISound("event:/ui/crafting/craft_success");
              else if (inRefinementMode)
                UISoundsHelper.PlayUISound("event:/ui/crafting/refine_success");
              else if (isInSmeltingMode)
                UISoundsHelper.PlayUISound("event:/ui/crafting/smelt_success");
            }
            else
              UISoundsHelper.PlayUISound("event:/ui/default");
          }
        }
        else if (this._dataSource.CanSwitchTabs)
        {
          if (this.IsHotKeyReleasedInAnyLayer("SwitchToPreviousTab"))
          {
            if (this._dataSource.IsInSmeltingMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/refine_tab");
              this._dataSource.ExecuteSwitchToRefinement();
            }
            else if (this._dataSource.IsInCraftingMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/smelt_tab");
              this._dataSource.ExecuteSwitchToSmelting();
            }
            else if (this._dataSource.IsInRefinementMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/craft_tab");
              this._dataSource.ExecuteSwitchToCrafting();
            }
          }
          else if (this.IsHotKeyReleasedInAnyLayer("SwitchToNextTab"))
          {
            if (this._dataSource.IsInSmeltingMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/craft_tab");
              this._dataSource.ExecuteSwitchToCrafting();
            }
            else if (this._dataSource.IsInCraftingMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/refine_tab");
              this._dataSource.ExecuteSwitchToRefinement();
            }
            else if (this._dataSource.IsInRefinementMode)
            {
              UISoundsHelper.PlayUISound("event:/ui/crafting/smelt_tab");
              this._dataSource.ExecuteSwitchToSmelting();
            }
          }
        }
      }
      bool flag = false;
      if (GauntletCraftingScreen._reloadXmlPath.Key != null && GauntletCraftingScreen._reloadXmlPath.Value != null)
      {
        this.ReloadPieces();
        flag = true;
      }
      if (flag)
        return;
      if (this.DebugInput.IsHotKeyPressed("Reset"))
        this.OnResetCamera();
      if (this._dataSource.IsInCraftingMode)
      {
        float deltaX = 0.0f;
        float deltaY = 0.0f;
        if (Input.IsGamepadActive)
        {
          deltaX = this._sceneLayer.Input.GetGameKeyAxis("CameraAxisX");
          deltaY = this._sceneLayer.Input.GetGameKeyAxis("CameraAxisY");
        }
        else if (this._sceneLayer.Input.IsHotKeyDown("Rotate") || this._sceneLayer.Input.IsHotKeyDown("Zoom"))
        {
          deltaX = this._sceneLayer.Input.GetMouseMoveX();
          deltaY = this._sceneLayer.Input.GetMouseMoveY();
        }
        if ((double) deltaX != 0.0 || (double) deltaY != 0.0)
          this.OnMouseMove(deltaX, deltaY, dt);
        this.ZoomTick(dt);
      }
      this._craftingScene.SetDepthOfFieldParameters(this._dofParams.x, this._dofParams.z, false);
      this._craftingScene.SetDepthOfFieldFocus(this._initialEntityFrame.origin.Distance(this._cameraFrame.origin));
      if (this._dataSource.IsInCraftingMode)
        this._craftingEntity.SetFrame(ref this._craftingEntityFrame);
      this.SceneView.SetCamera(this._camera);
    }

    private void OnClose()
    {
      CampaignMission.Current?.EndMission();
      Game.Current.GameStateManager.PopState();
    }

    private void OnResetCamera()
    {
      this._sceneLayer.InputRestrictions.SetMouseVisibility(true);
      this.ResetEntityAndCamera();
    }

    private void OnWeaponCrafted()
    {
      this._dataSource.WeaponDesign.CraftingResultPopup?.SetDoneInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("Confirm"));
    }

    public void OnCraftingLogicInitialized()
    {
      ((ViewModel) this._dataSource)?.OnFinalize();
      // ISSUE: method pointer
      this._dataSource = new CraftingVM(this._craftingState.CraftingLogic, new Action(this.OnClose), new Action(this.OnResetCamera), new Action(this.OnWeaponCrafted), new Func<WeaponComponentData, ItemObject.ItemUsageSetFlags>(this.GetItemUsageSetFlag))
      {
        OnItemRefreshed = new CraftingVM.OnItemRefreshedDelegate((object) this, __methodptr(RefreshItemEntity))
      };
      this._dataSource.WeaponDesign.CraftingHistory.SetDoneKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("Confirm"));
      this._dataSource.WeaponDesign.CraftingHistory.SetCancelKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("Exit"));
      this._dataSource.SetConfirmInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetExitInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("Exit"));
      this._dataSource.SetPreviousTabInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("SwitchToPreviousTab"));
      this._dataSource.SetNextTabInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetHotKey("SwitchToNextTab"));
      this._dataSource.AddCameraControlInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetGameKey(55));
      this._dataSource.AddCameraControlInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").GetGameKey(56));
      this._dataSource.AddCameraControlInputKey(HotKeyManager.GetCategory("CraftingHotkeyCategory").RegisteredGameAxisKeys.FirstOrDefault<GameAxisKey>((Func<GameAxisKey, bool>) (x => x.Id == "CameraAxisX")));
    }

    public void OnCraftingLogicRefreshed()
    {
      this._dataSource.OnCraftingLogicRefreshed(this._craftingState.CraftingLogic);
      if (!this._isInitialized)
        return;
      this.RefreshItemEntity(true);
    }

    private void OpenScene()
    {
      this._craftingScene = Scene.CreateNewScene(enable_decals: false);
      this._craftingScene.SetName(nameof (GauntletCraftingScreen));
      this._craftingScene.Read("crafting_menu_outdoor", ref new SceneInitializationData()
      {
        InitPhysicsWorld = false
      });
      this._craftingScene.DisableStaticShadows(true);
      this._craftingScene.SetShadow(true);
      this._craftingScene.SetClothSimulationState(true);
      this.InitializeEntityAndCamera();
      this._sceneLayer = new SceneLayer();
      this._sceneLayer.IsFocusLayer = true;
      this._sceneLayer.InputRestrictions.SetCanOverrideFocusOnHit(true);
      this.AddLayer((ScreenLayer) this._sceneLayer);
      this.SceneView.SetScene(this._craftingScene);
      this.SceneView.SetCamera(this._camera);
      this.SceneView.SetSceneUsesShadows(true);
      this.SceneView.SetAcceptGlobalDebugRenderObjects(true);
      this.SceneView.SetRenderWithPostfx(true);
      this.SceneView.SetResolutionScaling(true);
    }

    private void InitializeEntityAndCamera()
    {
      GameEntity entityWithTag1 = this._craftingScene.FindEntityWithTag("weapon_point");
      MatrixFrame globalFrame = entityWithTag1.GetGlobalFrame();
      this._craftingScene.RemoveEntity(entityWithTag1, 114);
      globalFrame.Elevate(1.6f);
      this._craftingEntityFrame = globalFrame;
      this._initialEntityFrame = this._craftingEntityFrame;
      this._craftingEntity = GameEntity.CreateEmpty(this._craftingScene);
      this._craftingEntity.SetFrame(ref this._craftingEntityFrame);
      this._camera = Camera.CreateCamera();
      this._dofParams = new Vec3();
      this._curCamSpeed = new Vec2(0.0f, 0.0f);
      GameEntity entityWithTag2 = this._craftingScene.FindEntityWithTag("camera_point");
      entityWithTag2.GetCameraParamsFromCameraScript(this._camera, ref this._dofParams);
      this._camera.SetFovVertical(this._camera.GetFovVertical(), Screen.AspectRatio, this._camera.Near, this._camera.Far);
      this._craftingScene.SetDepthOfFieldParameters(this._dofParams.x, this._dofParams.z, false);
      this._craftingScene.SetDepthOfFieldFocus(this._dofParams.y);
      this._cameraFrame = entityWithTag2.GetFrame();
      this._initialCameraFrame = this._cameraFrame;
    }

    private void RefreshItemEntity(bool isItemVisible)
    {
      this._dataSource.WeaponDesign.CurrentWeaponHasScabbard = false;
      if ((NativeObject) this._craftingEntity != (NativeObject) null)
      {
        this._craftingEntityFrame = this._craftingEntity.GetFrame();
        this._craftingEntity.Remove(115);
        this._craftingEntity = (GameEntity) null;
      }
      if (!isItemVisible)
        return;
      this._craftingEntity = GameEntity.CreateEmpty(this._craftingScene);
      this._craftingEntity.SetFrame(ref this._craftingEntityFrame);
      this._craftedData = this._craftingState.CraftingLogic.CurrentWeaponDesign;
      if (!(this._craftedData != (WeaponDesign) null))
        return;
      this._craftingEntityFrame = this._craftingEntity.GetFrame();
      float num = this._craftedData.CraftedWeaponLength / 2f;
      this._craftingEntity.SetFrame(ref this._craftingEntityFrame);
      this._dataSource.WeaponDesign.CurrentWeaponHasScabbard = !string.IsNullOrEmpty(this._craftedData.UsedPieces[0].CraftingPiece.BladeData.HolsterMeshName);
      MetaMesh metaMesh;
      if (!this._dataSource.WeaponDesign.IsScabbardVisible)
      {
        metaMesh = CraftedDataView.BuildWeaponMesh(this._craftedData, -num, false, false);
      }
      else
      {
        metaMesh = CraftedDataView.BuildHolsterMeshWithWeapon(this._craftedData, -num, false);
        if ((NativeObject) metaMesh == (NativeObject) null)
          metaMesh = CraftedDataView.BuildWeaponMesh(this._craftedData, -num, false, false);
      }
      this._craftingEntity = this._craftingScene.AddItemEntity(ref this._craftingEntityFrame, metaMesh);
    }

    private void OnMouseMove(float deltaX, float deltaY, float dT)
    {
      if (this.DebugInput.IsControlDown() || this.DebugInput.IsAltDown())
        return;
      if (Input.IsGamepadActive)
      {
        if ((double) Mathf.Abs(deltaX) > 0.10000000149011612)
        {
          deltaX = (float) (((double) deltaX - (double) Mathf.Sign(deltaX) * 0.10000000149011612) / 0.89999997615814209);
          this._craftingEntityFrame.rotation.RotateAboutUp((float) (2.0 * (double) deltaX * 3.1415927410125732 / 180.0));
        }
        if ((double) Mathf.Abs(deltaY) > 0.10000000149011612)
        {
          deltaY = (float) (((double) deltaY - (double) Mathf.Sign(deltaY) * 0.10000000149011612) / 0.89999997615814209);
          this._craftingEntityFrame.rotation.RotateAboutSide((float) (2.0 * (double) deltaY * 3.1415927410125732 / 180.0));
        }
      }
      else if (this._sceneLayer.Input.IsHotKeyDown("Rotate"))
      {
        Vec2 vec2_1 = new Vec2(0.02f, 0.02f);
        Vec2 vec2_2 = new Vec2(deltaX, -deltaY);
        Vec2 vec2_3 = new Vec2(vec2_2.x / vec2_1.x, vec2_2.y / vec2_1.y);
        this._curCamSpeed = this._curCamSpeed * 0.95f + new Vec2(dT * vec2_3.x, dT * vec2_3.y);
        Vec2 vec2_4 = new Vec2(this._curCamSpeed.x * dT, this._curCamSpeed.y * dT);
        this._craftingEntityFrame.rotation.RotateAboutAnArbitraryVector(Vec3.Side, (float) ((double) vec2_4.y * 3.1415927410125732 / 180.0));
        this._craftingEntityFrame.rotation.RotateAboutAnArbitraryVector(Vec3.Up, (float) ((double) vec2_4.x * 3.1415927410125732 / 180.0));
        MBWindowManager.DontChangeCursorPos();
        this._sceneLayer.InputRestrictions.SetMouseVisibility(false);
        this._gauntletLayer.InputRestrictions.SetMouseVisibility(false);
      }
      else if (this._sceneLayer.Input.IsHotKeyDown("Zoom"))
      {
        this._craftingEntityFrame.rotation.RotateAboutUp((float) (((double) MathF.Abs(deltaX) >= (double) MathF.Abs(deltaY) ? (double) deltaX : (double) deltaY) * 3.1415927410125732 / 180.0 * 0.15000000596046448));
        MBWindowManager.DontChangeCursorPos();
        this._sceneLayer.InputRestrictions.SetMouseVisibility(false);
        this._gauntletLayer.InputRestrictions.SetMouseVisibility(false);
      }
      if (!this._sceneLayer.Input.IsHotKeyDown("Rotate") || !this._sceneLayer.Input.IsHotKeyDown("Zoom"))
        return;
      this.ResetEntityAndCamera();
    }

    private float GetActiveZoomAmount()
    {
      if (!Input.IsGamepadActive)
        return MBMath.ClampFloat(this._zoomAmount - (float) MathF.Sign(this._sceneLayer.Input.GetDeltaMouseScroll()) * 0.05f, -0.6f, 0.5f);
      float gameKeyState = this._sceneLayer.Input.GetGameKeyState(55);
      return this._sceneLayer.Input.GetGameKeyState(56) - gameKeyState;
    }

    private void ZoomTick(float dt)
    {
      this._zoomAmount = this.GetActiveZoomAmount();
      if ((double) MathF.Abs(this._zoomAmount) < 9.9999997473787516E-06)
      {
        this._zoomAmount = 0.0f;
      }
      else
      {
        int num1 = MathF.Sign(this._zoomAmount);
        Vec3 vec3 = (float) -num1 * (this._initialEntityFrame.origin - this._cameraFrame.origin);
        double num2 = (double) vec3.Normalize();
        float num3 = Input.IsGamepadActive ? 2f : 5f;
        float num4 = dt * num3;
        this._cameraFrame.origin += vec3 * num4;
        this._zoomAmount += (float) -num1 * num4;
        float num5 = this._initialEntityFrame.origin.Distance(this._cameraFrame.origin);
        float num6;
        if ((double) num5 > 3.2999999523162842)
        {
          this._cameraFrame.origin += (float) -num1 * vec3 * (num5 - 3.3f);
          num6 = this._initialEntityFrame.origin.Distance(this._cameraFrame.origin);
          this._zoomAmount = 0.0f;
        }
        else if ((double) num5 < 0.550000011920929)
        {
          this._cameraFrame.origin += (float) -num1 * vec3 * (num5 - 0.55f);
          num6 = this._initialEntityFrame.origin.Distance(this._cameraFrame.origin);
          this._zoomAmount = 0.0f;
        }
        else if (num1 != MathF.Sign(this._zoomAmount))
          this._zoomAmount = 0.0f;
        this._camera.Frame = this._cameraFrame;
      }
    }

    private void ResetEntityAndCamera()
    {
      this._zoomAmount = 0.0f;
      this._craftingEntityFrame = this._initialEntityFrame;
      this._cameraFrame = this._initialCameraFrame;
      this._camera.Frame = this._cameraFrame;
    }

    private void CopyXmlCode()
    {
      Input.SetClipboardText(this._craftingState.CraftingLogic.GetXmlCodeForCurrentItem(this._craftingState.CraftingLogic.GetCurrentCraftedItemObject()));
    }

    private void PasteXmlCode()
    {
      string clipboardText = Input.GetClipboardText();
      if (string.IsNullOrEmpty(clipboardText))
        return;
      ItemObject itemObject = MBObjectManager.Instance.GetObject<ItemObject>(clipboardText);
      if (itemObject != null)
      {
        this.SwithToCraftedItem(itemObject);
      }
      else
      {
        CraftingTemplate craftingTemplate;
        (CraftingPiece, int)[] pieces;
        if (!this._craftingState.CraftingLogic.TryGetWeaponPropertiesFromXmlCode(clipboardText, out craftingTemplate, out pieces))
          return;
        this._dataSource.SetCurrentDesignManually(craftingTemplate, pieces);
      }
    }

    private void SwithToCraftedItem(ItemObject itemObject)
    {
      if (itemObject == null || !itemObject.IsCraftedWeapon)
        return;
      if (!this._dataSource.IsInCraftingMode)
        this._dataSource.ExecuteSwitchToCrafting();
      WeaponDesign weaponDesign = itemObject.WeaponDesign;
      if (this._craftingState.CraftingLogic.CurrentCraftingTemplate != weaponDesign.Template)
        this._dataSource.WeaponDesign.SelectPrimaryWeaponClass(weaponDesign.Template);
      foreach (WeaponDesignElement usedPiece in weaponDesign.UsedPieces)
      {
        if (usedPiece.IsValid)
          this._dataSource.WeaponDesign.SwitchToPiece(usedPiece);
      }
    }

    private ItemObject.ItemUsageSetFlags GetItemUsageSetFlag(WeaponComponentData item)
    {
      return !string.IsNullOrEmpty(item.ItemUsage) ? MBItem.GetItemUsageSetFlags(item.ItemUsage) : (ItemObject.ItemUsageSetFlags) 0;
    }

    private bool IsHotKeyReleasedInAnyLayer(string hotKeyId)
    {
      return this._sceneLayer.Input.IsHotKeyReleased(hotKeyId) || this._gauntletLayer.Input.IsHotKeyReleased(hotKeyId);
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
    }

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate()
    {
    }
  }
}
