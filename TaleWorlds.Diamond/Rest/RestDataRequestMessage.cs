using System;
using System.Runtime.Serialization;
using TaleWorlds.Library;

namespace TaleWorlds.Diamond.Rest
{
	// Token: 0x0200003F RID: 63
	[DataContract]
	[Serializable]
	public class RestDataRequestMessage : RestRequestMessage
	{
		// Token: 0x17000047 RID: 71
		// (get) Token: 0x0600016A RID: 362 RVA: 0x00004D17 File Offset: 0x00002F17
		// (set) Token: 0x0600016B RID: 363 RVA: 0x00004D1F File Offset: 0x00002F1F
		[DataMember]
		public MessageType MessageType { get; private set; }

		// Token: 0x17000048 RID: 72
		// (get) Token: 0x0600016C RID: 364 RVA: 0x00004D28 File Offset: 0x00002F28
		// (set) Token: 0x0600016D RID: 365 RVA: 0x00004D30 File Offset: 0x00002F30
		[DataMember]
		public SessionCredentials SessionCredentials { get; private set; }

		// Token: 0x17000049 RID: 73
		// (get) Token: 0x0600016E RID: 366 RVA: 0x00004D39 File Offset: 0x00002F39
		// (set) Token: 0x0600016F RID: 367 RVA: 0x00004D41 File Offset: 0x00002F41
		[DataMember]
		public byte[] MessageData { get; private set; }

		// Token: 0x1700004A RID: 74
		// (get) Token: 0x06000170 RID: 368 RVA: 0x00004D4A File Offset: 0x00002F4A
		// (set) Token: 0x06000171 RID: 369 RVA: 0x00004D52 File Offset: 0x00002F52
		[DataMember]
		public string MessageName { get; private set; }

		// Token: 0x06000172 RID: 370 RVA: 0x00004D5B File Offset: 0x00002F5B
		public Message GetMessage()
		{
			return (Message)Common.DeserializeObject(this.MessageData);
		}

		// Token: 0x06000173 RID: 371 RVA: 0x00004D6D File Offset: 0x00002F6D
		public RestDataRequestMessage()
		{
		}

		// Token: 0x06000174 RID: 372 RVA: 0x00004D75 File Offset: 0x00002F75
		public RestDataRequestMessage(SessionCredentials sessionCredentials, Message message, MessageType messageType)
		{
			this.MessageData = Common.SerializeObject(message);
			this.MessageType = messageType;
			this.SessionCredentials = sessionCredentials;
			this.MessageName = message.GetType().Name;
		}

		// Token: 0x06000175 RID: 373 RVA: 0x00004DA8 File Offset: 0x00002FA8
		public override string ToString()
		{
			return string.Concat(new object[]
			{
				"Rest Data Request Message: ",
				this.MessageName,
				"-",
				this.MessageType
			});
		}
	}
}
