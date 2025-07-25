// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.EditorGameManager
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class EditorGameManager : MBGameManager
  {
    protected override void DoLoadingForGameManager(
      GameManagerLoadingSteps gameManagerLoadingStep,
      out GameManagerLoadingSteps nextStep)
    {
      nextStep = GameManagerLoadingSteps.None;
      switch (gameManagerLoadingStep)
      {
        case GameManagerLoadingSteps.PreInitializeZerothStep:
          MBGameManager.LoadModuleData(false);
          MBGlobals.InitializeReferences();
          Game.CreateGame((TaleWorlds.Core.GameType) new EditorGame(), (GameManagerBase) this).DoLoading();
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

    public override void OnLoadFinished() => base.OnLoadFinished();
  }
}
