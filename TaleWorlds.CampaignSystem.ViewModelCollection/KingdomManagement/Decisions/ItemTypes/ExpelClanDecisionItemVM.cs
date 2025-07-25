using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions.ItemTypes
{
	// Token: 0x0200006E RID: 110
	public class ExpelClanDecisionItemVM : DecisionItemBaseVM
	{
		// Token: 0x17000302 RID: 770
		// (get) Token: 0x06000993 RID: 2451 RVA: 0x00027B6C File Offset: 0x00025D6C
		public ExpelClanFromKingdomDecision ExpelDecision
		{
			get
			{
				ExpelClanFromKingdomDecision result;
				if ((result = this._expelDecision) == null)
				{
					result = (this._expelDecision = (this._decision as ExpelClanFromKingdomDecision));
				}
				return result;
			}
		}

		// Token: 0x17000303 RID: 771
		// (get) Token: 0x06000994 RID: 2452 RVA: 0x00027B97 File Offset: 0x00025D97
		public Clan Clan
		{
			get
			{
				return this.ExpelDecision.ClanToExpel;
			}
		}

		// Token: 0x06000995 RID: 2453 RVA: 0x00027BA4 File Offset: 0x00025DA4
		public ExpelClanDecisionItemVM(ExpelClanFromKingdomDecision decision, Action onDecisionOver) : base(decision, onDecisionOver)
		{
			base.DecisionType = 2;
		}

		// Token: 0x06000996 RID: 2454 RVA: 0x00027BB8 File Offset: 0x00025DB8
		protected override void InitValues()
		{
			base.InitValues();
			base.DecisionType = 2;
			this.Members = new MBBindingList<HeroVM>();
			this.Fiefs = new MBBindingList<EncyclopediaSettlementVM>();
			GameTexts.SetVariable("RENOWN", this.Clan.Renown);
			string variableName = "STR1";
			TextObject encyclopediaText = this.Clan.EncyclopediaText;
			GameTexts.SetVariable(variableName, (encyclopediaText != null) ? encyclopediaText.ToString() : null);
			GameTexts.SetVariable("STR2", GameTexts.FindText("str_encyclopedia_renown", null).ToString());
			this.InformationText = GameTexts.FindText("str_STR1_space_STR2", null).ToString();
			this.Leader = new HeroVM(this.Clan.Leader, false);
			this.LeaderText = GameTexts.FindText("str_leader", null).ToString();
			this.MembersText = GameTexts.FindText("str_members", null).ToString();
			this.SettlementsText = GameTexts.FindText("str_fiefs", null).ToString();
			this.NameText = this.Clan.Name.ToString();
			int num = 0;
			float num2 = 0f;
			EncyclopediaPage pageOf = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Hero));
			foreach (Hero hero in this.Clan.Heroes)
			{
				if (hero.IsAlive && hero.Age >= 18f && pageOf.IsValidEncyclopediaItem(hero))
				{
					if (hero != this.Leader.Hero)
					{
						this.Members.Add(new HeroVM(hero, false));
					}
					num += hero.Gold;
				}
			}
			foreach (Hero hero2 in this.Clan.Companions)
			{
				if (hero2.IsAlive && hero2.Age >= 18f && pageOf.IsValidEncyclopediaItem(hero2))
				{
					if (hero2 != this.Leader.Hero)
					{
						this.Members.Add(new HeroVM(hero2, false));
					}
					num += hero2.Gold;
				}
			}
			foreach (MobileParty mobileParty in MobileParty.AllLordParties)
			{
				if (mobileParty.ActualClan == this.Clan && !mobileParty.IsDisbanding)
				{
					num2 += mobileParty.Party.TotalStrength;
				}
			}
			this.ProsperityText = num.ToString();
			this.ProsperityHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetClanProsperityTooltip(this.Clan));
			this.StrengthText = num2.ToString();
			this.StrengthHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetClanStrengthTooltip(this.Clan));
			foreach (Town town in from s in this.Clan.Fiefs
			orderby s.IsCastle, s.IsTown
			select s)
			{
				if (town.Settlement.OwnerClan == this.Clan)
				{
					this.Fiefs.Add(new EncyclopediaSettlementVM(town.Settlement));
				}
			}
		}

		// Token: 0x17000304 RID: 772
		// (get) Token: 0x06000997 RID: 2455 RVA: 0x00027F60 File Offset: 0x00026160
		// (set) Token: 0x06000998 RID: 2456 RVA: 0x00027F68 File Offset: 0x00026168
		[DataSourceProperty]
		public MBBindingList<HeroVM> Members
		{
			get
			{
				return this._members;
			}
			set
			{
				if (value != this._members)
				{
					this._members = value;
					base.OnPropertyChangedWithValue<MBBindingList<HeroVM>>(value, "Members");
				}
			}
		}

		// Token: 0x17000305 RID: 773
		// (get) Token: 0x06000999 RID: 2457 RVA: 0x00027F86 File Offset: 0x00026186
		// (set) Token: 0x0600099A RID: 2458 RVA: 0x00027F8E File Offset: 0x0002618E
		[DataSourceProperty]
		public MBBindingList<EncyclopediaSettlementVM> Fiefs
		{
			get
			{
				return this._fiefs;
			}
			set
			{
				if (value != this._fiefs)
				{
					this._fiefs = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaSettlementVM>>(value, "Fiefs");
				}
			}
		}

		// Token: 0x17000306 RID: 774
		// (get) Token: 0x0600099B RID: 2459 RVA: 0x00027FAC File Offset: 0x000261AC
		// (set) Token: 0x0600099C RID: 2460 RVA: 0x00027FB4 File Offset: 0x000261B4
		[DataSourceProperty]
		public HeroVM Leader
		{
			get
			{
				return this._leader;
			}
			set
			{
				if (value != this._leader)
				{
					this._leader = value;
					base.OnPropertyChangedWithValue<HeroVM>(value, "Leader");
				}
			}
		}

		// Token: 0x17000307 RID: 775
		// (get) Token: 0x0600099D RID: 2461 RVA: 0x00027FD2 File Offset: 0x000261D2
		// (set) Token: 0x0600099E RID: 2462 RVA: 0x00027FDA File Offset: 0x000261DA
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

		// Token: 0x17000308 RID: 776
		// (get) Token: 0x0600099F RID: 2463 RVA: 0x00027FFD File Offset: 0x000261FD
		// (set) Token: 0x060009A0 RID: 2464 RVA: 0x00028005 File Offset: 0x00026205
		[DataSourceProperty]
		public string MembersText
		{
			get
			{
				return this._membersText;
			}
			set
			{
				if (value != this._membersText)
				{
					this._membersText = value;
					base.OnPropertyChangedWithValue<string>(value, "MembersText");
				}
			}
		}

		// Token: 0x17000309 RID: 777
		// (get) Token: 0x060009A1 RID: 2465 RVA: 0x00028028 File Offset: 0x00026228
		// (set) Token: 0x060009A2 RID: 2466 RVA: 0x00028030 File Offset: 0x00026230
		[DataSourceProperty]
		public string SettlementsText
		{
			get
			{
				return this._settlementsText;
			}
			set
			{
				if (value != this._settlementsText)
				{
					this._settlementsText = value;
					base.OnPropertyChangedWithValue<string>(value, "SettlementsText");
				}
			}
		}

		// Token: 0x1700030A RID: 778
		// (get) Token: 0x060009A3 RID: 2467 RVA: 0x00028053 File Offset: 0x00026253
		// (set) Token: 0x060009A4 RID: 2468 RVA: 0x0002805B File Offset: 0x0002625B
		[DataSourceProperty]
		public string InformationText
		{
			get
			{
				return this._informationText;
			}
			set
			{
				if (value != this._informationText)
				{
					this._informationText = value;
					base.OnPropertyChangedWithValue<string>(value, "InformationText");
				}
			}
		}

		// Token: 0x1700030B RID: 779
		// (get) Token: 0x060009A5 RID: 2469 RVA: 0x0002807E File Offset: 0x0002627E
		// (set) Token: 0x060009A6 RID: 2470 RVA: 0x00028086 File Offset: 0x00026286
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

		// Token: 0x1700030C RID: 780
		// (get) Token: 0x060009A7 RID: 2471 RVA: 0x000280A9 File Offset: 0x000262A9
		// (set) Token: 0x060009A8 RID: 2472 RVA: 0x000280B1 File Offset: 0x000262B1
		[DataSourceProperty]
		public string ProsperityText
		{
			get
			{
				return this._prosperityText;
			}
			set
			{
				if (value != this._prosperityText)
				{
					this._prosperityText = value;
					base.OnPropertyChangedWithValue<string>(value, "ProsperityText");
				}
			}
		}

		// Token: 0x1700030D RID: 781
		// (get) Token: 0x060009A9 RID: 2473 RVA: 0x000280D4 File Offset: 0x000262D4
		// (set) Token: 0x060009AA RID: 2474 RVA: 0x000280DC File Offset: 0x000262DC
		[DataSourceProperty]
		public string StrengthText
		{
			get
			{
				return this._strengthText;
			}
			set
			{
				if (value != this._strengthText)
				{
					this._strengthText = value;
					base.OnPropertyChangedWithValue<string>(value, "StrengthText");
				}
			}
		}

		// Token: 0x1700030E RID: 782
		// (get) Token: 0x060009AB RID: 2475 RVA: 0x000280FF File Offset: 0x000262FF
		// (set) Token: 0x060009AC RID: 2476 RVA: 0x00028107 File Offset: 0x00026307
		[DataSourceProperty]
		public BasicTooltipViewModel ProsperityHint
		{
			get
			{
				return this._prosperityHint;
			}
			set
			{
				if (value != this._prosperityHint)
				{
					this._prosperityHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "ProsperityHint");
				}
			}
		}

		// Token: 0x1700030F RID: 783
		// (get) Token: 0x060009AD RID: 2477 RVA: 0x00028125 File Offset: 0x00026325
		// (set) Token: 0x060009AE RID: 2478 RVA: 0x0002812D File Offset: 0x0002632D
		[DataSourceProperty]
		public BasicTooltipViewModel StrengthHint
		{
			get
			{
				return this._strengthHint;
			}
			set
			{
				if (value != this._strengthHint)
				{
					this._strengthHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "StrengthHint");
				}
			}
		}

		// Token: 0x0400044F RID: 1103
		private ExpelClanFromKingdomDecision _expelDecision;

		// Token: 0x04000450 RID: 1104
		private MBBindingList<HeroVM> _members;

		// Token: 0x04000451 RID: 1105
		private MBBindingList<EncyclopediaSettlementVM> _fiefs;

		// Token: 0x04000452 RID: 1106
		private HeroVM _leader;

		// Token: 0x04000453 RID: 1107
		private string _nameText;

		// Token: 0x04000454 RID: 1108
		private string _membersText;

		// Token: 0x04000455 RID: 1109
		private string _settlementsText;

		// Token: 0x04000456 RID: 1110
		private string _leaderText;

		// Token: 0x04000457 RID: 1111
		private string _informationText;

		// Token: 0x04000458 RID: 1112
		private string _prosperityText;

		// Token: 0x04000459 RID: 1113
		private string _strengthText;

		// Token: 0x0400045A RID: 1114
		private BasicTooltipViewModel _prosperityHint;

		// Token: 0x0400045B RID: 1115
		private BasicTooltipViewModel _strengthHint;
	}
}
