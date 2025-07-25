// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BattleEndLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.MountAndBlade.Missions.Handlers;
using TaleWorlds.MountAndBlade.Source.Missions;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BattleEndLogic : MissionLogic, IBattleEndLogic
  {
    private IMissionAgentSpawnLogic _missionAgentSpawnLogic;
    private MissionTime _enemySideNotYetRetreatingTime;
    private MissionTime _playerSideNotYetRetreatingTime;
    private BasicMissionTimer _checkRetreatingTimer;
    private bool _isEnemySideRetreating;
    private bool _isPlayerSideRetreating;
    private bool _isEnemySideDepleted;
    private bool _isPlayerSideDepleted;
    private bool _isEnemyDefenderPulledBack;
    private bool _canCheckForEndCondition = true;
    private bool _canCheckForEndConditionSiege;
    private bool _enemyDefenderPullbackEnabled;
    private int _troopNumberNeededForEnemyDefenderPullBack;
    private bool _missionEndedMessageShown;
    private bool _victoryReactionsActivated;
    private bool _victoryReactionsActivatedForRetreating;
    private bool _scoreBoardOpenedOnceOnMissionEnd;

    public bool PlayerVictory
    {
      get
      {
        return (this._isEnemySideRetreating || this._isEnemySideDepleted) && !this._isEnemyDefenderPulledBack;
      }
    }

    public bool EnemyVictory => this._isPlayerSideRetreating || this._isPlayerSideDepleted;

    private bool _notificationsDisabled { get; set; }

    public override bool MissionEnded(ref MissionResult missionResult)
    {
      bool flag = false;
      if (this._isEnemySideDepleted && this._isEnemyDefenderPulledBack)
      {
        missionResult = MissionResult.CreateDefenderPushedBack();
        flag = true;
      }
      else if (this._isEnemySideRetreating || this._isEnemySideDepleted)
      {
        missionResult = MissionResult.CreateSuccessful((IMission) this.Mission, this._isEnemySideRetreating);
        flag = true;
      }
      else if (this._isPlayerSideRetreating || this._isPlayerSideDepleted)
      {
        missionResult = MissionResult.CreateDefeated((IMission) this.Mission);
        flag = true;
      }
      if (flag)
      {
        this._missionAgentSpawnLogic.StopSpawner(BattleSideEnum.Attacker);
        this._missionAgentSpawnLogic.StopSpawner(BattleSideEnum.Defender);
      }
      return flag;
    }

    public override void OnMissionTick(float dt)
    {
      if (this.Mission.IsMissionEnding)
      {
        if (this._notificationsDisabled)
          this._scoreBoardOpenedOnceOnMissionEnd = true;
        if (this._missionEndedMessageShown && !this._scoreBoardOpenedOnceOnMissionEnd)
        {
          if ((double) this._checkRetreatingTimer.ElapsedTime > 7.0)
          {
            this.CheckIsEnemySideRetreatingOrOneSideDepleted();
            this._checkRetreatingTimer.Reset();
            if (this.Mission.MissionResult != null && this.Mission.MissionResult.PlayerDefeated)
            {
              GameTexts.SetVariable("leave_key", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4)));
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_lost_press_tab_to_view_results"));
            }
            else if (this.Mission.MissionResult != null && this.Mission.MissionResult.PlayerVictory)
            {
              if (this._isEnemySideDepleted)
              {
                GameTexts.SetVariable("leave_key", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4)));
                MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_won_press_tab_to_view_results"));
              }
            }
            else
            {
              GameTexts.SetVariable("leave_key", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4)));
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_finished_press_tab_to_view_results"));
            }
          }
        }
        else if ((double) this._checkRetreatingTimer.ElapsedTime > 3.0 && !this._scoreBoardOpenedOnceOnMissionEnd)
        {
          if (this.Mission.MissionResult != null && this.Mission.MissionResult.PlayerDefeated)
          {
            if (this._isPlayerSideDepleted)
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_lost"));
            else if (this._isPlayerSideRetreating)
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_friendlies_are_fleeing_you_lost"));
          }
          else if (this.Mission.MissionResult != null && this.Mission.MissionResult.PlayerVictory)
          {
            if (this._isEnemySideDepleted)
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_won"));
            else if (this._isEnemySideRetreating)
              MBInformationManager.AddQuickInformation(GameTexts.FindText("str_enemies_are_fleeing_you_won"));
          }
          else
            MBInformationManager.AddQuickInformation(GameTexts.FindText("str_battle_finished"));
          this._missionEndedMessageShown = true;
          this._checkRetreatingTimer.Reset();
        }
        if (this._victoryReactionsActivated)
          return;
        AgentVictoryLogic missionBehavior = this.Mission.GetMissionBehavior<AgentVictoryLogic>();
        if (missionBehavior == null)
          return;
        this.CheckIsEnemySideRetreatingOrOneSideDepleted();
        if (this._isEnemySideDepleted)
        {
          missionBehavior.SetTimersOfVictoryReactionsOnBattleEnd(this.Mission.PlayerTeam.Side);
          this._victoryReactionsActivated = true;
        }
        else if (this._isPlayerSideDepleted)
        {
          missionBehavior.SetTimersOfVictoryReactionsOnBattleEnd(this.Mission.PlayerEnemyTeam.Side);
          this._victoryReactionsActivated = true;
        }
        else if (this._isEnemySideRetreating && !this._victoryReactionsActivatedForRetreating)
        {
          missionBehavior.SetTimersOfVictoryReactionsOnRetreat(this.Mission.PlayerTeam.Side);
          this._victoryReactionsActivatedForRetreating = true;
        }
        else
        {
          if (!this._isPlayerSideRetreating || this._victoryReactionsActivatedForRetreating)
            return;
          missionBehavior.SetTimersOfVictoryReactionsOnRetreat(this.Mission.PlayerEnemyTeam.Side);
          this._victoryReactionsActivatedForRetreating = true;
        }
      }
      else
      {
        if ((double) this._checkRetreatingTimer.ElapsedTime <= 1.0)
          return;
        this.CheckIsEnemySideRetreatingOrOneSideDepleted();
        this._checkRetreatingTimer.Reset();
      }
    }

    public void ChangeCanCheckForEndCondition(bool canCheckForEndCondition)
    {
      this._canCheckForEndCondition = canCheckForEndCondition;
    }

    private void CheckIsEnemySideRetreatingOrOneSideDepleted()
    {
      if (!this._canCheckForEndConditionSiege)
      {
        this._canCheckForEndConditionSiege = this.Mission.GetMissionBehavior<BattleDeploymentHandler>() == null;
      }
      else
      {
        if (!this._canCheckForEndCondition)
          return;
        BattleSideEnum side = this.Mission.PlayerTeam.Side;
        BattleSideEnum oppositeSide = side.GetOppositeSide();
        this._isPlayerSideDepleted = this._missionAgentSpawnLogic.IsSideDepleted(side);
        this._isEnemySideDepleted = this._missionAgentSpawnLogic.IsSideDepleted(oppositeSide);
        if (this._isEnemySideDepleted || this._isPlayerSideDepleted || this.Mission.GetMissionBehavior<HideoutPhasedMissionController>() != null)
          return;
        float num1 = this._missionAgentSpawnLogic.GetReinforcementInterval() + 3f;
        if (this.Mission.MainAgent != null && this.Mission.MainAgent.IsPlayerControlled && this.Mission.MainAgent.IsActive())
        {
          this._playerSideNotYetRetreatingTime = MissionTime.Now;
        }
        else
        {
          bool flag = true;
          foreach (Team team in (List<Team>) this.Mission.Teams)
          {
            if (team.IsFriendOf(this.Mission.PlayerTeam))
            {
              foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
              {
                if (!activeAgent.IsRunningAway)
                {
                  flag = false;
                  break;
                }
              }
            }
          }
          if (!flag)
            this._playerSideNotYetRetreatingTime = MissionTime.Now;
        }
        if ((double) this._playerSideNotYetRetreatingTime.ElapsedSeconds > (double) num1)
          this._isPlayerSideRetreating = true;
        if (oppositeSide == BattleSideEnum.Defender && this._enemyDefenderPullbackEnabled)
          return;
        float num2 = this._missionAgentSpawnLogic.GetReinforcementInterval() + 3f;
        bool flag1 = true;
        foreach (Team team in (List<Team>) this.Mission.Teams)
        {
          if (team.IsEnemyOf(this.Mission.PlayerTeam))
          {
            foreach (Agent activeAgent in (List<Agent>) team.ActiveAgents)
            {
              if (!activeAgent.IsRunningAway)
              {
                flag1 = false;
                break;
              }
            }
          }
        }
        if (!flag1)
          this._enemySideNotYetRetreatingTime = MissionTime.Now;
        if ((double) this._enemySideNotYetRetreatingTime.ElapsedSeconds <= (double) num2)
          return;
        this._isEnemySideRetreating = true;
      }
    }

    public BattleEndLogic.ExitResult TryExit()
    {
      if (GameNetwork.IsClientOrReplay)
        return BattleEndLogic.ExitResult.False;
      Agent mainAgent = this.Mission.MainAgent;
      if ((mainAgent != null ? (mainAgent.IsActive() ? 1 : 0) : 0) != 0 && this.Mission.IsPlayerCloseToAnEnemy() || !this.Mission.MissionEnded && (this.PlayerVictory || this.EnemyVictory))
        return BattleEndLogic.ExitResult.False;
      if (!this.Mission.MissionEnded && !this._isEnemySideRetreating)
        return Mission.Current.IsSiegeBattle && this.Mission.PlayerTeam.IsDefender ? BattleEndLogic.ExitResult.SurrenderSiege : BattleEndLogic.ExitResult.NeedsPlayerConfirmation;
      this.Mission.EndMission();
      return BattleEndLogic.ExitResult.True;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._checkRetreatingTimer = new BasicMissionTimer();
      this._missionAgentSpawnLogic = this.Mission.GetMissionBehavior<IMissionAgentSpawnLogic>();
    }

    protected override void OnEndMission()
    {
      if (!this._isEnemySideRetreating)
        return;
      foreach (Agent activeAgent in (List<Agent>) this.Mission.PlayerEnemyTeam.ActiveAgents)
        activeAgent.Origin?.SetRouted();
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (!this._enemyDefenderPullbackEnabled || this._troopNumberNeededForEnemyDefenderPullBack <= 0 || !affectedAgent.IsHuman || agentState != AgentState.Routed || affectedAgent.Team == null || affectedAgent.Team.Side != BattleSideEnum.Defender || affectedAgent.Team.Side == this.Mission.PlayerTeam.Side)
        return;
      --this._troopNumberNeededForEnemyDefenderPullBack;
      this._isEnemyDefenderPulledBack = this._troopNumberNeededForEnemyDefenderPullBack <= 0;
    }

    public void EnableEnemyDefenderPullBack(int neededTroopNumber)
    {
      this._enemyDefenderPullbackEnabled = true;
      this._troopNumberNeededForEnemyDefenderPullBack = neededTroopNumber;
    }

    public bool IsEnemySideRetreating => this._isEnemySideRetreating;

    public void SetNotificationDisabled(bool value) => this._notificationsDisabled = value;

    public enum ExitResult
    {
      False,
      NeedsPlayerConfirmation,
      SurrenderSiege,
      True,
    }
  }
}
