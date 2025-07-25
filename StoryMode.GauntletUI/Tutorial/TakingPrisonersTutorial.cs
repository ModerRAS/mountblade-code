using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000027 RID: 39
	public class TakingPrisonersTutorial : TutorialItemBase
	{
		// Token: 0x060000C0 RID: 192 RVA: 0x00003833 File Offset: 0x00001A33
		public TakingPrisonersTutorial()
		{
			base.Type = "TakeAndRescuePrisonerTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "TransferButtonOnlyOtherPrisoners";
			base.MouseRequired = true;
		}

		// Token: 0x060000C1 RID: 193 RVA: 0x0000385F File Offset: 0x00001A5F
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.PartyScreen;
		}

		// Token: 0x060000C2 RID: 194 RVA: 0x00003864 File Offset: 0x00001A64
		public override bool IsConditionsMetForActivation()
		{
			PartyScreenManager instance = PartyScreenManager.Instance;
			PartyState partyState;
			return instance != null && instance.CurrentMode == 2 && (partyState = (GameStateManager.Current.ActiveState as PartyState)) != null && partyState.PartyScreenLogic.PrisonerRosters[0].Count > 0 && TutorialHelper.CurrentContext == TutorialContexts.InventoryScreen;
		}

		// Token: 0x060000C3 RID: 195 RVA: 0x000038B9 File Offset: 0x00001AB9
		public override void OnPlayerMoveTroop(PlayerMoveTroopEvent obj)
		{
			base.OnPlayerMoveTroop(obj);
			if (obj.IsPrisoner && obj.ToSide == 1 && obj.Amount > 0)
			{
				this._playerMovedOtherPrisonerTroop = true;
			}
		}

		// Token: 0x060000C4 RID: 196 RVA: 0x000038E3 File Offset: 0x00001AE3
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerMovedOtherPrisonerTroop;
		}

		// Token: 0x04000036 RID: 54
		private bool _playerMovedOtherPrisonerTroop;
	}
}
