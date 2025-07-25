using System;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement
{
	// Token: 0x02000056 RID: 86
	public abstract class KingdomCategoryVM : ViewModel
	{
		// Token: 0x17000207 RID: 519
		// (get) Token: 0x060006DF RID: 1759 RVA: 0x0001F438 File Offset: 0x0001D638
		// (set) Token: 0x060006E0 RID: 1760 RVA: 0x0001F440 File Offset: 0x0001D640
		[DataSourceProperty]
		public string CategoryNameText
		{
			get
			{
				return this._categoryNameText;
			}
			set
			{
				if (value != this._categoryNameText)
				{
					this._categoryNameText = value;
					base.OnPropertyChanged("NameText");
				}
			}
		}

		// Token: 0x17000208 RID: 520
		// (get) Token: 0x060006E1 RID: 1761 RVA: 0x0001F462 File Offset: 0x0001D662
		// (set) Token: 0x060006E2 RID: 1762 RVA: 0x0001F46A File Offset: 0x0001D66A
		[DataSourceProperty]
		public string NoItemSelectedText
		{
			get
			{
				return this._noItemSelectedText;
			}
			set
			{
				if (value != this._noItemSelectedText)
				{
					this._noItemSelectedText = value;
					base.OnPropertyChangedWithValue<string>(value, "NoItemSelectedText");
				}
			}
		}

		// Token: 0x17000209 RID: 521
		// (get) Token: 0x060006E3 RID: 1763 RVA: 0x0001F48D File Offset: 0x0001D68D
		// (set) Token: 0x060006E4 RID: 1764 RVA: 0x0001F495 File Offset: 0x0001D695
		[DataSourceProperty]
		public bool IsAcceptableItemSelected
		{
			get
			{
				return this._isAcceptableItemSelected;
			}
			set
			{
				if (value != this._isAcceptableItemSelected)
				{
					this._isAcceptableItemSelected = value;
					base.OnPropertyChangedWithValue(value, "IsAcceptableItemSelected");
				}
			}
		}

		// Token: 0x1700020A RID: 522
		// (get) Token: 0x060006E5 RID: 1765 RVA: 0x0001F4B3 File Offset: 0x0001D6B3
		// (set) Token: 0x060006E6 RID: 1766 RVA: 0x0001F4BB File Offset: 0x0001D6BB
		[DataSourceProperty]
		public int NotificationCount
		{
			get
			{
				return this._notificationCount;
			}
			set
			{
				if (value != this._notificationCount)
				{
					this._notificationCount = value;
					base.OnPropertyChanged("NotificationCount");
				}
			}
		}

		// Token: 0x1700020B RID: 523
		// (get) Token: 0x060006E7 RID: 1767 RVA: 0x0001F4D8 File Offset: 0x0001D6D8
		// (set) Token: 0x060006E8 RID: 1768 RVA: 0x0001F4E0 File Offset: 0x0001D6E0
		[DataSourceProperty]
		public bool Show
		{
			get
			{
				return this._show;
			}
			set
			{
				if (value != this._show)
				{
					this._show = value;
					base.OnPropertyChanged("Show");
				}
			}
		}

		// Token: 0x04000309 RID: 777
		private int _notificationCount;

		// Token: 0x0400030A RID: 778
		private string _categoryNameText;

		// Token: 0x0400030B RID: 779
		private string _noItemSelectedText;

		// Token: 0x0400030C RID: 780
		private bool _show;

		// Token: 0x0400030D RID: 781
		private bool _isAcceptableItemSelected;
	}
}
