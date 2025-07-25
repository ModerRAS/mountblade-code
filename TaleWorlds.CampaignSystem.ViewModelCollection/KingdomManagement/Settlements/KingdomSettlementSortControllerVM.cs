using System;
using System.Collections.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Settlements
{
	// Token: 0x0200005C RID: 92
	public class KingdomSettlementSortControllerVM : ViewModel
	{
		// Token: 0x06000798 RID: 1944 RVA: 0x000212FC File Offset: 0x0001F4FC
		public KingdomSettlementSortControllerVM(ref MBBindingList<KingdomSettlementItemVM> listToControl)
		{
			this._listToControl = listToControl;
			this._typeComparer = new KingdomSettlementSortControllerVM.ItemTypeComparer();
			this._prosperityComparer = new KingdomSettlementSortControllerVM.ItemProsperityComparer();
			this._defendersComparer = new KingdomSettlementSortControllerVM.ItemDefendersComparer();
			this._ownerComparer = new KingdomSettlementSortControllerVM.ItemOwnerComparer();
			this._nameComparer = new KingdomSettlementSortControllerVM.ItemNameComparer();
		}

		// Token: 0x06000799 RID: 1945 RVA: 0x00021350 File Offset: 0x0001F550
		private void ExecuteSortByType()
		{
			int typeState = this.TypeState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.TypeState = (typeState + 1) % 3;
			if (this.TypeState == 0)
			{
				this.TypeState++;
			}
			this._typeComparer.SetSortMode(this.TypeState == 1);
			this._listToControl.Sort(this._typeComparer);
			this.IsTypeSelected = true;
		}

		// Token: 0x0600079A RID: 1946 RVA: 0x000213B8 File Offset: 0x0001F5B8
		private void ExecuteSortByName()
		{
			int nameState = this.NameState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.NameState = (nameState + 1) % 3;
			if (this.NameState == 0)
			{
				this.NameState++;
			}
			this._nameComparer.SetSortMode(this.NameState == 1);
			this._listToControl.Sort(this._nameComparer);
			this.IsNameSelected = true;
		}

		// Token: 0x0600079B RID: 1947 RVA: 0x00021420 File Offset: 0x0001F620
		private void ExecuteSortByOwner()
		{
			int ownerState = this.OwnerState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.OwnerState = (ownerState + 1) % 3;
			if (this.OwnerState == 0)
			{
				this.OwnerState++;
			}
			this._ownerComparer.SetSortMode(this.OwnerState == 1);
			this._listToControl.Sort(this._ownerComparer);
			this.IsOwnerSelected = true;
		}

		// Token: 0x0600079C RID: 1948 RVA: 0x00021488 File Offset: 0x0001F688
		private void ExecuteSortByProsperity()
		{
			int prosperityState = this.ProsperityState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.ProsperityState = (prosperityState + 1) % 3;
			if (this.ProsperityState == 0)
			{
				this.ProsperityState++;
			}
			this._prosperityComparer.SetSortMode(this.ProsperityState == 1);
			this._listToControl.Sort(this._prosperityComparer);
			this.IsProsperitySelected = true;
		}

		// Token: 0x0600079D RID: 1949 RVA: 0x000214F0 File Offset: 0x0001F6F0
		private void ExecuteSortByDefenders()
		{
			int defendersState = this.DefendersState;
			this.SetAllStates(CampaignUIHelper.SortState.Default);
			this.DefendersState = (defendersState + 1) % 3;
			if (this.DefendersState == 0)
			{
				int defendersState2 = this.DefendersState;
				this.DefendersState = defendersState2 + 1;
			}
			this._defendersComparer.SetSortMode(this.DefendersState == 1);
			this._listToControl.Sort(this._defendersComparer);
			this.IsDefendersSelected = true;
		}

		// Token: 0x0600079E RID: 1950 RVA: 0x0002155C File Offset: 0x0001F75C
		private void SetAllStates(CampaignUIHelper.SortState state)
		{
			this.TypeState = (int)state;
			this.NameState = (int)state;
			this.OwnerState = (int)state;
			this.ProsperityState = (int)state;
			this.DefendersState = (int)state;
			this.IsTypeSelected = false;
			this.IsNameSelected = false;
			this.IsProsperitySelected = false;
			this.IsOwnerSelected = false;
			this.IsDefendersSelected = false;
		}

		// Token: 0x17000248 RID: 584
		// (get) Token: 0x0600079F RID: 1951 RVA: 0x000215AF File Offset: 0x0001F7AF
		// (set) Token: 0x060007A0 RID: 1952 RVA: 0x000215B7 File Offset: 0x0001F7B7
		[DataSourceProperty]
		public int TypeState
		{
			get
			{
				return this._typeState;
			}
			set
			{
				if (value != this._typeState)
				{
					this._typeState = value;
					base.OnPropertyChangedWithValue(value, "TypeState");
				}
			}
		}

		// Token: 0x17000249 RID: 585
		// (get) Token: 0x060007A1 RID: 1953 RVA: 0x000215D5 File Offset: 0x0001F7D5
		// (set) Token: 0x060007A2 RID: 1954 RVA: 0x000215DD File Offset: 0x0001F7DD
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

		// Token: 0x1700024A RID: 586
		// (get) Token: 0x060007A3 RID: 1955 RVA: 0x000215FB File Offset: 0x0001F7FB
		// (set) Token: 0x060007A4 RID: 1956 RVA: 0x00021603 File Offset: 0x0001F803
		[DataSourceProperty]
		public int OwnerState
		{
			get
			{
				return this._ownerState;
			}
			set
			{
				if (value != this._ownerState)
				{
					this._ownerState = value;
					base.OnPropertyChangedWithValue(value, "OwnerState");
				}
			}
		}

		// Token: 0x1700024B RID: 587
		// (get) Token: 0x060007A5 RID: 1957 RVA: 0x00021621 File Offset: 0x0001F821
		// (set) Token: 0x060007A6 RID: 1958 RVA: 0x00021629 File Offset: 0x0001F829
		[DataSourceProperty]
		public int ProsperityState
		{
			get
			{
				return this._prosperityState;
			}
			set
			{
				if (value != this._prosperityState)
				{
					this._prosperityState = value;
					base.OnPropertyChangedWithValue(value, "ProsperityState");
				}
			}
		}

		// Token: 0x1700024C RID: 588
		// (get) Token: 0x060007A7 RID: 1959 RVA: 0x00021647 File Offset: 0x0001F847
		// (set) Token: 0x060007A8 RID: 1960 RVA: 0x0002164F File Offset: 0x0001F84F
		[DataSourceProperty]
		public int DefendersState
		{
			get
			{
				return this._defendersState;
			}
			set
			{
				if (value != this._defendersState)
				{
					this._defendersState = value;
					base.OnPropertyChangedWithValue(value, "DefendersState");
				}
			}
		}

		// Token: 0x1700024D RID: 589
		// (get) Token: 0x060007A9 RID: 1961 RVA: 0x0002166D File Offset: 0x0001F86D
		// (set) Token: 0x060007AA RID: 1962 RVA: 0x00021675 File Offset: 0x0001F875
		[DataSourceProperty]
		public bool IsTypeSelected
		{
			get
			{
				return this._isTypeSelected;
			}
			set
			{
				if (value != this._isTypeSelected)
				{
					this._isTypeSelected = value;
					base.OnPropertyChangedWithValue(value, "IsTypeSelected");
				}
			}
		}

		// Token: 0x1700024E RID: 590
		// (get) Token: 0x060007AB RID: 1963 RVA: 0x00021693 File Offset: 0x0001F893
		// (set) Token: 0x060007AC RID: 1964 RVA: 0x0002169B File Offset: 0x0001F89B
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

		// Token: 0x1700024F RID: 591
		// (get) Token: 0x060007AD RID: 1965 RVA: 0x000216B9 File Offset: 0x0001F8B9
		// (set) Token: 0x060007AE RID: 1966 RVA: 0x000216C1 File Offset: 0x0001F8C1
		[DataSourceProperty]
		public bool IsDefendersSelected
		{
			get
			{
				return this._isDefendersSelected;
			}
			set
			{
				if (value != this._isDefendersSelected)
				{
					this._isDefendersSelected = value;
					base.OnPropertyChangedWithValue(value, "IsDefendersSelected");
				}
			}
		}

		// Token: 0x17000250 RID: 592
		// (get) Token: 0x060007AF RID: 1967 RVA: 0x000216DF File Offset: 0x0001F8DF
		// (set) Token: 0x060007B0 RID: 1968 RVA: 0x000216E7 File Offset: 0x0001F8E7
		[DataSourceProperty]
		public bool IsOwnerSelected
		{
			get
			{
				return this._isOwnerSelected;
			}
			set
			{
				if (value != this._isOwnerSelected)
				{
					this._isOwnerSelected = value;
					base.OnPropertyChangedWithValue(value, "IsOwnerSelected");
				}
			}
		}

		// Token: 0x17000251 RID: 593
		// (get) Token: 0x060007B1 RID: 1969 RVA: 0x00021705 File Offset: 0x0001F905
		// (set) Token: 0x060007B2 RID: 1970 RVA: 0x0002170D File Offset: 0x0001F90D
		[DataSourceProperty]
		public bool IsProsperitySelected
		{
			get
			{
				return this._isProsperitySelected;
			}
			set
			{
				if (value != this._isProsperitySelected)
				{
					this._isProsperitySelected = value;
					base.OnPropertyChangedWithValue(value, "IsProsperitySelected");
				}
			}
		}

		// Token: 0x04000355 RID: 853
		private readonly MBBindingList<KingdomSettlementItemVM> _listToControl;

		// Token: 0x04000356 RID: 854
		private readonly KingdomSettlementSortControllerVM.ItemTypeComparer _typeComparer;

		// Token: 0x04000357 RID: 855
		private readonly KingdomSettlementSortControllerVM.ItemProsperityComparer _prosperityComparer;

		// Token: 0x04000358 RID: 856
		private readonly KingdomSettlementSortControllerVM.ItemDefendersComparer _defendersComparer;

		// Token: 0x04000359 RID: 857
		private readonly KingdomSettlementSortControllerVM.ItemNameComparer _nameComparer;

		// Token: 0x0400035A RID: 858
		private readonly KingdomSettlementSortControllerVM.ItemOwnerComparer _ownerComparer;

		// Token: 0x0400035B RID: 859
		private int _typeState;

		// Token: 0x0400035C RID: 860
		private int _nameState;

		// Token: 0x0400035D RID: 861
		private int _ownerState;

		// Token: 0x0400035E RID: 862
		private int _prosperityState;

		// Token: 0x0400035F RID: 863
		private int _defendersState;

		// Token: 0x04000360 RID: 864
		private bool _isTypeSelected;

		// Token: 0x04000361 RID: 865
		private bool _isNameSelected;

		// Token: 0x04000362 RID: 866
		private bool _isOwnerSelected;

		// Token: 0x04000363 RID: 867
		private bool _isProsperitySelected;

		// Token: 0x04000364 RID: 868
		private bool _isDefendersSelected;

		// Token: 0x02000194 RID: 404
		public abstract class ItemComparerBase : IComparer<KingdomSettlementItemVM>
		{
			// Token: 0x060020BA RID: 8378 RVA: 0x000730F2 File Offset: 0x000712F2
			public void SetSortMode(bool isAscending)
			{
				this._isAscending = isAscending;
			}

			// Token: 0x060020BB RID: 8379
			public abstract int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y);

			// Token: 0x060020BC RID: 8380 RVA: 0x000730FB File Offset: 0x000712FB
			protected int ResolveEquality(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				return x.Settlement.Name.ToString().CompareTo(y.Settlement.Name.ToString());
			}

			// Token: 0x04000FCF RID: 4047
			protected bool _isAscending;
		}

		// Token: 0x02000195 RID: 405
		public class ItemNameComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020BE RID: 8382 RVA: 0x0007312C File Offset: 0x0007132C
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				if (this._isAscending)
				{
					return y.Settlement.Name.ToString().CompareTo(x.Settlement.Name.ToString()) * -1;
				}
				return y.Settlement.Name.ToString().CompareTo(x.Settlement.Name.ToString());
			}
		}

		// Token: 0x02000196 RID: 406
		public class ItemClanComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020C0 RID: 8384 RVA: 0x00073198 File Offset: 0x00071398
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Settlement.OwnerClan.Name.ToString().CompareTo(x.Settlement.OwnerClan.Name.ToString());
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x02000197 RID: 407
		public class ItemOwnerComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020C2 RID: 8386 RVA: 0x000731F8 File Offset: 0x000713F8
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Owner.NameText.CompareTo(x.Owner.NameText);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x02000198 RID: 408
		public class ItemVillagesComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020C4 RID: 8388 RVA: 0x00073244 File Offset: 0x00071444
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Villages.Count.CompareTo(x.Villages.Count);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x02000199 RID: 409
		public class ItemTypeComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020C6 RID: 8390 RVA: 0x00073294 File Offset: 0x00071494
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Settlement.IsCastle.CompareTo(x.Settlement.IsCastle);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x0200019A RID: 410
		public class ItemProsperityComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020C8 RID: 8392 RVA: 0x000732E4 File Offset: 0x000714E4
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Prosperity.CompareTo(x.Prosperity);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x0200019B RID: 411
		public class ItemFoodComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020CA RID: 8394 RVA: 0x00073328 File Offset: 0x00071528
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				float num = (y.Settlement.Town != null) ? y.Settlement.Town.FoodStocks : 0f;
				float value = (x.Settlement.Town != null) ? x.Settlement.Town.FoodStocks : 0f;
				int num2 = num.CompareTo(value);
				if (num2 != 0)
				{
					return num2 * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x0200019C RID: 412
		public class ItemGarrisonComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020CC RID: 8396 RVA: 0x000733AC File Offset: 0x000715AC
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Garrison.CompareTo(x.Garrison);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}

		// Token: 0x0200019D RID: 413
		private class ItemDefendersComparer : KingdomSettlementSortControllerVM.ItemComparerBase
		{
			// Token: 0x060020CE RID: 8398 RVA: 0x000733F0 File Offset: 0x000715F0
			public override int Compare(KingdomSettlementItemVM x, KingdomSettlementItemVM y)
			{
				int num = y.Defenders.CompareTo(x.Defenders);
				if (num != 0)
				{
					return num * (this._isAscending ? -1 : 1);
				}
				return base.ResolveEquality(x, y);
			}
		}
	}
}
