using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000028 RID: 40
	public class TalkToNotableTutorialStep1 : TutorialItemBase
	{
		// Token: 0x060000C5 RID: 197 RVA: 0x000038EB File Offset: 0x00001AEB
		public TalkToNotableTutorialStep1()
		{
			base.Type = "TalkToNotableTutorialStep1";
			base.Placement = TutorialItemVM.ItemPlacements.TopRight;
			base.HighlightedVisualElementID = "ApplicableNotable";
			base.MouseRequired = true;
		}

		// Token: 0x060000C6 RID: 198 RVA: 0x00003917 File Offset: 0x00001B17
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000C7 RID: 199 RVA: 0x0000391A File Offset: 0x00001B1A
		public override bool IsConditionsMetForActivation()
		{
			return !TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.CurrentContext == TutorialContexts.MapWindow && TutorialHelper.VillageMenuIsOpen;
		}

		// Token: 0x060000C8 RID: 200 RVA: 0x00003932 File Offset: 0x00001B32
		public override bool IsConditionsMetForCompletion()
		{
			return this._wantedCharacterPopupOpened;
		}

		// Token: 0x060000C9 RID: 201 RVA: 0x0000393C File Offset: 0x00001B3C
		public override void OnCharacterPortraitPopUpOpened(CharacterObject obj)
		{
			bool wantedCharacterPopupOpened;
			if (obj == null)
			{
				wantedCharacterPopupOpened = false;
			}
			else
			{
				Hero heroObject = obj.HeroObject;
				bool? flag = (heroObject != null) ? new bool?(heroObject.IsHeadman) : null;
				bool flag2 = true;
				wantedCharacterPopupOpened = (flag.GetValueOrDefault() == flag2 & flag != null);
			}
			this._wantedCharacterPopupOpened = wantedCharacterPopupOpened;
		}

		// Token: 0x04000037 RID: 55
		private bool _wantedCharacterPopupOpened;
	}
}
