using System;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Inventory
{
	// Token: 0x0200007E RID: 126
	public class ItemFlagVM : ViewModel
	{
		// Token: 0x06000B63 RID: 2915 RVA: 0x0002C9FB File Offset: 0x0002ABFB
		public ItemFlagVM(string iconName, TextObject hint)
		{
			this.Icon = this.GetIconPath(iconName);
			this.Hint = new HintViewModel(hint, null);
		}

		// Token: 0x06000B64 RID: 2916 RVA: 0x0002CA20 File Offset: 0x0002AC20
		private string GetIconPath(string iconName)
		{
			MBStringBuilder mbstringBuilder = default(MBStringBuilder);
			mbstringBuilder.Initialize(16, "GetIconPath");
			mbstringBuilder.Append<string>("<img src=\"SPGeneral\\");
			mbstringBuilder.Append<string>(iconName);
			mbstringBuilder.Append<string>("\"/>");
			return mbstringBuilder.ToStringAndRelease();
		}

		// Token: 0x170003BA RID: 954
		// (get) Token: 0x06000B65 RID: 2917 RVA: 0x0002CA6D File Offset: 0x0002AC6D
		// (set) Token: 0x06000B66 RID: 2918 RVA: 0x0002CA75 File Offset: 0x0002AC75
		[DataSourceProperty]
		public string Icon
		{
			get
			{
				return this._icon;
			}
			set
			{
				if (value != this._icon)
				{
					this._icon = value;
					base.OnPropertyChangedWithValue<string>(value, "Icon");
				}
			}
		}

		// Token: 0x170003BB RID: 955
		// (get) Token: 0x06000B67 RID: 2919 RVA: 0x0002CA98 File Offset: 0x0002AC98
		// (set) Token: 0x06000B68 RID: 2920 RVA: 0x0002CAA0 File Offset: 0x0002ACA0
		[DataSourceProperty]
		public HintViewModel Hint
		{
			get
			{
				return this._hint;
			}
			set
			{
				if (value != this._hint)
				{
					this._hint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "Hint");
				}
			}
		}

		// Token: 0x04000528 RID: 1320
		private string _icon;

		// Token: 0x04000529 RID: 1321
		private HintViewModel _hint;
	}
}
