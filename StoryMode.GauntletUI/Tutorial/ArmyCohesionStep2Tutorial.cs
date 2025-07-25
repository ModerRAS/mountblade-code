﻿using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001D RID: 29
	public class ArmyCohesionStep2Tutorial : TutorialItemBase
	{
		// Token: 0x0600008C RID: 140 RVA: 0x000031C4 File Offset: 0x000013C4
		public ArmyCohesionStep2Tutorial()
		{
			base.Type = "ArmyCohesionStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "ArmyManagementBoostCohesionButton";
			base.MouseRequired = true;
		}

		// Token: 0x0600008D RID: 141 RVA: 0x000031F0 File Offset: 0x000013F0
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerBoostedCohesion;
		}

		// Token: 0x0600008E RID: 142 RVA: 0x000031F8 File Offset: 0x000013F8
		public override void OnArmyCohesionByPlayerBoosted(ArmyCohesionBoostedByPlayerEvent obj)
		{
			this._playerBoostedCohesion = true;
		}

		// Token: 0x0600008F RID: 143 RVA: 0x00003201 File Offset: 0x00001401
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.ArmyManagement;
		}

		// Token: 0x06000090 RID: 144 RVA: 0x00003208 File Offset: 0x00001408
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.ArmyManagement && Campaign.Current.CurrentMenuContext == null && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty && MobileParty.MainParty.Army.Cohesion < TutorialHelper.MaxCohesionForCohesionTutorial;
		}

		// Token: 0x04000025 RID: 37
		private bool _playerBoostedCohesion;
	}
}
