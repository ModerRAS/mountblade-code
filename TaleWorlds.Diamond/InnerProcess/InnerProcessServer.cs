using System;
using System.Collections.Generic;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000048 RID: 72
	public abstract class InnerProcessServer<T> : IInnerProcessServer where T : InnerProcessServerSession, new()
	{
		// Token: 0x17000058 RID: 88
		// (get) Token: 0x060001AC RID: 428 RVA: 0x00005230 File Offset: 0x00003430
		// (set) Token: 0x060001AD RID: 429 RVA: 0x00005238 File Offset: 0x00003438
		public InnerProcessManager InnerProcessManager { get; private set; }

		// Token: 0x17000059 RID: 89
		// (get) Token: 0x060001AE RID: 430 RVA: 0x00005241 File Offset: 0x00003441
		public IEnumerable<T> Sessions
		{
			get
			{
				return this._clientSessions;
			}
		}

		// Token: 0x060001AF RID: 431 RVA: 0x00005249 File Offset: 0x00003449
		protected InnerProcessServer(InnerProcessManager innerProcessManager)
		{
			this.InnerProcessManager = innerProcessManager;
			this._clientSessions = new List<T>();
		}

		// Token: 0x060001B0 RID: 432 RVA: 0x00005263 File Offset: 0x00003463
		public void Host(int port)
		{
			this.InnerProcessManager.Activate(this, port);
		}

		// Token: 0x060001B1 RID: 433 RVA: 0x00005274 File Offset: 0x00003474
		InnerProcessServerSession IInnerProcessServer.AddNewConnection(IInnerProcessClient client)
		{
			T t = Activator.CreateInstance<T>();
			this._clientSessions.Add(t);
			return t;
		}

		// Token: 0x060001B2 RID: 434 RVA: 0x0000529C File Offset: 0x0000349C
		void IInnerProcessServer.Update()
		{
			foreach (T t in this._clientSessions)
			{
				while (t.HasMessage)
				{
					InnerProcessMessageTask innerProcessMessageTask = t.DequeueMessage();
					SessionCredentials sessionCredentials = innerProcessMessageTask.SessionCredentials;
					Message message = innerProcessMessageTask.Message;
					switch (innerProcessMessageTask.Type)
					{
					case InnerProcessMessageTaskType.Login:
					{
						LoginResult loginResult = this.Login(t, (LoginMessage)message, new InnerProcessConnectionInformation());
						if (loginResult.Successful)
						{
							innerProcessMessageTask.SetFinishedAsSuccessful(loginResult);
						}
						break;
					}
					case InnerProcessMessageTaskType.Message:
						this.HandleMessage(t, sessionCredentials, message);
						innerProcessMessageTask.SetFinishedAsSuccessful(null);
						break;
					case InnerProcessMessageTaskType.Function:
					{
						ValueTuple<HandlerResult, FunctionResult> valueTuple = this.CallFunction(t, sessionCredentials, message);
						if (valueTuple.Item1.IsSuccessful)
						{
							innerProcessMessageTask.SetFinishedAsSuccessful(valueTuple.Item2);
						}
						break;
					}
					}
				}
			}
			this.OnUpdate();
		}

		// Token: 0x060001B3 RID: 435
		protected abstract void HandleMessage(T serverSession, SessionCredentials sessionCredentials, Message message);

		// Token: 0x060001B4 RID: 436
		protected abstract ValueTuple<HandlerResult, FunctionResult> CallFunction(T serverSession, SessionCredentials sessionCredentials, Message message);

		// Token: 0x060001B5 RID: 437
		protected abstract LoginResult Login(T serverSession, LoginMessage message, InnerProcessConnectionInformation connectionInformation);

		// Token: 0x060001B6 RID: 438 RVA: 0x000053A4 File Offset: 0x000035A4
		protected virtual void OnUpdate()
		{
		}

		// Token: 0x0400009A RID: 154
		private List<T> _clientSessions;
	}
}
