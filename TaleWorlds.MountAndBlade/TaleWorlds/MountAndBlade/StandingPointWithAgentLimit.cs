// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.StandingPointWithAgentLimit
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class StandingPointWithAgentLimit : StandingPoint
  {
    private readonly List<Agent> _validAgents = new List<Agent>();

    public void AddValidAgent(Agent agent)
    {
      if (agent == null)
        return;
      this._validAgents.Add(agent);
    }

    public void ClearValidAgents() => this._validAgents.Clear();

    public override bool IsDisabledForAgent(Agent agent)
    {
      return !this._validAgents.Contains(agent) || base.IsDisabledForAgent(agent);
    }
  }
}
