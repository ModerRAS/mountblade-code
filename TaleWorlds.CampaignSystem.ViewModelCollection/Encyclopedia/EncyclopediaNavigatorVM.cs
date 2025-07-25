using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Pages;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia
{
	// Token: 0x020000B3 RID: 179
	public class EncyclopediaNavigatorVM : ViewModel
	{
		// Token: 0x170005C8 RID: 1480
		// (get) Token: 0x06001183 RID: 4483 RVA: 0x00045657 File Offset: 0x00043857
		public Tuple<string, object> LastActivePage
		{
			get
			{
				if (!this.History.IsEmpty<Tuple<string, object>>())
				{
					return this.History[this.HistoryIndex];
				}
				return null;
			}
		}

		// Token: 0x06001184 RID: 4484 RVA: 0x0004567C File Offset: 0x0004387C
		public EncyclopediaNavigatorVM(Func<string, object, bool, EncyclopediaPageVM> goToLink, Action closeEncyclopedia)
		{
			this._closeEncyclopedia = closeEncyclopedia;
			this.History = new List<Tuple<string, object>>();
			this.HistoryIndex = 0;
			this.MinCharAmountToShowResults = 3;
			this.SearchResults = new MBBindingList<EncyclopediaSearchResultVM>();
			Campaign.Current.EncyclopediaManager.SetLinkCallback(new Action<string, object>(this.ExecuteLink));
			this._goToLink = goToLink;
			this._searchResultComparer = new EncyclopediaNavigatorVM.SearchResultComparer(string.Empty);
			this.AddHistory("Home", null);
			this.RefreshValues();
			Game.Current.EventManager.RegisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
		}

		// Token: 0x06001185 RID: 4485 RVA: 0x00045724 File Offset: 0x00043924
		private void OnTutorialNotificationElementIDChange(TutorialNotificationElementChangeEvent evnt)
		{
			this.IsHighlightEnabled = (evnt.NewNotificationElementID == "EncyclopediaSearchButton");
		}

		// Token: 0x06001186 RID: 4486 RVA: 0x0004573C File Offset: 0x0004393C
		public override void OnFinalize()
		{
			base.OnFinalize();
			InputKeyItemVM previousPageInputKey = this.PreviousPageInputKey;
			if (previousPageInputKey != null)
			{
				previousPageInputKey.OnFinalize();
			}
			InputKeyItemVM nextPageInputKey = this.NextPageInputKey;
			if (nextPageInputKey == null)
			{
				return;
			}
			nextPageInputKey.OnFinalize();
		}

		// Token: 0x06001187 RID: 4487 RVA: 0x00045765 File Offset: 0x00043965
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.DoneText = GameTexts.FindText("str_done", null).ToString();
			this.LeaderText = GameTexts.FindText("str_done", null).ToString();
		}

		// Token: 0x06001188 RID: 4488 RVA: 0x00045799 File Offset: 0x00043999
		public void ExecuteHome()
		{
			Campaign.Current.EncyclopediaManager.GoToLink("Home", "-1");
		}

		// Token: 0x06001189 RID: 4489 RVA: 0x000457B4 File Offset: 0x000439B4
		public void ExecuteBarLink(string targetID)
		{
			if (targetID.Contains("Home"))
			{
				this.ExecuteHome();
				return;
			}
			if (targetID.Contains("ListPage"))
			{
				string a = targetID.Split(new char[]
				{
					'-'
				})[1];
				if (a == "Clans")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "Faction");
					return;
				}
				if (a == "Kingdoms")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "Kingdom");
					return;
				}
				if (a == "Heroes")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "Hero");
					return;
				}
				if (a == "Settlements")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "Settlement");
					return;
				}
				if (a == "Units")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "NPCCharacter");
					return;
				}
				if (a == "Concept")
				{
					Campaign.Current.EncyclopediaManager.GoToLink("ListPage", "Concept");
				}
			}
		}

		// Token: 0x0600118A RID: 4490 RVA: 0x000458E2 File Offset: 0x00043AE2
		public void ExecuteCloseEncyclopedia()
		{
			this._closeEncyclopedia();
		}

		// Token: 0x0600118B RID: 4491 RVA: 0x000458F0 File Offset: 0x00043AF0
		private void ExecuteLink(string pageId, object target)
		{
			if (pageId != "LastPage" && target != this.LastActivePage.Item2)
			{
				if (!(pageId != "Home"))
				{
					pageId != this.LastActivePage.Item1;
				}
				this.AddHistory(pageId, target);
			}
			this._goToLink(pageId, target, true);
			this.PageName = GameTexts.FindText("str_encyclopedia_name", null).ToString();
			this.ResetSearch();
		}

		// Token: 0x0600118C RID: 4492 RVA: 0x00045975 File Offset: 0x00043B75
		public void ResetHistory()
		{
			this.HistoryIndex = 0;
			this.History.Clear();
			this.AddHistory("Home", null);
		}

		// Token: 0x0600118D RID: 4493 RVA: 0x00045998 File Offset: 0x00043B98
		public void ExecuteBack()
		{
			if (this.HistoryIndex == 0)
			{
				return;
			}
			int num = this.HistoryIndex - 1;
			Tuple<string, object> tuple = this.History[num];
			if (tuple.Item1 != "LastPage" && (tuple.Item1 != this.LastActivePage.Item1 || tuple.Item2 != this.LastActivePage.Item2))
			{
				if (!(tuple.Item1 != "Home"))
				{
					tuple.Item1 != this.LastActivePage.Item1;
				}
			}
			this.UpdateHistoryIndex(num);
			this._goToLink(tuple.Item1, tuple.Item2, true);
			this.PageName = GameTexts.FindText("str_encyclopedia_name", null).ToString();
		}

		// Token: 0x0600118E RID: 4494 RVA: 0x00045A68 File Offset: 0x00043C68
		public void ExecuteForward()
		{
			if (this.HistoryIndex == this.History.Count - 1)
			{
				return;
			}
			int num = this.HistoryIndex + 1;
			Tuple<string, object> tuple = this.History[num];
			if (tuple.Item1 != "LastPage" && (tuple.Item1 != this.LastActivePage.Item1 || tuple.Item2 != this.LastActivePage.Item2))
			{
				if (!(tuple.Item1 != "Home"))
				{
					tuple.Item1 != this.LastActivePage.Item1;
				}
			}
			this.UpdateHistoryIndex(num);
			this._goToLink(tuple.Item1, tuple.Item2, true);
			this.PageName = GameTexts.FindText("str_encyclopedia_name", null).ToString();
		}

		// Token: 0x0600118F RID: 4495 RVA: 0x00045B43 File Offset: 0x00043D43
		public Tuple<string, object> GetLastPage()
		{
			return this.History[this.HistoryIndex];
		}

		// Token: 0x06001190 RID: 4496 RVA: 0x00045B58 File Offset: 0x00043D58
		public void AddHistory(string pageId, object obj)
		{
			if (this.HistoryIndex < this.History.Count - 1)
			{
				Tuple<string, object> tuple = this.History[this.HistoryIndex];
				if (tuple.Item1 == pageId && tuple.Item2 == obj)
				{
					return;
				}
				this.History.RemoveRange(this.HistoryIndex + 1, this.History.Count - this.HistoryIndex - 1);
			}
			this.History.Add(new Tuple<string, object>(pageId, obj));
			this.UpdateHistoryIndex(this.History.Count - 1);
		}

		// Token: 0x06001191 RID: 4497 RVA: 0x00045BF0 File Offset: 0x00043DF0
		private void UpdateHistoryIndex(int newIndex)
		{
			this.HistoryIndex = newIndex;
			this.IsBackEnabled = (newIndex > 0);
			this.IsForwardEnabled = (newIndex < this.History.Count - 1);
		}

		// Token: 0x06001192 RID: 4498 RVA: 0x00045C19 File Offset: 0x00043E19
		public void UpdatePageName(string value)
		{
			this.PageName = GameTexts.FindText("str_encyclopedia_name", null).ToString();
		}

		// Token: 0x06001193 RID: 4499 RVA: 0x00045C34 File Offset: 0x00043E34
		private void RefreshSearch(bool isAppending, bool isPasted)
		{
			int firstAsianCharIndex = EncyclopediaNavigatorVM.GetFirstAsianCharIndex(this.SearchText);
			this.MinCharAmountToShowResults = ((firstAsianCharIndex > -1 && firstAsianCharIndex < 3) ? (firstAsianCharIndex + 1) : 3);
			if (this.SearchText.Length < this.MinCharAmountToShowResults)
			{
				this.SearchResults.Clear();
				return;
			}
			if (!isAppending || this.SearchText.Length == this.MinCharAmountToShowResults || isPasted)
			{
				this.SearchResults.Clear();
				foreach (EncyclopediaPage encyclopediaPage in Campaign.Current.EncyclopediaManager.GetEncyclopediaPages())
				{
					foreach (EncyclopediaListItem encyclopediaListItem in encyclopediaPage.GetListItems())
					{
						int num = encyclopediaListItem.Name.IndexOf(this._searchText, StringComparison.OrdinalIgnoreCase);
						if (num >= 0)
						{
							this.SearchResults.Add(new EncyclopediaSearchResultVM(encyclopediaListItem, this._searchText, num));
						}
					}
				}
				this._searchResultComparer.SearchText = this._searchText;
				this.SearchResults.Sort(this._searchResultComparer);
				return;
			}
			if (isAppending)
			{
				foreach (EncyclopediaSearchResultVM encyclopediaSearchResultVM in this.SearchResults.ToList<EncyclopediaSearchResultVM>())
				{
					if (encyclopediaSearchResultVM.OrgNameText.IndexOf(this._searchText, StringComparison.OrdinalIgnoreCase) < 0)
					{
						this.SearchResults.Remove(encyclopediaSearchResultVM);
					}
					else
					{
						encyclopediaSearchResultVM.UpdateSearchedText(this._searchText);
					}
				}
			}
		}

		// Token: 0x06001194 RID: 4500 RVA: 0x00045DF0 File Offset: 0x00043FF0
		private static int GetFirstAsianCharIndex(string searchText)
		{
			for (int i = 0; i < searchText.Length; i++)
			{
				if (Common.IsCharAsian(searchText[i]))
				{
					return i;
				}
			}
			return -1;
		}

		// Token: 0x06001195 RID: 4501 RVA: 0x00045E1F File Offset: 0x0004401F
		public void ResetSearch()
		{
			this.SearchText = string.Empty;
		}

		// Token: 0x06001196 RID: 4502 RVA: 0x00045E2C File Offset: 0x0004402C
		public void ExecuteOnSearchActivated()
		{
			Game.Current.EventManager.TriggerEvent<OnEncyclopediaSearchActivatedEvent>(new OnEncyclopediaSearchActivatedEvent());
		}

		// Token: 0x170005C9 RID: 1481
		// (get) Token: 0x06001197 RID: 4503 RVA: 0x00045E42 File Offset: 0x00044042
		// (set) Token: 0x06001198 RID: 4504 RVA: 0x00045E4A File Offset: 0x0004404A
		[DataSourceProperty]
		public bool CanSwitchTabs
		{
			get
			{
				return this._canSwitchTabs;
			}
			set
			{
				if (value != this._canSwitchTabs)
				{
					this._canSwitchTabs = value;
					base.OnPropertyChangedWithValue(value, "CanSwitchTabs");
				}
			}
		}

		// Token: 0x170005CA RID: 1482
		// (get) Token: 0x06001199 RID: 4505 RVA: 0x00045E68 File Offset: 0x00044068
		// (set) Token: 0x0600119A RID: 4506 RVA: 0x00045E70 File Offset: 0x00044070
		[DataSourceProperty]
		public bool IsBackEnabled
		{
			get
			{
				return this._isBackEnabled;
			}
			set
			{
				if (value != this._isBackEnabled)
				{
					this._isBackEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsBackEnabled");
				}
			}
		}

		// Token: 0x170005CB RID: 1483
		// (get) Token: 0x0600119B RID: 4507 RVA: 0x00045E8E File Offset: 0x0004408E
		// (set) Token: 0x0600119C RID: 4508 RVA: 0x00045E96 File Offset: 0x00044096
		[DataSourceProperty]
		public bool IsForwardEnabled
		{
			get
			{
				return this._isForwardEnabled;
			}
			set
			{
				if (value != this._isForwardEnabled)
				{
					this._isForwardEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsForwardEnabled");
				}
			}
		}

		// Token: 0x170005CC RID: 1484
		// (get) Token: 0x0600119D RID: 4509 RVA: 0x00045EB4 File Offset: 0x000440B4
		// (set) Token: 0x0600119E RID: 4510 RVA: 0x00045EBC File Offset: 0x000440BC
		[DataSourceProperty]
		public bool IsHighlightEnabled
		{
			get
			{
				return this._isHighlightEnabled;
			}
			set
			{
				if (value != this._isHighlightEnabled)
				{
					this._isHighlightEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsHighlightEnabled");
				}
			}
		}

		// Token: 0x170005CD RID: 1485
		// (get) Token: 0x0600119F RID: 4511 RVA: 0x00045EDA File Offset: 0x000440DA
		// (set) Token: 0x060011A0 RID: 4512 RVA: 0x00045EE2 File Offset: 0x000440E2
		[DataSourceProperty]
		public bool IsSearchResultsShown
		{
			get
			{
				return this._isSearchResultsShown;
			}
			set
			{
				if (value != this._isSearchResultsShown)
				{
					this._isSearchResultsShown = value;
					base.OnPropertyChangedWithValue(value, "IsSearchResultsShown");
				}
			}
		}

		// Token: 0x170005CE RID: 1486
		// (get) Token: 0x060011A1 RID: 4513 RVA: 0x00045F00 File Offset: 0x00044100
		// (set) Token: 0x060011A2 RID: 4514 RVA: 0x00045F08 File Offset: 0x00044108
		[DataSourceProperty]
		public string NavBarString
		{
			get
			{
				return this._navBarString;
			}
			set
			{
				if (value != this._navBarString)
				{
					this._navBarString = value;
					base.OnPropertyChangedWithValue<string>(value, "NavBarString");
				}
			}
		}

		// Token: 0x170005CF RID: 1487
		// (get) Token: 0x060011A3 RID: 4515 RVA: 0x00045F2B File Offset: 0x0004412B
		// (set) Token: 0x060011A4 RID: 4516 RVA: 0x00045F33 File Offset: 0x00044133
		[DataSourceProperty]
		public string PageName
		{
			get
			{
				return this._pageName;
			}
			set
			{
				if (value != this._pageName)
				{
					this._pageName = value;
					base.OnPropertyChangedWithValue<string>(value, "PageName");
				}
			}
		}

		// Token: 0x170005D0 RID: 1488
		// (get) Token: 0x060011A5 RID: 4517 RVA: 0x00045F56 File Offset: 0x00044156
		// (set) Token: 0x060011A6 RID: 4518 RVA: 0x00045F5E File Offset: 0x0004415E
		[DataSourceProperty]
		public string DoneText
		{
			get
			{
				return this._doneText;
			}
			set
			{
				if (value != this._doneText)
				{
					this._doneText = value;
					base.OnPropertyChangedWithValue<string>(value, "DoneText");
				}
			}
		}

		// Token: 0x170005D1 RID: 1489
		// (get) Token: 0x060011A7 RID: 4519 RVA: 0x00045F81 File Offset: 0x00044181
		// (set) Token: 0x060011A8 RID: 4520 RVA: 0x00045F89 File Offset: 0x00044189
		[DataSourceProperty]
		public string LeaderText
		{
			get
			{
				return this._leaderText;
			}
			set
			{
				if (value != this._leaderText)
				{
					this._leaderText = value;
					base.OnPropertyChangedWithValue<string>(value, "LeaderText");
				}
			}
		}

		// Token: 0x170005D2 RID: 1490
		// (get) Token: 0x060011A9 RID: 4521 RVA: 0x00045FAC File Offset: 0x000441AC
		// (set) Token: 0x060011AA RID: 4522 RVA: 0x00045FB4 File Offset: 0x000441B4
		[DataSourceProperty]
		public MBBindingList<EncyclopediaSearchResultVM> SearchResults
		{
			get
			{
				return this._searchResults;
			}
			set
			{
				if (value != this._searchResults)
				{
					this._searchResults = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaSearchResultVM>>(value, "SearchResults");
				}
			}
		}

		// Token: 0x170005D3 RID: 1491
		// (get) Token: 0x060011AB RID: 4523 RVA: 0x00045FD2 File Offset: 0x000441D2
		// (set) Token: 0x060011AC RID: 4524 RVA: 0x00045FDC File Offset: 0x000441DC
		[DataSourceProperty]
		public string SearchText
		{
			get
			{
				return this._searchText;
			}
			set
			{
				if (value != this._searchText)
				{
					bool isAppending = value.ToLower().Contains(this._searchText);
					bool isPasted = string.IsNullOrEmpty(this._searchText) && !string.IsNullOrEmpty(value);
					this._searchText = value.ToLower();
					Debug.Print("isAppending: " + isAppending.ToString() + " isPasted: " + isPasted.ToString(), 0, Debug.DebugColor.White, 17592186044416UL);
					this.RefreshSearch(isAppending, isPasted);
					base.OnPropertyChangedWithValue<string>(value, "SearchText");
				}
			}
		}

		// Token: 0x170005D4 RID: 1492
		// (get) Token: 0x060011AD RID: 4525 RVA: 0x00046071 File Offset: 0x00044271
		// (set) Token: 0x060011AE RID: 4526 RVA: 0x00046079 File Offset: 0x00044279
		[DataSourceProperty]
		public int MinCharAmountToShowResults
		{
			get
			{
				return this._minCharAmountToShowResults;
			}
			set
			{
				if (value != this._minCharAmountToShowResults)
				{
					this._minCharAmountToShowResults = value;
					base.OnPropertyChangedWithValue(value, "MinCharAmountToShowResults");
				}
			}
		}

		// Token: 0x170005D5 RID: 1493
		// (get) Token: 0x060011AF RID: 4527 RVA: 0x00046097 File Offset: 0x00044297
		// (set) Token: 0x060011B0 RID: 4528 RVA: 0x0004609F File Offset: 0x0004429F
		[DataSourceProperty]
		public InputKeyItemVM CancelInputKey
		{
			get
			{
				return this._cancelInputKey;
			}
			set
			{
				if (value != this._cancelInputKey)
				{
					this._cancelInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "CancelInputKey");
				}
			}
		}

		// Token: 0x170005D6 RID: 1494
		// (get) Token: 0x060011B1 RID: 4529 RVA: 0x000460BD File Offset: 0x000442BD
		// (set) Token: 0x060011B2 RID: 4530 RVA: 0x000460C5 File Offset: 0x000442C5
		[DataSourceProperty]
		public InputKeyItemVM PreviousPageInputKey
		{
			get
			{
				return this._previousPageInputKey;
			}
			set
			{
				if (value != this._previousPageInputKey)
				{
					this._previousPageInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "PreviousPageInputKey");
				}
			}
		}

		// Token: 0x170005D7 RID: 1495
		// (get) Token: 0x060011B3 RID: 4531 RVA: 0x000460E3 File Offset: 0x000442E3
		// (set) Token: 0x060011B4 RID: 4532 RVA: 0x000460EB File Offset: 0x000442EB
		[DataSourceProperty]
		public InputKeyItemVM NextPageInputKey
		{
			get
			{
				return this._nextPageInputKey;
			}
			set
			{
				if (value != this._nextPageInputKey)
				{
					this._nextPageInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "NextPageInputKey");
				}
			}
		}

		// Token: 0x060011B5 RID: 4533 RVA: 0x00046109 File Offset: 0x00044309
		public void SetCancelInputKey(HotKey hotkey)
		{
			this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x060011B6 RID: 4534 RVA: 0x00046118 File Offset: 0x00044318
		public void SetPreviousPageInputKey(HotKey hotkey)
		{
			this.PreviousPageInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x060011B7 RID: 4535 RVA: 0x00046127 File Offset: 0x00044327
		public void SetNextPageInputKey(HotKey hotkey)
		{
			this.NextPageInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x04000825 RID: 2085
		private List<Tuple<string, object>> History;

		// Token: 0x04000826 RID: 2086
		private int HistoryIndex;

		// Token: 0x04000827 RID: 2087
		private readonly Func<string, object, bool, EncyclopediaPageVM> _goToLink;

		// Token: 0x04000828 RID: 2088
		private readonly Action _closeEncyclopedia;

		// Token: 0x04000829 RID: 2089
		private EncyclopediaNavigatorVM.SearchResultComparer _searchResultComparer;

		// Token: 0x0400082A RID: 2090
		private MBBindingList<EncyclopediaSearchResultVM> _searchResults;

		// Token: 0x0400082B RID: 2091
		private string _searchText = "";

		// Token: 0x0400082C RID: 2092
		private string _pageName;

		// Token: 0x0400082D RID: 2093
		private string _doneText;

		// Token: 0x0400082E RID: 2094
		private string _leaderText;

		// Token: 0x0400082F RID: 2095
		private bool _canSwitchTabs;

		// Token: 0x04000830 RID: 2096
		private bool _isBackEnabled;

		// Token: 0x04000831 RID: 2097
		private bool _isForwardEnabled;

		// Token: 0x04000832 RID: 2098
		private bool _isHighlightEnabled;

		// Token: 0x04000833 RID: 2099
		private bool _isSearchResultsShown;

		// Token: 0x04000834 RID: 2100
		private string _navBarString;

		// Token: 0x04000835 RID: 2101
		private int _minCharAmountToShowResults;

		// Token: 0x04000836 RID: 2102
		private InputKeyItemVM _cancelInputKey;

		// Token: 0x04000837 RID: 2103
		private InputKeyItemVM _previousPageInputKey;

		// Token: 0x04000838 RID: 2104
		private InputKeyItemVM _nextPageInputKey;

		// Token: 0x020001FD RID: 509
		private class SearchResultComparer : IComparer<EncyclopediaSearchResultVM>
		{
			// Token: 0x17000AEC RID: 2796
			// (get) Token: 0x060021EE RID: 8686 RVA: 0x000748C6 File Offset: 0x00072AC6
			// (set) Token: 0x060021EF RID: 8687 RVA: 0x000748CE File Offset: 0x00072ACE
			public string SearchText
			{
				get
				{
					return this._searchText;
				}
				set
				{
					if (value != this._searchText)
					{
						this._searchText = value;
					}
				}
			}

			// Token: 0x060021F0 RID: 8688 RVA: 0x000748E5 File Offset: 0x00072AE5
			public SearchResultComparer(string searchText)
			{
				this.SearchText = searchText;
			}

			// Token: 0x060021F1 RID: 8689 RVA: 0x000748F4 File Offset: 0x00072AF4
			private int CompareBasedOnCapitalization(EncyclopediaSearchResultVM x, EncyclopediaSearchResultVM y)
			{
				int num = (x.NameText.Length > 0 && char.IsUpper(x.NameText[0])) ? 1 : -1;
				int value = (y.NameText.Length > 0 && char.IsUpper(y.NameText[0])) ? 1 : -1;
				return num.CompareTo(value);
			}

			// Token: 0x060021F2 RID: 8690 RVA: 0x00074958 File Offset: 0x00072B58
			public int Compare(EncyclopediaSearchResultVM x, EncyclopediaSearchResultVM y)
			{
				if (x.MatchStartIndex != y.MatchStartIndex)
				{
					return y.MatchStartIndex.CompareTo(x.MatchStartIndex);
				}
				int num = this.CompareBasedOnCapitalization(x, y);
				if (num == 0)
				{
					return y.NameText.Length.CompareTo(x.NameText.Length);
				}
				return num;
			}

			// Token: 0x040010BE RID: 4286
			private string _searchText;
		}
	}
}
