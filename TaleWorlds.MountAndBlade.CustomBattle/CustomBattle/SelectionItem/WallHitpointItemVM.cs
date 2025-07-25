using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000028 RID: 40
	public class WallHitpointItemVM : SelectorItemVM
	{
		// Token: 0x1700008C RID: 140
		// (get) Token: 0x060001C7 RID: 455 RVA: 0x0000A645 File Offset: 0x00008845
		// (set) Token: 0x060001C8 RID: 456 RVA: 0x0000A64D File Offset: 0x0000884D
		public string WallState { get; private set; }

		// Token: 0x1700008D RID: 141
		// (get) Token: 0x060001C9 RID: 457 RVA: 0x0000A656 File Offset: 0x00008856
		// (set) Token: 0x060001CA RID: 458 RVA: 0x0000A65E File Offset: 0x0000885E
		public int BreachedWallCount { get; private set; }

		// Token: 0x060001CB RID: 459 RVA: 0x0000A667 File Offset: 0x00008867
		public WallHitpointItemVM(string wallStateName, int breachedWallCount) : base(wallStateName)
		{
			this.WallState = wallStateName;
			this.BreachedWallCount = breachedWallCount;
		}
	}
}
