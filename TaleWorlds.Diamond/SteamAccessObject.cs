using System;
using Newtonsoft.Json;

namespace TaleWorlds.Diamond
{
	// Token: 0x02000023 RID: 35
	[Serializable]
	public class SteamAccessObject : AccessObject
	{
		// Token: 0x1700002A RID: 42
		// (get) Token: 0x060000BA RID: 186 RVA: 0x000033D1 File Offset: 0x000015D1
		// (set) Token: 0x060000BB RID: 187 RVA: 0x000033D9 File Offset: 0x000015D9
		[JsonProperty]
		public string UserName { get; private set; }

		// Token: 0x1700002B RID: 43
		// (get) Token: 0x060000BC RID: 188 RVA: 0x000033E2 File Offset: 0x000015E2
		// (set) Token: 0x060000BD RID: 189 RVA: 0x000033EA File Offset: 0x000015EA
		[JsonProperty]
		public string ExternalAccessToken { get; private set; }

		// Token: 0x1700002C RID: 44
		// (get) Token: 0x060000BE RID: 190 RVA: 0x000033F3 File Offset: 0x000015F3
		// (set) Token: 0x060000BF RID: 191 RVA: 0x000033FB File Offset: 0x000015FB
		[JsonProperty]
		public int AppId { get; private set; }

		// Token: 0x1700002D RID: 45
		// (get) Token: 0x060000C0 RID: 192 RVA: 0x00003404 File Offset: 0x00001604
		// (set) Token: 0x060000C1 RID: 193 RVA: 0x0000340C File Offset: 0x0000160C
		[JsonProperty]
		public string AppTicket { get; private set; }

		// Token: 0x060000C2 RID: 194 RVA: 0x00003415 File Offset: 0x00001615
		public SteamAccessObject()
		{
		}

		// Token: 0x060000C3 RID: 195 RVA: 0x0000341D File Offset: 0x0000161D
		public SteamAccessObject(string userName, string externalAccessToken, int appId, string appTicket)
		{
			base.Type = "Steam";
			this.UserName = userName;
			this.ExternalAccessToken = externalAccessToken;
			this.AppId = appId;
			this.AppTicket = appTicket;
		}
	}
}
