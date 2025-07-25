using System;
using TaleWorlds.Core;
using TaleWorlds.Library.EventSystem;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper
{
	// Token: 0x02000127 RID: 295
	public class FocusAddedByPlayerEvent : EventBase
	{
		// Token: 0x17000A09 RID: 2569
		// (get) Token: 0x06001D33 RID: 7475 RVA: 0x00068FC1 File Offset: 0x000671C1
		// (set) Token: 0x06001D34 RID: 7476 RVA: 0x00068FC9 File Offset: 0x000671C9
		public Hero AddedPlayer { get; private set; }

		// Token: 0x17000A0A RID: 2570
		// (get) Token: 0x06001D35 RID: 7477 RVA: 0x00068FD2 File Offset: 0x000671D2
		// (set) Token: 0x06001D36 RID: 7478 RVA: 0x00068FDA File Offset: 0x000671DA
		public SkillObject AddedSkill { get; private set; }

		// Token: 0x06001D37 RID: 7479 RVA: 0x00068FE3 File Offset: 0x000671E3
		public FocusAddedByPlayerEvent(Hero addedPlayer, SkillObject addedSkill)
		{
			this.AddedPlayer = addedPlayer;
			this.AddedSkill = addedSkill;
		}
	}
}
