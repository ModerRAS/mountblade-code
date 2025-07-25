using System;
using System.Runtime.Serialization;

namespace TaleWorlds.Diamond.Rest
{
	// Token: 0x02000040 RID: 64
	[DataContract]
	[Serializable]
	public class RestObjectRequestMessage : RestRequestMessage
	{
		// Token: 0x1700004B RID: 75
		// (get) Token: 0x06000176 RID: 374 RVA: 0x00004DDC File Offset: 0x00002FDC
		// (set) Token: 0x06000177 RID: 375 RVA: 0x00004DE4 File Offset: 0x00002FE4
		[DataMember]
		public MessageType MessageType { get; private set; }

		// Token: 0x1700004C RID: 76
		// (get) Token: 0x06000178 RID: 376 RVA: 0x00004DED File Offset: 0x00002FED
		// (set) Token: 0x06000179 RID: 377 RVA: 0x00004DF5 File Offset: 0x00002FF5
		[DataMember]
		public SessionCredentials SessionCredentials { get; private set; }

		// Token: 0x1700004D RID: 77
		// (get) Token: 0x0600017A RID: 378 RVA: 0x00004DFE File Offset: 0x00002FFE
		// (set) Token: 0x0600017B RID: 379 RVA: 0x00004E06 File Offset: 0x00003006
		[DataMember]
		public Message Message { get; private set; }

		// Token: 0x0600017C RID: 380 RVA: 0x00004E0F File Offset: 0x0000300F
		public RestObjectRequestMessage()
		{
		}

		// Token: 0x0600017D RID: 381 RVA: 0x00004E17 File Offset: 0x00003017
		public RestObjectRequestMessage(SessionCredentials sessionCredentials, Message message, MessageType messageType)
		{
			this.Message = message;
			this.MessageType = messageType;
			this.SessionCredentials = sessionCredentials;
		}
	}
}
