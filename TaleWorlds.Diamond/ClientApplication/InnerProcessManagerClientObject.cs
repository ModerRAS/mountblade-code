using System;
using TaleWorlds.Diamond.InnerProcess;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x02000053 RID: 83
	public class InnerProcessManagerClientObject : DiamondClientApplicationObject
	{
		// Token: 0x1700006D RID: 109
		// (get) Token: 0x060001FE RID: 510 RVA: 0x00005EBB File Offset: 0x000040BB
		// (set) Token: 0x060001FF RID: 511 RVA: 0x00005EC3 File Offset: 0x000040C3
		public InnerProcessManager InnerProcessManager { get; private set; }

		// Token: 0x06000200 RID: 512 RVA: 0x00005ECC File Offset: 0x000040CC
		public InnerProcessManagerClientObject(DiamondClientApplication application, InnerProcessManager innerProcessManager) : base(application)
		{
			this.InnerProcessManager = innerProcessManager;
		}
	}
}
