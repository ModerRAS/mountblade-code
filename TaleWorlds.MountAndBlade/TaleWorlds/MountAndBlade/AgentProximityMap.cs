// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentProximityMap
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class AgentProximityMap
  {
    public static bool CanSearchRadius(float searchRadius)
    {
      float num = Mission.Current.ProximityMapMaxSearchRadius();
      return (double) searchRadius <= (double) num;
    }

    public static AgentProximityMap.ProximityMapSearchStruct BeginSearch(
      Mission mission,
      Vec2 searchPos,
      float searchRadius,
      bool extendRangeByBiggestAgentCollisionPadding = false)
    {
      if (extendRangeByBiggestAgentCollisionPadding)
        searchRadius += mission.GetBiggestAgentCollisionPadding() + 1f;
      AgentProximityMap.ProximityMapSearchStruct proximityMapSearchStruct = new AgentProximityMap.ProximityMapSearchStruct();
      float num = mission.ProximityMapMaxSearchRadius();
      proximityMapSearchStruct.LoopAllAgents = (double) searchRadius > (double) num;
      if (proximityMapSearchStruct.LoopAllAgents)
      {
        proximityMapSearchStruct.SearchStructInternal.SearchPos = searchPos;
        proximityMapSearchStruct.SearchStructInternal.SearchDistSq = searchRadius * searchRadius;
        proximityMapSearchStruct.LastAgentLoopIndex = 0;
        proximityMapSearchStruct.LastFoundAgent = (Agent) null;
        for (MBReadOnlyList<Agent> agents = mission.Agents; agents.Count > proximityMapSearchStruct.LastAgentLoopIndex; ++proximityMapSearchStruct.LastAgentLoopIndex)
        {
          Agent agent = agents[proximityMapSearchStruct.LastAgentLoopIndex];
          if ((double) agent.Position.AsVec2.DistanceSquared(searchPos) <= (double) proximityMapSearchStruct.SearchStructInternal.SearchDistSq)
          {
            proximityMapSearchStruct.LastFoundAgent = agent;
            break;
          }
        }
      }
      else
      {
        proximityMapSearchStruct.SearchStructInternal = mission.ProximityMapBeginSearch(searchPos, searchRadius);
        proximityMapSearchStruct.RefreshLastFoundAgent(mission);
      }
      return proximityMapSearchStruct;
    }

    public static void FindNext(
      Mission mission,
      ref AgentProximityMap.ProximityMapSearchStruct searchStruct)
    {
      if (searchStruct.LoopAllAgents)
      {
        ++searchStruct.LastAgentLoopIndex;
        searchStruct.LastFoundAgent = (Agent) null;
        for (MBReadOnlyList<Agent> agents = mission.Agents; agents.Count > searchStruct.LastAgentLoopIndex; ++searchStruct.LastAgentLoopIndex)
        {
          Agent agent = agents[searchStruct.LastAgentLoopIndex];
          if ((double) agent.Position.AsVec2.DistanceSquared(searchStruct.SearchStructInternal.SearchPos) <= (double) searchStruct.SearchStructInternal.SearchDistSq)
          {
            searchStruct.LastFoundAgent = agent;
            break;
          }
        }
      }
      else
      {
        mission.ProximityMapFindNext(ref searchStruct.SearchStructInternal);
        searchStruct.RefreshLastFoundAgent(mission);
      }
    }

    public struct ProximityMapSearchStruct
    {
      internal AgentProximityMap.ProximityMapSearchStructInternal SearchStructInternal;
      internal bool LoopAllAgents;
      internal int LastAgentLoopIndex;

      public Agent LastFoundAgent { get; internal set; }

      internal void RefreshLastFoundAgent(Mission mission)
      {
        this.LastFoundAgent = this.SearchStructInternal.GetCurrentAgent(mission);
      }
    }

    [EngineStruct("Managed_proximity_map_search_struct", false)]
    [Serializable]
    internal struct ProximityMapSearchStructInternal
    {
      internal int CurrentElementIndex;
      internal Vec2i Loc;
      internal Vec2i GridMin;
      internal Vec2i GridMax;
      internal Vec2 SearchPos;
      internal float SearchDistSq;

      internal Agent GetCurrentAgent(Mission mission)
      {
        return mission.FindAgentWithIndex(this.CurrentElementIndex);
      }
    }
  }
}
