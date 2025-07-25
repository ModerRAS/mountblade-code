using System;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting
{
	// Token: 0x020000E0 RID: 224
	public class CraftingSecondaryUsageItemVM : SelectorItemVM
	{
		// Token: 0x170006F7 RID: 1783
		// (get) Token: 0x060014B7 RID: 5303 RVA: 0x0004E6E5 File Offset: 0x0004C8E5
		public int UsageIndex { get; }

		// Token: 0x170006F8 RID: 1784
		// (get) Token: 0x060014B8 RID: 5304 RVA: 0x0004E6ED File Offset: 0x0004C8ED
		public int SelectorIndex { get; }

		// Token: 0x060014B9 RID: 5305 RVA: 0x0004E6F5 File Offset: 0x0004C8F5
		public CraftingSecondaryUsageItemVM(TextObject name, int index, int usageIndex, SelectorVM<CraftingSecondaryUsageItemVM> parentSelector) : base(name)
		{
			this._parentSelector = parentSelector;
			this.SelectorIndex = index;
			this.UsageIndex = usageIndex;
		}

		// Token: 0x060014BA RID: 5306 RVA: 0x0004E714 File Offset: 0x0004C914
		public void ExecuteSelect()
		{
			this._parentSelector.SelectedIndex = this.SelectorIndex;
		}

		// Token: 0x040009A4 RID: 2468
		private SelectorVM<CraftingSecondaryUsageItemVM> _parentSelector;
	}
}
