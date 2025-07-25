using System;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items
{
	// Token: 0x020000CD RID: 205
	public class EncyclopediaSettlementVM : ViewModel
	{
		// Token: 0x060013B1 RID: 5041 RVA: 0x0004BBB8 File Offset: 0x00049DB8
		public EncyclopediaSettlementVM(Settlement settlement)
		{
			if (!settlement.IsHideout)
			{
				this._settlement = settlement;
			}
			SettlementComponent settlementComponent = settlement.SettlementComponent;
			this.FileName = ((settlementComponent == null) ? "placeholder" : (settlementComponent.BackgroundMeshName + "_t"));
			this.RefreshValues();
		}

		// Token: 0x060013B2 RID: 5042 RVA: 0x0004BC07 File Offset: 0x00049E07
		public override void RefreshValues()
		{
			base.RefreshValues();
			Settlement settlement = this._settlement;
			this.NameText = (((settlement != null) ? settlement.Name.ToString() : null) ?? "");
		}

		// Token: 0x060013B3 RID: 5043 RVA: 0x0004BC35 File Offset: 0x00049E35
		public void ExecuteLink()
		{
			if (this._settlement != null)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(this._settlement.EncyclopediaLink);
			}
		}

		// Token: 0x060013B4 RID: 5044 RVA: 0x0004BC59 File Offset: 0x00049E59
		public void ExecuteEndHint()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x060013B5 RID: 5045 RVA: 0x0004BC60 File Offset: 0x00049E60
		public void ExecuteBeginHint()
		{
			InformationManager.ShowTooltip(typeof(Settlement), new object[]
			{
				this._settlement,
				true
			});
		}

		// Token: 0x17000695 RID: 1685
		// (get) Token: 0x060013B6 RID: 5046 RVA: 0x0004BC89 File Offset: 0x00049E89
		// (set) Token: 0x060013B7 RID: 5047 RVA: 0x0004BC91 File Offset: 0x00049E91
		[DataSourceProperty]
		public string FileName
		{
			get
			{
				return this._fileName;
			}
			set
			{
				if (value != this._fileName)
				{
					this._fileName = value;
					base.OnPropertyChangedWithValue<string>(value, "FileName");
				}
			}
		}

		// Token: 0x17000696 RID: 1686
		// (get) Token: 0x060013B8 RID: 5048 RVA: 0x0004BCB4 File Offset: 0x00049EB4
		// (set) Token: 0x060013B9 RID: 5049 RVA: 0x0004BCBC File Offset: 0x00049EBC
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

		// Token: 0x0400091B RID: 2331
		private Settlement _settlement;

		// Token: 0x0400091C RID: 2332
		private string _fileName;

		// Token: 0x0400091D RID: 2333
		private string _nameText;
	}
}
