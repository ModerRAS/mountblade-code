// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.AgentBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public abstract class AgentBehavior
  {
    public float CheckTime = 15f;
    protected readonly AgentBehaviorGroup BehaviorGroup;
    private bool _isActive;

    public AgentNavigator Navigator => this.BehaviorGroup.Navigator;

    public bool IsActive
    {
      get => this._isActive;
      set
      {
        if (this._isActive == value)
          return;
        this._isActive = value;
        if (this._isActive)
          this.OnActivate();
        else
          this.OnDeactivate();
      }
    }

    public Agent OwnerAgent => this.Navigator.OwnerAgent;

    public Mission Mission { get; private set; }

    protected AgentBehavior(AgentBehaviorGroup behaviorGroup)
    {
      this.Mission = behaviorGroup.Mission;
      this.CheckTime = (float) (40.0 + (double) MBRandom.RandomFloat * 20.0);
      this.BehaviorGroup = behaviorGroup;
      this._isActive = false;
    }

    public virtual float GetAvailability(bool isSimulation) => 0.0f;

    public virtual void Tick(float dt, bool isSimulation)
    {
    }

    public virtual void ConversationTick()
    {
    }

    protected virtual void OnActivate()
    {
    }

    protected virtual void OnDeactivate()
    {
    }

    public virtual bool CheckStartWithBehavior() => false;

    public virtual void OnSpecialTargetChanged()
    {
    }

    public virtual void SetCustomWanderTarget(UsableMachine customUsableMachine)
    {
    }

    public virtual void OnAgentRemoved(Agent agent)
    {
    }

    public abstract string GetDebugInfo();
  }
}
