using System;
using System.Collections.Generic;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000009 RID: 9
	public class BuyingFoodStep3Tutorial : TutorialItemBase
	{
		// Token: 0x06000028 RID: 40 RVA: 0x0000250F File Offset: 0x0000070F
		public BuyingFoodStep3Tutorial()
		{
			base.Type = "GetSuppliesTutorialStep3";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "TransferButtonOnlyFood";
			base.MouseRequired = true;
		}

		// Token: 0x06000029 RID: 41 RVA: 0x0000253B File Offset: 0x0000073B
		public override bool IsConditionsMetForCompletion()
		{
			return this._purchasedFoodCount >= TutorialHelper.BuyGrainAmount;
		}

		// Token: 0x0600002A RID: 42 RVA: 0x0000254D File Offset: 0x0000074D
		public override bool IsConditionsMetForActivation()
		{
			return TutorialHelper.BuyingFoodBaseConditions && TutorialHelper.CurrentContext == TutorialContexts.InventoryScreen;
		}

		// Token: 0x0600002B RID: 43 RVA: 0x00002560 File Offset: 0x00000760
		public override void OnPlayerInventoryExchange(List<ValueTuple<ItemRosterElement, int>> purchasedItems, List<ValueTuple<ItemRosterElement, int>> soldItems, bool isTrading)
		{
			for (int i = 0; i < purchasedItems.Count; i++)
			{
				ValueTuple<ItemRosterElement, int> valueTuple = purchasedItems[i];
				if (valueTuple.Item1.EquipmentElement.Item == DefaultItems.Grain)
				{
					this._purchasedFoodCount += valueTuple.Item1.Amount;
				}
			}
		}

		// Token: 0x0600002C RID: 44 RVA: 0x000025BA File Offset: 0x000007BA
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.InventoryScreen;
		}

		// Token: 0x0400000C RID: 12
		private int _purchasedFoodCount;
	}
}
