// Decompiled with JetBrains decompiler
// Type: SandBox.AI.PassageAI
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Objects;
using System.Collections.Generic;
using System.Diagnostics;
using TaleWorlds.InputSystem;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.AI
{
  public class PassageAI : UsableMachineAIBase
  {
    public PassageAI(UsableMachine usableMachine)
      : base(usableMachine)
    {
    }

    protected override Agent.AIScriptedFrameFlags GetScriptedFrameFlags(Agent agent)
    {
      return agent.CurrentWatchState != Agent.WatchState.Alarmed ? Agent.AIScriptedFrameFlags.NoAttack | Agent.AIScriptedFrameFlags.DoNotRun : Agent.AIScriptedFrameFlags.NoAttack | Agent.AIScriptedFrameFlags.NeverSlowDown;
    }

    protected override void OnTick(
      Agent agentToCompareTo,
      Formation formationToCompareTo,
      Team potentialUsersTeam,
      float dt)
    {
      foreach (PassageUsePoint standingPoint in (List<StandingPoint>) this.UsableMachine.StandingPoints)
      {
        if ((agentToCompareTo == null || standingPoint.UserAgent == agentToCompareTo) && (formationToCompareTo == null || standingPoint.UserAgent != null && standingPoint.UserAgent.IsAIControlled && standingPoint.UserAgent.Formation == formationToCompareTo))
        {
          TaleWorlds.Library.Debug.FailedAssert("isAgentManagedByThisMachineAI(standingPoint.UserAgent)", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\AI\\PassageAI.cs", nameof (OnTick), 41);
          Agent userAgent = standingPoint.UserAgent;
          if (this.HasActionCompleted || potentialUsersTeam != null && this.UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side) || userAgent.IsRunningAway)
            this.HandleAgentStopUsingStandingPoint(userAgent, (StandingPoint) standingPoint);
        }
        for (int index = standingPoint.MovingAgents.Count - 1; index >= 0; --index)
        {
          Agent movingAgent = standingPoint.MovingAgents[index];
          if ((agentToCompareTo == null || movingAgent == agentToCompareTo) && (formationToCompareTo == null || movingAgent != null && movingAgent.IsAIControlled && movingAgent.Formation == formationToCompareTo))
          {
            if (this.HasActionCompleted || potentialUsersTeam != null && this.UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side) || movingAgent.IsRunningAway)
            {
              TaleWorlds.Library.Debug.FailedAssert("HasActionCompleted || (potentialUsersTeam != null && UsableMachine.IsDisabledForBattleSideAI(potentialUsersTeam.Side)) || agent.IsRunningAway", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\AI\\PassageAI.cs", nameof (OnTick), 69);
              this.HandleAgentStopUsingStandingPoint(movingAgent, (StandingPoint) standingPoint);
            }
            else if (!standingPoint.IsDisabled && !movingAgent.IsPaused && movingAgent.CanReachAndUseObject((UsableMissionObject) standingPoint, standingPoint.GetUserFrameForAgent(movingAgent).Origin.GetGroundVec3().DistanceSquared(movingAgent.Position)))
            {
              movingAgent.UseGameObject((UsableMissionObject) standingPoint);
              movingAgent.SetScriptedFlags(movingAgent.GetScriptedFlags() & ~standingPoint.DisableScriptedFrameFlags);
            }
          }
        }
      }
    }

    [Conditional("DEBUG")]
    private void TickForDebug()
    {
      if (!Input.DebugInput.IsHotKeyDown("UsableMachineAiBaseHotkeyShowMachineUsers"))
        return;
      foreach (PassageUsePoint standingPoint in (List<StandingPoint>) this.UsableMachine.StandingPoints)
      {
        foreach (Agent movingAgent in (List<Agent>) standingPoint.MovingAgents)
          ;
        Agent userAgent = standingPoint.UserAgent;
      }
    }
  }
}
