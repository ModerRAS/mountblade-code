// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandBoxSiegeMissionSpawnHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandBoxSiegeMissionSpawnHandler : SandBoxMissionSpawnHandler
  {
    public override void AfterStart()
    {
      int numberOfInvolvedMen1 = this._mapEvent.GetNumberOfInvolvedMen(BattleSideEnum.Defender);
      int numberOfInvolvedMen2 = this._mapEvent.GetNumberOfInvolvedMen(BattleSideEnum.Attacker);
      int defenderInitialSpawn = numberOfInvolvedMen1;
      int attackerInitialSpawn = numberOfInvolvedMen2;
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Defender, false);
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Attacker, false);
      MissionSpawnSettings spawnSettings = SandBoxMissionSpawnHandler.CreateSandBoxBattleWaveSpawnSettings() with
      {
        DefenderAdvantageFactor = 1.5f
      };
      this._missionAgentSpawnLogic.InitWithSinglePhase(numberOfInvolvedMen1, numberOfInvolvedMen2, defenderInitialSpawn, attackerInitialSpawn, false, false, in spawnSettings);
    }
  }
}
