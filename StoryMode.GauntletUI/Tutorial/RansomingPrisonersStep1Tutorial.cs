using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000012 RID: 18
	public class RansomingPrisonersStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000055 RID: 85 RVA: 0x00002A8F File Offset: 0x00000C8F
		public RansomingPrisonersStep1Tutorial()
		{
			base.Type = "RansomingPrisonersStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "town_backstreet";
			base.MouseRequired = true;
		}

		// Token: 0x06000056 RID: 86 RVA: 0x00002ABB File Offset: 0x00000CBB
		public override bool IsConditionsMetForCompletion()
		{
			return this._wantedGameMenuOpened;
		}

		// Token: 0x06000057 RID: 87 RVA: 0x00002AC3 File Offset: 0x00000CC3
		public override void OnGameMenuOpened(MenuCallbackArgs obj)
		{
			this._wantedGameMenuOpened = (obj.MenuContext.GameMenu.StringId == "town_backstreet");
		}

		// Token: 0x06000058 RID: 88 RVA: 0x00002AE5 File Offset: 0x00000CE5
		public override bool IsConditionsMetForActivation()
		{
			return !TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.CurrentContext == TutorialContexts.MapWindow && TutorialHelper.PlayerIsInNonEnemyTown && TutorialHelper.TownMenuIsOpen && !Hero.MainHero.IsPrisoner && MobileParty.MainParty.PrisonRoster.TotalManCount > 0;
		}

		// Token: 0x06000059 RID: 89 RVA: 0x00002B24 File Offset: 0x00000D24
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x04000015 RID: 21
		private bool _wantedGameMenuOpened;
	}
}
