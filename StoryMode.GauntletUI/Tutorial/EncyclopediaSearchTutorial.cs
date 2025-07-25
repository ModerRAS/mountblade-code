using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000030 RID: 48
	public class EncyclopediaSearchTutorial : TutorialItemBase
	{
		// Token: 0x060000EE RID: 238 RVA: 0x0000401E File Offset: 0x0000221E
		public EncyclopediaSearchTutorial()
		{
			base.Type = "EncyclopediaSearchTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "EncyclopediaSearchButton";
			base.MouseRequired = false;
		}

		// Token: 0x060000EF RID: 239 RVA: 0x0000404A File Offset: 0x0000224A
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000F0 RID: 240 RVA: 0x00004050 File Offset: 0x00002250
		public override bool IsConditionsMetForActivation()
		{
			bool isActive = this._isActive;
			this._isActive = (TutorialHelper.CurrentContext == TutorialContexts.EncyclopediaWindow);
			if (!isActive && this._isActive)
			{
				Game.Current.EventManager.RegisterEvent<OnEncyclopediaSearchActivatedEvent>(new Action<OnEncyclopediaSearchActivatedEvent>(this.OnEncyclopediaSearchBarUsed));
			}
			else if (!this._isActive && isActive)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaSearchActivatedEvent>(new Action<OnEncyclopediaSearchActivatedEvent>(this.OnEncyclopediaSearchBarUsed));
			}
			return this._isActive;
		}

		// Token: 0x060000F1 RID: 241 RVA: 0x000040C9 File Offset: 0x000022C9
		private void OnEncyclopediaSearchBarUsed(OnEncyclopediaSearchActivatedEvent evnt)
		{
			this._isSearchButtonPressed = true;
		}

		// Token: 0x060000F2 RID: 242 RVA: 0x000040D2 File Offset: 0x000022D2
		public override bool IsConditionsMetForCompletion()
		{
			if (this._isActive && this._isSearchButtonPressed)
			{
				Game.Current.EventManager.UnregisterEvent<OnEncyclopediaSearchActivatedEvent>(new Action<OnEncyclopediaSearchActivatedEvent>(this.OnEncyclopediaSearchBarUsed));
				return true;
			}
			return false;
		}

		// Token: 0x04000046 RID: 70
		private bool _isActive;

		// Token: 0x04000047 RID: 71
		private bool _isSearchButtonPressed;
	}
}
