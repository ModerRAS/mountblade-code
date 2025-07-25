using System;
using StoryMode.Missions;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace StoryMode.ViewModelCollection.Missions
{
	// Token: 0x02000005 RID: 5
	public class TrainingFieldObjectiveItemVM : ViewModel
	{
		// Token: 0x06000054 RID: 84 RVA: 0x00002A15 File Offset: 0x00000C15
		private TrainingFieldObjectiveItemVM()
		{
		}

		// Token: 0x06000055 RID: 85 RVA: 0x00002A20 File Offset: 0x00000C20
		private TrainingFieldObjectiveItemVM(TrainingFieldMissionController.TutorialObjective objective)
		{
			this._textObjectString = objective.GetNameString();
			this.IsActive = objective.IsActive;
			this.IsCompleted = objective.IsFinished;
			this._score = objective.Score;
			this.ObjectiveItems = new MBBindingList<TrainingFieldObjectiveItemVM>();
			if (objective.SubTasks != null)
			{
				foreach (TrainingFieldMissionController.TutorialObjective objective2 in objective.SubTasks)
				{
					this.ObjectiveItems.Add(TrainingFieldObjectiveItemVM.CreateFromObjective(objective2));
				}
			}
			this.RefreshValues();
		}

		// Token: 0x06000056 RID: 86 RVA: 0x00002ACC File Offset: 0x00000CCC
		public override void RefreshValues()
		{
			base.RefreshValues();
			if (this._textObjectString != "")
			{
				this.ObjectiveText = this._textObjectString;
				if (this._score != 0f)
				{
					TextObject textObject = GameTexts.FindText("str_tutorial_time_score", null);
					textObject.SetTextVariable("TIME_SCORE", this._score.ToString("0.0"));
					this.ObjectiveText += textObject.ToString();
				}
			}
		}

		// Token: 0x06000057 RID: 87 RVA: 0x00002B49 File Offset: 0x00000D49
		public static TrainingFieldObjectiveItemVM CreateFromObjective(TrainingFieldMissionController.TutorialObjective objective)
		{
			return new TrainingFieldObjectiveItemVM(objective);
		}

		// Token: 0x17000020 RID: 32
		// (get) Token: 0x06000058 RID: 88 RVA: 0x00002B51 File Offset: 0x00000D51
		// (set) Token: 0x06000059 RID: 89 RVA: 0x00002B59 File Offset: 0x00000D59
		[DataSourceProperty]
		public string ObjectiveText
		{
			get
			{
				return this._objectiveText;
			}
			set
			{
				if (value != this._objectiveText)
				{
					this._objectiveText = value;
					base.OnPropertyChangedWithValue<string>(value, "ObjectiveText");
				}
			}
		}

		// Token: 0x17000021 RID: 33
		// (get) Token: 0x0600005A RID: 90 RVA: 0x00002B7C File Offset: 0x00000D7C
		// (set) Token: 0x0600005B RID: 91 RVA: 0x00002B84 File Offset: 0x00000D84
		[DataSourceProperty]
		public bool IsCompleted
		{
			get
			{
				return this._isCompleted;
			}
			set
			{
				if (value != this._isCompleted)
				{
					this._isCompleted = value;
					base.OnPropertyChangedWithValue(value, "IsCompleted");
				}
			}
		}

		// Token: 0x17000022 RID: 34
		// (get) Token: 0x0600005C RID: 92 RVA: 0x00002BA2 File Offset: 0x00000DA2
		// (set) Token: 0x0600005D RID: 93 RVA: 0x00002BAA File Offset: 0x00000DAA
		[DataSourceProperty]
		public bool IsActive
		{
			get
			{
				return this._isActive;
			}
			set
			{
				if (value != this._isActive)
				{
					this._isActive = value;
					base.OnPropertyChangedWithValue(value, "IsActive");
				}
			}
		}

		// Token: 0x17000023 RID: 35
		// (get) Token: 0x0600005E RID: 94 RVA: 0x00002BC8 File Offset: 0x00000DC8
		// (set) Token: 0x0600005F RID: 95 RVA: 0x00002BD0 File Offset: 0x00000DD0
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

		// Token: 0x04000027 RID: 39
		private string _textObjectString;

		// Token: 0x04000028 RID: 40
		private string _objectiveText;

		// Token: 0x04000029 RID: 41
		private bool _isCompleted;

		// Token: 0x0400002A RID: 42
		private bool _isActive;

		// Token: 0x0400002B RID: 43
		private float _score;

		// Token: 0x0400002C RID: 44
		private MBBindingList<TrainingFieldObjectiveItemVM> _objectiveItems;
	}
}
