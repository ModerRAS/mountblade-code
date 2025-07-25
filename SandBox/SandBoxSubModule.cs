// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxSubModule
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using SandBox.CampaignBehaviors;
using SandBox.GameComponents;
using SandBox.Issues;
using SandBox.Objects;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;

#nullable disable
namespace SandBox
{
  public class SandBoxSubModule : MBSubModuleBase
  {
    private bool _initialized;
    private bool _latestSaveLoaded;

    protected override void OnSubModuleLoad()
    {
      base.OnSubModuleLoad();
      Module.CurrentModule.SetEditorMissionTester((IEditorMissionTester) new SandBoxEditorMissionTester());
    }

    protected override void InitializeGameStarter(Game game, IGameStarter gameStarterObject)
    {
      if (!(game.GameType is Campaign))
        return;
      gameStarterObject.AddModel((GameModel) new SandboxAgentStatCalculateModel());
      gameStarterObject.AddModel((GameModel) new SandboxStrikeMagnitudeModel());
      gameStarterObject.AddModel((GameModel) new SandboxAgentApplyDamageModel());
      gameStarterObject.AddModel((GameModel) new SandboxMissionDifficultyModel());
      gameStarterObject.AddModel((GameModel) new SandboxApplyWeatherEffectsModel());
      gameStarterObject.AddModel((GameModel) new SandboxAutoBlockModel());
      gameStarterObject.AddModel((GameModel) new SandboxAgentDecideKilledOrUnconsciousModel());
      gameStarterObject.AddModel((GameModel) new SandboxBattleBannerBearersModel());
      gameStarterObject.AddModel((GameModel) new DefaultFormationArrangementModel());
      gameStarterObject.AddModel((GameModel) new SandboxBattleMoraleModel());
      gameStarterObject.AddModel((GameModel) new SandboxBattleInitializationModel());
      gameStarterObject.AddModel((GameModel) new SandboxBattleSpawnModel());
      gameStarterObject.AddModel((GameModel) new DefaultDamageParticleModel());
      gameStarterObject.AddModel((GameModel) new DefaultItemPickupModel());
      if (!(gameStarterObject is CampaignGameStarter campaignGameStarter))
        return;
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new HideoutConversationsCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new AlleyCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new CommonTownsfolkCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new CompanionRolesCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new DefaultNotificationsCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new ClanMemberRolesCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new GuardsCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new SettlementMusiciansCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new BoardGameCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new WorkshopsCharactersCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new TradersCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new ArenaMasterCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new CommonVillagersCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new HeirSelectionCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new DefaultCutscenesCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new RivalGangMovingInIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new RuralNotableInnAndOutIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new FamilyFeudIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new NotableWantsDaughterFoundIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new TheSpyPartyIssueQuestBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new ProdigalSonIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new BarberCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new SnareTheWealthyIssueBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new RetirementCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new StatisticsCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new DumpIntegrityCampaignBehavior());
      campaignGameStarter.AddBehavior((CampaignBehaviorBase) new CaravanConversationsCampaignBehavior());
    }

    public override void OnCampaignStart(Game game, object starterObject)
    {
      if (!(game.GameType is Campaign gameType))
        return;
      SandBoxManager sandBoxManager = gameType.SandBoxManager;
      sandBoxManager.SandBoxMissionManager = (ISandBoxMissionManager) new SandBoxMissionManager();
      sandBoxManager.AgentBehaviorManager = (IAgentBehaviorManager) new AgentBehaviorManager();
      sandBoxManager.ModuleManager = (IModuleManager) new ModuleManager();
      sandBoxManager.SandBoxSaveManager = (ISaveManager) new SandBoxSaveManager();
    }

    private void OnRegisterTypes()
    {
      MBObjectManager.Instance.RegisterType<InstrumentData>("MusicInstrument", "MusicInstruments", 54U);
      MBObjectManager.Instance.RegisterType<SettlementMusicData>("MusicTrack", "MusicTracks", 55U);
      DefaultMusicInstrumentData musicInstrumentData = new DefaultMusicInstrumentData();
      MBObjectManager.Instance.LoadXML("MusicInstruments");
      MBObjectManager.Instance.LoadXML("MusicTracks");
    }

    public override void OnGameInitializationFinished(Game game)
    {
      if (!(game.GameType is Campaign gameType))
        return;
      gameType.CampaignMissionManager = (CampaignMission.ICampaignMissionManager) new CampaignMissionManager();
      gameType.MapSceneCreator = (IMapSceneCreator) new MapSceneCreator();
      gameType.EncyclopediaManager.CreateEncyclopediaPages();
      this.OnRegisterTypes();
    }

    public override void RegisterSubModuleObjects(bool isSavedCampaign)
    {
      Campaign.Current.SandBoxManager.InitializeSandboxXMLs(isSavedCampaign);
    }

    public override void AfterRegisterSubModuleObjects(bool isSavedCampaign)
    {
      Campaign.Current.SandBoxManager.InitializeCharactersAfterLoad(isSavedCampaign);
    }

    public override void OnInitialState()
    {
      base.OnInitialState();
      if (!Module.CurrentModule.StartupInfo.IsContinueGame || this._latestSaveLoaded)
        return;
      this._latestSaveLoaded = true;
      SaveGameFileInfo[] saveFiles = MBSaveLoad.GetSaveFiles();
      if (((IEnumerable<SaveGameFileInfo>) saveFiles).IsEmpty<SaveGameFileInfo>())
        return;
      SandBoxSaveHelper.TryLoadSave(((IEnumerable<SaveGameFileInfo>) saveFiles).MaxBy<SaveGameFileInfo, DateTime>((Func<SaveGameFileInfo, DateTime>) (s => s.MetaData.GetCreationTime())), new Action<LoadResult>(this.StartGame));
    }

    private void StartGame(LoadResult loadResult)
    {
      MBGameManager.StartNewGame((MBGameManager) new SandBoxGameManager(loadResult));
      MouseManager.ShowCursor(false);
    }

    public override void OnGameLoaded(Game game, object starterObject)
    {
      if (!(game.GameType is Campaign gameType))
        return;
      SandBoxManager sandBoxManager = gameType.SandBoxManager;
      sandBoxManager.SandBoxMissionManager = (ISandBoxMissionManager) new SandBoxMissionManager();
      sandBoxManager.AgentBehaviorManager = (IAgentBehaviorManager) new AgentBehaviorManager();
      sandBoxManager.ModuleManager = (IModuleManager) new ModuleManager();
      sandBoxManager.SandBoxSaveManager = (ISaveManager) new SandBoxSaveManager();
    }

    protected override void OnBeforeInitialModuleScreenSetAsRoot()
    {
      base.OnBeforeInitialModuleScreenSetAsRoot();
      if (this._initialized)
        return;
      MBSaveLoad.Initialize(Module.CurrentModule.GlobalTextManager);
      this._initialized = true;
    }

    public override void OnConfigChanged()
    {
      if (Campaign.Current == null)
        return;
      CampaignEventDispatcher.Instance.OnConfigChanged();
    }
  }
}
