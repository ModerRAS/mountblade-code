using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003A RID: 58
	public class CrimeTutorial : TutorialItemBase
	{
		// Token: 0x06000126 RID: 294 RVA: 0x00004704 File Offset: 0x00002904
		public CrimeTutorial()
		{
			base.Type = "CrimeTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "CrimeLabel";
			base.MouseRequired = false;
		}

		// Token: 0x06000127 RID: 295 RVA: 0x00004730 File Offset: 0x00002930
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000128 RID: 296 RVA: 0x00004733 File Offset: 0x00002933
		public override void OnCrimeValueInspectedInSettlementOverlay(SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent obj)
		{
			this._inspectedCrimeValueItem = true;
		}

		// Token: 0x06000129 RID: 297 RVA: 0x0000473C File Offset: 0x0000293C
		public override bool IsConditionsMetForActivation()
		{
			if (TutorialHelper.TownMenuIsOpen)
			{
				IFaction mapFaction = Settlement.CurrentSettlement.MapFaction;
				return mapFaction != null && mapFaction.MainHeroCrimeRating > 0f;
			}
			return false;
		}

		// Token: 0x0600012A RID: 298 RVA: 0x00004763 File Offset: 0x00002963
		public override bool IsConditionsMetForCompletion()
		{
			return this._inspectedCrimeValueItem;
		}

		// Token: 0x0400005B RID: 91
		private bool _inspectedCrimeValueItem;
	}
}
