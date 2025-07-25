using System;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;

namespace TaleWorlds.MountAndBlade.View.MissionViews
{
	// Token: 0x02000048 RID: 72
	public class MissionBoundaryWallView : MissionView
	{
		// Token: 0x06000330 RID: 816 RVA: 0x0001C1B4 File Offset: 0x0001A3B4
		public override void OnMissionScreenInitialize()
		{
			base.OnMissionScreenInitialize();
			foreach (ICollection<Vec2> boundaryPoints in base.Mission.Boundaries.Values)
			{
				this.CreateBoundaryEntity(boundaryPoints);
			}
		}

		// Token: 0x06000331 RID: 817 RVA: 0x0001C214 File Offset: 0x0001A414
		private void CreateBoundaryEntity(ICollection<Vec2> boundaryPoints)
		{
			Mesh mesh = BoundaryWallView.CreateBoundaryMesh(base.Mission.Scene, boundaryPoints, 536918784U);
			if (mesh != null)
			{
				GameEntity gameEntity = GameEntity.CreateEmpty(base.Mission.Scene, true);
				gameEntity.AddMesh(mesh, true);
				MatrixFrame identity = MatrixFrame.Identity;
				gameEntity.SetGlobalFrame(ref identity);
				gameEntity.Name = "boundary_wall";
				gameEntity.SetMobility(0);
				gameEntity.EntityFlags |= 1073741824;
			}
		}
	}
}
