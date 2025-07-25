using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle
{
	// Token: 0x0200001A RID: 26
	public class CustomBattleSiegeMachineVM : ViewModel
	{
		// Token: 0x1700004C RID: 76
		// (get) Token: 0x06000116 RID: 278 RVA: 0x00008E3B File Offset: 0x0000703B
		// (set) Token: 0x06000117 RID: 279 RVA: 0x00008E43 File Offset: 0x00007043
		public SiegeEngineType SiegeEngineType { get; private set; }

		// Token: 0x06000118 RID: 280 RVA: 0x00008E4C File Offset: 0x0000704C
		public CustomBattleSiegeMachineVM(SiegeEngineType machineType, Action<CustomBattleSiegeMachineVM> onSelection, Action<CustomBattleSiegeMachineVM> onResetSelection)
		{
			this._onSelection = onSelection;
			this._onResetSelection = onResetSelection;
			this.SetMachineType(machineType);
		}

		// Token: 0x06000119 RID: 281 RVA: 0x00008E6C File Offset: 0x0000706C
		public void SetMachineType(SiegeEngineType machine)
		{
			this.SiegeEngineType = machine;
			this.Name = ((machine != null) ? machine.StringId : "");
			this.IsRanged = (machine != null && machine.IsRanged);
			this.MachineID = ((machine != null) ? machine.StringId : "");
		}

		// Token: 0x0600011A RID: 282 RVA: 0x00008EBE File Offset: 0x000070BE
		private void OnSelection()
		{
			this._onSelection(this);
		}

		// Token: 0x0600011B RID: 283 RVA: 0x00008ECC File Offset: 0x000070CC
		private void OnResetSelection()
		{
			this._onResetSelection(this);
		}

		// Token: 0x1700004D RID: 77
		// (get) Token: 0x0600011C RID: 284 RVA: 0x00008EDA File Offset: 0x000070DA
		// (set) Token: 0x0600011D RID: 285 RVA: 0x00008EE2 File Offset: 0x000070E2
		[DataSourceProperty]
		public bool IsRanged
		{
			get
			{
				return this._isRanged;
			}
			set
			{
				if (value != this._isRanged)
				{
					this._isRanged = value;
					base.OnPropertyChangedWithValue(value, "IsRanged");
				}
			}
		}

		// Token: 0x1700004E RID: 78
		// (get) Token: 0x0600011E RID: 286 RVA: 0x00008F00 File Offset: 0x00007100
		// (set) Token: 0x0600011F RID: 287 RVA: 0x00008F08 File Offset: 0x00007108
		[DataSourceProperty]
		public string MachineID
		{
			get
			{
				return this._machineID;
			}
			set
			{
				if (value != this._machineID)
				{
					this._machineID = value;
					base.OnPropertyChangedWithValue<string>(value, "MachineID");
				}
			}
		}

		// Token: 0x1700004F RID: 79
		// (get) Token: 0x06000120 RID: 288 RVA: 0x00008F2B File Offset: 0x0000712B
		// (set) Token: 0x06000121 RID: 289 RVA: 0x00008F33 File Offset: 0x00007133
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

		// Token: 0x040000D4 RID: 212
		private Action<CustomBattleSiegeMachineVM> _onSelection;

		// Token: 0x040000D5 RID: 213
		private Action<CustomBattleSiegeMachineVM> _onResetSelection;

		// Token: 0x040000D7 RID: 215
		private string _name;

		// Token: 0x040000D8 RID: 216
		private bool _isRanged;

		// Token: 0x040000D9 RID: 217
		private string _machineID;
	}
}
