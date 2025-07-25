using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200000E RID: 14
	public class ChoosingSkillFocusStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000041 RID: 65 RVA: 0x00002775 File Offset: 0x00000975
		public ChoosingSkillFocusStep2Tutorial()
		{
			base.Type = "ChoosingSkillFocusStep2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "AddFocusButton";
			base.MouseRequired = true;
		}

		// Token: 0x06000042 RID: 66 RVA: 0x000027A1 File Offset: 0x000009A1
		public override bool IsConditionsMetForCompletion()
		{
			return this._focusAdded;
		}

		// Token: 0x06000043 RID: 67 RVA: 0x000027A9 File Offset: 0x000009A9
		public override void OnFocusAddedByPlayer(FocusAddedByPlayerEvent obj)
		{
			this._focusAdded = true;
		}

		// Token: 0x06000044 RID: 68 RVA: 0x000027B2 File Offset: 0x000009B2
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.CharacterScreen;
		}

		// Token: 0x06000045 RID: 69 RVA: 0x000027B5 File Offset: 0x000009B5
		public override bool IsConditionsMetForActivation()
		{
			return Hero.MainHero.HeroDeveloper.UnspentFocusPoints > 1 && TutorialHelper.CurrentContext == TutorialContexts.CharacterScreen;
		}

		// Token: 0x04000011 RID: 17
		private bool _focusAdded;
	}
}
