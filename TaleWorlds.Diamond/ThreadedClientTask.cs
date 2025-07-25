using System;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000026 RID: 38
	internal abstract class ThreadedClientTask
	{
		// Token: 0x17000033 RID: 51
		// (get) Token: 0x060000D4 RID: 212 RVA: 0x00003699 File Offset: 0x00001899
		// (set) Token: 0x060000D5 RID: 213 RVA: 0x000036A1 File Offset: 0x000018A1
		public IClient Client { get; private set; }

		// Token: 0x060000D6 RID: 214 RVA: 0x000036AA File Offset: 0x000018AA
		protected ThreadedClientTask(IClient client)
		{
			this.Client = client;
		}

		// Token: 0x060000D7 RID: 215
		public abstract void DoJob();
	}
}
