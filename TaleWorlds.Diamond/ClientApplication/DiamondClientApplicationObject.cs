using System;
using TaleWorlds.Library;

namespace TaleWorlds.Diamond.ClientApplication
{
	// Token: 0x0200004F RID: 79
	public abstract class DiamondClientApplicationObject
	{
		// Token: 0x1700006B RID: 107
		// (get) Token: 0x060001F5 RID: 501 RVA: 0x00005DD0 File Offset: 0x00003FD0
		public DiamondClientApplication Application
		{
			get
			{
				return this._application;
			}
		}

		// Token: 0x1700006C RID: 108
		// (get) Token: 0x060001F6 RID: 502 RVA: 0x00005DD8 File Offset: 0x00003FD8
		public ApplicationVersion ApplicationVersion
		{
			get
			{
				return this.Application.ApplicationVersion;
			}
		}

		// Token: 0x060001F7 RID: 503 RVA: 0x00005DE5 File Offset: 0x00003FE5
		protected DiamondClientApplicationObject(DiamondClientApplication application)
		{
			this._application = application;
		}

		// Token: 0x040000B5 RID: 181
		private DiamondClientApplication _application;
	}
}
