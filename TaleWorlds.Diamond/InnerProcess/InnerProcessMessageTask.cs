using System;
using System.Threading.Tasks;

namespace TaleWorlds.Diamond.InnerProcess
{
	// Token: 0x0200004B RID: 75
	internal class InnerProcessMessageTask
	{
		// Token: 0x1700005D RID: 93
		// (get) Token: 0x060001C4 RID: 452 RVA: 0x0000544D File Offset: 0x0000364D
		// (set) Token: 0x060001C5 RID: 453 RVA: 0x00005455 File Offset: 0x00003655
		public SessionCredentials SessionCredentials { get; private set; }

		// Token: 0x1700005E RID: 94
		// (get) Token: 0x060001C6 RID: 454 RVA: 0x0000545E File Offset: 0x0000365E
		// (set) Token: 0x060001C7 RID: 455 RVA: 0x00005466 File Offset: 0x00003666
		public Message Message { get; private set; }

		// Token: 0x1700005F RID: 95
		// (get) Token: 0x060001C8 RID: 456 RVA: 0x0000546F File Offset: 0x0000366F
		// (set) Token: 0x060001C9 RID: 457 RVA: 0x00005477 File Offset: 0x00003677
		public InnerProcessMessageTaskType Type { get; private set; }

		// Token: 0x17000060 RID: 96
		// (get) Token: 0x060001CA RID: 458 RVA: 0x00005480 File Offset: 0x00003680
		// (set) Token: 0x060001CB RID: 459 RVA: 0x00005488 File Offset: 0x00003688
		public bool Finished { get; private set; }

		// Token: 0x17000061 RID: 97
		// (get) Token: 0x060001CC RID: 460 RVA: 0x00005491 File Offset: 0x00003691
		// (set) Token: 0x060001CD RID: 461 RVA: 0x00005499 File Offset: 0x00003699
		public bool Successful { get; private set; }

		// Token: 0x17000062 RID: 98
		// (get) Token: 0x060001CE RID: 462 RVA: 0x000054A2 File Offset: 0x000036A2
		// (set) Token: 0x060001CF RID: 463 RVA: 0x000054AA File Offset: 0x000036AA
		public FunctionResult FunctionResult { get; private set; }

		// Token: 0x060001D0 RID: 464 RVA: 0x000054B3 File Offset: 0x000036B3
		public InnerProcessMessageTask(SessionCredentials sessionCredentials, Message message, InnerProcessMessageTaskType type)
		{
			this.SessionCredentials = sessionCredentials;
			this.Message = message;
			this.Type = type;
			this._taskCompletionSource = new TaskCompletionSource<bool>();
		}

		// Token: 0x060001D1 RID: 465 RVA: 0x000054DC File Offset: 0x000036DC
		public async Task WaitUntilFinished()
		{
			await this._taskCompletionSource.Task;
		}

		// Token: 0x060001D2 RID: 466 RVA: 0x00005521 File Offset: 0x00003721
		public void SetFinishedAsSuccessful(FunctionResult functionResult)
		{
			this.FunctionResult = functionResult;
			this.Successful = true;
			this.Finished = true;
			this._taskCompletionSource.SetResult(true);
		}

		// Token: 0x060001D3 RID: 467 RVA: 0x00005544 File Offset: 0x00003744
		public void SetFinishedAsFailed()
		{
			this.Successful = false;
			this.Finished = true;
			this._taskCompletionSource.SetResult(true);
		}

		// Token: 0x040000A5 RID: 165
		private TaskCompletionSource<bool> _taskCompletionSource;
	}
}
