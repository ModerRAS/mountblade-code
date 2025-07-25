using System;
using TaleWorlds.Core;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu
{
	// Token: 0x0200008C RID: 140
	public class GameMenuPlunderItemVM : ViewModel
	{
		// Token: 0x06000DD4 RID: 3540 RVA: 0x00037DF0 File Offset: 0x00035FF0
		public GameMenuPlunderItemVM(ItemRosterElement item)
		{
			this._item = item;
			this.Visual = new ImageIdentifierVM(item.EquipmentElement.Item, "");
		}

		// Token: 0x06000DD5 RID: 3541 RVA: 0x00037E2C File Offset: 0x0003602C
		public void ExecuteBeginTooltip()
		{
			if (this._item.EquipmentElement.Item != null)
			{
				InformationManager.ShowTooltip(typeof(ItemObject), new object[]
				{
					this._item.EquipmentElement
				});
			}
		}

		// Token: 0x06000DD6 RID: 3542 RVA: 0x00037E76 File Offset: 0x00036076
		public void ExecuteEndTooltip()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x17000483 RID: 1155
		// (get) Token: 0x06000DD7 RID: 3543 RVA: 0x00037E7D File Offset: 0x0003607D
		// (set) Token: 0x06000DD8 RID: 3544 RVA: 0x00037E85 File Offset: 0x00036085
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

		// Token: 0x04000660 RID: 1632
		private ItemRosterElement _item;

		// Token: 0x04000661 RID: 1633
		private ImageIdentifierVM _visual;
	}
}
