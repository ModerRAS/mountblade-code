using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.Categories
{
	// Token: 0x0200011F RID: 287
	public class ClanPartiesSortControllerVM : ViewModel
	{
		// Token: 0x06001BAF RID: 7087 RVA: 0x0006407B File Offset: 0x0006227B
		public ClanPartiesSortControllerVM(MBBindingList<MBBindingList<ClanPartyItemVM>> listsToControl)
		{
			this._listsToControl = listsToControl;
			this._nameComparer = new ClanPartiesSortControllerVM.ItemNameComparer();
			this._locationComparer = new ClanPartiesSortControllerVM.ItemLocationComparer();
			this._sizeComparer = new ClanPartiesSortControllerVM.ItemSizeComparer();
		}

		// Token: 0x06001BB0 RID: 7088 RVA: 0x000640AC File Offset: 0x000622AC
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.NameText = GameTexts.FindText("str_sort_by_name_label", null).ToString();
			this.LocationText = GameTexts.FindText("str_tooltip_label_location", null).ToString();
			this.SizeText = GameTexts.FindText("str_clan_party_size", null).ToString();
		}

		// Token: 0x06001BB1 RID: 7089 RVA: 0x00064104 File Offset: 0x00062304
		public void ExecuteSortByName()
		{
			int nameState = this.NameState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.NameState = (nameState + 1) % 3;
			if (this.NameState == 0)
			{
				int nameState2 = this.NameState;
				this.NameState = nameState2 + 1;
			}
			this._nameComparer.SetSortMode(this.NameState == 1);
			foreach (MBBindingList<ClanPartyItemVM> mbbindingList in this._listsToControl)
			{
				mbbindingList.Sort(this._nameComparer);
			}
			this.IsNameSelected = true;
		}

		// Token: 0x06001BB2 RID: 7090 RVA: 0x000641A0 File Offset: 0x000623A0
		public void ExecuteSortByLocation()
		{
			int locationState = this.LocationState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.LocationState = (locationState + 1) % 3;
			if (this.LocationState == 0)
			{
				int locationState2 = this.LocationState;
				this.LocationState = locationState2 + 1;
			}
			this._locationComparer.SetSortMode(this.LocationState == 1);
			foreach (MBBindingList<ClanPartyItemVM> mbbindingList in this._listsToControl)
			{
				mbbindingList.Sort(this._locationComparer);
			}
			this.IsLocationSelected = true;
		}

		// Token: 0x06001BB3 RID: 7091 RVA: 0x0006423C File Offset: 0x0006243C
		public void ExecuteSortBySize()
		{
			int sizeState = this.SizeState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.SizeState = (sizeState + 1) % 3;
			if (this.SizeState == 0)
			{
				int sizeState2 = this.SizeState;
				this.SizeState = sizeState2 + 1;
			}
			this._sizeComparer.SetSortMode(this.SizeState == 1);
			foreach (MBBindingList<ClanPartyItemVM> mbbindingList in this._listsToControl)
			{
				mbbindingList.Sort(this._sizeComparer);
			}
			this.IsSizeSelected = true;
		}

		// Token: 0x06001BB4 RID: 7092 RVA: 0x000642D8 File Offset: 0x000624D8
		private void SetAllStates(CampaignUIHelper.SortState state)
		{
			this.NameState = (int)state;
			this.LocationState = (int)state;
			this.SizeState = (int)state;
			this.IsNameSelected = false;
			this.IsLocationSelected = false;
			this.IsSizeSelected = false;
		}

		// Token: 0x06001BB5 RID: 7093 RVA: 0x00064304 File Offset: 0x00062504
		public void ResetAllStates()
		{
			this.SetAllStates(CampaignUIHelper.SortState.Default);
		}

		// Token: 0x1700097F RID: 2431
		// (get) Token: 0x06001BB6 RID: 7094 RVA: 0x0006430D File Offset: 0x0006250D
		// (set) Token: 0x06001BB7 RID: 7095 RVA: 0x00064315 File Offset: 0x00062515
		[DataSourceProperty]
		public int NameState
		{
			get
			{
				return this._nameState;
			}
			set
			{
				if (value != this._nameState)
				{
					this._nameState = value;
					base.OnPropertyChangedWithValue(value, "NameState");
				}
			}
		}

		// Token: 0x17000980 RID: 2432
		// (get) Token: 0x06001BB8 RID: 7096 RVA: 0x00064333 File Offset: 0x00062533
		// (set) Token: 0x06001BB9 RID: 7097 RVA: 0x0006433B File Offset: 0x0006253B
		[DataSourceProperty]
		public int LocationState
		{
			get
			{
				return this._locationState;
			}
			set
			{
				if (value != this._locationState)
				{
					this._locationState = value;
					base.OnPropertyChangedWithValue(value, "LocationState");
				}
			}
		}

		// Token: 0x17000981 RID: 2433
		// (get) Token: 0x06001BBA RID: 7098 RVA: 0x00064359 File Offset: 0x00062559
		// (set) Token: 0x06001BBB RID: 7099 RVA: 0x00064361 File Offset: 0x00062561
		[DataSourceProperty]
		public int SizeState
		{
			get
			{
				return this._sizeState;
			}
			set
			{
				if (value != this._sizeState)
				{
					this._sizeState = value;
					base.OnPropertyChangedWithValue(value, "SizeState");
				}
			}
		}

		// Token: 0x17000982 RID: 2434
		// (get) Token: 0x06001BBC RID: 7100 RVA: 0x0006437F File Offset: 0x0006257F
		// (set) Token: 0x06001BBD RID: 7101 RVA: 0x00064387 File Offset: 0x00062587
		[DataSourceProperty]
		public bool IsNameSelected
		{
			get
			{
				return this._isNameSelected;
			}
			set
			{
				if (value != this._isNameSelected)
				{
					this._isNameSelected = value;
					base.OnPropertyChangedWithValue(value, "IsNameSelected");
				}
			}
		}

		// Token: 0x17000983 RID: 2435
		// (get) Token: 0x06001BBE RID: 7102 RVA: 0x000643A5 File Offset: 0x000625A5
		// (set) Token: 0x06001BBF RID: 7103 RVA: 0x000643AD File Offset: 0x000625AD
		[DataSourceProperty]
		public bool IsLocationSelected
		{
			get
			{
				return this._isLocationSelected;
			}
			set
			{
				if (value != this._isLocationSelected)
				{
					this._isLocationSelected = value;
					base.OnPropertyChangedWithValue(value, "IsLocationSelected");
				}
			}
		}

		// Token: 0x17000984 RID: 2436
		// (get) Token: 0x06001BC0 RID: 7104 RVA: 0x000643CB File Offset: 0x000625CB
		// (set) Token: 0x06001BC1 RID: 7105 RVA: 0x000643D3 File Offset: 0x000625D3
		[DataSourceProperty]
		public bool IsSizeSelected
		{
			get
			{
				return this._isSizeSelected;
			}
			set
			{
				if (value != this._isSizeSelected)
				{
					this._isSizeSelected = value;
					base.OnPropertyChangedWithValue(value, "IsSizeSelected");
				}
			}
		}

		// Token: 0x17000985 RID: 2437
		// (get) Token: 0x06001BC2 RID: 7106 RVA: 0x000643F1 File Offset: 0x000625F1
		// (set) Token: 0x06001BC3 RID: 7107 RVA: 0x000643F9 File Offset: 0x000625F9
		[DataSourceProperty]
		public string NameText
		{
			get
			{
				return this._nameText;
			}
			set
			{
				if (value != this._nameText)
				{
					this._nameText = value;
					base.OnPropertyChangedWithValue<string>(value, "NameText");
				}
			}
		}

		// Token: 0x17000986 RID: 2438
		// (get) Token: 0x06001BC4 RID: 7108 RVA: 0x0006441C File Offset: 0x0006261C
		// (set) Token: 0x06001BC5 RID: 7109 RVA: 0x00064424 File Offset: 0x00062624
		[DataSourceProperty]
		public string LocationText
		{
			get
			{
				return this._locationText;
			}
			set
			{
				if (value != this._locationText)
				{
					this._locationText = value;
					base.OnPropertyChangedWithValue<string>(value, "LocationText");
				}
			}
		}

		// Token: 0x17000987 RID: 2439
		// (get) Token: 0x06001BC6 RID: 7110 RVA: 0x00064447 File Offset: 0x00062647
		// (set) Token: 0x06001BC7 RID: 7111 RVA: 0x0006444F File Offset: 0x0006264F
		[DataSourceProperty]
		public string SizeText
		{
			get
			{
				return this._sizeText;
			}
			set
			{
				if (value != this._sizeText)
				{
					this._sizeText = value;
					base.OnPropertyChangedWithValue<string>(value, "SizeText");
				}
			}
		}

		// Token: 0x04000D18 RID: 3352
		private readonly MBBindingList<MBBindingList<ClanPartyItemVM>> _listsToControl;

		// Token: 0x04000D19 RID: 3353
		private readonly ClanPartiesSortControllerVM.ItemNameComparer _nameComparer;

		// Token: 0x04000D1A RID: 3354
		private readonly ClanPartiesSortControllerVM.ItemLocationComparer _locationComparer;

		// Token: 0x04000D1B RID: 3355
		private readonly ClanPartiesSortControllerVM.ItemSizeComparer _sizeComparer;

		// Token: 0x04000D1C RID: 3356
		private int _nameState;

		// Token: 0x04000D1D RID: 3357
		private int _locationState;

		// Token: 0x04000D1E RID: 3358
		private int _sizeState;

		// Token: 0x04000D1F RID: 3359
		private bool _isNameSelected;

		// Token: 0x04000D20 RID: 3360
		private bool _isLocationSelected;

		// Token: 0x04000D21 RID: 3361
		private bool _isSizeSelected;

		// Token: 0x04000D22 RID: 3362
		private string _nameText;

		// Token: 0x04000D23 RID: 3363
		private string _locationText;

		// Token: 0x04000D24 RID: 3364
		private string _sizeText;

		// Token: 0x02000277 RID: 631
		public abstract class ItemComparerBase : IComparer<ClanPartyItemVM>
		{
			// Token: 0x0600237C RID: 9084 RVA: 0x00077290 File Offset: 0x00075490
			public void SetSortMode(bool isAcending)
			{
				this._isAcending = isAcending;
			}

			// Token: 0x0600237D RID: 9085
			public abstract int Compare(ClanPartyItemVM x, ClanPartyItemVM y);

			// Token: 0x040011CB RID: 4555
			protected bool _isAcending;
		}

		// Token: 0x02000278 RID: 632
		public class ItemNameComparer : ClanPartiesSortControllerVM.ItemComparerBase
		{
			// Token: 0x0600237F RID: 9087 RVA: 0x000772A1 File Offset: 0x000754A1
			public override int Compare(ClanPartyItemVM x, ClanPartyItemVM y)
			{
				if (this._isAcending)
				{
					return y.Name.CompareTo(x.Name) * -1;
				}
				return y.Name.CompareTo(x.Name);
			}
		}

		// Token: 0x02000279 RID: 633
		public class ItemLocationComparer : ClanPartiesSortControllerVM.ItemComparerBase
		{
			// Token: 0x06002381 RID: 9089 RVA: 0x000772D8 File Offset: 0x000754D8
			public override int Compare(ClanPartyItemVM x, ClanPartyItemVM y)
			{
				if (this._isAcending)
				{
					return y.Party.MobileParty.GetTrackDistanceToMainAgent().CompareTo(x.Party.MobileParty.GetTrackDistanceToMainAgent()) * -1;
				}
				return y.Party.MobileParty.GetTrackDistanceToMainAgent().CompareTo(x.Party.MobileParty.GetTrackDistanceToMainAgent());
			}
		}

		// Token: 0x0200027A RID: 634
		public class ItemSizeComparer : ClanPartiesSortControllerVM.ItemComparerBase
		{
			// Token: 0x06002383 RID: 9091 RVA: 0x00077348 File Offset: 0x00075548
			public override int Compare(ClanPartyItemVM x, ClanPartyItemVM y)
			{
				if (this._isAcending)
				{
					return y.Party.MobileParty.MemberRoster.TotalManCount.CompareTo(x.Party.MobileParty.MemberRoster.TotalManCount) * -1;
				}
				return y.Party.MobileParty.MemberRoster.TotalManCount.CompareTo(x.Party.MobileParty.MemberRoster.TotalManCount);
			}
		}
	}
}
