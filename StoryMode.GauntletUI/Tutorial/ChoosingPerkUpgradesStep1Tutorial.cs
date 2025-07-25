using System;
using Helpers;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200000A RID: 10
	public class ChoosingPerkUpgradesStep1Tutorial : TutorialItemBase
	{
		// Token: 0x0600002D RID: 45 RVA: 0x000025BD File Offset: 0x000007BD
		public ChoosingPerkUpgradesStep1Tutorial()
		{
			base.Type = "ChoosingPerkUpgradesStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "CharacterButton";
			base.MouseRequired = true;
		}

		// Token: 0x0600002E RID: 46 RVA: 0x000025E9 File Offset: 0x000007E9
		public override bool IsConditionsMetForCompletion()
		{
			return this._contextChangedToCharacterScreen;
		}

		// Token: 0x0600002F RID: 47 RVA: 0x000025F1 File Offset: 0x000007F1
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000030 RID: 48 RVA: 0x000025F4 File Offset: 0x000007F4
		public override bool IsConditionsMetForActivation()
		{
			return (TutorialHelper.PlayerIsInAnySettlement || TutorialHelper.PlayerIsSafeOnMap) && PerkHelper.AvailablePerkCountOfHero(Hero.MainHero) > 1 && TutorialHelper.CurrentContext == TutorialContexts.MapWindow;
		}

		// Token: 0x06000031 RID: 49 RVA: 0x0000261B File Offset: 0x0000081B
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._contextChangedToCharacterScreen = (obj.NewContext == TutorialContexts.CharacterScreen);
		}

		// Token: 0x0400000D RID: 13
		private bool _contextChangedToCharacterScreen;
	}
}
