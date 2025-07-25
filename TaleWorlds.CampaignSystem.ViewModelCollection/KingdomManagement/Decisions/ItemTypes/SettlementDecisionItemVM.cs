using System;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions.ItemTypes
{
	// Token: 0x02000073 RID: 115
	public class SettlementDecisionItemVM : DecisionItemBaseVM
	{
		// Token: 0x1700032B RID: 811
		// (get) Token: 0x060009EA RID: 2538 RVA: 0x00028C54 File Offset: 0x00026E54
		public Settlement Settlement
		{
			get
			{
				if (this._settlementDecision == null && this._settlementPreliminaryDecision == null)
				{
					SettlementClaimantDecision settlementDecision;
					SettlementClaimantPreliminaryDecision settlementPreliminaryDecision;
					if ((settlementDecision = (this._decision as SettlementClaimantDecision)) != null)
					{
						this._settlementDecision = settlementDecision;
					}
					else if ((settlementPreliminaryDecision = (this._decision as SettlementClaimantPreliminaryDecision)) != null)
					{
						this._settlementPreliminaryDecision = settlementPreliminaryDecision;
					}
				}
				if (this._settlementDecision == null)
				{
					return this._settlementPreliminaryDecision.Settlement;
				}
				return this._settlementDecision.Settlement;
			}
		}

		// Token: 0x060009EB RID: 2539 RVA: 0x00028CBE File Offset: 0x00026EBE
		public SettlementDecisionItemVM(Settlement settlement, KingdomDecision decision, Action onDecisionOver) : base(decision, onDecisionOver)
		{
			this._settlement = settlement;
			base.DecisionType = 1;
		}

		// Token: 0x060009EC RID: 2540 RVA: 0x00028CD8 File Offset: 0x00026ED8
		protected override void InitValues()
		{
			base.InitValues();
			base.DecisionType = 1;
			this.SettlementImageID = ((this.Settlement.SettlementComponent != null) ? this.Settlement.SettlementComponent.WaitMeshName : "");
			this.BoundVillages = new MBBindingList<EncyclopediaSettlementVM>();
			this.NotableCharacters = new MBBindingList<HeroVM>();
			this.SettlementName = this.Settlement.Name.ToString();
			Town town = this.Settlement.Town;
			this.Governor = new HeroVM((town != null) ? town.Governor : null, false);
			foreach (Village village in this.Settlement.BoundVillages)
			{
				this.BoundVillages.Add(new EncyclopediaSettlementVM(village.Settlement));
			}
			Town town2 = this.Settlement.Town;
			this.WallsText = town2.GetWallLevel().ToString();
			this.WallsHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownWallsTooltip(this.Settlement.Town));
			this.HasNotables = (this.Settlement.Notables.Count > 0);
			if (!this.Settlement.IsCastle)
			{
				Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Hero));
				foreach (Hero hero in this.Settlement.Notables)
				{
					this.NotableCharacters.Add(new HeroVM(hero, false));
				}
			}
			this.DescriptorText = this.Settlement.Culture.Name.ToString();
			this.DetailsText = GameTexts.FindText("str_people_encyclopedia_details", null).ToString();
			this.OwnerText = GameTexts.FindText("str_owner", null).ToString();
			this.Owner = new HeroVM(this.Settlement.OwnerClan.Leader, false);
			SettlementComponent settlementComponent = this.Settlement.SettlementComponent;
			this.SettlementPath = settlementComponent.BackgroundMeshName;
			this.SettlementCropPosition = (double)settlementComponent.BackgroundCropPosition;
			this.NotableCharactersText = GameTexts.FindText("str_notable_characters", null).ToString();
			this.BoundSettlementText = GameTexts.FindText("str_villages", null).ToString();
			if (this.HasBoundSettlement)
			{
				GameTexts.SetVariable("SETTLEMENT_LINK", this.Settlement.Village.Bound.EncyclopediaLinkWithName);
				this.BoundSettlementText = GameTexts.FindText("str_bound_settlement_encyclopedia", null).ToString();
			}
			this.MilitasText = ((int)this.Settlement.Militia).ToString();
			this.MilitasHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownMilitiaTooltip(this.Settlement.Town));
			this.ProsperityText = ((this.Settlement.Town != null) ? ((int)this.Settlement.Town.Prosperity).ToString() : (this.Settlement.IsVillage ? ((int)this.Settlement.Village.Hearth).ToString() : string.Empty));
			if (this.Settlement.IsTown)
			{
				this.ProsperityHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownProsperityTooltip(this.Settlement.Town));
			}
			else
			{
				this.ProsperityHint = new BasicTooltipViewModel(() => GameTexts.FindText("str_prosperity", null).ToString());
			}
			if (this.Settlement.Town != null)
			{
				this.LoyaltyHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownLoyaltyTooltip(this.Settlement.Town));
				this.LoyaltyText = string.Format("{0:0.#}", this.Settlement.Town.Loyalty);
				this.SecurityHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownSecurityTooltip(this.Settlement.Town));
				this.SecurityText = string.Format("{0:0.#}", this.Settlement.Town.Security);
			}
			else
			{
				this.LoyaltyText = "-";
				this.SecurityText = "-";
			}
			Town town3 = this.Settlement.Town;
			this.FoodText = ((town3 != null) ? town3.FoodStocks.ToString("0.0") : null);
			if (this.Settlement.IsFortification)
			{
				this.FoodHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownFoodTooltip(this.Settlement.Town));
				MobileParty garrisonParty = this.Settlement.Town.GarrisonParty;
				this.GarrisonText = (((garrisonParty != null) ? garrisonParty.Party.NumberOfAllMembers.ToString() : null) ?? "0");
				this.GarrisonHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTownGarrisonTooltip(this.Settlement.Town));
				return;
			}
			this.FoodHint = new BasicTooltipViewModel();
			this.GarrisonText = "-";
		}

		// Token: 0x1700032C RID: 812
		// (get) Token: 0x060009ED RID: 2541 RVA: 0x000291B8 File Offset: 0x000273B8
		// (set) Token: 0x060009EE RID: 2542 RVA: 0x000291C0 File Offset: 0x000273C0
		[DataSourceProperty]
		public bool HasBoundSettlement
		{
			get
			{
				return this._hasBoundSettlement;
			}
			set
			{
				if (value != this._hasBoundSettlement)
				{
					this._hasBoundSettlement = value;
					base.OnPropertyChangedWithValue(value, "HasBoundSettlement");
				}
			}
		}

		// Token: 0x1700032D RID: 813
		// (get) Token: 0x060009EF RID: 2543 RVA: 0x000291DE File Offset: 0x000273DE
		// (set) Token: 0x060009F0 RID: 2544 RVA: 0x000291E6 File Offset: 0x000273E6
		[DataSourceProperty]
		public double SettlementCropPosition
		{
			get
			{
				return this._settlementCropPosition;
			}
			set
			{
				if (value != this._settlementCropPosition)
				{
					this._settlementCropPosition = value;
					base.OnPropertyChangedWithValue(value, "SettlementCropPosition");
				}
			}
		}

		// Token: 0x1700032E RID: 814
		// (get) Token: 0x060009F1 RID: 2545 RVA: 0x00029204 File Offset: 0x00027404
		// (set) Token: 0x060009F2 RID: 2546 RVA: 0x0002920C File Offset: 0x0002740C
		[DataSourceProperty]
		public string BoundSettlementText
		{
			get
			{
				return this._boundSettlementText;
			}
			set
			{
				if (value != this._boundSettlementText)
				{
					this._boundSettlementText = value;
					base.OnPropertyChangedWithValue<string>(value, "BoundSettlementText");
				}
			}
		}

		// Token: 0x1700032F RID: 815
		// (get) Token: 0x060009F3 RID: 2547 RVA: 0x0002922F File Offset: 0x0002742F
		// (set) Token: 0x060009F4 RID: 2548 RVA: 0x00029237 File Offset: 0x00027437
		[DataSourceProperty]
		public string DetailsText
		{
			get
			{
				return this._detailsText;
			}
			set
			{
				if (value != this._detailsText)
				{
					this._detailsText = value;
					base.OnPropertyChangedWithValue<string>(value, "DetailsText");
				}
			}
		}

		// Token: 0x17000330 RID: 816
		// (get) Token: 0x060009F5 RID: 2549 RVA: 0x0002925A File Offset: 0x0002745A
		// (set) Token: 0x060009F6 RID: 2550 RVA: 0x00029262 File Offset: 0x00027462
		[DataSourceProperty]
		public string SettlementPath
		{
			get
			{
				return this._settlementPath;
			}
			set
			{
				if (value != this._settlementPath)
				{
					this._settlementPath = value;
					base.OnPropertyChangedWithValue<string>(value, "SettlementPath");
				}
			}
		}

		// Token: 0x17000331 RID: 817
		// (get) Token: 0x060009F7 RID: 2551 RVA: 0x00029285 File Offset: 0x00027485
		// (set) Token: 0x060009F8 RID: 2552 RVA: 0x0002928D File Offset: 0x0002748D
		[DataSourceProperty]
		public string SettlementName
		{
			get
			{
				return this._settlementName;
			}
			set
			{
				if (value != this._settlementName)
				{
					this._settlementName = value;
					base.OnPropertyChangedWithValue<string>(value, "SettlementName");
				}
			}
		}

		// Token: 0x17000332 RID: 818
		// (get) Token: 0x060009F9 RID: 2553 RVA: 0x000292B0 File Offset: 0x000274B0
		// (set) Token: 0x060009FA RID: 2554 RVA: 0x000292B8 File Offset: 0x000274B8
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

		// Token: 0x17000333 RID: 819
		// (get) Token: 0x060009FB RID: 2555 RVA: 0x000292DB File Offset: 0x000274DB
		// (set) Token: 0x060009FC RID: 2556 RVA: 0x000292E3 File Offset: 0x000274E3
		[DataSourceProperty]
		public HeroVM Owner
		{
			get
			{
				return this._owner;
			}
			set
			{
				if (value != this._owner)
				{
					this._owner = value;
					base.OnPropertyChangedWithValue<HeroVM>(value, "Owner");
				}
			}
		}

		// Token: 0x17000334 RID: 820
		// (get) Token: 0x060009FD RID: 2557 RVA: 0x00029301 File Offset: 0x00027501
		// (set) Token: 0x060009FE RID: 2558 RVA: 0x00029309 File Offset: 0x00027509
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

		// Token: 0x17000335 RID: 821
		// (get) Token: 0x060009FF RID: 2559 RVA: 0x0002932C File Offset: 0x0002752C
		// (set) Token: 0x06000A00 RID: 2560 RVA: 0x00029334 File Offset: 0x00027534
		[DataSourceProperty]
		public string SettlementImageID
		{
			get
			{
				return this._settlementImageID;
			}
			set
			{
				if (value != this._settlementImageID)
				{
					this._settlementImageID = value;
					base.OnPropertyChangedWithValue<string>(value, "SettlementImageID");
				}
			}
		}

		// Token: 0x17000336 RID: 822
		// (get) Token: 0x06000A01 RID: 2561 RVA: 0x00029357 File Offset: 0x00027557
		// (set) Token: 0x06000A02 RID: 2562 RVA: 0x0002935F File Offset: 0x0002755F
		[DataSourceProperty]
		public string NotableCharactersText
		{
			get
			{
				return this._notableCharactersText;
			}
			set
			{
				if (value != this._notableCharactersText)
				{
					this._notableCharactersText = value;
					base.OnPropertyChangedWithValue<string>(value, "NotableCharactersText");
				}
			}
		}

		// Token: 0x17000337 RID: 823
		// (get) Token: 0x06000A03 RID: 2563 RVA: 0x00029382 File Offset: 0x00027582
		// (set) Token: 0x06000A04 RID: 2564 RVA: 0x0002938A File Offset: 0x0002758A
		[DataSourceProperty]
		public MBBindingList<EncyclopediaSettlementVM> BoundVillages
		{
			get
			{
				return this._boundVillages;
			}
			set
			{
				if (value != this._boundVillages)
				{
					this._boundVillages = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaSettlementVM>>(value, "BoundVillages");
				}
			}
		}

		// Token: 0x17000338 RID: 824
		// (get) Token: 0x06000A05 RID: 2565 RVA: 0x000293A8 File Offset: 0x000275A8
		// (set) Token: 0x06000A06 RID: 2566 RVA: 0x000293B0 File Offset: 0x000275B0
		[DataSourceProperty]
		public MBBindingList<HeroVM> NotableCharacters
		{
			get
			{
				return this._notableCharacters;
			}
			set
			{
				if (value != this._notableCharacters)
				{
					this._notableCharacters = value;
					base.OnPropertyChangedWithValue<MBBindingList<HeroVM>>(value, "NotableCharacters");
				}
			}
		}

		// Token: 0x17000339 RID: 825
		// (get) Token: 0x06000A07 RID: 2567 RVA: 0x000293CE File Offset: 0x000275CE
		// (set) Token: 0x06000A08 RID: 2568 RVA: 0x000293D6 File Offset: 0x000275D6
		[DataSourceProperty]
		public BasicTooltipViewModel MilitasHint
		{
			get
			{
				return this._militasHint;
			}
			set
			{
				if (value != this._militasHint)
				{
					this._militasHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "MilitasHint");
				}
			}
		}

		// Token: 0x1700033A RID: 826
		// (get) Token: 0x06000A09 RID: 2569 RVA: 0x000293F4 File Offset: 0x000275F4
		// (set) Token: 0x06000A0A RID: 2570 RVA: 0x000293FC File Offset: 0x000275FC
		[DataSourceProperty]
		public BasicTooltipViewModel FoodHint
		{
			get
			{
				return this._foodHint;
			}
			set
			{
				if (value != this._foodHint)
				{
					this._foodHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "FoodHint");
				}
			}
		}

		// Token: 0x1700033B RID: 827
		// (get) Token: 0x06000A0B RID: 2571 RVA: 0x0002941A File Offset: 0x0002761A
		// (set) Token: 0x06000A0C RID: 2572 RVA: 0x00029422 File Offset: 0x00027622
		[DataSourceProperty]
		public BasicTooltipViewModel GarrisonHint
		{
			get
			{
				return this._garrisonHint;
			}
			set
			{
				if (value != this._garrisonHint)
				{
					this._garrisonHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "GarrisonHint");
				}
			}
		}

		// Token: 0x1700033C RID: 828
		// (get) Token: 0x06000A0D RID: 2573 RVA: 0x00029440 File Offset: 0x00027640
		// (set) Token: 0x06000A0E RID: 2574 RVA: 0x00029448 File Offset: 0x00027648
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

		// Token: 0x1700033D RID: 829
		// (get) Token: 0x06000A0F RID: 2575 RVA: 0x00029466 File Offset: 0x00027666
		// (set) Token: 0x06000A10 RID: 2576 RVA: 0x0002946E File Offset: 0x0002766E
		[DataSourceProperty]
		public BasicTooltipViewModel LoyaltyHint
		{
			get
			{
				return this._loyaltyHint;
			}
			set
			{
				if (value != this._loyaltyHint)
				{
					this._loyaltyHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "LoyaltyHint");
				}
			}
		}

		// Token: 0x1700033E RID: 830
		// (get) Token: 0x06000A11 RID: 2577 RVA: 0x0002948C File Offset: 0x0002768C
		// (set) Token: 0x06000A12 RID: 2578 RVA: 0x00029494 File Offset: 0x00027694
		[DataSourceProperty]
		public BasicTooltipViewModel SecurityHint
		{
			get
			{
				return this._securityHint;
			}
			set
			{
				if (value != this._securityHint)
				{
					this._securityHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "SecurityHint");
				}
			}
		}

		// Token: 0x1700033F RID: 831
		// (get) Token: 0x06000A13 RID: 2579 RVA: 0x000294B2 File Offset: 0x000276B2
		// (set) Token: 0x06000A14 RID: 2580 RVA: 0x000294BA File Offset: 0x000276BA
		[DataSourceProperty]
		public BasicTooltipViewModel WallsHint
		{
			get
			{
				return this._wallsHint;
			}
			set
			{
				if (value != this._wallsHint)
				{
					this._wallsHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "WallsHint");
				}
			}
		}

		// Token: 0x17000340 RID: 832
		// (get) Token: 0x06000A15 RID: 2581 RVA: 0x000294D8 File Offset: 0x000276D8
		// (set) Token: 0x06000A16 RID: 2582 RVA: 0x000294E0 File Offset: 0x000276E0
		[DataSourceProperty]
		public string MilitasText
		{
			get
			{
				return this._militasText;
			}
			set
			{
				if (value != this._militasText)
				{
					this._militasText = value;
					base.OnPropertyChangedWithValue<string>(value, "MilitasText");
				}
			}
		}

		// Token: 0x17000341 RID: 833
		// (get) Token: 0x06000A17 RID: 2583 RVA: 0x00029503 File Offset: 0x00027703
		// (set) Token: 0x06000A18 RID: 2584 RVA: 0x0002950B File Offset: 0x0002770B
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

		// Token: 0x17000342 RID: 834
		// (get) Token: 0x06000A19 RID: 2585 RVA: 0x0002952E File Offset: 0x0002772E
		// (set) Token: 0x06000A1A RID: 2586 RVA: 0x00029536 File Offset: 0x00027736
		[DataSourceProperty]
		public string LoyaltyText
		{
			get
			{
				return this._loyaltyText;
			}
			set
			{
				if (value != this._loyaltyText)
				{
					this._loyaltyText = value;
					base.OnPropertyChangedWithValue<string>(value, "LoyaltyText");
				}
			}
		}

		// Token: 0x17000343 RID: 835
		// (get) Token: 0x06000A1B RID: 2587 RVA: 0x00029559 File Offset: 0x00027759
		// (set) Token: 0x06000A1C RID: 2588 RVA: 0x00029561 File Offset: 0x00027761
		[DataSourceProperty]
		public string SecurityText
		{
			get
			{
				return this._securityText;
			}
			set
			{
				if (value != this._securityText)
				{
					this._securityText = value;
					base.OnPropertyChangedWithValue<string>(value, "SecurityText");
				}
			}
		}

		// Token: 0x17000344 RID: 836
		// (get) Token: 0x06000A1D RID: 2589 RVA: 0x00029584 File Offset: 0x00027784
		// (set) Token: 0x06000A1E RID: 2590 RVA: 0x0002958C File Offset: 0x0002778C
		[DataSourceProperty]
		public string WallsText
		{
			get
			{
				return this._wallsText;
			}
			set
			{
				if (value != this._wallsText)
				{
					this._wallsText = value;
					base.OnPropertyChangedWithValue<string>(value, "WallsText");
				}
			}
		}

		// Token: 0x17000345 RID: 837
		// (get) Token: 0x06000A1F RID: 2591 RVA: 0x000295AF File Offset: 0x000277AF
		// (set) Token: 0x06000A20 RID: 2592 RVA: 0x000295B7 File Offset: 0x000277B7
		[DataSourceProperty]
		public string FoodText
		{
			get
			{
				return this._foodText;
			}
			set
			{
				if (value != this._foodText)
				{
					this._foodText = value;
					base.OnPropertyChangedWithValue<string>(value, "FoodText");
				}
			}
		}

		// Token: 0x17000346 RID: 838
		// (get) Token: 0x06000A21 RID: 2593 RVA: 0x000295DA File Offset: 0x000277DA
		// (set) Token: 0x06000A22 RID: 2594 RVA: 0x000295E2 File Offset: 0x000277E2
		[DataSourceProperty]
		public string GarrisonText
		{
			get
			{
				return this._garrisonText;
			}
			set
			{
				if (value != this._garrisonText)
				{
					this._garrisonText = value;
					base.OnPropertyChangedWithValue<string>(value, "GarrisonText");
				}
			}
		}

		// Token: 0x17000347 RID: 839
		// (get) Token: 0x06000A23 RID: 2595 RVA: 0x00029605 File Offset: 0x00027805
		// (set) Token: 0x06000A24 RID: 2596 RVA: 0x0002960D File Offset: 0x0002780D
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

		// Token: 0x17000348 RID: 840
		// (get) Token: 0x06000A25 RID: 2597 RVA: 0x00029630 File Offset: 0x00027830
		// (set) Token: 0x06000A26 RID: 2598 RVA: 0x00029638 File Offset: 0x00027838
		[DataSourceProperty]
		public string OwnerText
		{
			get
			{
				return this._ownerText;
			}
			set
			{
				if (value != this._ownerText)
				{
					this._ownerText = value;
					base.OnPropertyChangedWithValue<string>(value, "OwnerText");
				}
			}
		}

		// Token: 0x17000349 RID: 841
		// (get) Token: 0x06000A27 RID: 2599 RVA: 0x0002965B File Offset: 0x0002785B
		// (set) Token: 0x06000A28 RID: 2600 RVA: 0x00029663 File Offset: 0x00027863
		[DataSourceProperty]
		public HeroVM Governor
		{
			get
			{
				return this._governor;
			}
			set
			{
				if (value != this._governor)
				{
					this._governor = value;
					base.OnPropertyChangedWithValue<HeroVM>(value, "Governor");
				}
			}
		}

		// Token: 0x1700034A RID: 842
		// (get) Token: 0x06000A29 RID: 2601 RVA: 0x00029681 File Offset: 0x00027881
		// (set) Token: 0x06000A2A RID: 2602 RVA: 0x00029689 File Offset: 0x00027889
		[DataSourceProperty]
		public bool HasNotables
		{
			get
			{
				return this._hasNotables;
			}
			set
			{
				if (value != this._hasNotables)
				{
					this._hasNotables = value;
					base.OnPropertyChangedWithValue(value, "HasNotables");
				}
			}
		}

		// Token: 0x04000475 RID: 1141
		private SettlementClaimantDecision _settlementDecision;

		// Token: 0x04000476 RID: 1142
		private SettlementClaimantPreliminaryDecision _settlementPreliminaryDecision;

		// Token: 0x04000477 RID: 1143
		private Settlement _settlement;

		// Token: 0x04000478 RID: 1144
		private string _settlementName;

		// Token: 0x04000479 RID: 1145
		private HeroVM _governor;

		// Token: 0x0400047A RID: 1146
		private MBBindingList<EncyclopediaSettlementVM> _boundVillages;

		// Token: 0x0400047B RID: 1147
		private MBBindingList<HeroVM> _notableCharacters;

		// Token: 0x0400047C RID: 1148
		private BasicTooltipViewModel _militasHint;

		// Token: 0x0400047D RID: 1149
		private BasicTooltipViewModel _prosperityHint;

		// Token: 0x0400047E RID: 1150
		private BasicTooltipViewModel _loyaltyHint;

		// Token: 0x0400047F RID: 1151
		private BasicTooltipViewModel _securityHint;

		// Token: 0x04000480 RID: 1152
		private BasicTooltipViewModel _wallsHint;

		// Token: 0x04000481 RID: 1153
		private BasicTooltipViewModel _garrisonHint;

		// Token: 0x04000482 RID: 1154
		private BasicTooltipViewModel _foodHint;

		// Token: 0x04000483 RID: 1155
		private HeroVM _owner;

		// Token: 0x04000484 RID: 1156
		private string _ownerText;

		// Token: 0x04000485 RID: 1157
		private string _militasText;

		// Token: 0x04000486 RID: 1158
		private string _garrisonText;

		// Token: 0x04000487 RID: 1159
		private string _prosperityText;

		// Token: 0x04000488 RID: 1160
		private string _loyaltyText;

		// Token: 0x04000489 RID: 1161
		private string _securityText;

		// Token: 0x0400048A RID: 1162
		private string _wallsText;

		// Token: 0x0400048B RID: 1163
		private string _foodText;

		// Token: 0x0400048C RID: 1164
		private string _descriptorText;

		// Token: 0x0400048D RID: 1165
		private string _villagesText;

		// Token: 0x0400048E RID: 1166
		private string _notableCharactersText;

		// Token: 0x0400048F RID: 1167
		private string _settlementPath;

		// Token: 0x04000490 RID: 1168
		private string _informationText;

		// Token: 0x04000491 RID: 1169
		private string _settlementImageID;

		// Token: 0x04000492 RID: 1170
		private string _boundSettlementText;

		// Token: 0x04000493 RID: 1171
		private string _detailsText;

		// Token: 0x04000494 RID: 1172
		private double _settlementCropPosition;

		// Token: 0x04000495 RID: 1173
		private bool _hasBoundSettlement;

		// Token: 0x04000496 RID: 1174
		private bool _hasNotables;
	}
}
