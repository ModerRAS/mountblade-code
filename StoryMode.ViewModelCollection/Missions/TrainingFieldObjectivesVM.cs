using System;
using System.Collections.Generic;
using StoryMode.Missions;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace StoryMode.ViewModelCollection.Missions
{
	// Token: 0x02000004 RID: 4
	public class TrainingFieldObjectivesVM : ViewModel
	{
		// Token: 0x0600003F RID: 63 RVA: 0x00002766 File Offset: 0x00000966
		public TrainingFieldObjectivesVM()
		{
			this.ObjectiveItems = new MBBindingList<TrainingFieldObjectiveItemVM>();
			this.RefreshValues();
			this.UpdateIsGamepadActive();
		}

		// Token: 0x06000040 RID: 64 RVA: 0x00002788 File Offset: 0x00000988
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.CurrentObjectiveText = ((this._objectiveText == null) ? "" : this._objectiveText.ToString());
			string keyHyperlinkText = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4));
			GameTexts.SetVariable("LEAVE_KEY", keyHyperlinkText);
			GameTexts.SetVariable("newline", "\n");
			this.LeaveAnyTimeText = GameTexts.FindText("str_leave_training_field", null).ToString();
			this.RightStickAbbreviatedText = new TextObject("{=rightstickabbreviated}RS", null).ToString();
			this.ObjectiveItems.ApplyActionOnAllItems(delegate(TrainingFieldObjectiveItemVM o)
			{
				o.RefreshValues();
			});
		}

		// Token: 0x06000041 RID: 65 RVA: 0x0000283C File Offset: 0x00000A3C
		public void UpdateObjectivesWith(List<TrainingFieldMissionController.TutorialObjective> objectives)
		{
			this.ObjectiveItems.Clear();
			foreach (TrainingFieldMissionController.TutorialObjective objective in objectives)
			{
				this.ObjectiveItems.Add(TrainingFieldObjectiveItemVM.CreateFromObjective(objective));
			}
		}

		// Token: 0x06000042 RID: 66 RVA: 0x000028A0 File Offset: 0x00000AA0
		public void UpdateCurrentObjectiveText(TextObject currentObjectiveText)
		{
			this._objectiveText = currentObjectiveText;
			this.CurrentObjectiveText = ((this._objectiveText == null) ? "" : this._objectiveText.ToString());
		}

		// Token: 0x06000043 RID: 67 RVA: 0x000028C9 File Offset: 0x00000AC9
		public void UpdateCurrentMouseObjective(TrainingFieldMissionController.MouseObjectives currentMouseObjective)
		{
			this.CurrentMouseObjective = (int)currentMouseObjective;
		}

		// Token: 0x06000044 RID: 68 RVA: 0x000028D2 File Offset: 0x00000AD2
		public void UpdateTimerText(string timerText)
		{
			this.TimerText = (string.IsNullOrEmpty(timerText) ? "" : timerText);
		}

		// Token: 0x06000045 RID: 69 RVA: 0x000028EA File Offset: 0x00000AEA
		public void UpdateIsGamepadActive()
		{
			this.IsGamepadActive = Input.IsGamepadActive;
		}

		// Token: 0x17000019 RID: 25
		// (get) Token: 0x06000046 RID: 70 RVA: 0x000028F7 File Offset: 0x00000AF7
		// (set) Token: 0x06000047 RID: 71 RVA: 0x000028FF File Offset: 0x00000AFF
		[DataSourceProperty]
		public MBBindingList<TrainingFieldObjectiveItemVM> ObjectiveItems
		{
			get
			{
				return this._objectiveItems;
			}
			set
			{
				if (value != this._objectiveItems)
				{
					this._objectiveItems = value;
					base.OnPropertyChangedWithValue<MBBindingList<TrainingFieldObjectiveItemVM>>(value, "ObjectiveItems");
				}
			}
		}

		// Token: 0x1700001A RID: 26
		// (get) Token: 0x06000048 RID: 72 RVA: 0x0000291D File Offset: 0x00000B1D
		// (set) Token: 0x06000049 RID: 73 RVA: 0x00002925 File Offset: 0x00000B25
		[DataSourceProperty]
		public string CurrentObjectiveText
		{
			get
			{
				return this._currentObjectiveText;
			}
			set
			{
				if (value != this._currentObjectiveText)
				{
					this._currentObjectiveText = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentObjectiveText");
				}
			}
		}

		// Token: 0x1700001B RID: 27
		// (get) Token: 0x0600004A RID: 74 RVA: 0x00002948 File Offset: 0x00000B48
		// (set) Token: 0x0600004B RID: 75 RVA: 0x00002950 File Offset: 0x00000B50
		[DataSourceProperty]
		public string TimerText
		{
			get
			{
				return this._timerText;
			}
			set
			{
				if (value != this._timerText)
				{
					this._timerText = value;
					base.OnPropertyChangedWithValue<string>(value, "TimerText");
				}
			}
		}

		// Token: 0x1700001C RID: 28
		// (get) Token: 0x0600004C RID: 76 RVA: 0x00002973 File Offset: 0x00000B73
		// (set) Token: 0x0600004D RID: 77 RVA: 0x0000297B File Offset: 0x00000B7B
		[DataSourceProperty]
		public string LeaveAnyTimeText
		{
			get
			{
				return this._leaveAnyTimeText;
			}
			set
			{
				if (value != this._leaveAnyTimeText)
				{
					this._leaveAnyTimeText = value;
					base.OnPropertyChangedWithValue<string>(value, "LeaveAnyTimeText");
				}
			}
		}

		// Token: 0x1700001D RID: 29
		// (get) Token: 0x0600004E RID: 78 RVA: 0x0000299E File Offset: 0x00000B9E
		// (set) Token: 0x0600004F RID: 79 RVA: 0x000029A6 File Offset: 0x00000BA6
		[DataSourceProperty]
		public int CurrentMouseObjective
		{
			get
			{
				return this._currentMouseObjective;
			}
			set
			{
				if (value != this._currentMouseObjective)
				{
					this._currentMouseObjective = value;
					base.OnPropertyChangedWithValue(value, "CurrentMouseObjective");
				}
			}
		}

		// Token: 0x1700001E RID: 30
		// (get) Token: 0x06000050 RID: 80 RVA: 0x000029C4 File Offset: 0x00000BC4
		// (set) Token: 0x06000051 RID: 81 RVA: 0x000029CC File Offset: 0x00000BCC
		[DataSourceProperty]
		public string RightStickAbbreviatedText
		{
			get
			{
				return this._rightStickAbbreviatedText;
			}
			set
			{
				if (value != this._rightStickAbbreviatedText)
				{
					this._rightStickAbbreviatedText = value;
					base.OnPropertyChangedWithValue<string>(value, "RightStickAbbreviatedText");
				}
			}
		}

		// Token: 0x1700001F RID: 31
		// (get) Token: 0x06000052 RID: 82 RVA: 0x000029EF File Offset: 0x00000BEF
		// (set) Token: 0x06000053 RID: 83 RVA: 0x000029F7 File Offset: 0x00000BF7
		[DataSourceProperty]
		public bool IsGamepadActive
		{
			get
			{
				return this._isGamepadActive;
			}
			set
			{
				if (value != this._isGamepadActive)
				{
					this._isGamepadActive = value;
					base.OnPropertyChangedWithValue(value, "IsGamepadActive");
				}
			}
		}

		// Token: 0x0400001F RID: 31
		private TextObject _objectiveText;

		// Token: 0x04000020 RID: 32
		private MBBindingList<TrainingFieldObjectiveItemVM> _objectiveItems;

		// Token: 0x04000021 RID: 33
		private string _currentObjectiveText;

		// Token: 0x04000022 RID: 34
		private string _leaveAnyTimeText;

		// Token: 0x04000023 RID: 35
		private string _timerText;

		// Token: 0x04000024 RID: 36
		private string _rightStickAbbreviatedText;

		// Token: 0x04000025 RID: 37
		private int _currentMouseObjective;

		// Token: 0x04000026 RID: 38
		private bool _isGamepadActive;
	}
}
