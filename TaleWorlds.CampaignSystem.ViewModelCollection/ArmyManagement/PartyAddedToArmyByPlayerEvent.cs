using System;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement
{
	// Token: 0x02000140 RID: 320
	public class PartyAddedToArmyByPlayerEvent : EventBase
	{
		// Token: 0x17000ADE RID: 2782
		// (get) Token: 0x06001F8A RID: 8074 RVA: 0x00070358 File Offset: 0x0006E558
		// (set) Token: 0x06001F8B RID: 8075 RVA: 0x00070360 File Offset: 0x0006E560
		public MobileParty AddedParty { get; private set; }

		// Token: 0x06001F8C RID: 8076 RVA: 0x00070369 File Offset: 0x0006E569
		public PartyAddedToArmyByPlayerEvent(MobileParty addedParty)
		{
			this.AddedParty = addedParty;
		}
	}
}
