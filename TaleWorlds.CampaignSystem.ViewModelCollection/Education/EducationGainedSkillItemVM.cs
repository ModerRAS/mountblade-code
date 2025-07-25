using System;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Education
{
	// Token: 0x020000D5 RID: 213
	public class EducationGainedSkillItemVM : ViewModel
	{
		// Token: 0x170006AE RID: 1710
		// (get) Token: 0x060013FD RID: 5117 RVA: 0x0004CCD7 File Offset: 0x0004AED7
		// (set) Token: 0x060013FE RID: 5118 RVA: 0x0004CCDF File Offset: 0x0004AEDF
		public SkillObject SkillObj { get; private set; }

		// Token: 0x060013FF RID: 5119 RVA: 0x0004CCE8 File Offset: 0x0004AEE8
		public EducationGainedSkillItemVM(SkillObject skill)
		{
			this.FocusPointGainList = new MBBindingList<BoolItemWithActionVM>();
			this.SkillObj = skill;
			this.SkillId = this.SkillObj.StringId;
			this.Skill = new EncyclopediaSkillVM(skill, 0);
		}

		// Token: 0x06001400 RID: 5120 RVA: 0x0004CD20 File Offset: 0x0004AF20
		public void SetFocusValue(int gainedFromOtherStages, int gainedFromCurrentStage)
		{
			this.FocusPointGainList.Clear();
			for (int i = 0; i < gainedFromOtherStages; i++)
			{
				this.FocusPointGainList.Add(new BoolItemWithActionVM(null, false, null));
			}
			for (int j = 0; j < gainedFromCurrentStage; j++)
			{
				this.FocusPointGainList.Add(new BoolItemWithActionVM(null, true, null));
			}
			this.HasFocusIncreasedInCurrentStage = (gainedFromCurrentStage > 0);
		}

		// Token: 0x06001401 RID: 5121 RVA: 0x0004CD80 File Offset: 0x0004AF80
		public void SetSkillValue(int gaintedFromOtherStages, int gainedFromCurrentStage)
		{
			this.SkillValueInt = gaintedFromOtherStages + gainedFromCurrentStage;
			this.HasSkillValueIncreasedInCurrentStage = (gainedFromCurrentStage > 0);
		}

		// Token: 0x06001402 RID: 5122 RVA: 0x0004CD95 File Offset: 0x0004AF95
		internal void ResetValues()
		{
			this.SetFocusValue(0, 0);
			this.SetSkillValue(0, 0);
		}

		// Token: 0x170006AF RID: 1711
		// (get) Token: 0x06001403 RID: 5123 RVA: 0x0004CDA7 File Offset: 0x0004AFA7
		// (set) Token: 0x06001404 RID: 5124 RVA: 0x0004CDAF File Offset: 0x0004AFAF
		[DataSourceProperty]
		public string SkillId
		{
			get
			{
				return this._skillId;
			}
			set
			{
				if (value != this._skillId)
				{
					this._skillId = value;
					base.OnPropertyChangedWithValue<string>(value, "SkillId");
				}
			}
		}

		// Token: 0x170006B0 RID: 1712
		// (get) Token: 0x06001405 RID: 5125 RVA: 0x0004CDD2 File Offset: 0x0004AFD2
		// (set) Token: 0x06001406 RID: 5126 RVA: 0x0004CDDA File Offset: 0x0004AFDA
		[DataSourceProperty]
		public int SkillValueInt
		{
			get
			{
				return this._skillValueInt;
			}
			set
			{
				if (value != this._skillValueInt)
				{
					this._skillValueInt = value;
					base.OnPropertyChangedWithValue(value, "SkillValueInt");
				}
			}
		}

		// Token: 0x170006B1 RID: 1713
		// (get) Token: 0x06001407 RID: 5127 RVA: 0x0004CDF8 File Offset: 0x0004AFF8
		// (set) Token: 0x06001408 RID: 5128 RVA: 0x0004CE00 File Offset: 0x0004B000
		[DataSourceProperty]
		public EncyclopediaSkillVM Skill
		{
			get
			{
				return this._skill;
			}
			set
			{
				if (value != this._skill)
				{
					this._skill = value;
					base.OnPropertyChangedWithValue<EncyclopediaSkillVM>(value, "Skill");
				}
			}
		}

		// Token: 0x170006B2 RID: 1714
		// (get) Token: 0x06001409 RID: 5129 RVA: 0x0004CE1E File Offset: 0x0004B01E
		// (set) Token: 0x0600140A RID: 5130 RVA: 0x0004CE26 File Offset: 0x0004B026
		[DataSourceProperty]
		public bool HasFocusIncreasedInCurrentStage
		{
			get
			{
				return this._hasFocusIncreasedInCurrentStage;
			}
			set
			{
				if (value != this._hasFocusIncreasedInCurrentStage)
				{
					this._hasFocusIncreasedInCurrentStage = value;
					base.OnPropertyChangedWithValue(value, "HasFocusIncreasedInCurrentStage");
				}
			}
		}

		// Token: 0x170006B3 RID: 1715
		// (get) Token: 0x0600140B RID: 5131 RVA: 0x0004CE44 File Offset: 0x0004B044
		// (set) Token: 0x0600140C RID: 5132 RVA: 0x0004CE4C File Offset: 0x0004B04C
		[DataSourceProperty]
		public bool HasSkillValueIncreasedInCurrentStage
		{
			get
			{
				return this._hasSkillValueIncreasedInCurrentStage;
			}
			set
			{
				if (value != this._hasSkillValueIncreasedInCurrentStage)
				{
					this._hasSkillValueIncreasedInCurrentStage = value;
					base.OnPropertyChangedWithValue(value, "HasSkillValueIncreasedInCurrentStage");
				}
			}
		}

		// Token: 0x170006B4 RID: 1716
		// (get) Token: 0x0600140D RID: 5133 RVA: 0x0004CE6A File Offset: 0x0004B06A
		// (set) Token: 0x0600140E RID: 5134 RVA: 0x0004CE72 File Offset: 0x0004B072
		[DataSourceProperty]
		public MBBindingList<BoolItemWithActionVM> FocusPointGainList
		{
			get
			{
				return this._focusPointGainList;
			}
			set
			{
				if (value != this._focusPointGainList)
				{
					this._focusPointGainList = value;
					base.OnPropertyChangedWithValue<MBBindingList<BoolItemWithActionVM>>(value, "FocusPointGainList");
				}
			}
		}

		// Token: 0x0400093F RID: 2367
		private string _skillId;

		// Token: 0x04000940 RID: 2368
		private EncyclopediaSkillVM _skill;

		// Token: 0x04000941 RID: 2369
		private bool _hasFocusIncreasedInCurrentStage;

		// Token: 0x04000942 RID: 2370
		private bool _hasSkillValueIncreasedInCurrentStage;

		// Token: 0x04000943 RID: 2371
		private int _skillValueInt;

		// Token: 0x04000944 RID: 2372
		private MBBindingList<BoolItemWithActionVM> _focusPointGainList;
	}
}
