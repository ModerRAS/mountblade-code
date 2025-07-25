// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionSpawnHandlers.CustomBattleMissionSpawnHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionSpawnHandlers
{
  public class CustomBattleMissionSpawnHandler : CustomMissionSpawnHandler
  {
    private CustomBattleCombatant _defenderParty;
    private CustomBattleCombatant _attackerParty;

    public CustomBattleMissionSpawnHandler(
      CustomBattleCombatant defenderParty,
      CustomBattleCombatant attackerParty)
    {
      this._defenderParty = defenderParty;
      this._attackerParty = attackerParty;
    }

    public override void AfterStart()
    {
      int ofHealthyMembers1 = this._defenderParty.NumberOfHealthyMembers;
      int ofHealthyMembers2 = this._attackerParty.NumberOfHealthyMembers;
      int defenderInitialSpawn = ofHealthyMembers1;
      int attackerInitialSpawn = ofHealthyMembers2;
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Defender, true);
      this._missionAgentSpawnLogic.SetSpawnHorses(BattleSideEnum.Attacker, true);
      MissionSpawnSettings spawnSettings = CustomMissionSpawnHandler.CreateCustomBattleWaveSpawnSettings();
      this._missionAgentSpawnLogic.InitWithSinglePhase(ofHealthyMembers1, ofHealthyMembers2, defenderInitialSpawn, attackerInitialSpawn, true, true, in spawnSettings);
    }
  }
}
