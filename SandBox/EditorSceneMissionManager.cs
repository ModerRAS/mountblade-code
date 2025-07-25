// Decompiled with JetBrains decompiler
// Type: SandBox.EditorSceneMissionManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public class EditorSceneMissionManager : MBGameManager
  {
    private string _missionName;
    private string _sceneName;
    private string _levels;
    private bool _forReplay;
    private string _replayFileName;
    private bool _isRecord;
    private float _startTime;
    private float _endTime;

    public EditorSceneMissionManager(
      string missionName,
      string sceneName,
      string levels,
      bool forReplay,
      string replayFileName,
      bool isRecord,
      float startTime,
      float endTime)
    {
      this._missionName = missionName;
      this._sceneName = sceneName;
      this._levels = levels;
      this._forReplay = forReplay;
      this._replayFileName = replayFileName;
      this._isRecord = isRecord;
      this._startTime = startTime;
      this._endTime = endTime;
    }

    protected override void DoLoadingForGameManager(
      GameManagerLoadingSteps gameManagerLoadingSteps,
      out GameManagerLoadingSteps nextStep)
    {
      nextStep = GameManagerLoadingSteps.None;
      switch (gameManagerLoadingSteps)
      {
        case GameManagerLoadingSteps.PreInitializeZerothStep:
          MBGameManager.LoadModuleData(false);
          MBDebug.Print("Game creating...");
          MBGlobals.InitializeReferences();
          Game game;
          if (this._forReplay)
          {
            game = Game.CreateGame((TaleWorlds.Core.GameType) new EditorGame(), (GameManagerBase) this);
          }
          else
          {
            Campaign campaign = new Campaign(CampaignGameMode.Tutorial);
            game = Game.CreateGame((TaleWorlds.Core.GameType) campaign, (GameManagerBase) this);
            campaign.SetLoadingParameters(Campaign.GameLoadingType.Tutorial);
          }
          game.DoLoading();
          nextStep = GameManagerLoadingSteps.FirstInitializeFirstStep;
          break;
        case GameManagerLoadingSteps.FirstInitializeFirstStep:
          bool flag = true;
          foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) Module.CurrentModule.SubModules)
            flag = flag && subModule.DoLoading(Game.Current);
          nextStep = flag ? GameManagerLoadingSteps.WaitSecondStep : GameManagerLoadingSteps.FirstInitializeFirstStep;
          break;
        case GameManagerLoadingSteps.WaitSecondStep:
          MBGameManager.StartNewGame();
          nextStep = GameManagerLoadingSteps.SecondInitializeThirdState;
          break;
        case GameManagerLoadingSteps.SecondInitializeThirdState:
          nextStep = Game.Current.DoLoading() ? GameManagerLoadingSteps.PostInitializeFourthState : GameManagerLoadingSteps.SecondInitializeThirdState;
          break;
        case GameManagerLoadingSteps.PostInitializeFourthState:
          nextStep = GameManagerLoadingSteps.FinishLoadingFifthStep;
          break;
        case GameManagerLoadingSteps.FinishLoadingFifthStep:
          nextStep = GameManagerLoadingSteps.None;
          break;
      }
    }

    public override void OnAfterCampaignStart(Game game)
    {
    }

    public override void OnLoadFinished()
    {
      base.OnLoadFinished();
      MBGlobals.InitializeReferences();
      if (!this._forReplay)
        Campaign.Current.InitializeGamePlayReferences();
      Module.CurrentModule.StartMissionForEditorAux(this._missionName, this._sceneName, this._levels, this._forReplay, this._replayFileName, this._isRecord);
      MissionState.Current.MissionFastForwardAmount = this._startTime;
      MissionState.Current.MissionEndTime = this._endTime;
    }
  }
}
