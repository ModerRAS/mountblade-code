// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionSpawnHandlers.CustomSiegeMissionSpawnHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionSpawnHandlers
{
  public class CustomSiegeMissionSpawnHandler : CustomMissionSpawnHandler
  {
    private CustomBattleCombatant[] _battleCombatants;
    private bool _spawnWithHorses;

    public CustomSiegeMissionSpawnHandler(
      IBattleCombatant defenderBattleCombatant,
      IBattleCombatant attackerBattleCombatant,
      bool spawnWithHorses)
    {
      this._battleCombatants = new CustomBattleCombatant[2]
      {
        (CustomBattleCombatant) defenderBattleCombatant,
        (CustomBattleCombatant) attackerBattleCombatant
      };
      this._spawnWithHorses = spawnWithHorses;
    }

    public override void AfterStart()
    {
      int ofHealthyMembers1 = this._battleCombatants[0].NumberOfHealthyMembers;
      int ofHealthyMembers2 = this._battleCombatants[1].NumberOfHealthyMembers;
      int defenderInitialSpawn = ofHealthyMembers1;
      int attackerInitialSpawn = ofHealthyMembers2;
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Defender, this._spawnWithHorses);
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Attacker, this._spawnWithHorses);
      MissionSpawnSettings spawnSettings = CustomMissionSpawnHandler.CreateCustomBattleWaveSpawnSettings();
      this._missionAgentSpawnLogic.InitWithSinglePhase(ofHealthyMembers1, ofHealthyMembers2, defenderInitialSpawn, attackerInitialSpawn, false, false, in spawnSettings);
    }
  }
}
