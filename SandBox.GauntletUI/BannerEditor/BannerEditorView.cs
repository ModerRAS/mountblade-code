// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.BannerEditor.BannerEditorView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Engine.Screens;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Tableaus;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.BannerEditor
{
  public class BannerEditorView
  {
    private IGauntletMovie _gauntletmovie;
    private readonly SpriteCategory _spriteCategory;
    private bool _isFinalized;
    private float _cameraCurrentRotation;
    private float _cameraTargetRotation;
    private float _cameraCurrentDistanceAdder;
    private float _cameraTargetDistanceAdder;
    private float _cameraCurrentElevationAdder;
    private float _cameraTargetElevationAdder;
    private readonly BasicCharacterObject _character;
    private readonly ActionIndexCache _idleAction = ActionIndexCache.Create("act_walk_idle_1h_with_shield_left_stance");
    private Scene _scene;
    private MBAgentRendererSceneController _agentRendererSceneController;
    private AgentVisuals[] _agentVisuals;
    private int _agentVisualToShowIndex;
    private bool _checkWhetherAgentVisualIsReady;
    private bool _firstCharacterRender = true;
    private bool _refreshBannersNextFrame;
    private bool _refreshCharacterAndShieldNextFrame;
    private BannerCode _previousBannerCode;
    private MatrixFrame _characterFrame;
    private Equipment _weaponEquipment;
    private BannerCode _currentBannerCode;
    private Camera _camera;
    private bool _isOpenedFromCharacterCreation;
    private ControlCharacterCreationStage _affirmativeAction;
    private ControlCharacterCreationStage _negativeAction;
    private ControlCharacterCreationStageWithInt _goToIndexAction;

    public GauntletLayer GauntletLayer { get; private set; }

    public BannerEditorVM DataSource { get; private set; }

    public Banner Banner { get; private set; }

    private ItemRosterElement ShieldRosterElement => this.DataSource.ShieldRosterElement;

    private int ShieldSlotIndex => this.DataSource.ShieldSlotIndex;

    public SceneLayer SceneLayer { private set; get; }

    public BannerEditorView(
      BasicCharacterObject character,
      Banner banner,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh = null,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction = null,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction = null,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction = null,
      ControlCharacterCreationStageWithInt goToIndexAction = null)
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._spriteCategory = spriteData.SpriteCategories["ui_bannericons"];
      this._spriteCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._character = character;
      this.Banner = banner;
      this._goToIndexAction = goToIndexAction;
      if (getCurrentStageIndexAction == null || getTotalStageCountAction == null || getFurthestIndexAction == null)
      {
        this.DataSource = new BannerEditorVM(this._character, this.Banner, new Action<bool>(this.Exit), new Action(this.RefreshShieldAndCharacter), 0, 0, 0, new Action<int>(this.GoToIndex));
        this.DataSource.Description = new TextObject("{=3ZO5cMLu}Customize your banner's sigil").ToString();
        this._isOpenedFromCharacterCreation = true;
      }
      else
      {
        this.DataSource = new BannerEditorVM(this._character, this.Banner, new Action<bool>(this.Exit), new Action(this.RefreshShieldAndCharacter), getCurrentStageIndexAction.Invoke(), getTotalStageCountAction.Invoke(), getFurthestIndexAction.Invoke(), new Action<int>(this.GoToIndex));
        this.DataSource.Description = new TextObject("{=312lNJTM}Customize your personal banner by choosing your clan's sigil").ToString();
        this._isOpenedFromCharacterCreation = false;
      }
      this.DataSource.DoneText = affirmativeActionText.ToString();
      this.DataSource.CancelText = negativeActionText.ToString();
      this.GauntletLayer = new GauntletLayer(1);
      this._gauntletmovie = this.GauntletLayer.LoadMovie("BannerEditor", (ViewModel) this.DataSource);
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("FaceGenHotkeyCategory"));
      this.GauntletLayer.InputRestrictions.SetInputRestrictions();
      this.GauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this.GauntletLayer);
      this.DataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this.DataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._affirmativeAction = affirmativeAction;
      this._negativeAction = negativeAction;
      this._agentVisuals = new AgentVisuals[2];
      this._currentBannerCode = BannerCode.CreateFrom(this.Banner);
      this.CreateScene();
      Input.ClearKeys();
      this._weaponEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) this.ShieldSlotIndex, this.ShieldRosterElement.EquipmentElement);
      AgentVisualsData agentVisualsData1 = this._agentVisuals[0].GetCopyAgentVisualsData();
      agentVisualsData1.Equipment(this._weaponEquipment).RightWieldedItemIndex(-1).LeftWieldedItemIndex(this.ShieldSlotIndex).Banner(this.Banner).ClothColor1(this.Banner.GetPrimaryColor()).ClothColor2(this.Banner.GetFirstIconColor());
      this._agentVisuals[0].Refresh(false, agentVisualsData1, true);
      MissionWeapon shieldWeapon = new MissionWeapon(this.ShieldRosterElement.EquipmentElement.Item, this.ShieldRosterElement.EquipmentElement.ItemModifier, this.Banner);
      this.Banner.GetTableauTextureLarge((Action<TaleWorlds.Engine.Texture>) (tex => shieldWeapon.GetWeaponData(false).TableauMaterial.SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap2, tex)));
      this._agentVisuals[0].SetVisible(false);
      this._agentVisuals[0].GetEntity().CheckResources(true, true);
      AgentVisualsData agentVisualsData2 = this._agentVisuals[1].GetCopyAgentVisualsData();
      agentVisualsData2.Equipment(this._weaponEquipment).RightWieldedItemIndex(-1).LeftWieldedItemIndex(this.ShieldSlotIndex).Banner(this.Banner).ClothColor1(this.Banner.GetPrimaryColor()).ClothColor2(this.Banner.GetFirstIconColor());
      this._agentVisuals[1].Refresh(false, agentVisualsData2, true);
      this._agentVisuals[1].SetVisible(false);
      this._agentVisuals[1].GetEntity().CheckResources(true, true);
      this._checkWhetherAgentVisualIsReady = true;
      this._firstCharacterRender = true;
    }

    public void OnTick(float dt)
    {
      if (this._isFinalized)
        return;
      this.HandleUserInput();
      if (this._isFinalized)
        return;
      this.UpdateCamera(dt);
      SceneLayer sceneLayer = this.SceneLayer;
      if ((sceneLayer != null ? (sceneLayer.ReadyToRender() ? 1 : 0) : 0) != 0)
        LoadingWindow.DisableGlobalLoadingWindow();
      this._scene?.Tick(dt);
      if (this._refreshBannersNextFrame)
      {
        this.UpdateBanners();
        this._refreshBannersNextFrame = false;
      }
      if (this._refreshCharacterAndShieldNextFrame)
      {
        this.RefreshShieldAndCharacterAux();
        this._refreshCharacterAndShieldNextFrame = false;
      }
      if (!this._checkWhetherAgentVisualIsReady)
        return;
      int index = (this._agentVisualToShowIndex + 1) % 2;
      if (this._agentVisuals[this._agentVisualToShowIndex].GetEntity().CheckResources(this._firstCharacterRender, true))
      {
        this._agentVisuals[index].SetVisible(false);
        this._agentVisuals[this._agentVisualToShowIndex].SetVisible(true);
        this._checkWhetherAgentVisualIsReady = false;
        this._firstCharacterRender = false;
      }
      else
      {
        if (!this._firstCharacterRender)
          this._agentVisuals[index].SetVisible(true);
        this._agentVisuals[this._agentVisualToShowIndex].SetVisible(false);
      }
    }

    public void OnFinalize()
    {
      if (!this._isOpenedFromCharacterCreation)
        this._spriteCategory.Unload();
      ((ViewModel) this.DataSource)?.OnFinalize();
      this._isFinalized = true;
    }

    public void Exit(bool isCancel)
    {
      MouseManager.ActivateMouseCursor(CursorType.Default);
      this._gauntletmovie = (IGauntletMovie) null;
      if (isCancel)
      {
        this._negativeAction.Invoke();
      }
      else
      {
        this.SetMapIconAsDirtyForAllPlayerClanParties();
        this._affirmativeAction.Invoke();
      }
    }

    private void SetMapIconAsDirtyForAllPlayerClanParties()
    {
      foreach (Hero lord in (List<Hero>) Clan.PlayerClan.Lords)
      {
        foreach (PartyComponent ownedCaravan in lord.OwnedCaravans)
          ownedCaravan.MobileParty.Party?.SetVisualAsDirty();
      }
      foreach (Hero companion in (List<Hero>) Clan.PlayerClan.Companions)
      {
        foreach (PartyComponent ownedCaravan in companion.OwnedCaravans)
          ownedCaravan.MobileParty.Party?.SetVisualAsDirty();
      }
      foreach (PartyComponent warPartyComponent in (List<WarPartyComponent>) Clan.PlayerClan.WarPartyComponents)
        warPartyComponent.MobileParty.Party?.SetVisualAsDirty();
      foreach (Settlement settlement in (List<Settlement>) Clan.PlayerClan.Settlements)
      {
        if (settlement.IsVillage && settlement.Village.VillagerPartyComponent != null)
          settlement.Village.VillagerPartyComponent.MobileParty.Party?.SetVisualAsDirty();
        else if ((settlement.IsCastle || settlement.IsTown) && settlement.Town.GarrisonParty != null)
          settlement.Town.GarrisonParty.Party?.SetVisualAsDirty();
      }
    }

    private void CreateScene()
    {
      this._scene = Scene.CreateNewScene(atlasGroup: DecalAtlasGroup.Battle);
      this._scene.SetName("MBBannerEditorScreen");
      this._scene.Read("banner_editor_scene", ref new SceneInitializationData()
      {
        InitPhysicsWorld = false
      });
      this._scene.SetShadow(true);
      this._scene.DisableStaticShadows(true);
      this._scene.SetDynamicShadowmapCascadesRadiusMultiplier(0.1f);
      this._agentRendererSceneController = MBAgentRendererSceneController.CreateNewAgentRendererSceneController(this._scene, 32);
      float aspectRatio = Screen.AspectRatio;
      this._characterFrame = this._scene.FindEntityWithTag("spawnpoint_player").GetFrame();
      this._characterFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      this._cameraTargetDistanceAdder = 3.5f;
      this._cameraCurrentDistanceAdder = this._cameraTargetDistanceAdder;
      this._cameraTargetElevationAdder = 1.15f;
      this._cameraCurrentElevationAdder = this._cameraTargetElevationAdder;
      this._camera = Camera.CreateCamera();
      this._camera.SetFovVertical(0.6981317f, aspectRatio, 0.2f, 200f);
      this.SceneLayer = new SceneLayer();
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("FaceGenHotkeyCategory"));
      this.SceneLayer.SetScene(this._scene);
      this.UpdateCamera(0.0f);
      this.SceneLayer.SetSceneUsesShadows(true);
      this.SceneLayer.SceneView.SetResolutionScaling(true);
      this.SceneLayer.SetPostfxConfigParams(-1 & -5);
      this.AddCharacterEntity(this._idleAction);
    }

    private void AddCharacterEntity(ActionIndexCache action)
    {
      this._weaponEquipment = new Equipment();
      for (int index = 0; index < 12; ++index)
      {
        EquipmentElement equipmentFromSlot = this._character.Equipment.GetEquipmentFromSlot((EquipmentIndex) index);
        if (equipmentFromSlot.Item?.PrimaryWeapon == null || equipmentFromSlot.Item?.PrimaryWeapon != null && !equipmentFromSlot.Item.PrimaryWeapon.IsShield && !equipmentFromSlot.Item.ItemFlags.HasAllFlags<ItemFlags>(ItemFlags.DropOnWeaponChange))
          this._weaponEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, equipmentFromSlot);
      }
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(this._character.Race);
      this._agentVisuals[0] = AgentVisuals.Create(new AgentVisualsData().Equipment(this._weaponEquipment).BodyProperties(this._character.GetBodyProperties(this._weaponEquipment)).Frame(this._characterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, this._character.IsFemale, "_facegen")).ActionCode(action).Scene(this._scene).Monster(baseMonsterFromRace).SkeletonType(this._character.IsFemale ? SkeletonType.Female : SkeletonType.Male).Race(this._character.Race).PrepareImmediately(true).UseMorphAnims(true), "BannerEditorChar", false, false, true);
      this._agentVisuals[0].SetAgentLodZeroOrMaxExternal(true);
      this._agentVisuals[0].GetEntity().CheckResources(true, true);
      this._agentVisuals[1] = AgentVisuals.Create(new AgentVisualsData().Equipment(this._weaponEquipment).BodyProperties(this._character.GetBodyProperties(this._weaponEquipment)).Frame(this._characterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, this._character.IsFemale, "_facegen")).ActionCode(action).Scene(this._scene).Race(this._character.Race).Monster(baseMonsterFromRace).SkeletonType(this._character.IsFemale ? SkeletonType.Female : SkeletonType.Male).PrepareImmediately(true).UseMorphAnims(true), "BannerEditorChar", false, false, true);
      this._agentVisuals[1].SetAgentLodZeroOrMaxExternal(true);
      this._agentVisuals[1].GetEntity().CheckResources(true, true);
      this.UpdateBanners();
    }

    private void UpdateBanners()
    {
      BannerCode currentBannerCode = BannerCode.CreateFrom(this.Banner);
      this.Banner.GetTableauTextureLarge((Action<TaleWorlds.Engine.Texture>) (resultTexture => this.OnNewBannerReadyForBanners(currentBannerCode, resultTexture)));
      if (this._previousBannerCode != (BannerCode) null)
      {
        TableauCacheManager.Current?.ForceReleaseBanner(this._previousBannerCode, true, true);
        TableauCacheManager.Current?.ForceReleaseBanner(this._previousBannerCode, true);
      }
      this._previousBannerCode = BannerCode.CreateFrom(this.Banner);
    }

    private void OnNewBannerReadyForBanners(BannerCode bannerCodeOfTexture, TaleWorlds.Engine.Texture newTexture)
    {
      if (this._isFinalized || !((NativeObject) this._scene != (NativeObject) null) || !(this._currentBannerCode == bannerCodeOfTexture))
        return;
      GameEntity entityWithTag = this._scene.FindEntityWithTag("banner");
      if ((NativeObject) entityWithTag != (NativeObject) null)
      {
        Mesh firstMesh = entityWithTag.GetFirstMesh();
        if ((NativeObject) firstMesh != (NativeObject) null && this.Banner != null)
          firstMesh.GetMaterial().SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap2, newTexture);
      }
      else
      {
        Mesh firstMesh = this._scene.FindEntityWithTag("banner_2").GetFirstMesh();
        if ((NativeObject) firstMesh != (NativeObject) null && this.Banner != null)
          firstMesh.GetMaterial().SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap2, newTexture);
      }
      this._refreshCharacterAndShieldNextFrame = true;
    }

    private void RefreshShieldAndCharacter()
    {
      this._currentBannerCode = BannerCode.CreateFrom(this.Banner);
      this._refreshBannersNextFrame = true;
    }

    private void RefreshShieldAndCharacterAux()
    {
      int visualToShowIndex = this._agentVisualToShowIndex;
      this._agentVisualToShowIndex = (this._agentVisualToShowIndex + 1) % 2;
      AgentVisualsData agentVisualsData = this._agentVisuals[this._agentVisualToShowIndex].GetCopyAgentVisualsData();
      agentVisualsData.Equipment(this._weaponEquipment).RightWieldedItemIndex(-1).LeftWieldedItemIndex(this.ShieldSlotIndex).Banner(this.Banner).Frame(this._characterFrame).BodyProperties(this._character.GetBodyProperties(this._weaponEquipment)).ClothColor1(this.Banner.GetPrimaryColor()).ClothColor2(this.Banner.GetFirstIconColor());
      this._agentVisuals[this._agentVisualToShowIndex].Refresh(false, agentVisualsData, true);
      this._agentVisuals[this._agentVisualToShowIndex].GetEntity().CheckResources(true, true);
      this._agentVisuals[this._agentVisualToShowIndex].GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(1f / 1000f, this._characterFrame, true);
      this._agentVisuals[this._agentVisualToShowIndex].SetVisible(false);
      this._agentVisuals[this._agentVisualToShowIndex].SetVisible(true);
      this._checkWhetherAgentVisualIsReady = true;
    }

    private void HandleUserInput()
    {
      if (this.GauntletLayer.Input.IsHotKeyReleased("Confirm"))
      {
        this.DataSource.ExecuteDone();
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
      }
      else if (this.GauntletLayer.Input.IsHotKeyReleased("Exit"))
      {
        this.DataSource.ExecuteCancel();
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
      }
      else
      {
        if (this.SceneLayer.Input.IsHotKeyReleased("Ascend") || this.SceneLayer.Input.IsHotKeyReleased("Rotate") || this.SceneLayer.Input.IsHotKeyReleased("Zoom"))
          this.GauntletLayer.InputRestrictions.SetMouseVisibility(true);
        Vec2 vec2 = new Vec2(-this.SceneLayer.Input.GetMouseMoveX(), -this.SceneLayer.Input.GetMouseMoveY());
        if (this.SceneLayer.Input.IsHotKeyDown("Zoom"))
        {
          this._cameraTargetDistanceAdder = MBMath.ClampFloat(this._cameraTargetDistanceAdder + vec2.y * (1f / 500f), 1.5f, 5f);
          MBWindowManager.DontChangeCursorPos();
          this.GauntletLayer.InputRestrictions.SetMouseVisibility(false);
        }
        if (this.SceneLayer.Input.IsHotKeyDown("Rotate"))
        {
          this._cameraTargetRotation = MBMath.WrapAngle(this._cameraTargetRotation - vec2.x * 0.004f);
          MBWindowManager.DontChangeCursorPos();
          this.GauntletLayer.InputRestrictions.SetMouseVisibility(false);
        }
        if (this.SceneLayer.Input.IsHotKeyDown("Ascend"))
        {
          this._cameraTargetElevationAdder = MBMath.ClampFloat(this._cameraTargetElevationAdder - vec2.y * (1f / 500f), 0.5f, 1.9f * this._agentVisuals[0].GetScale());
          MBWindowManager.DontChangeCursorPos();
          this.GauntletLayer.InputRestrictions.SetMouseVisibility(false);
        }
        if ((double) this.SceneLayer.Input.GetDeltaMouseScroll() == 0.0)
          return;
        this._cameraTargetDistanceAdder = MBMath.ClampFloat(this._cameraTargetDistanceAdder - this.SceneLayer.Input.GetDeltaMouseScroll() * (1f / 1000f), 1.5f, 5f);
      }
    }

    private void UpdateCamera(float dt)
    {
      this._cameraCurrentRotation += MBMath.WrapAngle(this._cameraTargetRotation - this._cameraCurrentRotation) * MathF.Min(1f, 10f * dt);
      this._cameraCurrentElevationAdder += MBMath.WrapAngle(this._cameraTargetElevationAdder - this._cameraCurrentElevationAdder) * MathF.Min(1f, 10f * dt);
      this._cameraCurrentDistanceAdder += MBMath.WrapAngle(this._cameraTargetDistanceAdder - this._cameraCurrentDistanceAdder) * MathF.Min(1f, 10f * dt);
      MatrixFrame characterFrame = this._characterFrame;
      characterFrame.rotation.RotateAboutUp(this._cameraCurrentRotation);
      characterFrame.origin += this._cameraCurrentElevationAdder * characterFrame.rotation.u + this._cameraCurrentDistanceAdder * characterFrame.rotation.f;
      characterFrame.rotation.RotateAboutSide(-1.57079637f);
      characterFrame.rotation.RotateAboutUp(3.14159274f);
      characterFrame.rotation.RotateAboutForward(-3f * (float) Math.PI / 50f);
      this._camera.Frame = characterFrame;
      this.SceneLayer.SetCamera(this._camera);
      SoundManager.SetListenerFrame(characterFrame);
    }

    public void OnDeactivate()
    {
      this._agentVisuals[0].Reset();
      this._agentVisuals[1].Reset();
      MBAgentRendererSceneController.DestructAgentRendererSceneController(this._scene, this._agentRendererSceneController, false);
      this._agentRendererSceneController = (MBAgentRendererSceneController) null;
      this._scene.ClearAll();
      this._scene = (Scene) null;
    }

    public void GoToIndex(int index) => this._goToIndexAction.Invoke(index);
  }
}
