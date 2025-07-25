using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001B RID: 27
	public class PartySpeedTutorial : TutorialItemBase
	{
		// Token: 0x06000082 RID: 130 RVA: 0x00003015 File Offset: 0x00001215
		public PartySpeedTutorial()
		{
			base.Type = "PartySpeed";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "PartySpeedLabel";
			base.MouseRequired = true;
		}

		// Token: 0x06000083 RID: 131 RVA: 0x00003041 File Offset: 0x00001241
		public override bool IsConditionsMetForCompletion()
		{
			return this._isPlayerInspectedPartySpeed;
		}

		// Token: 0x06000084 RID: 132 RVA: 0x00003049 File Offset: 0x00001249
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000085 RID: 133 RVA: 0x0000304C File Offset: 0x0000124C
		public override void OnPlayerInspectedPartySpeed(PlayerInspectedPartySpeedEvent obj)
		{
			if (this._isActivated)
			{
				this._isPlayerInspectedPartySpeed = true;
			}
		}

		// Token: 0x06000086 RID: 134 RVA: 0x00003060 File Offset: 0x00001260
		public override bool IsConditionsMetForActivation()
		{
			this._isActivated = (TutorialHelper.CurrentContext == TutorialContexts.MapWindow && Campaign.Current.CurrentMenuContext == null && MobileParty.MainParty.Ai.PartyMoveMode != null && MobileParty.MainParty.Speed < TutorialHelper.MaximumSpeedForPartyForSpeedTutorial && (float)MobileParty.MainParty.InventoryCapacity < MobileParty.MainParty.ItemRoster.TotalWeight);
			return this._isActivated;
		}

		// Token: 0x04000021 RID: 33
		private bool _isPlayerInspectedPartySpeed;

		// Token: 0x04000022 RID: 34
		private bool _isActivated;
	}
}
