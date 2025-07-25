using System;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Inventory
{
	// Token: 0x02000084 RID: 132
	public class InventoryEquipmentTypeChangedEvent : EventBase
	{
		// Token: 0x17000454 RID: 1108
		// (get) Token: 0x06000D41 RID: 3393 RVA: 0x00036220 File Offset: 0x00034420
		// (set) Token: 0x06000D42 RID: 3394 RVA: 0x00036228 File Offset: 0x00034428
		public bool IsCurrentlyWarSet { get; private set; }

		// Token: 0x06000D43 RID: 3395 RVA: 0x00036231 File Offset: 0x00034431
		public InventoryEquipmentTypeChangedEvent(bool isCurrentlyWarSet)
		{
			this.IsCurrentlyWarSet = isCurrentlyWarSet;
		}
	}
}
