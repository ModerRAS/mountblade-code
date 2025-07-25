using System;
using Helpers;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TownManagement
{
	// Token: 0x02000098 RID: 152
	public class TownManagementReserveControlVM : ViewModel
	{
		// Token: 0x06000EC5 RID: 3781 RVA: 0x0003AE70 File Offset: 0x00039070
		public TownManagementReserveControlVM(Settlement settlement, Action onReserveUpdated)
		{
			this._settlement = settlement;
			this._onReserveUpdated = onReserveUpdated;
			if (((settlement != null) ? settlement.Town : null) != null)
			{
				this.CurrentReserveAmount = Settlement.CurrentSettlement.Town.BoostBuildingProcess;
				this.CurrentGivenAmount = 0;
				this.MaxReserveAmount = MathF.Min(Hero.MainHero.Gold, 10000);
			}
			this.RefreshValues();
		}

		// Token: 0x06000EC6 RID: 3782 RVA: 0x0003AEDC File Offset: 0x000390DC
		public override void RefreshValues()
		{
			base.RefreshValues();
			Settlement settlement = this._settlement;
			if (((settlement != null) ? settlement.Town : null) != null)
			{
				this.ReserveText = new TextObject("{=2ckyCKR7}Reserve", null).ToString();
				GameTexts.SetVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
				this.UpdateReserveText();
			}
		}

		// Token: 0x06000EC7 RID: 3783 RVA: 0x0003AF30 File Offset: 0x00039130
		private void UpdateReserveText()
		{
			TextObject textObject = GameTexts.FindText("str_town_management_reserve_explanation", null);
			textObject.SetTextVariable("BOOST", Campaign.Current.Models.BuildingConstructionModel.GetBoostAmount(this._settlement.Town));
			textObject.SetTextVariable("COST", Campaign.Current.Models.BuildingConstructionModel.GetBoostCost(this._settlement.Town));
			this.ReserveBonusText = textObject.ToString();
		}

		// Token: 0x06000EC8 RID: 3784 RVA: 0x0003AFAC File Offset: 0x000391AC
		public void ExecuteUpdateReserve()
		{
			this.IsEnabled = false;
			BuildingHelper.BoostBuildingProcessWithGold(this.CurrentReserveAmount + this.CurrentGivenAmount, Settlement.CurrentSettlement.Town);
			this.CurrentGivenAmount = 0;
			GameTexts.SetVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
			this.UpdateReserveText();
			this.MaxReserveAmount = MathF.Min(Hero.MainHero.Gold, 10000);
			this.CurrentReserveAmount = Settlement.CurrentSettlement.Town.BoostBuildingProcess;
			Action onReserveUpdated = this._onReserveUpdated;
			if (onReserveUpdated == null)
			{
				return;
			}
			onReserveUpdated();
		}

		// Token: 0x170004D3 RID: 1235
		// (get) Token: 0x06000EC9 RID: 3785 RVA: 0x0003B037 File Offset: 0x00039237
		// (set) Token: 0x06000ECA RID: 3786 RVA: 0x0003B03F File Offset: 0x0003923F
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

		// Token: 0x170004D4 RID: 1236
		// (get) Token: 0x06000ECB RID: 3787 RVA: 0x0003B05D File Offset: 0x0003925D
		// (set) Token: 0x06000ECC RID: 3788 RVA: 0x0003B068 File Offset: 0x00039268
		[DataSourceProperty]
		public int CurrentReserveAmount
		{
			get
			{
				return this._currentReserveAmount;
			}
			set
			{
				if (value != this._currentReserveAmount)
				{
					this._currentReserveAmount = value;
					base.OnPropertyChangedWithValue(value, "CurrentReserveAmount");
					this.CurrentReserveText = (this.CurrentGivenAmount + value).ToString();
				}
			}
		}

		// Token: 0x170004D5 RID: 1237
		// (get) Token: 0x06000ECD RID: 3789 RVA: 0x0003B0A7 File Offset: 0x000392A7
		// (set) Token: 0x06000ECE RID: 3790 RVA: 0x0003B0AF File Offset: 0x000392AF
		[DataSourceProperty]
		public int CurrentGivenAmount
		{
			get
			{
				return this._currentGivenAmount;
			}
			set
			{
				if (value != this._currentGivenAmount)
				{
					this._currentGivenAmount = value;
					base.OnPropertyChangedWithValue(value, "CurrentGivenAmount");
				}
			}
		}

		// Token: 0x170004D6 RID: 1238
		// (get) Token: 0x06000ECF RID: 3791 RVA: 0x0003B0CD File Offset: 0x000392CD
		// (set) Token: 0x06000ED0 RID: 3792 RVA: 0x0003B0D5 File Offset: 0x000392D5
		[DataSourceProperty]
		public int MaxReserveAmount
		{
			get
			{
				return this._maxReserveAmount;
			}
			set
			{
				if (value != this._maxReserveAmount)
				{
					this._maxReserveAmount = value;
					base.OnPropertyChangedWithValue(value, "MaxReserveAmount");
				}
			}
		}

		// Token: 0x170004D7 RID: 1239
		// (get) Token: 0x06000ED1 RID: 3793 RVA: 0x0003B0F3 File Offset: 0x000392F3
		// (set) Token: 0x06000ED2 RID: 3794 RVA: 0x0003B0FB File Offset: 0x000392FB
		[DataSourceProperty]
		public string ReserveBonusText
		{
			get
			{
				return this._reserveBonusText;
			}
			set
			{
				if (value != this._reserveBonusText)
				{
					this._reserveBonusText = value;
					base.OnPropertyChangedWithValue<string>(value, "ReserveBonusText");
				}
			}
		}

		// Token: 0x170004D8 RID: 1240
		// (get) Token: 0x06000ED3 RID: 3795 RVA: 0x0003B11E File Offset: 0x0003931E
		// (set) Token: 0x06000ED4 RID: 3796 RVA: 0x0003B126 File Offset: 0x00039326
		[DataSourceProperty]
		public string ReserveText
		{
			get
			{
				return this._reserveText;
			}
			set
			{
				if (value != this._reserveText)
				{
					this._reserveText = value;
					base.OnPropertyChangedWithValue<string>(value, "ReserveText");
				}
			}
		}

		// Token: 0x170004D9 RID: 1241
		// (get) Token: 0x06000ED5 RID: 3797 RVA: 0x0003B149 File Offset: 0x00039349
		// (set) Token: 0x06000ED6 RID: 3798 RVA: 0x0003B151 File Offset: 0x00039351
		[DataSourceProperty]
		public string CurrentReserveText
		{
			get
			{
				return this._currentReserveText;
			}
			set
			{
				if (value != this._currentReserveText)
				{
					this._currentReserveText = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentReserveText");
				}
			}
		}

		// Token: 0x040006DC RID: 1756
		private readonly Action _onReserveUpdated;

		// Token: 0x040006DD RID: 1757
		private readonly Settlement _settlement;

		// Token: 0x040006DE RID: 1758
		private const int MaxOneTimeAmount = 10000;

		// Token: 0x040006DF RID: 1759
		private bool _isEnabled;

		// Token: 0x040006E0 RID: 1760
		private string _reserveText;

		// Token: 0x040006E1 RID: 1761
		private int _currentReserveAmount;

		// Token: 0x040006E2 RID: 1762
		private int _currentGivenAmount;

		// Token: 0x040006E3 RID: 1763
		private int _maxReserveAmount;

		// Token: 0x040006E4 RID: 1764
		private string _reserveBonusText;

		// Token: 0x040006E5 RID: 1765
		private string _currentReserveText;
	}
}
