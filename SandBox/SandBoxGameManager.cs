// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxGameManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterCreationContent;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.SaveSystem.Load;

#nullable disable
namespace SandBox
{
  public class SandBoxGameManager : MBGameManager
  {
    private bool _loadingSavedGame;
    private LoadResult _loadedGameResult;

    public SandBoxGameManager() => this._loadingSavedGame = false;

    public SandBoxGameManager(LoadResult loadedGameResult)
    {
      this._loadingSavedGame = true;
      this._loadedGameResult = loadedGameResult;
    }

    public override void OnGameEnd(Game game)
    {
      MBDebug.SetErrorReportScene((Scene) null);
      base.OnGameEnd(game);
    }

    protected override void DoLoadingForGameManager(
      GameManagerLoadingSteps gameManagerLoadingStep,
      out GameManagerLoadingSteps nextStep)
    {
      nextStep = GameManagerLoadingSteps.None;
      switch (gameManagerLoadingStep)
      {
        case GameManagerLoadingSteps.PreInitializeZerothStep:
          nextStep = GameManagerLoadingSteps.FirstInitializeFirstStep;
          break;
        case GameManagerLoadingSteps.FirstInitializeFirstStep:
          MBGameManager.LoadModuleData(this._loadingSavedGame);
          nextStep = GameManagerLoadingSteps.WaitSecondStep;
          break;
        case GameManagerLoadingSteps.WaitSecondStep:
          if (!this._loadingSavedGame)
            MBGameManager.StartNewGame();
          nextStep = GameManagerLoadingSteps.SecondInitializeThirdState;
          break;
        case GameManagerLoadingSteps.SecondInitializeThirdState:
          MBGlobals.InitializeReferences();
          if (!this._loadingSavedGame)
          {
            MBDebug.Print("Initializing new game begin...");
            Campaign campaign = new Campaign(CampaignGameMode.Campaign);
            Game.CreateGame((TaleWorlds.Core.GameType) campaign, (GameManagerBase) this);
            campaign.SetLoadingParameters(Campaign.GameLoadingType.NewCampaign);
            MBDebug.Print("Initializing new game end...");
          }
          else
          {
            MBDebug.Print("Initializing saved game begin...");
            ((Campaign) Game.LoadSaveGame(this._loadedGameResult, (GameManagerBase) this).GameType).SetLoadingParameters(Campaign.GameLoadingType.SavedCampaign);
            this._loadedGameResult = (LoadResult) null;
            Common.MemoryCleanupGC();
            MBDebug.Print("Initializing saved game end...");
          }
          Game.Current.DoLoading();
          nextStep = GameManagerLoadingSteps.PostInitializeFourthState;
          break;
        case GameManagerLoadingSteps.PostInitializeFourthState:
          bool flag = true;
          foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) Module.CurrentModule.SubModules)
            flag = flag && subModule.DoLoading(Game.Current);
          nextStep = flag ? GameManagerLoadingSteps.FinishLoadingFifthStep : GameManagerLoadingSteps.PostInitializeFourthState;
          break;
        case GameManagerLoadingSteps.FinishLoadingFifthStep:
          nextStep = Game.Current.DoLoading() ? GameManagerLoadingSteps.None : GameManagerLoadingSteps.FinishLoadingFifthStep;
          break;
      }
    }

    public override void OnAfterCampaignStart(Game game)
    {
    }

    public override void OnLoadFinished()
    {
      if (!this._loadingSavedGame)
      {
        MBDebug.Print("Switching to menu window...");
        if (!Game.Current.IsDevelopmentMode)
        {
          VideoPlaybackState state = Game.Current.GameStateManager.CreateState<VideoPlaybackState>();
          string str = ModuleHelper.GetModuleFullPath("SandBox") + "Videos/CampaignIntro/";
          string subtitleFileBasePath = str + "campaign_intro";
          string videoPath = str + "campaign_intro.ivf";
          string audioPath = str + "campaign_intro.ogg";
          state.SetStartingParameters(videoPath, audioPath, subtitleFileBasePath);
          state.SetOnVideoFinisedDelegate(new Action(this.LaunchSandboxCharacterCreation));
          Game.Current.GameStateManager.CleanAndPushState((TaleWorlds.Core.GameState) state);
        }
        else
          this.LaunchSandboxCharacterCreation();
      }
      else
      {
        Game.Current.GameStateManager.OnSavedGameLoadFinished();
        Game.Current.GameStateManager.CleanAndPushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<MapState>());
        string gameMenuId = Game.Current.GameStateManager.ActiveState is MapState activeState ? activeState.GameMenuId : (string) null;
        if (!string.IsNullOrEmpty(gameMenuId))
        {
          PlayerEncounter.Current?.OnLoad();
          Campaign.Current.GameMenuManager.SetNextMenu(gameMenuId);
        }
        PartyBase.MainParty.SetVisualAsDirty();
        Campaign.Current.CampaignInformationManager.OnGameLoaded();
        foreach (Settlement settlement in (List<Settlement>) Settlement.All)
          settlement.Party.SetLevelMaskIsDirty();
        CampaignEventDispatcher.Instance.OnGameLoadFinished();
        activeState?.OnLoadingFinished();
      }
      this.IsLoaded = true;
    }

    private void LaunchSandboxCharacterCreation()
    {
      Game.Current.GameStateManager.CleanAndPushState((TaleWorlds.Core.GameState) Game.Current.GameStateManager.CreateState<CharacterCreationState>((object) new SandboxCharacterCreationContent()));
    }

    [CrashInformationCollector.CrashInformationProvider]
    private static CrashInformationCollector.CrashInformation UsedModuleInfoCrashCallback()
    {
      if (Campaign.Current?.PreviouslyUsedModules == null)
        return (CrashInformationCollector.CrashInformation) null;
      string[] moduleNames = SandBoxManager.Instance.ModuleManager.ModuleNames;
      MBList<(string, string)> lines = new MBList<(string, string)>();
      foreach (string previouslyUsedModule in (List<string>) Campaign.Current.PreviouslyUsedModules)
      {
        string module = previouslyUsedModule;
        bool flag = ((IReadOnlyList<string>) moduleNames).FindIndex<string>((Func<string, bool>) (x => x == module)) != -1;
        lines.Add((module, flag ? "1" : "0"));
      }
      return new CrashInformationCollector.CrashInformation("Used Mods", (MBReadOnlyList<(string, string)>) lines);
    }

    [CrashInformationCollector.CrashInformationProvider]
    private static CrashInformationCollector.CrashInformation UsedGameVersionsCallback()
    {
      if (Campaign.Current?.UsedGameVersions == null)
        return (CrashInformationCollector.CrashInformation) null;
      MBList<(string, string)> lines = new MBList<(string, string)>();
      for (int index = 0; index < Campaign.Current.UsedGameVersions.Count; ++index)
      {
        string str = "";
        if (index < Campaign.Current.UsedGameVersions.Count - 1 && ApplicationVersion.FromString(Campaign.Current.UsedGameVersions[index]) > ApplicationVersion.FromString(Campaign.Current.UsedGameVersions[index + 1]))
          str = "Error";
        lines.Add((Campaign.Current.UsedGameVersions[index], str));
      }
      return new CrashInformationCollector.CrashInformation("Used Game Versions", (MBReadOnlyList<(string, string)>) lines);
    }
  }
}
