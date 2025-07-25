using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000033 RID: 51
	public class EncyclopediaFogOfWarTutorial : TutorialItemBase
	{
		// Token: 0x060000FD RID: 253 RVA: 0x000042E3 File Offset: 0x000024E3
		public EncyclopediaFogOfWarTutorial()
		{
			base.Type = "EncyclopediaFogOfWarTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "";
			base.MouseRequired = false;
		}

		// Token: 0x060000FE RID: 254 RVA: 0x00004310 File Offset: 0x00002510
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			if (!this._registeredEvents && TutorialHelper.CurrentContext == TutorialContexts.EncyclopediaWindow)
			{
				Game.Current.EventManager.RegisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnLimitedInformationPageOpened));
				this._registeredEvents = true;
			}
			else if (this._registeredEvents && TutorialHelper.CurrentContext != TutorialContexts.EncyclopediaWindow)
			{
				Game.Current.EventManager.UnregisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnLimitedInformationPageOpened));
				this._registeredEvents = false;
			}
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000FF RID: 255 RVA: 0x00004387 File Offset: 0x00002587
		public override void OnTutorialContextChanged(TutorialContextChangedEvent evnt)
		{
			base.OnTutorialContextChanged(evnt);
			if (this._registeredEvents && evnt.NewContext != TutorialContexts.EncyclopediaWindow)
			{
				Game.Current.EventManager.UnregisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnLimitedInformationPageOpened));
				this._registeredEvents = false;
			}
		}

		// Token: 0x06000100 RID: 256 RVA: 0x000043C4 File Offset: 0x000025C4
		public override bool IsConditionsMetForActivation()
		{
			if (!this._registeredEvents)
			{
				Game.Current.EventManager.RegisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnLimitedInformationPageOpened));
				this._registeredEvents = true;
			}
			return this._isActive;
		}

		// Token: 0x06000101 RID: 257 RVA: 0x000043F8 File Offset: 0x000025F8
		public override bool IsConditionsMetForCompletion()
		{
			if (!this._lastActiveState && this._isActive)
			{
				this._activatedPage = TutorialHelper.CurrentEncyclopediaPage;
			}
			if (this._lastActiveState && this._isActive && this._activatedPage != TutorialHelper.CurrentEncyclopediaPage)
			{
				Game.Current.EventManager.UnregisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnLimitedInformationPageOpened));
				return true;
			}
			this._lastActiveState = this._isActive;
			return false;
		}

		// Token: 0x06000102 RID: 258 RVA: 0x00004467 File Offset: 0x00002667
		private void OnLimitedInformationPageOpened(EncyclopediaPageChangedEvent evnt)
		{
			if (evnt.NewPageHasHiddenInformation)
			{
				this._isActive = true;
			}
		}

		// Token: 0x0400004C RID: 76
		private EncyclopediaPages _activatedPage;

		// Token: 0x0400004D RID: 77
		private bool _registeredEvents;

		// Token: 0x0400004E RID: 78
		private bool _lastActiveState;

		// Token: 0x0400004F RID: 79
		private bool _isActive;
	}
}
