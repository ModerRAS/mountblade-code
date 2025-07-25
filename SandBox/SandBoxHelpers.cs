// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxHelpers
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public static class SandBoxHelpers
  {
    public static class MissionHelper
    {
      public static void FadeOutAgents(
        IEnumerable<Agent> agents,
        bool hideInstantly,
        bool hideMount)
      {
        if (agents == null)
          return;
        Agent[] array = agents.ToArray<Agent>();
        foreach (Agent agent in array)
        {
          if (!agent.IsMount)
            agent.FadeOut(hideInstantly, hideMount);
        }
        foreach (Agent agent in array)
        {
          if (agent.State != AgentState.Routed)
            agent.FadeOut(hideInstantly, hideMount);
        }
      }
    }
  }
}
