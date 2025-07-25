using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000021 RID: 33
	public class RaidVillageStep1Tutorial : TutorialItemBase
	{
		// Token: 0x060000A0 RID: 160 RVA: 0x000033F1 File Offset: 0x000015F1
		public RaidVillageStep1Tutorial()
		{
			base.Type = "RaidVillageStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = true;
		}

		// Token: 0x060000A1 RID: 161 RVA: 0x0000341D File Offset: 0x0000161D
		public override bool IsConditionsMetForCompletion()
		{
			return this._gameMenuChanged;
		}

		// Token: 0x060000A2 RID: 162 RVA: 0x00003425 File Offset: 0x00001625
		public override void OnGameMenuOpened(MenuCallbackArgs obj)
		{
			if (this._villageRaidMenuOpened && obj.MenuContext.GameMenu.StringId != TutorialHelper.ActiveVillageRaidGameMenuID)
			{
				this._gameMenuChanged = true;
			}
		}

		// Token: 0x060000A3 RID: 163 RVA: 0x00003454 File Offset: 0x00001654
		public override void OnGameMenuOptionSelected(GameMenuOption obj)
		{
			base.OnGameMenuOptionSelected(obj);
			if (this._villageRaidMenuOpened)
			{
				Campaign campaign = Campaign.Current;
				string a;
				if (campaign == null)
				{
					a = null;
				}
				else
				{
					MenuContext currentMenuContext = campaign.CurrentMenuContext;
					if (currentMenuContext == null)
					{
						a = null;
					}
					else
					{
						GameMenu gameMenu = currentMenuContext.GameMenu;
						a = ((gameMenu != null) ? gameMenu.StringId : null);
					}
				}
				if (a == TutorialHelper.ActiveVillageRaidGameMenuID)
				{
					this._gameMenuChanged = true;
				}
			}
		}

		// Token: 0x060000A4 RID: 164 RVA: 0x000034AC File Offset: 0x000016AC
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000A5 RID: 165 RVA: 0x000034AF File Offset: 0x000016AF
		public override bool IsConditionsMetForActivation()
		{
			this._villageRaidMenuOpened = TutorialHelper.IsActiveVillageRaidGameMenuOpen;
			return this._villageRaidMenuOpened;
		}

		// Token: 0x04000029 RID: 41
		private bool _gameMenuChanged;

		// Token: 0x0400002A RID: 42
		private bool _villageRaidMenuOpened;
	}
}
