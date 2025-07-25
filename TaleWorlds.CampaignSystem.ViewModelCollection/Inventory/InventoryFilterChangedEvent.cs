using System;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Inventory
{
	// Token: 0x02000085 RID: 133
	public class InventoryFilterChangedEvent : EventBase
	{
		// Token: 0x17000455 RID: 1109
		// (get) Token: 0x06000D44 RID: 3396 RVA: 0x00036240 File Offset: 0x00034440
		// (set) Token: 0x06000D45 RID: 3397 RVA: 0x00036248 File Offset: 0x00034448
		public SPInventoryVM.Filters NewFilter { get; private set; }

		// Token: 0x06000D46 RID: 3398 RVA: 0x00036251 File Offset: 0x00034451
		public InventoryFilterChangedEvent(SPInventoryVM.Filters newFilter)
		{
			this.NewFilter = newFilter;
		}
	}
}
