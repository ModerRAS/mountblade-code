using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000023 RID: 35
	public class PlayerSideItemVM : SelectorItemVM
	{
		// Token: 0x17000087 RID: 135
		// (get) Token: 0x060001B8 RID: 440 RVA: 0x0000A59A File Offset: 0x0000879A
		// (set) Token: 0x060001B9 RID: 441 RVA: 0x0000A5A2 File Offset: 0x000087A2
		public CustomBattlePlayerSide PlayerSide { get; private set; }

		// Token: 0x060001BA RID: 442 RVA: 0x0000A5AB File Offset: 0x000087AB
		public PlayerSideItemVM(string playerSideName, CustomBattlePlayerSide playerSide) : base(playerSideName)
		{
			this.PlayerSide = playerSide;
		}
	}
}
