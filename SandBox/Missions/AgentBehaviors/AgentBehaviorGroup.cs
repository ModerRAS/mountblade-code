// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.AgentBehaviorGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public abstract class AgentBehaviorGroup
  {
    public AgentNavigator Navigator;
    public List<AgentBehavior> Behaviors;
    protected float CheckBehaviorTime = 5f;
    protected Timer CheckBehaviorTimer;
    private bool _isActive;

    public Agent OwnerAgent => this.Navigator.OwnerAgent;

    public AgentBehavior ScriptedBehavior { get; private set; }

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

    public Mission Mission { get; private set; }

    protected AgentBehaviorGroup(AgentNavigator navigator, Mission mission)
    {
      this.Mission = mission;
      this.Behaviors = new List<AgentBehavior>();
      this.Navigator = navigator;
      this._isActive = false;
      this.ScriptedBehavior = (AgentBehavior) null;
    }

    public T AddBehavior<T>() where T : AgentBehavior
    {
      if (Activator.CreateInstance(typeof (T), (object) this) is T instance)
      {
        foreach (AgentBehavior behavior in this.Behaviors)
        {
          if (behavior.GetType() == instance.GetType())
            return behavior as T;
        }
        this.Behaviors.Add((AgentBehavior) instance);
      }
      return instance;
    }

    public T GetBehavior<T>() where T : AgentBehavior
    {
      foreach (AgentBehavior behavior1 in this.Behaviors)
      {
        if (behavior1 is T behavior2)
          return behavior2;
      }
      return default (T);
    }

    public bool HasBehavior<T>() where T : AgentBehavior
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior is T)
          return true;
      }
      return false;
    }

    public void RemoveBehavior<T>() where T : AgentBehavior
    {
      for (int index = 0; index < this.Behaviors.Count; ++index)
      {
        if (this.Behaviors[index] is T)
        {
          int num = this.Behaviors[index].IsActive ? 1 : 0;
          this.Behaviors[index].IsActive = false;
          if (this.ScriptedBehavior == this.Behaviors[index])
            this.ScriptedBehavior = (AgentBehavior) null;
          this.Behaviors.RemoveAt(index);
          if (num != 0)
            this.ForceThink(0.0f);
        }
      }
    }

    public void SetScriptedBehavior<T>() where T : AgentBehavior
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior is T)
        {
          this.ScriptedBehavior = behavior;
          this.ForceThink(0.0f);
          break;
        }
      }
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior != this.ScriptedBehavior)
          behavior.IsActive = false;
      }
    }

    public void DisableScriptedBehavior()
    {
      if (this.ScriptedBehavior == null)
        return;
      this.ScriptedBehavior.IsActive = false;
      this.ScriptedBehavior = (AgentBehavior) null;
      this.ForceThink(0.0f);
    }

    public void DisableAllBehaviors()
    {
      foreach (AgentBehavior behavior in this.Behaviors)
        behavior.IsActive = false;
    }

    public AgentBehavior GetActiveBehavior()
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior.IsActive)
          return behavior;
      }
      return (AgentBehavior) null;
    }

    public virtual void Tick(float dt, bool isSimulation)
    {
    }

    public virtual void ConversationTick()
    {
    }

    public virtual void OnAgentRemoved(Agent agent)
    {
    }

    protected virtual void OnActivate()
    {
    }

    protected virtual void OnDeactivate()
    {
      foreach (AgentBehavior behavior in this.Behaviors)
        behavior.IsActive = false;
    }

    public virtual float GetScore(bool isSimulation) => 0.0f;

    public virtual void ForceThink(float inSeconds)
    {
    }
  }
}
