// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.CharacterCreation.CharacterCreationGenericStageView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.CharacterCreation;
using System;
using System.Collections.Generic;
using System.Linq;
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
using TaleWorlds.MountAndBlade.GauntletUI.BodyGenerator;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.ViewModelCollection.EscapeMenu;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.CharacterCreation
{
  [CharacterCreationStageView(typeof (CharacterCreationGenericStage))]
  public class CharacterCreationGenericStageView : CharacterCreationStageViewBase
  {
    protected readonly TextObject _affirmativeActionText;
    protected readonly TextObject _negativeActionText;
    private IGauntletMovie _movie;
    private GauntletLayer GauntletLayer;
    private CharacterCreationGenericStageVM _dataSource;
    private int _stageIndex;
    private readonly ActionIndexCache act_inventory_idle_start = ActionIndexCache.Create(nameof (act_inventory_idle_start));
    private readonly ActionIndexCache act_horse_stand_1 = ActionIndexCache.Create(nameof (act_horse_stand_1));
    private readonly TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation _characterCreation;
    private Scene _characterScene;
    private Camera _camera;
    private MatrixFrame _initialCharacterFrame;
    private List<AgentVisuals> _playerOrParentAgentVisuals;
    private List<AgentVisuals> _playerOrParentAgentVisualsPrevious;
    private int _checkForVisualVisibility;
    private GameEntity _mountEntityToPrepare;
    private GameEntity _mountEntityToShow;
    private EscapeMenuVM _escapeMenuDatasource;
    private IGauntletMovie _escapeMenuMovie;

    public SceneLayer CharacterLayer { get; private set; }

    public CharacterCreationGenericStageView(
      TaleWorlds.CampaignSystem.CharacterCreationContent.CharacterCreation characterCreation,
      ControlCharacterCreationStage affirmativeAction,
      TextObject affirmativeActionText,
      ControlCharacterCreationStage negativeAction,
      TextObject negativeActionText,
      ControlCharacterCreationStage onRefresh,
      ControlCharacterCreationStageReturnInt getCurrentStageIndexAction,
      ControlCharacterCreationStageReturnInt getTotalStageCountAction,
      ControlCharacterCreationStageReturnInt getFurthestIndexAction,
      ControlCharacterCreationStageWithInt goToIndexAction)
      : base(affirmativeAction, negativeAction, onRefresh, getCurrentStageIndexAction, getTotalStageCountAction, getFurthestIndexAction, goToIndexAction)
    {
      this._characterCreation = characterCreation;
      this._affirmativeActionText = affirmativeActionText;
      this._negativeActionText = negativeActionText;
      this.GauntletLayer = new GauntletLayer(1);
      this.GauntletLayer.InputRestrictions.SetInputRestrictions();
      this.GauntletLayer.IsFocusLayer = true;
      this.GauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      ScreenManager.TrySetFocus((ScreenLayer) this.GauntletLayer);
      this._dataSource = new CharacterCreationGenericStageVM(this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), this._affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), this._negativeActionText, this._stageIndex, getCurrentStageIndexAction.Invoke(), getTotalStageCountAction.Invoke(), getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex))
      {
        OnOptionSelection = new Action(this.OnSelectionChanged)
      };
      this.CreateHotKeyVisuals();
      this._movie = this.GauntletLayer.LoadMovie("CharacterCreationGenericStage", (ViewModel) this._dataSource);
    }

    public override void SetGenericScene(Scene scene)
    {
      this.OpenScene(scene);
      this.RefreshCharacterEntity();
      this.RefreshMountEntity();
    }

    private void CreateHotKeyVisuals()
    {
      this._dataSource?.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource?.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
    }

    private void OpenScene(Scene cachedScene)
    {
      this._characterScene = cachedScene;
      this._characterScene.SetShadow(true);
      this._characterScene.SetDynamicShadowmapCascadesRadiusMultiplier(0.1f);
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
      if (!this.CharacterLayer.Input.IsCategoryRegistered(HotKeyManager.GetCategory("FaceGenHotkeyCategory")))
        this.CharacterLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("FaceGenHotkeyCategory"));
      this.CharacterLayer.SetPostfxConfigParams(-1 & -5);
      this.CharacterLayer.SetPostfxFromConfig();
      this._characterScene.FindEntityWithName("cradle")?.SetVisibilityExcludeParents(false);
    }

    private void RefreshCharacterEntity()
    {
      List<float> floatList = new List<float>();
      bool isPlayerAlone = this._characterCreation.IsPlayerAlone;
      bool secondaryCharacter = this._characterCreation.HasSecondaryCharacter;
      if (this._playerOrParentAgentVisuals != null && this._characterCreation.FaceGenChars.Count == 1)
      {
        foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
        {
          Skeleton skeleton = parentAgentVisual.GetVisuals().GetSkeleton();
          floatList.Add(skeleton.GetAnimationParameterAtChannel(0));
        }
      }
      if (this._playerOrParentAgentVisualsPrevious != null)
      {
        foreach (AgentVisuals agentVisualsPreviou in this._playerOrParentAgentVisualsPrevious)
          agentVisualsPreviou.Reset();
      }
      this._playerOrParentAgentVisualsPrevious = new List<AgentVisuals>();
      if (this._playerOrParentAgentVisuals != null)
      {
        foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
          this._playerOrParentAgentVisualsPrevious.Add(parentAgentVisual);
      }
      this._checkForVisualVisibility = 1;
      if (this._characterCreation.FaceGenChars.Count > 0)
      {
        this._playerOrParentAgentVisuals = new List<AgentVisuals>();
        int count = this._characterCreation.FaceGenChars.Count;
        int index = 0;
        foreach (FaceGenChar faceGenChar in (List<FaceGenChar>) this._characterCreation.FaceGenChars)
        {
          string tag = isPlayerAlone ? "spawnpoint_player_1" : "spawnpoint_player_3";
          if (secondaryCharacter)
          {
            if (this._characterCreation.FaceGenChars.ElementAt<FaceGenChar>(index).ActionName.ToString().Contains("horse"))
            {
              tag = "spawnpoint_mount_1";
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
          }
          this._initialCharacterFrame = this._characterScene.FindEntityWithTag(tag).GetFrame();
          this._initialCharacterFrame.origin.z = 0.0f;
          AgentVisuals agentVisuals = AgentVisuals.Create(this.CreateAgentVisual(faceGenChar, this._initialCharacterFrame, isPlayerAlone, (GameStateManager.Current.ActiveState as CharacterCreationState).CurrentCharacterCreationContent.GetSelectedParentType(), index == 2), "facegenvisual" + count.ToString(), false, false, false);
          agentVisuals.SetVisible(false);
          this._playerOrParentAgentVisuals.Add(agentVisuals);
          this._playerOrParentAgentVisuals[index].GetVisuals().GetSkeleton().TickAnimationsAndForceUpdate(1f / 1000f, this._initialCharacterFrame, true);
          if (isPlayerAlone | secondaryCharacter)
          {
            MBReadOnlyList<FaceGenChar> faceGenChars = this._characterCreation.FaceGenChars;
            ActionIndexCache actionIndex = ActionIndexCache.Create(faceGenChars != null ? faceGenChars.ElementAt<FaceGenChar>(index).ActionName : (string) null);
            this._playerOrParentAgentVisuals[index].GetVisuals().GetSkeleton().SetAgentActionChannel(0, actionIndex);
          }
          if (index == 0 && !string.IsNullOrEmpty(this._characterCreation.PrefabId) && (NativeObject) GameEntity.Instantiate(this._characterScene, this._characterCreation.PrefabId, true) != (NativeObject) null)
            this._playerOrParentAgentVisuals[index].AddPrefabToAgentVisualBoneByRealBoneIndex(this._characterCreation.PrefabId, this._characterCreation.PrefabBoneUsage);
          this._playerOrParentAgentVisuals[index].SetAgentLodZeroOrMax(true);
          this._playerOrParentAgentVisuals[index].GetEntity().SetEnforcedMaximumLodLevel(0);
          this._playerOrParentAgentVisuals[index].GetEntity().CheckResources(true, true);
          this.CharacterLayer.SetFocusedShadowmap(true, ref this._initialCharacterFrame.origin, 0.599999964f);
          ++count;
          ++index;
        }
      }
      else
        this._playerOrParentAgentVisuals = (List<AgentVisuals>) null;
    }

    private void RefreshMountEntity()
    {
      this.RemoveShownMount();
      if (this._characterCreation.FaceGenMount == null)
        return;
      GameEntity entityWithTag = this._characterScene.FindEntityWithTag("spawnpoint_mount_1");
      HorseComponent horseComponent = this._characterCreation.FaceGenMount.HorseItem.HorseComponent;
      Monster monster = horseComponent.Monster;
      this._mountEntityToPrepare = GameEntity.CreateEmpty(this._characterScene);
      MBActionSet actionSet = MBGlobals.GetActionSet(horseComponent.Monster.ActionSetCode);
      AnimationSystemData animationSystemData = monster.FillAnimationSystemData(actionSet, 1f, false);
      this._mountEntityToPrepare.CreateSkeletonWithActionSet(ref animationSystemData);
      this._mountEntityToPrepare.Skeleton.SetAgentActionChannel(0, ActionIndexCache.Create(this._characterCreation.FaceGenMount.ActionName));
      this._mountEntityToPrepare.EntityFlags |= EntityFlags.AnimateWhenVisible;
      MountVisualCreator.AddMountMeshToEntity(this._mountEntityToPrepare, this._characterCreation.FaceGenMount.HorseItem, this._characterCreation.FaceGenMount.HarnessItem, this._characterCreation.FaceGenMount.MountKey.ToString());
      MatrixFrame globalFrame = entityWithTag.GetGlobalFrame();
      this._mountEntityToPrepare.SetFrame(ref globalFrame);
      this._mountEntityToPrepare.SetVisibilityExcludeParents(false);
      this._mountEntityToPrepare.SetEnforcedMaximumLodLevel(0);
      this._mountEntityToPrepare.CheckResources(true, false);
    }

    private void RemoveShownMount()
    {
      if ((NativeObject) this._mountEntityToShow != (NativeObject) null)
        this._mountEntityToShow.Remove(116);
      this._mountEntityToShow = this._mountEntityToPrepare;
      this._mountEntityToPrepare = (GameEntity) null;
    }

    private AgentVisualsData CreateAgentVisual(
      FaceGenChar character,
      MatrixFrame characterFrame,
      bool isPlayerEntity,
      int selectedParentType = 0,
      bool isChildAgent = false)
    {
      ActionIndexCache actionCode = isChildAgent ? ActionIndexCache.Create("act_character_creation_toddler_" + (object) selectedParentType) : ActionIndexCache.Create(character.IsFemale ? "act_character_creation_female_default_" + (object) selectedParentType : "act_character_creation_male_default_" + (object) selectedParentType);
      Monster baseMonsterFromRace = TaleWorlds.Core.FaceGen.GetBaseMonsterFromRace(character.Race);
      AgentVisualsData agentVisual = new AgentVisualsData().UseMorphAnims(true).Equipment(character.Equipment).BodyProperties(character.BodyProperties).Frame(characterFrame).ActionSet(MBGlobals.GetActionSetWithSuffix(baseMonsterFromRace, character.IsFemale, "_facegen")).ActionCode(actionCode).Scene(this._characterScene).Monster(baseMonsterFromRace).UseTranslucency(true).UseTesselation(true).RightWieldedItemIndex(0).LeftWieldedItemIndex(1).Race(CharacterObject.PlayerCharacter.Race).SkeletonType(character.IsFemale ? SkeletonType.Female : SkeletonType.Male);
      CharacterCreationContentBase characterCreationContent = ((CharacterCreationState) GameStateManager.Current.ActiveState).CurrentCharacterCreationContent;
      if (characterCreationContent.GetSelectedCulture() != null)
      {
        agentVisual.ClothColor1(characterCreationContent.GetSelectedCulture().Color);
        agentVisual.ClothColor2(characterCreationContent.GetSelectedCulture().Color2);
      }
      if (!isPlayerEntity && !isChildAgent)
        agentVisual.Scale(character.IsFemale ? 0.99f : 1f);
      if (!isPlayerEntity & isChildAgent)
        agentVisual.Scale(0.5f);
      return agentVisual;
    }

    private void OnSelectionChanged()
    {
      this.RefreshCharacterEntity();
      this.RefreshMountEntity();
    }

    public override void Tick(float dt)
    {
      base.Tick(dt);
      this.HandleEscapeMenu((CharacterCreationStageViewBase) this, (ScreenLayer) this.CharacterLayer);
      this._characterScene?.Tick(dt);
      foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
        parentAgentVisual.TickVisuals();
      if (this._playerOrParentAgentVisuals != null && this._checkForVisualVisibility > 0)
      {
        bool flag = true;
        foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
        {
          if (!parentAgentVisual.GetEntity().CheckResources(false, true))
            flag = false;
        }
        if ((NativeObject) this._mountEntityToPrepare != (NativeObject) null && !this._mountEntityToPrepare.CheckResources(false, true))
          flag = false;
        if (flag)
        {
          --this._checkForVisualVisibility;
          if (this._checkForVisualVisibility == 0)
          {
            foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
              parentAgentVisual.SetVisible(true);
            foreach (AgentVisuals agentVisualsPreviou in this._playerOrParentAgentVisualsPrevious)
            {
              agentVisualsPreviou.SetVisible(false);
              agentVisualsPreviou.Reset();
            }
            if ((NativeObject) this._mountEntityToPrepare != (NativeObject) null)
              this._mountEntityToPrepare.SetVisibilityExcludeParents(true);
            if ((NativeObject) this._mountEntityToShow != (NativeObject) null)
            {
              this._mountEntityToShow.SetVisibilityExcludeParents(false);
              this._characterScene.RemoveEntity(this._mountEntityToShow, 116);
            }
            this._mountEntityToShow = this._mountEntityToPrepare;
            this._mountEntityToPrepare = (GameEntity) null;
            this._playerOrParentAgentVisualsPrevious.Clear();
          }
        }
      }
      if (this.CharacterLayer.Input.IsHotKeyReleased("Ascend") || this.CharacterLayer.Input.IsHotKeyReleased("Rotate") || this.CharacterLayer.Input.IsHotKeyReleased("Zoom"))
        this.GauntletLayer.InputRestrictions.SetMouseVisibility(true);
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

    public override void NextStage()
    {
      ++this._stageIndex;
      if (this._stageIndex < this._characterCreation.CharacterCreationMenuCount)
      {
        if (this._movie != null)
        {
          this.GauntletLayer.ReleaseMovie(this._movie);
          this._movie = (IGauntletMovie) null;
        }
        if (this._dataSource != null)
          this._dataSource.OnOptionSelection = (Action) null;
        this._dataSource = new CharacterCreationGenericStageVM(this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), this._affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), this._negativeActionText, this._stageIndex, this._getCurrentStageIndexAction.Invoke(), this._getTotalStageCountAction.Invoke(), this._getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex))
        {
          OnOptionSelection = new Action(this.OnSelectionChanged)
        };
        this.CreateHotKeyVisuals();
        this._movie = this.GauntletLayer.LoadMovie("CharacterCreationGenericStage", (ViewModel) this._dataSource);
        this.RefreshCharacterEntity();
        this.RefreshMountEntity();
      }
      else
      {
        this.RefreshMountEntity();
        this._affirmativeAction.Invoke();
      }
    }

    public override void PreviousStage()
    {
      --this._stageIndex;
      if (this._stageIndex >= 0)
      {
        if (this._movie != null)
        {
          this.GauntletLayer.ReleaseMovie(this._movie);
          this._movie = (IGauntletMovie) null;
        }
        if (this._dataSource != null)
          this._dataSource.OnOptionSelection = (Action) null;
        this._dataSource = new CharacterCreationGenericStageVM(this._characterCreation, new Action(((CharacterCreationStageViewBase) this).NextStage), this._affirmativeActionText, new Action(((CharacterCreationStageViewBase) this).PreviousStage), this._negativeActionText, this._stageIndex, this._getCurrentStageIndexAction.Invoke(), this._getTotalStageCountAction.Invoke(), this._getFurthestIndexAction.Invoke(), new Action<int>(((CharacterCreationStageViewBase) this).GoToIndex))
        {
          OnOptionSelection = new Action(this.OnSelectionChanged)
        };
        this.CreateHotKeyVisuals();
        this._movie = this.GauntletLayer.LoadMovie("CharacterCreationGenericStage", (ViewModel) this._dataSource);
        this.RefreshCharacterEntity();
        this.RefreshMountEntity();
      }
      else
      {
        this.RefreshMountEntity();
        this._negativeAction.Invoke();
      }
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      if (this._playerOrParentAgentVisuals != null)
      {
        foreach (AgentVisuals parentAgentVisual in this._playerOrParentAgentVisuals)
          parentAgentVisual.Reset();
      }
      if (this._playerOrParentAgentVisualsPrevious != null)
      {
        foreach (AgentVisuals agentVisualsPreviou in this._playerOrParentAgentVisualsPrevious)
          agentVisualsPreviou.Reset();
      }
      this.CharacterLayer.SceneView.SetEnable(false);
      this.CharacterLayer.SceneView.ClearAll(false, false);
      this._playerOrParentAgentVisuals = (List<AgentVisuals>) null;
      this._playerOrParentAgentVisualsPrevious = (List<AgentVisuals>) null;
      this.GauntletLayer = (GauntletLayer) null;
      ((ViewModel) this._dataSource)?.OnFinalize();
      this._dataSource = (CharacterCreationGenericStageVM) null;
      this.CharacterLayer = (SceneLayer) null;
      this._characterScene = (Scene) null;
    }

    public override int GetVirtualStageCount()
    {
      return this._characterCreation.CharacterCreationMenuCount;
    }

    public override IEnumerable<ScreenLayer> GetLayers()
    {
      return (IEnumerable<ScreenLayer>) new List<ScreenLayer>()
      {
        (ScreenLayer) this.CharacterLayer,
        (ScreenLayer) this.GauntletLayer
      };
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
