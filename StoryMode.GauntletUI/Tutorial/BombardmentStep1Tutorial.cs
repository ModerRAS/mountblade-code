using System;
using SandBox.ViewModelCollection.MapSiege;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000022 RID: 34
	public class BombardmentStep1Tutorial : TutorialItemBase
	{
		// Token: 0x060000A6 RID: 166 RVA: 0x000034C2 File Offset: 0x000016C2
		public BombardmentStep1Tutorial()
		{
			base.Type = "BombardmentStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = string.Empty;
			base.MouseRequired = true;
		}

		// Token: 0x060000A7 RID: 167 RVA: 0x000034EE File Offset: 0x000016EE
		public override bool IsConditionsMetForCompletion()
		{
			return this._playerSelectedSiegeEngine || this._isGameMenuChangedAfterActivation;
		}

		// Token: 0x060000A8 RID: 168 RVA: 0x00003500 File Offset: 0x00001700
		public override void OnPlayerStartEngineConstruction(PlayerStartEngineConstructionEvent obj)
		{
			this._playerSelectedSiegeEngine = true;
		}

		// Token: 0x060000A9 RID: 169 RVA: 0x00003509 File Offset: 0x00001709
		public override void OnGameMenuOptionSelected(GameMenuOption obj)
		{
			base.OnGameMenuOptionSelected(obj);
			if (this._isActivated)
			{
				this._isGameMenuChangedAfterActivation = true;
			}
		}

		// Token: 0x060000AA RID: 170 RVA: 0x00003521 File Offset: 0x00001721
		public override void OnGameMenuOpened(MenuCallbackArgs obj)
		{
			base.OnGameMenuOpened(obj);
			if (this._isActivated)
			{
				this._isGameMenuChangedAfterActivation = true;
			}
		}

		// Token: 0x060000AB RID: 171 RVA: 0x00003539 File Offset: 0x00001739
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x060000AC RID: 172 RVA: 0x0000353C File Offset: 0x0000173C
		public override bool IsConditionsMetForActivation()
		{
			MenuContext currentMenuContext = Campaign.Current.CurrentMenuContext;
			bool isActivated;
			if (((currentMenuContext != null) ? currentMenuContext.GameMenu.StringId : null) == "menu_siege_strategies")
			{
				SiegeEvent playerSiegeEvent = PlayerSiege.PlayerSiegeEvent;
				bool flag;
				if (playerSiegeEvent == null)
				{
					flag = false;
				}
				else
				{
					SiegeEvent.SiegeEnginesContainer siegeEngines = playerSiegeEvent.GetSiegeEventSide(PlayerSiege.PlayerSide).SiegeEngines;
					bool? flag2;
					if (siegeEngines == null)
					{
						flag2 = null;
					}
					else
					{
						SiegeEvent.SiegeEngineConstructionProgress siegePreparations = siegeEngines.SiegePreparations;
						flag2 = ((siegePreparations != null) ? new bool?(siegePreparations.IsActive) : null);
					}
					bool? flag3 = flag2;
					bool flag4 = true;
					flag = (flag3.GetValueOrDefault() == flag4 & flag3 != null);
				}
				if (flag)
				{
					isActivated = (TutorialHelper.CurrentContext == TutorialContexts.MapWindow);
					goto IL_92;
				}
			}
			isActivated = false;
			IL_92:
			this._isActivated = isActivated;
			return this._isActivated;
		}

		// Token: 0x0400002B RID: 43
		private bool _playerSelectedSiegeEngine;

		// Token: 0x0400002C RID: 44
		private bool _isGameMenuChangedAfterActivation;

		// Token: 0x0400002D RID: 45
		private bool _isActivated;
	}
}
