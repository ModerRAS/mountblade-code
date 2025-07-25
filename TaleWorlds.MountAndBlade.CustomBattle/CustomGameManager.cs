using System;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Multiplayer;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000012 RID: 18
	public class CustomGameManager : MBGameManager
	{
		// Token: 0x060000FA RID: 250 RVA: 0x000082B4 File Offset: 0x000064B4
		protected override void DoLoadingForGameManager(GameManagerLoadingSteps gameManagerLoadingStep, out GameManagerLoadingSteps nextStep)
		{
			nextStep = GameManagerLoadingSteps.None;
			switch (gameManagerLoadingStep)
			{
			case GameManagerLoadingSteps.PreInitializeZerothStep:
				MBGameManager.LoadModuleData(false);
				MBGlobals.InitializeReferences();
				Game.CreateGame(new CustomGame(), this).DoLoading();
				nextStep = GameManagerLoadingSteps.FirstInitializeFirstStep;
				return;
			case GameManagerLoadingSteps.FirstInitializeFirstStep:
			{
				bool flag = true;
				foreach (MBSubModuleBase mbsubModuleBase in Module.CurrentModule.SubModules)
				{
					flag = (flag && mbsubModuleBase.DoLoading(Game.Current));
				}
				nextStep = (flag ? GameManagerLoadingSteps.WaitSecondStep : GameManagerLoadingSteps.FirstInitializeFirstStep);
				return;
			}
			case GameManagerLoadingSteps.WaitSecondStep:
				MBGameManager.StartNewGame();
				nextStep = GameManagerLoadingSteps.SecondInitializeThirdState;
				return;
			case GameManagerLoadingSteps.SecondInitializeThirdState:
				nextStep = (Game.Current.DoLoading() ? GameManagerLoadingSteps.PostInitializeFourthState : GameManagerLoadingSteps.SecondInitializeThirdState);
				return;
			case GameManagerLoadingSteps.PostInitializeFourthState:
				nextStep = GameManagerLoadingSteps.FinishLoadingFifthStep;
				return;
			case GameManagerLoadingSteps.FinishLoadingFifthStep:
				nextStep = GameManagerLoadingSteps.None;
				return;
			default:
				return;
			}
		}

		// Token: 0x060000FB RID: 251 RVA: 0x00008388 File Offset: 0x00006588
		public override void OnAfterCampaignStart(Game game)
		{
			MultiplayerMain.Initialize(new GameNetworkHandler());
		}

		// Token: 0x060000FC RID: 252 RVA: 0x00008394 File Offset: 0x00006594
		public override void OnLoadFinished()
		{
			base.OnLoadFinished();
			Game.Current.GameStateManager.CleanAndPushState(Game.Current.GameStateManager.CreateState<CustomBattleState>(), 0);
		}
	}
}
