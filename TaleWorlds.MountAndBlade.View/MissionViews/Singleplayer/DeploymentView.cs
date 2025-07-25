using System;

namespace TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer
{
	// Token: 0x02000061 RID: 97
	public class DeploymentView : MissionView
	{
		// Token: 0x0600040C RID: 1036 RVA: 0x00022275 File Offset: 0x00020475
		public override void AfterStart()
		{
			base.AfterStart();
			this._deploymentHandler = base.Mission.GetMissionBehavior<DeploymentHandler>();
			this.CreateWidgets();
		}

		// Token: 0x0600040D RID: 1037 RVA: 0x00022294 File Offset: 0x00020494
		public override void OnRemoveBehavior()
		{
			this.RemoveWidgets();
			base.OnRemoveBehavior();
		}

		// Token: 0x0600040E RID: 1038 RVA: 0x000222A2 File Offset: 0x000204A2
		protected virtual void CreateWidgets()
		{
		}

		// Token: 0x0600040F RID: 1039 RVA: 0x000222A4 File Offset: 0x000204A4
		protected virtual void RemoveWidgets()
		{
		}

		// Token: 0x040002A6 RID: 678
		private DeploymentHandler _deploymentHandler;
	}
}
