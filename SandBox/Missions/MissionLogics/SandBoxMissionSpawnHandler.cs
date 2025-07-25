// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandBoxMissionSpawnHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandBoxMissionSpawnHandler : MissionLogic
  {
    protected MissionAgentSpawnLogic _missionAgentSpawnLogic;
    protected MapEvent _mapEvent;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionAgentSpawnLogic = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
      this._mapEvent = MapEvent.PlayerMapEvent;
    }

    protected static MissionSpawnSettings CreateSandBoxBattleWaveSpawnSettings()
    {
      return new MissionSpawnSettings(MissionSpawnSettings.InitialSpawnMethod.BattleSizeAllocating, MissionSpawnSettings.ReinforcementTimingMethod.GlobalTimer, MissionSpawnSettings.ReinforcementSpawnMethod.Wave, 3f, reinforcementWavePercentage: 0.5f, maximumReinforcementWaveCount: BannerlordConfig.GetReinforcementWaveCount());
    }
  }
}
