using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000035 RID: 53
	public class OrderOfBattleTutorialStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000108 RID: 264 RVA: 0x000044C8 File Offset: 0x000026C8
		public OrderOfBattleTutorialStep2Tutorial()
		{
			base.Type = "OrderOfBattleTutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "CreateFormation";
			base.MouseRequired = false;
		}

		// Token: 0x06000109 RID: 265 RVA: 0x000044F4 File Offset: 0x000026F4
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x0600010A RID: 266 RVA: 0x000044F7 File Offset: 0x000026F7
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.IsOrderOfBattleOpenAndReady && TutorialHelper.IsPlayerEncounterLeader;
		}

		// Token: 0x0600010B RID: 267 RVA: 0x00004507 File Offset: 0x00002707
		public override void OnOrderOfBattleFormationClassChanged(OrderOfBattleFormationClassChangedEvent obj)
		{
			this._playerChangedAFormationType = true;
		}

		// Token: 0x0600010C RID: 268 RVA: 0x00004510 File Offset: 0x00002710
		public override void OnOrderOfBattleFormationWeightChanged(OrderOfBattleFormationWeightChangedEvent obj)
		{
			this._playerChangedAFormationWeight = this._playerChangedAFormationType;
		}

		// Token: 0x0600010D RID: 269 RVA: 0x0000451E File Offset: 0x0000271E
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerChangedAFormationType && this._playerChangedAFormationWeight;
		}

		// Token: 0x04000051 RID: 81
		private bool _playerChangedAFormationType;

		// Token: 0x04000052 RID: 82
		private bool _playerChangedAFormationWeight;
	}
}
