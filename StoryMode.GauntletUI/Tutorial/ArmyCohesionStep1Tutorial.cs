using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200001C RID: 28
	public class ArmyCohesionStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000087 RID: 135 RVA: 0x000030CE File Offset: 0x000012CE
		public ArmyCohesionStep1Tutorial()
		{
			base.Type = "ArmyCohesionStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "ArmyOverlayArmyManagementButton";
			base.MouseRequired = true;
		}

		// Token: 0x06000088 RID: 136 RVA: 0x000030FA File Offset: 0x000012FA
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerArmyNeedsCohesion && this._playerOpenedArmyManagement;
		}

		// Token: 0x06000089 RID: 137 RVA: 0x0000310C File Offset: 0x0000130C
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._playerOpenedArmyManagement = (this._playerArmyNeedsCohesion && obj.NewContext == TutorialContexts.ArmyManagement);
		}

		// Token: 0x0600008A RID: 138 RVA: 0x00003129 File Offset: 0x00001329
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x0600008B RID: 139 RVA: 0x0000312C File Offset: 0x0000132C
		public override bool IsConditionsMetForActivation()
		{
			bool playerArmyNeedsCohesion = this._playerArmyNeedsCohesion;
			Army army = MobileParty.MainParty.Army;
			float? num = (army != null) ? new float?(army.Cohesion) : null;
			float maxCohesionForCohesionTutorial = TutorialHelper.MaxCohesionForCohesionTutorial;
			this._playerArmyNeedsCohesion = (playerArmyNeedsCohesion | (num.GetValueOrDefault() < maxCohesionForCohesionTutorial & num != null));
			return TutorialHelper.CurrentContext == TutorialContexts.MapWindow && MobileParty.MainParty.Army != null && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty && MobileParty.MainParty.Army.Cohesion < TutorialHelper.MaxCohesionForCohesionTutorial;
		}

		// Token: 0x04000023 RID: 35
		private bool _playerOpenedArmyManagement;

		// Token: 0x04000024 RID: 36
		private bool _playerArmyNeedsCohesion;
	}
}
