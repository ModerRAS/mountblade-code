using System;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign
{
	// Token: 0x020000EA RID: 234
	public class CraftingOrderSelectionOpenedEvent : EventBase
	{
		// Token: 0x17000745 RID: 1861
		// (get) Token: 0x06001596 RID: 5526 RVA: 0x00050F32 File Offset: 0x0004F132
		// (set) Token: 0x06001597 RID: 5527 RVA: 0x00050F3A File Offset: 0x0004F13A
		public bool IsOpen { get; private set; }

		// Token: 0x06001598 RID: 5528 RVA: 0x00050F43 File Offset: 0x0004F143
		public CraftingOrderSelectionOpenedEvent(bool isOpen)
		{
			this.IsOpen = isOpen;
		}
	}
}
