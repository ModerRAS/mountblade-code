using System;
using System.Collections.Generic;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x0200004A RID: 74
	public class InnerProcessServerSession
	{
		// Token: 0x1700005A RID: 90
		// (get) Token: 0x060001B9 RID: 441 RVA: 0x000053A6 File Offset: 0x000035A6
		internal bool HasMessage
		{
			get
			{
				return this._messageTasks.Count > 0;
			}
		}

		// Token: 0x060001BA RID: 442 RVA: 0x000053B6 File Offset: 0x000035B6
		public InnerProcessServerSession()
		{
			this._messageTasks = new Queue<InnerProcessMessageTask>();
		}

		// Token: 0x060001BB RID: 443 RVA: 0x000053C9 File Offset: 0x000035C9
		public void SendMessage(Message message)
		{
			this._associatedClientSession.EnqueueMessage(message);
		}

		// Token: 0x060001BC RID: 444 RVA: 0x000053D7 File Offset: 0x000035D7
		internal void EnqueueMessageTask(InnerProcessMessageTask messageTask)
		{
			this._messageTasks.Enqueue(messageTask);
		}

		// Token: 0x060001BD RID: 445 RVA: 0x000053E8 File Offset: 0x000035E8
		internal InnerProcessMessageTask DequeueMessage()
		{
			InnerProcessMessageTask result = null;
			if (this._messageTasks.Count > 0)
			{
				result = this._messageTasks.Dequeue();
			}
			return result;
		}

		// Token: 0x060001BE RID: 446 RVA: 0x00005412 File Offset: 0x00003612
		internal void HandleConnected(IInnerProcessClient clientSession)
		{
			this._associatedClientSession = clientSession;
		}

		// Token: 0x1700005B RID: 91
		// (get) Token: 0x060001BF RID: 447 RVA: 0x0000541B File Offset: 0x0000361B
		// (set) Token: 0x060001C0 RID: 448 RVA: 0x00005423 File Offset: 0x00003623
		public PeerId PeerId { get; private set; }

		// Token: 0x1700005C RID: 92
		// (get) Token: 0x060001C1 RID: 449 RVA: 0x0000542C File Offset: 0x0000362C
		// (set) Token: 0x060001C2 RID: 450 RVA: 0x00005434 File Offset: 0x00003634
		public SessionKey SessionKey { get; private set; }

		// Token: 0x060001C3 RID: 451 RVA: 0x0000543D File Offset: 0x0000363D
		public void AssignSession(PeerId peerId, SessionKey sessionKey)
		{
			this.PeerId = peerId;
			this.SessionKey = sessionKey;
		}

		// Token: 0x0400009B RID: 155
		private Queue<InnerProcessMessageTask> _messageTasks;

		// Token: 0x0400009C RID: 156
		private IInnerProcessClient _associatedClientSession;
	}
}
