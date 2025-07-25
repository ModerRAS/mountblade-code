using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000008 RID: 8
	public class BuyingFoodStep2Tutorial : TutorialItemBase
	{
		// Token: 0x06000023 RID: 35 RVA: 0x000024B4 File Offset: 0x000006B4
		public BuyingFoodStep2Tutorial()
		{
			base.Type = "GetSuppliesTutorialStep2";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "InventoryMicsFilter";
			base.MouseRequired = true;
		}

		// Token: 0x06000024 RID: 36 RVA: 0x000024E0 File Offset: 0x000006E0
		public override bool IsConditionsMetForCompletion()
		{
			return this._filterChangedToMisc;
		}

		// Token: 0x06000025 RID: 37 RVA: 0x000024E8 File Offset: 0x000006E8
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.BuyingFoodBaseConditions && TutorialHelper.CurrentContext == TutorialContexts.InventoryScreen;
		}

		// Token: 0x06000026 RID: 38 RVA: 0x000024FB File Offset: 0x000006FB
		public override void OnInventoryFilterChanged(InventoryFilterChangedEvent obj)
		{
			this._filterChangedToMisc = (obj.NewFilter == 5);
		}

		// Token: 0x06000027 RID: 39 RVA: 0x0000250C File Offset: 0x0000070C
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.InventoryScreen;
		}

		// Token: 0x0400000B RID: 11
		private bool _filterChangedToMisc;
	}
}
