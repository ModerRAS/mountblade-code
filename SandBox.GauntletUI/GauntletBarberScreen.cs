// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.GauntletBarberScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.GauntletUI.BodyGenerator;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI
{
  [GameStateScreen(typeof (BarberState))]
  public class GauntletBarberScreen : ScreenBase, IGameStateListener, IFaceGeneratorScreen
  {
    private readonly BodyGeneratorView _facegenLayer;

    public IFaceGeneratorHandler Handler => (IFaceGeneratorHandler) this._facegenLayer;

    public GauntletBarberScreen(BarberState state)
    {
      LoadingWindow.EnableGlobalLoadingWindow();
      // ISSUE: method pointer
      // ISSUE: method pointer
      this._facegenLayer = new BodyGeneratorView(new ControlCharacterCreationStage((object) this, __methodptr(OnExit)), GameTexts.FindText("str_done"), new ControlCharacterCreationStage((object) this, __methodptr(OnExit)), GameTexts.FindText("str_cancel"), (BasicCharacterObject) Hero.MainHero.CharacterObject, false, state.Filter, (Equipment) null, (ControlCharacterCreationStageReturnInt) null, (ControlCharacterCreationStageReturnInt) null, (ControlCharacterCreationStageReturnInt) null, (ControlCharacterCreationStageWithInt) null);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this._facegenLayer.OnTick(dt);
    }

    public void OnExit() => Game.Current.GameStateManager.PopState();

    protected override void OnInitialize()
    {
      base.OnInitialize();
      Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
      this.AddLayer((ScreenLayer) this._facegenLayer.GauntletLayer);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      if (LoadingWindow.GetGlobalLoadingWindowState())
        LoadingWindow.DisableGlobalLoadingWindow();
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.AddLayer((ScreenLayer) this._facegenLayer.SceneLayer);
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this._facegenLayer.SceneLayer.SceneView.SetEnable(false);
      this._facegenLayer.OnFinalize();
      LoadingWindow.EnableGlobalLoadingWindow();
      MBInformationManager.HideInformations();
    }

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate()
    {
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
    }
  }
}
