using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000029 RID: 41
	public class TalkToNotableTutorialStep2 : TutorialItemBase
	{
		// Token: 0x060000CA RID: 202 RVA: 0x00003989 File Offset: 0x00001B89
		public TalkToNotableTutorialStep2()
		{
			base.Type = "TalkToNotableTutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "OverlayTalkButton";
			base.MouseRequired = true;
		}

		// Token: 0x060000CB RID: 203 RVA: 0x000039B5 File Offset: 0x00001BB5
		public override bool IsConditionsMetForCompletion()
		{
			return this._hasTalkedToNotable;
		}

		// Token: 0x060000CC RID: 204 RVA: 0x000039BD File Offset: 0x00001BBD
		public override void OnPlayerStartTalkFromMenuOverlay(Hero hero)
		{
			this._hasTalkedToNotable = hero.IsHeadman;
		}

		// Token: 0x060000CD RID: 205 RVA: 0x000039CB File Offset: 0x00001BCB
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000CE RID: 206 RVA: 0x000039CE File Offset: 0x00001BCE
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentContext == TutorialContexts.MapWindow && TutorialHelper.IsCharacterPopUpWindowOpen;
		}

		// Token: 0x04000038 RID: 56
		private bool _hasTalkedToNotable;
	}
}
