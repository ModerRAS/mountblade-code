using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.ClanFinance
{
	// Token: 0x02000117 RID: 279
	public class ClanFinanceWorkshopItemVM : ClanFinanceIncomeItemBaseVM
	{
		// Token: 0x17000924 RID: 2340
		// (get) Token: 0x06001AA5 RID: 6821 RVA: 0x00060507 File Offset: 0x0005E707
		// (set) Token: 0x06001AA6 RID: 6822 RVA: 0x0006050F File Offset: 0x0005E70F
		public Workshop Workshop { get; private set; }

		// Token: 0x06001AA7 RID: 6823 RVA: 0x00060518 File Offset: 0x0005E718
		public ClanFinanceWorkshopItemVM(Workshop workshop, Action<ClanFinanceWorkshopItemVM> onSelection, Action onRefresh, Action<ClanCardSelectionInfo> openCardSelectionPopup) : base(null, onRefresh)
		{
			this._workshopWarehouseBehavior = Campaign.Current.GetCampaignBehavior<IWorkshopWarehouseCampaignBehavior>();
			this.Workshop = workshop;
			this._openCardSelectionPopup = openCardSelectionPopup;
			this._workshopModel = Campaign.Current.Models.WorkshopModel;
			base.IncomeTypeAsEnum = IncomeTypes.Workshop;
			this._onSelection = new Action<ClanFinanceIncomeItemBaseVM>(this.tempOnSelection);
			this._onSelectionT = onSelection;
			SettlementComponent settlementComponent = this.Workshop.Settlement.SettlementComponent;
			base.ImageName = ((settlementComponent != null) ? settlementComponent.WaitMeshName : "");
			this.ManageWorkshopHint = new HintViewModel(new TextObject("{=LxWVtDF0}Manage Workshop", null), null);
			this.UseWarehouseAsInputHint = new HintViewModel(new TextObject("{=a4oqWgUi}If there are no raw materials in the warehouse, the workshop will buy raw materials from the market until the warehouse is restocked", null), null);
			this.StoreOutputPercentageHint = new HintViewModel(new TextObject("{=NVUi4bB9}When the warehouse is full, the workshop will sell the products to the town market", null), null);
			this.InputWarehouseCountsTooltip = new BasicTooltipViewModel();
			this.OutputWarehouseCountsTooltip = new BasicTooltipViewModel();
			this.ReceiveInputFromWarehouse = this._workshopWarehouseBehavior.IsGettingInputsFromWarehouse(workshop);
			this.WarehousePercentageSelector = new SelectorVM<WorkshopPercentageSelectorItemVM>(0, new Action<SelectorVM<WorkshopPercentageSelectorItemVM>>(this.OnStoreOutputInWarehousePercentageUpdated));
			this.RefreshStoragePercentages();
			float currentPercentage = this._workshopWarehouseBehavior.GetStockProductionInWarehouseRatio(workshop);
			WorkshopPercentageSelectorItemVM workshopPercentageSelectorItemVM = this.WarehousePercentageSelector.ItemList.FirstOrDefault((WorkshopPercentageSelectorItemVM x) => x.Percentage.ApproximatelyEqualsTo(currentPercentage, 0.1f));
			this.WarehousePercentageSelector.SelectedIndex = ((workshopPercentageSelectorItemVM != null) ? this.WarehousePercentageSelector.ItemList.IndexOf(workshopPercentageSelectorItemVM) : 0);
			this.RefreshValues();
		}

		// Token: 0x06001AA8 RID: 6824 RVA: 0x000606D4 File Offset: 0x0005E8D4
		private void tempOnSelection(ClanFinanceIncomeItemBaseVM temp)
		{
			this._onSelectionT(this);
		}

		// Token: 0x06001AA9 RID: 6825 RVA: 0x000606E4 File Offset: 0x0005E8E4
		public override void RefreshValues()
		{
			base.RefreshValues();
			base.Name = this.Workshop.WorkshopType.Name.ToString();
			this.WorkshopTypeId = this.Workshop.WorkshopType.StringId;
			base.Location = this.Workshop.Settlement.Name.ToString();
			base.Income = (int)((float)this.Workshop.ProfitMade * (1f / Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction()));
			base.IncomeValueText = base.DetermineIncomeText(base.Income);
			this.InputsText = GameTexts.FindText("str_clan_workshop_inputs", null).ToString();
			this.OutputsText = GameTexts.FindText("str_clan_workshop_outputs", null).ToString();
			this.StoreOutputPercentageText = new TextObject("{=y6qCNFQj}Store Outputs in the Warehouse", null).ToString();
			this.UseWarehouseAsInputText = new TextObject("{=88WPmTKH}Get Input from the Warehouse", null).ToString();
			this.WarehouseCapacityText = new TextObject("{=X6eG4Q5V}Warehouse Capacity", null).ToString();
			float warehouseItemRosterWeight = this._workshopWarehouseBehavior.GetWarehouseItemRosterWeight(this.Workshop.Settlement);
			int warehouseCapacity = Campaign.Current.Models.WorkshopModel.WarehouseCapacity;
			this.WarehouseCapacityValue = GameTexts.FindText("str_LEFT_over_RIGHT", null).SetTextVariable("LEFT", warehouseItemRosterWeight).SetTextVariable("RIGHT", warehouseCapacity).ToString();
			this.WarehouseInputAmount = this._workshopWarehouseBehavior.GetInputCount(this.Workshop);
			this.WarehouseOutputAmount = this._workshopWarehouseBehavior.GetOutputCount(this.Workshop);
			this._inputDetails = this._workshopWarehouseBehavior.GetInputDailyChange(this.Workshop);
			this._outputDetails = this._workshopWarehouseBehavior.GetOutputDailyChange(this.Workshop);
			this.InputWarehouseCountsTooltip.SetToolipCallback(() => this.GetWarehouseInputOutputTooltip(true));
			this.OutputWarehouseCountsTooltip.SetToolipCallback(() => this.GetWarehouseInputOutputTooltip(false));
			base.ItemProperties.Clear();
			this.PopulateStatsList();
		}

		// Token: 0x06001AAA RID: 6826 RVA: 0x000608E4 File Offset: 0x0005EAE4
		private List<TooltipProperty> GetWarehouseInputOutputTooltip(bool isInput)
		{
			List<TooltipProperty> list = new List<TooltipProperty>();
			ExplainedNumber explainedNumber = isInput ? this._inputDetails : this._outputDetails;
			if (!explainedNumber.ResultNumber.ApproximatelyEqualsTo(0f, 1E-05f))
			{
				list.Add(new TooltipProperty(new TextObject("{=Y9egTJg0}Daily Change", null).ToString(), "", 1, false, TooltipProperty.TooltipPropertyFlags.Title));
				list.Add(new TooltipProperty("", "", 0, false, TooltipProperty.TooltipPropertyFlags.RundownSeperator));
				foreach (ValueTuple<string, float> valueTuple in explainedNumber.GetLines())
				{
					string value = GameTexts.FindText("str_clan_workshop_material_daily_Change", null).SetTextVariable("CHANGE", MathF.Abs(valueTuple.Item2).ToString("F1")).SetTextVariable("IS_POSITIVE", (valueTuple.Item2 > 0f) ? 1 : 0).ToString();
					list.Add(new TooltipProperty(valueTuple.Item1, value, 0, false, TooltipProperty.TooltipPropertyFlags.None));
				}
			}
			return list;
		}

		// Token: 0x06001AAB RID: 6827 RVA: 0x00060A10 File Offset: 0x0005EC10
		private void RefreshStoragePercentages()
		{
			this.WarehousePercentageSelector.ItemList.Clear();
			TextObject textObject = GameTexts.FindText("str_NUMBER_percent", null);
			textObject.SetTextVariable("NUMBER", 0);
			this.WarehousePercentageSelector.AddItem(new WorkshopPercentageSelectorItemVM(textObject.ToString(), 0f));
			textObject.SetTextVariable("NUMBER", 25);
			this.WarehousePercentageSelector.AddItem(new WorkshopPercentageSelectorItemVM(textObject.ToString(), 0.25f));
			textObject.SetTextVariable("NUMBER", 50);
			this.WarehousePercentageSelector.AddItem(new WorkshopPercentageSelectorItemVM(textObject.ToString(), 0.5f));
			textObject.SetTextVariable("NUMBER", 75);
			this.WarehousePercentageSelector.AddItem(new WorkshopPercentageSelectorItemVM(textObject.ToString(), 0.75f));
			textObject.SetTextVariable("NUMBER", 100);
			this.WarehousePercentageSelector.AddItem(new WorkshopPercentageSelectorItemVM(textObject.ToString(), 1f));
		}

		// Token: 0x06001AAC RID: 6828 RVA: 0x00060B05 File Offset: 0x0005ED05
		public void ExecuteToggleWarehouseUsage()
		{
			this.ReceiveInputFromWarehouse = !this.ReceiveInputFromWarehouse;
			this._workshopWarehouseBehavior.SetIsGettingInputsFromWarehouse(this.Workshop, this.ReceiveInputFromWarehouse);
			base.ItemProperties.Clear();
			this.PopulateStatsList();
		}

		// Token: 0x06001AAD RID: 6829 RVA: 0x00060B40 File Offset: 0x0005ED40
		protected override void PopulateStatsList()
		{
			ValueTuple<TextObject, bool, BasicTooltipViewModel> workshopStatus = this.GetWorkshopStatus(this.Workshop);
			if (!TextObject.IsNullOrEmpty(workshopStatus.Item1))
			{
				base.ItemProperties.Add(new SelectableItemPropertyVM(new TextObject("{=DXczLzml}Status", null).ToString(), workshopStatus.Item1.ToString(), workshopStatus.Item2, workshopStatus.Item3));
			}
			SelectableItemPropertyVM currentCapitalProperty = this.GetCurrentCapitalProperty();
			base.ItemProperties.Add(currentCapitalProperty);
			base.ItemProperties.Add(new SelectableItemPropertyVM(new TextObject("{=CaRbMaZY}Daily Wage", null).ToString(), this.Workshop.Expense.ToString(), false, null));
			TextObject textObject;
			TextObject textObject2;
			ClanFinanceWorkshopItemVM.GetWorkshopTypeProductionTexts(this.Workshop.WorkshopType, out textObject, out textObject2);
			this.InputProducts = textObject.ToString();
			this.OutputProducts = textObject2.ToString();
		}

		// Token: 0x06001AAE RID: 6830 RVA: 0x00060C14 File Offset: 0x0005EE14
		private SelectableItemPropertyVM GetCurrentCapitalProperty()
		{
			string name = new TextObject("{=Ra17aK4e}Current Capital", null).ToString();
			string value = this.Workshop.Capital.ToString();
			bool isWarning = false;
			BasicTooltipViewModel hint;
			if (this.Workshop.Capital < this._workshopModel.CapitalLowLimit)
			{
				isWarning = true;
				hint = new BasicTooltipViewModel(() => new TextObject("{=Qu5clctb}The workshop is losing money. The expenses are being paid from your treasury because the workshop's capital is below {LOWER_THRESHOLD} denars", null).SetTextVariable("LOWER_THRESHOLD", this._workshopModel.CapitalLowLimit).ToString());
			}
			else
			{
				TextObject text = new TextObject("{=dEMUqz2Y}This workshop will send 20% of its profits above {INITIAL_CAPITAL} capital to your treasury", null);
				text.SetTextVariable("INITIAL_CAPITAL", Campaign.Current.Models.WorkshopModel.InitialCapital);
				hint = new BasicTooltipViewModel(() => text.ToString());
			}
			return new SelectableItemPropertyVM(name, value, isWarning, hint);
		}

		// Token: 0x06001AAF RID: 6831 RVA: 0x00060CCC File Offset: 0x0005EECC
		[return: TupleElementNames(new string[]
		{
			"Status",
			"IsWarning",
			"Hint"
		})]
		private ValueTuple<TextObject, bool, BasicTooltipViewModel> GetWorkshopStatus(Workshop workshop)
		{
			TextObject item = TextObject.Empty;
			bool item2 = false;
			BasicTooltipViewModel item3 = null;
			if (workshop.LastRunCampaignTime.ElapsedDaysUntilNow >= 1f)
			{
				item = this._haltedText;
				item2 = true;
				TextObject tooltipText = TextObject.Empty;
				if (!this._workshopWarehouseBehavior.IsRawMaterialsSufficientInTownMarket(workshop))
				{
					tooltipText = this._noRawMaterialsText;
				}
				else if (this.WarehousePercentageSelector.SelectedItem.Percentage < 1f)
				{
					tooltipText = this._noProfitText;
				}
				int num = (int)workshop.LastRunCampaignTime.ElapsedDaysUntilNow;
				tooltipText.SetTextVariable("DAY", num);
				tooltipText.SetTextVariable("PLURAL_DAYS", (num == 1) ? "0" : "1");
				item3 = new BasicTooltipViewModel(() => tooltipText.ToString());
			}
			else
			{
				item = this._runningText;
			}
			return new ValueTuple<TextObject, bool, BasicTooltipViewModel>(item, item2, item3);
		}

		// Token: 0x06001AB0 RID: 6832 RVA: 0x00060DC4 File Offset: 0x0005EFC4
		private static void GetWorkshopTypeProductionTexts(WorkshopType workshopType, out TextObject inputsText, out TextObject outputsText)
		{
			CampaignUIHelper.ProductInputOutputEqualityComparer comparer = new CampaignUIHelper.ProductInputOutputEqualityComparer();
			IEnumerable<TextObject> texts = from x in workshopType.Productions.SelectMany((WorkshopType.Production p) => p.Inputs).Distinct(comparer)
			select x.Item1.GetName();
			IEnumerable<TextObject> texts2 = from x in workshopType.Productions.SelectMany((WorkshopType.Production p) => p.Outputs).Distinct(comparer)
			select x.Item1.GetName();
			inputsText = CampaignUIHelper.GetCommaSeparatedText(null, texts);
			outputsText = CampaignUIHelper.GetCommaSeparatedText(null, texts2);
		}

		// Token: 0x06001AB1 RID: 6833 RVA: 0x00060E93 File Offset: 0x0005F093
		public void ExecuteBeginWorkshopHint()
		{
			if (this.Workshop.WorkshopType != null)
			{
				InformationManager.ShowTooltip(typeof(Workshop), new object[]
				{
					this.Workshop
				});
			}
		}

		// Token: 0x06001AB2 RID: 6834 RVA: 0x00060EC0 File Offset: 0x0005F0C0
		public void ExecuteEndHint()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x06001AB3 RID: 6835 RVA: 0x00060EC8 File Offset: 0x0005F0C8
		public void OnStoreOutputInWarehousePercentageUpdated(SelectorVM<WorkshopPercentageSelectorItemVM> selector)
		{
			if (selector.SelectedIndex != -1)
			{
				this._workshopWarehouseBehavior.SetStockProductionInWarehouseRatio(this.Workshop, selector.SelectedItem.Percentage);
				this._inputDetails = this._workshopWarehouseBehavior.GetInputDailyChange(this.Workshop);
				this._outputDetails = this._workshopWarehouseBehavior.GetOutputDailyChange(this.Workshop);
			}
		}

		// Token: 0x06001AB4 RID: 6836 RVA: 0x00060F28 File Offset: 0x0005F128
		public void ExecuteManageWorkshop()
		{
			TextObject title = new TextObject("{=LxWVtDF0}Manage Workshop", null);
			ClanCardSelectionInfo obj = new ClanCardSelectionInfo(title, this.GetManageWorkshopItems(), new Action<List<object>, Action>(this.OnManageWorkshopDone), false);
			Action<ClanCardSelectionInfo> openCardSelectionPopup = this._openCardSelectionPopup;
			if (openCardSelectionPopup == null)
			{
				return;
			}
			openCardSelectionPopup(obj);
		}

		// Token: 0x06001AB5 RID: 6837 RVA: 0x00060F6D File Offset: 0x0005F16D
		private IEnumerable<ClanCardSelectionItemInfo> GetManageWorkshopItems()
		{
			int costForNotable = this._workshopModel.GetCostForNotable(this.Workshop);
			TextObject textObject = new TextObject("{=ysireFjT}Sell This Workshop for {GOLD_AMOUNT}{GOLD_ICON}", null);
			textObject.SetTextVariable("GOLD_AMOUNT", costForNotable);
			textObject.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
			yield return new ClanCardSelectionItemInfo(textObject, false, null, ClanCardSelectionItemPropertyInfo.CreateActionGoldChangeText(costForNotable));
			int costOfChangingType = this._workshopModel.GetConvertProductionCost(this.Workshop.WorkshopType);
			TextObject cannotChangeTypeReason = new TextObject("{=av51ur2M}You need at least {REQUIRED_AMOUNT} denars to change the production type of this workshop.", null);
			cannotChangeTypeReason.SetTextVariable("REQUIRED_AMOUNT", costOfChangingType);
			foreach (WorkshopType workshopType in WorkshopType.All)
			{
				if (this.Workshop.WorkshopType != workshopType && !workshopType.IsHidden)
				{
					TextObject name = workshopType.Name;
					bool flag = costOfChangingType <= Hero.MainHero.Gold;
					yield return new ClanCardSelectionItemInfo(workshopType, name, null, CardSelectionItemSpriteType.Workshop, workshopType.StringId, null, this.GetWorkshopItemProperties(workshopType), !flag, cannotChangeTypeReason, ClanCardSelectionItemPropertyInfo.CreateActionGoldChangeText(-costOfChangingType));
				}
			}
			List<WorkshopType>.Enumerator enumerator = default(List<WorkshopType>.Enumerator);
			yield break;
			yield break;
		}

		// Token: 0x06001AB6 RID: 6838 RVA: 0x00060F7D File Offset: 0x0005F17D
		private IEnumerable<ClanCardSelectionItemPropertyInfo> GetWorkshopItemProperties(WorkshopType workshopType)
		{
			Workshop workshop = this.Workshop;
			int? num;
			if (workshop == null)
			{
				num = null;
			}
			else
			{
				Settlement settlement = workshop.Settlement;
				if (settlement == null)
				{
					num = null;
				}
				else
				{
					Town town = settlement.Town;
					if (town == null)
					{
						num = null;
					}
					else
					{
						Workshop[] workshops = town.Workshops;
						num = ((workshops != null) ? new int?(workshops.Count((Workshop x) => ((x != null) ? x.WorkshopType : null) == workshopType)) : null);
					}
				}
			}
			int num2 = num ?? 0;
			TextObject textObject = (num2 == 0) ? new TextObject("{=gu5xmV0E}No other {WORKSHOP_NAME} in this town.", null) : new TextObject("{=lhIpaGt9}There {?(COUNT > 1)}are{?}is{\\?} {COUNT} more {?(COUNT > 1)}{PLURAL(WORKSHOP_NAME)}{?}{WORKSHOP_NAME}{\\?} in this town.", null);
			textObject.SetTextVariable("WORKSHOP_NAME", workshopType.Name);
			textObject.SetTextVariable("COUNT", num2);
			TextObject inputsText;
			TextObject outputsText;
			ClanFinanceWorkshopItemVM.GetWorkshopTypeProductionTexts(workshopType, out inputsText, out outputsText);
			yield return new ClanCardSelectionItemPropertyInfo(textObject);
			yield return new ClanCardSelectionItemPropertyInfo(ClanCardSelectionItemPropertyInfo.CreateLabeledValueText(new TextObject("{=XCz81XYm}Inputs", null), inputsText));
			yield return new ClanCardSelectionItemPropertyInfo(ClanCardSelectionItemPropertyInfo.CreateLabeledValueText(new TextObject("{=ErnykQEH}Outputs", null), outputsText));
			yield break;
		}

		// Token: 0x06001AB7 RID: 6839 RVA: 0x00060F94 File Offset: 0x0005F194
		private void OnManageWorkshopDone(List<object> selectedItems, Action closePopup)
		{
			if (closePopup != null)
			{
				closePopup();
			}
			if (selectedItems.Count == 1)
			{
				WorkshopType workshopType = (WorkshopType)selectedItems[0];
				if (workshopType == null)
				{
					if (this.Workshop.Settlement.Town.Workshops.Count((Workshop x) => x.Owner == Hero.MainHero) == 1)
					{
						bool flag = Hero.MainHero.CurrentSettlement == this.Workshop.Settlement;
						InformationManager.ShowInquiry(new InquiryData(new TextObject("{=HiJTlBgF}Sell Workshop", null).ToString(), flag ? new TextObject("{=s06mScpJ}If you have goods in the warehouse, they will be transferred to your party. Are you sure?", null).ToString() : new TextObject("{=yuxBDKgM}If you have goods in the warehouse, they will be lost! Are you sure?", null).ToString(), true, true, new TextObject("{=aeouhelq}Yes", null).ToString(), new TextObject("{=8OkPHu4f}No", null).ToString(), new Action(this.ExecuteSellWorkshop), null, "", 0f, null, null, null), false, false);
					}
					else
					{
						this.ExecuteSellWorkshop();
					}
				}
				else
				{
					ChangeProductionTypeOfWorkshopAction.Apply(this.Workshop, workshopType, false);
				}
				Action onRefresh = this._onRefresh;
				if (onRefresh == null)
				{
					return;
				}
				onRefresh();
			}
		}

		// Token: 0x06001AB8 RID: 6840 RVA: 0x000610C8 File Offset: 0x0005F2C8
		private void ExecuteSellWorkshop()
		{
			Hero notableOwnerForWorkshop = Campaign.Current.Models.WorkshopModel.GetNotableOwnerForWorkshop(this.Workshop);
			ChangeOwnerOfWorkshopAction.ApplyByPlayerSelling(this.Workshop, notableOwnerForWorkshop, this.Workshop.WorkshopType);
			Action onRefresh = this._onRefresh;
			if (onRefresh == null)
			{
				return;
			}
			onRefresh();
		}

		// Token: 0x17000925 RID: 2341
		// (get) Token: 0x06001AB9 RID: 6841 RVA: 0x00061117 File Offset: 0x0005F317
		// (set) Token: 0x06001ABA RID: 6842 RVA: 0x0006111F File Offset: 0x0005F31F
		[DataSourceProperty]
		public HintViewModel UseWarehouseAsInputHint
		{
			get
			{
				return this._useWarehouseAsInputHint;
			}
			set
			{
				if (value != this._useWarehouseAsInputHint)
				{
					this._useWarehouseAsInputHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "UseWarehouseAsInputHint");
				}
			}
		}

		// Token: 0x17000926 RID: 2342
		// (get) Token: 0x06001ABB RID: 6843 RVA: 0x0006113D File Offset: 0x0005F33D
		// (set) Token: 0x06001ABC RID: 6844 RVA: 0x00061145 File Offset: 0x0005F345
		[DataSourceProperty]
		public HintViewModel StoreOutputPercentageHint
		{
			get
			{
				return this._storeOutputPercentageHint;
			}
			set
			{
				if (value != this._storeOutputPercentageHint)
				{
					this._storeOutputPercentageHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "StoreOutputPercentageHint");
				}
			}
		}

		// Token: 0x17000927 RID: 2343
		// (get) Token: 0x06001ABD RID: 6845 RVA: 0x00061163 File Offset: 0x0005F363
		// (set) Token: 0x06001ABE RID: 6846 RVA: 0x0006116B File Offset: 0x0005F36B
		[DataSourceProperty]
		public HintViewModel ManageWorkshopHint
		{
			get
			{
				return this._manageWorkshopHint;
			}
			set
			{
				if (value != this._manageWorkshopHint)
				{
					this._manageWorkshopHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ManageWorkshopHint");
				}
			}
		}

		// Token: 0x17000928 RID: 2344
		// (get) Token: 0x06001ABF RID: 6847 RVA: 0x00061189 File Offset: 0x0005F389
		// (set) Token: 0x06001AC0 RID: 6848 RVA: 0x00061191 File Offset: 0x0005F391
		[DataSourceProperty]
		public BasicTooltipViewModel InputWarehouseCountsTooltip
		{
			get
			{
				return this._inputWarehouseCountsTooltip;
			}
			set
			{
				if (value != this._inputWarehouseCountsTooltip)
				{
					this._inputWarehouseCountsTooltip = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "InputWarehouseCountsTooltip");
				}
			}
		}

		// Token: 0x17000929 RID: 2345
		// (get) Token: 0x06001AC1 RID: 6849 RVA: 0x000611AF File Offset: 0x0005F3AF
		// (set) Token: 0x06001AC2 RID: 6850 RVA: 0x000611B7 File Offset: 0x0005F3B7
		[DataSourceProperty]
		public BasicTooltipViewModel OutputWarehouseCountsTooltip
		{
			get
			{
				return this._outputWarehouseCountsTooltip;
			}
			set
			{
				if (value != this._outputWarehouseCountsTooltip)
				{
					this._outputWarehouseCountsTooltip = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "OutputWarehouseCountsTooltip");
				}
			}
		}

		// Token: 0x1700092A RID: 2346
		// (get) Token: 0x06001AC3 RID: 6851 RVA: 0x000611D5 File Offset: 0x0005F3D5
		// (set) Token: 0x06001AC4 RID: 6852 RVA: 0x000611DD File Offset: 0x0005F3DD
		public string WorkshopTypeId
		{
			get
			{
				return this._workshopTypeId;
			}
			set
			{
				if (value != this._workshopTypeId)
				{
					this._workshopTypeId = value;
					base.OnPropertyChangedWithValue<string>(value, "WorkshopTypeId");
				}
			}
		}

		// Token: 0x1700092B RID: 2347
		// (get) Token: 0x06001AC5 RID: 6853 RVA: 0x00061200 File Offset: 0x0005F400
		// (set) Token: 0x06001AC6 RID: 6854 RVA: 0x00061208 File Offset: 0x0005F408
		public string InputsText
		{
			get
			{
				return this._inputsText;
			}
			set
			{
				if (value != this._inputsText)
				{
					this._inputsText = value;
					base.OnPropertyChangedWithValue<string>(value, "InputsText");
				}
			}
		}

		// Token: 0x1700092C RID: 2348
		// (get) Token: 0x06001AC7 RID: 6855 RVA: 0x0006122B File Offset: 0x0005F42B
		// (set) Token: 0x06001AC8 RID: 6856 RVA: 0x00061233 File Offset: 0x0005F433
		public string OutputsText
		{
			get
			{
				return this._outputsText;
			}
			set
			{
				if (value != this._outputsText)
				{
					this._outputsText = value;
					base.OnPropertyChangedWithValue<string>(value, "OutputsText");
				}
			}
		}

		// Token: 0x1700092D RID: 2349
		// (get) Token: 0x06001AC9 RID: 6857 RVA: 0x00061256 File Offset: 0x0005F456
		// (set) Token: 0x06001ACA RID: 6858 RVA: 0x0006125E File Offset: 0x0005F45E
		public string InputProducts
		{
			get
			{
				return this._inputProducts;
			}
			set
			{
				if (value != this._inputProducts)
				{
					this._inputProducts = value;
					base.OnPropertyChangedWithValue<string>(value, "InputProducts");
				}
			}
		}

		// Token: 0x1700092E RID: 2350
		// (get) Token: 0x06001ACB RID: 6859 RVA: 0x00061281 File Offset: 0x0005F481
		// (set) Token: 0x06001ACC RID: 6860 RVA: 0x00061289 File Offset: 0x0005F489
		public string OutputProducts
		{
			get
			{
				return this._outputProducts;
			}
			set
			{
				if (value != this._outputProducts)
				{
					this._outputProducts = value;
					base.OnPropertyChangedWithValue<string>(value, "OutputProducts");
				}
			}
		}

		// Token: 0x1700092F RID: 2351
		// (get) Token: 0x06001ACD RID: 6861 RVA: 0x000612AC File Offset: 0x0005F4AC
		// (set) Token: 0x06001ACE RID: 6862 RVA: 0x000612B4 File Offset: 0x0005F4B4
		public string UseWarehouseAsInputText
		{
			get
			{
				return this._useWarehouseAsInputText;
			}
			set
			{
				if (value != this._useWarehouseAsInputText)
				{
					this._useWarehouseAsInputText = value;
					base.OnPropertyChangedWithValue<string>(value, "UseWarehouseAsInputText");
				}
			}
		}

		// Token: 0x17000930 RID: 2352
		// (get) Token: 0x06001ACF RID: 6863 RVA: 0x000612D7 File Offset: 0x0005F4D7
		// (set) Token: 0x06001AD0 RID: 6864 RVA: 0x000612DF File Offset: 0x0005F4DF
		public string StoreOutputPercentageText
		{
			get
			{
				return this._storeOutputPercentageText;
			}
			set
			{
				if (value != this._storeOutputPercentageText)
				{
					this._storeOutputPercentageText = value;
					base.OnPropertyChangedWithValue<string>(value, "StoreOutputPercentageText");
				}
			}
		}

		// Token: 0x17000931 RID: 2353
		// (get) Token: 0x06001AD1 RID: 6865 RVA: 0x00061302 File Offset: 0x0005F502
		// (set) Token: 0x06001AD2 RID: 6866 RVA: 0x0006130A File Offset: 0x0005F50A
		public string WarehouseCapacityText
		{
			get
			{
				return this._warehouseCapacityText;
			}
			set
			{
				if (value != this._warehouseCapacityText)
				{
					this._warehouseCapacityText = value;
					base.OnPropertyChangedWithValue<string>(value, "WarehouseCapacityText");
				}
			}
		}

		// Token: 0x17000932 RID: 2354
		// (get) Token: 0x06001AD3 RID: 6867 RVA: 0x0006132D File Offset: 0x0005F52D
		// (set) Token: 0x06001AD4 RID: 6868 RVA: 0x00061335 File Offset: 0x0005F535
		public string WarehouseCapacityValue
		{
			get
			{
				return this._warehouseCapacityValue;
			}
			set
			{
				if (value != this._warehouseCapacityValue)
				{
					this._warehouseCapacityValue = value;
					base.OnPropertyChangedWithValue<string>(value, "WarehouseCapacityValue");
				}
			}
		}

		// Token: 0x17000933 RID: 2355
		// (get) Token: 0x06001AD5 RID: 6869 RVA: 0x00061358 File Offset: 0x0005F558
		// (set) Token: 0x06001AD6 RID: 6870 RVA: 0x00061360 File Offset: 0x0005F560
		public bool ReceiveInputFromWarehouse
		{
			get
			{
				return this._receiveInputFromWarehouse;
			}
			set
			{
				if (value != this._receiveInputFromWarehouse)
				{
					this._receiveInputFromWarehouse = value;
					base.OnPropertyChangedWithValue(value, "ReceiveInputFromWarehouse");
				}
			}
		}

		// Token: 0x17000934 RID: 2356
		// (get) Token: 0x06001AD7 RID: 6871 RVA: 0x0006137E File Offset: 0x0005F57E
		// (set) Token: 0x06001AD8 RID: 6872 RVA: 0x00061386 File Offset: 0x0005F586
		public int WarehouseInputAmount
		{
			get
			{
				return this._warehouseInputAmount;
			}
			set
			{
				if (value != this._warehouseInputAmount)
				{
					this._warehouseInputAmount = value;
					base.OnPropertyChangedWithValue(value, "WarehouseInputAmount");
				}
			}
		}

		// Token: 0x17000935 RID: 2357
		// (get) Token: 0x06001AD9 RID: 6873 RVA: 0x000613A4 File Offset: 0x0005F5A4
		// (set) Token: 0x06001ADA RID: 6874 RVA: 0x000613AC File Offset: 0x0005F5AC
		public int WarehouseOutputAmount
		{
			get
			{
				return this._warehouseOutputAmount;
			}
			set
			{
				if (value != this._warehouseOutputAmount)
				{
					this._warehouseOutputAmount = value;
					base.OnPropertyChangedWithValue(value, "WarehouseOutputAmount");
				}
			}
		}

		// Token: 0x17000936 RID: 2358
		// (get) Token: 0x06001ADB RID: 6875 RVA: 0x000613CA File Offset: 0x0005F5CA
		// (set) Token: 0x06001ADC RID: 6876 RVA: 0x000613D2 File Offset: 0x0005F5D2
		public SelectorVM<WorkshopPercentageSelectorItemVM> WarehousePercentageSelector
		{
			get
			{
				return this._warehousePercentageSelector;
			}
			set
			{
				if (value != this._warehousePercentageSelector)
				{
					this._warehousePercentageSelector = value;
					base.OnPropertyChangedWithValue<SelectorVM<WorkshopPercentageSelectorItemVM>>(value, "WarehousePercentageSelector");
				}
			}
		}

		// Token: 0x04000C96 RID: 3222
		private readonly TextObject _runningText = new TextObject("{=iuKvbKJ7}Running", null);

		// Token: 0x04000C97 RID: 3223
		private readonly TextObject _haltedText = new TextObject("{=zgnEagTJ}Halted", null);

		// Token: 0x04000C98 RID: 3224
		private readonly TextObject _noRawMaterialsText = new TextObject("{=JRKC4ed4}This workshop has not been producing for {DAY} {?PLURAL_DAYS}days{?}day{\\?} due to lack of raw materials in the town market.", null);

		// Token: 0x04000C99 RID: 3225
		private readonly TextObject _noProfitText = new TextObject("{=no0chrAH}This workshop has not been running for {DAY} {?PLURAL_DAYS}days{?}day{\\?} because the production has not been profitable", null);

		// Token: 0x04000C9A RID: 3226
		private readonly IWorkshopWarehouseCampaignBehavior _workshopWarehouseBehavior;

		// Token: 0x04000C9B RID: 3227
		private readonly WorkshopModel _workshopModel;

		// Token: 0x04000C9C RID: 3228
		private readonly Action<ClanCardSelectionInfo> _openCardSelectionPopup;

		// Token: 0x04000C9D RID: 3229
		private readonly Action<ClanFinanceWorkshopItemVM> _onSelectionT;

		// Token: 0x04000C9E RID: 3230
		private ExplainedNumber _inputDetails;

		// Token: 0x04000C9F RID: 3231
		private ExplainedNumber _outputDetails;

		// Token: 0x04000CA0 RID: 3232
		private HintViewModel _useWarehouseAsInputHint;

		// Token: 0x04000CA1 RID: 3233
		private HintViewModel _storeOutputPercentageHint;

		// Token: 0x04000CA2 RID: 3234
		private HintViewModel _manageWorkshopHint;

		// Token: 0x04000CA3 RID: 3235
		private BasicTooltipViewModel _inputWarehouseCountsTooltip;

		// Token: 0x04000CA4 RID: 3236
		private BasicTooltipViewModel _outputWarehouseCountsTooltip;

		// Token: 0x04000CA5 RID: 3237
		private string _workshopTypeId;

		// Token: 0x04000CA6 RID: 3238
		private string _inputsText;

		// Token: 0x04000CA7 RID: 3239
		private string _outputsText;

		// Token: 0x04000CA8 RID: 3240
		private string _inputProducts;

		// Token: 0x04000CA9 RID: 3241
		private string _outputProducts;

		// Token: 0x04000CAA RID: 3242
		private string _useWarehouseAsInputText;

		// Token: 0x04000CAB RID: 3243
		private string _storeOutputPercentageText;

		// Token: 0x04000CAC RID: 3244
		private string _warehouseCapacityText;

		// Token: 0x04000CAD RID: 3245
		private string _warehouseCapacityValue;

		// Token: 0x04000CAE RID: 3246
		private bool _receiveInputFromWarehouse;

		// Token: 0x04000CAF RID: 3247
		private int _warehouseInputAmount;

		// Token: 0x04000CB0 RID: 3248
		private int _warehouseOutputAmount;

		// Token: 0x04000CB1 RID: 3249
		private SelectorVM<WorkshopPercentageSelectorItemVM> _warehousePercentageSelector;
	}
}
