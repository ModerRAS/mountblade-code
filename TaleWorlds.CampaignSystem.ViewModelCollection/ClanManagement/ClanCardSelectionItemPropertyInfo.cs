using System;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x020000FD RID: 253
	public readonly struct ClanCardSelectionItemPropertyInfo
	{
		// Token: 0x06001818 RID: 6168 RVA: 0x00058FBC File Offset: 0x000571BC
		public ClanCardSelectionItemPropertyInfo(TextObject title, TextObject value)
		{
			this.Title = title;
			this.Value = value;
		}

		// Token: 0x06001819 RID: 6169 RVA: 0x00058FDC File Offset: 0x000571DC
		public ClanCardSelectionItemPropertyInfo(TextObject value)
		{
			this.Title = null;
			this.Value = value;
		}

		// Token: 0x0600181A RID: 6170 RVA: 0x00058FF9 File Offset: 0x000571F9
		public static TextObject CreateLabeledValueText(TextObject label, TextObject value)
		{
			TextObject textObject = new TextObject("{=!}<span style=\"Label\">{LABEL}</span>: {VALUE}", null);
			textObject.SetTextVariable("LABEL", label);
			textObject.SetTextVariable("VALUE", value);
			return textObject;
		}

		// Token: 0x0600181B RID: 6171 RVA: 0x00059020 File Offset: 0x00057220
		public static TextObject CreateActionGoldChangeText(int goldChange)
		{
			if (goldChange != 0)
			{
				bool flag = goldChange > 0;
				string arg = flag ? "PositiveChange" : "NegativeChange";
				TextObject textObject = flag ? new TextObject("{=8N1EdPB3}You will earn {GOLD}{GOLD_ICON}", null) : new TextObject("{=kjaACKUq}This action will cost {GOLD}{GOLD_ICON}", null);
				textObject.SetTextVariable("GOLD", string.Format("<span style=\"{0}\">{1}</span>", arg, Math.Abs(goldChange)));
				textObject.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
				return textObject;
			}
			return TextObject.Empty;
		}

		// Token: 0x04000B3F RID: 2879
		public readonly TextObject Title;

		// Token: 0x04000B40 RID: 2880
		public readonly TextObject Value;
	}
}
