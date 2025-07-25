using System;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions.ItemTypes
{
	// Token: 0x02000072 RID: 114
	public class PolicyDecisionItemVM : DecisionItemBaseVM
	{
		// Token: 0x17000326 RID: 806
		// (get) Token: 0x060009E0 RID: 2528 RVA: 0x00028AF0 File Offset: 0x00026CF0
		public KingdomPolicyDecision PolicyDecision
		{
			get
			{
				KingdomPolicyDecision result;
				if ((result = this._policyDecision) == null)
				{
					result = (this._policyDecision = (this._decision as KingdomPolicyDecision));
				}
				return result;
			}
		}

		// Token: 0x17000327 RID: 807
		// (get) Token: 0x060009E1 RID: 2529 RVA: 0x00028B1B File Offset: 0x00026D1B
		public PolicyObject Policy
		{
			get
			{
				return this.PolicyDecision.Policy;
			}
		}

		// Token: 0x060009E2 RID: 2530 RVA: 0x00028B28 File Offset: 0x00026D28
		public PolicyDecisionItemVM(KingdomPolicyDecision decision, Action onDecisionOver) : base(decision, onDecisionOver)
		{
			base.DecisionType = 3;
		}

		// Token: 0x060009E3 RID: 2531 RVA: 0x00028B3C File Offset: 0x00026D3C
		protected override void InitValues()
		{
			base.InitValues();
			base.DecisionType = 3;
			this.NameText = this.Policy.Name.ToString();
			this.PolicyDescriptionText = this.Policy.Description.ToString();
			this.PolicyEffectList = new MBBindingList<StringItemWithHintVM>();
			foreach (string text in this.Policy.SecondaryEffects.ToString().Split(new char[]
			{
				'\n'
			}))
			{
				this.PolicyEffectList.Add(new StringItemWithHintVM(text, TextObject.Empty));
			}
		}

		// Token: 0x17000328 RID: 808
		// (get) Token: 0x060009E4 RID: 2532 RVA: 0x00028BD6 File Offset: 0x00026DD6
		// (set) Token: 0x060009E5 RID: 2533 RVA: 0x00028BDE File Offset: 0x00026DDE
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

		// Token: 0x17000329 RID: 809
		// (get) Token: 0x060009E6 RID: 2534 RVA: 0x00028C01 File Offset: 0x00026E01
		// (set) Token: 0x060009E7 RID: 2535 RVA: 0x00028C09 File Offset: 0x00026E09
		[DataSourceProperty]
		public string PolicyDescriptionText
		{
			get
			{
				return this._policyDescriptionText;
			}
			set
			{
				if (value != this._policyDescriptionText)
				{
					this._policyDescriptionText = value;
					base.OnPropertyChangedWithValue<string>(value, "PolicyDescriptionText");
				}
			}
		}

		// Token: 0x1700032A RID: 810
		// (get) Token: 0x060009E8 RID: 2536 RVA: 0x00028C2C File Offset: 0x00026E2C
		// (set) Token: 0x060009E9 RID: 2537 RVA: 0x00028C34 File Offset: 0x00026E34
		[DataSourceProperty]
		public MBBindingList<StringItemWithHintVM> PolicyEffectList
		{
			get
			{
				return this._policyEffectList;
			}
			set
			{
				if (value != this._policyEffectList)
				{
					this._policyEffectList = value;
					base.OnPropertyChangedWithValue<MBBindingList<StringItemWithHintVM>>(value, "PolicyEffectList");
				}
			}
		}

		// Token: 0x04000471 RID: 1137
		private KingdomPolicyDecision _policyDecision;

		// Token: 0x04000472 RID: 1138
		private MBBindingList<StringItemWithHintVM> _policyEffectList;

		// Token: 0x04000473 RID: 1139
		private string _nameText;

		// Token: 0x04000474 RID: 1140
		private string _policyDescriptionText;
	}
}
