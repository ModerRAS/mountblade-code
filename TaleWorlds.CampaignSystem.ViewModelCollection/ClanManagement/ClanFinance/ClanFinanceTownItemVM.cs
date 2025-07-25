using System;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement.ClanFinance
{
	// Token: 0x02000116 RID: 278
	public class ClanFinanceTownItemVM : ClanFinanceIncomeItemBaseVM
	{
		// Token: 0x1700091D RID: 2333
		// (get) Token: 0x06001A94 RID: 6804 RVA: 0x00060261 File Offset: 0x0005E461
		// (set) Token: 0x06001A95 RID: 6805 RVA: 0x00060269 File Offset: 0x0005E469
		public Settlement Settlement { get; private set; }

		// Token: 0x06001A96 RID: 6806 RVA: 0x00060274 File Offset: 0x0005E474
		public ClanFinanceTownItemVM(Settlement settlement, TaxType taxType, Action<ClanFinanceIncomeItemBaseVM> onSelection, Action onRefresh) : base(onSelection, onRefresh)
		{
			base.IncomeTypeAsEnum = IncomeTypes.Settlement;
			this.Settlement = settlement;
			MBTextManager.SetTextVariable("SETTLEMENT_NAME", settlement.Name.ToString(), false);
			base.Name = ((taxType == TaxType.ProsperityTax) ? GameTexts.FindText("str_prosperity_tax", null).ToString() : GameTexts.FindText("str_trade_tax", null).ToString());
			this.IsUnderSiege = settlement.IsUnderSiege;
			this.IsUnderSiegeHint = new HintViewModel(new TextObject("{=!}PLACEHOLDER | THIS SETTLEMENT IS UNDER SIEGE", null), null);
			this.IsUnderRebellion = settlement.IsUnderRebellionAttack();
			this.IsUnderRebellionHint = new HintViewModel(new TextObject("{=!}PLACEHOLDER | THIS SETTLEMENT IS UNDER REBELLION", null), null);
			if (taxType == TaxType.ProsperityTax && settlement.Town != null)
			{
				float resultNumber = Campaign.Current.Models.SettlementTaxModel.CalculateTownTax(settlement.Town, false).ResultNumber;
				base.Income = (this.IsUnderRebellion ? 0 : ((int)resultNumber));
			}
			else if (taxType == TaxType.TradeTax)
			{
				if (settlement.Town != null)
				{
					base.Income = (int)((float)settlement.Town.TradeTaxAccumulated / Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction());
				}
				else if (settlement.Village != null)
				{
					base.Income = ((settlement.Village.VillageState == Village.VillageStates.Looted || settlement.Village.VillageState == Village.VillageStates.BeingRaided) ? 0 : ((int)((float)settlement.Village.TradeTaxAccumulated / Campaign.Current.Models.ClanFinanceModel.RevenueSmoothenFraction())));
				}
			}
			base.IncomeValueText = base.DetermineIncomeText(base.Income);
			this.HasGovernor = (settlement.IsTown && settlement.Town.Governor != null);
		}

		// Token: 0x06001A97 RID: 6807 RVA: 0x0006041F File Offset: 0x0005E61F
		protected override void PopulateActionList()
		{
		}

		// Token: 0x06001A98 RID: 6808 RVA: 0x00060421 File Offset: 0x0005E621
		protected override void PopulateStatsList()
		{
		}

		// Token: 0x1700091E RID: 2334
		// (get) Token: 0x06001A99 RID: 6809 RVA: 0x00060423 File Offset: 0x0005E623
		// (set) Token: 0x06001A9A RID: 6810 RVA: 0x0006042B File Offset: 0x0005E62B
		[DataSourceProperty]
		public bool IsUnderSiege
		{
			get
			{
				return this._isUnderSiege;
			}
			set
			{
				if (value != this._isUnderSiege)
				{
					this._isUnderSiege = value;
					base.OnPropertyChangedWithValue(value, "IsUnderSiege");
				}
			}
		}

		// Token: 0x1700091F RID: 2335
		// (get) Token: 0x06001A9B RID: 6811 RVA: 0x00060449 File Offset: 0x0005E649
		// (set) Token: 0x06001A9C RID: 6812 RVA: 0x00060451 File Offset: 0x0005E651
		[DataSourceProperty]
		public bool IsUnderRebellion
		{
			get
			{
				return this._isUnderRebellion;
			}
			set
			{
				if (value != this._isUnderRebellion)
				{
					this._isUnderRebellion = value;
					base.OnPropertyChangedWithValue(value, "IsUnderRebellion");
				}
			}
		}

		// Token: 0x17000920 RID: 2336
		// (get) Token: 0x06001A9D RID: 6813 RVA: 0x0006046F File Offset: 0x0005E66F
		// (set) Token: 0x06001A9E RID: 6814 RVA: 0x00060477 File Offset: 0x0005E677
		[DataSourceProperty]
		public HintViewModel IsUnderSiegeHint
		{
			get
			{
				return this._isUnderSiegeHint;
			}
			set
			{
				if (value != this._isUnderSiegeHint)
				{
					this._isUnderSiegeHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "IsUnderSiegeHint");
				}
			}
		}

		// Token: 0x17000921 RID: 2337
		// (get) Token: 0x06001A9F RID: 6815 RVA: 0x00060495 File Offset: 0x0005E695
		// (set) Token: 0x06001AA0 RID: 6816 RVA: 0x0006049D File Offset: 0x0005E69D
		[DataSourceProperty]
		public HintViewModel IsUnderRebellionHint
		{
			get
			{
				return this._isUnderRebellionHint;
			}
			set
			{
				if (value != this._isUnderRebellionHint)
				{
					this._isUnderRebellionHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "IsUnderRebellionHint");
				}
			}
		}

		// Token: 0x17000922 RID: 2338
		// (get) Token: 0x06001AA1 RID: 6817 RVA: 0x000604BB File Offset: 0x0005E6BB
		// (set) Token: 0x06001AA2 RID: 6818 RVA: 0x000604C3 File Offset: 0x0005E6C3
		[DataSourceProperty]
		public bool HasGovernor
		{
			get
			{
				return this._hasGovernor;
			}
			set
			{
				if (value != this._hasGovernor)
				{
					this._hasGovernor = value;
					base.OnPropertyChangedWithValue(value, "HasGovernor");
				}
			}
		}

		// Token: 0x17000923 RID: 2339
		// (get) Token: 0x06001AA3 RID: 6819 RVA: 0x000604E1 File Offset: 0x0005E6E1
		// (set) Token: 0x06001AA4 RID: 6820 RVA: 0x000604E9 File Offset: 0x0005E6E9
		[DataSourceProperty]
		public HintViewModel GovernorHint
		{
			get
			{
				return this._governorHint;
			}
			set
			{
				if (value != this._governorHint)
				{
					this._governorHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "GovernorHint");
				}
			}
		}

		// Token: 0x04000C8F RID: 3215
		private bool _isUnderSiege;

		// Token: 0x04000C90 RID: 3216
		private bool _isUnderRebellion;

		// Token: 0x04000C91 RID: 3217
		private HintViewModel _isUnderSiegeHint;

		// Token: 0x04000C92 RID: 3218
		private HintViewModel _isUnderRebellionHint;

		// Token: 0x04000C93 RID: 3219
		private HintViewModel _governorHint;

		// Token: 0x04000C94 RID: 3220
		private bool _hasGovernor;
	}
}
