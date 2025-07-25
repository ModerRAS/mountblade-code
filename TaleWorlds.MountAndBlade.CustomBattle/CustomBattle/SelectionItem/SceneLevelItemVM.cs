using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000025 RID: 37
	public class SceneLevelItemVM : SelectorItemVM
	{
		// Token: 0x17000089 RID: 137
		// (get) Token: 0x060001BE RID: 446 RVA: 0x0000A5DC File Offset: 0x000087DC
		// (set) Token: 0x060001BF RID: 447 RVA: 0x0000A5E4 File Offset: 0x000087E4
		public int Level { get; private set; }

		// Token: 0x060001C0 RID: 448 RVA: 0x0000A5ED File Offset: 0x000087ED
		public SceneLevelItemVM(int level) : base(level.ToString())
		{
			this.Level = level;
		}
	}
}
