using System;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation
{
	// Token: 0x02000132 RID: 306
	public class CharacterCreationGainedSkillItemVM : ViewModel
	{
		// Token: 0x17000A30 RID: 2608
		// (get) Token: 0x06001DAE RID: 7598 RVA: 0x0006A99B File Offset: 0x00068B9B
		// (set) Token: 0x06001DAF RID: 7599 RVA: 0x0006A9A3 File Offset: 0x00068BA3
		public SkillObject SkillObj { get; private set; }

		// Token: 0x06001DB0 RID: 7600 RVA: 0x0006A9AC File Offset: 0x00068BAC
		public CharacterCreationGainedSkillItemVM(SkillObject skill)
		{
			this.FocusPointGainList = new MBBindingList<BoolItemWithActionVM>();
			this.SkillObj = skill;
			this.SkillId = this.SkillObj.StringId;
			this.Skill = new EncyclopediaSkillVM(skill, 0);
		}

		// Token: 0x06001DB1 RID: 7601 RVA: 0x0006A9E4 File Offset: 0x00068BE4
		public void SetValue(int gainedFromOtherStages, int gainedFromCurrentStage)
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
			this.HasIncreasedInCurrentStage = (gainedFromCurrentStage > 0);
		}

		// Token: 0x06001DB2 RID: 7602 RVA: 0x0006AA44 File Offset: 0x00068C44
		internal void ResetValues()
		{
			this.SetValue(0, 0);
		}

		// Token: 0x17000A31 RID: 2609
		// (get) Token: 0x06001DB3 RID: 7603 RVA: 0x0006AA4E File Offset: 0x00068C4E
		// (set) Token: 0x06001DB4 RID: 7604 RVA: 0x0006AA56 File Offset: 0x00068C56
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

		// Token: 0x17000A32 RID: 2610
		// (get) Token: 0x06001DB5 RID: 7605 RVA: 0x0006AA79 File Offset: 0x00068C79
		// (set) Token: 0x06001DB6 RID: 7606 RVA: 0x0006AA81 File Offset: 0x00068C81
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

		// Token: 0x17000A33 RID: 2611
		// (get) Token: 0x06001DB7 RID: 7607 RVA: 0x0006AA9F File Offset: 0x00068C9F
		// (set) Token: 0x06001DB8 RID: 7608 RVA: 0x0006AAA7 File Offset: 0x00068CA7
		[DataSourceProperty]
		public bool HasIncreasedInCurrentStage
		{
			get
			{
				return this._hasIncreasedInCurrentStage;
			}
			set
			{
				if (value != this._hasIncreasedInCurrentStage)
				{
					this._hasIncreasedInCurrentStage = value;
					base.OnPropertyChangedWithValue(value, "HasIncreasedInCurrentStage");
				}
			}
		}

		// Token: 0x17000A34 RID: 2612
		// (get) Token: 0x06001DB9 RID: 7609 RVA: 0x0006AAC5 File Offset: 0x00068CC5
		// (set) Token: 0x06001DBA RID: 7610 RVA: 0x0006AACD File Offset: 0x00068CCD
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

		// Token: 0x04000E01 RID: 3585
		private string _skillId;

		// Token: 0x04000E02 RID: 3586
		private EncyclopediaSkillVM _skill;

		// Token: 0x04000E03 RID: 3587
		private bool _hasIncreasedInCurrentStage;

		// Token: 0x04000E04 RID: 3588
		private MBBindingList<BoolItemWithActionVM> _focusPointGainList;
	}
}
