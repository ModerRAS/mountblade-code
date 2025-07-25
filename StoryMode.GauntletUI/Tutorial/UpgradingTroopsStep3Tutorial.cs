using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000006 RID: 6
	public class UpgradingTroopsStep3Tutorial : TutorialItemBase
	{
		// Token: 0x06000019 RID: 25 RVA: 0x000023DD File Offset: 0x000005DD
		public UpgradingTroopsStep3Tutorial()
		{
			base.Type = "UpgradingTroopsStep3";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "UpgradeButton";
			base.MouseRequired = true;
		}

		// Token: 0x0600001A RID: 26 RVA: 0x00002409 File Offset: 0x00000609
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerUpgradedTroop;
		}

		// Token: 0x0600001B RID: 27 RVA: 0x00002411 File Offset: 0x00000611
		public override void OnPlayerUpgradeTroop(CharacterObject arg1, CharacterObject arg2, int arg3)
		{
			this._playerUpgradedTroop = true;
		}

		// Token: 0x0600001C RID: 28 RVA: 0x0000241A File Offset: 0x0000061A
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

		// Token: 0x0600001D RID: 29 RVA: 0x0000244F File Offset: 0x0000064F
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.PartyScreen;
		}

		// Token: 0x04000009 RID: 9
		private bool _playerUpgradedTroop;
	}
}
