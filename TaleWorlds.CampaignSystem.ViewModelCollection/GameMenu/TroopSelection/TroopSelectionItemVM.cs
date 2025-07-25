using System;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TroopSelection
{
	// Token: 0x0200008F RID: 143
	public class TroopSelectionItemVM : ViewModel
	{
		// Token: 0x1700049B RID: 1179
		// (get) Token: 0x06000E23 RID: 3619 RVA: 0x00039562 File Offset: 0x00037762
		// (set) Token: 0x06000E24 RID: 3620 RVA: 0x0003956A File Offset: 0x0003776A
		public TroopRosterElement Troop { get; private set; }

		// Token: 0x06000E25 RID: 3621 RVA: 0x00039574 File Offset: 0x00037774
		public TroopSelectionItemVM(TroopRosterElement troop, Action<TroopSelectionItemVM> onAdd, Action<TroopSelectionItemVM> onRemove)
		{
			this._onAdd = onAdd;
			this._onRemove = onRemove;
			this.Troop = troop;
			this.MaxAmount = this.Troop.Number - this.Troop.WoundedNumber;
			this.Visual = new ImageIdentifierVM(CampaignUIHelper.GetCharacterCode(troop.Character, false));
			this.Name = troop.Character.Name.ToString();
			this.TierIconData = CampaignUIHelper.GetCharacterTierData(this.Troop.Character, false);
			this.TypeIconData = CampaignUIHelper.GetCharacterTypeData(this.Troop.Character, false);
			this.IsTroopHero = this.Troop.Character.IsHero;
			this.HeroHealthPercent = (this.Troop.Character.IsHero ? MathF.Ceiling((float)this.Troop.Character.HeroObject.HitPoints / (float)this.Troop.Character.MaxHitPoints() * 100f) : 0);
		}

		// Token: 0x06000E26 RID: 3622 RVA: 0x0003967E File Offset: 0x0003787E
		public void ExecuteAdd()
		{
			Action<TroopSelectionItemVM> onAdd = this._onAdd;
			if (onAdd == null)
			{
				return;
			}
			onAdd.DynamicInvokeWithLog(new object[]
			{
				this
			});
		}

		// Token: 0x06000E27 RID: 3623 RVA: 0x0003969B File Offset: 0x0003789B
		public void ExecuteRemove()
		{
			Action<TroopSelectionItemVM> onRemove = this._onRemove;
			if (onRemove == null)
			{
				return;
			}
			onRemove.DynamicInvokeWithLog(new object[]
			{
				this
			});
		}

		// Token: 0x06000E28 RID: 3624 RVA: 0x000396B8 File Offset: 0x000378B8
		private void UpdateAmountText()
		{
			GameTexts.SetVariable("LEFT", this.CurrentAmount);
			GameTexts.SetVariable("RIGHT", this.MaxAmount);
			this.AmountText = GameTexts.FindText("str_LEFT_over_RIGHT", null).ToString();
		}

		// Token: 0x06000E29 RID: 3625 RVA: 0x000396F0 File Offset: 0x000378F0
		public void ExecuteLink()
		{
			if (this.Troop.Character != null)
			{
				EncyclopediaManager encyclopediaManager = Campaign.Current.EncyclopediaManager;
				Hero heroObject = this.Troop.Character.HeroObject;
				encyclopediaManager.GoToLink(((heroObject != null) ? heroObject.EncyclopediaLink : null) ?? this.Troop.Character.EncyclopediaLink);
			}
		}

		// Token: 0x1700049C RID: 1180
		// (get) Token: 0x06000E2A RID: 3626 RVA: 0x00039749 File Offset: 0x00037949
		// (set) Token: 0x06000E2B RID: 3627 RVA: 0x00039751 File Offset: 0x00037951
		[DataSourceProperty]
		public int MaxAmount
		{
			get
			{
				return this._maxAmount;
			}
			set
			{
				if (value != this._maxAmount)
				{
					this._maxAmount = value;
					base.OnPropertyChangedWithValue(value, "MaxAmount");
					this.UpdateAmountText();
				}
			}
		}

		// Token: 0x1700049D RID: 1181
		// (get) Token: 0x06000E2C RID: 3628 RVA: 0x00039775 File Offset: 0x00037975
		// (set) Token: 0x06000E2D RID: 3629 RVA: 0x0003977D File Offset: 0x0003797D
		[DataSourceProperty]
		public bool IsSelected
		{
			get
			{
				return this._isSelected;
			}
			set
			{
				if (value != this._isSelected)
				{
					this._isSelected = value;
					base.OnPropertyChangedWithValue(value, "IsSelected");
				}
			}
		}

		// Token: 0x1700049E RID: 1182
		// (get) Token: 0x06000E2E RID: 3630 RVA: 0x0003979B File Offset: 0x0003799B
		// (set) Token: 0x06000E2F RID: 3631 RVA: 0x000397A3 File Offset: 0x000379A3
		[DataSourceProperty]
		public bool IsRosterFull
		{
			get
			{
				return this._isRosterFull;
			}
			set
			{
				if (value != this._isRosterFull)
				{
					this._isRosterFull = value;
					base.OnPropertyChangedWithValue(value, "IsRosterFull");
				}
			}
		}

		// Token: 0x1700049F RID: 1183
		// (get) Token: 0x06000E30 RID: 3632 RVA: 0x000397C1 File Offset: 0x000379C1
		// (set) Token: 0x06000E31 RID: 3633 RVA: 0x000397C9 File Offset: 0x000379C9
		[DataSourceProperty]
		public bool IsTroopHero
		{
			get
			{
				return this._isTroopHero;
			}
			set
			{
				if (value != this._isTroopHero)
				{
					this._isTroopHero = value;
					base.OnPropertyChangedWithValue(value, "IsTroopHero");
				}
			}
		}

		// Token: 0x170004A0 RID: 1184
		// (get) Token: 0x06000E32 RID: 3634 RVA: 0x000397E7 File Offset: 0x000379E7
		// (set) Token: 0x06000E33 RID: 3635 RVA: 0x000397EF File Offset: 0x000379EF
		[DataSourceProperty]
		public bool IsLocked
		{
			get
			{
				return this._isLocked;
			}
			set
			{
				if (value != this._isLocked)
				{
					this._isLocked = value;
					base.OnPropertyChangedWithValue(value, "IsLocked");
				}
			}
		}

		// Token: 0x170004A1 RID: 1185
		// (get) Token: 0x06000E34 RID: 3636 RVA: 0x0003980D File Offset: 0x00037A0D
		// (set) Token: 0x06000E35 RID: 3637 RVA: 0x00039815 File Offset: 0x00037A15
		[DataSourceProperty]
		public int CurrentAmount
		{
			get
			{
				return this._currentAmount;
			}
			set
			{
				if (value != this._currentAmount)
				{
					this._currentAmount = value;
					base.OnPropertyChangedWithValue(value, "CurrentAmount");
					this.IsSelected = (value > 0);
					this.UpdateAmountText();
				}
			}
		}

		// Token: 0x170004A2 RID: 1186
		// (get) Token: 0x06000E36 RID: 3638 RVA: 0x00039843 File Offset: 0x00037A43
		// (set) Token: 0x06000E37 RID: 3639 RVA: 0x0003984B File Offset: 0x00037A4B
		[DataSourceProperty]
		public int HeroHealthPercent
		{
			get
			{
				return this._heroHealthPercent;
			}
			set
			{
				if (value != this._heroHealthPercent)
				{
					this._heroHealthPercent = value;
					base.OnPropertyChangedWithValue(value, "HeroHealthPercent");
				}
			}
		}

		// Token: 0x170004A3 RID: 1187
		// (get) Token: 0x06000E38 RID: 3640 RVA: 0x00039869 File Offset: 0x00037A69
		// (set) Token: 0x06000E39 RID: 3641 RVA: 0x00039871 File Offset: 0x00037A71
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

		// Token: 0x170004A4 RID: 1188
		// (get) Token: 0x06000E3A RID: 3642 RVA: 0x00039894 File Offset: 0x00037A94
		// (set) Token: 0x06000E3B RID: 3643 RVA: 0x0003989C File Offset: 0x00037A9C
		[DataSourceProperty]
		public string AmountText
		{
			get
			{
				return this._amountText;
			}
			set
			{
				if (value != this._amountText)
				{
					this._amountText = value;
					base.OnPropertyChangedWithValue<string>(value, "AmountText");
				}
			}
		}

		// Token: 0x170004A5 RID: 1189
		// (get) Token: 0x06000E3C RID: 3644 RVA: 0x000398BF File Offset: 0x00037ABF
		// (set) Token: 0x06000E3D RID: 3645 RVA: 0x000398C7 File Offset: 0x00037AC7
		[DataSourceProperty]
		public ImageIdentifierVM Visual
		{
			get
			{
				return this._visual;
			}
			set
			{
				if (value != this._visual)
				{
					this._visual = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "Visual");
				}
			}
		}

		// Token: 0x170004A6 RID: 1190
		// (get) Token: 0x06000E3E RID: 3646 RVA: 0x000398E5 File Offset: 0x00037AE5
		// (set) Token: 0x06000E3F RID: 3647 RVA: 0x000398ED File Offset: 0x00037AED
		[DataSourceProperty]
		public StringItemWithHintVM TierIconData
		{
			get
			{
				return this._tierIconData;
			}
			set
			{
				if (value != this._tierIconData)
				{
					this._tierIconData = value;
					base.OnPropertyChangedWithValue<StringItemWithHintVM>(value, "TierIconData");
				}
			}
		}

		// Token: 0x170004A7 RID: 1191
		// (get) Token: 0x06000E40 RID: 3648 RVA: 0x0003990B File Offset: 0x00037B0B
		// (set) Token: 0x06000E41 RID: 3649 RVA: 0x00039913 File Offset: 0x00037B13
		[DataSourceProperty]
		public StringItemWithHintVM TypeIconData
		{
			get
			{
				return this._typeIconData;
			}
			set
			{
				if (value != this._typeIconData)
				{
					this._typeIconData = value;
					base.OnPropertyChangedWithValue<StringItemWithHintVM>(value, "TypeIconData");
				}
			}
		}

		// Token: 0x04000694 RID: 1684
		private readonly Action<TroopSelectionItemVM> _onAdd;

		// Token: 0x04000695 RID: 1685
		private readonly Action<TroopSelectionItemVM> _onRemove;

		// Token: 0x04000696 RID: 1686
		private int _currentAmount;

		// Token: 0x04000697 RID: 1687
		private int _maxAmount;

		// Token: 0x04000698 RID: 1688
		private int _heroHealthPercent;

		// Token: 0x04000699 RID: 1689
		private ImageIdentifierVM _visual;

		// Token: 0x0400069A RID: 1690
		private bool _isSelected;

		// Token: 0x0400069B RID: 1691
		private bool _isRosterFull;

		// Token: 0x0400069C RID: 1692
		private bool _isLocked;

		// Token: 0x0400069D RID: 1693
		private bool _isTroopHero;

		// Token: 0x0400069E RID: 1694
		private string _name;

		// Token: 0x0400069F RID: 1695
		private string _amountText;

		// Token: 0x040006A0 RID: 1696
		private StringItemWithHintVM _tierIconData;

		// Token: 0x040006A1 RID: 1697
		private StringItemWithHintVM _typeIconData;
	}
}
