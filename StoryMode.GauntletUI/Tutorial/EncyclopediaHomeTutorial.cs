using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002D RID: 45
	public class EncyclopediaHomeTutorial : TutorialItemBase
	{
		// Token: 0x060000E1 RID: 225 RVA: 0x00003DC0 File Offset: 0x00001FC0
		public EncyclopediaHomeTutorial()
		{
			base.Type = "EncyclopediaHomeTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
		}

		// Token: 0x060000E2 RID: 226 RVA: 0x00003DEC File Offset: 0x00001FEC
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000E3 RID: 227 RVA: 0x00003DF0 File Offset: 0x00001FF0
		public override bool IsConditionsMetForActivation()
		{
			this._isActive = (GauntletTutorialSystem.Current.CurrentEncyclopediaPageContext == 1);
			return this._isActive;
		}

		// Token: 0x060000E4 RID: 228 RVA: 0x00003E0B File Offset: 0x0000200B
		public override bool IsConditionsMetForCompletion()
		{
			return this._isActive && GauntletTutorialSystem.Current.CurrentEncyclopediaPageContext != 1;
		}

		// Token: 0x0400003F RID: 63
		private bool _isActive;
	}
}
