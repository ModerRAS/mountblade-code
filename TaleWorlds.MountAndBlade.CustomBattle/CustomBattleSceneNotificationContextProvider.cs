using System;
using TaleWorlds.Core;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x0200000B RID: 11
	public class CustomBattleSceneNotificationContextProvider : ISceneNotificationContextProvider
	{
		// Token: 0x060000A6 RID: 166 RVA: 0x0000709D File Offset: 0x0000529D
		public bool IsContextAllowed(SceneNotificationData.RelevantContextType relevantType)
		{
			return relevantType != SceneNotificationData.RelevantContextType.CustomBattle || GameStateManager.Current.ActiveState is CustomBattleState;
		}
	}
}
