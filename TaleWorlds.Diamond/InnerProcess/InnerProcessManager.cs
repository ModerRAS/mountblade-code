using System;
using System.Collections.Generic;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000046 RID: 70
	public class InnerProcessManager
	{
		// Token: 0x060001A3 RID: 419 RVA: 0x000050F6 File Offset: 0x000032F6
		public InnerProcessManager()
		{
			this._activeServers = new Dictionary<int, IInnerProcessServer>();
			this._connectionRequests = new List<InnerProcessConnectionRequest>();
		}

		// Token: 0x060001A4 RID: 420 RVA: 0x00005114 File Offset: 0x00003314
		internal void Activate(IInnerProcessServer server, int port)
		{
			this._activeServers.Add(port, server);
		}

		// Token: 0x060001A5 RID: 421 RVA: 0x00005123 File Offset: 0x00003323
		internal void RequestConnection(IInnerProcessClient client, int port)
		{
			this._connectionRequests.Add(new InnerProcessConnectionRequest(client, port));
		}

		// Token: 0x060001A6 RID: 422 RVA: 0x00005138 File Offset: 0x00003338
		public void Update()
		{
			for (int i = 0; i < this._connectionRequests.Count; i++)
			{
				InnerProcessConnectionRequest innerProcessConnectionRequest = this._connectionRequests[i];
				IInnerProcessClient client = innerProcessConnectionRequest.Client;
				int port = innerProcessConnectionRequest.Port;
				IInnerProcessServer innerProcessServer;
				if (this._activeServers.TryGetValue(port, out innerProcessServer))
				{
					this._connectionRequests.RemoveAt(i);
					i--;
					InnerProcessServerSession innerProcessServerSession = innerProcessServer.AddNewConnection(client);
					client.HandleConnected(innerProcessServerSession);
					innerProcessServerSession.HandleConnected(client);
				}
			}
			foreach (IInnerProcessServer innerProcessServer2 in this._activeServers.Values)
			{
				innerProcessServer2.Update();
			}
		}

		// Token: 0x04000095 RID: 149
		private Dictionary<int, IInnerProcessServer> _activeServers;

		// Token: 0x04000096 RID: 150
		private List<InnerProcessConnectionRequest> _connectionRequests;
	}
}
