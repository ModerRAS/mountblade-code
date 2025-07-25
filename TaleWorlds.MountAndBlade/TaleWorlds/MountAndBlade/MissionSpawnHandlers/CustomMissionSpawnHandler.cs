// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionSpawnHandlers.CustomMissionSpawnHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionSpawnHandlers
{
  public class CustomMissionSpawnHandler : MissionLogic
  {
    protected MissionAgentSpawnLogic _missionAgentSpawnLogic;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionAgentSpawnLogic = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
    }

    protected static MissionSpawnSettings CreateCustomBattleWaveSpawnSettings()
    {
      return new MissionSpawnSettings(MissionSpawnSettings.InitialSpawnMethod.BattleSizeAllocating, MissionSpawnSettings.ReinforcementTimingMethod.GlobalTimer, MissionSpawnSettings.ReinforcementSpawnMethod.Wave, 3f, reinforcementWavePercentage: 0.5f);
    }
  }
}
