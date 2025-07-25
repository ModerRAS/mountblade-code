using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TournamentLeaderboard
{
	// Token: 0x0200009C RID: 156
	public class TournamentLeaderboardEntryItemVM : ViewModel
	{
		// Token: 0x170004FD RID: 1277
		// (get) Token: 0x06000F34 RID: 3892 RVA: 0x0003C35E File Offset: 0x0003A55E
		// (set) Token: 0x06000F35 RID: 3893 RVA: 0x0003C366 File Offset: 0x0003A566
		public int Rank { get; private set; }

		// Token: 0x170004FE RID: 1278
		// (get) Token: 0x06000F36 RID: 3894 RVA: 0x0003C36F File Offset: 0x0003A56F
		// (set) Token: 0x06000F37 RID: 3895 RVA: 0x0003C377 File Offset: 0x0003A577
		public float PrizeValue { get; private set; }

		// Token: 0x06000F38 RID: 3896 RVA: 0x0003C380 File Offset: 0x0003A580
		public TournamentLeaderboardEntryItemVM(Hero hero, int victories, int placement)
		{
			this._heroObj = hero;
			this.PrizeStr = "-";
			this.Rank = placement;
			this.PlacementOnLeaderboard = placement;
			this.IsChampion = (placement == 1);
			this.Victories = victories;
			float prizeValue;
			if (float.TryParse(this.PrizeStr, out prizeValue))
			{
				this.PrizeValue = prizeValue;
			}
			this.IsMainHero = (hero == TaleWorlds.CampaignSystem.Hero.MainHero);
			this.Hero = new HeroVM(hero, false);
			this.ChampionRewardsHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTournamentChampionRewardsTooltip(hero, null));
			this.RefreshValues();
		}

		// Token: 0x06000F39 RID: 3897 RVA: 0x0003C430 File Offset: 0x0003A630
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.Name = this._heroObj.Name.ToString();
			GameTexts.SetVariable("RANK", this.Rank);
			this.RankText = GameTexts.FindText("str_leaderboard_rank", null).ToString();
			HeroVM hero = this.Hero;
			if (hero == null)
			{
				return;
			}
			hero.RefreshValues();
		}

		// Token: 0x170004FF RID: 1279
		// (get) Token: 0x06000F3A RID: 3898 RVA: 0x0003C48F File Offset: 0x0003A68F
		// (set) Token: 0x06000F3B RID: 3899 RVA: 0x0003C497 File Offset: 0x0003A697
		[DataSourceProperty]
		public BasicTooltipViewModel ChampionRewardsHint
		{
			get
			{
				return this._championRewardsHint;
			}
			set
			{
				if (value != this._championRewardsHint)
				{
					this._championRewardsHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "ChampionRewardsHint");
				}
			}
		}

		// Token: 0x17000500 RID: 1280
		// (get) Token: 0x06000F3C RID: 3900 RVA: 0x0003C4B5 File Offset: 0x0003A6B5
		// (set) Token: 0x06000F3D RID: 3901 RVA: 0x0003C4BD File Offset: 0x0003A6BD
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

		// Token: 0x17000501 RID: 1281
		// (get) Token: 0x06000F3E RID: 3902 RVA: 0x0003C4E0 File Offset: 0x0003A6E0
		// (set) Token: 0x06000F3F RID: 3903 RVA: 0x0003C4E8 File Offset: 0x0003A6E8
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

		// Token: 0x17000502 RID: 1282
		// (get) Token: 0x06000F40 RID: 3904 RVA: 0x0003C50B File Offset: 0x0003A70B
		// (set) Token: 0x06000F41 RID: 3905 RVA: 0x0003C513 File Offset: 0x0003A713
		[DataSourceProperty]
		public int Victories
		{
			get
			{
				return this._victories;
			}
			set
			{
				if (value != this._victories)
				{
					this._victories = value;
					base.OnPropertyChangedWithValue(value, "Victories");
				}
			}
		}

		// Token: 0x17000503 RID: 1283
		// (get) Token: 0x06000F42 RID: 3906 RVA: 0x0003C531 File Offset: 0x0003A731
		// (set) Token: 0x06000F43 RID: 3907 RVA: 0x0003C539 File Offset: 0x0003A739
		[DataSourceProperty]
		public bool IsChampion
		{
			get
			{
				return this._isChampion;
			}
			set
			{
				if (value != this._isChampion)
				{
					this._isChampion = value;
					base.OnPropertyChangedWithValue(value, "IsChampion");
				}
			}
		}

		// Token: 0x17000504 RID: 1284
		// (get) Token: 0x06000F44 RID: 3908 RVA: 0x0003C557 File Offset: 0x0003A757
		// (set) Token: 0x06000F45 RID: 3909 RVA: 0x0003C55F File Offset: 0x0003A75F
		[DataSourceProperty]
		public bool IsMainHero
		{
			get
			{
				return this._isMainHero;
			}
			set
			{
				if (value != this._isMainHero)
				{
					this._isMainHero = value;
					base.OnPropertyChangedWithValue(value, "IsMainHero");
				}
			}
		}

		// Token: 0x17000505 RID: 1285
		// (get) Token: 0x06000F46 RID: 3910 RVA: 0x0003C57D File Offset: 0x0003A77D
		// (set) Token: 0x06000F47 RID: 3911 RVA: 0x0003C585 File Offset: 0x0003A785
		[DataSourceProperty]
		public HeroVM Hero
		{
			get
			{
				return this._hero;
			}
			set
			{
				if (value != this._hero)
				{
					this._hero = value;
					base.OnPropertyChangedWithValue<HeroVM>(value, "Hero");
				}
			}
		}

		// Token: 0x17000506 RID: 1286
		// (get) Token: 0x06000F48 RID: 3912 RVA: 0x0003C5A3 File Offset: 0x0003A7A3
		// (set) Token: 0x06000F49 RID: 3913 RVA: 0x0003C5AB File Offset: 0x0003A7AB
		[DataSourceProperty]
		public string PrizeStr
		{
			get
			{
				return this._prizeStr;
			}
			set
			{
				if (value != this._prizeStr)
				{
					this._prizeStr = value;
					base.OnPropertyChangedWithValue<string>(value, "PrizeStr");
				}
			}
		}

		// Token: 0x17000507 RID: 1287
		// (get) Token: 0x06000F4A RID: 3914 RVA: 0x0003C5CE File Offset: 0x0003A7CE
		// (set) Token: 0x06000F4B RID: 3915 RVA: 0x0003C5D6 File Offset: 0x0003A7D6
		[DataSourceProperty]
		public int PlacementOnLeaderboard
		{
			get
			{
				return this._placementOnLeaderboard;
			}
			set
			{
				if (value != this._placementOnLeaderboard)
				{
					this._placementOnLeaderboard = value;
					base.OnPropertyChangedWithValue(value, "PlacementOnLeaderboard");
				}
			}
		}

		// Token: 0x0400070E RID: 1806
		private readonly Hero _heroObj;

		// Token: 0x0400070F RID: 1807
		private int _placementOnLeaderboard;

		// Token: 0x04000710 RID: 1808
		private int _victories;

		// Token: 0x04000711 RID: 1809
		private bool _isMainHero;

		// Token: 0x04000712 RID: 1810
		private bool _isChampion;

		// Token: 0x04000713 RID: 1811
		private string _name;

		// Token: 0x04000714 RID: 1812
		private string _rankText;

		// Token: 0x04000715 RID: 1813
		private string _prizeStr;

		// Token: 0x04000716 RID: 1814
		private HeroVM _hero;

		// Token: 0x04000717 RID: 1815
		private BasicTooltipViewModel _championRewardsHint;
	}
}
