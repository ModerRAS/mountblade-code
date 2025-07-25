using System;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TownManagement
{
	// Token: 0x02000092 RID: 146
	public class SettlementDailyProjectVM : SettlementProjectVM
	{
		// Token: 0x06000E5B RID: 3675 RVA: 0x00039D42 File Offset: 0x00037F42
		public SettlementDailyProjectVM(Action<SettlementProjectVM, bool> onSelection, Action<SettlementProjectVM> onSetAsCurrent, Action onResetCurrent, Building building, Settlement settlement) : base(onSelection, onSetAsCurrent, onResetCurrent, building, settlement)
		{
			base.IsDaily = true;
			this.RefreshValues();
		}

		// Token: 0x06000E5C RID: 3676 RVA: 0x00039D5E File Offset: 0x00037F5E
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.DefaultText = GameTexts.FindText("str_default", null).ToString();
		}

		// Token: 0x06000E5D RID: 3677 RVA: 0x00039D7C File Offset: 0x00037F7C
		public override void RefreshProductionText()
		{
			base.RefreshProductionText();
			base.ProductionText = new TextObject("{=bd7oAQq6}Daily", null).ToString();
		}

		// Token: 0x06000E5E RID: 3678 RVA: 0x00039D9A File Offset: 0x00037F9A
		public override void ExecuteAddToQueue()
		{
		}

		// Token: 0x06000E5F RID: 3679 RVA: 0x00039D9C File Offset: 0x00037F9C
		public override void ExecuteSetAsActiveDevelopment()
		{
			this._onSelection(this, false);
		}

		// Token: 0x06000E60 RID: 3680 RVA: 0x00039DAB File Offset: 0x00037FAB
		public override void ExecuteSetAsCurrent()
		{
			Action<SettlementProjectVM> onSetAsCurrent = this._onSetAsCurrent;
			if (onSetAsCurrent == null)
			{
				return;
			}
			onSetAsCurrent(this);
		}

		// Token: 0x06000E61 RID: 3681 RVA: 0x00039DBE File Offset: 0x00037FBE
		public override void ExecuteResetCurrent()
		{
			Action onResetCurrent = this._onResetCurrent;
			if (onResetCurrent == null)
			{
				return;
			}
			onResetCurrent();
		}

		// Token: 0x170004B0 RID: 1200
		// (get) Token: 0x06000E62 RID: 3682 RVA: 0x00039DD0 File Offset: 0x00037FD0
		// (set) Token: 0x06000E63 RID: 3683 RVA: 0x00039DD8 File Offset: 0x00037FD8
		[DataSourceProperty]
		public bool IsDefault
		{
			get
			{
				return this._isDefault;
			}
			set
			{
				if (value != this._isDefault)
				{
					this._isDefault = value;
					base.OnPropertyChangedWithValue(value, "IsDefault");
				}
			}
		}

		// Token: 0x170004B1 RID: 1201
		// (get) Token: 0x06000E64 RID: 3684 RVA: 0x00039DF6 File Offset: 0x00037FF6
		// (set) Token: 0x06000E65 RID: 3685 RVA: 0x00039DFE File Offset: 0x00037FFE
		[DataSourceProperty]
		public string DefaultText
		{
			get
			{
				return this._defaultText;
			}
			set
			{
				if (value != this._defaultText)
				{
					this._defaultText = value;
					base.OnPropertyChangedWithValue<string>(value, "DefaultText");
				}
			}
		}

		// Token: 0x040006AA RID: 1706
		private bool _isDefault;

		// Token: 0x040006AB RID: 1707
		private string _defaultText;
	}
}
