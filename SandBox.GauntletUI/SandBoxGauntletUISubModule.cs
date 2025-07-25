// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.SandBoxGauntletUISubModule
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.GauntletUI.Map;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.GauntletUI;
using TaleWorlds.MountAndBlade.GauntletUI.SceneNotification;

#nullable disable
namespace SandBox.GauntletUI
{
  public class SandBoxGauntletUISubModule : MBSubModuleBase
  {
    private bool _gameStarted;
    private bool _initialized;

    public override void OnCampaignStart(Game game, object starterObject)
    {
      base.OnCampaignStart(game, starterObject);
      if (this._gameStarted || !(game.GameType is Campaign))
        return;
      this._gameStarted = true;
    }

    public override void OnGameEnd(Game game)
    {
      base.OnGameEnd(game);
      if (!this._gameStarted || !(game.GameType is Campaign))
        return;
      this._gameStarted = false;
      GauntletGameNotification.OnFinalize();
    }

    public override void BeginGameStart(Game game)
    {
      base.BeginGameStart(game);
      if (Campaign.Current == null)
        return;
      Campaign.Current.VisualCreator.MapEventVisualCreator = (IMapEventVisualCreator) new GauntletMapEventVisualCreator();
    }

    protected override void OnBeforeInitialModuleScreenSetAsRoot()
    {
      base.OnBeforeInitialModuleScreenSetAsRoot();
      if (this._initialized)
        return;
      if (!Utilities.CommandLineArgumentExists("VisualTests"))
        GauntletSceneNotification.Current.RegisterContextProvider((ISceneNotificationContextProvider) new SandboxSceneNotificationContextProvider());
      this._initialized = true;
    }

    protected override void OnGameStart(Game game, IGameStarter gameStarterObject)
    {
      base.OnGameStart(game, gameStarterObject);
      if (this._gameStarted || !(game.GameType is Campaign))
        return;
      this._gameStarted = true;
    }
  }
}
