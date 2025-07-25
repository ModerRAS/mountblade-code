using System;
using System.Collections.Generic;
using Helpers;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.Categories;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Library.Information;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement
{
	// Token: 0x0200010A RID: 266
	public class ClanManagementVM : ViewModel
	{
		// Token: 0x060018D9 RID: 6361 RVA: 0x0005AC78 File Offset: 0x00058E78
		public ClanManagementVM(Action onClose, Action<Hero> showHeroOnMap, Action<Hero> openPartyAsManage, Action openBannerEditor)
		{
			this._onClose = onClose;
			this._openPartyAsManage = openPartyAsManage;
			this._openBannerEditor = openBannerEditor;
			this._showHeroOnMap = showHeroOnMap;
			this._clan = Hero.MainHero.Clan;
			this.CardSelectionPopup = new ClanCardSelectionPopupVM();
			this.ClanMembers = new ClanMembersVM(new Action(this.RefreshCategoryValues), this._showHeroOnMap);
			this.ClanFiefs = new ClanFiefsVM(new Action(this.RefreshCategoryValues), new Action<ClanCardSelectionInfo>(this.CardSelectionPopup.Open));
			this.ClanParties = new ClanPartiesVM(new Action(this.OnAnyExpenseChange), this._openPartyAsManage, new Action(this.RefreshCategoryValues), new Action<ClanCardSelectionInfo>(this.CardSelectionPopup.Open));
			this.ClanIncome = new ClanIncomeVM(new Action(this.RefreshCategoryValues), new Action<ClanCardSelectionInfo>(this.CardSelectionPopup.Open));
			this._categoryCount = 4;
			this.SetSelectedCategory(0);
			this.Leader = new HeroVM(this._clan.Leader, false);
			this.CurrentRenown = (int)Clan.PlayerClan.Renown;
			this.CurrentTier = Clan.PlayerClan.Tier;
			TextObject textObject;
			if (Campaign.Current.Models.ClanTierModel.HasUpcomingTier(Clan.PlayerClan, out textObject, false).Item2)
			{
				this.NextTierRenown = Clan.PlayerClan.RenownRequirementForNextTier;
				this.MinRenownForCurrentTier = Campaign.Current.Models.ClanTierModel.GetRequiredRenownForTier(this.CurrentTier);
				this.NextTier = Clan.PlayerClan.Tier + 1;
				this.IsRenownProgressComplete = false;
			}
			else
			{
				this.NextTierRenown = 1;
				this.MinRenownForCurrentTier = 1;
				this.NextTier = 0;
				this.IsRenownProgressComplete = true;
			}
			this.CurrentRenownOverPreviousTier = this.CurrentRenown - this.MinRenownForCurrentTier;
			this.CurrentTierRenownRange = this.NextTierRenown - this.MinRenownForCurrentTier;
			this.RenownHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetClanRenownTooltip(Clan.PlayerClan));
			this.GoldChangeTooltip = CampaignUIHelper.GetDenarTooltip();
			this.RefreshDailyValues();
			this.CanChooseBanner = true;
			TextObject hintText;
			this.PlayerCanChangeClanName = this.GetPlayerCanChangeClanNameWithReason(out hintText);
			this.ChangeClanNameHint = new HintViewModel(hintText, null);
			this.TutorialNotification = new ElementNotificationVM();
			this.UpdateKingdomRelatedProperties();
			Game.Current.EventManager.RegisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
		}

		// Token: 0x060018DA RID: 6362 RVA: 0x0005AEF0 File Offset: 0x000590F0
		private bool GetPlayerCanChangeClanNameWithReason(out TextObject disabledReason)
		{
			TextObject textObject;
			if (!CampaignUIHelper.GetMapScreenActionIsEnabledWithReason(out textObject))
			{
				disabledReason = textObject;
				return false;
			}
			if (this._clan.Leader != Hero.MainHero)
			{
				disabledReason = new TextObject("{=GCaYjA5W}You need to be the leader of the clan to change it's name.", null);
				return false;
			}
			disabledReason = TextObject.Empty;
			return true;
		}

		// Token: 0x060018DB RID: 6363 RVA: 0x0005AF34 File Offset: 0x00059134
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.Name = Hero.MainHero.Clan.Name.ToString();
			this.CurrentGoldText = GameTexts.FindText("str_clan_finance_current_gold", null).ToString();
			this.TotalExpensesText = GameTexts.FindText("str_clan_finance_total_expenses", null).ToString();
			this.TotalIncomeText = GameTexts.FindText("str_clan_finance_total_income", null).ToString();
			this.DailyChangeText = GameTexts.FindText("str_clan_finance_daily_change", null).ToString();
			this.ExpectedGoldText = GameTexts.FindText("str_clan_finance_expected", null).ToString();
			this.ExpenseText = GameTexts.FindText("str_clan_expenses", null).ToString();
			this.MembersText = GameTexts.FindText("str_members", null).ToString();
			this.PartiesText = GameTexts.FindText("str_parties", null).ToString();
			this.IncomeText = GameTexts.FindText("str_other", null).ToString();
			this.FiefsText = GameTexts.FindText("str_fiefs", null).ToString();
			this.DoneLbl = GameTexts.FindText("str_done", null).ToString();
			this.LeaderText = GameTexts.FindText("str_sort_by_leader_name_label", null).ToString();
			this.FinanceText = GameTexts.FindText("str_finance", null).ToString();
			GameTexts.SetVariable("TIER", Clan.PlayerClan.Tier);
			this.CurrentRenownText = GameTexts.FindText("str_clan_tier", null).ToString();
			ElementNotificationVM tutorialNotification = this.TutorialNotification;
			if (tutorialNotification != null)
			{
				tutorialNotification.RefreshValues();
			}
			ClanMembersVM clanMembers = this._clanMembers;
			if (clanMembers != null)
			{
				clanMembers.RefreshValues();
			}
			ClanPartiesVM clanParties = this._clanParties;
			if (clanParties != null)
			{
				clanParties.RefreshValues();
			}
			ClanFiefsVM clanFiefs = this._clanFiefs;
			if (clanFiefs != null)
			{
				clanFiefs.RefreshValues();
			}
			ClanIncomeVM clanIncome = this._clanIncome;
			if (clanIncome != null)
			{
				clanIncome.RefreshValues();
			}
			HeroVM leader = this._leader;
			if (leader == null)
			{
				return;
			}
			leader.RefreshValues();
		}

		// Token: 0x060018DC RID: 6364 RVA: 0x0005B10E File Offset: 0x0005930E
		public void SelectHero(Hero hero)
		{
			this.SetSelectedCategory(0);
			this.ClanMembers.SelectMember(hero);
		}

		// Token: 0x060018DD RID: 6365 RVA: 0x0005B123 File Offset: 0x00059323
		public void SelectParty(PartyBase party)
		{
			this.SetSelectedCategory(1);
			this.ClanParties.SelectParty(party);
		}

		// Token: 0x060018DE RID: 6366 RVA: 0x0005B138 File Offset: 0x00059338
		public void SelectSettlement(Settlement settlement)
		{
			this.SetSelectedCategory(2);
			this.ClanFiefs.SelectFief(settlement);
		}

		// Token: 0x060018DF RID: 6367 RVA: 0x0005B14D File Offset: 0x0005934D
		public void SelectWorkshop(Workshop workshop)
		{
			this.SetSelectedCategory(3);
			this.ClanIncome.SelectWorkshop(workshop);
		}

		// Token: 0x060018E0 RID: 6368 RVA: 0x0005B162 File Offset: 0x00059362
		public void SelectAlley(Alley alley)
		{
			this.SetSelectedCategory(3);
			this.ClanIncome.SelectAlley(alley);
		}

		// Token: 0x060018E1 RID: 6369 RVA: 0x0005B178 File Offset: 0x00059378
		public void SelectPreviousCategory()
		{
			int selectedCategory = (this._currentCategory == 0) ? (this._categoryCount - 1) : (this._currentCategory - 1);
			this.SetSelectedCategory(selectedCategory);
		}

		// Token: 0x060018E2 RID: 6370 RVA: 0x0005B1A8 File Offset: 0x000593A8
		public void SelectNextCategory()
		{
			int selectedCategory = (this._currentCategory + 1) % this._categoryCount;
			this.SetSelectedCategory(selectedCategory);
		}

		// Token: 0x060018E3 RID: 6371 RVA: 0x0005B1CC File Offset: 0x000593CC
		public void ExecuteOpenBannerEditor()
		{
			this._openBannerEditor();
		}

		// Token: 0x060018E4 RID: 6372 RVA: 0x0005B1D9 File Offset: 0x000593D9
		public void UpdateBannerVisuals()
		{
			this.ClanBanner = new ImageIdentifierVM(BannerCode.CreateFrom(this._clan.Banner), true);
			this.ClanBannerHint = new HintViewModel(new TextObject("{=t1lSXN9O}Your clan's standard carried into battle", null), null);
			this.RefreshValues();
		}

		// Token: 0x060018E5 RID: 6373 RVA: 0x0005B214 File Offset: 0x00059414
		public void SetSelectedCategory(int index)
		{
			this.ClanMembers.IsSelected = false;
			this.ClanParties.IsSelected = false;
			this.ClanFiefs.IsSelected = false;
			this.ClanIncome.IsSelected = false;
			this._currentCategory = index;
			if (index == 0)
			{
				this.ClanMembers.IsSelected = true;
			}
			else if (index == 1)
			{
				this.ClanParties.IsSelected = true;
			}
			else if (index == 2)
			{
				this.ClanFiefs.IsSelected = true;
			}
			else
			{
				this._currentCategory = 3;
				this.ClanIncome.IsSelected = true;
			}
			this.IsMembersSelected = this.ClanMembers.IsSelected;
			this.IsPartiesSelected = this.ClanParties.IsSelected;
			this.IsFiefsSelected = this.ClanFiefs.IsSelected;
			this.IsIncomeSelected = this.ClanIncome.IsSelected;
		}

		// Token: 0x060018E6 RID: 6374 RVA: 0x0005B2E4 File Offset: 0x000594E4
		private void UpdateKingdomRelatedProperties()
		{
			this.ClanIsInAKingdom = (this._clan.Kingdom != null);
			if (this.ClanIsInAKingdom)
			{
				if (this._clan.Kingdom.RulingClan == this._clan)
				{
					this.IsKingdomActionEnabled = false;
					this.KingdomActionDisabledReasonHint = new BasicTooltipViewModel(() => new TextObject("{=vIPrZCZ1}You can abdicate leadership from the kingdom screen.", null).ToString());
					this.KingdomActionText = GameTexts.FindText("str_abdicate_leadership", null).ToString();
				}
				else
				{
					this.IsKingdomActionEnabled = (MobileParty.MainParty.Army == null);
					this.KingdomActionText = GameTexts.FindText("str_leave_kingdom", null).ToString();
					this.KingdomActionDisabledReasonHint = new BasicTooltipViewModel();
				}
			}
			else
			{
				List<TextObject> kingdomCreationDisabledReasons;
				this.IsKingdomActionEnabled = Campaign.Current.Models.KingdomCreationModel.IsPlayerKingdomCreationPossible(out kingdomCreationDisabledReasons);
				this.KingdomActionText = GameTexts.FindText("str_create_kingdom", null).ToString();
				this.KingdomActionDisabledReasonHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetHintTextFromReasons(kingdomCreationDisabledReasons));
			}
			this.UpdateBannerVisuals();
		}

		// Token: 0x060018E7 RID: 6375 RVA: 0x0005B408 File Offset: 0x00059608
		public void RefreshDailyValues()
		{
			if (this.ClanIncome != null)
			{
				this.CurrentGold = Hero.MainHero.Gold;
				this.TotalIncome = (int)Campaign.Current.Models.ClanFinanceModel.CalculateClanIncome(this._clan, false, false, false).ResultNumber;
				this.TotalExpenses = (int)Campaign.Current.Models.ClanFinanceModel.CalculateClanExpenses(this._clan, false, false, false).ResultNumber;
				this.DailyChange = MathF.Abs(this.TotalIncome) - MathF.Abs(this.TotalExpenses);
				this.ExpectedGold = this.CurrentGold + this.DailyChange;
				if (this.TotalIncome == 0)
				{
					this.TotalIncomeValueText = GameTexts.FindText("str_clan_finance_value_zero", null).ToString();
				}
				else
				{
					GameTexts.SetVariable("IS_POSITIVE", (this.TotalIncome > 0) ? 1 : 0);
					GameTexts.SetVariable("NUMBER", MathF.Abs(this.TotalIncome));
					this.TotalIncomeValueText = GameTexts.FindText("str_clan_finance_value", null).ToString();
				}
				if (this.TotalExpenses == 0)
				{
					this.TotalExpensesValueText = GameTexts.FindText("str_clan_finance_value_zero", null).ToString();
				}
				else
				{
					GameTexts.SetVariable("IS_POSITIVE", (this.TotalExpenses > 0) ? 1 : 0);
					GameTexts.SetVariable("NUMBER", MathF.Abs(this.TotalExpenses));
					this.TotalExpensesValueText = GameTexts.FindText("str_clan_finance_value", null).ToString();
				}
				if (this.DailyChange == 0)
				{
					this.DailyChangeValueText = GameTexts.FindText("str_clan_finance_value_zero", null).ToString();
					return;
				}
				GameTexts.SetVariable("IS_POSITIVE", (this.DailyChange > 0) ? 1 : 0);
				GameTexts.SetVariable("NUMBER", MathF.Abs(this.DailyChange));
				this.DailyChangeValueText = GameTexts.FindText("str_clan_finance_value", null).ToString();
			}
		}

		// Token: 0x060018E8 RID: 6376 RVA: 0x0005B5DD File Offset: 0x000597DD
		public void RefreshCategoryValues()
		{
			this.ClanFiefs.RefreshAllLists();
			this.ClanMembers.RefreshMembersList();
			this.ClanParties.RefreshPartiesList();
			this.ClanIncome.RefreshList();
		}

		// Token: 0x060018E9 RID: 6377 RVA: 0x0005B60C File Offset: 0x0005980C
		public void ExecuteChangeClanName()
		{
			GameTexts.SetVariable("MAX_LETTER_COUNT", 50);
			GameTexts.SetVariable("MIN_LETTER_COUNT", 1);
			InformationManager.ShowTextInquiry(new TextInquiryData(GameTexts.FindText("str_change_clan_name", null).ToString(), string.Empty, true, true, GameTexts.FindText("str_done", null).ToString(), GameTexts.FindText("str_cancel", null).ToString(), new Action<string>(this.OnChangeClanNameDone), null, false, new Func<string, Tuple<bool, string>>(FactionHelper.IsClanNameApplicable), "", ""), false, false);
		}

		// Token: 0x060018EA RID: 6378 RVA: 0x0005B698 File Offset: 0x00059898
		private void OnChangeClanNameDone(string newClanName)
		{
			TextObject textObject = GameTexts.FindText("str_generic_clan_name", null);
			textObject.SetTextVariable("CLAN_NAME", new TextObject(newClanName, null));
			this._clan.InitializeClan(textObject, textObject, this._clan.Culture, this._clan.Banner, default(Vec2), false);
			this.RefreshCategoryValues();
			this.RefreshValues();
		}

		// Token: 0x060018EB RID: 6379 RVA: 0x0005B6FD File Offset: 0x000598FD
		private void OnAnyExpenseChange()
		{
			this.RefreshDailyValues();
		}

		// Token: 0x060018EC RID: 6380 RVA: 0x0005B705 File Offset: 0x00059905
		public void ExecuteClose()
		{
			this._onClose();
		}

		// Token: 0x060018ED RID: 6381 RVA: 0x0005B714 File Offset: 0x00059914
		public override void OnFinalize()
		{
			base.OnFinalize();
			this.ClanFiefs.OnFinalize();
			this.DoneInputKey.OnFinalize();
			this.PreviousTabInputKey.OnFinalize();
			this.NextTabInputKey.OnFinalize();
			this.CardSelectionPopup.OnFinalize();
			this.ClanMembers.OnFinalize();
			this.ClanParties.OnFinalize();
			Game.Current.EventManager.UnregisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
		}

		// Token: 0x17000877 RID: 2167
		// (get) Token: 0x060018EE RID: 6382 RVA: 0x0005B78F File Offset: 0x0005998F
		// (set) Token: 0x060018EF RID: 6383 RVA: 0x0005B797 File Offset: 0x00059997
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

		// Token: 0x17000878 RID: 2168
		// (get) Token: 0x060018F0 RID: 6384 RVA: 0x0005B7B5 File Offset: 0x000599B5
		// (set) Token: 0x060018F1 RID: 6385 RVA: 0x0005B7BD File Offset: 0x000599BD
		[DataSourceProperty]
		public ImageIdentifierVM ClanBanner
		{
			get
			{
				return this._clanBanner;
			}
			set
			{
				if (value != this._clanBanner)
				{
					this._clanBanner = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "ClanBanner");
				}
			}
		}

		// Token: 0x17000879 RID: 2169
		// (get) Token: 0x060018F2 RID: 6386 RVA: 0x0005B7DB File Offset: 0x000599DB
		// (set) Token: 0x060018F3 RID: 6387 RVA: 0x0005B7E3 File Offset: 0x000599E3
		[DataSourceProperty]
		public ClanCardSelectionPopupVM CardSelectionPopup
		{
			get
			{
				return this._cardSelectionPopup;
			}
			set
			{
				if (value != this._cardSelectionPopup)
				{
					this._cardSelectionPopup = value;
					base.OnPropertyChangedWithValue<ClanCardSelectionPopupVM>(value, "CardSelectionPopup");
				}
			}
		}

		// Token: 0x1700087A RID: 2170
		// (get) Token: 0x060018F4 RID: 6388 RVA: 0x0005B801 File Offset: 0x00059A01
		// (set) Token: 0x060018F5 RID: 6389 RVA: 0x0005B809 File Offset: 0x00059A09
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

		// Token: 0x1700087B RID: 2171
		// (get) Token: 0x060018F6 RID: 6390 RVA: 0x0005B82C File Offset: 0x00059A2C
		// (set) Token: 0x060018F7 RID: 6391 RVA: 0x0005B834 File Offset: 0x00059A34
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

		// Token: 0x1700087C RID: 2172
		// (get) Token: 0x060018F8 RID: 6392 RVA: 0x0005B857 File Offset: 0x00059A57
		// (set) Token: 0x060018F9 RID: 6393 RVA: 0x0005B85F File Offset: 0x00059A5F
		[DataSourceProperty]
		public ClanMembersVM ClanMembers
		{
			get
			{
				return this._clanMembers;
			}
			set
			{
				if (value != this._clanMembers)
				{
					this._clanMembers = value;
					base.OnPropertyChangedWithValue<ClanMembersVM>(value, "ClanMembers");
				}
			}
		}

		// Token: 0x1700087D RID: 2173
		// (get) Token: 0x060018FA RID: 6394 RVA: 0x0005B87D File Offset: 0x00059A7D
		// (set) Token: 0x060018FB RID: 6395 RVA: 0x0005B885 File Offset: 0x00059A85
		[DataSourceProperty]
		public ClanPartiesVM ClanParties
		{
			get
			{
				return this._clanParties;
			}
			set
			{
				if (value != this._clanParties)
				{
					this._clanParties = value;
					base.OnPropertyChangedWithValue<ClanPartiesVM>(value, "ClanParties");
				}
			}
		}

		// Token: 0x1700087E RID: 2174
		// (get) Token: 0x060018FC RID: 6396 RVA: 0x0005B8A3 File Offset: 0x00059AA3
		// (set) Token: 0x060018FD RID: 6397 RVA: 0x0005B8AB File Offset: 0x00059AAB
		[DataSourceProperty]
		public ClanFiefsVM ClanFiefs
		{
			get
			{
				return this._clanFiefs;
			}
			set
			{
				if (value != this._clanFiefs)
				{
					this._clanFiefs = value;
					base.OnPropertyChangedWithValue<ClanFiefsVM>(value, "ClanFiefs");
				}
			}
		}

		// Token: 0x1700087F RID: 2175
		// (get) Token: 0x060018FE RID: 6398 RVA: 0x0005B8C9 File Offset: 0x00059AC9
		// (set) Token: 0x060018FF RID: 6399 RVA: 0x0005B8D1 File Offset: 0x00059AD1
		[DataSourceProperty]
		public ClanIncomeVM ClanIncome
		{
			get
			{
				return this._clanIncome;
			}
			set
			{
				if (value != this._clanIncome)
				{
					this._clanIncome = value;
					base.OnPropertyChangedWithValue<ClanIncomeVM>(value, "ClanIncome");
				}
			}
		}

		// Token: 0x17000880 RID: 2176
		// (get) Token: 0x06001900 RID: 6400 RVA: 0x0005B8EF File Offset: 0x00059AEF
		// (set) Token: 0x06001901 RID: 6401 RVA: 0x0005B8F7 File Offset: 0x00059AF7
		[DataSourceProperty]
		public bool IsMembersSelected
		{
			get
			{
				return this._isMembersSelected;
			}
			set
			{
				if (value != this._isMembersSelected)
				{
					this._isMembersSelected = value;
					base.OnPropertyChangedWithValue(value, "IsMembersSelected");
				}
			}
		}

		// Token: 0x17000881 RID: 2177
		// (get) Token: 0x06001902 RID: 6402 RVA: 0x0005B915 File Offset: 0x00059B15
		// (set) Token: 0x06001903 RID: 6403 RVA: 0x0005B91D File Offset: 0x00059B1D
		[DataSourceProperty]
		public bool IsPartiesSelected
		{
			get
			{
				return this._isPartiesSelected;
			}
			set
			{
				if (value != this._isPartiesSelected)
				{
					this._isPartiesSelected = value;
					base.OnPropertyChangedWithValue(value, "IsPartiesSelected");
				}
			}
		}

		// Token: 0x17000882 RID: 2178
		// (get) Token: 0x06001904 RID: 6404 RVA: 0x0005B93B File Offset: 0x00059B3B
		// (set) Token: 0x06001905 RID: 6405 RVA: 0x0005B943 File Offset: 0x00059B43
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

		// Token: 0x17000883 RID: 2179
		// (get) Token: 0x06001906 RID: 6406 RVA: 0x0005B961 File Offset: 0x00059B61
		// (set) Token: 0x06001907 RID: 6407 RVA: 0x0005B969 File Offset: 0x00059B69
		[DataSourceProperty]
		public bool IsFiefsSelected
		{
			get
			{
				return this._isFiefsSelected;
			}
			set
			{
				if (value != this._isFiefsSelected)
				{
					this._isFiefsSelected = value;
					base.OnPropertyChangedWithValue(value, "IsFiefsSelected");
				}
			}
		}

		// Token: 0x17000884 RID: 2180
		// (get) Token: 0x06001908 RID: 6408 RVA: 0x0005B987 File Offset: 0x00059B87
		// (set) Token: 0x06001909 RID: 6409 RVA: 0x0005B98F File Offset: 0x00059B8F
		[DataSourceProperty]
		public bool IsIncomeSelected
		{
			get
			{
				return this._isIncomeSelected;
			}
			set
			{
				if (value != this._isIncomeSelected)
				{
					this._isIncomeSelected = value;
					base.OnPropertyChangedWithValue(value, "IsIncomeSelected");
				}
			}
		}

		// Token: 0x17000885 RID: 2181
		// (get) Token: 0x0600190A RID: 6410 RVA: 0x0005B9AD File Offset: 0x00059BAD
		// (set) Token: 0x0600190B RID: 6411 RVA: 0x0005B9B5 File Offset: 0x00059BB5
		[DataSourceProperty]
		public bool ClanIsInAKingdom
		{
			get
			{
				return this._clanIsInAKingdom;
			}
			set
			{
				if (value != this._clanIsInAKingdom)
				{
					this._clanIsInAKingdom = value;
					base.OnPropertyChangedWithValue(value, "ClanIsInAKingdom");
				}
			}
		}

		// Token: 0x17000886 RID: 2182
		// (get) Token: 0x0600190C RID: 6412 RVA: 0x0005B9D3 File Offset: 0x00059BD3
		// (set) Token: 0x0600190D RID: 6413 RVA: 0x0005B9DB File Offset: 0x00059BDB
		[DataSourceProperty]
		public bool IsKingdomActionEnabled
		{
			get
			{
				return this._isKingdomActionEnabled;
			}
			set
			{
				if (value != this._isKingdomActionEnabled)
				{
					this._isKingdomActionEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsKingdomActionEnabled");
				}
			}
		}

		// Token: 0x17000887 RID: 2183
		// (get) Token: 0x0600190E RID: 6414 RVA: 0x0005B9F9 File Offset: 0x00059BF9
		// (set) Token: 0x0600190F RID: 6415 RVA: 0x0005BA01 File Offset: 0x00059C01
		[DataSourceProperty]
		public bool PlayerCanChangeClanName
		{
			get
			{
				return this._playerCanChangeClanName;
			}
			set
			{
				if (value != this._playerCanChangeClanName)
				{
					this._playerCanChangeClanName = value;
					base.OnPropertyChangedWithValue(value, "PlayerCanChangeClanName");
				}
			}
		}

		// Token: 0x17000888 RID: 2184
		// (get) Token: 0x06001910 RID: 6416 RVA: 0x0005BA1F File Offset: 0x00059C1F
		// (set) Token: 0x06001911 RID: 6417 RVA: 0x0005BA27 File Offset: 0x00059C27
		[DataSourceProperty]
		public bool CanChooseBanner
		{
			get
			{
				return this._canChooseBanner;
			}
			set
			{
				if (value != this._canChooseBanner)
				{
					this._canChooseBanner = value;
					base.OnPropertyChangedWithValue(value, "CanChooseBanner");
				}
			}
		}

		// Token: 0x17000889 RID: 2185
		// (get) Token: 0x06001912 RID: 6418 RVA: 0x0005BA45 File Offset: 0x00059C45
		// (set) Token: 0x06001913 RID: 6419 RVA: 0x0005BA4D File Offset: 0x00059C4D
		[DataSourceProperty]
		public bool IsRenownProgressComplete
		{
			get
			{
				return this._isRenownProgressComplete;
			}
			set
			{
				if (value != this._isRenownProgressComplete)
				{
					this._isRenownProgressComplete = value;
					base.OnPropertyChangedWithValue(value, "IsRenownProgressComplete");
				}
			}
		}

		// Token: 0x1700088A RID: 2186
		// (get) Token: 0x06001914 RID: 6420 RVA: 0x0005BA6B File Offset: 0x00059C6B
		// (set) Token: 0x06001915 RID: 6421 RVA: 0x0005BA73 File Offset: 0x00059C73
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

		// Token: 0x1700088B RID: 2187
		// (get) Token: 0x06001916 RID: 6422 RVA: 0x0005BA96 File Offset: 0x00059C96
		// (set) Token: 0x06001917 RID: 6423 RVA: 0x0005BA9E File Offset: 0x00059C9E
		[DataSourceProperty]
		public string CurrentRenownText
		{
			get
			{
				return this._currentRenownText;
			}
			set
			{
				if (value != this._currentRenownText)
				{
					this._currentRenownText = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentRenownText");
				}
			}
		}

		// Token: 0x1700088C RID: 2188
		// (get) Token: 0x06001918 RID: 6424 RVA: 0x0005BAC1 File Offset: 0x00059CC1
		// (set) Token: 0x06001919 RID: 6425 RVA: 0x0005BAC9 File Offset: 0x00059CC9
		[DataSourceProperty]
		public string KingdomActionText
		{
			get
			{
				return this._kingdomActionText;
			}
			set
			{
				if (value != this._kingdomActionText)
				{
					this._kingdomActionText = value;
					base.OnPropertyChangedWithValue<string>(value, "KingdomActionText");
				}
			}
		}

		// Token: 0x1700088D RID: 2189
		// (get) Token: 0x0600191A RID: 6426 RVA: 0x0005BAEC File Offset: 0x00059CEC
		// (set) Token: 0x0600191B RID: 6427 RVA: 0x0005BAF4 File Offset: 0x00059CF4
		[DataSourceProperty]
		public int NextTierRenown
		{
			get
			{
				return this._nextTierRenown;
			}
			set
			{
				if (value != this._nextTierRenown)
				{
					this._nextTierRenown = value;
					base.OnPropertyChangedWithValue(value, "NextTierRenown");
				}
			}
		}

		// Token: 0x1700088E RID: 2190
		// (get) Token: 0x0600191C RID: 6428 RVA: 0x0005BB12 File Offset: 0x00059D12
		// (set) Token: 0x0600191D RID: 6429 RVA: 0x0005BB1A File Offset: 0x00059D1A
		[DataSourceProperty]
		public int CurrentTier
		{
			get
			{
				return this._currentTier;
			}
			set
			{
				if (value != this._currentTier)
				{
					this._currentTier = value;
					base.OnPropertyChangedWithValue(value, "CurrentTier");
				}
			}
		}

		// Token: 0x1700088F RID: 2191
		// (get) Token: 0x0600191E RID: 6430 RVA: 0x0005BB38 File Offset: 0x00059D38
		// (set) Token: 0x0600191F RID: 6431 RVA: 0x0005BB40 File Offset: 0x00059D40
		[DataSourceProperty]
		public int MinRenownForCurrentTier
		{
			get
			{
				return this._minRenownForCurrentTier;
			}
			set
			{
				if (value != this._minRenownForCurrentTier)
				{
					this._minRenownForCurrentTier = value;
					base.OnPropertyChangedWithValue(value, "MinRenownForCurrentTier");
				}
			}
		}

		// Token: 0x17000890 RID: 2192
		// (get) Token: 0x06001920 RID: 6432 RVA: 0x0005BB5E File Offset: 0x00059D5E
		// (set) Token: 0x06001921 RID: 6433 RVA: 0x0005BB66 File Offset: 0x00059D66
		[DataSourceProperty]
		public int NextTier
		{
			get
			{
				return this._nextTier;
			}
			set
			{
				if (value != this._nextTier)
				{
					this._nextTier = value;
					base.OnPropertyChangedWithValue(value, "NextTier");
				}
			}
		}

		// Token: 0x17000891 RID: 2193
		// (get) Token: 0x06001922 RID: 6434 RVA: 0x0005BB84 File Offset: 0x00059D84
		// (set) Token: 0x06001923 RID: 6435 RVA: 0x0005BB8C File Offset: 0x00059D8C
		[DataSourceProperty]
		public int CurrentRenown
		{
			get
			{
				return this._currentRenown;
			}
			set
			{
				if (value != this._currentRenown)
				{
					this._currentRenown = value;
					base.OnPropertyChangedWithValue(value, "CurrentRenown");
				}
			}
		}

		// Token: 0x17000892 RID: 2194
		// (get) Token: 0x06001924 RID: 6436 RVA: 0x0005BBAA File Offset: 0x00059DAA
		// (set) Token: 0x06001925 RID: 6437 RVA: 0x0005BBB2 File Offset: 0x00059DB2
		[DataSourceProperty]
		public int CurrentTierRenownRange
		{
			get
			{
				return this._currentTierRenownRange;
			}
			set
			{
				if (value != this._currentTierRenownRange)
				{
					this._currentTierRenownRange = value;
					base.OnPropertyChangedWithValue(value, "CurrentTierRenownRange");
				}
			}
		}

		// Token: 0x17000893 RID: 2195
		// (get) Token: 0x06001926 RID: 6438 RVA: 0x0005BBD0 File Offset: 0x00059DD0
		// (set) Token: 0x06001927 RID: 6439 RVA: 0x0005BBD8 File Offset: 0x00059DD8
		[DataSourceProperty]
		public int CurrentRenownOverPreviousTier
		{
			get
			{
				return this._currentRenownOverPreviousTier;
			}
			set
			{
				if (value != this._currentRenownOverPreviousTier)
				{
					this._currentRenownOverPreviousTier = value;
					base.OnPropertyChangedWithValue(value, "CurrentRenownOverPreviousTier");
				}
			}
		}

		// Token: 0x17000894 RID: 2196
		// (get) Token: 0x06001928 RID: 6440 RVA: 0x0005BBF6 File Offset: 0x00059DF6
		// (set) Token: 0x06001929 RID: 6441 RVA: 0x0005BBFE File Offset: 0x00059DFE
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

		// Token: 0x17000895 RID: 2197
		// (get) Token: 0x0600192A RID: 6442 RVA: 0x0005BC21 File Offset: 0x00059E21
		// (set) Token: 0x0600192B RID: 6443 RVA: 0x0005BC29 File Offset: 0x00059E29
		[DataSourceProperty]
		public string PartiesText
		{
			get
			{
				return this._partiesText;
			}
			set
			{
				if (value != this._partiesText)
				{
					this._partiesText = value;
					base.OnPropertyChangedWithValue<string>(value, "PartiesText");
				}
			}
		}

		// Token: 0x17000896 RID: 2198
		// (get) Token: 0x0600192C RID: 6444 RVA: 0x0005BC4C File Offset: 0x00059E4C
		// (set) Token: 0x0600192D RID: 6445 RVA: 0x0005BC54 File Offset: 0x00059E54
		[DataSourceProperty]
		public string FiefsText
		{
			get
			{
				return this._fiefsText;
			}
			set
			{
				if (value != this._fiefsText)
				{
					this._fiefsText = value;
					base.OnPropertyChangedWithValue<string>(value, "FiefsText");
				}
			}
		}

		// Token: 0x17000897 RID: 2199
		// (get) Token: 0x0600192E RID: 6446 RVA: 0x0005BC77 File Offset: 0x00059E77
		// (set) Token: 0x0600192F RID: 6447 RVA: 0x0005BC7F File Offset: 0x00059E7F
		[DataSourceProperty]
		public string IncomeText
		{
			get
			{
				return this._incomeText;
			}
			set
			{
				if (value != this._incomeText)
				{
					this._incomeText = value;
					base.OnPropertyChanged("OtherText");
				}
			}
		}

		// Token: 0x17000898 RID: 2200
		// (get) Token: 0x06001930 RID: 6448 RVA: 0x0005BCA1 File Offset: 0x00059EA1
		// (set) Token: 0x06001931 RID: 6449 RVA: 0x0005BCA9 File Offset: 0x00059EA9
		[DataSourceProperty]
		public BasicTooltipViewModel RenownHint
		{
			get
			{
				return this._renownHint;
			}
			set
			{
				if (value != this._renownHint)
				{
					this._renownHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "RenownHint");
				}
			}
		}

		// Token: 0x17000899 RID: 2201
		// (get) Token: 0x06001932 RID: 6450 RVA: 0x0005BCC7 File Offset: 0x00059EC7
		// (set) Token: 0x06001933 RID: 6451 RVA: 0x0005BCCF File Offset: 0x00059ECF
		[DataSourceProperty]
		public HintViewModel ClanBannerHint
		{
			get
			{
				return this._clanBannerHint;
			}
			set
			{
				if (value != this._clanBannerHint)
				{
					this._clanBannerHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ClanBannerHint");
				}
			}
		}

		// Token: 0x1700089A RID: 2202
		// (get) Token: 0x06001934 RID: 6452 RVA: 0x0005BCED File Offset: 0x00059EED
		// (set) Token: 0x06001935 RID: 6453 RVA: 0x0005BCF5 File Offset: 0x00059EF5
		[DataSourceProperty]
		public HintViewModel ChangeClanNameHint
		{
			get
			{
				return this._changeClanNameHint;
			}
			set
			{
				if (value != this._changeClanNameHint)
				{
					this._changeClanNameHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ChangeClanNameHint");
				}
			}
		}

		// Token: 0x1700089B RID: 2203
		// (get) Token: 0x06001936 RID: 6454 RVA: 0x0005BD13 File Offset: 0x00059F13
		// (set) Token: 0x06001937 RID: 6455 RVA: 0x0005BD1B File Offset: 0x00059F1B
		[DataSourceProperty]
		public BasicTooltipViewModel KingdomActionDisabledReasonHint
		{
			get
			{
				return this._kingdomActionDisabledReasonHint;
			}
			set
			{
				if (value != this._kingdomActionDisabledReasonHint)
				{
					this._kingdomActionDisabledReasonHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "KingdomActionDisabledReasonHint");
				}
			}
		}

		// Token: 0x1700089C RID: 2204
		// (get) Token: 0x06001938 RID: 6456 RVA: 0x0005BD39 File Offset: 0x00059F39
		// (set) Token: 0x06001939 RID: 6457 RVA: 0x0005BD41 File Offset: 0x00059F41
		[DataSourceProperty]
		public TooltipTriggerVM GoldChangeTooltip
		{
			get
			{
				return this._goldChangeTooltip;
			}
			set
			{
				if (value != this._goldChangeTooltip)
				{
					this._goldChangeTooltip = value;
					base.OnPropertyChangedWithValue<TooltipTriggerVM>(value, "GoldChangeTooltip");
				}
			}
		}

		// Token: 0x1700089D RID: 2205
		// (get) Token: 0x0600193A RID: 6458 RVA: 0x0005BD5F File Offset: 0x00059F5F
		// (set) Token: 0x0600193B RID: 6459 RVA: 0x0005BD67 File Offset: 0x00059F67
		[DataSourceProperty]
		public string CurrentGoldText
		{
			get
			{
				return this._currentGoldText;
			}
			set
			{
				if (value != this._currentGoldText)
				{
					this._currentGoldText = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentGoldText");
				}
			}
		}

		// Token: 0x1700089E RID: 2206
		// (get) Token: 0x0600193C RID: 6460 RVA: 0x0005BD8A File Offset: 0x00059F8A
		// (set) Token: 0x0600193D RID: 6461 RVA: 0x0005BD92 File Offset: 0x00059F92
		[DataSourceProperty]
		public int CurrentGold
		{
			get
			{
				return this._currentGold;
			}
			set
			{
				if (value != this._currentGold)
				{
					this._currentGold = value;
					base.OnPropertyChangedWithValue(value, "CurrentGold");
				}
			}
		}

		// Token: 0x1700089F RID: 2207
		// (get) Token: 0x0600193E RID: 6462 RVA: 0x0005BDB0 File Offset: 0x00059FB0
		// (set) Token: 0x0600193F RID: 6463 RVA: 0x0005BDB8 File Offset: 0x00059FB8
		[DataSourceProperty]
		public string ExpenseText
		{
			get
			{
				return this._expenseText;
			}
			set
			{
				if (value != this._expenseText)
				{
					this._expenseText = value;
					base.OnPropertyChangedWithValue<string>(value, "ExpenseText");
				}
			}
		}

		// Token: 0x170008A0 RID: 2208
		// (get) Token: 0x06001940 RID: 6464 RVA: 0x0005BDDB File Offset: 0x00059FDB
		// (set) Token: 0x06001941 RID: 6465 RVA: 0x0005BDE3 File Offset: 0x00059FE3
		[DataSourceProperty]
		public string TotalIncomeText
		{
			get
			{
				return this._totalIncomeText;
			}
			set
			{
				if (value != this._totalIncomeText)
				{
					this._totalIncomeText = value;
					base.OnPropertyChangedWithValue<string>(value, "TotalIncomeText");
				}
			}
		}

		// Token: 0x170008A1 RID: 2209
		// (get) Token: 0x06001942 RID: 6466 RVA: 0x0005BE06 File Offset: 0x0005A006
		// (set) Token: 0x06001943 RID: 6467 RVA: 0x0005BE0E File Offset: 0x0005A00E
		[DataSourceProperty]
		public string FinanceText
		{
			get
			{
				return this._financeText;
			}
			set
			{
				if (value != this._financeText)
				{
					this._financeText = value;
					base.OnPropertyChangedWithValue<string>(value, "FinanceText");
				}
			}
		}

		// Token: 0x170008A2 RID: 2210
		// (get) Token: 0x06001944 RID: 6468 RVA: 0x0005BE31 File Offset: 0x0005A031
		// (set) Token: 0x06001945 RID: 6469 RVA: 0x0005BE39 File Offset: 0x0005A039
		[DataSourceProperty]
		public int TotalIncome
		{
			get
			{
				return this._totalIncome;
			}
			set
			{
				if (value != this._totalIncome)
				{
					this._totalIncome = value;
					base.OnPropertyChangedWithValue(value, "TotalIncome");
				}
			}
		}

		// Token: 0x170008A3 RID: 2211
		// (get) Token: 0x06001946 RID: 6470 RVA: 0x0005BE57 File Offset: 0x0005A057
		// (set) Token: 0x06001947 RID: 6471 RVA: 0x0005BE5F File Offset: 0x0005A05F
		[DataSourceProperty]
		public string TotalExpensesText
		{
			get
			{
				return this._totalExpensesText;
			}
			set
			{
				if (value != this._totalExpensesText)
				{
					this._totalExpensesText = value;
					base.OnPropertyChangedWithValue<string>(value, "TotalExpensesText");
				}
			}
		}

		// Token: 0x170008A4 RID: 2212
		// (get) Token: 0x06001948 RID: 6472 RVA: 0x0005BE82 File Offset: 0x0005A082
		// (set) Token: 0x06001949 RID: 6473 RVA: 0x0005BE8A File Offset: 0x0005A08A
		[DataSourceProperty]
		public int TotalExpenses
		{
			get
			{
				return this._totalExpenses;
			}
			set
			{
				if (value != this._totalExpenses)
				{
					this._totalExpenses = value;
					base.OnPropertyChangedWithValue(value, "TotalExpenses");
				}
			}
		}

		// Token: 0x170008A5 RID: 2213
		// (get) Token: 0x0600194A RID: 6474 RVA: 0x0005BEA8 File Offset: 0x0005A0A8
		// (set) Token: 0x0600194B RID: 6475 RVA: 0x0005BEB0 File Offset: 0x0005A0B0
		[DataSourceProperty]
		public string DailyChangeText
		{
			get
			{
				return this._dailyChangeText;
			}
			set
			{
				if (value != this._dailyChangeText)
				{
					this._dailyChangeText = value;
					base.OnPropertyChangedWithValue<string>(value, "DailyChangeText");
				}
			}
		}

		// Token: 0x170008A6 RID: 2214
		// (get) Token: 0x0600194C RID: 6476 RVA: 0x0005BED3 File Offset: 0x0005A0D3
		// (set) Token: 0x0600194D RID: 6477 RVA: 0x0005BEDB File Offset: 0x0005A0DB
		[DataSourceProperty]
		public int DailyChange
		{
			get
			{
				return this._dailyChange;
			}
			set
			{
				if (value != this._dailyChange)
				{
					this._dailyChange = value;
					base.OnPropertyChangedWithValue(value, "DailyChange");
				}
			}
		}

		// Token: 0x170008A7 RID: 2215
		// (get) Token: 0x0600194E RID: 6478 RVA: 0x0005BEF9 File Offset: 0x0005A0F9
		// (set) Token: 0x0600194F RID: 6479 RVA: 0x0005BF01 File Offset: 0x0005A101
		[DataSourceProperty]
		public string ExpectedGoldText
		{
			get
			{
				return this._expectedGoldText;
			}
			set
			{
				if (value != this._expectedGoldText)
				{
					this._expectedGoldText = value;
					base.OnPropertyChangedWithValue<string>(value, "ExpectedGoldText");
				}
			}
		}

		// Token: 0x170008A8 RID: 2216
		// (get) Token: 0x06001950 RID: 6480 RVA: 0x0005BF24 File Offset: 0x0005A124
		// (set) Token: 0x06001951 RID: 6481 RVA: 0x0005BF2C File Offset: 0x0005A12C
		[DataSourceProperty]
		public int ExpectedGold
		{
			get
			{
				return this._expectedGold;
			}
			set
			{
				if (value != this._expectedGold)
				{
					this._expectedGold = value;
					base.OnPropertyChangedWithValue(value, "ExpectedGold");
				}
			}
		}

		// Token: 0x170008A9 RID: 2217
		// (get) Token: 0x06001952 RID: 6482 RVA: 0x0005BF4A File Offset: 0x0005A14A
		// (set) Token: 0x06001953 RID: 6483 RVA: 0x0005BF52 File Offset: 0x0005A152
		[DataSourceProperty]
		public string DailyChangeValueText
		{
			get
			{
				return this._dailyChangeValueText;
			}
			set
			{
				if (value != this._dailyChangeValueText)
				{
					this._dailyChangeValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "DailyChangeValueText");
				}
			}
		}

		// Token: 0x170008AA RID: 2218
		// (get) Token: 0x06001954 RID: 6484 RVA: 0x0005BF75 File Offset: 0x0005A175
		// (set) Token: 0x06001955 RID: 6485 RVA: 0x0005BF7D File Offset: 0x0005A17D
		[DataSourceProperty]
		public string TotalExpensesValueText
		{
			get
			{
				return this._totalExpensesValueText;
			}
			set
			{
				if (value != this._totalExpensesValueText)
				{
					this._totalExpensesValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "TotalExpensesValueText");
				}
			}
		}

		// Token: 0x170008AB RID: 2219
		// (get) Token: 0x06001956 RID: 6486 RVA: 0x0005BFA0 File Offset: 0x0005A1A0
		// (set) Token: 0x06001957 RID: 6487 RVA: 0x0005BFA8 File Offset: 0x0005A1A8
		[DataSourceProperty]
		public string TotalIncomeValueText
		{
			get
			{
				return this._totalIncomeValueText;
			}
			set
			{
				if (value != this._totalIncomeValueText)
				{
					this._totalIncomeValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "TotalIncomeValueText");
				}
			}
		}

		// Token: 0x06001958 RID: 6488 RVA: 0x0005BFCB File Offset: 0x0005A1CB
		public void SetDoneInputKey(HotKey hotkey)
		{
			this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
			this.CardSelectionPopup.SetDoneInputKey(hotkey);
		}

		// Token: 0x06001959 RID: 6489 RVA: 0x0005BFE6 File Offset: 0x0005A1E6
		public void SetPreviousTabInputKey(HotKey hotkey)
		{
			this.PreviousTabInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x0600195A RID: 6490 RVA: 0x0005BFF5 File Offset: 0x0005A1F5
		public void SetNextTabInputKey(HotKey hotkey)
		{
			this.NextTabInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x170008AC RID: 2220
		// (get) Token: 0x0600195B RID: 6491 RVA: 0x0005C004 File Offset: 0x0005A204
		// (set) Token: 0x0600195C RID: 6492 RVA: 0x0005C00C File Offset: 0x0005A20C
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

		// Token: 0x170008AD RID: 2221
		// (get) Token: 0x0600195D RID: 6493 RVA: 0x0005C02A File Offset: 0x0005A22A
		// (set) Token: 0x0600195E RID: 6494 RVA: 0x0005C032 File Offset: 0x0005A232
		public InputKeyItemVM PreviousTabInputKey
		{
			get
			{
				return this._previousTabInputKey;
			}
			set
			{
				if (value != this._previousTabInputKey)
				{
					this._previousTabInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "PreviousTabInputKey");
				}
			}
		}

		// Token: 0x170008AE RID: 2222
		// (get) Token: 0x0600195F RID: 6495 RVA: 0x0005C050 File Offset: 0x0005A250
		// (set) Token: 0x06001960 RID: 6496 RVA: 0x0005C058 File Offset: 0x0005A258
		public InputKeyItemVM NextTabInputKey
		{
			get
			{
				return this._nextTabInputKey;
			}
			set
			{
				if (value != this._nextTabInputKey)
				{
					this._nextTabInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "NextTabInputKey");
				}
			}
		}

		// Token: 0x170008AF RID: 2223
		// (get) Token: 0x06001961 RID: 6497 RVA: 0x0005C076 File Offset: 0x0005A276
		// (set) Token: 0x06001962 RID: 6498 RVA: 0x0005C07E File Offset: 0x0005A27E
		[DataSourceProperty]
		public ElementNotificationVM TutorialNotification
		{
			get
			{
				return this._tutorialNotification;
			}
			set
			{
				if (value != this._tutorialNotification)
				{
					this._tutorialNotification = value;
					base.OnPropertyChangedWithValue<ElementNotificationVM>(value, "TutorialNotification");
				}
			}
		}

		// Token: 0x06001963 RID: 6499 RVA: 0x0005C09C File Offset: 0x0005A29C
		private void OnTutorialNotificationElementIDChange(TutorialNotificationElementChangeEvent obj)
		{
			if (obj.NewNotificationElementID != this._latestTutorialElementID)
			{
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = string.Empty;
				}
				this._latestTutorialElementID = obj.NewNotificationElementID;
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = this._latestTutorialElementID;
					if (this._latestTutorialElementID == "RoleAssignmentWidget")
					{
						this.SetSelectedCategory(1);
					}
				}
			}
		}

		// Token: 0x04000BC1 RID: 3009
		private readonly Action _onClose;

		// Token: 0x04000BC2 RID: 3010
		private readonly Action _openBannerEditor;

		// Token: 0x04000BC3 RID: 3011
		private readonly Action<Hero> _openPartyAsManage;

		// Token: 0x04000BC4 RID: 3012
		private readonly Action<Hero> _showHeroOnMap;

		// Token: 0x04000BC5 RID: 3013
		private readonly Clan _clan;

		// Token: 0x04000BC6 RID: 3014
		private readonly int _categoryCount;

		// Token: 0x04000BC7 RID: 3015
		private int _currentCategory;

		// Token: 0x04000BC8 RID: 3016
		private ClanMembersVM _clanMembers;

		// Token: 0x04000BC9 RID: 3017
		private ClanPartiesVM _clanParties;

		// Token: 0x04000BCA RID: 3018
		private ClanFiefsVM _clanFiefs;

		// Token: 0x04000BCB RID: 3019
		private ClanIncomeVM _clanIncome;

		// Token: 0x04000BCC RID: 3020
		private HeroVM _leader;

		// Token: 0x04000BCD RID: 3021
		private ImageIdentifierVM _clanBanner;

		// Token: 0x04000BCE RID: 3022
		private ClanCardSelectionPopupVM _cardSelectionPopup;

		// Token: 0x04000BCF RID: 3023
		private bool _canSwitchTabs;

		// Token: 0x04000BD0 RID: 3024
		private bool _isPartiesSelected;

		// Token: 0x04000BD1 RID: 3025
		private bool _isMembersSelected;

		// Token: 0x04000BD2 RID: 3026
		private bool _isFiefsSelected;

		// Token: 0x04000BD3 RID: 3027
		private bool _isIncomeSelected;

		// Token: 0x04000BD4 RID: 3028
		private bool _canChooseBanner;

		// Token: 0x04000BD5 RID: 3029
		private bool _isRenownProgressComplete;

		// Token: 0x04000BD6 RID: 3030
		private bool _playerCanChangeClanName;

		// Token: 0x04000BD7 RID: 3031
		private bool _clanIsInAKingdom;

		// Token: 0x04000BD8 RID: 3032
		private string _doneLbl;

		// Token: 0x04000BD9 RID: 3033
		private bool _isKingdomActionEnabled;

		// Token: 0x04000BDA RID: 3034
		private string _name;

		// Token: 0x04000BDB RID: 3035
		private string _kingdomActionText;

		// Token: 0x04000BDC RID: 3036
		private string _leaderText;

		// Token: 0x04000BDD RID: 3037
		private int _minRenownForCurrentTier;

		// Token: 0x04000BDE RID: 3038
		private int _currentRenown;

		// Token: 0x04000BDF RID: 3039
		private int _currentTier = -1;

		// Token: 0x04000BE0 RID: 3040
		private int _nextTierRenown;

		// Token: 0x04000BE1 RID: 3041
		private int _nextTier;

		// Token: 0x04000BE2 RID: 3042
		private int _currentTierRenownRange;

		// Token: 0x04000BE3 RID: 3043
		private int _currentRenownOverPreviousTier;

		// Token: 0x04000BE4 RID: 3044
		private string _currentRenownText;

		// Token: 0x04000BE5 RID: 3045
		private string _membersText;

		// Token: 0x04000BE6 RID: 3046
		private string _partiesText;

		// Token: 0x04000BE7 RID: 3047
		private string _fiefsText;

		// Token: 0x04000BE8 RID: 3048
		private string _incomeText;

		// Token: 0x04000BE9 RID: 3049
		private BasicTooltipViewModel _renownHint;

		// Token: 0x04000BEA RID: 3050
		private BasicTooltipViewModel _kingdomActionDisabledReasonHint;

		// Token: 0x04000BEB RID: 3051
		private HintViewModel _clanBannerHint;

		// Token: 0x04000BEC RID: 3052
		private HintViewModel _changeClanNameHint;

		// Token: 0x04000BED RID: 3053
		private string _financeText;

		// Token: 0x04000BEE RID: 3054
		private string _currentGoldText;

		// Token: 0x04000BEF RID: 3055
		private int _currentGold;

		// Token: 0x04000BF0 RID: 3056
		private string _totalIncomeText;

		// Token: 0x04000BF1 RID: 3057
		private int _totalIncome;

		// Token: 0x04000BF2 RID: 3058
		private string _totalIncomeValueText;

		// Token: 0x04000BF3 RID: 3059
		private string _totalExpensesText;

		// Token: 0x04000BF4 RID: 3060
		private int _totalExpenses;

		// Token: 0x04000BF5 RID: 3061
		private string _totalExpensesValueText;

		// Token: 0x04000BF6 RID: 3062
		private string _dailyChangeText;

		// Token: 0x04000BF7 RID: 3063
		private int _dailyChange;

		// Token: 0x04000BF8 RID: 3064
		private string _dailyChangeValueText;

		// Token: 0x04000BF9 RID: 3065
		private string _expectedGoldText;

		// Token: 0x04000BFA RID: 3066
		private int _expectedGold;

		// Token: 0x04000BFB RID: 3067
		private string _expenseText;

		// Token: 0x04000BFC RID: 3068
		private TooltipTriggerVM _goldChangeTooltip;

		// Token: 0x04000BFD RID: 3069
		private InputKeyItemVM _doneInputKey;

		// Token: 0x04000BFE RID: 3070
		private InputKeyItemVM _previousTabInputKey;

		// Token: 0x04000BFF RID: 3071
		private InputKeyItemVM _nextTabInputKey;

		// Token: 0x04000C00 RID: 3072
		private ElementNotificationVM _tutorialNotification;

		// Token: 0x04000C01 RID: 3073
		private string _latestTutorialElementID;
	}
}
