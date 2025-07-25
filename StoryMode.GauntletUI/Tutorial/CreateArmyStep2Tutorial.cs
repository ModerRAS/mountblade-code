using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001F RID: 31
	public class CreateArmyStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000096 RID: 150 RVA: 0x000032FF File Offset: 0x000014FF
		public CreateArmyStep2Tutorial()
		{
			base.Type = "CreateArmyStep2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "GatherArmyPartiesPanel";
			base.MouseRequired = true;
		}

		// Token: 0x06000097 RID: 151 RVA: 0x0000332B File Offset: 0x0000152B
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerAddedPartyToArmy;
		}

		// Token: 0x06000098 RID: 152 RVA: 0x00003333 File Offset: 0x00001533
		public override void OnPartyAddedToArmyByPlayer(PartyAddedToArmyByPlayerEvent obj)
		{
			this._playerAddedPartyToArmy = true;
		}

		// Token: 0x06000099 RID: 153 RVA: 0x0000333C File Offset: 0x0000153C
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.ArmyManagement;
		}

		// Token: 0x0600009A RID: 154 RVA: 0x00003340 File Offset: 0x00001540
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.ArmyManagement && Campaign.Current.CurrentMenuContext == null && Clan.PlayerClan.Kingdom != null && MobileParty.MainParty.Army == null;
		}

		// Token: 0x04000027 RID: 39
		private bool _playerAddedPartyToArmy;
	}
}
