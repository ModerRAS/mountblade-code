// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattlePowerCalculationLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattlePowerCalculationLogic : MissionLogic
  {
    private Dictionary<Team, float>[] _sidePowerData;

    public bool IsTeamPowersCalculated { get; private set; }

    public BattlePowerCalculationLogic()
    {
      this._sidePowerData = new Dictionary<Team, float>[2];
      for (int index = 0; index < 2; ++index)
        this._sidePowerData[index] = new Dictionary<Team, float>();
      this.IsTeamPowersCalculated = false;
    }

    public float GetTotalTeamPower(Team team)
    {
      if (!this.IsTeamPowersCalculated)
        this.CalculateTeamPowers();
      return this._sidePowerData[(int) team.Side][team];
    }

    private void CalculateTeamPowers()
    {
      Mission.TeamCollection teams = this.Mission.Teams;
      foreach (Team key in (List<Team>) teams)
        this._sidePowerData[(int) key.Side].Add(key, 0.0f);
      MissionAgentSpawnLogic missionBehavior = this.Mission.GetMissionBehavior<MissionAgentSpawnLogic>();
      for (int index = 0; index < 2; ++index)
      {
        BattleSideEnum side = (BattleSideEnum) index;
        IEnumerable<IAgentOriginBase> allTroopsForSide = missionBehavior.GetAllTroopsForSide(side);
        Dictionary<Team, float> dictionary = this._sidePowerData[index];
        bool isPlayerSide = this.Mission.PlayerTeam != null && this.Mission.PlayerTeam.Side == side;
        foreach (IAgentOriginBase troopOrigin in allTroopsForSide)
        {
          Team agentTeam = Mission.GetAgentTeam(troopOrigin, isPlayerSide);
          BasicCharacterObject troop = troopOrigin.Troop;
          dictionary[agentTeam] += troop.GetPower();
        }
      }
      foreach (Team team in (List<Team>) teams)
        team.QuerySystem.Expire();
      this.IsTeamPowersCalculated = true;
    }
  }
}
