using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x02000044 RID: 68
	public class InnerProcessClient : IClientSession, IInnerProcessClient
	{
		// Token: 0x17000054 RID: 84
		// (get) Token: 0x0600018F RID: 399 RVA: 0x00004F18 File Offset: 0x00003118
		// (set) Token: 0x06000190 RID: 400 RVA: 0x00004F20 File Offset: 0x00003120
		public InnerProcessManager InnerProcessManager { get; private set; }

		// Token: 0x17000055 RID: 85
		// (get) Token: 0x06000191 RID: 401 RVA: 0x00004F29 File Offset: 0x00003129
		internal bool HasMessage
		{
			get
			{
				return this._receivedMessages.Count > 0;
			}
		}

		// Token: 0x06000192 RID: 402 RVA: 0x00004F39 File Offset: 0x00003139
		public InnerProcessClient(InnerProcessManager innerProcessManager, IClient client, int port)
		{
			this.InnerProcessManager = innerProcessManager;
			this._receivedMessages = new Queue<Message>();
			this._associatedServerSession = null;
			this._client = client;
			this._port = port;
		}

		// Token: 0x06000193 RID: 403 RVA: 0x00004F68 File Offset: 0x00003168
		void IClientSession.Connect()
		{
			this.InnerProcessManager.RequestConnection(this, this._port);
		}

		// Token: 0x06000194 RID: 404 RVA: 0x00004F7C File Offset: 0x0000317C
		void IClientSession.Disconnect()
		{
		}

		// Token: 0x06000195 RID: 405 RVA: 0x00004F80 File Offset: 0x00003180
		void IClientSession.Tick()
		{
			while (this.HasMessage)
			{
				Message message = this.DequeueMessage();
				this.HandleMessage(message);
			}
		}

		// Token: 0x06000196 RID: 406 RVA: 0x00004FA5 File Offset: 0x000031A5
		void IInnerProcessClient.EnqueueMessage(Message message)
		{
			this._receivedMessages.Enqueue(message);
		}

		// Token: 0x06000197 RID: 407 RVA: 0x00004FB4 File Offset: 0x000031B4
		internal Message DequeueMessage()
		{
			Message result = null;
			if (this._receivedMessages.Count > 0)
			{
				result = this._receivedMessages.Dequeue();
			}
			return result;
		}

		// Token: 0x06000198 RID: 408 RVA: 0x00004FE0 File Offset: 0x000031E0
		async Task<LoginResult> IClientSession.Login(LoginMessage message)
		{
			InnerProcessMessageTask innerProcessMessageTask = new InnerProcessMessageTask(this._sessionCredentials, message, InnerProcessMessageTaskType.Login);
			this._associatedServerSession.EnqueueMessageTask(innerProcessMessageTask);
			await innerProcessMessageTask.WaitUntilFinished();
			LoginResult loginResult = (LoginResult)innerProcessMessageTask.FunctionResult;
			this._sessionCredentials = new SessionCredentials(loginResult.PeerId, loginResult.SessionKey);
			return loginResult;
		}

		// Token: 0x06000199 RID: 409 RVA: 0x00005030 File Offset: 0x00003230
		void IClientSession.SendMessage(Message message)
		{
			InnerProcessMessageTask messageTask = new InnerProcessMessageTask(this._sessionCredentials, message, InnerProcessMessageTaskType.Message);
			this._associatedServerSession.EnqueueMessageTask(messageTask);
		}

		// Token: 0x0600019A RID: 410 RVA: 0x00005058 File Offset: 0x00003258
		async Task<TResult> IClientSession.CallFunction<TResult>(Message message)
		{
			InnerProcessMessageTask innerProcessMessageTask = new InnerProcessMessageTask(this._sessionCredentials, message, InnerProcessMessageTaskType.Function);
			this._associatedServerSession.EnqueueMessageTask(innerProcessMessageTask);
			await innerProcessMessageTask.WaitUntilFinished();
			return (TResult)((object)innerProcessMessageTask.FunctionResult);
		}

		// Token: 0x0600019B RID: 411 RVA: 0x000050A5 File Offset: 0x000032A5
		void IInnerProcessClient.HandleConnected(InnerProcessServerSession serverSession)
		{
			this._associatedServerSession = serverSession;
			this.OnConnected();
		}

		// Token: 0x0600019C RID: 412 RVA: 0x000050B4 File Offset: 0x000032B4
		private void HandleMessage(Message message)
		{
			this._client.HandleMessage(message);
		}

		// Token: 0x0600019D RID: 413 RVA: 0x000050C2 File Offset: 0x000032C2
		private void OnConnected()
		{
			this._client.OnConnected();
		}

		// Token: 0x0600019E RID: 414 RVA: 0x000050CF File Offset: 0x000032CF
		private void OnCantConnect()
		{
			this._client.OnCantConnect();
		}

		// Token: 0x0600019F RID: 415 RVA: 0x000050DC File Offset: 0x000032DC
		private void OnDisconnected()
		{
			this._client.OnDisconnected();
		}

		// Token: 0x060001A0 RID: 416 RVA: 0x000050E9 File Offset: 0x000032E9
		public Task<bool> CheckConnection()
		{
			return this._client.CheckConnection();
		}

		// Token: 0x04000090 RID: 144
		private InnerProcessServerSession _associatedServerSession;

		// Token: 0x04000091 RID: 145
		private Queue<Message> _receivedMessages;

		// Token: 0x04000092 RID: 146
		private SessionCredentials _sessionCredentials;

		// Token: 0x04000093 RID: 147
		private IClient _client;

		// Token: 0x04000094 RID: 148
		private int _port;
	}
}
