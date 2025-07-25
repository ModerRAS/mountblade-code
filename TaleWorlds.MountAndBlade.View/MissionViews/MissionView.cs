using System;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.MountAndBlade.View.Screens;

namespace TaleWorlds.MountAndBlade.View.MissionViews
{
	// Token: 0x02000057 RID: 87
	public abstract class MissionView : MissionBehavior
	{
		// Token: 0x1700005F RID: 95
		// (get) Token: 0x060003BA RID: 954 RVA: 0x00020B14 File Offset: 0x0001ED14
		// (set) Token: 0x060003BB RID: 955 RVA: 0x00020B1C File Offset: 0x0001ED1C
		public MissionScreen MissionScreen { get; internal set; }

		// Token: 0x17000060 RID: 96
		// (get) Token: 0x060003BC RID: 956 RVA: 0x00020B25 File Offset: 0x0001ED25
		public IInputContext Input
		{
			get
			{
				return this.MissionScreen.SceneLayer.Input;
			}
		}

		// Token: 0x17000061 RID: 97
		// (get) Token: 0x060003BD RID: 957 RVA: 0x00020B37 File Offset: 0x0001ED37
		public override MissionBehaviorType BehaviorType
		{
			get
			{
				return 1;
			}
		}

		// Token: 0x060003BE RID: 958 RVA: 0x00020B3A File Offset: 0x0001ED3A
		public virtual void OnMissionScreenTick(float dt)
		{
		}

		// Token: 0x060003BF RID: 959 RVA: 0x00020B3C File Offset: 0x0001ED3C
		public virtual bool OnEscape()
		{
			return false;
		}

		// Token: 0x060003C0 RID: 960 RVA: 0x00020B3F File Offset: 0x0001ED3F
		public virtual bool IsOpeningEscapeMenuOnFocusChangeAllowed()
		{
			return true;
		}

		// Token: 0x060003C1 RID: 961 RVA: 0x00020B42 File Offset: 0x0001ED42
		public virtual void OnFocusChangeOnGameWindow(bool focusGained)
		{
		}

		// Token: 0x060003C2 RID: 962 RVA: 0x00020B44 File Offset: 0x0001ED44
		public virtual void OnSceneRenderingStarted()
		{
		}

		// Token: 0x060003C3 RID: 963 RVA: 0x00020B46 File Offset: 0x0001ED46
		public virtual void OnMissionScreenInitialize()
		{
		}

		// Token: 0x060003C4 RID: 964 RVA: 0x00020B48 File Offset: 0x0001ED48
		public virtual void OnMissionScreenFinalize()
		{
		}

		// Token: 0x060003C5 RID: 965 RVA: 0x00020B4A File Offset: 0x0001ED4A
		public virtual void OnMissionScreenActivate()
		{
		}

		// Token: 0x060003C6 RID: 966 RVA: 0x00020B4C File Offset: 0x0001ED4C
		public virtual void OnMissionScreenDeactivate()
		{
		}

		// Token: 0x060003C7 RID: 967 RVA: 0x00020B4E File Offset: 0x0001ED4E
		public virtual bool UpdateOverridenCamera(float dt)
		{
			return false;
		}

		// Token: 0x060003C8 RID: 968 RVA: 0x00020B51 File Offset: 0x0001ED51
		public virtual bool IsReady()
		{
			return true;
		}

		// Token: 0x060003C9 RID: 969 RVA: 0x00020B54 File Offset: 0x0001ED54
		public virtual void OnPhotoModeActivated()
		{
		}

		// Token: 0x060003CA RID: 970 RVA: 0x00020B56 File Offset: 0x0001ED56
		public virtual void OnPhotoModeDeactivated()
		{
		}

		// Token: 0x060003CB RID: 971 RVA: 0x00020B58 File Offset: 0x0001ED58
		public virtual void OnConversationBegin()
		{
		}

		// Token: 0x060003CC RID: 972 RVA: 0x00020B5A File Offset: 0x0001ED5A
		public virtual void OnConversationEnd()
		{
		}

		// Token: 0x060003CD RID: 973 RVA: 0x00020B5C File Offset: 0x0001ED5C
		public virtual void OnInitialDeploymentPlanMadeForSide(BattleSideEnum side, bool isFirstPlan)
		{
		}

		// Token: 0x060003CE RID: 974 RVA: 0x00020B5E File Offset: 0x0001ED5E
		public sealed override void OnEndMissionInternal()
		{
			this.OnEndMission();
		}

		// Token: 0x060003CF RID: 975 RVA: 0x00020B66 File Offset: 0x0001ED66
		public override void OnRemoveBehavior()
		{
			base.OnRemoveBehavior();
		}

		// Token: 0x04000287 RID: 647
		public int ViewOrderPriority;
	}
}
