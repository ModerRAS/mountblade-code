using System;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign
{
	// Token: 0x020000E5 RID: 229
	public class CraftingPieceVM : ViewModel
	{
		// Token: 0x0600155E RID: 5470 RVA: 0x00050720 File Offset: 0x0004E920
		public CraftingPieceVM()
		{
			this.ImageIdentifier = new ImageIdentifierVM(ImageIdentifierType.Null);
		}

		// Token: 0x0600155F RID: 5471 RVA: 0x0005073C File Offset: 0x0004E93C
		public CraftingPieceVM(Action<CraftingPieceVM> selectWeaponPart, string templateId, WeaponDesignElement usableCraftingPiece, int pieceType, int index, bool isOpened)
		{
			this._selectWeaponPiece = selectWeaponPart;
			this.CraftingPiece = usableCraftingPiece;
			this.Tier = usableCraftingPiece.CraftingPiece.PieceTier;
			this.TierText = Common.ToRoman(this.Tier);
			this.ImageIdentifier = new ImageIdentifierVM(usableCraftingPiece.CraftingPiece, templateId);
			this.PieceType = pieceType;
			this.Index = index;
			this.PlayerHasPiece = isOpened;
			this.ItemAttributeIcons = new MBBindingList<CraftingItemFlagVM>();
			this.IsEmpty = string.IsNullOrEmpty(this.CraftingPiece.CraftingPiece.MeshName);
			this.RefreshFlagIcons();
		}

		// Token: 0x06001560 RID: 5472 RVA: 0x000507DC File Offset: 0x0004E9DC
		public void RefreshFlagIcons()
		{
			this.ItemAttributeIcons.Clear();
			foreach (Tuple<string, TextObject> tuple in CampaignUIHelper.GetItemFlagDetails(this.CraftingPiece.CraftingPiece.AdditionalItemFlags))
			{
				this.ItemAttributeIcons.Add(new CraftingItemFlagVM(tuple.Item1, tuple.Item2, true));
			}
			foreach (ValueTuple<string, TextObject> valueTuple in CampaignUIHelper.GetWeaponFlagDetails(this.CraftingPiece.CraftingPiece.AdditionalWeaponFlags, null))
			{
				this.ItemAttributeIcons.Add(new CraftingItemFlagVM(valueTuple.Item1, valueTuple.Item2, true));
			}
		}

		// Token: 0x06001561 RID: 5473 RVA: 0x000508C8 File Offset: 0x0004EAC8
		public void ExecuteOpenTooltip()
		{
			InformationManager.ShowTooltip(typeof(WeaponDesignElement), new object[]
			{
				this.CraftingPiece
			});
		}

		// Token: 0x06001562 RID: 5474 RVA: 0x000508E8 File Offset: 0x0004EAE8
		public void ExecuteCloseTooltip()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x06001563 RID: 5475 RVA: 0x000508EF File Offset: 0x0004EAEF
		public void ExecuteSelect()
		{
			this._selectWeaponPiece(this);
		}

		// Token: 0x17000730 RID: 1840
		// (get) Token: 0x06001564 RID: 5476 RVA: 0x000508FD File Offset: 0x0004EAFD
		// (set) Token: 0x06001565 RID: 5477 RVA: 0x00050905 File Offset: 0x0004EB05
		[DataSourceProperty]
		public bool IsFilteredOut
		{
			get
			{
				return this._isFilteredOut;
			}
			set
			{
				if (value != this._isFilteredOut)
				{
					this._isFilteredOut = value;
					base.OnPropertyChangedWithValue(value, "IsFilteredOut");
				}
			}
		}

		// Token: 0x17000731 RID: 1841
		// (get) Token: 0x06001566 RID: 5478 RVA: 0x00050923 File Offset: 0x0004EB23
		// (set) Token: 0x06001567 RID: 5479 RVA: 0x0005092B File Offset: 0x0004EB2B
		[DataSourceProperty]
		public MBBindingList<CraftingItemFlagVM> ItemAttributeIcons
		{
			get
			{
				return this._itemAttributeIcons;
			}
			set
			{
				if (value != this._itemAttributeIcons)
				{
					this._itemAttributeIcons = value;
					base.OnPropertyChangedWithValue<MBBindingList<CraftingItemFlagVM>>(value, "ItemAttributeIcons");
				}
			}
		}

		// Token: 0x17000732 RID: 1842
		// (get) Token: 0x06001568 RID: 5480 RVA: 0x00050949 File Offset: 0x0004EB49
		// (set) Token: 0x06001569 RID: 5481 RVA: 0x00050951 File Offset: 0x0004EB51
		[DataSourceProperty]
		public bool PlayerHasPiece
		{
			get
			{
				return this._playerHasPiece;
			}
			set
			{
				if (this._playerHasPiece != value)
				{
					this._playerHasPiece = value;
					base.OnPropertyChangedWithValue(value, "PlayerHasPiece");
				}
			}
		}

		// Token: 0x17000733 RID: 1843
		// (get) Token: 0x0600156A RID: 5482 RVA: 0x0005096F File Offset: 0x0004EB6F
		// (set) Token: 0x0600156B RID: 5483 RVA: 0x00050977 File Offset: 0x0004EB77
		[DataSourceProperty]
		public bool IsEmpty
		{
			get
			{
				return this._isEmpty;
			}
			set
			{
				if (this._isEmpty != value)
				{
					this._isEmpty = value;
					base.OnPropertyChangedWithValue(value, "IsEmpty");
				}
			}
		}

		// Token: 0x17000734 RID: 1844
		// (get) Token: 0x0600156C RID: 5484 RVA: 0x00050995 File Offset: 0x0004EB95
		// (set) Token: 0x0600156D RID: 5485 RVA: 0x0005099D File Offset: 0x0004EB9D
		[DataSourceProperty]
		public string TierText
		{
			get
			{
				return this._tierText;
			}
			set
			{
				if (this._tierText != value)
				{
					this._tierText = value;
					base.OnPropertyChangedWithValue<string>(value, "TierText");
				}
			}
		}

		// Token: 0x17000735 RID: 1845
		// (get) Token: 0x0600156E RID: 5486 RVA: 0x000509C0 File Offset: 0x0004EBC0
		// (set) Token: 0x0600156F RID: 5487 RVA: 0x000509C8 File Offset: 0x0004EBC8
		[DataSourceProperty]
		public int Tier
		{
			get
			{
				return this._tier;
			}
			set
			{
				if (this._tier != value)
				{
					this._tier = value;
					base.OnPropertyChangedWithValue(value, "Tier");
				}
			}
		}

		// Token: 0x17000736 RID: 1846
		// (get) Token: 0x06001570 RID: 5488 RVA: 0x000509E6 File Offset: 0x0004EBE6
		// (set) Token: 0x06001571 RID: 5489 RVA: 0x000509EE File Offset: 0x0004EBEE
		[DataSourceProperty]
		public bool IsSelected
		{
			get
			{
				return this._isSelected;
			}
			set
			{
				if (this._isSelected != value)
				{
					this._isSelected = value;
					base.OnPropertyChangedWithValue(value, "IsSelected");
				}
			}
		}

		// Token: 0x17000737 RID: 1847
		// (get) Token: 0x06001572 RID: 5490 RVA: 0x00050A0C File Offset: 0x0004EC0C
		// (set) Token: 0x06001573 RID: 5491 RVA: 0x00050A14 File Offset: 0x0004EC14
		[DataSourceProperty]
		public ImageIdentifierVM ImageIdentifier
		{
			get
			{
				return this._imageIdentifier;
			}
			set
			{
				if (this._imageIdentifier != value)
				{
					this._imageIdentifier = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "ImageIdentifier");
				}
			}
		}

		// Token: 0x17000738 RID: 1848
		// (get) Token: 0x06001574 RID: 5492 RVA: 0x00050A32 File Offset: 0x0004EC32
		// (set) Token: 0x06001575 RID: 5493 RVA: 0x00050A3A File Offset: 0x0004EC3A
		[DataSourceProperty]
		public int PieceType
		{
			get
			{
				return this._pieceType;
			}
			set
			{
				if (this._pieceType != value)
				{
					this._pieceType = value;
					base.OnPropertyChangedWithValue(value, "PieceType");
				}
			}
		}

		// Token: 0x17000739 RID: 1849
		// (get) Token: 0x06001576 RID: 5494 RVA: 0x00050A58 File Offset: 0x0004EC58
		// (set) Token: 0x06001577 RID: 5495 RVA: 0x00050A60 File Offset: 0x0004EC60
		[DataSourceProperty]
		public bool IsNewlyUnlocked
		{
			get
			{
				return this._isNewlyUnlocked;
			}
			set
			{
				if (value != this._isNewlyUnlocked)
				{
					this._isNewlyUnlocked = value;
					base.OnPropertyChangedWithValue(value, "IsNewlyUnlocked");
				}
			}
		}

		// Token: 0x040009ED RID: 2541
		public WeaponDesignElement CraftingPiece;

		// Token: 0x040009EE RID: 2542
		public int Index;

		// Token: 0x040009EF RID: 2543
		private readonly Action<CraftingPieceVM> _selectWeaponPiece;

		// Token: 0x040009F0 RID: 2544
		private bool _isFilteredOut;

		// Token: 0x040009F1 RID: 2545
		public ImageIdentifierVM _imageIdentifier;

		// Token: 0x040009F2 RID: 2546
		public int _pieceType = -1;

		// Token: 0x040009F3 RID: 2547
		public int _tier;

		// Token: 0x040009F4 RID: 2548
		public bool _isSelected;

		// Token: 0x040009F5 RID: 2549
		public bool _playerHasPiece;

		// Token: 0x040009F6 RID: 2550
		private bool _isEmpty;

		// Token: 0x040009F7 RID: 2551
		public string _tierText;

		// Token: 0x040009F8 RID: 2552
		private MBBindingList<CraftingItemFlagVM> _itemAttributeIcons;

		// Token: 0x040009F9 RID: 2553
		private bool _isNewlyUnlocked;
	}
}
