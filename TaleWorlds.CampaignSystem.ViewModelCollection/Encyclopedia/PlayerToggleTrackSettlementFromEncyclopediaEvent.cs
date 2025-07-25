using System;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia
{
	// Token: 0x020000B0 RID: 176
	public class PlayerToggleTrackSettlementFromEncyclopediaEvent : EventBase
	{
		// Token: 0x170005C2 RID: 1474
		// (get) Token: 0x0600116F RID: 4463 RVA: 0x00045415 File Offset: 0x00043615
		// (set) Token: 0x06001170 RID: 4464 RVA: 0x0004541D File Offset: 0x0004361D
		public bool IsCurrentlyTracked { get; private set; }

		// Token: 0x170005C3 RID: 1475
		// (get) Token: 0x06001171 RID: 4465 RVA: 0x00045426 File Offset: 0x00043626
		// (set) Token: 0x06001172 RID: 4466 RVA: 0x0004542E File Offset: 0x0004362E
		public Settlement ToggledTrackedSettlement { get; private set; }

		// Token: 0x06001173 RID: 4467 RVA: 0x00045437 File Offset: 0x00043637
		public PlayerToggleTrackSettlementFromEncyclopediaEvent(Settlement toggleTrackedSettlement, bool isCurrentlyTracked)
		{
			this.ToggledTrackedSettlement = toggleTrackedSettlement;
			this.IsCurrentlyTracked = isCurrentlyTracked;
		}
	}
}
