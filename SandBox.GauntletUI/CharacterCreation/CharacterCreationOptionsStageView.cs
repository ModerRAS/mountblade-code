// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationOptionsStageView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.CharacterCreation;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation.OptionsStage;
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
using TaleWorlds.MountAndBlade.GauntletUI.BodyGenerator;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationOptionsStage))]
  public class CharacterCreationOptionsStageView : CharacterCreationStageViewBase
  {
    protected readonly TextObject _affirmativeActionText;
    protected readonly TextObject _negativeActionText;
    private readonly IGauntletMovie _movie;
    private GauntletLayer GauntletLayer;
    private CharacterCreationOptionsStageVM _dataSource;
    private readonly ActionIndexCache act_inventory_idle_start = ActionIndexCache.Create(nameof (act_inventory_idle_start));
    private readonly TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation _characterCreation;
    private Scene _characterScene;
    private Camera _camera;
    private MatrixFrame _initialCharacterFrame;
    private AgentVisuals _agentVisuals;
    private GameEntity _mountEntity;
    private float _charRotationAmount;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    public SceneLayer CharacterLayer { get; private set; }

    public CharacterCreationOptionsStageView(
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
      this._affirmativeActionText = new TextObject("{=lBQXP6Wj}Start Game");
      this._negativeActionText = negativeActionText;
      this.GauntletLayer = new GauntletLayer(1);
      this.GauntletLayer.InputRestrictions.SetInputRestrictions();
      this.GauntletLayer.IsFocusLayer = true;
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      ScreenManager.TrySetFocus((ScreenLayer) this.GauntletLayer);
      this._dataSource = new CharacterCreationOptionsStageVM(this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), this._affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), this._negativeActionText, getCurrentStageIndexAction.Invoke(), getTotalStageCountAction.Invoke(), getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._movie = this.GauntletLayer.LoadMovie("CharacterCreationOptionsStage", (ViewModel) this._dataSource);
    }

    public override void SetGenericScene(Scene scene)
    {
      this.OpenScene(scene);
      this.AddCharacterEntity();
      this.RefreshMountEntity();
    }

    private void OpenScene(Scene cachedScene)
    {
      this._characterScene = cachedScene;
      this._characterScene.SetShadow(true);
      this._characterScene.SetDynamicShadowmapCascadesRadiusMultiplier(0.1f);
      this._characterScene.FindEntityWithName("cradle")?.SetVisibilityExcludeParents(false);
      this._characterScene.SetDoNotWaitForLoadingStatesToRender(true);
      this._characterScene.DisableStaticShadows(true);
      this._camera = Camera.CreateCamera();
      BodyGeneratorView.InitCamera(this._camera, this._cameraPosition);
      this.CharacterLayer = new SceneLayer(clearSceneOnFinalize: false);
      this.CharacterLayer.SetScene(this._characterScene);
      this.CharacterLayer.SetCamera(this._camera);
      this.CharacterLayer.SetSceneUsesShadows(true);
      this.CharacterLayer.SetRenderWithPostfx(true);
      this.CharacterLayer.SetPostfxFromConfig();
      this.CharacterLayer.SceneView.SetResolutionScaling(true);
      this.CharacterLayer.SetPostfxConfigParams(-1 & -5);
      this.CharacterLayer.SetPostfxFromConfig();
      if (this.CharacterLayer.Input.IsCategoryRegistered(HotKeyManager.GetCategory("FaceGenHotkeyCategory")))
        return;
      this.CharacterLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("FaceGenHotkeyCategory"));
    }

    private void AddCharacterEntity()
    {
      this._initialCharacterFrame = this._characterScene.FindEntityWithTag("spawnpoint_player_1").GetFrame();
      this._initialCharacterFrame.origin.z = 0.0f;
      CharacterObject characterObject = Hero.MainHero.CharacterObject;
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(characterObject.Race);
      AgentVisualsData data = new AgentVisualsData().UseMorphAnims(true).Equipment(characterObject.Equipment).BodyProperties(characterObject.GetBodyProperties(characterObject.Equipment, -1)).SkeletonType(characterObject.IsFemale ? SkeletonType.Female : SkeletonType.Male).Frame(this._initialCharacterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, characterObject.IsFemale, "_facegen")).ActionCode(this.act_inventory_idle_start).Scene(this._characterScene).Race(characterObject.Race).Monster(baseMonsterFromRace).PrepareImmediately(true).UseTranslucency(true).UseTesselation(true);
      CharacterCreationContentBase characterCreationContent = (GameStateManager.Current.ActiveState as CharacterCreationState).CurrentCharacterCreationContent;
      Banner currentPlayerBanner = characterCreationContent.GetCurrentPlayerBanner();
      CultureObject selectedCulture = characterCreationContent.GetSelectedCulture();
      if (currentPlayerBanner != null)
      {
        data.ClothColor1(currentPlayerBanner.GetPrimaryColor());
        data.ClothColor2(currentPlayerBanner.GetFirstIconColor());
      }
      else if (characterCreationContent.GetSelectedCulture() != null)
      {
        data.ClothColor1(selectedCulture.Color);
        data.ClothColor2(selectedCulture.Color2);
      }
      this._agentVisuals = AgentVisuals.Create(data, "facegenvisual", false, false, false);
      this.CharacterLayer.SetFocusedShadowmap(true, ref this._initialCharacterFrame.origin, 0.599999964f);
    }

    private void RefreshCharacterEntityFrame()
    {
      MatrixFrame initialCharacterFrame = this._initialCharacterFrame;
      initialCharacterFrame.rotation.RotateAboutUp(this._charRotationAmount);
      initialCharacterFrame.rotation.ApplyScaleLocal(this._agentVisuals.GetScale());
      this._agentVisuals.GetEntity().SetFrame(ref initialCharacterFrame);
    }

    private void RefreshMountEntity()
    {
      this.RemoveMount();
      if (!CharacterObject.PlayerCharacter.HasMount())
        return;
      FaceGenMount faceGenMount = new FaceGenMount(MountCreationKey.GetRandomMountKey(CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, CharacterObject.PlayerCharacter.GetMountKeySeed()), CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.ArmorItemEndSlot].Item, CharacterObject.PlayerCharacter.Equipment[EquipmentIndex.HorseHarness].Item);
      GameEntity entityWithTag = this._characterScene.FindEntityWithTag("spawnpoint_mount_1");
      HorseComponent horseComponent = faceGenMount.HorseItem.HorseComponent;
      Monster monster = horseComponent.Monster;
      this._mountEntity = GameEntity.CreateEmpty(this._characterScene);
      MBActionSet actionSet = MBGlobals.GetActionSet(horseComponent.Monster.ActionSetCode);
      AnimationSystemData animationSystemData = monster.FillAnimationSystemData(actionSet, 1f, false);
      this._mountEntity.CreateSkeletonWithActionSet(ref animationSystemData);
      this._mountEntity.Skeleton.SetAgentActionChannel(0, this.act_inventory_idle_start, MBRandom.RandomFloat);
      this._mountEntity.EntityFlags |= EntityFlags.AnimateWhenVisible;
      MountVisualCreator.AddMountMeshToEntity(this._mountEntity, faceGenMount.HorseItem, faceGenMount.HarnessItem, faceGenMount.MountKey.ToString());
      MatrixFrame globalFrame = entityWithTag.GetGlobalFrame();
      this._mountEntity.SetFrame(ref globalFrame);
      this._agentVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(1f / 1000f, this._initialCharacterFrame, true);
    }

    private void RemoveMount()
    {
      if ((NativeObject) this._mountEntity != (NativeObject) null)
        this._mountEntity.Remove(117);
      this._mountEntity = (GameEntity) null;
    }

    public override void Tick(float dt)
    {
      base.Tick(dt);
      this.HandleEscapeMenu((CharacterCreationStageViewBase) this, (ScreenLayer) this.CharacterLayer);
      this._characterScene?.Tick(dt);
      this._agentVisuals?.TickVisuals();
      Vec2 vec2 = new Vec2(-this.CharacterLayer.Input.GetMouseMoveX(), -this.CharacterLayer.Input.GetMouseMoveY());
      if (this.CharacterLayer.Input.IsHotKeyReleased("Ascend") || this.CharacterLayer.Input.IsHotKeyReleased("Rotate") || this.CharacterLayer.Input.IsHotKeyReleased("Zoom"))
        this.GauntletLayer.InputRestrictions.SetMouseVisibility(true);
      if (this.CharacterLayer.Input.IsHotKeyDown("Rotate"))
      {
        this._charRotationAmount = (float) (((double) this._charRotationAmount - (double) vec2.x * 0.5 * (double) dt) % 6.2831854820251465);
        this.RefreshCharacterEntityFrame();
        MBWindowManager.DontChangeCursorPos();
        this.GauntletLayer.InputRestrictions.SetMouseVisibility(false);
      }
      this.HandleLayerInput();
    }

    private void HandleLayerInput()
    {
      if (this.GauntletLayer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnPreviousStage();
      }
      else
      {
        if (!this.GauntletLayer.Input.IsHotKeyReleased("Confirm") || !((CharacterCreationStageBaseVM) this._dataSource).CanAdvance)
          return;
        UISoundsHelper.PlayUISound("event:/ui/panels/next");
        ((CharacterCreationStageBaseVM) this._dataSource).OnNextStage();
      }
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      SpriteCategory spriteCategory = spriteData.SpriteCategories["ui_bannericons"];
      if (spriteCategory.IsLoaded)
        spriteCategory.Unload();
      this.CharacterLayer.SceneView.SetEnable(false);
      this.CharacterLayer.SceneView.ClearAll(false, false);
      this._agentVisuals.Reset();
      this._agentVisuals = (AgentVisuals) null;
      this.GauntletLayer = (GauntletLayer) null;
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (CharacterCreationOptionsStageVM) null;
      this.CharacterLayer = (SceneLayer) null;
      this._characterScene = (Scene) null;
    }

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this.CharacterLayer,
        (ScreenLayer) this.GauntletLayer
      };
    }

    public override int GetVirtualStageCount() => 1;

    public override void NextStage() => this._affirmativeAction.Invoke();

    public override void PreviousStage()
    {
      this.RemoveMount();
      this._negativeAction.Invoke();
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
  }
}
