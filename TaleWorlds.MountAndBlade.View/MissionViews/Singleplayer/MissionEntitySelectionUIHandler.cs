using System;
using System.Diagnostics;
using TaleWorlds.Engine;
using TaleWorlds.Library;

namespace TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer
{
	// Token: 0x02000069 RID: 105
	public class MissionEntitySelectionUIHandler : MissionView
	{
		// Token: 0x06000429 RID: 1065 RVA: 0x00022E36 File Offset: 0x00021036
		public MissionEntitySelectionUIHandler(Action<GameEntity> onSelect = null, Action<GameEntity> onHover = null)
		{
			this.onSelect = onSelect;
			this.onHover = onHover;
		}

		// Token: 0x0600042A RID: 1066 RVA: 0x00022E4C File Offset: 0x0002104C
		public override void OnMissionScreenTick(float dt)
		{
			base.OnMissionScreenTick(dt);
			GameEntity value = new Lazy<GameEntity>(new Func<GameEntity>(this.GetCollidedEntity)).Value;
			Action<GameEntity> action = this.onHover;
			if (action != null)
			{
				action(value);
			}
			if (base.Input.IsKeyReleased(224))
			{
				Action<GameEntity> action2 = this.onSelect;
				if (action2 == null)
				{
					return;
				}
				action2(value);
			}
		}

		// Token: 0x0600042B RID: 1067 RVA: 0x00022EAC File Offset: 0x000210AC
		private GameEntity GetCollidedEntity()
		{
			Vec2 mousePositionRanged = base.Input.GetMousePositionRanged();
			Vec3 vec;
			Vec3 vec2;
			base.MissionScreen.ScreenPointToWorldRay(mousePositionRanged, out vec, out vec2);
			TWSharedMutexUpgradeableReadLock twsharedMutexUpgradeableReadLock;
			twsharedMutexUpgradeableReadLock..ctor(Scene.PhysicsAndRayCastLock);
			GameEntity result;
			try
			{
				if (Mission.Current != null)
				{
					float num;
					GameEntity parent;
					Mission.Current.Scene.RayCastForClosestEntityOrTerrainMT(vec, vec2, ref num, ref parent, 0.3f, 79617);
					while (parent != null && parent.Parent != null)
					{
						parent = parent.Parent;
					}
					result = parent;
				}
				else
				{
					result = null;
				}
			}
			finally
			{
				twsharedMutexUpgradeableReadLock.Dispose();
			}
			return result;
		}

		// Token: 0x0600042C RID: 1068 RVA: 0x00022F58 File Offset: 0x00021158
		public override void OnRemoveBehavior()
		{
			this.onSelect = null;
			this.onHover = null;
			base.OnRemoveBehavior();
		}

		// Token: 0x0600042D RID: 1069 RVA: 0x00022F70 File Offset: 0x00021170
		[Conditional("DEBUG")]
		public void TickDebug()
		{
			GameEntity collidedEntity = this.GetCollidedEntity();
			if (!(collidedEntity == null))
			{
				string name = collidedEntity.Name;
			}
		}

		// Token: 0x040002B2 RID: 690
		private Action<GameEntity> onSelect;

		// Token: 0x040002B3 RID: 691
		private Action<GameEntity> onHover;
	}
}
