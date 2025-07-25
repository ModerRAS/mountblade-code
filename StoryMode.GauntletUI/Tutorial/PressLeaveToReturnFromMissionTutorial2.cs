using System;
using System.Linq;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000019 RID: 25
	public class PressLeaveToReturnFromMissionTutorial2 : TutorialItemBase
	{
		// Token: 0x06000078 RID: 120 RVA: 0x00002EFD File Offset: 0x000010FD
		public PressLeaveToReturnFromMissionTutorial2()
		{
			base.Type = "PressLeaveToReturnFromMissionType2";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = false;
		}

		// Token: 0x06000079 RID: 121 RVA: 0x00002F29 File Offset: 0x00001129
		public override bool IsConditionsMetForCompletion()
		{
			return this._changedContext;
		}

		// Token: 0x0600007A RID: 122 RVA: 0x00002F31 File Offset: 0x00001131
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._changedContext = true;
		}

		// Token: 0x0600007B RID: 123 RVA: 0x00002F3A File Offset: 0x0000113A
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x0600007C RID: 124 RVA: 0x00002F40 File Offset: 0x00001140
		public override bool IsConditionsMetForActivation()
		{
			string[] source = new string[]
			{
				"center",
				"lordshall",
				"tavern",
				"prison",
				"village_center",
				"arena"
			};
			return TutorialHelper.CurrentMissionLocation != null && source.Contains(TutorialHelper.CurrentMissionLocation.StringId) && TutorialHelper.PlayerIsInAnySettlement && !TutorialHelper.PlayerIsInAConversation && TutorialHelper.CurrentContext == TutorialContexts.Mission;
		}

		// Token: 0x0400001F RID: 31
		private bool _changedContext;
	}
}
