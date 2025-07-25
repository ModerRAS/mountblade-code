// Decompiled with JetBrains decompiler
// Type: SandBox.Source.Missions.AgentBehaviors.BoardGameAgentBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Missions.AgentBehaviors;
using SandBox.Objects.Usables;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Source.Missions.AgentBehaviors
{
  public class BoardGameAgentBehavior : AgentBehavior
  {
    private const int FinishDelayAsSeconds = 3;
    private Chair _chair;
    private BoardGameAgentBehavior.State _state;
    private Timer _waitTimer;

    public BoardGameAgentBehavior(AgentBehaviorGroup behaviorGroup)
      : base(behaviorGroup)
    {
    }

    public override void Tick(float dt, bool isSimulation)
    {
      switch (this._state)
      {
        case BoardGameAgentBehavior.State.Idle:
          if (this.Navigator.TargetUsableMachine == this._chair || this._chair.IsAgentFullySitting(this.OwnerAgent))
            break;
          this.Navigator.SetTarget((UsableMachine) this._chair);
          this._state = BoardGameAgentBehavior.State.MovingToChair;
          break;
        case BoardGameAgentBehavior.State.MovingToChair:
          if (!this._chair.IsAgentFullySitting(this.OwnerAgent))
            break;
          this._state = BoardGameAgentBehavior.State.Idle;
          break;
        case BoardGameAgentBehavior.State.Finish:
          if (this.OwnerAgent.IsUsingGameObject && this._waitTimer == null)
          {
            this.Navigator.ClearTarget();
            this._waitTimer = new Timer(this.Mission.CurrentTime, 3f);
            break;
          }
          if (this._waitTimer != null)
          {
            if (!this._waitTimer.Check(this.Mission.CurrentTime))
              break;
            this.RemoveBoardGameBehaviorInternal();
            break;
          }
          this.RemoveBoardGameBehaviorInternal();
          break;
      }
    }

    protected override void OnDeactivate()
    {
      this.Navigator.ClearTarget();
      this._chair = (Chair) null;
      this._state = BoardGameAgentBehavior.State.Idle;
      this._waitTimer = (Timer) null;
    }

    public override string GetDebugInfo() => nameof (BoardGameAgentBehavior);

    public override float GetAvailability(bool isSimulation) => 1f;

    private void RemoveBoardGameBehaviorInternal()
    {
      InterruptingBehaviorGroup behaviorGroup = this.OwnerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>();
      if (behaviorGroup.GetBehavior<BoardGameAgentBehavior>() == null)
        return;
      behaviorGroup.RemoveBehavior<BoardGameAgentBehavior>();
    }

    public static void AddTargetChair(Agent ownerAgent, Chair chair)
    {
      InterruptingBehaviorGroup behaviorGroup = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>();
      int num = behaviorGroup.GetBehavior<BoardGameAgentBehavior>() == null ? 1 : 0;
      BoardGameAgentBehavior gameAgentBehavior = behaviorGroup.GetBehavior<BoardGameAgentBehavior>() ?? behaviorGroup.AddBehavior<BoardGameAgentBehavior>();
      gameAgentBehavior._chair = chair;
      gameAgentBehavior._state = BoardGameAgentBehavior.State.Idle;
      gameAgentBehavior._waitTimer = (Timer) null;
      if (num == 0)
        return;
      behaviorGroup.SetScriptedBehavior<BoardGameAgentBehavior>();
    }

    public static void RemoveBoardGameBehaviorOfAgent(Agent ownerAgent)
    {
      BoardGameAgentBehavior behavior = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>().GetBehavior<BoardGameAgentBehavior>();
      if (behavior == null)
        return;
      behavior._chair = (Chair) null;
      behavior._state = BoardGameAgentBehavior.State.Finish;
    }

    public static bool IsAgentMovingToChair(Agent ownerAgent)
    {
      if (ownerAgent == null)
        return false;
      BoardGameAgentBehavior behavior = ownerAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.GetBehaviorGroup<InterruptingBehaviorGroup>()?.GetBehavior<BoardGameAgentBehavior>();
      return behavior != null && behavior._state == BoardGameAgentBehavior.State.MovingToChair;
    }

    private enum State
    {
      Idle,
      MovingToChair,
      Finish,
    }
  }
}
