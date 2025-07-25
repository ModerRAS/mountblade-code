using System;
using System.Collections.Generic;
using TaleWorlds.Library;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x0200000F RID: 15
	public class SelectionGroup : ViewModel
	{
		// Token: 0x060000D0 RID: 208 RVA: 0x0000792C File Offset: 0x00005B2C
		public SelectionGroup(string name, List<string> textList = null)
		{
			this._name = name;
			if (textList != null)
			{
				this._textList = textList;
			}
			this.Text = ((this._textList.Count > 0) ? this._textList[0] : "");
		}

		// Token: 0x060000D1 RID: 209 RVA: 0x00007984 File Offset: 0x00005B84
		protected virtual void ClickSelectionLeft()
		{
			this._index--;
			if (this._index < 0)
			{
				this._index = this._textList.Count - 1;
			}
			this.Text = ((this._textList.Count > 0) ? this._textList[this._index] : "");
		}

		// Token: 0x060000D2 RID: 210 RVA: 0x000079E8 File Offset: 0x00005BE8
		protected virtual void ClickSelectionRight()
		{
			this._index++;
			this._index %= this._textList.Count;
			this.Text = ((this._textList.Count > 0) ? this._textList[this._index] : "");
		}

		// Token: 0x17000034 RID: 52
		// (get) Token: 0x060000D3 RID: 211 RVA: 0x00007A47 File Offset: 0x00005C47
		// (set) Token: 0x060000D4 RID: 212 RVA: 0x00007A4F File Offset: 0x00005C4F
		public string Text
		{
			get
			{
				return this._text;
			}
			set
			{
				if (value != this._text)
				{
					this._text = value;
					base.OnPropertyChangedWithValue<string>(value, "Text");
				}
			}
		}

		// Token: 0x17000035 RID: 53
		// (get) Token: 0x060000D5 RID: 213 RVA: 0x00007A72 File Offset: 0x00005C72
		// (set) Token: 0x060000D6 RID: 214 RVA: 0x00007A7A File Offset: 0x00005C7A
		public List<string> TextList
		{
			get
			{
				return this._textList;
			}
			set
			{
				if (value != this._textList)
				{
					this._textList = value;
					this.Text = ((this._textList.Count > 0) ? this._textList[this._index] : "");
				}
			}
		}

		// Token: 0x17000036 RID: 54
		// (get) Token: 0x060000D7 RID: 215 RVA: 0x00007AB8 File Offset: 0x00005CB8
		// (set) Token: 0x060000D8 RID: 216 RVA: 0x00007AC0 File Offset: 0x00005CC0
		public int Index
		{
			get
			{
				return this._index;
			}
			private set
			{
				value = this._index;
			}
		}

		// Token: 0x04000079 RID: 121
		protected List<string> _textList = new List<string>();

		// Token: 0x0400007A RID: 122
		private int _index;

		// Token: 0x0400007B RID: 123
		private string _name;

		// Token: 0x0400007C RID: 124
		private string _text;
	}
}
