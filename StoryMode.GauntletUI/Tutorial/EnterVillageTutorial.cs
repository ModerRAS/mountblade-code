using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000023 RID: 35
	public class EnterVillageTutorial : TutorialItemBase
	{
		// Token: 0x060000AD RID: 173 RVA: 0x000035E6 File Offset: 0x000017E6
		public EnterVillageTutorial()
		{
			base.Type = "EnterVillageTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "storymode_tutorial_village_enter";
			base.MouseRequired = true;
		}

		// Token: 0x060000AE RID: 174 RVA: 0x00003612 File Offset: 0x00001812
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000AF RID: 175 RVA: 0x00003615 File Offset: 0x00001815
		public override bool IsConditionsMetForActivation()
		{
			if (!TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.CurrentContext == TutorialContexts.MapWindow)
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				return ((currentSettlement != null) ? currentSettlement.StringId : null) == "village_ES3_2";
			}
			return false;
		}

		// Token: 0x060000B0 RID: 176 RVA: 0x00003643 File Offset: 0x00001843
		public override void OnGameMenuOptionSelected(GameMenuOption obj)
		{
			base.OnGameMenuOptionSelected(obj);
			this._isEnterOptionSelected = (obj.IdString == "storymode_tutorial_village_enter");
		}

		// Token: 0x060000B1 RID: 177 RVA: 0x00003662 File Offset: 0x00001862
		public override bool IsConditionsMetForCompletion()
		{
			return this._isEnterOptionSelected;
		}

		// Token: 0x0400002E RID: 46
		private bool _isEnterOptionSelected;

		// Token: 0x0400002F RID: 47
		private const string _enterGameMenuOptionId = "storymode_tutorial_village_enter";
	}
}
