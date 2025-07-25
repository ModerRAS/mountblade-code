using System;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x0200010F RID: 271
	public class ClanRoleAssignedThroughClanScreenEvent : EventBase
	{
		// Token: 0x170008FB RID: 2299
		// (get) Token: 0x06001A28 RID: 6696 RVA: 0x0005E8B2 File Offset: 0x0005CAB2
		// (set) Token: 0x06001A29 RID: 6697 RVA: 0x0005E8BA File Offset: 0x0005CABA
		public SkillEffect.PerkRole Role { get; private set; }

		// Token: 0x170008FC RID: 2300
		// (get) Token: 0x06001A2A RID: 6698 RVA: 0x0005E8C3 File Offset: 0x0005CAC3
		// (set) Token: 0x06001A2B RID: 6699 RVA: 0x0005E8CB File Offset: 0x0005CACB
		public Hero HeroObject { get; private set; }

		// Token: 0x06001A2C RID: 6700 RVA: 0x0005E8D4 File Offset: 0x0005CAD4
		public ClanRoleAssignedThroughClanScreenEvent(SkillEffect.PerkRole role, Hero heroObject)
		{
			this.Role = role;
			this.HeroObject = heroObject;
		}
	}
}
