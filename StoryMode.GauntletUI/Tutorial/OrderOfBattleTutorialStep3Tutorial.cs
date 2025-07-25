using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000036 RID: 54
	public class OrderOfBattleTutorialStep3Tutorial : TutorialItemBase
	{
		// Token: 0x0600010E RID: 270 RVA: 0x00004530 File Offset: 0x00002730
		public OrderOfBattleTutorialStep3Tutorial()
		{
			base.Type = "OrderOfBattleTutorialStep3";
			base.Placement = TutorialItemVM.ItemPlacements.Center;
			base.HighlightedVisualElementID = "AssignCaptain";
			base.MouseRequired = false;
		}

		// Token: 0x0600010F RID: 271 RVA: 0x0000455C File Offset: 0x0000275C
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x06000110 RID: 272 RVA: 0x0000455F File Offset: 0x0000275F
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.IsOrderOfBattleOpenAndReady && !TutorialHelper.IsPlayerEncounterLeader && TutorialHelper.CanPlayerAssignHimselfToFormation;
		}

		// Token: 0x06000111 RID: 273 RVA: 0x00004576 File Offset: 0x00002776
		public override void OnOrderOfBattleHeroAssignedToFormation(OrderOfBattleHeroAssignedToFormationEvent obj)
		{
			if (!TutorialHelper.IsPlayerEncounterLeader)
			{
				this._playerAssignedACaptainToFormationInOoB = (obj.AssignedHero == Agent.Main);
			}
		}

		// Token: 0x06000112 RID: 274 RVA: 0x00004592 File Offset: 0x00002792
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerAssignedACaptainToFormationInOoB;
		}

		// Token: 0x04000053 RID: 83
		private bool _playerAssignedACaptainToFormationInOoB;
	}
}
