using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002E RID: 46
	public class EncyclopediaPageTutorial : TutorialItemBase
	{
		// Token: 0x060000E5 RID: 229 RVA: 0x00003E27 File Offset: 0x00002027
		public EncyclopediaPageTutorial(string type, EncyclopediaPages activationPage, EncyclopediaPages alternateActivationPage)
		{
			base.Type = type;
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
			this._activationPage = activationPage;
			this._alternateActivationPage = alternateActivationPage;
		}

		// Token: 0x060000E6 RID: 230 RVA: 0x00003E5D File Offset: 0x0000205D
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000E7 RID: 231 RVA: 0x00003E64 File Offset: 0x00002064
		public override bool IsConditionsMetForActivation()
		{
			EncyclopediaPages currentEncyclopediaPageContext = GauntletTutorialSystem.Current.CurrentEncyclopediaPageContext;
			bool isActive = this._isActive;
			this._isActive = (currentEncyclopediaPageContext == this._activationPage || currentEncyclopediaPageContext == this._alternateActivationPage);
			if (!isActive && this._isActive)
			{
				this._lastActivatedPage = currentEncyclopediaPageContext;
			}
			return this._isActive;
		}

		// Token: 0x060000E8 RID: 232 RVA: 0x00003EB4 File Offset: 0x000020B4
		public override bool IsConditionsMetForCompletion()
		{
			if (!this._isActive)
			{
				return false;
			}
			EncyclopediaPages currentEncyclopediaPageContext = GauntletTutorialSystem.Current.CurrentEncyclopediaPageContext;
			if (this._lastActivatedPage == this._alternateActivationPage)
			{
				return currentEncyclopediaPageContext != this._alternateActivationPage;
			}
			return currentEncyclopediaPageContext != 9 && currentEncyclopediaPageContext != 2;
		}

		// Token: 0x04000040 RID: 64
		private bool _isActive;

		// Token: 0x04000041 RID: 65
		private readonly EncyclopediaPages _activationPage;

		// Token: 0x04000042 RID: 66
		private readonly EncyclopediaPages _alternateActivationPage;

		// Token: 0x04000043 RID: 67
		private EncyclopediaPages _lastActivatedPage;
	}
}
