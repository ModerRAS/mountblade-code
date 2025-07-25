using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000026 RID: 38
	public class SeasonItemVM : SelectorItemVM
	{
		// Token: 0x1700008A RID: 138
		// (get) Token: 0x060001C1 RID: 449 RVA: 0x0000A603 File Offset: 0x00008803
		// (set) Token: 0x060001C2 RID: 450 RVA: 0x0000A60B File Offset: 0x0000880B
		public string SeasonId { get; private set; }

		// Token: 0x060001C3 RID: 451 RVA: 0x0000A614 File Offset: 0x00008814
		public SeasonItemVM(string seasonName, string seasonId) : base(seasonName)
		{
			this.SeasonId = seasonId;
		}
	}
}
