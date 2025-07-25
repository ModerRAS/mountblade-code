﻿using System;

namespace TaleWorlds.Diamond
{
	// Token: 0x0200001B RID: 27
	public class MessageDescription : Attribute
	{
		// Token: 0x1700001E RID: 30
		// (get) Token: 0x06000084 RID: 132 RVA: 0x00002C3B File Offset: 0x00000E3B
		// (set) Token: 0x06000085 RID: 133 RVA: 0x00002C43 File Offset: 0x00000E43
		public string To { get; private set; }

		// Token: 0x1700001F RID: 31
		// (get) Token: 0x06000086 RID: 134 RVA: 0x00002C4C File Offset: 0x00000E4C
		// (set) Token: 0x06000087 RID: 135 RVA: 0x00002C54 File Offset: 0x00000E54
		public string From { get; private set; }

		// Token: 0x06000088 RID: 136 RVA: 0x00002C5D File Offset: 0x00000E5D
		public MessageDescription(string from, string to)
		{
			this.From = from;
			this.To = to;
		}
	}
}
