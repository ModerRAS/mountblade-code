using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection
{
	// Token: 0x02000129 RID: 297
	public class PerkSelectionVM : ViewModel
	{
		// Token: 0x06001D43 RID: 7491 RVA: 0x0006914D File Offset: 0x0006734D
		public PerkSelectionVM(IHeroDeveloper developer, Action<SkillObject> refreshPerksOf, Action onPerkSelection)
		{
			this._developer = developer;
			this._refreshPerksOf = refreshPerksOf;
			this._onPerkSelection = onPerkSelection;
			this._selectedPerks = new List<PerkObject>();
			this.AvailablePerks = new MBBindingList<PerkSelectionItemVM>();
			this.IsActive = false;
		}

		// Token: 0x06001D44 RID: 7492 RVA: 0x00069188 File Offset: 0x00067388
		public void SetCurrentSelectionPerk(PerkVM perk)
		{
			if (this.AvailablePerks.Count > 0 || this.IsActive)
			{
				this.ExecuteDeactivate();
			}
			this.AvailablePerks.Clear();
			this._currentInitialPerk = perk;
			this.AvailablePerks.Add(new PerkSelectionItemVM(perk.Perk, new Action<PerkSelectionItemVM>(this.OnSelectPerk)));
			if (perk.AlternativeType == 2)
			{
				this.AvailablePerks.Insert(0, new PerkSelectionItemVM(perk.Perk.AlternativePerk, new Action<PerkSelectionItemVM>(this.OnSelectPerk)));
			}
			else if (perk.AlternativeType == 1)
			{
				this.AvailablePerks.Add(new PerkSelectionItemVM(perk.Perk.AlternativePerk, new Action<PerkSelectionItemVM>(this.OnSelectPerk)));
			}
			perk.IsInSelection = true;
			this.IsActive = true;
		}

		// Token: 0x06001D45 RID: 7493 RVA: 0x00069258 File Offset: 0x00067458
		private void OnSelectPerk(PerkSelectionItemVM selectedPerk)
		{
			this._selectedPerks.Add(selectedPerk.Perk);
			this._refreshPerksOf(selectedPerk.Perk.Skill);
			this._currentInitialPerk.IsInSelection = false;
			this.IsActive = false;
			Game.Current.EventManager.TriggerEvent<PerkSelectedByPlayerEvent>(new PerkSelectedByPlayerEvent(selectedPerk.Perk));
			Action onPerkSelection = this._onPerkSelection;
			if (onPerkSelection == null)
			{
				return;
			}
			onPerkSelection();
		}

		// Token: 0x06001D46 RID: 7494 RVA: 0x000692CC File Offset: 0x000674CC
		public void ResetSelectedPerks()
		{
			foreach (PerkObject perkObject in this._selectedPerks)
			{
				this._refreshPerksOf(perkObject.Skill);
			}
			this._selectedPerks.Clear();
		}

		// Token: 0x06001D47 RID: 7495 RVA: 0x00069334 File Offset: 0x00067534
		public void ApplySelectedPerks()
		{
			foreach (PerkObject perkObject in this._selectedPerks.ToList<PerkObject>())
			{
				this._developer.AddPerk(perkObject);
				this._selectedPerks.Remove(perkObject);
			}
		}

		// Token: 0x06001D48 RID: 7496 RVA: 0x000693A0 File Offset: 0x000675A0
		public bool IsPerkSelected(PerkObject perk)
		{
			return this._selectedPerks.Contains(perk);
		}

		// Token: 0x06001D49 RID: 7497 RVA: 0x000693AE File Offset: 0x000675AE
		public bool IsAnyPerkSelected()
		{
			return this._selectedPerks.Count > 0;
		}

		// Token: 0x06001D4A RID: 7498 RVA: 0x000693BE File Offset: 0x000675BE
		public void ExecuteDeactivate()
		{
			this.IsActive = false;
			this._refreshPerksOf(this._currentInitialPerk.Perk.Skill);
			this._currentInitialPerk.IsInSelection = false;
		}

		// Token: 0x17000A0F RID: 2575
		// (get) Token: 0x06001D4B RID: 7499 RVA: 0x000693EE File Offset: 0x000675EE
		// (set) Token: 0x06001D4C RID: 7500 RVA: 0x000693F6 File Offset: 0x000675F6
		[DataSourceProperty]
		public bool IsActive
		{
			get
			{
				return this._isActive;
			}
			set
			{
				if (value != this._isActive)
				{
					this._isActive = value;
					base.OnPropertyChangedWithValue(value, "IsActive");
					Game.Current.EventManager.TriggerEvent<PerkSelectionToggleEvent>(new PerkSelectionToggleEvent(this.IsActive));
				}
			}
		}

		// Token: 0x17000A10 RID: 2576
		// (get) Token: 0x06001D4D RID: 7501 RVA: 0x0006942E File Offset: 0x0006762E
		// (set) Token: 0x06001D4E RID: 7502 RVA: 0x00069436 File Offset: 0x00067636
		[DataSourceProperty]
		public MBBindingList<PerkSelectionItemVM> AvailablePerks
		{
			get
			{
				return this._availablePerks;
			}
			set
			{
				if (value != this._availablePerks)
				{
					this._availablePerks = value;
					base.OnPropertyChangedWithValue<MBBindingList<PerkSelectionItemVM>>(value, "AvailablePerks");
				}
			}
		}

		// Token: 0x04000DD2 RID: 3538
		private readonly IHeroDeveloper _developer;

		// Token: 0x04000DD3 RID: 3539
		private readonly List<PerkObject> _selectedPerks;

		// Token: 0x04000DD4 RID: 3540
		private readonly Action<SkillObject> _refreshPerksOf;

		// Token: 0x04000DD5 RID: 3541
		private readonly Action _onPerkSelection;

		// Token: 0x04000DD6 RID: 3542
		private PerkVM _currentInitialPerk;

		// Token: 0x04000DD7 RID: 3543
		private bool _isActive;

		// Token: 0x04000DD8 RID: 3544
		private MBBindingList<PerkSelectionItemVM> _availablePerks;
	}
}
