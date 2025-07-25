// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.EditorGame
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class EditorGame : TaleWorlds.Core.GameType
  {
    public static EditorGame Current => Game.Current.GameType as EditorGame;

    protected override void OnInitialize()
    {
      Game currentGame = this.CurrentGame;
      IGameStarter gameStarter = (IGameStarter) new BasicGameStarter();
      this.InitializeGameModels(gameStarter);
      this.GameManager.InitializeGameStarter(currentGame, gameStarter);
      this.GameManager.OnGameStart(this.CurrentGame, gameStarter);
      MBObjectManager objectManager = currentGame.ObjectManager;
      currentGame.SetBasicModels(gameStarter.Models);
      currentGame.CreateGameManager();
      this.GameManager.BeginGameStart(this.CurrentGame);
      currentGame.InitializeDefaultGameObjects();
      currentGame.LoadBasicFiles();
      this.LoadCustomGameXmls();
      objectManager.UnregisterNonReadyObjects();
      currentGame.SetDefaultEquipments((IReadOnlyDictionary<string, Equipment>) new Dictionary<string, Equipment>());
      objectManager.UnregisterNonReadyObjects();
      this.GameManager.OnNewCampaignStart(this.CurrentGame, (object) null);
      this.GameManager.OnAfterCampaignStart(this.CurrentGame);
      this.GameManager.OnGameInitializationFinished(this.CurrentGame);
    }

    private void InitializeGameModels(IGameStarter basicGameStarter)
    {
      basicGameStarter.AddModel((GameModel) new CustomBattleAgentStatCalculateModel());
      basicGameStarter.AddModel((GameModel) new CustomAgentApplyDamageModel());
      basicGameStarter.AddModel((GameModel) new CustomBattleApplyWeatherEffectsModel());
      basicGameStarter.AddModel((GameModel) new CustomBattleMoraleModel());
      basicGameStarter.AddModel((GameModel) new CustomBattleInitializationModel());
      basicGameStarter.AddModel((GameModel) new CustomBattleSpawnModel());
      basicGameStarter.AddModel((GameModel) new DefaultAgentDecideKilledOrUnconsciousModel());
      basicGameStarter.AddModel((GameModel) new DefaultRidingModel());
      basicGameStarter.AddModel((GameModel) new DefaultStrikeMagnitudeModel());
      basicGameStarter.AddModel((GameModel) new CustomBattleBannerBearersModel());
      basicGameStarter.AddModel((GameModel) new DefaultFormationArrangementModel());
      basicGameStarter.AddModel((GameModel) new DefaultDamageParticleModel());
      basicGameStarter.AddModel((GameModel) new DefaultItemPickupModel());
    }

    private void LoadCustomGameXmls()
    {
      this.ObjectManager.LoadXML("Items");
      this.ObjectManager.LoadXML("EquipmentRosters");
      this.ObjectManager.LoadXML("NPCCharacters");
      this.ObjectManager.LoadXML("SPCultures");
    }

    protected override void BeforeRegisterTypes(MBObjectManager objectManager)
    {
    }

    protected override void OnRegisterTypes(MBObjectManager objectManager)
    {
      objectManager.RegisterType<BasicCharacterObject>("NPCCharacter", "NPCCharacters", 43U);
      objectManager.RegisterType<BasicCultureObject>("Culture", "SPCultures", 17U);
    }

    protected override void DoLoadingForGameType(
      GameTypeLoadingStates gameTypeLoadingState,
      out GameTypeLoadingStates nextState)
    {
      nextState = GameTypeLoadingStates.None;
      switch (gameTypeLoadingState)
      {
        case GameTypeLoadingStates.InitializeFirstStep:
          this.CurrentGame.Initialize();
          nextState = GameTypeLoadingStates.WaitSecondStep;
          break;
        case GameTypeLoadingStates.WaitSecondStep:
          nextState = GameTypeLoadingStates.LoadVisualsThirdState;
          break;
        case GameTypeLoadingStates.LoadVisualsThirdState:
          nextState = GameTypeLoadingStates.PostInitializeFourthState;
          break;
      }
    }

    public override void OnDestroy()
    {
    }

    public override void OnStateChanged(GameState oldState)
    {
    }
  }
}
