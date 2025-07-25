using System;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace TaleWorlds.MountAndBlade.View.MissionViews.Singleplayer
{
	// Token: 0x02000072 RID: 114
	public class MissionSingleplayerKillNotificationUIHandler : MissionView
	{
		// Token: 0x0600043B RID: 1083 RVA: 0x00022FE0 File Offset: 0x000211E0
		public override void OnAgentRemoved(Agent affectedAgent, Agent affectorAgent, AgentState agentState, KillingBlow killingBlow)
		{
			base.OnAgentRemoved(affectedAgent, affectorAgent, agentState, killingBlow);
			if (!affectedAgent.IsHuman)
			{
				return;
			}
			string text = (affectorAgent == null) ? string.Empty : affectorAgent.Name;
			string text2 = (affectedAgent == null) ? string.Empty : affectedAgent.Name;
			uint num = 4291306250U;
			Agent main = Agent.Main;
			if (main != null && ((main.Team != base.Mission.SpectatorTeam && main.Team != affectedAgent.Team) || (affectorAgent != null && affectorAgent == main)))
			{
				num = 4281589009U;
			}
			TextObject textObject;
			if (affectorAgent != null)
			{
				textObject = new TextObject("{=2ZarUUbw}{KILLERPLAYERNAME} has killed {KILLEDPLAYERNAME}!", null);
				textObject.SetTextVariable("KILLERPLAYERNAME", text);
			}
			else
			{
				textObject = new TextObject("{=9CnRKZOb}{KILLEDPLAYERNAME} has died!", null);
			}
			textObject.SetTextVariable("KILLEDPLAYERNAME", text2);
			MessageManager.DisplayMessage(textObject.ToString(), num);
		}
	}
}
