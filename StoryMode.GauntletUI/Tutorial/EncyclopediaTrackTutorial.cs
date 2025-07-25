using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200002F RID: 47
	public class EncyclopediaTrackTutorial : TutorialItemBase
	{
		// Token: 0x060000E9 RID: 233 RVA: 0x00003EFF File Offset: 0x000020FF
		public EncyclopediaTrackTutorial()
		{
			base.Type = "EncyclopediaTrackTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "EncyclopediaItemTrackButton";
			base.MouseRequired = false;
		}

		// Token: 0x060000EA RID: 234 RVA: 0x00003F2B File Offset: 0x0000212B
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.EncyclopediaWindow;
		}

		// Token: 0x060000EB RID: 235 RVA: 0x00003F30 File Offset: 0x00002130
		public override bool IsConditionsMetForActivation()
		{
			bool isActive = this._isActive;
			this._isActive = (TutorialHelper.CurrentEncyclopediaPage == 9);
			if (!isActive && this._isActive)
			{
				Game.Current.EventManager.RegisterEvent<PlayerToggleTrackSettlementFromEncyclopediaEvent>(new Action<PlayerToggleTrackSettlementFromEncyclopediaEvent>(this.OnTrackToggledFromEncyclopedia));
			}
			else if (!this._isActive && isActive)
			{
				Game.Current.EventManager.UnregisterEvent<PlayerToggleTrackSettlementFromEncyclopediaEvent>(new Action<PlayerToggleTrackSettlementFromEncyclopediaEvent>(this.OnTrackToggledFromEncyclopedia));
			}
			return this._isActive;
		}

		// Token: 0x060000EC RID: 236 RVA: 0x00003FAC File Offset: 0x000021AC
		public override bool IsConditionsMetForCompletion()
		{
			if (this._isActive)
			{
				bool flag = false;
				if (this._isActive)
				{
					if (TutorialHelper.CurrentContext != TutorialContexts.EncyclopediaWindow)
					{
						flag = true;
					}
					if (TutorialHelper.CurrentEncyclopediaPage != 12 && TutorialHelper.CurrentEncyclopediaPage != 9)
					{
						flag = true;
					}
					if (this._usedTrackFromEncyclopedia)
					{
						flag = true;
					}
				}
				if (flag)
				{
					Game.Current.EventManager.UnregisterEvent<PlayerToggleTrackSettlementFromEncyclopediaEvent>(new Action<PlayerToggleTrackSettlementFromEncyclopediaEvent>(this.OnTrackToggledFromEncyclopedia));
					return true;
				}
			}
			return false;
		}

		// Token: 0x060000ED RID: 237 RVA: 0x00004015 File Offset: 0x00002215
		private void OnTrackToggledFromEncyclopedia(PlayerToggleTrackSettlementFromEncyclopediaEvent callback)
		{
			this._usedTrackFromEncyclopedia = true;
		}

		// Token: 0x04000044 RID: 68
		private bool _isActive;

		// Token: 0x04000045 RID: 69
		private bool _usedTrackFromEncyclopedia;
	}
}
