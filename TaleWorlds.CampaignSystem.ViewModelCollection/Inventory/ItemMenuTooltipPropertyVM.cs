using System;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Inventory
{
	// Token: 0x0200007F RID: 127
	public class ItemMenuTooltipPropertyVM : TooltipProperty
	{
		// Token: 0x06000B69 RID: 2921 RVA: 0x0002CABE File Offset: 0x0002ACBE
		public ItemMenuTooltipPropertyVM()
		{
		}

		// Token: 0x06000B6A RID: 2922 RVA: 0x0002CAC6 File Offset: 0x0002ACC6
		public ItemMenuTooltipPropertyVM(string definition, string value, int textHeight, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(definition, value, textHeight, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B6B RID: 2923 RVA: 0x0002CADC File Offset: 0x0002ACDC
		public ItemMenuTooltipPropertyVM(string definition, Func<string> _valueFunc, int textHeight, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(definition, _valueFunc, textHeight, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B6C RID: 2924 RVA: 0x0002CAF2 File Offset: 0x0002ACF2
		public ItemMenuTooltipPropertyVM(Func<string> _definitionFunc, Func<string> _valueFunc, int textHeight, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(_definitionFunc, _valueFunc, textHeight, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B6D RID: 2925 RVA: 0x0002CB08 File Offset: 0x0002AD08
		public ItemMenuTooltipPropertyVM(Func<string> _definitionFunc, Func<string> _valueFunc, object[] valueArgs, int textHeight, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(_definitionFunc, _valueFunc, valueArgs, textHeight, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B6E RID: 2926 RVA: 0x0002CB20 File Offset: 0x0002AD20
		public ItemMenuTooltipPropertyVM(string definition, string value, int textHeight, Color color, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null, TooltipProperty.TooltipPropertyFlags propertyFlags = TooltipProperty.TooltipPropertyFlags.None) : base(definition, value, textHeight, color, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B6F RID: 2927 RVA: 0x0002CB38 File Offset: 0x0002AD38
		public ItemMenuTooltipPropertyVM(string definition, Func<string> _valueFunc, int textHeight, Color color, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(definition, _valueFunc, textHeight, color, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B70 RID: 2928 RVA: 0x0002CB50 File Offset: 0x0002AD50
		public ItemMenuTooltipPropertyVM(Func<string> _definitionFunc, Func<string> _valueFunc, int textHeight, Color color, bool onlyShowWhenExtended = false, HintViewModel propertyHint = null) : base(_definitionFunc, _valueFunc, textHeight, color, onlyShowWhenExtended, TooltipProperty.TooltipPropertyFlags.None)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x06000B71 RID: 2929 RVA: 0x0002CB68 File Offset: 0x0002AD68
		public ItemMenuTooltipPropertyVM(TooltipProperty property, HintViewModel propertyHint = null) : base(property)
		{
			this.PropertyHint = propertyHint;
		}

		// Token: 0x170003BC RID: 956
		// (get) Token: 0x06000B72 RID: 2930 RVA: 0x0002CB78 File Offset: 0x0002AD78
		// (set) Token: 0x06000B73 RID: 2931 RVA: 0x0002CB80 File Offset: 0x0002AD80
		[DataSourceProperty]
		public HintViewModel PropertyHint
		{
			get
			{
				return this._propertyHint;
			}
			set
			{
				if (value != this._propertyHint)
				{
					this._propertyHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "PropertyHint");
				}
			}
		}

		// Token: 0x0400052A RID: 1322
		private HintViewModel _propertyHint;
	}
}
