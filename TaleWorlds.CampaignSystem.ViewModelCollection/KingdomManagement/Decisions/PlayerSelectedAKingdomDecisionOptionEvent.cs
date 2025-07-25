using System;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions
{
	// Token: 0x02000069 RID: 105
	public class PlayerSelectedAKingdomDecisionOptionEvent : EventBase
	{
		// Token: 0x170002DA RID: 730
		// (get) Token: 0x0600091D RID: 2333 RVA: 0x00025FE0 File Offset: 0x000241E0
		// (set) Token: 0x0600091E RID: 2334 RVA: 0x00025FE8 File Offset: 0x000241E8
		public DecisionOutcome Option { get; private set; }

		// Token: 0x0600091F RID: 2335 RVA: 0x00025FF1 File Offset: 0x000241F1
		public PlayerSelectedAKingdomDecisionOptionEvent(DecisionOutcome option)
		{
			this.Option = option;
		}
	}
}
