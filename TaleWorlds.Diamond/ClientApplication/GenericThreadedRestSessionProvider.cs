using System;
using TaleWorlds.Diamond.Rest;
using TaleWorlds.Library.Http;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x02000052 RID: 82
	public class GenericThreadedRestSessionProvider<T> : IClientSessionProvider<T> where T : Client<T>
	{
		// Token: 0x060001FC RID: 508 RVA: 0x00005E52 File Offset: 0x00004052
		public GenericThreadedRestSessionProvider(string address, IHttpDriver httpDriver)
		{
			this._address = address;
			this._httpDriver = httpDriver;
		}

		// Token: 0x060001FD RID: 509 RVA: 0x00005E68 File Offset: 0x00004068
		public IClientSession CreateSession(T client)
		{
			int threadSleepTime;
			if (!client.Application.Parameters.TryGetParameterAsInt("ThreadedClientSession.ThreadSleepTime", out threadSleepTime))
			{
				threadSleepTime = 100;
			}
			ThreadedClient threadedClient = new ThreadedClient(client);
			ClientRestSession session = new ClientRestSession(threadedClient, this._address, this._httpDriver);
			return new ThreadedClientSession(threadedClient, session, threadSleepTime);
		}

		// Token: 0x040000BA RID: 186
		public const int DefaultThreadSleepTime = 100;

		// Token: 0x040000BB RID: 187
		private string _address;

		// Token: 0x040000BC RID: 188
		private IHttpDriver _httpDriver;
	}
}
