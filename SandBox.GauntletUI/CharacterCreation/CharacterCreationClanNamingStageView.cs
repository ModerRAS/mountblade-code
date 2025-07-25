// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationClanNamingStageView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.CharacterCreation;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation;
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
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationClanNamingStage))]
  public class CharacterCreationClanNamingStageView : CharacterCreationStageViewBase
  {
    private TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation _characterCreation;
    private GauntletLayer GauntletLayer;
    private CharacterCreationClanNamingStageVM _dataSource;
    private IGauntletMovie _clanNamingStageMovie;
    private TextObject _affirmativeActionText;
    private TextObject _negativeActionText;
    private Banner _banner;
    private float _cameraCurrentRotation;
    private float _cameraTargetRotation;
    private float _cameraCurrentDistanceAdder;
    private float _cameraTargetDistanceAdder;
    private float _cameraCurrentElevationAdder;
    private float _cameraTargetElevationAdder;
    private readonly BasicCharacterObject _character;
    private Scene _scene;
    private readonly ActionIndexCache _idleAction = ActionIndexCache.Create("act_walk_idle_1h_with_shield_left_stance");
    private MBAgentRendererSceneController _agentRendererSceneController;
    private AgentVisuals _agentVisuals;
    private MatrixFrame _characterFrame;
    private Equipment _weaponEquipment;
    private Camera _camera;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    private ItemRosterElement ShieldRosterElement => this._dataSource.ShieldRosterElement;

    private int ShieldSlotIndex => this._dataSource.ShieldSlotIndex;

    public SceneLayer SceneLayer { private set; get; }

    public CharacterCreationClanNamingStageView(
      TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation characterCreation,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage refreshAction,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction,
      ControlCharacterCreationStageWithInt goToIndexAction)
      : base(affirmativeAction, negativeAction, refreshAction, getCurrentStageIndexAction, getTotalStageCountAction, getFurthestIndexAction, goToIndexAction)
    {
      this._characterCreation = characterCreation;
      this._affirmativeActionText = affirmativeActionText;
      this._negativeActionText = negativeActionText;
      GauntletLayer gauntletLayer = new GauntletLayer(1);
      gauntletLayer.IsFocusLayer = true;
      this.GauntletLayer = gauntletLayer;
      this.GauntletLayer.InputRestrictions.SetInputRestrictions();
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      ScreenManager.TrySetFocus((ScreenLayer) this.GauntletLayer);
      this._character = (BasicCharacterObject) CharacterObject.PlayerCharacter;
      this._banner = Clan.PlayerClan.Banner;
      this._dataSource = new CharacterCreationClanNamingStageVM(this._character, this._banner, this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), this._affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), this._negativeActionText, getCurrentStageIndexAction.Invoke(), getTotalStageCountAction.Invoke(), getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._clanNamingStageMovie = this.GauntletLayer.LoadMovie("CharacterCreationClanNamingStage", (ViewModel) this._dataSource);
      this.CreateScene();
      this.RefreshCharacterEntity();
    }

    public override void Tick(float dt)
    {
      this.HandleUserInput();
      this.UpdateCamera(dt);
      if (this.SceneLayer != null && this.SceneLayer.ReadyToRender())
        LoadingWindow.DisableGlobalLoadingWindow();
      if ((NativeObject) this._scene != (NativeObject) null)
        this._scene.Tick(dt);
      this.HandleEscapeMenu((CharacterCreationStageViewBase) this, (ScreenLayer) this.GauntletLayer);
      this.HandleLayerInput();
    }

    private void CreateScene()
    {
      this._scene = Scene.CreateNewScene(enable_decals: false);
      this._scene.SetName("MBBannerEditorScreen");
      SceneInitializationData initData = new SceneInitializationData(true);
      this._scene.Read("banner_editor_scene", ref initData);
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
      this.SceneLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
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
        if (equipmentFromSlot.Item?.PrimaryWeapon == null || equipmentFromSlot.Item?.PrimaryWeapon != null && !equipmentFromSlot.Item.PrimaryWeapon.IsShield)
          this._weaponEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) index, equipmentFromSlot);
      }
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(this._character.Race);
      this._agentVisuals = AgentVisuals.Create(new AgentVisualsData().Equipment(this._weaponEquipment).BodyProperties(this._character.GetBodyProperties(this._weaponEquipment)).Frame(this._characterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, this._character.IsFemale, "_facegen")).ActionCode(action).Scene(this._scene).Race(this._character.Race).Monster(baseMonsterFromRace).SkeletonType(this._character.IsFemale ? SkeletonType.Female : SkeletonType.Male).PrepareImmediately(true).UseMorphAnims(true), "BannerEditorChar", false, false, true);
      this._agentVisuals.SetAgentLodZeroOrMaxExternal(true);
      this.UpdateBanners();
    }

    private void UpdateBanners()
    {
      this._banner.GetTableauTextureLarge(new Action<Texture>(this.OnNewBannerReadyForBanners));
    }

    private void OnNewBannerReadyForBanners(Texture newTexture)
    {
      if ((NativeObject) this._scene == (NativeObject) null)
        return;
      GameEntity entityWithTag1 = this._scene.FindEntityWithTag("banner");
      if ((NativeObject) entityWithTag1 == (NativeObject) null)
        return;
      Mesh firstMesh1 = entityWithTag1.GetFirstMesh();
      if ((NativeObject) firstMesh1 != (NativeObject) null && this._banner != null)
        firstMesh1.GetMaterial().SetTexture(Material.MBTextureType.DiffuseMap2, newTexture);
      GameEntity entityWithTag2 = this._scene.FindEntityWithTag("banner_2");
      if ((NativeObject) entityWithTag2 == (NativeObject) null)
        return;
      Mesh firstMesh2 = entityWithTag2.GetFirstMesh();
      if (!((NativeObject) firstMesh2 != (NativeObject) null) || this._banner == null)
        return;
      firstMesh2.GetMaterial().SetTexture(Material.MBTextureType.DiffuseMap2, newTexture);
    }

    private void RefreshCharacterEntity()
    {
      this._weaponEquipment.AddEquipmentToSlotWithoutAgent((EquipmentIndex) this.ShieldSlotIndex, this.ShieldRosterElement.EquipmentElement);
      AgentVisualsData agentVisualsData = this._agentVisuals.GetCopyAgentVisualsData();
      agentVisualsData.Equipment(this._weaponEquipment).RightWieldedItemIndex(-1).LeftWieldedItemIndex(this.ShieldSlotIndex).Banner(this._banner).ClothColor1(this._banner.GetPrimaryColor()).ClothColor2(this._banner.GetFirstIconColor());
      this._agentVisuals.Refresh(false, agentVisualsData, false);
      EquipmentElement equipmentElement = this.ShieldRosterElement.EquipmentElement;
      ItemObject itemObject = equipmentElement.Item;
      equipmentElement = this.ShieldRosterElement.EquipmentElement;
      ItemModifier itemModifier = equipmentElement.ItemModifier;
      Banner banner = this._banner;
      MissionWeapon shieldWeapon = new MissionWeapon(itemObject, itemModifier, banner);
      this._banner.GetTableauTextureLarge((Action<Texture>) (tex => shieldWeapon.GetWeaponData(false).TableauMaterial.SetTexture(Material.MBTextureType.DiffuseMap2, tex)));
    }

    private void HandleLayerInput()
    {
      if (this.IsGameKeyReleasedInAnyLayer("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnPreviousStage();
      }
      else
      {
        if (!this.IsGameKeyReleasedInAnyLayer("Confirm") || !((CharacterCreationStageBaseVM) this._dataSource).CanAdvance)
          return;
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnNextStage();
      }
    }

    private void HandleUserInput()
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
        this._cameraTargetElevationAdder = MBMath.ClampFloat(this._cameraTargetElevationAdder - vec2.y * (1f / 500f), 0.5f, 1.9f * this._agentVisuals.GetScale());
        MBWindowManager.DontChangeCursorPos();
        this.GauntletLayer.InputRestrictions.SetMouseVisibility(false);
      }
      if ((double) this.SceneLayer.Input.GetDeltaMouseScroll() == 0.0)
        return;
      this._cameraTargetDistanceAdder = MBMath.ClampFloat(this._cameraTargetDistanceAdder - this.SceneLayer.Input.GetDeltaMouseScroll() * (1f / 1000f), 1.5f, 5f);
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

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this.SceneLayer,
        (ScreenLayer) this.GauntletLayer
      };
    }

    public override int GetVirtualStageCount() => 1;

    public override void NextStage()
    {
      TextObject variable = new TextObject(this._dataSource.ClanName);
      TextObject text = GameTexts.FindText("str_generic_clan_name");
      text.SetTextVariable("CLAN_NAME", variable);
      Clan.PlayerClan.ChangeClanName(text, text);
      this._affirmativeAction?.Invoke();
    }

    public override void PreviousStage() => this._negativeAction?.Invoke();

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.SceneLayer.SceneView.SetEnable(false);
      this.SceneLayer.SceneView.ClearAll(true, true);
      this.GauntletLayer = (GauntletLayer) null;
      this.SceneLayer = (SceneLayer) null;
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (CharacterCreationClanNamingStageVM) null;
      this._clanNamingStageMovie = (IGauntletMovie) null;
      this._agentVisuals.Reset();
      this._agentVisuals = (AgentVisuals) null;
      MBAgentRendererSceneController.DestructAgentRendererSceneController(this._scene, this._agentRendererSceneController, false);
      this._agentRendererSceneController = (MBAgentRendererSceneController) null;
      this._scene = (Scene) null;
    }

    public override void LoadEscapeMenuMovie()
    {
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this.GetEscapeMenuItems((CharacterCreationStageViewBase) this), (TextObject) null);
      this._escapeMenuMovie = this.GauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
    }

    public override void ReleaseEscapeMenuMovie()
    {
      this.GauntletLayer.ReleaseMovie(this._escapeMenuMovie);
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
    }

    private bool IsGameKeyReleasedInAnyLayer(string hotKeyID)
    {
      return this.IsReleasedInSceneLayer(hotKeyID) | this.IsReleasedInGauntletLayer(hotKeyID);
    }

    private bool IsReleasedInSceneLayer(string hotKeyID)
    {
      SceneLayer sceneLayer = this.SceneLayer;
      return sceneLayer != null && sceneLayer.Input.IsHotKeyReleased(hotKeyID);
    }

    private bool IsReleasedInGauntletLayer(string hotKeyID)
    {
      GauntletLayer gauntletLayer = this.GauntletLayer;
      return gauntletLayer != null && gauntletLayer.Input.IsHotKeyReleased(hotKeyID);
    }
  }
}
