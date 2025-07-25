using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection
{
	// Token: 0x02000128 RID: 296
	public class PerkSelectionItemVM : ViewModel
	{
		// Token: 0x06001D38 RID: 7480 RVA: 0x00068FF9 File Offset: 0x000671F9
		public PerkSelectionItemVM(PerkObject perk, Action<PerkSelectionItemVM> onSelection)
		{
			this.Perk = perk;
			this._onSelection = onSelection;
			this.RefreshValues();
		}

		// Token: 0x06001D39 RID: 7481 RVA: 0x00069018 File Offset: 0x00067218
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.PickText = new TextObject("{=1CXlqb2U}Pick:", null).ToString();
			this.PerkName = this.Perk.Name.ToString();
			this.PerkDescription = this.Perk.Description.ToString();
			TextObject combinedPerkRoleText = CampaignUIHelper.GetCombinedPerkRoleText(this.Perk);
			this.PerkRole = (((combinedPerkRoleText != null) ? combinedPerkRoleText.ToString() : null) ?? "");
		}

		// Token: 0x06001D3A RID: 7482 RVA: 0x00069093 File Offset: 0x00067293
		public void ExecuteSelection()
		{
			this._onSelection(this);
		}

		// Token: 0x17000A0B RID: 2571
		// (get) Token: 0x06001D3B RID: 7483 RVA: 0x000690A1 File Offset: 0x000672A1
		// (set) Token: 0x06001D3C RID: 7484 RVA: 0x000690A9 File Offset: 0x000672A9
		[DataSourceProperty]
		public string PickText
		{
			get
			{
				return this._pickText;
			}
			set
			{
				if (value != this._pickText)
				{
					this._pickText = value;
					base.OnPropertyChangedWithValue<string>(value, "PickText");
				}
			}
		}

		// Token: 0x17000A0C RID: 2572
		// (get) Token: 0x06001D3D RID: 7485 RVA: 0x000690CC File Offset: 0x000672CC
		// (set) Token: 0x06001D3E RID: 7486 RVA: 0x000690D4 File Offset: 0x000672D4
		[DataSourceProperty]
		public string PerkName
		{
			get
			{
				return this._perkName;
			}
			set
			{
				if (value != this._perkName)
				{
					this._perkName = value;
					base.OnPropertyChangedWithValue<string>(value, "PerkName");
				}
			}
		}

		// Token: 0x17000A0D RID: 2573
		// (get) Token: 0x06001D3F RID: 7487 RVA: 0x000690F7 File Offset: 0x000672F7
		// (set) Token: 0x06001D40 RID: 7488 RVA: 0x000690FF File Offset: 0x000672FF
		[DataSourceProperty]
		public string PerkDescription
		{
			get
			{
				return this._perkDescription;
			}
			set
			{
				if (value != this._perkDescription)
				{
					this._perkDescription = value;
					base.OnPropertyChangedWithValue<string>(value, "PerkDescription");
				}
			}
		}

		// Token: 0x17000A0E RID: 2574
		// (get) Token: 0x06001D41 RID: 7489 RVA: 0x00069122 File Offset: 0x00067322
		// (set) Token: 0x06001D42 RID: 7490 RVA: 0x0006912A File Offset: 0x0006732A
		[DataSourceProperty]
		public string PerkRole
		{
			get
			{
				return this._perkRole;
			}
			set
			{
				if (value != this._perkRole)
				{
					this._perkRole = value;
					base.OnPropertyChangedWithValue<string>(value, "PerkRole");
				}
			}
		}

		// Token: 0x04000DCC RID: 3532
		private readonly Action<PerkSelectionItemVM> _onSelection;

		// Token: 0x04000DCD RID: 3533
		public readonly PerkObject Perk;

		// Token: 0x04000DCE RID: 3534
		private string _pickText;

		// Token: 0x04000DCF RID: 3535
		private string _perkName;

		// Token: 0x04000DD0 RID: 3536
		private string _perkDescription;

		// Token: 0x04000DD1 RID: 3537
		private string _perkRole;
	}
}
