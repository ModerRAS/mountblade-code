using System;

namespace TaleWorlds.MountAndBlade.View.MissionViews.Sound
{
	// Token: 0x0200005C RID: 92
	public class MusicSilencedMissionView : MissionView, IMusicHandler
	{
		// Token: 0x1700006A RID: 106
		// (get) Token: 0x060003FD RID: 1021 RVA: 0x00022100 File Offset: 0x00020300
		bool IMusicHandler.IsPausable
		{
			get
			{
				return true;
			}
		}

		// Token: 0x060003FE RID: 1022 RVA: 0x00022103 File Offset: 0x00020303
		public override void OnBehaviorInitialize()
		{
			base.OnBehaviorInitialize();
			MBMusicManager.Current.DeactivateCurrentMode();
			MBMusicManager.Current.OnSilencedMusicHandlerInit(this);
		}

		// Token: 0x060003FF RID: 1023 RVA: 0x00022120 File Offset: 0x00020320
		public override void OnMissionScreenFinalize()
		{
			MBMusicManager.Current.OnSilencedMusicHandlerFinalize();
		}

		// Token: 0x06000400 RID: 1024 RVA: 0x0002212C File Offset: 0x0002032C
		void IMusicHandler.OnUpdated(float dt)
		{
		}
	}
}
