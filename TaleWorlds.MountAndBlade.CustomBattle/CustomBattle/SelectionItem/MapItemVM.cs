using System;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Library;

namespace TaleWorlds.MountAndBlade.CustomBattle.CustomBattle.SelectionItem
{
	// Token: 0x02000022 RID: 34
	public class MapItemVM : SelectorItemVM
	{
		// Token: 0x17000084 RID: 132
		// (get) Token: 0x060001B0 RID: 432 RVA: 0x0000A4A1 File Offset: 0x000086A1
		// (set) Token: 0x060001B1 RID: 433 RVA: 0x0000A4A9 File Offset: 0x000086A9
		public string MapName { get; private set; }

		// Token: 0x17000085 RID: 133
		// (get) Token: 0x060001B2 RID: 434 RVA: 0x0000A4B2 File Offset: 0x000086B2
		// (set) Token: 0x060001B3 RID: 435 RVA: 0x0000A4BA File Offset: 0x000086BA
		public string MapId { get; private set; }

		// Token: 0x060001B4 RID: 436 RVA: 0x0000A4C3 File Offset: 0x000086C3
		public MapItemVM(string mapName, string mapId) : base(mapName)
		{
			this.MapName = mapName;
			this.MapId = mapId;
			this.NameText = mapName;
		}

		// Token: 0x060001B5 RID: 437 RVA: 0x0000A4E4 File Offset: 0x000086E4
		public void UpdateSearchedText(string searchedText)
		{
			this._searchedText = searchedText;
			string text = null;
			if (this.MapName.IndexOf(this._searchedText, StringComparison.OrdinalIgnoreCase) != -1)
			{
				text = this.MapName.Substring(this.MapName.IndexOf(this._searchedText, StringComparison.OrdinalIgnoreCase), this._searchedText.Length);
			}
			if (!string.IsNullOrEmpty(text))
			{
				this.NameText = this.MapName.Replace(text, "<a>" + text + "</a>");
				return;
			}
			this.NameText = this.MapName;
		}

		// Token: 0x17000086 RID: 134
		// (get) Token: 0x060001B6 RID: 438 RVA: 0x0000A56F File Offset: 0x0000876F
		// (set) Token: 0x060001B7 RID: 439 RVA: 0x0000A577 File Offset: 0x00008777
		[DataSourceProperty]
		public string NameText
		{
			get
			{
				return this._nameText;
			}
			set
			{
				if (this._nameText != value)
				{
					this._nameText = value;
					base.OnPropertyChangedWithValue<string>(value, "NameText");
				}
			}
		}

		// Token: 0x04000116 RID: 278
		private string _searchedText;

		// Token: 0x04000119 RID: 281
		public string _nameText;
	}
}
