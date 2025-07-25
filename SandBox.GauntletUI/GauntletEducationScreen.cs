// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletEducationScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.Education;
using TaleWorlds.Core;
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
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (EducationState))]
  public class GauntletEducationScreen : ScreenBase, IGameStateListener
  {
    private readonly EducationState _educationState;
    private readonly Hero _child;
    private readonly PreloadHelper _preloadHelper;
    private EducationVM _dataSource;
    private GauntletLayer _gauntletLayer;
    private bool _startedRendering;
    private Scene _characterScene;
    private MBAgentRendererSceneController _agentRendererSceneController;
    private Camera _camera;
    private List<AgentVisuals> _agentVisuals;
    private GameEntity _cradleEntity;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;
    private bool _isEscapeOpen;

    public SceneLayer CharacterLayer { get; private set; }

    public GauntletEducationScreen(EducationState educationState)
    {
      this._educationState = educationState;
      this._child = this._educationState.Child;
      this._agentVisuals = new List<AgentVisuals>();
      this._preloadHelper = new PreloadHelper();
    }

    private void OnOptionSelect(
      EducationCampaignBehavior.EducationCharacterProperties[] characterProperties)
    {
      this.RefreshSceneCharacters(characterProperties);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this.CharacterLayer.SceneView.ReadyToRender() && !this._startedRendering)
      {
        this._preloadHelper.WaitForMeshesToBeLoaded();
        LoadingWindow.DisableGlobalLoadingWindow();
        this._startedRendering = true;
      }
      this._characterScene?.Tick(dt);
      this._agentVisuals?.ForEach((Action<AgentVisuals>) (v => v?.TickVisuals()));
      if (!this._startedRendering)
        return;
      if (this._gauntletLayer.Input.IsHotKeyReleased("ToggleEscapeMenu"))
        this.ToggleEscapeMenu();
      else if (this._gauntletLayer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecutePreviousStage();
      }
      else
      {
        if (!this._gauntletLayer.Input.IsHotKeyReleased("Confirm") || !this._dataSource.CanAdvance)
          return;
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteNextStage();
      }
    }

    private void ToggleEscapeMenu()
    {
      if (this._isEscapeOpen)
        this.RemoveEscapeMenu();
      else
        this.OpenEscapeMenu();
    }

    private void CloseEducationScreen(bool isCancel) => Game.Current.GameStateManager.PopState();

    private void OpenScene()
    {
      this._characterScene = Scene.CreateNewScene(enable_decals: false);
      this._characterScene.Read("character_menu_new", ref new SceneInitializationData()
      {
        InitPhysicsWorld = false
      });
      this._characterScene.SetShadow(true);
      this._characterScene.SetDynamicShadowmapCascadesRadiusMultiplier(0.1f);
      this._agentRendererSceneController = MBAgentRendererSceneController.CreateNewAgentRendererSceneController(this._characterScene, 32);
      this._camera = Camera.CreateCamera();
      this._camera.SetFovVertical(0.7853982f, Screen.AspectRatio, 0.02f, 200f);
      this._camera.Frame = Camera.ConstructCameraFromPositionElevationBearing(new Vec3(6.45f, 4.35f, 1.6f), -0.195f, 163.17f);
      this.CharacterLayer = new SceneLayer();
      this.CharacterLayer.SetScene(this._characterScene);
      this.CharacterLayer.SetCamera(this._camera);
      this.CharacterLayer.SetSceneUsesShadows(true);
      this.CharacterLayer.SetRenderWithPostfx(true);
      this.CharacterLayer.SetPostfxFromConfig();
      this.CharacterLayer.SceneView.SetResolutionScaling(true);
      if (!this.CharacterLayer.Input.IsCategoryRegistered(HotKeyManager.GetCategory("FaceGenHotkeyCategory")))
        this.CharacterLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("FaceGenHotkeyCategory"));
      this.CharacterLayer.SetPostfxConfigParams(-1 & -5);
      this.CharacterLayer.SetPostfxFromConfig();
      this._characterScene.FindEntityWithName("_to_carry_bd_basket_a")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("_to_carry_merchandise_hides_b")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("_to_carry_foods_basket_apple")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("_to_carry_bd_fabric_c")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("notebook")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("baby")?.SetVisibilityExcludeParents(false);
      this._characterScene.FindEntityWithName("blacksmith_hammer")?.SetVisibilityExcludeParents(false);
      this._cradleEntity = this._characterScene.FindEntityWithName("cradle");
      this._cradleEntity?.SetVisibilityExcludeParents(false);
    }

    private void RefreshSceneCharacters(
      EducationCampaignBehavior.EducationCharacterProperties[] characterProperties)
    {
      List<float> floatList = new List<float>();
      this._cradleEntity?.SetVisibilityExcludeParents(false);
      if (this._agentVisuals != null)
      {
        foreach (AgentVisuals agentVisual in this._agentVisuals)
        {
          Skeleton skeleton = agentVisual.GetVisuals().GetSkeleton();
          floatList.Add(skeleton.GetAnimationParameterAtChannel(0));
          agentVisual.Reset();
        }
        this._agentVisuals.Clear();
      }
      if (characterProperties == null || ((IEnumerable<EducationCampaignBehavior.EducationCharacterProperties>) characterProperties).IsEmpty<EducationCampaignBehavior.EducationCharacterProperties>())
        return;
      bool flag1 = characterProperties.Length == 1;
      string tag = "";
      for (int index = 0; index < characterProperties.Length; ++index)
      {
        if (flag1)
        {
          tag = "spawnpoint_player_1";
        }
        else
        {
          switch (index)
          {
            case 0:
              tag = "spawnpoint_player_brother_stage";
              break;
            case 1:
              tag = "spawnpoint_brother_brother_stage";
              break;
          }
        }
        MatrixFrame frame1 = this._characterScene.FindEntityWithTag(tag).GetFrame();
        frame1.origin.z = 0.0f;
        string str = "act_inventory_idle_start";
        if (!string.IsNullOrWhiteSpace(characterProperties[index].ActionId))
          str = characterProperties[index].ActionId;
        string prefabId = characterProperties[index].PrefabId;
        bool useOffHand = characterProperties[index].UseOffHand;
        bool flag2 = false;
        Equipment equipment = characterProperties[index].Equipment.Clone();
        if (!string.IsNullOrEmpty(prefabId) && Game.Current.ObjectManager.GetObject<ItemObject>(prefabId) != null)
        {
          ItemObject itemObject = Game.Current.ObjectManager.GetObject<ItemObject>(prefabId);
          equipment.AddEquipmentToSlotWithoutAgent(useOffHand ? EquipmentIndex.WeaponItemBeginSlot : EquipmentIndex.Weapon1, new EquipmentElement(itemObject));
          flag2 = true;
        }
        AgentVisuals agentVisuals = AgentVisuals.Create(GauntletEducationScreen.CreateAgentVisual(characterProperties[index].Character, frame1, equipment, str, this._characterScene, this._child.Culture), "facegenvisual0", false, false, false);
        agentVisuals.GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(1f / 1000f, frame1, true);
        if (!string.IsNullOrWhiteSpace(str))
        {
          ActionIndexCache actionIndex = ActionIndexCache.Create(str);
          agentVisuals.GetVisuals().GetSkeleton().SetAgentActionChannel(0, actionIndex);
        }
        if (!flag2 && !string.IsNullOrEmpty(prefabId) && (NativeObject) GameEntity.Instantiate(this._characterScene, prefabId, true) != (NativeObject) null)
          agentVisuals.AddPrefabToAgentVisualBoneByRealBoneIndex(prefabId, characterProperties[index].GetUsedHandBoneIndex());
        this.CharacterLayer.SetFocusedShadowmap(true, ref frame1.origin, 0.599999964f);
        this._agentVisuals.Add(agentVisuals);
        if (MathF.Round(this._child.Age) <= 4 && (NativeObject) this._cradleEntity != (NativeObject) null)
        {
          MatrixFrame frame2 = new MatrixFrame(this._cradleEntity.GetFrame().rotation, frame1.origin);
          this._cradleEntity.SetFrame(ref frame2);
          this._cradleEntity.SetVisibilityExcludeParents(true);
        }
      }
    }

    private void PreloadCharactersAndEquipment(
      List<BasicCharacterObject> characters,
      List<Equipment> equipments)
    {
      this._preloadHelper.PreloadCharacters(characters);
      this._preloadHelper.PreloadEquipments(equipments);
    }

    void IGameStateListener.OnActivate()
    {
      this.OnActivate();
      this._gauntletLayer = new GauntletLayer(1);
      this._gauntletLayer.InputRestrictions.SetInputRestrictions();
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._gauntletLayer.IsFocusLayer = true;
      ScreenManager.TrySetFocus((ScreenLayer) this._gauntletLayer);
      this.AddLayer((ScreenLayer) this._gauntletLayer);
      this.OpenScene();
      this.AddLayer((ScreenLayer) this.CharacterLayer);
      this._dataSource = new EducationVM(this._educationState.Child, new Action<bool>(this.CloseEducationScreen), new Action<EducationCampaignBehavior.EducationCharacterProperties[]>(this.OnOptionSelect), new Action<List<BasicCharacterObject>, List<Equipment>>(this.PreloadCharactersAndEquipment));
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._gauntletLayer.LoadMovie("EducationScreen", (ViewModel) this._dataSource);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.EducationScreen));
      LoadingWindow.EnableGlobalLoadingWindow();
    }

    void IGameStateListener.OnDeactivate()
    {
      this.OnDeactivate();
      this.RemoveLayer((ScreenLayer) this._gauntletLayer);
      this._gauntletLayer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus((ScreenLayer) this._gauntletLayer);
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
      LoadingWindow.EnableGlobalLoadingWindow();
    }

    void IGameStateListener.OnFinalize()
    {
      this.OnFinalize();
      this.CharacterLayer.SceneView.SetEnable(false);
      this.CharacterLayer.SceneView.ClearAll(true, true);
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (EducationVM) null;
      this._gauntletLayer = (GauntletLayer) null;
      this._agentVisuals?.ForEach((Action<AgentVisuals>) (v => v?.Reset()));
      this._agentVisuals = (List<AgentVisuals>) null;
      this.CharacterLayer = (SceneLayer) null;
      MBAgentRendererSceneController.DestructAgentRendererSceneController(this._characterScene, this._agentRendererSceneController, false);
      this._agentRendererSceneController = (MBAgentRendererSceneController) null;
      this._characterScene = (Scene) null;
    }

    void IGameStateListener.OnInitialize()
    {
    }

    private static AgentVisualsData CreateAgentVisual(
      CharacterObject character,
      MatrixFrame characterFrame,
      Equipment equipment,
      string actionName,
      Scene scene,
      CultureObject childsCulture)
    {
      ActionIndexCache actionCode = ActionIndexCache.Create(actionName);
      BodyProperties bodyProperties1;
      if ((double) character.Age < 3.0)
      {
        BodyProperties bodyProperties2 = character.GetBodyProperties(equipment, -1);
        bodyProperties1 = new BodyProperties(new DynamicBodyProperties(3f, bodyProperties2.Weight, bodyProperties2.Build), bodyProperties2.StaticProperties);
      }
      else
        bodyProperties1 = character.GetBodyProperties(equipment, -1);
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(character.Race);
      AgentVisualsData agentVisual = new AgentVisualsData().UseMorphAnims(true).Equipment(equipment).BodyProperties(bodyProperties1).Frame(characterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, character.IsFemale, "_facegen")).ActionCode(actionCode).Scene(scene).Monster(baseMonsterFromRace).PrepareImmediately(true).UseTranslucency(true).UseTesselation(true).RightWieldedItemIndex(0).LeftWieldedItemIndex(1).SkeletonType(character.IsFemale ? SkeletonType.Female : SkeletonType.Male);
      if (childsCulture != null)
      {
        agentVisual.ClothColor1(Clan.PlayerClan.Color);
        agentVisual.ClothColor2(Clan.PlayerClan.Color2);
      }
      return agentVisual;
    }

    private void OpenEscapeMenu()
    {
      this._escapeMenuDatasource = new EscapeMenuVM((IEnumerable<EscapeMenuItemVM>) this.GetEscapeMenuItems(), (TextObject) null);
      this._escapeMenuMovie = this._gauntletLayer.LoadMovie("EscapeMenu", (ViewModel) this._escapeMenuDatasource);
      this._isEscapeOpen = true;
    }

    private void RemoveEscapeMenu()
    {
      this._gauntletLayer.ReleaseMovie(this._escapeMenuMovie);
      this._escapeMenuDatasource = (EscapeMenuVM) null;
      this._escapeMenuMovie = (IGauntletMovie) null;
      this._isEscapeOpen = false;
    }

    private List<EscapeMenuItemVM> GetEscapeMenuItems()
    {
      TextObject ironmanDisabledReason = GameTexts.FindText("str_pause_menu_disabled_hint", "IronmanMode");
      TextObject educationDisabledReason = GameTexts.FindText("str_pause_menu_disabled_hint", "Education");
      return new List<EscapeMenuItemVM>()
      {
        new EscapeMenuItemVM(new TextObject("{=UAD5gWKK}Return to Education"), (Action<object>) (o => this.RemoveEscapeMenu()), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(false, TextObject.Empty)), true),
        new EscapeMenuItemVM(new TextObject("{=PXT6aA4J}Campaign Options"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=NqarFr4P}Options"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=bV75iwKa}Save"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=e0KdfaNe}Save As"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=9NuttOBC}Load"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=AbEh2y8o}Save And Exit"), (Action<object>) (o => { }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(true, educationDisabledReason)), false),
        new EscapeMenuItemVM(new TextObject("{=RamV6yLM}Exit to Main Menu"), (Action<object>) (o =>
        {
          this.RemoveEscapeMenu();
          MBGameManager.EndGame();
        }), (object) null, (Func<Tuple<bool, TextObject>>) (() => new Tuple<bool, TextObject>(CampaignOptions.IsIronmanMode, ironmanDisabledReason)), false)
      };
    }
  }
}
