// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DetachmentData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class DetachmentData
  {
    public List<Formation> joinedFormations = new List<Formation>();
    public List<(Agent, List<float>)> agentScores = new List<(Agent, List<float>)>();
    public int MovingAgentCount;
    public int DefendingAgentCount;
    public float firstTime;

    public int AgentCount
    {
      get
      {
        return this.joinedFormations.SumQ<Formation>((Func<Formation, int>) (f => f.CountOfDetachableNonplayerUnits)) + this.MovingAgentCount + this.DefendingAgentCount;
      }
    }

    public bool IsPrecalculated()
    {
      int count = this.agentScores.Count;
      return count > 0 && count >= this.AgentCount;
    }

    public DetachmentData() => this.firstTime = MBCommon.GetTotalMissionTime();

    public void RemoveScoreOfAgent(Agent agent)
    {
      for (int index = this.agentScores.Count - 1; index >= 0; --index)
      {
        if (this.agentScores[index].Item1 == agent)
        {
          this.agentScores.RemoveAt(index);
          break;
        }
      }
    }
  }
}
