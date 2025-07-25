// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.Handlers.MissionFacialAnimationHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions.Handlers
{
  public class MissionFacialAnimationHandler : MissionLogic
  {
    private Timer _animRefreshTimer;

    public override void EarlyStart()
    {
      this._animRefreshTimer = new Timer(this.Mission.CurrentTime, 5f);
    }

    public override void AfterStart()
    {
    }

    public override void OnMissionTick(float dt)
    {
    }

    private void SetDefaultFacialAnimationsForAllAgents()
    {
      foreach (Agent agent in (List<Agent>) this.Mission.Agents)
      {
        if (agent.IsActive() && agent.IsHuman)
          agent.SetAgentFacialAnimation(Agent.FacialAnimChannel.Low, "idle_tired", true);
      }
    }
  }
}
