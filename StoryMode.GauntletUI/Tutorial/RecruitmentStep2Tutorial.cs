using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000015 RID: 21
	public class RecruitmentStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000064 RID: 100 RVA: 0x00002C33 File Offset: 0x00000E33
		public RecruitmentStep2Tutorial()
		{
			base.Type = "RecruitmentTutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "AvailableTroops";
			base.MouseRequired = true;
		}

		// Token: 0x06000065 RID: 101 RVA: 0x00002C5F File Offset: 0x00000E5F
		public override bool IsConditionsMetForCompletion()
		{
			return this._recruitedTroopCount >= TutorialHelper.RecruitTroopAmount;
		}

		// Token: 0x06000066 RID: 102 RVA: 0x00002C71 File Offset: 0x00000E71
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.RecruitmentWindow;
		}

		// Token: 0x06000067 RID: 103 RVA: 0x00002C74 File Offset: 0x00000E74
		public override void OnPlayerRecruitedUnit(CharacterObject obj, int count)
		{
			this._recruitedTroopCount += count;
		}

		// Token: 0x06000068 RID: 104 RVA: 0x00002C84 File Offset: 0x00000E84
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.PlayerCanRecruit && TutorialHelper.CurrentContext == TutorialContexts.RecruitmentWindow;
		}

		// Token: 0x04000018 RID: 24
		private int _recruitedTroopCount;
	}
}
