using System;
using System.Collections.Generic;
using StoryMode.Missions;
using StoryMode.View.Missions;
using StoryMode.ViewModelCollection.Missions;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

namespace StoryMode.GauntletUI.Missions
{
	// Token: 0x02000041 RID: 65
	[OverrideView(typeof(MissionTrainingFieldObjectiveView))]
	public class MissionGauntletTrainingFieldObjectiveView : MissionView
	{
		// Token: 0x060001D1 RID: 465 RVA: 0x00007278 File Offset: 0x00005478
		public override void OnMissionScreenInitialize()
		{
			base.OnMissionScreenInitialize();
			TrainingFieldMissionController missionBehavior = base.Mission.GetMissionBehavior<TrainingFieldMissionController>();
			this._dataSource = new TrainingFieldObjectivesVM();
			this._dataSource.UpdateCurrentObjectiveText(missionBehavior.InitialCurrentObjective);
			this._layer = new GauntletLayer(2, "GauntletLayer", false);
			this._layer.LoadMovie("TrainingFieldObjectives", this._dataSource);
			base.MissionScreen.AddLayer(this._layer);
			missionBehavior.TimerTick = new Action<string>(this._dataSource.UpdateTimerText);
			missionBehavior.CurrentObjectiveTick = new Action<TextObject>(this._dataSource.UpdateCurrentObjectiveText);
			missionBehavior.AllObjectivesTick = new Action<List<TrainingFieldMissionController.TutorialObjective>>(this._dataSource.UpdateObjectivesWith);
			missionBehavior.UIStartTimer = new Action(this.BeginTimer);
			missionBehavior.UIEndTimer = new Func<float>(this.EndTimer);
			missionBehavior.CurrentMouseObjectiveTick = new Action<TrainingFieldMissionController.MouseObjectives>(this._dataSource.UpdateCurrentMouseObjective);
			TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged = (Action)Delegate.Combine(TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
		}

		// Token: 0x060001D2 RID: 466 RVA: 0x00007390 File Offset: 0x00005590
		public override void OnMissionScreenTick(float dt)
		{
			base.OnMissionScreenTick(dt);
			if (this._isTimerActive)
			{
				this._dataSource.UpdateTimerText((base.Mission.CurrentTime - this._beginningTime).ToString("0.0"));
			}
		}

		// Token: 0x060001D3 RID: 467 RVA: 0x000073D6 File Offset: 0x000055D6
		private void BeginTimer()
		{
			this._isTimerActive = true;
			this._beginningTime = base.Mission.CurrentTime;
		}

		// Token: 0x060001D4 RID: 468 RVA: 0x000073F0 File Offset: 0x000055F0
		private float EndTimer()
		{
			this._isTimerActive = false;
			this._dataSource.UpdateTimerText("");
			return base.Mission.CurrentTime - this._beginningTime;
		}

		// Token: 0x060001D5 RID: 469 RVA: 0x0000741C File Offset: 0x0000561C
		public override void OnMissionScreenFinalize()
		{
			base.OnMissionScreenFinalize();
			base.MissionScreen.RemoveLayer(this._layer);
			this._dataSource = null;
			this._layer = null;
			TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged = (Action)Delegate.Remove(TaleWorlds.InputSystem.Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
		}

		// Token: 0x060001D6 RID: 470 RVA: 0x0000746E File Offset: 0x0000566E
		public override void OnPhotoModeActivated()
		{
			base.OnPhotoModeActivated();
			this._layer.UIContext.ContextAlpha = 0f;
		}

		// Token: 0x060001D7 RID: 471 RVA: 0x0000748B File Offset: 0x0000568B
		public override void OnPhotoModeDeactivated()
		{
			base.OnPhotoModeDeactivated();
			this._layer.UIContext.ContextAlpha = 1f;
		}

		// Token: 0x060001D8 RID: 472 RVA: 0x000074A8 File Offset: 0x000056A8
		private void OnGamepadActiveStateChanged()
		{
			TrainingFieldObjectivesVM dataSource = this._dataSource;
			if (dataSource == null)
			{
				return;
			}
			dataSource.UpdateIsGamepadActive();
		}

		// Token: 0x04000070 RID: 112
		private TrainingFieldObjectivesVM _dataSource;

		// Token: 0x04000071 RID: 113
		private GauntletLayer _layer;

		// Token: 0x04000072 RID: 114
		private float _beginningTime;

		// Token: 0x04000073 RID: 115
		private bool _isTimerActive;
	}
}
