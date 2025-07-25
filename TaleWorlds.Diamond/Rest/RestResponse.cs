using System;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace TaleWorlds.Diamond.Rest
{
	// Token: 0x02000043 RID: 67
	[DataContract]
	[Serializable]
	public sealed class RestResponse : RestData
	{
		// Token: 0x1700004F RID: 79
		// (get) Token: 0x06000181 RID: 385 RVA: 0x00004E4D File Offset: 0x0000304D
		// (set) Token: 0x06000182 RID: 386 RVA: 0x00004E55 File Offset: 0x00003055
		[DataMember]
		public bool Successful { get; private set; }

		// Token: 0x17000050 RID: 80
		// (get) Token: 0x06000183 RID: 387 RVA: 0x00004E5E File Offset: 0x0000305E
		// (set) Token: 0x06000184 RID: 388 RVA: 0x00004E66 File Offset: 0x00003066
		[DataMember]
		public string SuccessfulReason { get; private set; }

		// Token: 0x17000051 RID: 81
		// (get) Token: 0x06000185 RID: 389 RVA: 0x00004E6F File Offset: 0x0000306F
		// (set) Token: 0x06000186 RID: 390 RVA: 0x00004E77 File Offset: 0x00003077
		[DataMember]
		public RestFunctionResult FunctionResult { get; set; }

		// Token: 0x17000052 RID: 82
		// (get) Token: 0x06000187 RID: 391 RVA: 0x00004E80 File Offset: 0x00003080
		// (set) Token: 0x06000188 RID: 392 RVA: 0x00004E88 File Offset: 0x00003088
		[DataMember]
		public byte[] UserCertificate { get; set; }

		// Token: 0x17000053 RID: 83
		// (get) Token: 0x06000189 RID: 393 RVA: 0x00004E91 File Offset: 0x00003091
		public int RemainingMessageCount
		{
			get
			{
				if (this._responseMessages != null)
				{
					return this._responseMessages.Count;
				}
				return 0;
			}
		}

		// Token: 0x0600018A RID: 394 RVA: 0x00004EA8 File Offset: 0x000030A8
		public RestResponse()
		{
			this._responseMessages = new List<RestResponseMessage>();
		}

		// Token: 0x0600018B RID: 395 RVA: 0x00004EBB File Offset: 0x000030BB
		public void SetSuccessful(bool successful, string successfulReason)
		{
			this.Successful = successful;
			this.SuccessfulReason = successfulReason;
		}

		// Token: 0x0600018C RID: 396 RVA: 0x00004ECB File Offset: 0x000030CB
		public RestResponseMessage TryDequeueMessage()
		{
			if (this._responseMessages != null && this._responseMessages.Count > 0)
			{
				RestResponseMessage result = this._responseMessages[0];
				this._responseMessages.RemoveAt(0);
				return result;
			}
			return null;
		}

		// Token: 0x0600018D RID: 397 RVA: 0x00004EFD File Offset: 0x000030FD
		public void ClearMessageQueue()
		{
			this._responseMessages.Clear();
		}

		// Token: 0x0600018E RID: 398 RVA: 0x00004F0A File Offset: 0x0000310A
		public void EnqueueMessage(RestResponseMessage message)
		{
			this._responseMessages.Add(message);
		}

		// Token: 0x0400008C RID: 140
		[DataMember]
		private List<RestResponseMessage> _responseMessages;
	}
}
