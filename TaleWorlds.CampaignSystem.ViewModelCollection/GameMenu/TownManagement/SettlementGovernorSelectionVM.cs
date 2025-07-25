using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TownManagement
{
	// Token: 0x02000094 RID: 148
	public class SettlementGovernorSelectionVM : ViewModel
	{
		// Token: 0x06000E72 RID: 3698 RVA: 0x0003A040 File Offset: 0x00038240
		public SettlementGovernorSelectionVM(Settlement settlement, Action<Hero> onDone)
		{
			this._settlement = settlement;
			this._onDone = onDone;
			this.AvailableGovernors = new MBBindingList<SettlementGovernorSelectionItemVM>
			{
				new SettlementGovernorSelectionItemVM(null, new Action<SettlementGovernorSelectionItemVM>(this.OnSelection))
			};
			if (((settlement != null) ? settlement.OwnerClan : null) != null)
			{
				using (List<Hero>.Enumerator enumerator = settlement.OwnerClan.Heroes.GetEnumerator())
				{
					while (enumerator.MoveNext())
					{
						Hero hero = enumerator.Current;
						if (Campaign.Current.Models.ClanPoliticsModel.CanHeroBeGovernor(hero) && !this.AvailableGovernors.Any((SettlementGovernorSelectionItemVM G) => G.Governor == hero) && (hero.GovernorOf == this._settlement.Town || hero.GovernorOf == null))
						{
							this.AvailableGovernors.Add(new SettlementGovernorSelectionItemVM(hero, new Action<SettlementGovernorSelectionItemVM>(this.OnSelection)));
						}
					}
				}
			}
		}

		// Token: 0x06000E73 RID: 3699 RVA: 0x0003A170 File Offset: 0x00038370
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.AvailableGovernors.ApplyActionOnAllItems(delegate(SettlementGovernorSelectionItemVM x)
			{
				x.RefreshValues();
			});
		}

		// Token: 0x06000E74 RID: 3700 RVA: 0x0003A1A2 File Offset: 0x000383A2
		private void OnSelection(SettlementGovernorSelectionItemVM item)
		{
			Action<Hero> onDone = this._onDone;
			if (onDone == null)
			{
				return;
			}
			onDone(item.Governor);
		}

		// Token: 0x170004B6 RID: 1206
		// (get) Token: 0x06000E75 RID: 3701 RVA: 0x0003A1BA File Offset: 0x000383BA
		// (set) Token: 0x06000E76 RID: 3702 RVA: 0x0003A1C2 File Offset: 0x000383C2
		[DataSourceProperty]
		public MBBindingList<SettlementGovernorSelectionItemVM> AvailableGovernors
		{
			get
			{
				return this._availableGovernors;
			}
			set
			{
				if (value != this._availableGovernors)
				{
					this._availableGovernors = value;
					base.OnPropertyChangedWithValue<MBBindingList<SettlementGovernorSelectionItemVM>>(value, "AvailableGovernors");
				}
			}
		}

		// Token: 0x170004B7 RID: 1207
		// (get) Token: 0x06000E77 RID: 3703 RVA: 0x0003A1E0 File Offset: 0x000383E0
		// (set) Token: 0x06000E78 RID: 3704 RVA: 0x0003A1E8 File Offset: 0x000383E8
		[DataSourceProperty]
		public int CurrentGovernorIndex
		{
			get
			{
				return this._currentGovernorIndex;
			}
			set
			{
				if (value != this._currentGovernorIndex)
				{
					this._currentGovernorIndex = value;
					base.OnPropertyChangedWithValue(value, "CurrentGovernorIndex");
				}
			}
		}

		// Token: 0x040006B1 RID: 1713
		private readonly Settlement _settlement;

		// Token: 0x040006B2 RID: 1714
		private readonly Action<Hero> _onDone;

		// Token: 0x040006B3 RID: 1715
		private MBBindingList<SettlementGovernorSelectionItemVM> _availableGovernors;

		// Token: 0x040006B4 RID: 1716
		private int _currentGovernorIndex;
	}
}
