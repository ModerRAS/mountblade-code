using System;
using TaleWorlds.Core.ViewModelCollection.Selector;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000021 RID: 33
	public class GameTypeItemVM : SelectorItemVM
	{
		// Token: 0x17000083 RID: 131
		// (get) Token: 0x060001AD RID: 429 RVA: 0x0000A480 File Offset: 0x00008680
		// (set) Token: 0x060001AE RID: 430 RVA: 0x0000A488 File Offset: 0x00008688
		public CustomBattleGameType GameType { get; private set; }

		// Token: 0x060001AF RID: 431 RVA: 0x0000A491 File Offset: 0x00008691
		public GameTypeItemVM(string gameTypeName, CustomBattleGameType gameType) : base(gameTypeName)
		{
			this.GameType = gameType;
		}
	}
}
