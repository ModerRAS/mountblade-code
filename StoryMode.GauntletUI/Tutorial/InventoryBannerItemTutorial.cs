using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000039 RID: 57
	public class InventoryBannerItemTutorial : TutorialItemBase
	{
		// Token: 0x06000121 RID: 289 RVA: 0x0000468C File Offset: 0x0000288C
		public InventoryBannerItemTutorial()
		{
			base.Type = "InventoryBannerItemTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Center;
			base.HighlightedVisualElementID = "InventoryOtherBannerItems";
			base.MouseRequired = false;
		}

		// Token: 0x06000122 RID: 290 RVA: 0x000046B8 File Offset: 0x000028B8
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.InventoryScreen;
		}

		// Token: 0x06000123 RID: 291 RVA: 0x000046BC File Offset: 0x000028BC
		public override void OnInventoryItemInspected(InventoryItemInspectedEvent obj)
		{
			if (obj.Item.EquipmentElement.Item.IsBannerItem && obj.ItemSide == null)
			{
				this._inspectedOtherBannerItem = true;
			}
		}

		// Token: 0x06000124 RID: 292 RVA: 0x000046F5 File Offset: 0x000028F5
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.CurrentInventoryScreenIncludesBannerItem;
		}

		// Token: 0x06000125 RID: 293 RVA: 0x000046FC File Offset: 0x000028FC
		public override bool IsConditionsMetForCompletion()
		{
			return this._inspectedOtherBannerItem;
		}

		// Token: 0x0400005A RID: 90
		private bool _inspectedOtherBannerItem;
	}
}
