using System;
using SandBox.GauntletUI.Map;
using SandBox.View.Map;
using StoryMode.GameComponents.CampaignBehaviors;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.View;

namespace StoryMode.GauntletUI.Map
{
	// Token: 0x02000042 RID: 66
	[OverrideView(typeof(MapCheatsView))]
	internal class GauntletStoryModeMapCheatsView : GauntletMapCheatsView
	{
		// Token: 0x060001DA RID: 474 RVA: 0x000074C4 File Offset: 0x000056C4
		protected override void CreateLayout()
		{
			base.CreateLayout();
			AchievementsCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<AchievementsCampaignBehavior>();
			TextObject textObject;
			if (campaignBehavior == null || !campaignBehavior.CheckAchievementSystemActivity(out textObject))
			{
				this.EnableCheatMenu();
				return;
			}
			this._layerAsGauntletLayer.UIContext.ContextAlpha = 0f;
			InformationManager.ShowInquiry(new InquiryData(new TextObject("{=4Ygn4OGE}Enable Cheats", null).ToString(), new TextObject("{=YkbOfPRU}Enabling cheats will disable the achievements this game. Do you want to proceed?", null).ToString(), true, true, GameTexts.FindText("str_yes", null).ToString(), GameTexts.FindText("str_no", null).ToString(), new Action(this.EnableCheatMenu), new Action(this.RemoveCheatMenu), "", 0f, null, null, null), false, false);
		}

		// Token: 0x060001DB RID: 475 RVA: 0x00007584 File Offset: 0x00005784
		private void EnableCheatMenu()
		{
			this._layerAsGauntletLayer.UIContext.ContextAlpha = 1f;
			AchievementsCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<AchievementsCampaignBehavior>();
			TextObject textObject;
			if (campaignBehavior != null && campaignBehavior.CheckAchievementSystemActivity(out textObject) && campaignBehavior != null)
			{
				campaignBehavior.DeactivateAchievements(new TextObject("{=sO8Zh3ZH}Achievements are disabled due to cheat usage.", null), true, false);
			}
		}

		// Token: 0x060001DC RID: 476 RVA: 0x000075D4 File Offset: 0x000057D4
		private void RemoveCheatMenu()
		{
			base.MapScreen.CloseGameplayCheats();
		}
	}
}
