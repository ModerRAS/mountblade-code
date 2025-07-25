// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.LeaveMissionLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class LeaveMissionLogic : MissionLogic
  {
    public string UnconsciousGameMenuID = "settlement_player_unconscious";
    private Timer _isAgentDeadTimer;

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      return this.Mission.MainAgent != null && !this.Mission.MainAgent.IsActive();
    }

    public override void OnMissionTick(float dt)
    {
      if (Agent.Main == null || !Agent.Main.IsActive())
      {
        if (this._isAgentDeadTimer == null)
          this._isAgentDeadTimer = new Timer(Mission.Current.CurrentTime, 5f);
        if (!this._isAgentDeadTimer.Check(Mission.Current.CurrentTime))
          return;
        Mission.Current.NextCheckTimeEndMission = 0.0f;
        Mission.Current.EndMission();
        Campaign.Current.GameMenuManager.SetNextMenu(this.UnconsciousGameMenuID);
      }
      else
      {
        if (this._isAgentDeadTimer == null)
          return;
        this._isAgentDeadTimer = (Timer) null;
      }
    }
  }
}
