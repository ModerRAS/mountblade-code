// Decompiled with JetBrains decompiler
// Type: SandBox.View.Menu.TutorialScreen
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.Menu
{
  [GameStateScreen(typeof (TutorialState))]
  public class TutorialScreen : ScreenBase, IGameStateListener
  {
    public MenuViewContext MenuViewContext { get; }

    public TutorialScreen(TutorialState tutorialState)
    {
      this.MenuViewContext = new MenuViewContext((ScreenBase) this, tutorialState.MenuContext);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this.MenuViewContext.OnFrameTick(dt);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.MenuViewContext.OnActivate();
      LoadingWindow.DisableGlobalLoadingWindow();
    }

    protected override void OnDeactivate()
    {
      this.MenuViewContext.OnDeactivate();
      base.OnDeactivate();
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this.MenuViewContext.OnInitialize();
    }

    protected override void OnFinalize()
    {
      this.MenuViewContext.OnFinalize();
      base.OnFinalize();
    }

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate() => this.MenuViewContext.OnGameStateDeactivate();

    void IGameStateListener.OnInitialize() => this.MenuViewContext.OnGameStateInitialize();

    void IGameStateListener.OnFinalize() => this.MenuViewContext.OnGameStateFinalize();
  }
}
