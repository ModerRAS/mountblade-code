using System;
using TaleWorlds.Engine;

namespace TaleWorlds.MountAndBlade.View.MissionViews.SiegeWeapon
{
	// Token: 0x02000078 RID: 120
	public class BallistaView : RangedSiegeWeaponView
	{
		// Token: 0x0600045C RID: 1116 RVA: 0x00023D41 File Offset: 0x00021F41
		protected override void OnAdded(Scene scene)
		{
			base.OnAdded(scene);
			this.UsesMouseForAiming = true;
		}

		// Token: 0x0600045D RID: 1117 RVA: 0x00023D51 File Offset: 0x00021F51
		protected override void StartUsingWeaponCamera()
		{
			base.StartUsingWeaponCamera();
			base.MissionScreen.SetExtraCameraParameters(true, 1.5f);
		}

		// Token: 0x0600045E RID: 1118 RVA: 0x00023D6A File Offset: 0x00021F6A
		protected override void HandleUserCameraRotation(float dt)
		{
		}
	}
}
