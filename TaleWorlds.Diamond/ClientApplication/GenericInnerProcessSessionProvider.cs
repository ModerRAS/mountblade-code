using System;
using TaleWorlds.Diamond.InnerProcess;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x02000050 RID: 80
	public class GenericInnerProcessSessionProvider<T> : IClientSessionProvider<T> where T : Client<T>
	{
		// Token: 0x060001F8 RID: 504 RVA: 0x00005DF4 File Offset: 0x00003FF4
		public GenericInnerProcessSessionProvider(InnerProcessManager innerProcessManager, ushort port)
		{
			this._innerProcessManager = innerProcessManager;
			this._port = port;
		}

		// Token: 0x060001F9 RID: 505 RVA: 0x00005E0A File Offset: 0x0000400A
		public IClientSession CreateSession(T session)
		{
			return new InnerProcessClient(this._innerProcessManager, session, (int)this._port);
		}

		// Token: 0x040000B6 RID: 182
		private InnerProcessManager _innerProcessManager;

		// Token: 0x040000B7 RID: 183
		private ushort _port;
	}
}
