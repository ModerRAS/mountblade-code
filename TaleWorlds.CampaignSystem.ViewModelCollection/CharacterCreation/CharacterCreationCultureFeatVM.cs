using System;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterCreation
{
	// Token: 0x0200012D RID: 301
	public class CharacterCreationCultureFeatVM : ViewModel
	{
		// Token: 0x06001D70 RID: 7536 RVA: 0x0006980D File Offset: 0x00067A0D
		public CharacterCreationCultureFeatVM(bool isPositive, string description)
		{
			this.IsPositive = isPositive;
			this.Description = description;
		}

		// Token: 0x17000A1C RID: 2588
		// (get) Token: 0x06001D71 RID: 7537 RVA: 0x00069823 File Offset: 0x00067A23
		// (set) Token: 0x06001D72 RID: 7538 RVA: 0x0006982B File Offset: 0x00067A2B
		[DataSourceProperty]
		public bool IsPositive
		{
			get
			{
				return this._isPositive;
			}
			set
			{
				if (value != this._isPositive)
				{
					this._isPositive = value;
					base.OnPropertyChangedWithValue(value, "IsPositive");
				}
			}
		}

		// Token: 0x17000A1D RID: 2589
		// (get) Token: 0x06001D73 RID: 7539 RVA: 0x00069849 File Offset: 0x00067A49
		// (set) Token: 0x06001D74 RID: 7540 RVA: 0x00069851 File Offset: 0x00067A51
		[DataSourceProperty]
		public string Description
		{
			get
			{
				return this._description;
			}
			set
			{
				if (value != this._description)
				{
					this._description = value;
					base.OnPropertyChangedWithValue<string>(value, "Description");
				}
			}
		}

		// Token: 0x04000DE4 RID: 3556
		private bool _isPositive;

		// Token: 0x04000DE5 RID: 3557
		private string _description;
	}
}
