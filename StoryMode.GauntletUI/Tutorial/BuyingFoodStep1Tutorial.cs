using System;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.Core;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x02000007 RID: 7
	public class BuyingFoodStep1Tutorial : TutorialItemBase
	{
		// Token: 0x0600001E RID: 30 RVA: 0x00002452 File Offset: 0x00000652
		public BuyingFoodStep1Tutorial()
		{
			base.Type = "GetSuppliesTutorialStep1";
			base.Placement = TutorialItemVM.ItemPlacements.Right;
			base.HighlightedVisualElementID = "storymode_tutorial_village_buy";
			base.MouseRequired = true;
		}

		// Token: 0x0600001F RID: 31 RVA: 0x0000247E File Offset: 0x0000067E
		public override bool IsConditionsMetForCompletion()
		{
			return this._contextChangedToInventory;
		}

		// Token: 0x06000020 RID: 32 RVA: 0x00002486 File Offset: 0x00000686
		public override bool IsConditionsMetForActivation()
		{
			return !TutorialHelper.IsCharacterPopUpWindowOpen && TutorialHelper.BuyingFoodBaseConditions && TutorialHelper.CurrentContext == TutorialContexts.MapWindow;
		}

		// Token: 0x06000021 RID: 33 RVA: 0x000024A0 File Offset: 0x000006A0
		public override void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this._contextChangedToInventory = (obj.NewContext == TutorialContexts.InventoryScreen);
		}

		// Token: 0x06000022 RID: 34 RVA: 0x000024B1 File Offset: 0x000006B1
		public override TutorialContexts GetTutorialsRelevantContext()
		{
			return TutorialContexts.MapWindow;
		}

		// Token: 0x0400000A RID: 10
		private bool _contextChangedToInventory;
	}
}
