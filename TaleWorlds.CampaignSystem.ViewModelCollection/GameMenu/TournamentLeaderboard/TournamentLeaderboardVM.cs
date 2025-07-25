using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TournamentLeaderboard
{
	// Token: 0x0200009E RID: 158
	public class TournamentLeaderboardVM : ViewModel
	{
		// Token: 0x06000F62 RID: 3938 RVA: 0x0003C948 File Offset: 0x0003AB48
		public TournamentLeaderboardVM()
		{
			this.Entries = new MBBindingList<TournamentLeaderboardEntryItemVM>();
			List<KeyValuePair<Hero, int>> leaderboard = Campaign.Current.TournamentManager.GetLeaderboard();
			for (int i = 0; i < leaderboard.Count; i++)
			{
				this.Entries.Add(new TournamentLeaderboardEntryItemVM(leaderboard[i].Key, leaderboard[i].Value, i + 1));
			}
			this.SortController = new TournamentLeaderboardSortControllerVM(ref this._entries);
			this.RefreshValues();
		}

		// Token: 0x06000F63 RID: 3939 RVA: 0x0003C9D0 File Offset: 0x0003ABD0
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.DoneText = GameTexts.FindText("str_done", null).ToString();
			this.Entries.ApplyActionOnAllItems(delegate(TournamentLeaderboardEntryItemVM x)
			{
				x.RefreshValues();
			});
			this.HeroText = GameTexts.FindText("str_hero", null).ToString();
			this.VictoriesText = GameTexts.FindText("str_leaderboard_victories", null).ToString();
			this.RankText = GameTexts.FindText("str_rank_sign", null).ToString();
			this.TitleText = GameTexts.FindText("str_leaderboard_title", null).ToString();
		}

		// Token: 0x06000F64 RID: 3940 RVA: 0x0003CA7B File Offset: 0x0003AC7B
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

		// Token: 0x06000F65 RID: 3941 RVA: 0x0003CA93 File Offset: 0x0003AC93
		public void ExecuteDone()
		{
			this.IsEnabled = false;
		}

		// Token: 0x06000F66 RID: 3942 RVA: 0x0003CA9C File Offset: 0x0003AC9C
		public void SetDoneInputKey(HotKey hotKey)
		{
			this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x17000510 RID: 1296
		// (get) Token: 0x06000F67 RID: 3943 RVA: 0x0003CAAB File Offset: 0x0003ACAB
		// (set) Token: 0x06000F68 RID: 3944 RVA: 0x0003CAB3 File Offset: 0x0003ACB3
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

		// Token: 0x17000511 RID: 1297
		// (get) Token: 0x06000F69 RID: 3945 RVA: 0x0003CAD1 File Offset: 0x0003ACD1
		// (set) Token: 0x06000F6A RID: 3946 RVA: 0x0003CAD9 File Offset: 0x0003ACD9
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

		// Token: 0x17000512 RID: 1298
		// (get) Token: 0x06000F6B RID: 3947 RVA: 0x0003CAF7 File Offset: 0x0003ACF7
		// (set) Token: 0x06000F6C RID: 3948 RVA: 0x0003CAFF File Offset: 0x0003ACFF
		[DataSourceProperty]
		public TournamentLeaderboardSortControllerVM SortController
		{
			get
			{
				return this._sortController;
			}
			set
			{
				if (value != this._sortController)
				{
					this._sortController = value;
					base.OnPropertyChangedWithValue<TournamentLeaderboardSortControllerVM>(value, "SortController");
				}
			}
		}

		// Token: 0x17000513 RID: 1299
		// (get) Token: 0x06000F6D RID: 3949 RVA: 0x0003CB1D File Offset: 0x0003AD1D
		// (set) Token: 0x06000F6E RID: 3950 RVA: 0x0003CB25 File Offset: 0x0003AD25
		[DataSourceProperty]
		public MBBindingList<TournamentLeaderboardEntryItemVM> Entries
		{
			get
			{
				return this._entries;
			}
			set
			{
				if (value != this._entries)
				{
					this._entries = value;
					base.OnPropertyChangedWithValue<MBBindingList<TournamentLeaderboardEntryItemVM>>(value, "Entries");
				}
			}
		}

		// Token: 0x17000514 RID: 1300
		// (get) Token: 0x06000F6F RID: 3951 RVA: 0x0003CB43 File Offset: 0x0003AD43
		// (set) Token: 0x06000F70 RID: 3952 RVA: 0x0003CB4B File Offset: 0x0003AD4B
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

		// Token: 0x17000515 RID: 1301
		// (get) Token: 0x06000F71 RID: 3953 RVA: 0x0003CB6E File Offset: 0x0003AD6E
		// (set) Token: 0x06000F72 RID: 3954 RVA: 0x0003CB76 File Offset: 0x0003AD76
		[DataSourceProperty]
		public string TitleText
		{
			get
			{
				return this._titleText;
			}
			set
			{
				if (value != this._titleText)
				{
					this._titleText = value;
					base.OnPropertyChangedWithValue<string>(value, "TitleText");
				}
			}
		}

		// Token: 0x17000516 RID: 1302
		// (get) Token: 0x06000F73 RID: 3955 RVA: 0x0003CB99 File Offset: 0x0003AD99
		// (set) Token: 0x06000F74 RID: 3956 RVA: 0x0003CBA1 File Offset: 0x0003ADA1
		[DataSourceProperty]
		public string HeroText
		{
			get
			{
				return this._heroText;
			}
			set
			{
				if (value != this._heroText)
				{
					this._heroText = value;
					base.OnPropertyChangedWithValue<string>(value, "HeroText");
				}
			}
		}

		// Token: 0x17000517 RID: 1303
		// (get) Token: 0x06000F75 RID: 3957 RVA: 0x0003CBC4 File Offset: 0x0003ADC4
		// (set) Token: 0x06000F76 RID: 3958 RVA: 0x0003CBCC File Offset: 0x0003ADCC
		[DataSourceProperty]
		public string VictoriesText
		{
			get
			{
				return this._victoriesText;
			}
			set
			{
				if (value != this._victoriesText)
				{
					this._victoriesText = value;
					base.OnPropertyChangedWithValue<string>(value, "VictoriesText");
				}
			}
		}

		// Token: 0x17000518 RID: 1304
		// (get) Token: 0x06000F77 RID: 3959 RVA: 0x0003CBEF File Offset: 0x0003ADEF
		// (set) Token: 0x06000F78 RID: 3960 RVA: 0x0003CBF7 File Offset: 0x0003ADF7
		[DataSourceProperty]
		public string RankText
		{
			get
			{
				return this._rankText;
			}
			set
			{
				if (value != this._rankText)
				{
					this._rankText = value;
					base.OnPropertyChangedWithValue<string>(value, "RankText");
				}
			}
		}

		// Token: 0x04000725 RID: 1829
		private InputKeyItemVM _doneInputKey;

		// Token: 0x04000726 RID: 1830
		private bool _isEnabled;

		// Token: 0x04000727 RID: 1831
		private string _doneText;

		// Token: 0x04000728 RID: 1832
		private string _heroText;

		// Token: 0x04000729 RID: 1833
		private string _victoriesText;

		// Token: 0x0400072A RID: 1834
		private string _rankText;

		// Token: 0x0400072B RID: 1835
		private string _titleText;

		// Token: 0x0400072C RID: 1836
		private MBBindingList<TournamentLeaderboardEntryItemVM> _entries;

		// Token: 0x0400072D RID: 1837
		private TournamentLeaderboardSortControllerVM _sortController;
	}
}
