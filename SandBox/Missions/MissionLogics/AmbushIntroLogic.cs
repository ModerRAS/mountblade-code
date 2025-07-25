// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.AmbushIntroLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentControllers;
using System;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class AmbushIntroLogic : MissionLogic
  {
    private AmbushMissionController _ambushMission;
    public Action StartIntroAction;

    public override void OnCreated()
    {
      this._ambushMission = this.Mission.GetMissionBehavior<AmbushMissionController>();
    }

    public void StartIntro()
    {
      Action startIntroAction = this.StartIntroAction;
      if (startIntroAction == null)
        return;
      startIntroAction();
    }

    public void OnIntroEnded()
    {
      this._ambushMission.OnIntroductionFinish();
      this.Mission.RemoveMissionBehavior((MissionBehavior) this);
    }
  }
}
