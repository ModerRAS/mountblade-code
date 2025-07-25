using System;
using Helpers;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200000C RID: 12
	public class ChoosingPerkUpgradesStep3Tutorial : TutorialItemBase
	{
		// Token: 0x06000037 RID: 55 RVA: 0x00002693 File Offset: 0x00000893
		public ChoosingPerkUpgradesStep3Tutorial()
		{
			base.Type = "ChoosingPerkUpgradesStep3";
			base.Placement = TutorialItemVM.ItemPlacements.BottomRight;
			base.HighlightedVisualElementID = "PerkSelectionContainer";
			base.MouseRequired = true;
		}

		// Token: 0x06000038 RID: 56 RVA: 0x000026BF File Offset: 0x000008BF
		public override bool IsConditionsMetForCompletion()
		{
			return this._perkSelectedByPlayer;
		}

		// Token: 0x06000039 RID: 57 RVA: 0x000026C7 File Offset: 0x000008C7
		public override void OnPerkSelectedByPlayer(PerkSelectedByPlayerEvent obj)
		{
			this._perkSelectedByPlayer = true;
		}

		// Token: 0x0600003A RID: 58 RVA: 0x000026D0 File Offset: 0x000008D0
		public override bool IsConditionsMetForActivation()
		{
			return (TutorialHelper.PlayerIsInAnySettlement || TutorialHelper.PlayerIsSafeOnMap) && PerkHelper.AvailablePerkCountOfHero(Hero.MainHero) > 1 && TutorialHelper.CurrentContext == TutorialContexts.CharacterScreen;
		}

		// Token: 0x0600003B RID: 59 RVA: 0x000026F7 File Offset: 0x000008F7
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.CharacterScreen;
		}

		// Token: 0x0400000F RID: 15
		private bool _perkSelectedByPlayer;
	}
}
