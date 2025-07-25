using System;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000045 RID: 69
	public interface IInnerProcessClient
	{
		// Token: 0x060001A1 RID: 417
		void EnqueueMessage(Message message);

		// Token: 0x060001A2 RID: 418
		void HandleConnected(InnerProcessServerSession serverSession);
	}
}
