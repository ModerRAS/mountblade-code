using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000011 RID: 17
	public class GettingCompanionsStep3Tutorial : TutorialItemBase
	{
		// Token: 0x06000050 RID: 80 RVA: 0x000029AA File Offset: 0x00000BAA
		public GettingCompanionsStep3Tutorial()
		{
			base.Type = "GettingCompanionsStep3";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "OverlayTalkButton";
			base.MouseRequired = true;
		}

		// Token: 0x06000051 RID: 81 RVA: 0x000029D6 File Offset: 0x00000BD6
		public override bool IsConditionsMetForCompletion()
		{
			return this._startedTalkingWithCompanion;
		}

		// Token: 0x06000052 RID: 82 RVA: 0x000029DE File Offset: 0x00000BDE
		public override void OnPlayerStartTalkFromMenuOverlay(Hero hero)
		{
			this._startedTalkingWithCompanion = (hero.IsWanderer && !hero.IsPlayerCompanion);
		}

		// Token: 0x06000053 RID: 83 RVA: 0x000029FA File Offset: 0x00000BFA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x06000054 RID: 84 RVA: 0x00002A00 File Offset: 0x00000C00
		public override bool IsConditionsMetForActivation()
		{
			LocationComplex locationComplex = LocationComplex.Current;
			Location location = (locationComplex != null) ? locationComplex.GetLocationWithId("tavern") : null;
			if (TutorialHelper.PlayerIsInNonEnemyTown && TutorialHelper.CurrentContext == TutorialContexts.MapWindow && TutorialHelper.BackStreetMenuIsOpen && TutorialHelper.IsCharacterPopUpWindowOpen && Clan.PlayerClan.Companions.Count == 0 && Clan.PlayerClan.CompanionLimit > 0)
			{
				bool? flag = TutorialHelper.IsThereAvailableCompanionInLocation(location);
				bool flag2 = true;
				if (flag.GetValueOrDefault() == flag2 & flag != null)
				{
					return Hero.MainHero.Gold > TutorialHelper.MinimumGoldForCompanion;
				}
			}
			return false;
		}

		// Token: 0x04000014 RID: 20
		private bool _startedTalkingWithCompanion;
	}
}
