using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000032 RID: 50
	public class EncyclopediaSortTutorial : TutorialItemBase
	{
		// Token: 0x060000F8 RID: 248 RVA: 0x000041F3 File Offset: 0x000023F3
		public EncyclopediaSortTutorial()
		{
			base.Type = "EncyclopediaSortTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "EncyclopediaSortButton";
			base.MouseRequired = false;
		}

		// Token: 0x060000F9 RID: 249 RVA: 0x0000421F File Offset: 0x0000241F
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000FA RID: 250 RVA: 0x00004224 File Offset: 0x00002424
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
				Game.Current.EventManager.RegisterEvent<OnEncyclopediaListSortedEvent>(new Action<OnEncyclopediaListSortedEvent>(this.OnSortClicked));
			}
			else if (!this._isActive && isActive)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaListSortedEvent>(new Action<OnEncyclopediaListSortedEvent>(this.OnSortClicked));
			}
			return this._isActive;
		}

		// Token: 0x060000FB RID: 251 RVA: 0x000042AA File Offset: 0x000024AA
		private void OnSortClicked(OnEncyclopediaListSortedEvent evnt)
		{
			this._isSortClicked = true;
		}

		// Token: 0x060000FC RID: 252 RVA: 0x000042B3 File Offset: 0x000024B3
		public override bool IsConditionsMetForCompletion()
		{
			if (this._isActive && this._isSortClicked)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaListSortedEvent>(new Action<OnEncyclopediaListSortedEvent>(this.OnSortClicked));
				return true;
			}
			return false;
		}

		// Token: 0x0400004A RID: 74
		private bool _isActive;

		// Token: 0x0400004B RID: 75
		private bool _isSortClicked;
	}
}
