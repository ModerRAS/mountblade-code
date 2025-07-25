using System;
using System.Linq;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000018 RID: 24
	public class PressLeaveToReturnFromMissionTutorial1 : TutorialItemBase
	{
		// Token: 0x06000073 RID: 115 RVA: 0x00002E46 File Offset: 0x00001046
		public PressLeaveToReturnFromMissionTutorial1()
		{
			base.Type = "PressLeaveToReturnFromMissionType1";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = false;
		}

		// Token: 0x06000074 RID: 116 RVA: 0x00002E72 File Offset: 0x00001072
		public override bool IsConditionsMetForCompletion()
		{
			return this._changedContext;
		}

		// Token: 0x06000075 RID: 117 RVA: 0x00002E7A File Offset: 0x0000107A
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._changedContext = true;
		}

		// Token: 0x06000076 RID: 118 RVA: 0x00002E83 File Offset: 0x00001083
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.Mission;
		}

		// Token: 0x06000077 RID: 119 RVA: 0x00002E88 File Offset: 0x00001088
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

		// Token: 0x0400001E RID: 30
		private bool _changedContext;
	}
}
