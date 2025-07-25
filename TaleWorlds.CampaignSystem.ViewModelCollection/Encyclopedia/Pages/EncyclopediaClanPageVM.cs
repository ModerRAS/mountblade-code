using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Pages
{
	// Token: 0x020000B5 RID: 181
	[EncyclopediaViewModel(typeof(Clan))]
	public class EncyclopediaClanPageVM : EncyclopediaContentPageVM
	{
		// Token: 0x060011BF RID: 4543 RVA: 0x00046254 File Offset: 0x00044454
		public EncyclopediaClanPageVM(EncyclopediaPageArgs args) : base(args)
		{
			this._faction = (base.Obj as IFaction);
			this._clan = (this._faction as Clan);
			this.Members = new MBBindingList<HeroVM>();
			this.Enemies = new MBBindingList<EncyclopediaFactionVM>();
			this.Settlements = new MBBindingList<EncyclopediaSettlementVM>();
			this.History = new MBBindingList<EncyclopediaHistoryEventVM>();
			this.ClanInfo = new MBBindingList<StringPairItemVM>();
			base.IsBookmarked = Campaign.Current.EncyclopediaManager.ViewDataTracker.IsEncyclopediaBookmarked(this._clan);
			this.RefreshValues();
		}

		// Token: 0x060011C0 RID: 4544 RVA: 0x000462E8 File Offset: 0x000444E8
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.StrengthHint = new HintViewModel(GameTexts.FindText("str_strength", null), null);
			this.ProsperityHint = new HintViewModel(GameTexts.FindText("str_prosperity", null), null);
			this.MembersText = GameTexts.FindText("str_members", null).ToString();
			this.AlliesText = new TextObject("{=bfQLwMUp}Clans", null).ToString();
			this.EnemiesText = new TextObject("{=zZlWRZjO}Wars", null).ToString();
			this.SettlementsText = GameTexts.FindText("str_settlements", null).ToString();
			this.VillagesText = GameTexts.FindText("str_villages", null).ToString();
			this.DestroyedText = new TextObject("{=w8Yzf0F0}Destroyed", null).ToString();
			this.PartOfText = GameTexts.FindText("str_encyclopedia_clan_part_of_kingdom", null).ToString();
			this.LeaderText = GameTexts.FindText("str_leader", null).ToString();
			this.InfoText = GameTexts.FindText("str_info", null).ToString();
			base.UpdateBookmarkHintText();
			this.Refresh();
		}

		// Token: 0x060011C1 RID: 4545 RVA: 0x000463FC File Offset: 0x000445FC
		public override void Refresh()
		{
			this.Members.Clear();
			this.Enemies.Clear();
			this.Settlements.Clear();
			this.History.Clear();
			this.ClanInfo.Clear();
			TextObject encyclopediaText = this._faction.EncyclopediaText;
			this.InformationText = ((encyclopediaText != null) ? encyclopediaText.ToString() : null);
			this.Leader = new HeroVM(this._faction.Leader, true);
			this.NameText = this._clan.Name.ToString();
			this.HasParentKingdom = (this._clan.Kingdom != null);
			this.ParentKingdom = (this.HasParentKingdom ? new EncyclopediaFactionVM(((Clan)this._faction).Kingdom) : null);
			if (this._faction.IsKingdomFaction)
			{
				this.DescriptorText = GameTexts.FindText("str_kingdom_faction", null).ToString();
			}
			else if (this._faction.IsBanditFaction)
			{
				this.DescriptorText = GameTexts.FindText("str_bandit_faction", null).ToString();
			}
			else if (this._faction.IsMinorFaction)
			{
				this.DescriptorText = GameTexts.FindText("str_minor_faction", null).ToString();
			}
			int num = 0;
			float num2 = 0f;
			EncyclopediaPage pageOf = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Hero));
			IEnumerable<Hero> heroes = this._faction.Heroes;
			Clan clan = this._clan;
			foreach (Hero hero in heroes.Union((clan != null) ? clan.Companions : null))
			{
				if (pageOf.IsValidEncyclopediaItem(hero))
				{
					if (hero != this.Leader.Hero)
					{
						this.Members.Add(new HeroVM(hero, true));
					}
					num += hero.Gold;
				}
			}
			this.Banner = new ImageIdentifierVM(BannerCode.CreateFrom(this._faction.Banner), true);
			foreach (MobileParty mobileParty in MobileParty.AllLordParties)
			{
				if (mobileParty.MapFaction == this._faction && !mobileParty.IsDisbanding)
				{
					num2 += mobileParty.Party.TotalStrength;
				}
			}
			this.ProsperityText = num.ToString();
			this.StrengthText = num2.ToString();
			for (int i = Campaign.Current.LogEntryHistory.GameActionLogs.Count - 1; i >= 0; i--)
			{
				IEncyclopediaLog encyclopediaLog;
				if ((encyclopediaLog = (Campaign.Current.LogEntryHistory.GameActionLogs[i] as IEncyclopediaLog)) != null && ((this._faction.IsKingdomFaction && encyclopediaLog.IsVisibleInEncyclopediaPageOf<Kingdom>((Kingdom)this._faction)) || (this._faction.IsClan && encyclopediaLog.IsVisibleInEncyclopediaPageOf<Clan>((Clan)this._faction))))
				{
					this.History.Add(new EncyclopediaHistoryEventVM(encyclopediaLog));
				}
			}
			EncyclopediaPage pageOf2 = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Clan));
			foreach (IFaction faction in (from x in Campaign.Current.Factions
			orderby !x.IsKingdomFaction
			select x).ThenBy((IFaction f) => f.Name.ToString()))
			{
				IFaction mapFaction = faction.MapFaction;
				if (pageOf2.IsValidEncyclopediaItem(mapFaction) && mapFaction != this._faction.MapFaction && mapFaction != this._faction && !mapFaction.IsBanditFaction && FactionManager.IsAtWarAgainstFaction(this._faction.MapFaction, mapFaction) && !this.Enemies.Any((EncyclopediaFactionVM x) => x.Faction == mapFaction))
				{
					this.Enemies.Add(new EncyclopediaFactionVM(mapFaction));
				}
			}
			EncyclopediaPage pageOf3 = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Settlement));
			foreach (Settlement settlement in from s in Settlement.All
			orderby s.IsVillage, s.IsCastle, s.IsTown
			select s)
			{
				if ((settlement.MapFaction == this._faction || (settlement.OwnerClan == this._faction && settlement.OwnerClan.Leader != null)) && pageOf3.IsValidEncyclopediaItem(settlement) && (settlement.IsTown || settlement.IsCastle))
				{
					this.Settlements.Add(new EncyclopediaSettlementVM(settlement));
				}
			}
			GameTexts.SetVariable("LEFT", new TextObject("{=tTLvo8sM}Clan Tier", null).ToString());
			this.ClanInfo.Add(new StringPairItemVM(GameTexts.FindText("str_LEFT_colon", null).ToString(), this._clan.Tier.ToString(), null));
			GameTexts.SetVariable("LEFT", new TextObject("{=ODEnkg0o}Clan Strength", null).ToString());
			this.ClanInfo.Add(new StringPairItemVM(GameTexts.FindText("str_LEFT_colon", null).ToString(), this._clan.TotalStrength.ToString("F0"), null));
			GameTexts.SetVariable("LEFT", GameTexts.FindText("str_wealth", null).ToString());
			this.ClanInfo.Add(new StringPairItemVM(GameTexts.FindText("str_LEFT_colon", null).ToString(), CampaignUIHelper.GetClanWealthStatusText(this._clan), null));
			this.IsClanDestroyed = this._clan.IsEliminated;
		}

		// Token: 0x060011C2 RID: 4546 RVA: 0x00046A74 File Offset: 0x00044C74
		public override string GetName()
		{
			return this._clan.Name.ToString();
		}

		// Token: 0x060011C3 RID: 4547 RVA: 0x00046A88 File Offset: 0x00044C88
		public override string GetNavigationBarURL()
		{
			return HyperlinkTexts.GetGenericHyperlinkText("Home", GameTexts.FindText("str_encyclopedia_home", null).ToString()) + " \\ " + HyperlinkTexts.GetGenericHyperlinkText("ListPage-Clans", GameTexts.FindText("str_encyclopedia_clans", null).ToString()) + " \\ " + this.GetName();
		}

		// Token: 0x060011C4 RID: 4548 RVA: 0x00046AF0 File Offset: 0x00044CF0
		public override void ExecuteSwitchBookmarkedState()
		{
			base.ExecuteSwitchBookmarkedState();
			if (base.IsBookmarked)
			{
				Campaign.Current.EncyclopediaManager.ViewDataTracker.AddEncyclopediaBookmarkToItem(this._clan);
				return;
			}
			Campaign.Current.EncyclopediaManager.ViewDataTracker.RemoveEncyclopediaBookmarkFromItem(this._clan);
		}

		// Token: 0x170005DA RID: 1498
		// (get) Token: 0x060011C5 RID: 4549 RVA: 0x00046B40 File Offset: 0x00044D40
		// (set) Token: 0x060011C6 RID: 4550 RVA: 0x00046B48 File Offset: 0x00044D48
		[DataSourceProperty]
		public MBBindingList<StringPairItemVM> ClanInfo
		{
			get
			{
				return this._clanInfo;
			}
			set
			{
				if (value != this._clanInfo)
				{
					this._clanInfo = value;
					base.OnPropertyChangedWithValue<MBBindingList<StringPairItemVM>>(value, "ClanInfo");
				}
			}
		}

		// Token: 0x170005DB RID: 1499
		// (get) Token: 0x060011C7 RID: 4551 RVA: 0x00046B66 File Offset: 0x00044D66
		// (set) Token: 0x060011C8 RID: 4552 RVA: 0x00046B6E File Offset: 0x00044D6E
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

		// Token: 0x170005DC RID: 1500
		// (get) Token: 0x060011C9 RID: 4553 RVA: 0x00046B8C File Offset: 0x00044D8C
		// (set) Token: 0x060011CA RID: 4554 RVA: 0x00046B94 File Offset: 0x00044D94
		[DataSourceProperty]
		public MBBindingList<EncyclopediaFactionVM> Enemies
		{
			get
			{
				return this._enemies;
			}
			set
			{
				if (value != this._enemies)
				{
					this._enemies = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaFactionVM>>(value, "Enemies");
				}
			}
		}

		// Token: 0x170005DD RID: 1501
		// (get) Token: 0x060011CB RID: 4555 RVA: 0x00046BB2 File Offset: 0x00044DB2
		// (set) Token: 0x060011CC RID: 4556 RVA: 0x00046BBA File Offset: 0x00044DBA
		[DataSourceProperty]
		public MBBindingList<EncyclopediaSettlementVM> Settlements
		{
			get
			{
				return this._settlements;
			}
			set
			{
				if (value != this._settlements)
				{
					this._settlements = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaSettlementVM>>(value, "Settlements");
				}
			}
		}

		// Token: 0x170005DE RID: 1502
		// (get) Token: 0x060011CD RID: 4557 RVA: 0x00046BD8 File Offset: 0x00044DD8
		// (set) Token: 0x060011CE RID: 4558 RVA: 0x00046BE0 File Offset: 0x00044DE0
		[DataSourceProperty]
		public MBBindingList<EncyclopediaHistoryEventVM> History
		{
			get
			{
				return this._history;
			}
			set
			{
				if (value != this._history)
				{
					this._history = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaHistoryEventVM>>(value, "History");
				}
			}
		}

		// Token: 0x170005DF RID: 1503
		// (get) Token: 0x060011CF RID: 4559 RVA: 0x00046BFE File Offset: 0x00044DFE
		// (set) Token: 0x060011D0 RID: 4560 RVA: 0x00046C06 File Offset: 0x00044E06
		[DataSourceProperty]
		public EncyclopediaFactionVM ParentKingdom
		{
			get
			{
				return this._parentKingdom;
			}
			set
			{
				if (value != this._parentKingdom)
				{
					this._parentKingdom = value;
					base.OnPropertyChangedWithValue<EncyclopediaFactionVM>(value, "ParentKingdom");
				}
			}
		}

		// Token: 0x170005E0 RID: 1504
		// (get) Token: 0x060011D1 RID: 4561 RVA: 0x00046C24 File Offset: 0x00044E24
		// (set) Token: 0x060011D2 RID: 4562 RVA: 0x00046C2C File Offset: 0x00044E2C
		[DataSourceProperty]
		public bool HasParentKingdom
		{
			get
			{
				return this._hasParentKingdom;
			}
			set
			{
				if (value != this._hasParentKingdom)
				{
					this._hasParentKingdom = value;
					base.OnPropertyChangedWithValue(value, "HasParentKingdom");
				}
			}
		}

		// Token: 0x170005E1 RID: 1505
		// (get) Token: 0x060011D3 RID: 4563 RVA: 0x00046C4A File Offset: 0x00044E4A
		// (set) Token: 0x060011D4 RID: 4564 RVA: 0x00046C52 File Offset: 0x00044E52
		[DataSourceProperty]
		public bool IsClanDestroyed
		{
			get
			{
				return this._isClanDestroyed;
			}
			set
			{
				if (value != this._isClanDestroyed)
				{
					this._isClanDestroyed = value;
					base.OnPropertyChangedWithValue(value, "IsClanDestroyed");
				}
			}
		}

		// Token: 0x170005E2 RID: 1506
		// (get) Token: 0x060011D5 RID: 4565 RVA: 0x00046C70 File Offset: 0x00044E70
		// (set) Token: 0x060011D6 RID: 4566 RVA: 0x00046C78 File Offset: 0x00044E78
		[DataSourceProperty]
		public string DestroyedText
		{
			get
			{
				return this._destroyedText;
			}
			set
			{
				if (value != this._destroyedText)
				{
					this._destroyedText = value;
					base.OnPropertyChangedWithValue<string>(value, "DestroyedText");
				}
			}
		}

		// Token: 0x170005E3 RID: 1507
		// (get) Token: 0x060011D7 RID: 4567 RVA: 0x00046C9B File Offset: 0x00044E9B
		// (set) Token: 0x060011D8 RID: 4568 RVA: 0x00046CA3 File Offset: 0x00044EA3
		[DataSourceProperty]
		public string PartOfText
		{
			get
			{
				return this._partOfText;
			}
			set
			{
				if (value != this._partOfText)
				{
					this._partOfText = value;
					base.OnPropertyChangedWithValue<string>(value, "PartOfText");
				}
			}
		}

		// Token: 0x170005E4 RID: 1508
		// (get) Token: 0x060011D9 RID: 4569 RVA: 0x00046CC6 File Offset: 0x00044EC6
		// (set) Token: 0x060011DA RID: 4570 RVA: 0x00046CCE File Offset: 0x00044ECE
		[DataSourceProperty]
		public string TierText
		{
			get
			{
				return this._tierText;
			}
			set
			{
				if (value != this._tierText)
				{
					this._tierText = value;
					base.OnPropertyChangedWithValue<string>(value, "TierText");
				}
			}
		}

		// Token: 0x170005E5 RID: 1509
		// (get) Token: 0x060011DB RID: 4571 RVA: 0x00046CF1 File Offset: 0x00044EF1
		// (set) Token: 0x060011DC RID: 4572 RVA: 0x00046CF9 File Offset: 0x00044EF9
		[DataSourceProperty]
		public string InfoText
		{
			get
			{
				return this._infoText;
			}
			set
			{
				if (value != this._infoText)
				{
					this._infoText = value;
					base.OnPropertyChangedWithValue<string>(value, "InfoText");
				}
			}
		}

		// Token: 0x170005E6 RID: 1510
		// (get) Token: 0x060011DD RID: 4573 RVA: 0x00046D1C File Offset: 0x00044F1C
		// (set) Token: 0x060011DE RID: 4574 RVA: 0x00046D24 File Offset: 0x00044F24
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

		// Token: 0x170005E7 RID: 1511
		// (get) Token: 0x060011DF RID: 4575 RVA: 0x00046D42 File Offset: 0x00044F42
		// (set) Token: 0x060011E0 RID: 4576 RVA: 0x00046D4A File Offset: 0x00044F4A
		[DataSourceProperty]
		public ImageIdentifierVM Banner
		{
			get
			{
				return this._banner;
			}
			set
			{
				if (value != this._banner)
				{
					this._banner = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Banner");
				}
			}
		}

		// Token: 0x170005E8 RID: 1512
		// (get) Token: 0x060011E1 RID: 4577 RVA: 0x00046D68 File Offset: 0x00044F68
		// (set) Token: 0x060011E2 RID: 4578 RVA: 0x00046D70 File Offset: 0x00044F70
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

		// Token: 0x170005E9 RID: 1513
		// (get) Token: 0x060011E3 RID: 4579 RVA: 0x00046D93 File Offset: 0x00044F93
		// (set) Token: 0x060011E4 RID: 4580 RVA: 0x00046D9B File Offset: 0x00044F9B
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

		// Token: 0x170005EA RID: 1514
		// (get) Token: 0x060011E5 RID: 4581 RVA: 0x00046DBE File Offset: 0x00044FBE
		// (set) Token: 0x060011E6 RID: 4582 RVA: 0x00046DC6 File Offset: 0x00044FC6
		[DataSourceProperty]
		public string EnemiesText
		{
			get
			{
				return this._enemiesText;
			}
			set
			{
				if (value != this._enemiesText)
				{
					this._enemiesText = value;
					base.OnPropertyChangedWithValue<string>(value, "EnemiesText");
				}
			}
		}

		// Token: 0x170005EB RID: 1515
		// (get) Token: 0x060011E7 RID: 4583 RVA: 0x00046DE9 File Offset: 0x00044FE9
		// (set) Token: 0x060011E8 RID: 4584 RVA: 0x00046DF1 File Offset: 0x00044FF1
		[DataSourceProperty]
		public string AlliesText
		{
			get
			{
				return this._alliesText;
			}
			set
			{
				if (value != this._alliesText)
				{
					this._alliesText = value;
					base.OnPropertyChangedWithValue<string>(value, "AlliesText");
				}
			}
		}

		// Token: 0x170005EC RID: 1516
		// (get) Token: 0x060011E9 RID: 4585 RVA: 0x00046E14 File Offset: 0x00045014
		// (set) Token: 0x060011EA RID: 4586 RVA: 0x00046E1C File Offset: 0x0004501C
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

		// Token: 0x170005ED RID: 1517
		// (get) Token: 0x060011EB RID: 4587 RVA: 0x00046E3F File Offset: 0x0004503F
		// (set) Token: 0x060011EC RID: 4588 RVA: 0x00046E47 File Offset: 0x00045047
		[DataSourceProperty]
		public string VillagesText
		{
			get
			{
				return this._villagesText;
			}
			set
			{
				if (value != this._villagesText)
				{
					this._villagesText = value;
					base.OnPropertyChangedWithValue<string>(value, "VillagesText");
				}
			}
		}

		// Token: 0x170005EE RID: 1518
		// (get) Token: 0x060011ED RID: 4589 RVA: 0x00046E6A File Offset: 0x0004506A
		// (set) Token: 0x060011EE RID: 4590 RVA: 0x00046E72 File Offset: 0x00045072
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

		// Token: 0x170005EF RID: 1519
		// (get) Token: 0x060011EF RID: 4591 RVA: 0x00046E95 File Offset: 0x00045095
		// (set) Token: 0x060011F0 RID: 4592 RVA: 0x00046E9D File Offset: 0x0004509D
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

		// Token: 0x170005F0 RID: 1520
		// (get) Token: 0x060011F1 RID: 4593 RVA: 0x00046EC0 File Offset: 0x000450C0
		// (set) Token: 0x060011F2 RID: 4594 RVA: 0x00046EC8 File Offset: 0x000450C8
		[DataSourceProperty]
		public string DescriptorText
		{
			get
			{
				return this._descriptorText;
			}
			set
			{
				if (value != this._descriptorText)
				{
					this._descriptorText = value;
					base.OnPropertyChangedWithValue<string>(value, "DescriptorText");
				}
			}
		}

		// Token: 0x170005F1 RID: 1521
		// (get) Token: 0x060011F3 RID: 4595 RVA: 0x00046EEB File Offset: 0x000450EB
		// (set) Token: 0x060011F4 RID: 4596 RVA: 0x00046EF3 File Offset: 0x000450F3
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

		// Token: 0x170005F2 RID: 1522
		// (get) Token: 0x060011F5 RID: 4597 RVA: 0x00046F16 File Offset: 0x00045116
		// (set) Token: 0x060011F6 RID: 4598 RVA: 0x00046F1E File Offset: 0x0004511E
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

		// Token: 0x170005F3 RID: 1523
		// (get) Token: 0x060011F7 RID: 4599 RVA: 0x00046F41 File Offset: 0x00045141
		// (set) Token: 0x060011F8 RID: 4600 RVA: 0x00046F49 File Offset: 0x00045149
		[DataSourceProperty]
		public HintViewModel ProsperityHint
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
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ProsperityHint");
				}
			}
		}

		// Token: 0x170005F4 RID: 1524
		// (get) Token: 0x060011F9 RID: 4601 RVA: 0x00046F67 File Offset: 0x00045167
		// (set) Token: 0x060011FA RID: 4602 RVA: 0x00046F6F File Offset: 0x0004516F
		[DataSourceProperty]
		public HintViewModel StrengthHint
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
					base.OnPropertyChangedWithValue<HintViewModel>(value, "StrengthHint");
				}
			}
		}

		// Token: 0x0400083F RID: 2111
		private readonly IFaction _faction;

		// Token: 0x04000840 RID: 2112
		private readonly Clan _clan;

		// Token: 0x04000841 RID: 2113
		private MBBindingList<StringPairItemVM> _clanInfo;

		// Token: 0x04000842 RID: 2114
		private MBBindingList<HeroVM> _members;

		// Token: 0x04000843 RID: 2115
		private MBBindingList<EncyclopediaFactionVM> _enemies;

		// Token: 0x04000844 RID: 2116
		private MBBindingList<EncyclopediaSettlementVM> _settlements;

		// Token: 0x04000845 RID: 2117
		private MBBindingList<EncyclopediaHistoryEventVM> _history;

		// Token: 0x04000846 RID: 2118
		private HeroVM _leader;

		// Token: 0x04000847 RID: 2119
		private ImageIdentifierVM _banner;

		// Token: 0x04000848 RID: 2120
		private string _membersText;

		// Token: 0x04000849 RID: 2121
		private string _enemiesText;

		// Token: 0x0400084A RID: 2122
		private string _alliesText;

		// Token: 0x0400084B RID: 2123
		private string _settlementsText;

		// Token: 0x0400084C RID: 2124
		private string _villagesText;

		// Token: 0x0400084D RID: 2125
		private string _leaderText;

		// Token: 0x0400084E RID: 2126
		private string _descriptorText;

		// Token: 0x0400084F RID: 2127
		private string _informationText;

		// Token: 0x04000850 RID: 2128
		private string _prosperityText;

		// Token: 0x04000851 RID: 2129
		private string _strengthText;

		// Token: 0x04000852 RID: 2130
		private string _destroyedText;

		// Token: 0x04000853 RID: 2131
		private string _partOfText;

		// Token: 0x04000854 RID: 2132
		private string _tierText;

		// Token: 0x04000855 RID: 2133
		private string _infoText;

		// Token: 0x04000856 RID: 2134
		private HintViewModel _prosperityHint;

		// Token: 0x04000857 RID: 2135
		private HintViewModel _strengthHint;

		// Token: 0x04000858 RID: 2136
		private EncyclopediaFactionVM _parentKingdom;

		// Token: 0x04000859 RID: 2137
		private string _nameText;

		// Token: 0x0400085A RID: 2138
		private bool _hasParentKingdom;

		// Token: 0x0400085B RID: 2139
		private bool _isClanDestroyed;
	}
}
