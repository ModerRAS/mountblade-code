// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CasualtyHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CasualtyHandler : MissionLogic
  {
    private readonly Dictionary<Formation, int> _casualtyCounts = new Dictionary<Formation, int>();
    private readonly Dictionary<Formation, float> _powerLoss = new Dictionary<Formation, float>();

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      this.RegisterCasualty(affectedAgent);
    }

    public override void OnAgentFleeing(Agent affectedAgent)
    {
      this.RegisterCasualty(affectedAgent);
    }

    public int GetCasualtyCountOfFormation(Formation formation)
    {
      int countOfFormation;
      if (!this._casualtyCounts.TryGetValue(formation, out countOfFormation))
      {
        countOfFormation = 0;
        this._casualtyCounts[formation] = 0;
      }
      return countOfFormation;
    }

    public float GetCasualtyPowerLossOfFormation(Formation formation)
    {
      float powerLossOfFormation;
      if (!this._powerLoss.TryGetValue(formation, out powerLossOfFormation))
      {
        powerLossOfFormation = 0.0f;
        this._powerLoss[formation] = 0.0f;
      }
      return powerLossOfFormation;
    }

    private void RegisterCasualty(Agent agent)
    {
      Formation formation = agent.Formation;
      if (formation == null)
        return;
      if (this._casualtyCounts.ContainsKey(formation))
        this._casualtyCounts[formation]++;
      else
        this._casualtyCounts[formation] = 1;
      if (this._powerLoss.ContainsKey(formation))
        this._powerLoss[formation] += agent.Character.GetPower();
      else
        this._powerLoss[formation] = agent.Character.GetPower();
    }
  }
}
