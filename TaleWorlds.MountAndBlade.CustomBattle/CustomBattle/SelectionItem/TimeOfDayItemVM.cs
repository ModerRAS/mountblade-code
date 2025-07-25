using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000027 RID: 39
	public class TimeOfDayItemVM : SelectorItemVM
	{
		// Token: 0x1700008B RID: 139
		// (get) Token: 0x060001C4 RID: 452 RVA: 0x0000A624 File Offset: 0x00008824
		// (set) Token: 0x060001C5 RID: 453 RVA: 0x0000A62C File Offset: 0x0000882C
		public int TimeOfDay { get; private set; }

		// Token: 0x060001C6 RID: 454 RVA: 0x0000A635 File Offset: 0x00008835
		public TimeOfDayItemVM(string timeOfDayName, int timeOfDay) : base(timeOfDayName)
		{
			this.TimeOfDay = timeOfDay;
		}
	}
}
