// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentVictoryLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class AgentVictoryLogic : MissionLogic
  {
    private const float HighCheerThreshold = 0.25f;
    private const float MidCheerThreshold = 0.75f;
    private const float YellOnCheerCancelProbability = 0.25f;
    private AgentVictoryLogic.CheerActionGroupEnum _cheerActionGroup;
    private AgentVictoryLogic.CheerReactionTimeSettings _cheerReactionTimerData;
    private readonly ActionIndexCache[] _lowCheerActions = new ActionIndexCache[10]
    {
      ActionIndexCache.Create("act_cheering_low_01"),
      ActionIndexCache.Create("act_cheering_low_02"),
      ActionIndexCache.Create("act_cheering_low_03"),
      ActionIndexCache.Create("act_cheering_low_04"),
      ActionIndexCache.Create("act_cheering_low_05"),
      ActionIndexCache.Create("act_cheering_low_06"),
      ActionIndexCache.Create("act_cheering_low_07"),
      ActionIndexCache.Create("act_cheering_low_08"),
      ActionIndexCache.Create("act_cheering_low_09"),
      ActionIndexCache.Create("act_cheering_low_10")
    };
    private readonly ActionIndexCache[] _midCheerActions = new ActionIndexCache[4]
    {
      ActionIndexCache.Create("act_cheer_1"),
      ActionIndexCache.Create("act_cheer_2"),
      ActionIndexCache.Create("act_cheer_3"),
      ActionIndexCache.Create("act_cheer_4")
    };
    private readonly ActionIndexCache[] _highCheerActions = new ActionIndexCache[8]
    {
      ActionIndexCache.Create("act_cheering_high_01"),
      ActionIndexCache.Create("act_cheering_high_02"),
      ActionIndexCache.Create("act_cheering_high_03"),
      ActionIndexCache.Create("act_cheering_high_04"),
      ActionIndexCache.Create("act_cheering_high_05"),
      ActionIndexCache.Create("act_cheering_high_06"),
      ActionIndexCache.Create("act_cheering_high_07"),
      ActionIndexCache.Create("act_cheering_high_08")
    };
    private ActionIndexCache[] _selectedCheerActions;
    private List<AgentVictoryLogic.CheeringAgent> _cheeringAgents;
    private bool _isInRetreat;

    public AgentVictoryLogic.CheerActionGroupEnum CheerActionGroup => this._cheerActionGroup;

    public AgentVictoryLogic.CheerReactionTimeSettings CheerReactionTimerData
    {
      get => this._cheerReactionTimerData;
    }

    public override void AfterStart()
    {
      this.Mission.MissionCloseTimeAfterFinish = 60f;
      this._cheeringAgents = new List<AgentVictoryLogic.CheeringAgent>();
      this.SetCheerReactionTimerSettings();
      if (this.Mission.PlayerTeam != null)
        this.Mission.PlayerTeam.PlayerOrderController.OnOrderIssued += new OnOrderIssuedDelegate(this.MasterOrderControllerOnOrderIssued);
      Mission.Current.IsBattleInRetreatEvent += new Func<bool>(this.CheckIfIsInRetreat);
    }

    private void MasterOrderControllerOnOrderIssued(
      OrderType orderType,
      IEnumerable<Formation> appliedFormations,
      OrderController orderController,
      object[] delegateparams)
    {
      MBList<Formation> mbList = appliedFormations.ToMBList<Formation>();
      for (int index = this._cheeringAgents.Count - 1; index >= 0; --index)
      {
        Agent agent = this._cheeringAgents[index].Agent;
        if (mbList.Contains(agent.Formation))
          this._cheeringAgents[index].OrderReceived();
      }
    }

    public void SetCheerActionGroup(
      AgentVictoryLogic.CheerActionGroupEnum cheerActionGroup = AgentVictoryLogic.CheerActionGroupEnum.None)
    {
      this._cheerActionGroup = cheerActionGroup;
      switch (this._cheerActionGroup)
      {
        case AgentVictoryLogic.CheerActionGroupEnum.LowCheerActions:
          this._selectedCheerActions = this._lowCheerActions;
          break;
        case AgentVictoryLogic.CheerActionGroupEnum.MidCheerActions:
          this._selectedCheerActions = this._midCheerActions;
          break;
        case AgentVictoryLogic.CheerActionGroupEnum.HighCheerActions:
          this._selectedCheerActions = this._highCheerActions;
          break;
        default:
          this._selectedCheerActions = (ActionIndexCache[]) null;
          break;
      }
    }

    public void SetCheerReactionTimerSettings(float minDuration = 1f, float maxDuration = 8f)
    {
      this._cheerReactionTimerData = new AgentVictoryLogic.CheerReactionTimeSettings(minDuration, maxDuration);
    }

    public override void OnClearScene() => this._cheeringAgents.Clear();

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      VictoryComponent component = affectedAgent.GetComponent<VictoryComponent>();
      if (component != null)
        affectedAgent.RemoveComponent((AgentComponent) component);
      for (int index = 0; index < this._cheeringAgents.Count; ++index)
      {
        if (this._cheeringAgents[index].Agent == affectedAgent)
        {
          this._cheeringAgents.RemoveAt(index);
          break;
        }
      }
    }

    protected override void OnEndMission()
    {
      Mission.Current.IsBattleInRetreatEvent -= new Func<bool>(this.CheckIfIsInRetreat);
    }

    public override void OnMissionTick(float dt)
    {
      if (this._cheeringAgents.Count <= 0)
        return;
      this.CheckAnimationAndVoice();
    }

    private void CheckAnimationAndVoice()
    {
      for (int index = this._cheeringAgents.Count - 1; index >= 0; --index)
      {
        Agent agent = this._cheeringAgents[index].Agent;
        bool gotOrderRecently = this._cheeringAgents[index].GotOrderRecently;
        bool cheeringOnRetreat = this._cheeringAgents[index].IsCheeringOnRetreat;
        VictoryComponent component = agent.GetComponent<VictoryComponent>();
        if (component != null)
        {
          bool flag1 = agent.GetComponent<HumanAIComponent>()?.GetCurrentlyMovingGameObject() != null;
          bool flag2 = agent.GetCurrentAnimationFlag(0).HasAnyFlag<AnimFlags>(AnimFlags.anf_synch_with_ladder_movement) || agent.GetCurrentAnimationFlag(1).HasAnyFlag<AnimFlags>(AnimFlags.anf_synch_with_ladder_movement);
          if (this.CheckIfIsInRetreat() & gotOrderRecently && !flag1 && !flag2)
          {
            agent.RemoveComponent((AgentComponent) component);
            agent.SetActionChannel(1, ActionIndexCache.act_none, additionalFlags: (ulong) (uint) agent.GetCurrentActionPriority(1));
            if ((double) MBRandom.RandomFloat > 0.25)
              agent.MakeVoice(SkinVoiceManager.VoiceType.Yell, SkinVoiceManager.CombatVoiceNetworkPredictionType.NoPrediction);
            if (cheeringOnRetreat)
              agent.ClearTargetFrame();
            this._cheeringAgents.RemoveAt(index);
          }
          else if (component.CheckTimer())
          {
            if (!agent.IsActive())
            {
              Debug.FailedAssert("Agent trying to cheer without being active", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\AgentVictoryLogic.cs", nameof (CheckAnimationAndVoice), 234);
              Debug.Print("Agent trying to cheer without being active");
            }
            bool resetTimer;
            this.ChooseWeaponToCheerWithCheerAndUpdateTimer(agent, out resetTimer);
            if (resetTimer)
              component.ChangeTimerDuration(6f, 12f);
          }
        }
      }
    }

    private void SelectVictoryCondition(BattleSideEnum side)
    {
      if (this._cheerActionGroup != AgentVictoryLogic.CheerActionGroupEnum.None)
        return;
      BattleObserverMissionLogic missionBehavior = Mission.Current.GetMissionBehavior<BattleObserverMissionLogic>();
      if (missionBehavior != null)
      {
        float agentRatioForSide = missionBehavior.GetDeathToBuiltAgentRatioForSide(side);
        if ((double) agentRatioForSide < 0.25)
          this.SetCheerActionGroup(AgentVictoryLogic.CheerActionGroupEnum.HighCheerActions);
        else if ((double) agentRatioForSide < 0.75)
          this.SetCheerActionGroup(AgentVictoryLogic.CheerActionGroupEnum.MidCheerActions);
        else
          this.SetCheerActionGroup(AgentVictoryLogic.CheerActionGroupEnum.LowCheerActions);
      }
      else
        this.SetCheerActionGroup(AgentVictoryLogic.CheerActionGroupEnum.MidCheerActions);
    }

    public void SetTimersOfVictoryReactionsOnBattleEnd(BattleSideEnum side)
    {
      this._isInRetreat = false;
      this.SelectVictoryCondition(side);
      foreach (Team team in (List<Team>) this.Mission.Teams)
      {
        if (team.Side == side)
        {
          foreach (Formation formation in (List<Formation>) team.FormationsIncludingSpecialAndEmpty)
          {
            if (formation.CountOfUnits > 0)
              formation.SetMovementOrder(MovementOrder.MovementOrderStop);
          }
        }
      }
      foreach (Agent agent1 in (List<Agent>) this.Mission.Agents)
      {
        Agent agent = agent1;
        if (agent.IsHuman && agent.IsAIControlled && agent.Team != null && side == agent.Team.Side && agent.CurrentWatchState == Agent.WatchState.Alarmed && agent.GetComponent<VictoryComponent>() == null)
        {
          if (this._cheeringAgents.AnyQ<AgentVictoryLogic.CheeringAgent>((Func<AgentVictoryLogic.CheeringAgent, bool>) (a => a.Agent == agent)))
          {
            Debug.FailedAssert("Adding a duplicate agent in _cheeringAgents", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\AgentVictoryLogic.cs", nameof (SetTimersOfVictoryReactionsOnBattleEnd), 308);
            Debug.Print("Adding a duplicate agent in _cheeringAgents");
          }
          agent.AddComponent((AgentComponent) new VictoryComponent(agent, new RandomTimer(this.Mission.CurrentTime, this._cheerReactionTimerData.MinDuration, this._cheerReactionTimerData.MaxDuration)));
          this._cheeringAgents.Add(new AgentVictoryLogic.CheeringAgent(agent, false));
        }
      }
    }

    public void SetTimersOfVictoryReactionsOnRetreat(BattleSideEnum side)
    {
      this._isInRetreat = true;
      this.SelectVictoryCondition(side);
      List<Agent> list = this.Mission.Agents.Where<Agent>((Func<Agent, bool>) (agent => agent.IsHuman && agent.IsAIControlled && agent.Team.Side == side)).ToList<Agent>();
      int num1 = (int) ((double) list.Count * 0.5);
      List<Agent> agentList = new List<Agent>();
      for (int index = 0; index < list.Count && agentList.Count != num1; ++index)
      {
        Agent agent = list[index];
        EquipmentIndex wieldedItemIndex1 = agent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
        int num2 = wieldedItemIndex1 == EquipmentIndex.None ? 0 : (agent.Equipment[wieldedItemIndex1].Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.DropOnAnyAction) ? 1 : 0);
        EquipmentIndex wieldedItemIndex2 = agent.GetWieldedItemIndex(Agent.HandIndex.OffHand);
        bool flag1 = wieldedItemIndex2 != EquipmentIndex.None && agent.Equipment[wieldedItemIndex2].Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.DropOnAnyAction);
        bool flag2 = agent.GetComponent<HumanAIComponent>()?.GetCurrentlyMovingGameObject() != null;
        bool flag3 = agent.GetCurrentAnimationFlag(0).HasAnyFlag<AnimFlags>(AnimFlags.anf_synch_with_ladder_movement) || agent.GetCurrentAnimationFlag(1).HasAnyFlag<AnimFlags>(AnimFlags.anf_synch_with_ladder_movement);
        if (num2 == 0 && !flag1 && !agent.IsUsingGameObject && !flag2 && !flag3)
        {
          int num3 = list.Count - index - (num1 - agentList.Count);
          float num4 = MBMath.ClampFloat((float) (num1 - num3) / (float) num1, 0.0f, 1f);
          float maximumForwardUnlimitedSpeed;
          Vec3 position;
          if ((double) num4 < 1.0 && agent.TryGetImmediateEnemyAgentMovementData(out maximumForwardUnlimitedSpeed, out position))
          {
            float forwardUnlimitedSpeed = agent.MaximumForwardUnlimitedSpeed;
            float num5 = maximumForwardUnlimitedSpeed;
            if ((double) forwardUnlimitedSpeed > (double) num5)
            {
              float num6 = (agent.Position - position).LengthSquared / (forwardUnlimitedSpeed - num5);
              if ((double) num6 < 900.0)
                num4 = (float) ((double) (num4 - -1f) * (double) (num6 / 900f) - 1.0);
            }
          }
          if ((double) MBRandom.RandomFloat <= 0.5 + 0.5 * (double) num4)
            agentList.Add(agent);
        }
      }
      foreach (Agent agent in agentList)
      {
        MatrixFrame frame = agent.Frame;
        Vec2 asVec2 = frame.origin.AsVec2;
        Vec3 f = frame.rotation.f;
        agent.SetTargetPositionAndDirectionSynched(ref asVec2, ref f);
        this.SetTimersOfVictoryReactionsForSingleAgent(agent, this._cheerReactionTimerData.MinDuration, this._cheerReactionTimerData.MaxDuration, true);
      }
    }

    public void SetTimersOfVictoryReactionsOnTournamentVictoryForAgent(
      Agent agent,
      float minStartTime,
      float maxStartTime)
    {
      this._selectedCheerActions = this._midCheerActions;
      this.SetTimersOfVictoryReactionsForSingleAgent(agent, minStartTime, maxStartTime, false);
    }

    private void SetTimersOfVictoryReactionsForSingleAgent(
      Agent agent,
      float minStartTime,
      float maxStartTime,
      bool isCheeringOnRetreat)
    {
      if (!agent.IsActive() || !agent.IsHuman || !agent.IsAIControlled)
        return;
      if (this._cheeringAgents.AnyQ<AgentVictoryLogic.CheeringAgent>((Func<AgentVictoryLogic.CheeringAgent, bool>) (a => a.Agent == agent)))
      {
        Debug.FailedAssert("Adding a duplicate agent in _cheeringAgents", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Missions\\MissionLogics\\AgentVictoryLogic.cs", nameof (SetTimersOfVictoryReactionsForSingleAgent), 412);
        Debug.Print("Adding a duplicate agent in _cheeringAgents");
      }
      agent.AddComponent((AgentComponent) new VictoryComponent(agent, new RandomTimer(this.Mission.CurrentTime, minStartTime, maxStartTime)));
      this._cheeringAgents.Add(new AgentVictoryLogic.CheeringAgent(agent, isCheeringOnRetreat));
    }

    private void ChooseWeaponToCheerWithCheerAndUpdateTimer(Agent cheerAgent, out bool resetTimer)
    {
      resetTimer = false;
      if (cheerAgent.GetCurrentActionType(1) == Agent.ActionCodeType.EquipUnequip)
        return;
      EquipmentIndex wieldedItemIndex = cheerAgent.GetWieldedItemIndex(Agent.HandIndex.MainHand);
      bool flag = wieldedItemIndex != EquipmentIndex.None && !cheerAgent.Equipment[wieldedItemIndex].Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.DropOnAnyAction);
      if (!flag)
      {
        EquipmentIndex slotIndex = EquipmentIndex.None;
        for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.ExtraWeaponSlot; ++index)
        {
          if ((cheerAgent.Equipment[index].IsEmpty ? 0 : (!cheerAgent.Equipment[index].Item.ItemFlags.HasAnyFlag<ItemFlags>(ItemFlags.DropOnAnyAction) ? 1 : 0)) != 0)
          {
            slotIndex = index;
            break;
          }
        }
        if (slotIndex == EquipmentIndex.None)
        {
          if (wieldedItemIndex != EquipmentIndex.None)
            cheerAgent.TryToSheathWeaponInHand(Agent.HandIndex.MainHand, Agent.WeaponWieldActionType.WithAnimation);
          else
            flag = true;
        }
        else
          cheerAgent.TryToWieldWeaponInSlot(slotIndex, Agent.WeaponWieldActionType.WithAnimation, false);
      }
      if (!flag)
        return;
      ActionIndexCache[] actionIndexCacheArray = this._selectedCheerActions;
      if (cheerAgent.HasMount)
        actionIndexCacheArray = this._midCheerActions;
      cheerAgent.SetActionChannel(1, actionIndexCacheArray[MBRandom.RandomInt(actionIndexCacheArray.Length)]);
      cheerAgent.MakeVoice(SkinVoiceManager.VoiceType.Victory, SkinVoiceManager.CombatVoiceNetworkPredictionType.NoPrediction);
      resetTimer = true;
    }

    private bool CheckIfIsInRetreat() => this._isInRetreat;

    public enum CheerActionGroupEnum
    {
      None,
      LowCheerActions,
      MidCheerActions,
      HighCheerActions,
    }

    public struct CheerReactionTimeSettings
    {
      public readonly float MinDuration;
      public readonly float MaxDuration;

      public CheerReactionTimeSettings(float minDuration, float maxDuration)
      {
        this.MinDuration = minDuration;
        this.MaxDuration = maxDuration;
      }
    }

    private class CheeringAgent
    {
      public readonly Agent Agent;
      public readonly bool IsCheeringOnRetreat;

      public bool GotOrderRecently { get; private set; }

      public CheeringAgent(Agent agent, bool isCheeringOnRetreat)
      {
        this.Agent = agent;
        this.IsCheeringOnRetreat = isCheeringOnRetreat;
      }

      public void OrderReceived() => this.GotOrderRecently = true;
    }
  }
}
