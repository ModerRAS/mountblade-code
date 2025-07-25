using System;
using TaleWorlds.PlayerServices;

namespace TaleWorlds.Diamond
{
	// Token: 0x0200001F RID: 31
	public static class PlayerIdExtensions
	{
		// Token: 0x060000A2 RID: 162 RVA: 0x00003237 File Offset: 0x00001437
		public static PeerId ConvertToPeerId(this PlayerId playerId)
		{
			return new PeerId(playerId.ToByteArray());
		}

		// Token: 0x060000A3 RID: 163 RVA: 0x00003245 File Offset: 0x00001445
		public static PlayerId ConvertToPlayerId(this PeerId peerId)
		{
			return new PlayerId(peerId.ToByteArray());
		}
	}
}
