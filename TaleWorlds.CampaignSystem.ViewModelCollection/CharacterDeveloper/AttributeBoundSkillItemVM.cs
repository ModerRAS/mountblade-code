using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper
{
	// Token: 0x02000122 RID: 290
	public class AttributeBoundSkillItemVM : ViewModel
	{
		// Token: 0x06001C21 RID: 7201 RVA: 0x00065C6C File Offset: 0x00063E6C
		public AttributeBoundSkillItemVM(SkillObject skill)
		{
			this.Name = skill.Name.ToString();
			this.SkillId = skill.StringId;
		}

		// Token: 0x170009A7 RID: 2471
		// (get) Token: 0x06001C22 RID: 7202 RVA: 0x00065C91 File Offset: 0x00063E91
		// (set) Token: 0x06001C23 RID: 7203 RVA: 0x00065C99 File Offset: 0x00063E99
		[DataSourceProperty]
		public string Name
		{
			get
			{
				return this._name;
			}
			set
			{
				if (value != this._name)
				{
					this._name = value;
					base.OnPropertyChangedWithValue<string>(value, "Name");
				}
			}
		}

		// Token: 0x170009A8 RID: 2472
		// (get) Token: 0x06001C24 RID: 7204 RVA: 0x00065CBC File Offset: 0x00063EBC
		// (set) Token: 0x06001C25 RID: 7205 RVA: 0x00065CC4 File Offset: 0x00063EC4
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

		// Token: 0x04000D52 RID: 3410
		private string _name;

		// Token: 0x04000D53 RID: 3411
		private string _skillId;
	}
}
