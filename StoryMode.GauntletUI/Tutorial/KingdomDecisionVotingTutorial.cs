using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003C RID: 60
	public class KingdomDecisionVotingTutorial : TutorialItemBase
	{
		// Token: 0x06000130 RID: 304 RVA: 0x000047B2 File Offset: 0x000029B2
		public KingdomDecisionVotingTutorial()
		{
			base.Type = "KingdomDecisionVotingTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Left;
			base.HighlightedVisualElementID = "DecisionOptions";
			base.MouseRequired = false;
		}

		// Token: 0x06000131 RID: 305 RVA: 0x000047DE File Offset: 0x000029DE
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.KingdomScreen;
		}

		// Token: 0x06000132 RID: 306 RVA: 0x000047E1 File Offset: 0x000029E1
		public override void OnPlayerSelectedAKingdomDecisionOption(PlayerSelectedAKingdomDecisionOptionEvent obj)
		{
			this._playerSelectedAnOption = true;
		}

		// Token: 0x06000133 RID: 307 RVA: 0x000047EA File Offset: 0x000029EA
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.IsKingdomDecisionPanelActiveAndHasOptions;
		}

		// Token: 0x06000134 RID: 308 RVA: 0x000047F1 File Offset: 0x000029F1
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerSelectedAnOption;
		}

		// Token: 0x0400005D RID: 93
		private bool _playerSelectedAnOption;
	}
}
