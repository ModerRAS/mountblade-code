using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001E RID: 30
	public class CreateArmyStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000091 RID: 145 RVA: 0x00003264 File Offset: 0x00001464
		public CreateArmyStep1Tutorial()
		{
			base.Type = "CreateArmyStep1";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "MapGatherArmyButton";
			base.MouseRequired = true;
		}

		// Token: 0x06000092 RID: 146 RVA: 0x00003290 File Offset: 0x00001490
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerOpenedGatherArmy;
		}

		// Token: 0x06000093 RID: 147 RVA: 0x00003298 File Offset: 0x00001498
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._playerOpenedGatherArmy = (obj.NewContext == TutorialContexts.ArmyManagement);
		}

		// Token: 0x06000094 RID: 148 RVA: 0x000032AA File Offset: 0x000014AA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000095 RID: 149 RVA: 0x000032B0 File Offset: 0x000014B0
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.MapWindow && Campaign.Current.CurrentMenuContext == null && Clan.PlayerClan.Kingdom != null && MobileParty.MainParty.Army == null && Clan.PlayerClan.Influence >= 30f;
		}

		// Token: 0x04000026 RID: 38
		private bool _playerOpenedGatherArmy;
	}
}
