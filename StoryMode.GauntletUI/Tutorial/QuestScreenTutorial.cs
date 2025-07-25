using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000026 RID: 38
	public class QuestScreenTutorial : TutorialItemBase
	{
		// Token: 0x060000BB RID: 187 RVA: 0x000037D6 File Offset: 0x000019D6
		public QuestScreenTutorial()
		{
			base.Type = "GetQuestTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "QuestsButton";
			base.MouseRequired = true;
		}

		// Token: 0x060000BC RID: 188 RVA: 0x00003802 File Offset: 0x00001A02
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000BD RID: 189 RVA: 0x00003805 File Offset: 0x00001A05
		public override bool IsConditionsMetForActivation()
		{
			return Mission.Current == null && TutorialHelper.CurrentContext == TutorialContexts.QuestsScreen;
		}

		// Token: 0x060000BE RID: 190 RVA: 0x00003819 File Offset: 0x00001A19
		public override bool IsConditionsMetForCompletion()
		{
			return this._contextChangedToQuestsScreen;
		}

		// Token: 0x060000BF RID: 191 RVA: 0x00003821 File Offset: 0x00001A21
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._contextChangedToQuestsScreen = (obj.NewContext == TutorialContexts.QuestsScreen);
		}

		// Token: 0x04000035 RID: 53
		private bool _contextChangedToQuestsScreen;
	}
}
