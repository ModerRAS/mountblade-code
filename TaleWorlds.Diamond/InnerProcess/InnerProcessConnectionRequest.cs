using System;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000047 RID: 71
	internal class InnerProcessConnectionRequest
	{
		// Token: 0x17000056 RID: 86
		// (get) Token: 0x060001A7 RID: 423 RVA: 0x000051F8 File Offset: 0x000033F8
		// (set) Token: 0x060001A8 RID: 424 RVA: 0x00005200 File Offset: 0x00003400
		public IInnerProcessClient Client { get; private set; }

		// Token: 0x17000057 RID: 87
		// (get) Token: 0x060001A9 RID: 425 RVA: 0x00005209 File Offset: 0x00003409
		// (set) Token: 0x060001AA RID: 426 RVA: 0x00005211 File Offset: 0x00003411
		public int Port { get; private set; }

		// Token: 0x060001AB RID: 427 RVA: 0x0000521A File Offset: 0x0000341A
		public InnerProcessConnectionRequest(IInnerProcessClient client, int port)
		{
			this.Client = client;
			this.Port = port;
		}
	}
}
