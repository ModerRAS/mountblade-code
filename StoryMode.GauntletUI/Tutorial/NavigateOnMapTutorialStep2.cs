using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000025 RID: 37
	public class NavigateOnMapTutorialStep2 : TutorialItemBase
	{
		// Token: 0x060000B7 RID: 183 RVA: 0x00003774 File Offset: 0x00001974
		public NavigateOnMapTutorialStep2()
		{
			base.Type = "NavigateOnMapTutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "village_ES3_2";
			base.MouseRequired = true;
		}

		// Token: 0x060000B8 RID: 184 RVA: 0x000037A0 File Offset: 0x000019A0
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000B9 RID: 185 RVA: 0x000037A3 File Offset: 0x000019A3
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.MapWindow;
		}

		// Token: 0x060000BA RID: 186 RVA: 0x000037AD File Offset: 0x000019AD
		public override bool IsConditionsMetForCompletion()
		{
			MobileParty mainParty = MobileParty.MainParty;
			string a;
			if (mainParty == null)
			{
				a = null;
			}
			else
			{
				Settlement targetSettlement = mainParty.TargetSettlement;
				a = ((targetSettlement != null) ? targetSettlement.StringId : null);
			}
			return a == "village_ES3_2";
		}

		// Token: 0x04000034 RID: 52
		private const string TargetQuestVillage = "village_ES3_2";
	}
}
