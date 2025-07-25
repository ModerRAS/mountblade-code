using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000031 RID: 49
	public class EncyclopediaFiltersTutorial : TutorialItemBase
	{
		// Token: 0x060000F3 RID: 243 RVA: 0x00004102 File Offset: 0x00002302
		public EncyclopediaFiltersTutorial()
		{
			base.Type = "EncyclopediaFiltersTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "EncyclopediaFiltersContainer";
			base.MouseRequired = false;
		}

		// Token: 0x060000F4 RID: 244 RVA: 0x0000412E File Offset: 0x0000232E
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000F5 RID: 245 RVA: 0x00004134 File Offset: 0x00002334
		public override bool IsConditionsMetForActivation()
		{
			bool isActive = this._isActive;
			EncyclopediaPages currentEncyclopediaPage = TutorialHelper.CurrentEncyclopediaPage;
			if (currentEncyclopediaPage - 2 <= 5)
			{
				this._isActive = true;
			}
			else
			{
				this._isActive = false;
			}
			if (!isActive && this._isActive)
			{
				Game.Current.EventManager.RegisterEvent<OnEncyclopediaFilterActivatedEvent>(new Action<OnEncyclopediaFilterActivatedEvent>(this.OnFilterClicked));
			}
			else if (!this._isActive && isActive)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaFilterActivatedEvent>(new Action<OnEncyclopediaFilterActivatedEvent>(this.OnFilterClicked));
			}
			return this._isActive;
		}

		// Token: 0x060000F6 RID: 246 RVA: 0x000041BA File Offset: 0x000023BA
		private void OnFilterClicked(OnEncyclopediaFilterActivatedEvent evnt)
		{
			this._isAnyFilterSelected = true;
		}

		// Token: 0x060000F7 RID: 247 RVA: 0x000041C3 File Offset: 0x000023C3
		public override bool IsConditionsMetForCompletion()
		{
			if (this._isActive && this._isAnyFilterSelected)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaFilterActivatedEvent>(new Action<OnEncyclopediaFilterActivatedEvent>(this.OnFilterClicked));
				return true;
			}
			return false;
		}

		// Token: 0x04000048 RID: 72
		private bool _isActive;

		// Token: 0x04000049 RID: 73
		private bool _isAnyFilterSelected;
	}
}
