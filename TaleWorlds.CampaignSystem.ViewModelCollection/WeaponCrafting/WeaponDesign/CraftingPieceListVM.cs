using System;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign
{
	// Token: 0x020000E4 RID: 228
	public class CraftingPieceListVM : ViewModel
	{
		// Token: 0x06001551 RID: 5457 RVA: 0x000505F3 File Offset: 0x0004E7F3
		public CraftingPieceListVM(MBBindingList<CraftingPieceVM> pieceList, CraftingPiece.PieceTypes pieceType, Action<CraftingPiece.PieceTypes> onSelect)
		{
			this.Pieces = pieceList;
			this.PieceType = pieceType;
			this._onSelect = onSelect;
		}

		// Token: 0x06001552 RID: 5458 RVA: 0x00050610 File Offset: 0x0004E810
		public void ExecuteSelect()
		{
			Action<CraftingPiece.PieceTypes> onSelect = this._onSelect;
			if (onSelect != null)
			{
				onSelect(this.PieceType);
			}
			this.HasNewlyUnlockedPieces = false;
		}

		// Token: 0x06001553 RID: 5459 RVA: 0x00050630 File Offset: 0x0004E830
		public void Refresh()
		{
			this.HasNewlyUnlockedPieces = this.Pieces.Any((CraftingPieceVM x) => x.IsNewlyUnlocked);
		}

		// Token: 0x1700072B RID: 1835
		// (get) Token: 0x06001554 RID: 5460 RVA: 0x00050662 File Offset: 0x0004E862
		// (set) Token: 0x06001555 RID: 5461 RVA: 0x0005066A File Offset: 0x0004E86A
		[DataSourceProperty]
		public bool HasNewlyUnlockedPieces
		{
			get
			{
				return this._hasNewlyUnlockedPieces;
			}
			set
			{
				if (value != this._hasNewlyUnlockedPieces)
				{
					this._hasNewlyUnlockedPieces = value;
					base.OnPropertyChangedWithValue(value, "HasNewlyUnlockedPieces");
				}
			}
		}

		// Token: 0x1700072C RID: 1836
		// (get) Token: 0x06001556 RID: 5462 RVA: 0x00050688 File Offset: 0x0004E888
		// (set) Token: 0x06001557 RID: 5463 RVA: 0x00050690 File Offset: 0x0004E890
		[DataSourceProperty]
		public MBBindingList<CraftingPieceVM> Pieces
		{
			get
			{
				return this._pieces;
			}
			set
			{
				if (value != this._pieces)
				{
					this._pieces = value;
					base.OnPropertyChangedWithValue<MBBindingList<CraftingPieceVM>>(value, "Pieces");
				}
			}
		}

		// Token: 0x1700072D RID: 1837
		// (get) Token: 0x06001558 RID: 5464 RVA: 0x000506AE File Offset: 0x0004E8AE
		// (set) Token: 0x06001559 RID: 5465 RVA: 0x000506B6 File Offset: 0x0004E8B6
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

		// Token: 0x1700072E RID: 1838
		// (get) Token: 0x0600155A RID: 5466 RVA: 0x000506D4 File Offset: 0x0004E8D4
		// (set) Token: 0x0600155B RID: 5467 RVA: 0x000506DC File Offset: 0x0004E8DC
		[DataSourceProperty]
		public bool IsEnabled
		{
			get
			{
				return this._isEnabled;
			}
			set
			{
				if (value != this._isEnabled)
				{
					this._isEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsEnabled");
				}
			}
		}

		// Token: 0x1700072F RID: 1839
		// (get) Token: 0x0600155C RID: 5468 RVA: 0x000506FA File Offset: 0x0004E8FA
		// (set) Token: 0x0600155D RID: 5469 RVA: 0x00050702 File Offset: 0x0004E902
		[DataSourceProperty]
		public CraftingPieceVM SelectedPiece
		{
			get
			{
				return this._selectedPiece;
			}
			set
			{
				if (value != this._selectedPiece)
				{
					this._selectedPiece = value;
					base.OnPropertyChangedWithValue<CraftingPieceVM>(value, "SelectedPiece");
				}
			}
		}

		// Token: 0x040009E6 RID: 2534
		public CraftingPiece.PieceTypes PieceType;

		// Token: 0x040009E7 RID: 2535
		private Action<CraftingPiece.PieceTypes> _onSelect;

		// Token: 0x040009E8 RID: 2536
		private bool _hasNewlyUnlockedPieces;

		// Token: 0x040009E9 RID: 2537
		private MBBindingList<CraftingPieceVM> _pieces;

		// Token: 0x040009EA RID: 2538
		private bool _isSelected;

		// Token: 0x040009EB RID: 2539
		private bool _isEnabled;

		// Token: 0x040009EC RID: 2540
		private CraftingPieceVM _selectedPiece;
	}
}
