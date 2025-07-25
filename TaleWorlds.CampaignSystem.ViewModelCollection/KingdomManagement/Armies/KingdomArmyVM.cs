using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Armies
{
	// Token: 0x0200007B RID: 123
	public class KingdomArmyVM : KingdomCategoryVM
	{
		// Token: 0x06000AE5 RID: 2789 RVA: 0x0002B4F0 File Offset: 0x000296F0
		public KingdomArmyVM(Action onManageArmy, Action refreshDecision, Action<Army> showArmyOnMap)
		{
			this._onManageArmy = onManageArmy;
			this._refreshDecision = refreshDecision;
			this._showArmyOnMap = showArmyOnMap;
			this._viewDataTracker = Campaign.Current.GetCampaignBehavior<IViewDataTracker>();
			this._armies = new MBBindingList<KingdomArmyItemVM>();
			this.PlayerHasArmy = (MobileParty.MainParty.Army != null);
			this.ChangeLeaderCost = Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfChangingLeaderOfArmy();
			this.DisbandCost = Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfDisbandingArmy();
			this.CreateArmyHint = new HintViewModel();
			this.DisbandHint = new HintViewModel();
			this.ManageArmyHint = new HintViewModel();
			base.IsAcceptableItemSelected = false;
			this.RefreshArmyList();
			this.ArmySortController = new KingdomArmySortControllerVM(ref this._armies);
			this.RefreshValues();
		}

		// Token: 0x06000AE6 RID: 2790 RVA: 0x0002B5C0 File Offset: 0x000297C0
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.ArmyNameText = GameTexts.FindText("str_sort_by_army_name_label", null).ToString();
			this.LeaderText = GameTexts.FindText("str_sort_by_leader_name_label", null).ToString();
			this.StrengthText = GameTexts.FindText("str_men_numbersign", null).ToString();
			this.LocationText = GameTexts.FindText("str_tooltip_label_location", null).ToString();
			base.NoItemSelectedText = GameTexts.FindText("str_kingdom_no_army_selected", null).ToString();
			this.DisbandActionExplanationText = GameTexts.FindText("str_kingdom_disband_army_explanation", null).ToString();
			this.ManageActionExplanationText = GameTexts.FindText("str_kingdom_manage_army_explanation", null).ToString();
			this.ManageText = GameTexts.FindText("str_manage", null).ToString();
			this.CreateArmyText = (this.PlayerHasArmy ? new TextObject("{=DAmdTxuC}Army Manage", null).ToString() : new TextObject("{=lc9s4rLZ}Create Army", null).ToString());
			base.CategoryNameText = new TextObject("{=j12VrGKz}Army", null).ToString();
			this.ChangeLeaderText = new TextObject("{=NcYbdiyT}Change Leader", null).ToString();
			this.PartiesText = new TextObject("{=t3tq0eoW}Parties", null).ToString();
			this.DisbandText = new TextObject("{=xXSFaGW8}Disband", null).ToString();
			this.ShowOnMapText = GameTexts.FindText("str_show_on_map", null).ToString();
			this.CreateArmyText = new TextObject("{=lc9s4rLZ}Create Army", null).ToString();
			this.Armies.ApplyActionOnAllItems(delegate(KingdomArmyItemVM x)
			{
				x.RefreshValues();
			});
			KingdomArmyItemVM currentSelectedArmy = this.CurrentSelectedArmy;
			if (currentSelectedArmy == null)
			{
				return;
			}
			currentSelectedArmy.RefreshValues();
		}

		// Token: 0x06000AE7 RID: 2791 RVA: 0x0002B774 File Offset: 0x00029974
		public void RefreshArmyList()
		{
			base.NotificationCount = this._viewDataTracker.NumOfKingdomArmyNotifications;
			this._kingdom = (Hero.MainHero.MapFaction as Kingdom);
			if (this._kingdom != null)
			{
				this.Armies.Clear();
				using (List<Army>.Enumerator enumerator = this._kingdom.Armies.GetEnumerator())
				{
					while (enumerator.MoveNext())
					{
						Army army = enumerator.Current;
						this.Armies.Add(new KingdomArmyItemVM(army, new Action<KingdomArmyItemVM>(this.OnSelection)));
					}
					goto IL_A0;
				}
			}
			Debug.FailedAssert("Kingdom screen can't open if you're not in kingdom", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem.ViewModelCollection\\KingdomManagement\\Armies\\KingdomArmyVM.cs", "RefreshArmyList", 81);
			IL_A0:
			this.RefreshCanManageArmy();
			if (this.Armies.Count == 0 && this.CurrentSelectedArmy != null)
			{
				this.OnSelection(null);
				return;
			}
			if (this.Armies.Count > 0)
			{
				this.OnSelection(this.Armies[0]);
				this.CurrentSelectedArmy.IsSelected = true;
			}
		}

		// Token: 0x06000AE8 RID: 2792 RVA: 0x0002B880 File Offset: 0x00029A80
		private void ExecuteManageArmy()
		{
			this._onManageArmy();
		}

		// Token: 0x06000AE9 RID: 2793 RVA: 0x0002B88D File Offset: 0x00029A8D
		private void ExecuteShowOnMap()
		{
			if (this.CurrentSelectedArmy != null)
			{
				this._showArmyOnMap(this.CurrentSelectedArmy.Army);
			}
		}

		// Token: 0x06000AEA RID: 2794 RVA: 0x0002B8B0 File Offset: 0x00029AB0
		private void RefreshCurrentArmyVisuals(KingdomArmyItemVM item)
		{
			if (item != null)
			{
				if (this.CurrentSelectedArmy != null)
				{
					this.CurrentSelectedArmy.IsSelected = false;
				}
				this.CanManageCurrentArmy = false;
				this.CurrentSelectedArmy = item;
				base.NotificationCount = this._viewDataTracker.NumOfKingdomArmyNotifications;
				this.DisbandCost = Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfDisbandingArmy();
				this.ChangeLeaderCost = Campaign.Current.Models.DiplomacyModel.GetInfluenceCostOfChangingLeaderOfArmy();
				TextObject hintText;
				this.CanDisbandCurrentArmy = this.GetCanDisbandCurrentArmyWithReason(item, this.DisbandCost, out hintText);
				this.DisbandHint.HintText = hintText;
				this.DisbandActionExplanationText = GameTexts.FindText("str_kingdom_disband_army_explanation", null).ToString();
				if (this.CurrentSelectedArmy != null)
				{
					this.CanShowLocationOfCurrentArmy = (this.CurrentSelectedArmy.Army.AiBehaviorObject is Settlement || this.CurrentSelectedArmy.Army.AiBehaviorObject is MobileParty);
					TextObject hintText2;
					this.CanManageCurrentArmy = this.GetCanManageCurrentArmyWithReason(out hintText2);
					this.ManageArmyHint.HintText = hintText2;
				}
			}
		}

		// Token: 0x06000AEB RID: 2795 RVA: 0x0002B9BC File Offset: 0x00029BBC
		private bool GetCanManageCurrentArmyWithReason(out TextObject disabledReason)
		{
			if (Hero.MainHero.IsPrisoner)
			{
				disabledReason = GameTexts.FindText("str_action_disabled_reason_prisoner", null);
				return false;
			}
			if (PlayerEncounter.Current != null)
			{
				if (PlayerEncounter.EncounterSettlement == null)
				{
					disabledReason = GameTexts.FindText("str_action_disabled_reason_encounter", null);
					return false;
				}
				Village village = PlayerEncounter.EncounterSettlement.Village;
				if (village != null && village.VillageState == Village.VillageStates.BeingRaided && MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.IsRaid)
				{
					disabledReason = GameTexts.FindText("str_action_disabled_reason_raid", null);
					return false;
				}
			}
			KingdomArmyItemVM currentSelectedArmy = this.CurrentSelectedArmy;
			if (currentSelectedArmy == null || !currentSelectedArmy.IsMainArmy)
			{
				disabledReason = TextObject.Empty;
				return false;
			}
			disabledReason = TextObject.Empty;
			return true;
		}

		// Token: 0x06000AEC RID: 2796 RVA: 0x0002BA70 File Offset: 0x00029C70
		private bool GetCanDisbandCurrentArmyWithReason(KingdomArmyItemVM armyItem, int disbandCost, out TextObject disabledReason)
		{
			TextObject textObject;
			if (!CampaignUIHelper.GetMapScreenActionIsEnabledWithReason(out textObject))
			{
				disabledReason = textObject;
				return false;
			}
			if (Clan.PlayerClan.IsUnderMercenaryService)
			{
				disabledReason = GameTexts.FindText("str_cannot_disband_army_while_mercenary", null);
				return false;
			}
			if (Clan.PlayerClan.Influence < (float)disbandCost)
			{
				disabledReason = GameTexts.FindText("str_warning_you_dont_have_enough_influence", null);
				return false;
			}
			if (armyItem.Army.LeaderParty.MapEvent != null)
			{
				disabledReason = GameTexts.FindText("str_cannot_disband_army_while_in_event", null);
				return false;
			}
			if (armyItem.Army.Parties.Contains(MobileParty.MainParty))
			{
				disabledReason = GameTexts.FindText("str_cannot_disband_army_while_in_that_army", null);
				return false;
			}
			disabledReason = TextObject.Empty;
			return true;
		}

		// Token: 0x06000AED RID: 2797 RVA: 0x0002BB14 File Offset: 0x00029D14
		public void SelectArmy(Army army)
		{
			foreach (KingdomArmyItemVM kingdomArmyItemVM in this.Armies)
			{
				if (kingdomArmyItemVM.Army == army)
				{
					this.OnSelection(kingdomArmyItemVM);
					break;
				}
			}
		}

		// Token: 0x06000AEE RID: 2798 RVA: 0x0002BB6C File Offset: 0x00029D6C
		private void OnSelection(KingdomArmyItemVM item)
		{
			if (this.CurrentSelectedArmy != item)
			{
				this.RefreshCurrentArmyVisuals(item);
				this.CurrentSelectedArmy = item;
				base.IsAcceptableItemSelected = (item != null);
			}
		}

		// Token: 0x06000AEF RID: 2799 RVA: 0x0002BB90 File Offset: 0x00029D90
		private void ExecuteDisbandCurrentArmy()
		{
			if (this.CurrentSelectedArmy != null && Hero.MainHero.Clan.Influence >= (float)this.DisbandCost)
			{
				InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_disband_army", null).ToString(), new TextObject("{=zrhr4rDA}Are you sure you want to disband this army? This will result in relation loss.", null).ToString(), true, true, GameTexts.FindText("str_yes", null).ToString(), GameTexts.FindText("str_no", null).ToString(), new Action(this.DisbandCurrentArmy), null, "", 0f, null, null, null), false, false);
			}
		}

		// Token: 0x06000AF0 RID: 2800 RVA: 0x0002BC28 File Offset: 0x00029E28
		private void DisbandCurrentArmy()
		{
			if (this.CurrentSelectedArmy != null && Hero.MainHero.Clan.Influence >= (float)this.DisbandCost)
			{
				DisbandArmyAction.ApplyByReleasedByPlayerAfterBattle(this.CurrentSelectedArmy.Army);
				this.RefreshArmyList();
			}
		}

		// Token: 0x06000AF1 RID: 2801 RVA: 0x0002BC60 File Offset: 0x00029E60
		private void RefreshCanManageArmy()
		{
			TextObject hintText;
			bool mapScreenActionIsEnabledWithReason = CampaignUIHelper.GetMapScreenActionIsEnabledWithReason(out hintText);
			this.PlayerHasArmy = (MobileParty.MainParty.Army != null);
			bool flag = this._kingdom != null;
			bool isUnderMercenaryService = Clan.PlayerClan.IsUnderMercenaryService;
			bool flag2 = this.PlayerHasArmy && MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty;
			this.CanCreateArmy = (mapScreenActionIsEnabledWithReason && flag && !isUnderMercenaryService && !this.PlayerHasArmy);
			if (!flag)
			{
				this.CreateArmyHint.HintText = new TextObject("{=XSQ0Y9gy}You need to be a part of a kingdom to create an army.", null);
				return;
			}
			if (isUnderMercenaryService)
			{
				this.CreateArmyHint.HintText = new TextObject("{=aRhQzJca}Mercenaries cannot create or manage armies.", null);
				return;
			}
			if (this.PlayerHasArmy && !flag2)
			{
				this.CreateArmyHint.HintText = new TextObject("{=NAA4pajB}You need to leave your current army to create a new one.", null);
				return;
			}
			if (!mapScreenActionIsEnabledWithReason)
			{
				this.CreateArmyHint.HintText = hintText;
				return;
			}
			this.CreateArmyHint.HintText = TextObject.Empty;
		}

		// Token: 0x1700038B RID: 907
		// (get) Token: 0x06000AF2 RID: 2802 RVA: 0x0002BD51 File Offset: 0x00029F51
		// (set) Token: 0x06000AF3 RID: 2803 RVA: 0x0002BD59 File Offset: 0x00029F59
		[DataSourceProperty]
		public KingdomArmySortControllerVM ArmySortController
		{
			get
			{
				return this._armySortController;
			}
			set
			{
				if (value != this._armySortController)
				{
					this._armySortController = value;
					base.OnPropertyChangedWithValue<KingdomArmySortControllerVM>(value, "ArmySortController");
				}
			}
		}

		// Token: 0x1700038C RID: 908
		// (get) Token: 0x06000AF4 RID: 2804 RVA: 0x0002BD77 File Offset: 0x00029F77
		// (set) Token: 0x06000AF5 RID: 2805 RVA: 0x0002BD7F File Offset: 0x00029F7F
		[DataSourceProperty]
		public string CreateArmyText
		{
			get
			{
				return this._createArmyText;
			}
			set
			{
				if (value != this._createArmyText)
				{
					this._createArmyText = value;
					base.OnPropertyChangedWithValue<string>(value, "CreateArmyText");
				}
			}
		}

		// Token: 0x1700038D RID: 909
		// (get) Token: 0x06000AF6 RID: 2806 RVA: 0x0002BDA2 File Offset: 0x00029FA2
		// (set) Token: 0x06000AF7 RID: 2807 RVA: 0x0002BDAA File Offset: 0x00029FAA
		[DataSourceProperty]
		public string DisbandActionExplanationText
		{
			get
			{
				return this._disbandActionExplanationText;
			}
			set
			{
				if (value != this._disbandActionExplanationText)
				{
					this._disbandActionExplanationText = value;
					base.OnPropertyChangedWithValue<string>(value, "DisbandActionExplanationText");
				}
			}
		}

		// Token: 0x1700038E RID: 910
		// (get) Token: 0x06000AF8 RID: 2808 RVA: 0x0002BDCD File Offset: 0x00029FCD
		// (set) Token: 0x06000AF9 RID: 2809 RVA: 0x0002BDD5 File Offset: 0x00029FD5
		[DataSourceProperty]
		public string ManageActionExplanationText
		{
			get
			{
				return this._manageActionExplanationText;
			}
			set
			{
				if (value != this._manageActionExplanationText)
				{
					this._manageActionExplanationText = value;
					base.OnPropertyChangedWithValue<string>(value, "ManageActionExplanationText");
				}
			}
		}

		// Token: 0x1700038F RID: 911
		// (get) Token: 0x06000AFA RID: 2810 RVA: 0x0002BDF8 File Offset: 0x00029FF8
		// (set) Token: 0x06000AFB RID: 2811 RVA: 0x0002BE00 File Offset: 0x0002A000
		[DataSourceProperty]
		public KingdomArmyItemVM CurrentSelectedArmy
		{
			get
			{
				return this._currentSelectedArmy;
			}
			set
			{
				if (value != this._currentSelectedArmy)
				{
					this._currentSelectedArmy = value;
					base.OnPropertyChangedWithValue<KingdomArmyItemVM>(value, "CurrentSelectedArmy");
				}
			}
		}

		// Token: 0x17000390 RID: 912
		// (get) Token: 0x06000AFC RID: 2812 RVA: 0x0002BE1E File Offset: 0x0002A01E
		// (set) Token: 0x06000AFD RID: 2813 RVA: 0x0002BE26 File Offset: 0x0002A026
		[DataSourceProperty]
		public HintViewModel CreateArmyHint
		{
			get
			{
				return this._createArmyHint;
			}
			set
			{
				if (value != this._createArmyHint)
				{
					this._createArmyHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "CreateArmyHint");
				}
			}
		}

		// Token: 0x17000391 RID: 913
		// (get) Token: 0x06000AFE RID: 2814 RVA: 0x0002BE44 File Offset: 0x0002A044
		// (set) Token: 0x06000AFF RID: 2815 RVA: 0x0002BE4C File Offset: 0x0002A04C
		[DataSourceProperty]
		public HintViewModel ManageArmyHint
		{
			get
			{
				return this._manageArmyHint;
			}
			set
			{
				if (value != this._manageArmyHint)
				{
					this._manageArmyHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ManageArmyHint");
				}
			}
		}

		// Token: 0x17000392 RID: 914
		// (get) Token: 0x06000B00 RID: 2816 RVA: 0x0002BE6A File Offset: 0x0002A06A
		// (set) Token: 0x06000B01 RID: 2817 RVA: 0x0002BE72 File Offset: 0x0002A072
		[DataSourceProperty]
		public bool PlayerHasArmy
		{
			get
			{
				return this._playerHasArmy;
			}
			set
			{
				if (value != this._playerHasArmy)
				{
					this._playerHasArmy = value;
					base.OnPropertyChangedWithValue(value, "PlayerHasArmy");
				}
			}
		}

		// Token: 0x17000393 RID: 915
		// (get) Token: 0x06000B02 RID: 2818 RVA: 0x0002BE90 File Offset: 0x0002A090
		// (set) Token: 0x06000B03 RID: 2819 RVA: 0x0002BE98 File Offset: 0x0002A098
		[DataSourceProperty]
		public bool CanCreateArmy
		{
			get
			{
				return this._canCreateArmy;
			}
			set
			{
				if (value != this._canCreateArmy)
				{
					this._canCreateArmy = value;
					base.OnPropertyChangedWithValue(value, "CanCreateArmy");
				}
			}
		}

		// Token: 0x17000394 RID: 916
		// (get) Token: 0x06000B04 RID: 2820 RVA: 0x0002BEB6 File Offset: 0x0002A0B6
		// (set) Token: 0x06000B05 RID: 2821 RVA: 0x0002BEBE File Offset: 0x0002A0BE
		[DataSourceProperty]
		public string LeaderText
		{
			get
			{
				return this._categoryLeaderName;
			}
			set
			{
				if (value != this._categoryLeaderName)
				{
					this._categoryLeaderName = value;
					base.OnPropertyChanged("CategoryLeaderName");
				}
			}
		}

		// Token: 0x17000395 RID: 917
		// (get) Token: 0x06000B06 RID: 2822 RVA: 0x0002BEE0 File Offset: 0x0002A0E0
		// (set) Token: 0x06000B07 RID: 2823 RVA: 0x0002BEE8 File Offset: 0x0002A0E8
		[DataSourceProperty]
		public string ShowOnMapText
		{
			get
			{
				return this._showOnMapText;
			}
			set
			{
				if (value != this._showOnMapText)
				{
					this._showOnMapText = value;
					base.OnPropertyChangedWithValue<string>(value, "ShowOnMapText");
				}
			}
		}

		// Token: 0x17000396 RID: 918
		// (get) Token: 0x06000B08 RID: 2824 RVA: 0x0002BF0B File Offset: 0x0002A10B
		// (set) Token: 0x06000B09 RID: 2825 RVA: 0x0002BF13 File Offset: 0x0002A113
		[DataSourceProperty]
		public string ArmyNameText
		{
			get
			{
				return this._categoryLordCount;
			}
			set
			{
				if (value != this._categoryLordCount)
				{
					this._categoryLordCount = value;
					base.OnPropertyChanged("CategoryLordCount");
				}
			}
		}

		// Token: 0x17000397 RID: 919
		// (get) Token: 0x06000B0A RID: 2826 RVA: 0x0002BF35 File Offset: 0x0002A135
		// (set) Token: 0x06000B0B RID: 2827 RVA: 0x0002BF3D File Offset: 0x0002A13D
		[DataSourceProperty]
		public string StrengthText
		{
			get
			{
				return this._categoryStrength;
			}
			set
			{
				if (value != this._categoryStrength)
				{
					this._categoryStrength = value;
					base.OnPropertyChanged("CategoryStrength");
				}
			}
		}

		// Token: 0x17000398 RID: 920
		// (get) Token: 0x06000B0C RID: 2828 RVA: 0x0002BF5F File Offset: 0x0002A15F
		// (set) Token: 0x06000B0D RID: 2829 RVA: 0x0002BF67 File Offset: 0x0002A167
		[DataSourceProperty]
		public string PartiesText
		{
			get
			{
				return this._categoryParties;
			}
			set
			{
				if (value != this._categoryParties)
				{
					this._categoryParties = value;
					base.OnPropertyChangedWithValue<string>(value, "PartiesText");
				}
			}
		}

		// Token: 0x17000399 RID: 921
		// (get) Token: 0x06000B0E RID: 2830 RVA: 0x0002BF8A File Offset: 0x0002A18A
		// (set) Token: 0x06000B0F RID: 2831 RVA: 0x0002BF92 File Offset: 0x0002A192
		[DataSourceProperty]
		public string LocationText
		{
			get
			{
				return this._categoryObjective;
			}
			set
			{
				if (value != this._categoryObjective)
				{
					this._categoryObjective = value;
					base.OnPropertyChanged("CategoryObjective");
				}
			}
		}

		// Token: 0x1700039A RID: 922
		// (get) Token: 0x06000B10 RID: 2832 RVA: 0x0002BFB4 File Offset: 0x0002A1B4
		// (set) Token: 0x06000B11 RID: 2833 RVA: 0x0002BFBC File Offset: 0x0002A1BC
		[DataSourceProperty]
		public MBBindingList<KingdomArmyItemVM> Armies
		{
			get
			{
				return this._armies;
			}
			set
			{
				if (value != this._armies)
				{
					this._armies = value;
					base.OnPropertyChangedWithValue<MBBindingList<KingdomArmyItemVM>>(value, "Armies");
				}
			}
		}

		// Token: 0x1700039B RID: 923
		// (get) Token: 0x06000B12 RID: 2834 RVA: 0x0002BFDA File Offset: 0x0002A1DA
		// (set) Token: 0x06000B13 RID: 2835 RVA: 0x0002BFE2 File Offset: 0x0002A1E2
		[DataSourceProperty]
		public bool CanDisbandCurrentArmy
		{
			get
			{
				return this._canDisbandCurrentArmy;
			}
			set
			{
				if (value != this._canDisbandCurrentArmy)
				{
					this._canDisbandCurrentArmy = value;
					base.OnPropertyChangedWithValue(value, "CanDisbandCurrentArmy");
				}
			}
		}

		// Token: 0x1700039C RID: 924
		// (get) Token: 0x06000B14 RID: 2836 RVA: 0x0002C000 File Offset: 0x0002A200
		// (set) Token: 0x06000B15 RID: 2837 RVA: 0x0002C008 File Offset: 0x0002A208
		[DataSourceProperty]
		public bool CanManageCurrentArmy
		{
			get
			{
				return this._canManageCurrentArmy;
			}
			set
			{
				if (value != this._canManageCurrentArmy)
				{
					this._canManageCurrentArmy = value;
					base.OnPropertyChangedWithValue(value, "CanManageCurrentArmy");
				}
			}
		}

		// Token: 0x1700039D RID: 925
		// (get) Token: 0x06000B16 RID: 2838 RVA: 0x0002C026 File Offset: 0x0002A226
		// (set) Token: 0x06000B17 RID: 2839 RVA: 0x0002C02E File Offset: 0x0002A22E
		[DataSourceProperty]
		public bool CanChangeLeaderOfCurrentArmy
		{
			get
			{
				return this._canChangeLeaderOfCurrentArmy;
			}
			set
			{
				if (value != this._canChangeLeaderOfCurrentArmy)
				{
					this._canChangeLeaderOfCurrentArmy = value;
					base.OnPropertyChangedWithValue(value, "CanChangeLeaderOfCurrentArmy");
				}
			}
		}

		// Token: 0x1700039E RID: 926
		// (get) Token: 0x06000B18 RID: 2840 RVA: 0x0002C04C File Offset: 0x0002A24C
		// (set) Token: 0x06000B19 RID: 2841 RVA: 0x0002C054 File Offset: 0x0002A254
		[DataSourceProperty]
		public bool CanShowLocationOfCurrentArmy
		{
			get
			{
				return this._canShowLocationOfCurrentArmy;
			}
			set
			{
				if (value != this._canShowLocationOfCurrentArmy)
				{
					this._canShowLocationOfCurrentArmy = value;
					base.OnPropertyChangedWithValue(value, "CanShowLocationOfCurrentArmy");
				}
			}
		}

		// Token: 0x1700039F RID: 927
		// (get) Token: 0x06000B1A RID: 2842 RVA: 0x0002C072 File Offset: 0x0002A272
		// (set) Token: 0x06000B1B RID: 2843 RVA: 0x0002C07A File Offset: 0x0002A27A
		[DataSourceProperty]
		public string DisbandText
		{
			get
			{
				return this._disbandText;
			}
			set
			{
				if (value != this._disbandText)
				{
					this._disbandText = value;
					base.OnPropertyChangedWithValue<string>(value, "DisbandText");
				}
			}
		}

		// Token: 0x170003A0 RID: 928
		// (get) Token: 0x06000B1C RID: 2844 RVA: 0x0002C09D File Offset: 0x0002A29D
		// (set) Token: 0x06000B1D RID: 2845 RVA: 0x0002C0A5 File Offset: 0x0002A2A5
		[DataSourceProperty]
		public string ManageText
		{
			get
			{
				return this._manageText;
			}
			set
			{
				if (value != this._manageText)
				{
					this._manageText = value;
					base.OnPropertyChangedWithValue<string>(value, "ManageText");
				}
			}
		}

		// Token: 0x170003A1 RID: 929
		// (get) Token: 0x06000B1E RID: 2846 RVA: 0x0002C0C8 File Offset: 0x0002A2C8
		// (set) Token: 0x06000B1F RID: 2847 RVA: 0x0002C0D0 File Offset: 0x0002A2D0
		[DataSourceProperty]
		public int DisbandCost
		{
			get
			{
				return this._disbandCost;
			}
			set
			{
				if (value != this._disbandCost)
				{
					this._disbandCost = value;
					base.OnPropertyChangedWithValue(value, "DisbandCost");
				}
			}
		}

		// Token: 0x170003A2 RID: 930
		// (get) Token: 0x06000B20 RID: 2848 RVA: 0x0002C0EE File Offset: 0x0002A2EE
		// (set) Token: 0x06000B21 RID: 2849 RVA: 0x0002C0F6 File Offset: 0x0002A2F6
		[DataSourceProperty]
		public string ChangeLeaderText
		{
			get
			{
				return this._changeLeaderText;
			}
			set
			{
				if (value != this._changeLeaderText)
				{
					this._changeLeaderText = value;
					base.OnPropertyChangedWithValue<string>(value, "ChangeLeaderText");
				}
			}
		}

		// Token: 0x170003A3 RID: 931
		// (get) Token: 0x06000B22 RID: 2850 RVA: 0x0002C119 File Offset: 0x0002A319
		// (set) Token: 0x06000B23 RID: 2851 RVA: 0x0002C121 File Offset: 0x0002A321
		[DataSourceProperty]
		public int ChangeLeaderCost
		{
			get
			{
				return this._changeLeaderCost;
			}
			set
			{
				if (value != this._changeLeaderCost)
				{
					this._changeLeaderCost = value;
					base.OnPropertyChangedWithValue(value, "ChangeLeaderCost");
				}
			}
		}

		// Token: 0x170003A4 RID: 932
		// (get) Token: 0x06000B24 RID: 2852 RVA: 0x0002C13F File Offset: 0x0002A33F
		// (set) Token: 0x06000B25 RID: 2853 RVA: 0x0002C147 File Offset: 0x0002A347
		[DataSourceProperty]
		public HintViewModel DisbandHint
		{
			get
			{
				return this._disbandHint;
			}
			set
			{
				if (value != this._disbandHint)
				{
					this._disbandHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "DisbandHint");
				}
			}
		}

		// Token: 0x040004EC RID: 1260
		private readonly Action _onManageArmy;

		// Token: 0x040004ED RID: 1261
		private readonly Action _refreshDecision;

		// Token: 0x040004EE RID: 1262
		private readonly Action<Army> _showArmyOnMap;

		// Token: 0x040004EF RID: 1263
		private readonly IViewDataTracker _viewDataTracker;

		// Token: 0x040004F0 RID: 1264
		private Kingdom _kingdom;

		// Token: 0x040004F1 RID: 1265
		private MBBindingList<KingdomArmyItemVM> _armies;

		// Token: 0x040004F2 RID: 1266
		private KingdomArmyItemVM _currentSelectedArmy;

		// Token: 0x040004F3 RID: 1267
		private HintViewModel _disbandHint;

		// Token: 0x040004F4 RID: 1268
		private string _categoryLeaderName;

		// Token: 0x040004F5 RID: 1269
		private string _categoryLordCount;

		// Token: 0x040004F6 RID: 1270
		private string _categoryStrength;

		// Token: 0x040004F7 RID: 1271
		private string _categoryObjective;

		// Token: 0x040004F8 RID: 1272
		private string _categoryParties;

		// Token: 0x040004F9 RID: 1273
		private string _createArmyText;

		// Token: 0x040004FA RID: 1274
		private string _disbandText;

		// Token: 0x040004FB RID: 1275
		private string _manageText;

		// Token: 0x040004FC RID: 1276
		private string _changeLeaderText;

		// Token: 0x040004FD RID: 1277
		private string _showOnMapText;

		// Token: 0x040004FE RID: 1278
		private string _disbandActionExplanationText;

		// Token: 0x040004FF RID: 1279
		private string _manageActionExplanationText;

		// Token: 0x04000500 RID: 1280
		private bool _canCreateArmy;

		// Token: 0x04000501 RID: 1281
		private bool _playerHasArmy;

		// Token: 0x04000502 RID: 1282
		private HintViewModel _createArmyHint;

		// Token: 0x04000503 RID: 1283
		private HintViewModel _manageArmyHint;

		// Token: 0x04000504 RID: 1284
		private bool _canChangeLeaderOfCurrentArmy;

		// Token: 0x04000505 RID: 1285
		private bool _canDisbandCurrentArmy;

		// Token: 0x04000506 RID: 1286
		private bool _canShowLocationOfCurrentArmy;

		// Token: 0x04000507 RID: 1287
		private bool _canManageCurrentArmy;

		// Token: 0x04000508 RID: 1288
		private int _disbandCost;

		// Token: 0x04000509 RID: 1289
		private int _changeLeaderCost;

		// Token: 0x0400050A RID: 1290
		private KingdomArmySortControllerVM _armySortController;
	}
}
