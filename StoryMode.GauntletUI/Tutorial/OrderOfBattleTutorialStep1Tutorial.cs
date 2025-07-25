using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000034 RID: 52
	public class OrderOfBattleTutorialStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000103 RID: 259 RVA: 0x00004478 File Offset: 0x00002678
		public OrderOfBattleTutorialStep1Tutorial()
		{
			base.Type = "OrderOfBattleTutorialStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Center;
			base.HighlightedVisualElementID = "AssignCaptain";
			base.MouseRequired = false;
		}

		// Token: 0x06000104 RID: 260 RVA: 0x000044A4 File Offset: 0x000026A4
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x06000105 RID: 261 RVA: 0x000044A7 File Offset: 0x000026A7
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.IsOrderOfBattleOpenAndReady && TutorialHelper.IsPlayerEncounterLeader;
		}

		// Token: 0x06000106 RID: 262 RVA: 0x000044B7 File Offset: 0x000026B7
		public override void OnOrderOfBattleHeroAssignedToFormation(OrderOfBattleHeroAssignedToFormationEvent obj)
		{
			this._playerAssignedACaptainToFormationInOoB = true;
		}

		// Token: 0x06000107 RID: 263 RVA: 0x000044C0 File Offset: 0x000026C0
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerAssignedACaptainToFormationInOoB;
		}

		// Token: 0x04000050 RID: 80
		private bool _playerAssignedACaptainToFormationInOoB;
	}
}
