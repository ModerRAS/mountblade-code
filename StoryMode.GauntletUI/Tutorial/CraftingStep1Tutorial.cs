using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000037 RID: 55
	public class CraftingStep1Tutorial : TutorialItemBase
	{
		// Token: 0x06000113 RID: 275 RVA: 0x0000459A File Offset: 0x0000279A
		public CraftingStep1Tutorial()
		{
			base.Type = "CraftingStep1Tutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "FreeModeClassSelectionButton";
			base.MouseRequired = false;
		}

		// Token: 0x06000114 RID: 276 RVA: 0x000045C6 File Offset: 0x000027C6
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.CraftingScreen;
		}

		// Token: 0x06000115 RID: 277 RVA: 0x000045CA File Offset: 0x000027CA
		public override void OnCraftingWeaponClassSelectionOpened(CraftingWeaponClassSelectionOpenedEvent obj)
		{
			this._craftingCategorySelectionOpened = obj.IsOpen;
		}

		// Token: 0x06000116 RID: 278 RVA: 0x000045D8 File Offset: 0x000027D8
		public override void OnCraftingOrderSelectionOpened(CraftingOrderSelectionOpenedEvent obj)
		{
			this._craftingOrderSelectionOpened = obj.IsOpen;
		}

		// Token: 0x06000117 RID: 279 RVA: 0x000045E6 File Offset: 0x000027E6
		public override void OnCraftingOnWeaponResultPopupOpened(CraftingWeaponResultPopupToggledEvent obj)
		{
			this._craftingOrderResultOpened = obj.IsOpen;
		}

		// Token: 0x06000118 RID: 280 RVA: 0x000045F4 File Offset: 0x000027F4
		public override bool IsConditionsMetForActivation()
		{
			return !this._craftingOrderSelectionOpened && !this._craftingOrderResultOpened;
		}

		// Token: 0x06000119 RID: 281 RVA: 0x00004609 File Offset: 0x00002809
		public override bool IsConditionsMetForCompletion()
		{
			return this._craftingCategorySelectionOpened;
		}

		// Token: 0x04000054 RID: 84
		private bool _craftingCategorySelectionOpened;

		// Token: 0x04000055 RID: 85
		private bool _craftingOrderSelectionOpened;

		// Token: 0x04000056 RID: 86
		private bool _craftingOrderResultOpened;
	}
}
