using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200000F RID: 15
	public class GettingCompanionsStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000046 RID: 70 RVA: 0x000027D3 File Offset: 0x000009D3
		public GettingCompanionsStep1Tutorial()
		{
			base.Type = "GettingCompanionsStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "town_backstreet";
			base.MouseRequired = true;
		}

		// Token: 0x06000047 RID: 71 RVA: 0x000027FF File Offset: 0x000009FF
		public override bool IsConditionsMetForCompletion()
		{
			return this._wantedGameMenuOpened;
		}

		// Token: 0x06000048 RID: 72 RVA: 0x00002807 File Offset: 0x00000A07
		public override void OnGameMenuOpened(MenuCallbackArgs obj)
		{
			base.OnGameMenuOpened(obj);
			this._wantedGameMenuOpened = (obj.MenuContext.GameMenu.StringId == "town_backstreet");
		}

		// Token: 0x06000049 RID: 73 RVA: 0x00002830 File Offset: 0x00000A30
		public override bool IsConditionsMetForActivation()
		{
			LocationComplex locationComplex = LocationComplex.Current;
			Location location = (locationComplex != null) ? locationComplex.GetLocationWithId("tavern") : null;
			if (!TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.PlayerIsInNonEnemyTown && TutorialHelper.TownMenuIsOpen && Clan.PlayerClan.Companions.Count == 0 && Clan.PlayerClan.CompanionLimit > 0)
			{
				bool? flag = TutorialHelper.IsThereAvailableCompanionInLocation(location);
				bool flag2 = true;
				if ((flag.GetValueOrDefault() == flag2 & flag != null) && Hero.MainHero.Gold > TutorialHelper.MinimumGoldForCompanion)
				{
					return TutorialHelper.CurrentContext == TutorialContexts.MapWindow;
				}
			}
			return false;
		}

		// Token: 0x0600004A RID: 74 RVA: 0x000028BF File Offset: 0x00000ABF
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x04000012 RID: 18
		private bool _wantedGameMenuOpened;
	}
}
