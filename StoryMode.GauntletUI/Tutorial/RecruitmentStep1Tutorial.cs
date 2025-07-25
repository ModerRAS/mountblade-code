using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000014 RID: 20
	public class RecruitmentStep1Tutorial : TutorialItemBase
	{
		// Token: 0x0600005F RID: 95 RVA: 0x00002BB5 File Offset: 0x00000DB5
		public RecruitmentStep1Tutorial()
		{
			base.Type = "RecruitmentTutorialStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "storymode_tutorial_village_recruit";
			base.MouseRequired = true;
		}

		// Token: 0x06000060 RID: 96 RVA: 0x00002BE1 File Offset: 0x00000DE1
		public override bool IsConditionsMetForCompletion()
		{
			return this._recruitmentOpened;
		}

		// Token: 0x06000061 RID: 97 RVA: 0x00002BE9 File Offset: 0x00000DE9
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._recruitmentOpened = (obj.NewContext == TutorialContexts.RecruitmentWindow);
		}

		// Token: 0x06000062 RID: 98 RVA: 0x00002BFA File Offset: 0x00000DFA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000063 RID: 99 RVA: 0x00002BFD File Offset: 0x00000DFD
		public override bool IsConditionsMetForActivation()
		{
			return !TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.CurrentContext == TutorialContexts.MapWindow && TutorialHelper.PlayerCanRecruit && !Settlement.CurrentSettlement.MapFaction.IsAtWarWith(MobileParty.MainParty.MapFaction);
		}

		// Token: 0x04000017 RID: 23
		private bool _recruitmentOpened;
	}
}
