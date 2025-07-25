// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.IndoorMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class IndoorMissionController : MissionLogic
  {
    private MissionAgentHandler _missionAgentHandler;

    public override void OnCreated()
    {
      base.OnCreated();
      this.Mission.DoesMissionRequireCivilianEquipment = true;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._missionAgentHandler = this.Mission.GetMissionBehavior<MissionAgentHandler>();
    }

    public override void AfterStart()
    {
      base.AfterStart();
      this.Mission.SetMissionMode(MissionMode.StartUp, true);
      this.Mission.IsInventoryAccessible = !Campaign.Current.IsMainHeroDisguised;
      this.Mission.IsQuestScreenAccessible = true;
      this._missionAgentHandler.SpawnPlayer(this.Mission.DoesMissionRequireCivilianEquipment, true);
      this._missionAgentHandler.SpawnLocationCharacters();
    }
  }
}
