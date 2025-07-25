// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Usables.SmithingMachine
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using SandBox.Objects.AnimationPoints;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Usables
{
  public class SmithingMachine : UsableMachine
  {
    private const string MachineIdleAnimationName = "anim_merchant_smithing_machine_idle";
    private const string MachineIdleWithBlendInAnimationName = "anim_merchant_smithing_machine_idle_with_blend_in";
    private const string MachineUseAnimationName = "anim_merchant_smithing_machine_loop";
    private readonly ActionIndexCache CharacterReadyActionIndex = ActionIndexCache.Create("act_use_smithing_machine_ready");
    private readonly ActionIndexCache CharacterUseActionIndex = ActionIndexCache.Create("act_use_smithing_machine_loop");
    private AnimationPoint _anvilUsePoint;
    private AnimationPoint _machineUsePoint;
    private SmithingMachine.State _state;
    private Timer _disableTimer;
    private float _remainingTimeToReset;
    private List<ActionIndexCache> _actionsWithoutLeftHandItem;
    private bool _leftItemIsVisible;

    protected override void OnInit()
    {
      base.OnInit();
      this._machineUsePoint = (AnimationPoint) this.PilotStandingPoint;
      if (this._machineUsePoint == null)
      {
        string str = "Entity(" + this.GameEntity.Name + ") with script(SmithingMachine) does not have a valid 'PilotStandingPoint'.";
      }
      this._machineUsePoint.IsDeactivated = false;
      this._machineUsePoint.IsDisabledForPlayers = true;
      this._machineUsePoint.KeepOldVisibility = true;
      this._anvilUsePoint = (AnimationPoint) this.StandingPoints.First<StandingPoint>((Func<StandingPoint, bool>) (x => x != this._machineUsePoint));
      this._anvilUsePoint.IsDeactivated = true;
      this._anvilUsePoint.KeepOldVisibility = true;
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDisabledForPlayers = true;
      this._actionsWithoutLeftHandItem = new List<ActionIndexCache>(4)
      {
        ActionIndexCache.Create("act_smithing_machine_anvil_start"),
        ActionIndexCache.Create("act_smithing_machine_anvil_part_2"),
        ActionIndexCache.Create("act_smithing_machine_anvil_part_4"),
        ActionIndexCache.Create("act_smithing_machine_anvil_part_5")
      };
      this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_idle", 0);
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return new TextObject("{=OCRafO5h}Bellows").ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = new TextObject("{=fEQAPJ2e}{KEY} Use");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      switch (this._state)
      {
        case SmithingMachine.State.Stable:
          if (this._machineUsePoint.HasUser && (double) this._machineUsePoint.UserAgent.GetCurrentVelocity().LengthSquared < 9.9999997473787516E-05)
          {
            this._machineUsePoint.UserAgent.SetActionChannel(0, this.CharacterReadyActionIndex);
            this._state = SmithingMachine.State.Preparation;
          }
          if (!this._anvilUsePoint.HasUser)
            break;
          this._state = SmithingMachine.State.UseAnvilPoint;
          break;
        case SmithingMachine.State.Preparation:
          if (!this._machineUsePoint.HasUser)
          {
            this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_idle_with_blend_in", 0);
            this._state = SmithingMachine.State.Stable;
            break;
          }
          if (!(this._machineUsePoint.UserAgent.GetCurrentActionValue(0) == this.CharacterReadyActionIndex) || (double) this._machineUsePoint.UserAgent.GetCurrentActionProgress(0) <= 0.99000000953674316)
            break;
          this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_loop", 0);
          this._machineUsePoint.UserAgent.SetActionChannel(0, this.CharacterUseActionIndex);
          this._state = SmithingMachine.State.Working;
          break;
        case SmithingMachine.State.Working:
          if (!this._machineUsePoint.HasUser)
          {
            this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_idle_with_blend_in", 0);
            this._state = SmithingMachine.State.Stable;
            this._disableTimer = (Timer) null;
            this._anvilUsePoint.IsDeactivated = false;
            break;
          }
          if (this._machineUsePoint.UserAgent.GetCurrentActionValue(0) != this.CharacterUseActionIndex)
          {
            this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_idle_with_blend_in", 0);
            this._state = SmithingMachine.State.Paused;
            this._remainingTimeToReset = this._disableTimer.Duration - this._disableTimer.ElapsedTime();
            break;
          }
          if (this._disableTimer == null)
          {
            this._disableTimer = new Timer(Mission.Current.CurrentTime, 9.8f);
            break;
          }
          if (!this._disableTimer.Check(Mission.Current.CurrentTime))
            break;
          this.SetAnimationAtChannelSynched("anim_merchant_smithing_machine_idle_with_blend_in", 0);
          this._disableTimer = (Timer) null;
          this._machineUsePoint.IsDeactivated = true;
          this._anvilUsePoint.IsDeactivated = false;
          this._state = SmithingMachine.State.Stable;
          break;
        case SmithingMachine.State.Paused:
          if (this._machineUsePoint.IsRotationCorrectDuringUsage())
            this._machineUsePoint.UserAgent.SetActionChannel(0, this.CharacterReadyActionIndex);
          if (!(this._machineUsePoint.UserAgent.GetCurrentActionValue(0) == this.CharacterReadyActionIndex))
            break;
          this._state = SmithingMachine.State.Preparation;
          this._disableTimer.Reset(Mission.Current.CurrentTime, this._remainingTimeToReset);
          this._remainingTimeToReset = 0.0f;
          break;
        case SmithingMachine.State.UseAnvilPoint:
          if (!this._anvilUsePoint.HasUser)
          {
            this._state = SmithingMachine.State.Stable;
            this._disableTimer = (Timer) null;
            this._machineUsePoint.IsDeactivated = false;
            break;
          }
          if (this._disableTimer == null)
          {
            this._disableTimer = new Timer(Mission.Current.CurrentTime, 96f);
            this._leftItemIsVisible = true;
            break;
          }
          if (this._disableTimer.Check(Mission.Current.CurrentTime))
          {
            this._disableTimer = (Timer) null;
            this._anvilUsePoint.IsDeactivated = true;
            this._machineUsePoint.IsDeactivated = false;
            this._state = SmithingMachine.State.Stable;
            break;
          }
          ActionIndexCache currentAction = this._anvilUsePoint.UserAgent.GetCurrentAction(0);
          if (this._leftItemIsVisible && this._actionsWithoutLeftHandItem.Contains(currentAction))
          {
            this._anvilUsePoint.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetPrefabVisibility(this._anvilUsePoint.UserAgent.Monster.OffHandItemBoneIndex, this._anvilUsePoint.LeftHandItem, false);
            this._leftItemIsVisible = false;
            break;
          }
          if (this._leftItemIsVisible || this._actionsWithoutLeftHandItem.Contains(currentAction))
            break;
          this._anvilUsePoint.UserAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SetPrefabVisibility(this._anvilUsePoint.UserAgent.Monster.OffHandItemBoneIndex, this._anvilUsePoint.LeftHandItem, true);
          this._leftItemIsVisible = true;
          break;
      }
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new UsablePlaceAI((UsableMachine) this);
    }

    private enum State
    {
      Stable,
      Preparation,
      Working,
      Paused,
      UseAnvilPoint,
    }
  }
}
