using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000005 RID: 5
	public class UpgradingTroopsStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000013 RID: 19 RVA: 0x0000234D File Offset: 0x0000054D
		public UpgradingTroopsStep2Tutorial()
		{
			base.Type = "UpgradingTroopsStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Left;
			base.HighlightedVisualElementID = "UpgradePopupButton";
			base.MouseRequired = true;
		}

		// Token: 0x06000014 RID: 20 RVA: 0x00002379 File Offset: 0x00000579
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerUpgradedTroop || this._playerOpenedUpgradePopup;
		}

		// Token: 0x06000015 RID: 21 RVA: 0x0000238B File Offset: 0x0000058B
		public override void OnPlayerToggledUpgradePopup(PlayerToggledUpgradePopupEvent obj)
		{
			if (obj.IsOpened)
			{
				this._playerOpenedUpgradePopup = true;
			}
		}

		// Token: 0x06000016 RID: 22 RVA: 0x0000239C File Offset: 0x0000059C
		public override void OnPlayerUpgradeTroop(CharacterObject arg1, CharacterObject arg2, int arg3)
		{
			this._playerUpgradedTroop = true;
		}

		// Token: 0x06000017 RID: 23 RVA: 0x000023A5 File Offset: 0x000005A5
		public override bool IsConditionsMetForActivation()
		{
			if (Hero.MainHero.Gold > 100 && TutorialHelper.CurrentContext == TutorialContexts.PartyScreen)
			{
				PartyScreenManager instance = PartyScreenManager.Instance;
				if (instance != null && instance.CurrentMode <= 0)
				{
					return TutorialHelper.PlayerHasAnyUpgradeableTroop;
				}
			}
			return false;
		}

		// Token: 0x06000018 RID: 24 RVA: 0x000023DA File Offset: 0x000005DA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.PartyScreen;
		}

		// Token: 0x04000007 RID: 7
		private bool _playerUpgradedTroop;

		// Token: 0x04000008 RID: 8
		private bool _playerOpenedUpgradePopup;
	}
}
