using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x02000103 RID: 259
	public class ClanCardSelectionPopupVM : ViewModel
	{
		// Token: 0x06001844 RID: 6212 RVA: 0x000596B4 File Offset: 0x000578B4
		public ClanCardSelectionPopupVM()
		{
			this._titleText = TextObject.Empty;
			this.Items = new MBBindingList<ClanCardSelectionPopupItemVM>();
		}

		// Token: 0x06001845 RID: 6213 RVA: 0x000596D4 File Offset: 0x000578D4
		public override void RefreshValues()
		{
			base.RefreshValues();
			if (!this._isMultiSelection)
			{
				ClanCardSelectionPopupItemVM lastSelectedItem = this._lastSelectedItem;
				string text;
				if (lastSelectedItem == null)
				{
					text = null;
				}
				else
				{
					TextObject actionResultText = lastSelectedItem.ActionResultText;
					text = ((actionResultText != null) ? actionResultText.ToString() : null);
				}
				this.ActionResult = (text ?? string.Empty);
			}
			this.DoneLbl = GameTexts.FindText("str_done", null).ToString();
			TextObject titleText = this._titleText;
			this.Title = (((titleText != null) ? titleText.ToString() : null) ?? string.Empty);
			this.Items.ApplyActionOnAllItems(delegate(ClanCardSelectionPopupItemVM x)
			{
				x.RefreshValues();
			});
		}

		// Token: 0x06001846 RID: 6214 RVA: 0x0005977D File Offset: 0x0005797D
		public override void OnFinalize()
		{
			base.OnFinalize();
			InputKeyItemVM doneInputKey = this.DoneInputKey;
			if (doneInputKey == null)
			{
				return;
			}
			doneInputKey.OnFinalize();
		}

		// Token: 0x06001847 RID: 6215 RVA: 0x00059795 File Offset: 0x00057995
		public void SetDoneInputKey(HotKey hotKey)
		{
			this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x06001848 RID: 6216 RVA: 0x000597A4 File Offset: 0x000579A4
		public void Open(ClanCardSelectionInfo info)
		{
			this._isMultiSelection = info.IsMultiSelection;
			this._titleText = info.Title;
			this._onClosed = info.OnClosedAction;
			foreach (ClanCardSelectionItemInfo clanCardSelectionItemInfo in info.Items)
			{
				this.Items.Add(new ClanCardSelectionPopupItemVM(ref clanCardSelectionItemInfo, new Action<ClanCardSelectionPopupItemVM>(this.OnItemSelected)));
			}
			this.RefreshValues();
			this.IsVisible = true;
		}

		// Token: 0x06001849 RID: 6217 RVA: 0x0005983C File Offset: 0x00057A3C
		public void ExecuteCancel()
		{
			Action<List<object>, Action> onClosed = this._onClosed;
			if (onClosed != null)
			{
				onClosed(new List<object>(), null);
			}
			this.Close();
		}

		// Token: 0x0600184A RID: 6218 RVA: 0x0005985C File Offset: 0x00057A5C
		public void ExecuteDone()
		{
			List<object> selectedItems = new List<object>();
			this.Items.ApplyActionOnAllItems(delegate(ClanCardSelectionPopupItemVM x)
			{
				if (x.IsSelected)
				{
					selectedItems.Add(x.Identifier);
				}
			});
			Action<List<object>, Action> onClosed = this._onClosed;
			if (onClosed == null)
			{
				return;
			}
			onClosed(selectedItems, new Action(this.Close));
		}

		// Token: 0x0600184B RID: 6219 RVA: 0x000598B4 File Offset: 0x00057AB4
		private void Close()
		{
			this.IsVisible = false;
			this._lastSelectedItem = null;
			this._titleText = TextObject.Empty;
			this.ActionResult = string.Empty;
			this.Title = string.Empty;
			this._onClosed = null;
			this.Items.Clear();
		}

		// Token: 0x0600184C RID: 6220 RVA: 0x00059904 File Offset: 0x00057B04
		private void OnItemSelected(ClanCardSelectionPopupItemVM item)
		{
			if (this._isMultiSelection)
			{
				item.IsSelected = !item.IsSelected;
			}
			else if (item != this._lastSelectedItem)
			{
				if (this._lastSelectedItem != null)
				{
					this._lastSelectedItem.IsSelected = false;
				}
				item.IsSelected = true;
				TextObject actionResultText = item.ActionResultText;
				this.ActionResult = (((actionResultText != null) ? actionResultText.ToString() : null) ?? string.Empty);
			}
			this._lastSelectedItem = item;
		}

		// Token: 0x1700083E RID: 2110
		// (get) Token: 0x0600184D RID: 6221 RVA: 0x00059976 File Offset: 0x00057B76
		// (set) Token: 0x0600184E RID: 6222 RVA: 0x0005997E File Offset: 0x00057B7E
		[DataSourceProperty]
		public MBBindingList<ClanCardSelectionPopupItemVM> Items
		{
			get
			{
				return this._items;
			}
			set
			{
				if (value != this._items)
				{
					this._items = value;
					base.OnPropertyChangedWithValue<MBBindingList<ClanCardSelectionPopupItemVM>>(value, "Items");
				}
			}
		}

		// Token: 0x1700083F RID: 2111
		// (get) Token: 0x0600184F RID: 6223 RVA: 0x0005999C File Offset: 0x00057B9C
		// (set) Token: 0x06001850 RID: 6224 RVA: 0x000599A4 File Offset: 0x00057BA4
		[DataSourceProperty]
		public InputKeyItemVM DoneInputKey
		{
			get
			{
				return this._doneInputKey;
			}
			set
			{
				if (value != this._doneInputKey)
				{
					this._doneInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "DoneInputKey");
				}
			}
		}

		// Token: 0x17000840 RID: 2112
		// (get) Token: 0x06001851 RID: 6225 RVA: 0x000599C2 File Offset: 0x00057BC2
		// (set) Token: 0x06001852 RID: 6226 RVA: 0x000599CA File Offset: 0x00057BCA
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

		// Token: 0x17000841 RID: 2113
		// (get) Token: 0x06001853 RID: 6227 RVA: 0x000599ED File Offset: 0x00057BED
		// (set) Token: 0x06001854 RID: 6228 RVA: 0x000599F5 File Offset: 0x00057BF5
		[DataSourceProperty]
		public string ActionResult
		{
			get
			{
				return this._actionResult;
			}
			set
			{
				if (value != this._actionResult)
				{
					this._actionResult = value;
					base.OnPropertyChangedWithValue<string>(value, "ActionResult");
				}
			}
		}

		// Token: 0x17000842 RID: 2114
		// (get) Token: 0x06001855 RID: 6229 RVA: 0x00059A18 File Offset: 0x00057C18
		// (set) Token: 0x06001856 RID: 6230 RVA: 0x00059A20 File Offset: 0x00057C20
		[DataSourceProperty]
		public string DoneLbl
		{
			get
			{
				return this._doneLbl;
			}
			set
			{
				if (value != this._doneLbl)
				{
					this._doneLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "DoneLbl");
				}
			}
		}

		// Token: 0x17000843 RID: 2115
		// (get) Token: 0x06001857 RID: 6231 RVA: 0x00059A43 File Offset: 0x00057C43
		// (set) Token: 0x06001858 RID: 6232 RVA: 0x00059A4B File Offset: 0x00057C4B
		[DataSourceProperty]
		public bool IsVisible
		{
			get
			{
				return this._isVisible;
			}
			set
			{
				if (value != this._isVisible)
				{
					this._isVisible = value;
					base.OnPropertyChangedWithValue(value, "IsVisible");
				}
			}
		}

		// Token: 0x04000B6C RID: 2924
		private TextObject _titleText;

		// Token: 0x04000B6D RID: 2925
		private bool _isMultiSelection;

		// Token: 0x04000B6E RID: 2926
		private ClanCardSelectionPopupItemVM _lastSelectedItem;

		// Token: 0x04000B6F RID: 2927
		private Action<List<object>, Action> _onClosed;

		// Token: 0x04000B70 RID: 2928
		private MBBindingList<ClanCardSelectionPopupItemVM> _items;

		// Token: 0x04000B71 RID: 2929
		private InputKeyItemVM _doneInputKey;

		// Token: 0x04000B72 RID: 2930
		private string _title;

		// Token: 0x04000B73 RID: 2931
		private string _actionResult;

		// Token: 0x04000B74 RID: 2932
		private string _doneLbl;

		// Token: 0x04000B75 RID: 2933
		private bool _isVisible;
	}
}
