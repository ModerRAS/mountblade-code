using System;
using Helpers;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200000B RID: 11
	public class ChoosingPerkUpgradesStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000032 RID: 50 RVA: 0x0000262C File Offset: 0x0000082C
		public ChoosingPerkUpgradesStep2Tutorial()
		{
			base.Type = "ChoosingPerkUpgradesStep2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "AvailablePerks";
			base.MouseRequired = true;
		}

		// Token: 0x06000033 RID: 51 RVA: 0x00002658 File Offset: 0x00000858
		public override bool IsConditionsMetForCompletion()
		{
			return this._perkPopupOpened;
		}

		// Token: 0x06000034 RID: 52 RVA: 0x00002660 File Offset: 0x00000860
		public override void OnPerkSelectionToggle(PerkSelectionToggleEvent obj)
		{
			this._perkPopupOpened = true;
		}

		// Token: 0x06000035 RID: 53 RVA: 0x00002669 File Offset: 0x00000869
		public override bool IsConditionsMetForActivation()
		{
			return (TutorialHelper.PlayerIsInAnySettlement || TutorialHelper.PlayerIsSafeOnMap) && PerkHelper.AvailablePerkCountOfHero(Hero.MainHero) > 1 && TutorialHelper.CurrentContext == TutorialContexts.CharacterScreen;
		}

		// Token: 0x06000036 RID: 54 RVA: 0x00002690 File Offset: 0x00000890
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.CharacterScreen;
		}

		// Token: 0x0400000E RID: 14
		private bool _perkPopupOpened;
	}
}
