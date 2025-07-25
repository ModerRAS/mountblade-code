using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x02000107 RID: 263
	public class ClanFinanceIncomeItemBaseVM : ViewModel
	{
		// Token: 0x17000852 RID: 2130
		// (get) Token: 0x0600187A RID: 6266 RVA: 0x00059EB7 File Offset: 0x000580B7
		// (set) Token: 0x0600187B RID: 6267 RVA: 0x00059EBF File Offset: 0x000580BF
		public IncomeTypes IncomeTypeAsEnum
		{
			get
			{
				return this._incomeTypeAsEnum;
			}
			protected set
			{
				if (value != this._incomeTypeAsEnum)
				{
					this._incomeTypeAsEnum = value;
					this.IncomeType = (int)value;
				}
			}
		}

		// Token: 0x0600187C RID: 6268 RVA: 0x00059ED8 File Offset: 0x000580D8
		protected ClanFinanceIncomeItemBaseVM(Action<ClanFinanceIncomeItemBaseVM> onSelection, Action onRefresh)
		{
			this._onSelection = onSelection;
			this._onRefresh = onRefresh;
		}

		// Token: 0x0600187D RID: 6269 RVA: 0x00059EF9 File Offset: 0x000580F9
		protected virtual void PopulateStatsList()
		{
		}

		// Token: 0x0600187E RID: 6270 RVA: 0x00059EFB File Offset: 0x000580FB
		protected virtual void PopulateActionList()
		{
		}

		// Token: 0x0600187F RID: 6271 RVA: 0x00059EFD File Offset: 0x000580FD
		public void OnIncomeSelection()
		{
			this._onSelection(this);
		}

		// Token: 0x06001880 RID: 6272 RVA: 0x00059F0C File Offset: 0x0005810C
		protected string DetermineIncomeText(int incomeAmount)
		{
			if (incomeAmount == 0)
			{
				return GameTexts.FindText("str_clan_finance_value_zero", null).ToString();
			}
			GameTexts.SetVariable("IS_POSITIVE", (this.Income > 0) ? 1 : 0);
			GameTexts.SetVariable("NUMBER", MathF.Abs(this.Income));
			return GameTexts.FindText("str_clan_finance_value", null).ToString();
		}

		// Token: 0x17000853 RID: 2131
		// (get) Token: 0x06001881 RID: 6273 RVA: 0x00059F69 File Offset: 0x00058169
		// (set) Token: 0x06001882 RID: 6274 RVA: 0x00059F71 File Offset: 0x00058171
		[DataSourceProperty]
		public MBBindingList<SelectableItemPropertyVM> ItemProperties
		{
			get
			{
				return this._itemProperties;
			}
			set
			{
				if (value != this._itemProperties)
				{
					this._itemProperties = value;
					base.OnPropertyChangedWithValue<MBBindingList<SelectableItemPropertyVM>>(value, "ItemProperties");
				}
			}
		}

		// Token: 0x17000854 RID: 2132
		// (get) Token: 0x06001883 RID: 6275 RVA: 0x00059F8F File Offset: 0x0005818F
		// (set) Token: 0x06001884 RID: 6276 RVA: 0x00059F97 File Offset: 0x00058197
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

		// Token: 0x17000855 RID: 2133
		// (get) Token: 0x06001885 RID: 6277 RVA: 0x00059FBA File Offset: 0x000581BA
		// (set) Token: 0x06001886 RID: 6278 RVA: 0x00059FC2 File Offset: 0x000581C2
		[DataSourceProperty]
		public string Location
		{
			get
			{
				return this._location;
			}
			set
			{
				if (value != this._location)
				{
					this._location = value;
					base.OnPropertyChangedWithValue<string>(value, "Location");
				}
			}
		}

		// Token: 0x17000856 RID: 2134
		// (get) Token: 0x06001887 RID: 6279 RVA: 0x00059FE5 File Offset: 0x000581E5
		// (set) Token: 0x06001888 RID: 6280 RVA: 0x00059FED File Offset: 0x000581ED
		[DataSourceProperty]
		public bool IsSelected
		{
			get
			{
				return this._isSelected;
			}
			set
			{
				if (value != this._isSelected)
				{
					this._isSelected = value;
					base.OnPropertyChangedWithValue(value, "IsSelected");
				}
			}
		}

		// Token: 0x17000857 RID: 2135
		// (get) Token: 0x06001889 RID: 6281 RVA: 0x0005A00B File Offset: 0x0005820B
		// (set) Token: 0x0600188A RID: 6282 RVA: 0x0005A013 File Offset: 0x00058213
		[DataSourceProperty]
		public string IncomeValueText
		{
			get
			{
				return this._incomeValueText;
			}
			set
			{
				if (value != this._incomeValueText)
				{
					this._incomeValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "IncomeValueText");
				}
			}
		}

		// Token: 0x17000858 RID: 2136
		// (get) Token: 0x0600188B RID: 6283 RVA: 0x0005A036 File Offset: 0x00058236
		// (set) Token: 0x0600188C RID: 6284 RVA: 0x0005A03E File Offset: 0x0005823E
		[DataSourceProperty]
		public string ImageName
		{
			get
			{
				return this._imageName;
			}
			set
			{
				if (value != this._imageName)
				{
					this._imageName = value;
					base.OnPropertyChangedWithValue<string>(value, "ImageName");
				}
			}
		}

		// Token: 0x17000859 RID: 2137
		// (get) Token: 0x0600188D RID: 6285 RVA: 0x0005A061 File Offset: 0x00058261
		// (set) Token: 0x0600188E RID: 6286 RVA: 0x0005A069 File Offset: 0x00058269
		[DataSourceProperty]
		public int Income
		{
			get
			{
				return this._income;
			}
			set
			{
				if (value != this._income)
				{
					this._income = value;
					base.OnPropertyChangedWithValue(value, "Income");
				}
			}
		}

		// Token: 0x1700085A RID: 2138
		// (get) Token: 0x0600188F RID: 6287 RVA: 0x0005A087 File Offset: 0x00058287
		// (set) Token: 0x06001890 RID: 6288 RVA: 0x0005A08F File Offset: 0x0005828F
		[DataSourceProperty]
		public ImageIdentifierVM Visual
		{
			get
			{
				return this._visual;
			}
			set
			{
				if (value != this._visual)
				{
					this._visual = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Visual");
				}
			}
		}

		// Token: 0x1700085B RID: 2139
		// (get) Token: 0x06001891 RID: 6289 RVA: 0x0005A0AD File Offset: 0x000582AD
		// (set) Token: 0x06001892 RID: 6290 RVA: 0x0005A0B5 File Offset: 0x000582B5
		[DataSourceProperty]
		public int IncomeType
		{
			get
			{
				return this._incomeType;
			}
			set
			{
				if (value != this._incomeType)
				{
					this._incomeType = value;
					base.OnPropertyChangedWithValue(value, "IncomeType");
				}
			}
		}

		// Token: 0x04000B90 RID: 2960
		protected Action _onRefresh;

		// Token: 0x04000B91 RID: 2961
		protected Action<ClanFinanceIncomeItemBaseVM> _onSelection;

		// Token: 0x04000B92 RID: 2962
		protected IncomeTypes _incomeTypeAsEnum;

		// Token: 0x04000B93 RID: 2963
		private int _incomeType;

		// Token: 0x04000B94 RID: 2964
		private string _name;

		// Token: 0x04000B95 RID: 2965
		private string _location;

		// Token: 0x04000B96 RID: 2966
		private string _incomeValueText;

		// Token: 0x04000B97 RID: 2967
		private string _imageName;

		// Token: 0x04000B98 RID: 2968
		private int _income;

		// Token: 0x04000B99 RID: 2969
		private bool _isSelected;

		// Token: 0x04000B9A RID: 2970
		private ImageIdentifierVM _visual;

		// Token: 0x04000B9B RID: 2971
		private MBBindingList<SelectableItemPropertyVM> _itemProperties = new MBBindingList<SelectableItemPropertyVM>();
	}
}
