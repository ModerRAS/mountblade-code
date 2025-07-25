using System;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting
{
	// Token: 0x020000DD RID: 221
	public class CraftingListPropertyItem : ViewModel
	{
		// Token: 0x06001487 RID: 5255 RVA: 0x0004E19C File Offset: 0x0004C39C
		public CraftingListPropertyItem(TextObject description, float maxValue, float value, float targetValue, CraftingTemplate.CraftingStatTypes propertyType, bool isAlternativeUsageProperty = false)
		{
			this.Description = description;
			this.PropertyMaxValue = maxValue;
			this.PropertyValue = value;
			this.TargetValue = targetValue;
			this.IsAlternativeUsageProperty = isAlternativeUsageProperty;
			this.Type = propertyType;
			this.RefreshValues();
		}

		// Token: 0x06001488 RID: 5256 RVA: 0x0004E1F0 File Offset: 0x0004C3F0
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.HasValidTarget = (this.TargetValue > float.Epsilon);
			this.HasValidValue = (this.PropertyValue > float.Epsilon);
			TextObject description = this.Description;
			this.PropertyLbl = ((description != null) ? description.ToString() : null);
			this.IsExceedingBeneficial = this.CheckIfExceedingIsBeneficial();
			this.SeparatorText = new TextObject("{=dB6cFDmz}/", null).ToString();
			this.PropertyValueText = CampaignUIHelper.GetFormattedItemPropertyText(this.PropertyValue, this.GetIsTypeRequireInteger(this.Type));
			if (this.HasValidTarget)
			{
				this.TargetValueText = CampaignUIHelper.GetFormattedItemPropertyText(this.TargetValue, this.GetIsTypeRequireInteger(this.Type));
			}
		}

		// Token: 0x06001489 RID: 5257 RVA: 0x0004E2A5 File Offset: 0x0004C4A5
		private bool CheckIfExceedingIsBeneficial()
		{
			return this.Type > CraftingTemplate.CraftingStatTypes.Weight;
		}

		// Token: 0x0600148A RID: 5258 RVA: 0x0004E2B0 File Offset: 0x0004C4B0
		private bool GetIsTypeRequireInteger(CraftingTemplate.CraftingStatTypes type)
		{
			return type == CraftingTemplate.CraftingStatTypes.StackAmount;
		}

		// Token: 0x170006E2 RID: 1762
		// (get) Token: 0x0600148B RID: 5259 RVA: 0x0004E2B7 File Offset: 0x0004C4B7
		// (set) Token: 0x0600148C RID: 5260 RVA: 0x0004E2BF File Offset: 0x0004C4BF
		[DataSourceProperty]
		public bool IsValidForUsage
		{
			get
			{
				return this._showStats;
			}
			set
			{
				if (value != this._showStats)
				{
					this._showStats = value;
					base.OnPropertyChangedWithValue(value, "IsValidForUsage");
				}
			}
		}

		// Token: 0x170006E3 RID: 1763
		// (get) Token: 0x0600148D RID: 5261 RVA: 0x0004E2DD File Offset: 0x0004C4DD
		// (set) Token: 0x0600148E RID: 5262 RVA: 0x0004E2E5 File Offset: 0x0004C4E5
		[DataSourceProperty]
		public bool IsExceedingBeneficial
		{
			get
			{
				return this._isExceedingBeneficial;
			}
			set
			{
				if (value != this._isExceedingBeneficial)
				{
					this._isExceedingBeneficial = value;
					base.OnPropertyChangedWithValue(value, "IsExceedingBeneficial");
				}
			}
		}

		// Token: 0x170006E4 RID: 1764
		// (get) Token: 0x0600148F RID: 5263 RVA: 0x0004E303 File Offset: 0x0004C503
		// (set) Token: 0x06001490 RID: 5264 RVA: 0x0004E30B File Offset: 0x0004C50B
		[DataSourceProperty]
		public bool HasValidTarget
		{
			get
			{
				return this._hasValidTarget;
			}
			set
			{
				if (value != this._hasValidTarget)
				{
					this._hasValidTarget = value;
					base.OnPropertyChangedWithValue(value, "HasValidTarget");
				}
			}
		}

		// Token: 0x170006E5 RID: 1765
		// (get) Token: 0x06001491 RID: 5265 RVA: 0x0004E329 File Offset: 0x0004C529
		// (set) Token: 0x06001492 RID: 5266 RVA: 0x0004E331 File Offset: 0x0004C531
		[DataSourceProperty]
		public bool HasValidValue
		{
			get
			{
				return this._hasValidValue;
			}
			set
			{
				if (value != this._hasValidValue)
				{
					this._hasValidValue = value;
					base.OnPropertyChangedWithValue(value, "HasValidValue");
				}
			}
		}

		// Token: 0x170006E6 RID: 1766
		// (get) Token: 0x06001493 RID: 5267 RVA: 0x0004E34F File Offset: 0x0004C54F
		// (set) Token: 0x06001494 RID: 5268 RVA: 0x0004E357 File Offset: 0x0004C557
		[DataSourceProperty]
		public float TargetValue
		{
			get
			{
				return this._targetValue;
			}
			set
			{
				if (value != this._targetValue)
				{
					this._targetValue = value;
					base.OnPropertyChangedWithValue(value, "TargetValue");
				}
			}
		}

		// Token: 0x170006E7 RID: 1767
		// (get) Token: 0x06001495 RID: 5269 RVA: 0x0004E375 File Offset: 0x0004C575
		// (set) Token: 0x06001496 RID: 5270 RVA: 0x0004E37D File Offset: 0x0004C57D
		[DataSourceProperty]
		public string TargetValueText
		{
			get
			{
				return this._targetValueText;
			}
			set
			{
				if (value != this._targetValueText)
				{
					this._targetValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "TargetValueText");
				}
			}
		}

		// Token: 0x170006E8 RID: 1768
		// (get) Token: 0x06001497 RID: 5271 RVA: 0x0004E3A0 File Offset: 0x0004C5A0
		// (set) Token: 0x06001498 RID: 5272 RVA: 0x0004E3A8 File Offset: 0x0004C5A8
		[DataSourceProperty]
		public bool IsAlternativeUsageProperty
		{
			get
			{
				return this._isAlternativeUsageProperty;
			}
			set
			{
				if (this._isAlternativeUsageProperty != value)
				{
					this._isAlternativeUsageProperty = value;
					base.OnPropertyChangedWithValue(value, "IsAlternativeUsageProperty");
				}
			}
		}

		// Token: 0x170006E9 RID: 1769
		// (get) Token: 0x06001499 RID: 5273 RVA: 0x0004E3C6 File Offset: 0x0004C5C6
		// (set) Token: 0x0600149A RID: 5274 RVA: 0x0004E3CE File Offset: 0x0004C5CE
		[DataSourceProperty]
		public string PropertyLbl
		{
			get
			{
				return this._propertyLbl;
			}
			set
			{
				if (value != this._propertyLbl)
				{
					this._propertyLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "PropertyLbl");
				}
			}
		}

		// Token: 0x170006EA RID: 1770
		// (get) Token: 0x0600149B RID: 5275 RVA: 0x0004E3F1 File Offset: 0x0004C5F1
		// (set) Token: 0x0600149C RID: 5276 RVA: 0x0004E3F9 File Offset: 0x0004C5F9
		[DataSourceProperty]
		public float PropertyValue
		{
			get
			{
				return this._propertyValue;
			}
			set
			{
				if (value == 0f || value != this._propertyValue)
				{
					this._propertyValue = value;
					base.OnPropertyChangedWithValue(value, "PropertyValue");
				}
			}
		}

		// Token: 0x170006EB RID: 1771
		// (get) Token: 0x0600149D RID: 5277 RVA: 0x0004E41F File Offset: 0x0004C61F
		// (set) Token: 0x0600149E RID: 5278 RVA: 0x0004E427 File Offset: 0x0004C627
		[DataSourceProperty]
		public float PropertyMaxValue
		{
			get
			{
				return this._propertyMaxValue;
			}
			set
			{
				if (value != this._propertyMaxValue)
				{
					this._propertyMaxValue = value;
					base.OnPropertyChangedWithValue(value, "PropertyMaxValue");
				}
			}
		}

		// Token: 0x170006EC RID: 1772
		// (get) Token: 0x0600149F RID: 5279 RVA: 0x0004E445 File Offset: 0x0004C645
		// (set) Token: 0x060014A0 RID: 5280 RVA: 0x0004E44D File Offset: 0x0004C64D
		[DataSourceProperty]
		public string PropertyValueText
		{
			get
			{
				return this._propertyValueText;
			}
			set
			{
				if (this._propertyValueText != value)
				{
					this._propertyValueText = value;
					base.OnPropertyChangedWithValue<string>(value, "PropertyValueText");
				}
			}
		}

		// Token: 0x170006ED RID: 1773
		// (get) Token: 0x060014A1 RID: 5281 RVA: 0x0004E470 File Offset: 0x0004C670
		// (set) Token: 0x060014A2 RID: 5282 RVA: 0x0004E478 File Offset: 0x0004C678
		[DataSourceProperty]
		public string SeparatorText
		{
			get
			{
				return this._separatorText;
			}
			set
			{
				if (value != this._separatorText)
				{
					this._separatorText = value;
					base.OnPropertyChangedWithValue<string>(value, "SeparatorText");
				}
			}
		}

		// Token: 0x0400098A RID: 2442
		public readonly TextObject Description;

		// Token: 0x0400098B RID: 2443
		public readonly CraftingTemplate.CraftingStatTypes Type;

		// Token: 0x0400098C RID: 2444
		private bool _showStats;

		// Token: 0x0400098D RID: 2445
		private bool _isExceedingBeneficial;

		// Token: 0x0400098E RID: 2446
		private bool _hasValidTarget;

		// Token: 0x0400098F RID: 2447
		private bool _hasValidValue;

		// Token: 0x04000990 RID: 2448
		private float _targetValue;

		// Token: 0x04000991 RID: 2449
		private string _targetValueText;

		// Token: 0x04000992 RID: 2450
		private string _propertyLbl;

		// Token: 0x04000993 RID: 2451
		private float _propertyValue;

		// Token: 0x04000994 RID: 2452
		private float _propertyMaxValue = -1f;

		// Token: 0x04000995 RID: 2453
		private string _propertyValueText;

		// Token: 0x04000996 RID: 2454
		public bool _isAlternativeUsageProperty;

		// Token: 0x04000997 RID: 2455
		private string _separatorText;
	}
}
