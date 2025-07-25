using System;
using Newtonsoft.Json;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000020 RID: 32
	[Serializable]
	public class PSAccessObject : AccessObject
	{
		// Token: 0x17000024 RID: 36
		// (get) Token: 0x060000A4 RID: 164 RVA: 0x00003253 File Offset: 0x00001453
		// (set) Token: 0x060000A5 RID: 165 RVA: 0x0000325B File Offset: 0x0000145B
		[JsonProperty]
		public int IssuerId { get; private set; }

		// Token: 0x17000025 RID: 37
		// (get) Token: 0x060000A6 RID: 166 RVA: 0x00003264 File Offset: 0x00001464
		// (set) Token: 0x060000A7 RID: 167 RVA: 0x0000326C File Offset: 0x0000146C
		[JsonProperty]
		public string AuthCode { get; private set; }

		// Token: 0x060000A8 RID: 168 RVA: 0x00003275 File Offset: 0x00001475
		public PSAccessObject()
		{
		}

		// Token: 0x060000A9 RID: 169 RVA: 0x0000327D File Offset: 0x0000147D
		public PSAccessObject(int issuerId, string authCode)
		{
			base.Type = "PS";
			this.IssuerId = issuerId;
			this.AuthCode = authCode;
		}
	}
}
