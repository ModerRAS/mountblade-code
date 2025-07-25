﻿using System;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000004 RID: 4
	public class CustomBattleAutoBlockModel : AutoBlockModel
	{
		// Token: 0x06000014 RID: 20 RVA: 0x0000471C File Offset: 0x0000291C
		public override Agent.UsageDirection GetBlockDirection(Mission mission)
		{
			Agent mainAgent = mission.MainAgent;
			float num = float.MinValue;
			Agent.UsageDirection usageDirection = Agent.UsageDirection.AttackDown;
			foreach (Agent agent in mission.Agents)
			{
				if (agent.IsHuman)
				{
					Agent.ActionStage currentActionStage = agent.GetCurrentActionStage(1);
					if ((currentActionStage == Agent.ActionStage.AttackReady || currentActionStage == Agent.ActionStage.AttackQuickReady || currentActionStage == Agent.ActionStage.AttackRelease) && agent.IsEnemyOf(mainAgent))
					{
						Vec3 v = agent.Position - mainAgent.Position;
						float num2 = v.Normalize();
						float num3 = MBMath.ClampFloat(Vec3.DotProduct(v, mainAgent.LookDirection) + 0.8f, 0f, 1f);
						float num4 = MBMath.ClampFloat(1f / (num2 + 0.5f), 0f, 1f);
						float num5 = MBMath.ClampFloat(-Vec3.DotProduct(v, agent.LookDirection) + 0.5f, 0f, 1f);
						float num6 = num3 * num4 * num5;
						if (num6 > num)
						{
							num = num6;
							usageDirection = agent.GetCurrentActionDirection(1);
							if (usageDirection == Agent.UsageDirection.None)
							{
								usageDirection = Agent.UsageDirection.AttackDown;
							}
						}
					}
				}
			}
			return usageDirection;
		}
	}
}
