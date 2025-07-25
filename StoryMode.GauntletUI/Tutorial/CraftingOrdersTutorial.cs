using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000038 RID: 56
	public class CraftingOrdersTutorial : TutorialItemBase
	{
		// Token: 0x0600011A RID: 282 RVA: 0x00004611 File Offset: 0x00002811
		public CraftingOrdersTutorial()
		{
			base.Type = "CraftingOrdersTutorial";
			base.Placement = TutorialItemVM.ItemPlacements.Top;
			base.HighlightedVisualElementID = "CraftingOrderSelectionButton";
			base.MouseRequired = false;
		}

		// Token: 0x0600011B RID: 283 RVA: 0x0000463D File Offset: 0x0000283D
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.CraftingScreen;
		}

		// Token: 0x0600011C RID: 284 RVA: 0x00004641 File Offset: 0x00002841
		public override void OnCraftingWeaponClassSelectionOpened(CraftingWeaponClassSelectionOpenedEvent obj)
		{
			this._craftingCategorySelectionOpened = obj.IsOpen;
		}

		// Token: 0x0600011D RID: 285 RVA: 0x0000464F File Offset: 0x0000284F
		public override void OnCraftingOrderSelectionOpened(CraftingOrderSelectionOpenedEvent obj)
		{
			this._craftingOrderSelectionOpened = obj.IsOpen;
		}

		// Token: 0x0600011E RID: 286 RVA: 0x0000465D File Offset: 0x0000285D
		public override void OnCraftingOnWeaponResultPopupOpened(CraftingWeaponResultPopupToggledEvent obj)
		{
			this._craftingOrderResultOpened = obj.IsOpen;
		}

		// Token: 0x0600011F RID: 287 RVA: 0x0000466B File Offset: 0x0000286B
		public override bool IsConditionsMetForActivation()
		{
			return !this._craftingCategorySelectionOpened && !this._craftingOrderResultOpened && TutorialHelper.IsCurrentTownHaveDoableCraftingOrder;
		}

		// Token: 0x06000120 RID: 288 RVA: 0x00004684 File Offset: 0x00002884
		public override bool IsConditionsMetForCompletion()
		{
			return this._craftingOrderSelectionOpened;
		}

		// Token: 0x04000057 RID: 87
		private bool _craftingCategorySelectionOpened;

		// Token: 0x04000058 RID: 88
		private bool _craftingOrderSelectionOpened;

		// Token: 0x04000059 RID: 89
		private bool _craftingOrderResultOpened;
	}
}
