using System;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia
{
	// Token: 0x020000AC RID: 172
	public class EncyclopediaPageChangedEvent : EventBase
	{
		// Token: 0x170005C0 RID: 1472
		// (get) Token: 0x06001167 RID: 4455 RVA: 0x000453C5 File Offset: 0x000435C5
		// (set) Token: 0x06001168 RID: 4456 RVA: 0x000453CD File Offset: 0x000435CD
		public EncyclopediaPages NewPage { get; private set; }

		// Token: 0x170005C1 RID: 1473
		// (get) Token: 0x06001169 RID: 4457 RVA: 0x000453D6 File Offset: 0x000435D6
		// (set) Token: 0x0600116A RID: 4458 RVA: 0x000453DE File Offset: 0x000435DE
		public bool NewPageHasHiddenInformation { get; private set; }

		// Token: 0x0600116B RID: 4459 RVA: 0x000453E7 File Offset: 0x000435E7
		public EncyclopediaPageChangedEvent(EncyclopediaPages newPage, bool hasHiddenInformation = false)
		{
			this.NewPage = newPage;
			this.NewPageHasHiddenInformation = hasHiddenInformation;
		}
	}
}
