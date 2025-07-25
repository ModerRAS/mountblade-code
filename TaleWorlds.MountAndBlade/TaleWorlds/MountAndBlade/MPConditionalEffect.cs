// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPConditionalEffect
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Xml;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MPConditionalEffect
  {
    public MBReadOnlyList<MPPerkCondition> Conditions { get; }

    public MBReadOnlyList<MPPerkEffectBase> Effects { get; }

    public MPPerkCondition.PerkEventFlags EventFlags
    {
      get
      {
        MPPerkCondition.PerkEventFlags eventFlags = MPPerkCondition.PerkEventFlags.None;
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
          eventFlags |= condition.EventFlags;
        return eventFlags;
      }
    }

    public bool IsTickRequired
    {
      get
      {
        foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) this.Effects)
        {
          if (effect.IsTickRequired)
            return true;
        }
        return false;
      }
    }

    public MPConditionalEffect(List<string> gameModes, XmlNode node)
    {
      MBList<MPPerkCondition> mbList1 = new MBList<MPPerkCondition>();
      MBList<MPPerkEffectBase> mbList2 = new MBList<MPPerkEffectBase>();
      foreach (XmlNode childNode1 in node.ChildNodes)
      {
        if (childNode1.Name == nameof (Conditions))
        {
          foreach (XmlNode childNode2 in childNode1.ChildNodes)
          {
            if (childNode2.NodeType == XmlNodeType.Element)
              mbList1.Add(MPPerkCondition.CreateFrom(gameModes, childNode2));
          }
        }
        else if (childNode1.Name == nameof (Effects))
        {
          foreach (XmlNode childNode3 in childNode1.ChildNodes)
          {
            if (childNode3.NodeType == XmlNodeType.Element)
            {
              MPPerkEffect from = MPPerkEffect.CreateFrom(childNode3);
              mbList2.Add((MPPerkEffectBase) from);
            }
          }
        }
      }
      this.Conditions = (MBReadOnlyList<MPPerkCondition>) mbList1;
      this.Effects = (MBReadOnlyList<MPPerkEffectBase>) mbList2;
    }

    public bool Check(MissionPeer peer)
    {
      foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
      {
        if (!condition.Check(peer))
          return false;
      }
      return true;
    }

    public bool Check(Agent agent)
    {
      foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
      {
        if (!condition.Check(agent))
          return false;
      }
      return true;
    }

    public void OnEvent(
      bool isWarmup,
      MissionPeer peer,
      MPConditionalEffect.ConditionalEffectContainer container)
    {
      if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() <= 0)
      {
        if (peer == null)
          return;
        bool? nullable = peer.ControlledAgent?.IsActive();
        bool flag = true;
        if (!(nullable.GetValueOrDefault() == flag & nullable.HasValue))
          return;
      }
      bool flag1 = true;
      foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
      {
        if (condition.IsPeerCondition && !condition.Check(peer))
        {
          flag1 = false;
          break;
        }
      }
      if (!flag1)
      {
        if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() > 0)
        {
          MBReadOnlyList<IFormationUnit> allUnits = peer?.ControlledFormation?.Arrangement.GetAllUnits();
          if (allUnits == null)
            return;
          foreach (IFormationUnit formationUnit in (List<IFormationUnit>) allUnits)
          {
            if (formationUnit is Agent agent && agent.IsActive())
              this.UpdateAgentState(isWarmup, container, agent, false);
          }
        }
        else
          this.UpdateAgentState(isWarmup, container, peer.ControlledAgent, false);
      }
      else if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() > 0)
      {
        MBReadOnlyList<IFormationUnit> allUnits = peer?.ControlledFormation?.Arrangement.GetAllUnits();
        if (allUnits == null)
          return;
        foreach (IFormationUnit formationUnit in (List<IFormationUnit>) allUnits)
        {
          if (formationUnit is Agent agent && agent.IsActive())
          {
            bool state = true;
            foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
            {
              if (!condition.IsPeerCondition && !condition.Check(agent))
              {
                state = false;
                break;
              }
            }
            this.UpdateAgentState(isWarmup, container, agent, state);
          }
        }
      }
      else
      {
        bool state = true;
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
        {
          if (!condition.IsPeerCondition && !condition.Check(peer.ControlledAgent))
          {
            state = false;
            break;
          }
        }
        this.UpdateAgentState(isWarmup, container, peer.ControlledAgent, state);
      }
    }

    public void OnEvent(
      bool isWarmup,
      Agent agent,
      MPConditionalEffect.ConditionalEffectContainer container)
    {
      if (agent == null)
        return;
      bool state = true;
      foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
      {
        if (!condition.Check(agent))
        {
          state = false;
          break;
        }
      }
      this.UpdateAgentState(isWarmup, container, agent, state);
    }

    public void OnTick(bool isWarmup, MissionPeer peer, int tickCount)
    {
      if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() <= 0)
      {
        if (peer == null)
          return;
        bool? nullable = peer.ControlledAgent?.IsActive();
        bool flag = true;
        if (!(nullable.GetValueOrDefault() == flag & nullable.HasValue))
          return;
      }
      bool flag1 = true;
      foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
      {
        if (condition.IsPeerCondition && !condition.Check(peer))
        {
          flag1 = false;
          break;
        }
      }
      if (!flag1)
        return;
      if (MultiplayerOptions.OptionType.NumberOfBotsPerFormation.GetIntValue() > 0)
      {
        MBReadOnlyList<IFormationUnit> allUnits = peer?.ControlledFormation?.Arrangement.GetAllUnits();
        if (allUnits == null)
          return;
        foreach (IFormationUnit formationUnit in (List<IFormationUnit>) allUnits)
        {
          if (formationUnit is Agent agent && agent.IsActive())
          {
            bool flag2 = true;
            foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
            {
              if (!condition.IsPeerCondition && !condition.Check(agent))
              {
                flag2 = false;
                break;
              }
            }
            if (flag2)
            {
              foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) this.Effects)
              {
                if ((!isWarmup || !effect.IsDisabledInWarmup) && effect.IsTickRequired)
                  effect.OnTick(agent, tickCount);
              }
            }
          }
        }
      }
      else
      {
        bool flag3 = true;
        foreach (MPPerkCondition condition in (List<MPPerkCondition>) this.Conditions)
        {
          if (!condition.IsPeerCondition && !condition.Check(peer.ControlledAgent))
          {
            flag3 = false;
            break;
          }
        }
        if (!flag3)
          return;
        foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) this.Effects)
        {
          if ((!isWarmup || !effect.IsDisabledInWarmup) && effect.IsTickRequired)
            effect.OnTick(peer.ControlledAgent, tickCount);
        }
      }
    }

    private void UpdateAgentState(
      bool isWarmup,
      MPConditionalEffect.ConditionalEffectContainer container,
      Agent agent,
      bool state)
    {
      if (container.GetState(this, agent) == state)
        return;
      container.SetState(this, agent, state);
      foreach (MPPerkEffectBase effect in (List<MPPerkEffectBase>) this.Effects)
      {
        if (!isWarmup || !effect.IsDisabledInWarmup)
          effect.OnUpdate(agent, state);
      }
    }

    public class ConditionalEffectContainer : List<MPConditionalEffect>
    {
      private Dictionary<MPConditionalEffect, ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState>> _states;

      public ConditionalEffectContainer()
      {
      }

      public ConditionalEffectContainer(
        IEnumerable<MPConditionalEffect> conditionalEffects)
        : base(conditionalEffects)
      {
      }

      public bool GetState(MPConditionalEffect conditionalEffect, Agent agent)
      {
        ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState> conditionalWeakTable;
        MPConditionalEffect.ConditionalEffectContainer.ConditionState conditionState;
        return this._states != null && this._states.TryGetValue(conditionalEffect, out conditionalWeakTable) && conditionalWeakTable.TryGetValue(agent, out conditionState) && conditionState.IsSatisfied;
      }

      public void SetState(MPConditionalEffect conditionalEffect, Agent agent, bool state)
      {
        if (this._states == null)
        {
          this._states = new Dictionary<MPConditionalEffect, ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState>>();
          ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState> conditionalWeakTable = new ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState>();
          conditionalWeakTable.Add(agent, new MPConditionalEffect.ConditionalEffectContainer.ConditionState()
          {
            IsSatisfied = state
          });
          this._states.Add(conditionalEffect, conditionalWeakTable);
        }
        else
        {
          ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState> conditionalWeakTable1;
          if (!this._states.TryGetValue(conditionalEffect, out conditionalWeakTable1))
          {
            ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState> conditionalWeakTable2 = new ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState>();
            conditionalWeakTable2.Add(agent, new MPConditionalEffect.ConditionalEffectContainer.ConditionState()
            {
              IsSatisfied = state
            });
            this._states.Add(conditionalEffect, conditionalWeakTable2);
          }
          else
          {
            MPConditionalEffect.ConditionalEffectContainer.ConditionState conditionState;
            if (!conditionalWeakTable1.TryGetValue(agent, out conditionState))
              conditionalWeakTable1.Add(agent, new MPConditionalEffect.ConditionalEffectContainer.ConditionState()
              {
                IsSatisfied = state
              });
            else
              conditionState.IsSatisfied = state;
          }
        }
      }

      public void ResetStates()
      {
        this._states = (Dictionary<MPConditionalEffect, ConditionalWeakTable<Agent, MPConditionalEffect.ConditionalEffectContainer.ConditionState>>) null;
      }

      private class ConditionState
      {
        public bool IsSatisfied { get; set; }
      }
    }
  }
}
