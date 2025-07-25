using System;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000021 RID: 33
	[DataContract]
	[Serializable]
	public sealed class SessionCredentials
	{
		// Token: 0x17000026 RID: 38
		// (get) Token: 0x060000AA RID: 170 RVA: 0x0000329E File Offset: 0x0000149E
		// (set) Token: 0x060000AB RID: 171 RVA: 0x000032A6 File Offset: 0x000014A6
		[DataMember]
		public PeerId PeerId { get; private set; }

		// Token: 0x17000027 RID: 39
		// (get) Token: 0x060000AC RID: 172 RVA: 0x000032AF File Offset: 0x000014AF
		// (set) Token: 0x060000AD RID: 173 RVA: 0x000032B7 File Offset: 0x000014B7
		[DataMember]
		public SessionKey SessionKey { get; private set; }

		// Token: 0x060000AE RID: 174 RVA: 0x000032C0 File Offset: 0x000014C0
		[JsonConstructor]
		public SessionCredentials(PeerId peerId, SessionKey sessionKey)
		{
			this.PeerId = peerId;
			this.SessionKey = sessionKey;
		}
	}
}
