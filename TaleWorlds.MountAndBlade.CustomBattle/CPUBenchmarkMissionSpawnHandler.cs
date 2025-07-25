using System;
using TaleWorlds.Core;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000003 RID: 3
	public class CPUBenchmarkMissionSpawnHandler : MissionLogic
	{
		// Token: 0x06000010 RID: 16 RVA: 0x00004621 File Offset: 0x00002821
		public CPUBenchmarkMissionSpawnHandler()
		{
		}

		// Token: 0x06000011 RID: 17 RVA: 0x00004629 File Offset: 0x00002829
		public CPUBenchmarkMissionSpawnHandler(CustomBattleCombatant defenderParty, CustomBattleCombatant attackerParty)
		{
			this._defenderParty = defenderParty;
			this._attackerParty = attackerParty;
		}

		// Token: 0x06000012 RID: 18 RVA: 0x0000463F File Offset: 0x0000283F
		public override void OnBehaviorInitialize()
		{
			base.OnBehaviorInitialize();
			this._missionAgentSpawnLogic = base.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
		}

		// Token: 0x06000013 RID: 19 RVA: 0x00004658 File Offset: 0x00002858
		public override void AfterStart()
		{
			int numberOfHealthyMembers = this._defenderParty.NumberOfHealthyMembers;
			int numberOfHealthyMembers2 = this._attackerParty.NumberOfHealthyMembers;
			base.Mission.PlayerTeam.GetFormation(FormationClass.Cavalry).ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
			base.Mission.PlayerTeam.GetFormation(FormationClass.Infantry).ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
			base.Mission.PlayerEnemyTeam.GetFormation(FormationClass.Cavalry).ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
			base.Mission.PlayerEnemyTeam.GetFormation(FormationClass.Infantry).ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
			this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Defender, true);
			this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Attacker, true);
			MissionSpawnSettings missionSpawnSettings = MissionSpawnSettings.CreateDefaultSpawnSettings();
			this._missionAgentSpawnLogic.InitWithSinglePhase(numberOfHealthyMembers, numberOfHealthyMembers2, numberOfHealthyMembers, numberOfHealthyMembers2, true, true, missionSpawnSettings);
		}

		// Token: 0x04000029 RID: 41
		private MissionAgentSpawnLogic _missionAgentSpawnLogic;

		// Token: 0x0400002A RID: 42
		private CustomBattleCombatant _defenderParty;

		// Token: 0x0400002B RID: 43
		private CustomBattleCombatant _attackerParty;
	}
}
