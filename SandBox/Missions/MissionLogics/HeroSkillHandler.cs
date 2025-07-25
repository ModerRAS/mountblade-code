// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.HeroSkillHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class HeroSkillHandler : MissionLogic
  {
    private MissionTime _nextCaptainSkillMoraleBoostTime;
    private bool _boostMorale;
    private int _nextMoraleTeam;

    public override void AfterStart()
    {
      this._nextCaptainSkillMoraleBoostTime = MissionTime.SecondsFromNow(10f);
    }

    public override void OnMissionTick(float dt)
    {
      if (this._nextCaptainSkillMoraleBoostTime.IsPast)
      {
        this._boostMorale = true;
        this._nextMoraleTeam = 0;
        this._nextCaptainSkillMoraleBoostTime = MissionTime.SecondsFromNow(10f);
      }
      if (!this._boostMorale)
        return;
      if (this._nextMoraleTeam >= this.Mission.Teams.Count)
      {
        this._boostMorale = false;
      }
      else
      {
        this.BoostMoraleForTeam(this.Mission.Teams[this._nextMoraleTeam]);
        ++this._nextMoraleTeam;
      }
    }

    private void BoostMoraleForTeam(Team team)
    {
    }
  }
}
