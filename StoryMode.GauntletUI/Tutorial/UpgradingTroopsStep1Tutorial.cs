using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000004 RID: 4
	public class UpgradingTroopsStep1Tutorial : TutorialItemBase
	{
		// Token: 0x0600000D RID: 13 RVA: 0x000022C5 File Offset: 0x000004C5
		public UpgradingTroopsStep1Tutorial()
		{
			base.Type = "UpgradingTroopsStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "PartyButton";
			base.MouseRequired = true;
		}

		// Token: 0x0600000E RID: 14 RVA: 0x000022F1 File Offset: 0x000004F1
		public override bool IsConditionsMetForCompletion()
		{
			return this._partyScreenOpened || this._playerUpgradedTroop;
		}

		// Token: 0x0600000F RID: 15 RVA: 0x00002303 File Offset: 0x00000503
		public override void OnPlayerUpgradeTroop(CharacterObject arg1, CharacterObject arg2, int arg3)
		{
			this._playerUpgradedTroop = true;
		}

		// Token: 0x06000010 RID: 16 RVA: 0x0000230C File Offset: 0x0000050C
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._partyScreenOpened = (obj.NewContext == TutorialContexts.PartyScreen);
		}

		// Token: 0x06000011 RID: 17 RVA: 0x0000231D File Offset: 0x0000051D
		public override bool IsConditionsMetForActivation()
		{
			return Hero.MainHero.Gold >= 100 && TutorialHelper.CurrentContext == TutorialContexts.MapWindow && !TutorialHelper.PlayerIsInAnySettlement && TutorialHelper.PlayerIsSafeOnMap && TutorialHelper.PlayerHasAnyUpgradeableTroop;
		}

		// Token: 0x06000012 RID: 18 RVA: 0x0000234A File Offset: 0x0000054A
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x04000005 RID: 5
		private bool _partyScreenOpened;

		// Token: 0x04000006 RID: 6
		private bool _playerUpgradedTroop;
	}
}
