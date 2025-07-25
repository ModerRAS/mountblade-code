using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x02000101 RID: 257
	public class ClanCardSelectionPopupItemVM : ViewModel
	{
		// Token: 0x1700082F RID: 2095
		// (get) Token: 0x06001824 RID: 6180 RVA: 0x00059256 File Offset: 0x00057456
		public object Identifier { get; }

		// Token: 0x17000830 RID: 2096
		// (get) Token: 0x06001825 RID: 6181 RVA: 0x0005925E File Offset: 0x0005745E
		public TextObject ActionResultText { get; }

		// Token: 0x06001826 RID: 6182 RVA: 0x00059268 File Offset: 0x00057468
		public ClanCardSelectionPopupItemVM(in ClanCardSelectionItemInfo info, Action<ClanCardSelectionPopupItemVM> onSelected)
		{
			this.Identifier = info.Identifier;
			this._onSelected = onSelected;
			this.ActionResultText = info.ActionResult;
			this._titleText = info.Title;
			this._disabledReasonText = info.DisabledReason;
			this._specialActionText = info.SpecialActionText;
			this.DisabledHint = new HintViewModel();
			this.Properties = new MBBindingList<ClanCardSelectionPopupItemPropertyVM>();
			if (info.Properties != null)
			{
				foreach (ClanCardSelectionItemPropertyInfo clanCardSelectionItemPropertyInfo in info.Properties)
				{
					this.Properties.Add(new ClanCardSelectionPopupItemPropertyVM(ref clanCardSelectionItemPropertyInfo));
				}
			}
			this.IsDisabled = info.IsDisabled;
			this.IsSpecialActionItem = info.IsSpecialActionItem;
			this.HasSprite = !string.IsNullOrEmpty(info.SpriteName);
			this.HasImage = (info.Image != null);
			this.SpriteType = info.SpriteType.ToString();
			this.SpriteName = (info.SpriteName ?? string.Empty);
			this.SpriteLabel = (info.SpriteLabel ?? string.Empty);
			this.Image = (this.HasImage ? new ImageIdentifierVM(info.Image) : new ImageIdentifierVM(ImageIdentifierType.Null));
		}

		// Token: 0x06001827 RID: 6183 RVA: 0x000593C4 File Offset: 0x000575C4
		public override void RefreshValues()
		{
			base.RefreshValues();
			TextObject titleText = this._titleText;
			this.Title = (((titleText != null) ? titleText.ToString() : null) ?? string.Empty);
			TextObject specialActionText = this._specialActionText;
			this.SpecialAction = (((specialActionText != null) ? specialActionText.ToString() : null) ?? string.Empty);
			HintViewModel disabledHint = this.DisabledHint;
			string str = "{=!}";
			string str2;
			if (!this.IsDisabled)
			{
				str2 = null;
			}
			else
			{
				TextObject disabledReasonText = this._disabledReasonText;
				str2 = ((disabledReasonText != null) ? disabledReasonText.ToString() : null);
			}
			disabledHint.HintText = new TextObject(str + str2, null);
			this.Properties.ApplyActionOnAllItems(delegate(ClanCardSelectionPopupItemPropertyVM x)
			{
				x.RefreshValues();
			});
		}

		// Token: 0x06001828 RID: 6184 RVA: 0x0005947B File Offset: 0x0005767B
		public void ExecuteSelect()
		{
			Action<ClanCardSelectionPopupItemVM> onSelected = this._onSelected;
			if (onSelected == null)
			{
				return;
			}
			onSelected(this);
		}

		// Token: 0x17000831 RID: 2097
		// (get) Token: 0x06001829 RID: 6185 RVA: 0x0005948E File Offset: 0x0005768E
		// (set) Token: 0x0600182A RID: 6186 RVA: 0x00059496 File Offset: 0x00057696
		[DataSourceProperty]
		public ImageIdentifierVM Image
		{
			get
			{
				return this._image;
			}
			set
			{
				if (value != this._image)
				{
					this._image = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Image");
				}
			}
		}

		// Token: 0x17000832 RID: 2098
		// (get) Token: 0x0600182B RID: 6187 RVA: 0x000594B4 File Offset: 0x000576B4
		// (set) Token: 0x0600182C RID: 6188 RVA: 0x000594BC File Offset: 0x000576BC
		[DataSourceProperty]
		public MBBindingList<ClanCardSelectionPopupItemPropertyVM> Properties
		{
			get
			{
				return this._properties;
			}
			set
			{
				if (value != this._properties)
				{
					this._properties = value;
					base.OnPropertyChangedWithValue<MBBindingList<ClanCardSelectionPopupItemPropertyVM>>(value, "Properties");
				}
			}
		}

		// Token: 0x17000833 RID: 2099
		// (get) Token: 0x0600182D RID: 6189 RVA: 0x000594DA File Offset: 0x000576DA
		// (set) Token: 0x0600182E RID: 6190 RVA: 0x000594E2 File Offset: 0x000576E2
		[DataSourceProperty]
		public HintViewModel DisabledHint
		{
			get
			{
				return this._disabledHint;
			}
			set
			{
				if (value != this._disabledHint)
				{
					this._disabledHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "DisabledHint");
				}
			}
		}

		// Token: 0x17000834 RID: 2100
		// (get) Token: 0x0600182F RID: 6191 RVA: 0x00059500 File Offset: 0x00057700
		// (set) Token: 0x06001830 RID: 6192 RVA: 0x00059508 File Offset: 0x00057708
		[DataSourceProperty]
		public string Title
		{
			get
			{
				return this._title;
			}
			set
			{
				if (value != this._title)
				{
					this._title = value;
					base.OnPropertyChangedWithValue<string>(value, "Title");
				}
			}
		}

		// Token: 0x17000835 RID: 2101
		// (get) Token: 0x06001831 RID: 6193 RVA: 0x0005952B File Offset: 0x0005772B
		// (set) Token: 0x06001832 RID: 6194 RVA: 0x00059533 File Offset: 0x00057733
		[DataSourceProperty]
		public string SpriteType
		{
			get
			{
				return this._spriteType;
			}
			set
			{
				if (value != this._spriteType)
				{
					this._spriteType = value;
					base.OnPropertyChangedWithValue<string>(value, "SpriteType");
				}
			}
		}

		// Token: 0x17000836 RID: 2102
		// (get) Token: 0x06001833 RID: 6195 RVA: 0x00059556 File Offset: 0x00057756
		// (set) Token: 0x06001834 RID: 6196 RVA: 0x0005955E File Offset: 0x0005775E
		[DataSourceProperty]
		public string SpriteName
		{
			get
			{
				return this._spriteName;
			}
			set
			{
				if (value != this._spriteName)
				{
					this._spriteName = value;
					base.OnPropertyChangedWithValue<string>(value, "SpriteName");
				}
			}
		}

		// Token: 0x17000837 RID: 2103
		// (get) Token: 0x06001835 RID: 6197 RVA: 0x00059581 File Offset: 0x00057781
		// (set) Token: 0x06001836 RID: 6198 RVA: 0x00059589 File Offset: 0x00057789
		[DataSourceProperty]
		public string SpriteLabel
		{
			get
			{
				return this._spriteLabel;
			}
			set
			{
				if (value != this._spriteLabel)
				{
					this._spriteLabel = value;
					base.OnPropertyChangedWithValue<string>(value, "SpriteLabel");
				}
			}
		}

		// Token: 0x17000838 RID: 2104
		// (get) Token: 0x06001837 RID: 6199 RVA: 0x000595AC File Offset: 0x000577AC
		// (set) Token: 0x06001838 RID: 6200 RVA: 0x000595B4 File Offset: 0x000577B4
		[DataSourceProperty]
		public string SpecialAction
		{
			get
			{
				return this._specialAction;
			}
			set
			{
				if (value != this._specialAction)
				{
					this._specialAction = value;
					base.OnPropertyChangedWithValue<string>(value, "SpecialAction");
				}
			}
		}

		// Token: 0x17000839 RID: 2105
		// (get) Token: 0x06001839 RID: 6201 RVA: 0x000595D7 File Offset: 0x000577D7
		// (set) Token: 0x0600183A RID: 6202 RVA: 0x000595DF File Offset: 0x000577DF
		[DataSourceProperty]
		public bool HasImage
		{
			get
			{
				return this._hasImage;
			}
			set
			{
				if (value != this._hasImage)
				{
					this._hasImage = value;
					base.OnPropertyChangedWithValue(value, "HasImage");
				}
			}
		}

		// Token: 0x1700083A RID: 2106
		// (get) Token: 0x0600183B RID: 6203 RVA: 0x000595FD File Offset: 0x000577FD
		// (set) Token: 0x0600183C RID: 6204 RVA: 0x00059605 File Offset: 0x00057805
		[DataSourceProperty]
		public bool HasSprite
		{
			get
			{
				return this._hasSprite;
			}
			set
			{
				if (value != this._hasSprite)
				{
					this._hasSprite = value;
					base.OnPropertyChangedWithValue(value, "HasSprite");
				}
			}
		}

		// Token: 0x1700083B RID: 2107
		// (get) Token: 0x0600183D RID: 6205 RVA: 0x00059623 File Offset: 0x00057823
		// (set) Token: 0x0600183E RID: 6206 RVA: 0x0005962B File Offset: 0x0005782B
		[DataSourceProperty]
		public bool IsSpecialActionItem
		{
			get
			{
				return this._isSpecialActionItem;
			}
			set
			{
				if (value != this._isSpecialActionItem)
				{
					this._isSpecialActionItem = value;
					base.OnPropertyChangedWithValue(value, "IsSpecialActionItem");
				}
			}
		}

		// Token: 0x1700083C RID: 2108
		// (get) Token: 0x0600183F RID: 6207 RVA: 0x00059649 File Offset: 0x00057849
		// (set) Token: 0x06001840 RID: 6208 RVA: 0x00059651 File Offset: 0x00057851
		[DataSourceProperty]
		public bool IsDisabled
		{
			get
			{
				return this._isDisabled;
			}
			set
			{
				if (value != this._isDisabled)
				{
					this._isDisabled = value;
					base.OnPropertyChangedWithValue(value, "IsDisabled");
				}
			}
		}

		// Token: 0x1700083D RID: 2109
		// (get) Token: 0x06001841 RID: 6209 RVA: 0x0005966F File Offset: 0x0005786F
		// (set) Token: 0x06001842 RID: 6210 RVA: 0x00059677 File Offset: 0x00057877
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

		// Token: 0x04000B57 RID: 2903
		private readonly TextObject _titleText;

		// Token: 0x04000B58 RID: 2904
		private readonly TextObject _disabledReasonText;

		// Token: 0x04000B59 RID: 2905
		private readonly TextObject _specialActionText;

		// Token: 0x04000B5A RID: 2906
		private readonly Action<ClanCardSelectionPopupItemVM> _onSelected;

		// Token: 0x04000B5B RID: 2907
		private ImageIdentifierVM _image;

		// Token: 0x04000B5C RID: 2908
		private MBBindingList<ClanCardSelectionPopupItemPropertyVM> _properties;

		// Token: 0x04000B5D RID: 2909
		private HintViewModel _disabledHint;

		// Token: 0x04000B5E RID: 2910
		private string _title;

		// Token: 0x04000B5F RID: 2911
		private string _spriteType;

		// Token: 0x04000B60 RID: 2912
		private string _spriteName;

		// Token: 0x04000B61 RID: 2913
		private string _spriteLabel;

		// Token: 0x04000B62 RID: 2914
		private string _specialAction;

		// Token: 0x04000B63 RID: 2915
		private bool _hasImage;

		// Token: 0x04000B64 RID: 2916
		private bool _hasSprite;

		// Token: 0x04000B65 RID: 2917
		private bool _isSpecialActionItem;

		// Token: 0x04000B66 RID: 2918
		private bool _isDisabled;

		// Token: 0x04000B67 RID: 2919
		private bool _isSelected;
	}
}
