using System;
using System.Runtime.Serialization;

namespace TaleWorlds.Diamond.Rest
{
	// Token: 0x02000042 RID: 66
	[DataContract]
	[Serializable]
	public abstract class RestRequestMessage : RestData
	{
		// Token: 0x1700004E RID: 78
		// (get) Token: 0x0600017E RID: 382 RVA: 0x00004E34 File Offset: 0x00003034
		// (set) Token: 0x0600017F RID: 383 RVA: 0x00004E3C File Offset: 0x0000303C
		[DataMember]
		public byte[] UserCertificate { get; set; }
	}
}
