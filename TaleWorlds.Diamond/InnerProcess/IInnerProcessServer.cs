using System;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000049 RID: 73
	public interface IInnerProcessServer
	{
		// Token: 0x060001B7 RID: 439
		InnerProcessServerSession AddNewConnection(IInnerProcessClient client);

		// Token: 0x060001B8 RID: 440
		void Update();
	}
}
