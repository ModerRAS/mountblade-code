using System;
using Newtonsoft.Json;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000024 RID: 36
	[Serializable]
	public class TestAccessObject : AccessObject
	{
		// Token: 0x1700002E RID: 46
		// (get) Token: 0x060000C4 RID: 196 RVA: 0x0000344D File Offset: 0x0000164D
		// (set) Token: 0x060000C5 RID: 197 RVA: 0x00003455 File Offset: 0x00001655
		[JsonProperty]
		public string UserName { get; private set; }

		// Token: 0x1700002F RID: 47
		// (get) Token: 0x060000C6 RID: 198 RVA: 0x0000345E File Offset: 0x0000165E
		// (set) Token: 0x060000C7 RID: 199 RVA: 0x00003466 File Offset: 0x00001666
		[JsonProperty]
		public string Password { get; private set; }

		// Token: 0x060000C8 RID: 200 RVA: 0x0000346F File Offset: 0x0000166F
		public TestAccessObject()
		{
		}

		// Token: 0x060000C9 RID: 201 RVA: 0x00003477 File Offset: 0x00001677
		public TestAccessObject(string userName, string password)
		{
			base.Type = "Test";
			this.UserName = userName;
			this.Password = password;
		}
	}
}
