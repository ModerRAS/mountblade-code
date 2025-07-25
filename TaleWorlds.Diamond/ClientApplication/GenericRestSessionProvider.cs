using System;
using TaleWorlds.Diamond.Rest;
using TaleWorlds.Library.Http;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x02000051 RID: 81
	public class GenericRestSessionProvider<T> : IClientSessionProvider<T> where T : Client<T>
	{
		// Token: 0x060001FA RID: 506 RVA: 0x00005E23 File Offset: 0x00004023
		public GenericRestSessionProvider(string address, IHttpDriver httpDriver)
		{
			this._address = address;
			this._httpDriver = httpDriver;
		}

		// Token: 0x060001FB RID: 507 RVA: 0x00005E39 File Offset: 0x00004039
		public IClientSession CreateSession(T session)
		{
			return new ClientRestSession(session, this._address, this._httpDriver);
		}

		// Token: 0x040000B8 RID: 184
		private string _address;

		// Token: 0x040000B9 RID: 185
		private IHttpDriver _httpDriver;
	}
}
