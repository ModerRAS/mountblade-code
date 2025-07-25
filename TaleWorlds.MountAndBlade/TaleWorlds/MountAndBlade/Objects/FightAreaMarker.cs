// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.FightAreaMarker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects
{
  public class FightAreaMarker : AreaMarker
  {
    public int SubAreaIndex = 1;

    public IEnumerable<Agent> GetAgentsInRange(Team team, bool humanOnly = true)
    {
      FightAreaMarker fightAreaMarker = this;
      foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
      {
        if ((!humanOnly || activeAgent.IsHuman) && fightAreaMarker.IsPositionInRange(activeAgent.Position))
          yield return activeAgent;
      }
    }

    public IEnumerable<Agent> GetAgentsInRange(BattleSideEnum side, bool humanOnly = true)
    {
      foreach (Team team in (List<Team>) Mission.Current.Teams)
      {
        if (team.Side == side)
        {
          foreach (Agent agent in this.GetAgentsInRange(team, humanOnly))
            yield return agent;
        }
      }
    }
  }
}
