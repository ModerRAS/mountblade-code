// Decompiled with JetBrains decompiler
// Type: SandBox.View.CharacterCreation.CharacterCreationScreen
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.CharacterCreation
{
  [GameStateScreen(typeof (CharacterCreationState))]
  public class CharacterCreationScreen : 
    ScreenBase,
    ICharacterCreationStateHandler,
    IGameStateListener
  {
    private const string CultureParameterId = "MissionCulture";
    private readonly CharacterCreationState _characterCreationStateState;
    private IEnumerable<ScreenLayer> _shownLayers;
    private CharacterCreationStageViewBase _currentStageView;
    private readonly Dictionary<System.Type, System.Type> _stageViews;
    private SoundEvent _cultureAmbientSoundEvent;
    private Scene _genericScene;
    private MBAgentRendererSceneController _agentRendererSceneController;

    public CharacterCreationScreen(CharacterCreationState characterCreationState)
    {
      this._characterCreationStateState = characterCreationState;
      characterCreationState.Handler = (ICharacterCreationStateHandler) this;
      this._stageViews = new Dictionary<System.Type, System.Type>();
      foreach (System.Type collectUnorderedStage in this.CollectUnorderedStages(this.GetViewAssemblies()))
      {
        if (typeof (CharacterCreationStageViewBase).IsAssignableFrom(collectUnorderedStage) && ((IEnumerable<object>) collectUnorderedStage.GetCustomAttributesSafe(typeof (CharacterCreationStageViewAttribute), true)).FirstOrDefault<object>() is CharacterCreationStageViewAttribute stageViewAttribute)
        {
          if (this._stageViews.ContainsKey(stageViewAttribute.StageType))
            this._stageViews[stageViewAttribute.StageType] = collectUnorderedStage;
          else
            this._stageViews.Add(stageViewAttribute.StageType, collectUnorderedStage);
        }
      }
      this._cultureAmbientSoundEvent = SoundEvent.CreateEventFromString("event:/mission/ambient/special/charactercreation", (Scene) null);
      this._cultureAmbientSoundEvent.Play();
      this.CreateGenericScene();
    }

    private void CreateGenericScene()
    {
      this._genericScene = Scene.CreateNewScene(enable_decals: false);
      this._genericScene.Read("character_menu_new", ref new SceneInitializationData()
      {
        InitPhysicsWorld = false
      });
      this._agentRendererSceneController = MBAgentRendererSceneController.CreateNewAgentRendererSceneController(this._genericScene, 32);
    }

    private void StopSound()
    {
      SoundManager.SetGlobalParameter("MissionCulture", 0.0f);
      this._cultureAmbientSoundEvent?.Stop();
      this._cultureAmbientSoundEvent = (SoundEvent) null;
    }

    void ICharacterCreationStateHandler.OnCharacterCreationFinalized()
    {
      LoadingWindow.EnableGlobalLoadingWindow();
    }

    void ICharacterCreationStateHandler.OnRefresh()
    {
      if (this._shownLayers != null)
      {
        foreach (ScreenLayer layer in this._shownLayers.ToArray<ScreenLayer>())
          this.RemoveLayer(layer);
      }
      if (this._currentStageView == null)
        return;
      this._shownLayers = this._currentStageView.GetLayers();
      if (this._shownLayers == null)
        return;
      foreach (ScreenLayer layer in this._shownLayers.ToArray<ScreenLayer>())
        this.AddLayer(layer);
    }

    void ICharacterCreationStateHandler.OnStageCreated(CharacterCreationStageBase stage)
    {
      System.Type type;
      if (this._stageViews.TryGetValue(stage.GetType(), out type))
      {
        // ISSUE: method pointer
        // ISSUE: method pointer
        // ISSUE: method pointer
        // ISSUE: method pointer
        // ISSUE: method pointer
        // ISSUE: method pointer
        // ISSUE: method pointer
        this._currentStageView = Activator.CreateInstance(type, (object) this._characterCreationStateState.CharacterCreation, (object) new ControlCharacterCreationStage((object) this._characterCreationStateState, __methodptr(NextStage)), (object) new TextObject("{=Rvr1bcu8}Next"), (object) new ControlCharacterCreationStage((object) this._characterCreationStateState, __methodptr(PreviousStage)), (object) new TextObject("{=WXAaWZVf}Previous"), (object) new ControlCharacterCreationStage((object) this._characterCreationStateState, __methodptr(Refresh)), (object) new ControlCharacterCreationStageReturnInt((object) this._characterCreationStateState, __methodptr(GetIndexOfCurrentStage)), (object) new ControlCharacterCreationStageReturnInt((object) this._characterCreationStateState, __methodptr(GetTotalStagesCount)), (object) new ControlCharacterCreationStageReturnInt((object) this._characterCreationStateState, __methodptr(GetFurthestIndex)), (object) new ControlCharacterCreationStageWithInt((object) this._characterCreationStateState, __methodptr(GoToStage))) as CharacterCreationStageViewBase;
        stage.Listener = (ICharacterCreationStageListener) this._currentStageView;
        this._currentStageView.SetGenericScene(this._genericScene);
      }
      else
        this._currentStageView = (CharacterCreationStageViewBase) null;
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (LoadingWindow.IsLoadingWindowActive)
        LoadingWindow.DisableGlobalLoadingWindow();
      this._currentStageView?.Tick(dt);
    }

    void IGameStateListener.OnActivate() => this.OnActivate();

    void IGameStateListener.OnDeactivate() => this.OnDeactivate();

    void IGameStateListener.OnInitialize() => this.OnInitialize();

    void IGameStateListener.OnFinalize()
    {
      this.OnFinalize();
      this.StopSound();
      MBAgentRendererSceneController.DestructAgentRendererSceneController(this._genericScene, this._agentRendererSceneController, false);
      this._agentRendererSceneController = (MBAgentRendererSceneController) null;
      this._genericScene.ClearAll();
      this._genericScene = (Scene) null;
    }

    private IEnumerable<System.Type> CollectUnorderedStages(Assembly[] assemblies)
    {
      Assembly[] assemblyArray = assemblies;
      for (int index = 0; index < assemblyArray.Length; ++index)
      {
        foreach (System.Type type in assemblyArray[index].GetTypesSafe())
        {
          if (typeof (CharacterCreationStageViewBase).IsAssignableFrom(type) && ((IEnumerable<object>) type.GetCustomAttributesSafe(typeof (CharacterCreationStageViewAttribute), true)).FirstOrDefault<object>() is CharacterCreationStageViewAttribute)
            yield return type;
        }
      }
      assemblyArray = (Assembly[]) null;
    }

    private Assembly[] GetViewAssemblies()
    {
      List<Assembly> assemblyList = new List<Assembly>();
      Assembly assembly1 = typeof (CharacterCreationStageViewAttribute).Assembly;
      foreach (Assembly assembly2 in AppDomain.CurrentDomain.GetAssemblies())
      {
        foreach (object referencedAssembly in assembly2.GetReferencedAssemblies())
        {
          if (referencedAssembly.ToString() == assembly1.GetName().ToString())
          {
            assemblyList.Add(assembly2);
            break;
          }
        }
      }
      return assemblyList.ToArray();
    }
  }
}
