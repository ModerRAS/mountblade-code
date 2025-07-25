using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.Refinement
{
	// Token: 0x020000F7 RID: 247
	public class RefinementVM : ViewModel
	{
		// Token: 0x0600174F RID: 5967 RVA: 0x00056950 File Offset: 0x00054B50
		public RefinementVM(Action onRefinementSelectionChange, Func<CraftingAvailableHeroItemVM> getCurrentHero)
		{
			this._onRefinementSelectionChange = onRefinementSelectionChange;
			this._craftingBehavior = Campaign.Current.GetCampaignBehavior<ICraftingCampaignBehavior>();
			this._getCurrentHero = getCurrentHero;
			this.AvailableRefinementActions = new MBBindingList<RefinementActionItemVM>();
			this.SetupRefinementActionsList(this._getCurrentHero().Hero);
		}

		// Token: 0x06001750 RID: 5968 RVA: 0x000569A2 File Offset: 0x00054BA2
		private void SetupRefinementActionsList(Hero craftingHero)
		{
			this.UpdateRefinementFormulas(craftingHero);
			this.RefreshRefinementActionsList(craftingHero);
		}

		// Token: 0x06001751 RID: 5969 RVA: 0x000569B2 File Offset: 0x00054BB2
		internal void OnCraftingHeroChanged(CraftingAvailableHeroItemVM newHero)
		{
			this.SetupRefinementActionsList(this._getCurrentHero().Hero);
			this.SelectDefaultAction();
		}

		// Token: 0x06001752 RID: 5970 RVA: 0x000569D0 File Offset: 0x00054BD0
		private void UpdateRefinementFormulas(Hero hero)
		{
			this.AvailableRefinementActions.Clear();
			foreach (Crafting.RefiningFormula refineFormula in Campaign.Current.Models.SmithingModel.GetRefiningFormulas(hero))
			{
				this.AvailableRefinementActions.Add(new RefinementActionItemVM(refineFormula, new Action<RefinementActionItemVM>(this.OnSelectAction)));
			}
		}

		// Token: 0x06001753 RID: 5971 RVA: 0x00056A50 File Offset: 0x00054C50
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.RefinementText = new TextObject("{=p7raHA9x}Refinement", null).ToString();
			this.AvailableRefinementActions.ApplyActionOnAllItems(delegate(RefinementActionItemVM x)
			{
				x.RefreshValues();
			});
			RefinementActionItemVM currentSelectedAction = this.CurrentSelectedAction;
			if (currentSelectedAction == null)
			{
				return;
			}
			currentSelectedAction.RefreshValues();
		}

		// Token: 0x06001754 RID: 5972 RVA: 0x00056AB4 File Offset: 0x00054CB4
		public void ExecuteSelectedRefinement(Hero currentCraftingHero)
		{
			if (this.CurrentSelectedAction != null)
			{
				ICraftingCampaignBehavior craftingBehavior = this._craftingBehavior;
				if (craftingBehavior != null)
				{
					craftingBehavior.DoRefinement(currentCraftingHero, this.CurrentSelectedAction.RefineFormula);
				}
				this.RefreshRefinementActionsList(currentCraftingHero);
				if (!this.CurrentSelectedAction.IsEnabled)
				{
					this.OnSelectAction(null);
				}
			}
		}

		// Token: 0x06001755 RID: 5973 RVA: 0x00056B04 File Offset: 0x00054D04
		public void RefreshRefinementActionsList(Hero craftingHero)
		{
			foreach (RefinementActionItemVM refinementActionItemVM in this.AvailableRefinementActions)
			{
				refinementActionItemVM.RefreshDynamicProperties();
			}
			if (this.CurrentSelectedAction == null)
			{
				this.SelectDefaultAction();
			}
		}

		// Token: 0x06001756 RID: 5974 RVA: 0x00056B5C File Offset: 0x00054D5C
		private void SelectDefaultAction()
		{
			RefinementActionItemVM refinementActionItemVM = this.AvailableRefinementActions.FirstOrDefault((RefinementActionItemVM a) => a.IsEnabled);
			if (refinementActionItemVM != null)
			{
				this.OnSelectAction(refinementActionItemVM);
			}
		}

		// Token: 0x06001757 RID: 5975 RVA: 0x00056B9E File Offset: 0x00054D9E
		private void OnSelectAction(RefinementActionItemVM selectedAction)
		{
			if (this.CurrentSelectedAction != null)
			{
				this.CurrentSelectedAction.IsSelected = false;
			}
			this.CurrentSelectedAction = selectedAction;
			this._onRefinementSelectionChange();
			if (this.CurrentSelectedAction != null)
			{
				this.CurrentSelectedAction.IsSelected = true;
			}
		}

		// Token: 0x170007E4 RID: 2020
		// (get) Token: 0x06001758 RID: 5976 RVA: 0x00056BDA File Offset: 0x00054DDA
		// (set) Token: 0x06001759 RID: 5977 RVA: 0x00056BE2 File Offset: 0x00054DE2
		[DataSourceProperty]
		public RefinementActionItemVM CurrentSelectedAction
		{
			get
			{
				return this._currentSelectedAction;
			}
			set
			{
				if (value != this._currentSelectedAction)
				{
					this._currentSelectedAction = value;
					base.OnPropertyChangedWithValue<RefinementActionItemVM>(value, "CurrentSelectedAction");
					this.IsValidRefinementActionSelected = (value != null);
				}
			}
		}

		// Token: 0x170007E5 RID: 2021
		// (get) Token: 0x0600175A RID: 5978 RVA: 0x00056C0A File Offset: 0x00054E0A
		// (set) Token: 0x0600175B RID: 5979 RVA: 0x00056C12 File Offset: 0x00054E12
		[DataSourceProperty]
		public bool IsValidRefinementActionSelected
		{
			get
			{
				return this._isValidRefinementActionSelected;
			}
			set
			{
				if (value != this._isValidRefinementActionSelected)
				{
					this._isValidRefinementActionSelected = value;
					base.OnPropertyChangedWithValue(value, "IsValidRefinementActionSelected");
				}
			}
		}

		// Token: 0x170007E6 RID: 2022
		// (get) Token: 0x0600175C RID: 5980 RVA: 0x00056C30 File Offset: 0x00054E30
		// (set) Token: 0x0600175D RID: 5981 RVA: 0x00056C38 File Offset: 0x00054E38
		[DataSourceProperty]
		public MBBindingList<RefinementActionItemVM> AvailableRefinementActions
		{
			get
			{
				return this._availableRefinementActions;
			}
			set
			{
				if (value != this._availableRefinementActions)
				{
					this._availableRefinementActions = value;
					base.OnPropertyChangedWithValue<MBBindingList<RefinementActionItemVM>>(value, "AvailableRefinementActions");
				}
			}
		}

		// Token: 0x170007E7 RID: 2023
		// (get) Token: 0x0600175E RID: 5982 RVA: 0x00056C56 File Offset: 0x00054E56
		// (set) Token: 0x0600175F RID: 5983 RVA: 0x00056C5E File Offset: 0x00054E5E
		[DataSourceProperty]
		public string RefinementText
		{
			get
			{
				return this._refinementText;
			}
			set
			{
				if (value != this._refinementText)
				{
					this._refinementText = value;
					base.OnPropertyChangedWithValue<string>(value, "RefinementText");
				}
			}
		}

		// Token: 0x04000AE1 RID: 2785
		private readonly Action _onRefinementSelectionChange;

		// Token: 0x04000AE2 RID: 2786
		private readonly ICraftingCampaignBehavior _craftingBehavior;

		// Token: 0x04000AE3 RID: 2787
		private readonly Func<CraftingAvailableHeroItemVM> _getCurrentHero;

		// Token: 0x04000AE4 RID: 2788
		private RefinementActionItemVM _currentSelectedAction;

		// Token: 0x04000AE5 RID: 2789
		private bool _isValidRefinementActionSelected;

		// Token: 0x04000AE6 RID: 2790
		private MBBindingList<RefinementActionItemVM> _availableRefinementActions;

		// Token: 0x04000AE7 RID: 2791
		private string _refinementText;
	}
}
