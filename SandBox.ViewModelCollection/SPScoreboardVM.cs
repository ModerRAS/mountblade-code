// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.SPScoreboardVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;
using TaleWorlds.MountAndBlade.ViewModelCollection;
using TaleWorlds.MountAndBlade.ViewModelCollection.Scoreboard;

#nullable disable
namespace SandBox.ViewModelCollection
{
  public class SPScoreboardVM : ScoreboardBaseVM, IBattleObserver
  {
    private readonly BattleSimulation _battleSimulation;
    private static readonly TextObject _renownStr = new TextObject("{=eiWQoW9j}You gained {A0} renown.");
    private static readonly TextObject _influenceStr = new TextObject("{=5zeL8sa9}You gained {A0} influence.");
    private static readonly TextObject _moraleStr = new TextObject("{=WAKz9xX8}You gained {A0} morale.");
    private static readonly TextObject _lootStr = new TextObject("{=xu5NA6AW}You earned {A0}% of the loot.");
    private static readonly TextObject _deadLordStr = new TextObject("{=gDKhs4lD}{A0} has died on the battlefield.");
    private float _missionEndScoreboardDelayTimer;
    private MBBindingList<BattleResultVM> _battleResults;
    private string _simulationResult;

    private bool _isPlayerDefendingSiege
    {
      get
      {
        Mission current = Mission.Current;
        return (current != null ? (current.IsSiegeBattle ? 1 : 0) : 0) != 0 && Mission.Current.PlayerTeam.IsDefender;
      }
    }

    public SPScoreboardVM(BattleSimulation simulation)
    {
      this._battleSimulation = simulation;
      base.BattleResults = new MBBindingList<BattleResultVM>();
    }

    public virtual void RefreshValues()
    {
      base.RefreshValues();
      if (!this._isPlayerDefendingSiege)
        return;
      this.QuitText = GameTexts.FindText("str_surrender").ToString();
    }

    public virtual void Initialize(
      IMissionScreen missionScreen,
      Mission mission,
      Action releaseSimulationSources,
      Action<bool> onToggle)
    {
      base.Initialize(missionScreen, mission, releaseSimulationSources, onToggle);
      if (this._battleSimulation != null)
      {
        this._battleSimulation.BattleObserver = (IBattleObserver) this;
        this.PlayerSide = PlayerEncounter.PlayerIsAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
        this.Defenders = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "defender"), MobileParty.MainParty.MapEvent.DefenderSide.LeaderParty.Banner);
        this.Attackers = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "attacker"), MobileParty.MainParty.MapEvent.AttackerSide.LeaderParty.Banner);
        this.IsSimulation = true;
        this.IsMainCharacterDead = true;
        this.ShowScoreboard = true;
        this._battleSimulation.ResetSimulation();
        this.PowerComparer.Update((double) this.Defenders.CurrentPower, (double) this.Attackers.CurrentPower, (double) this.Defenders.CurrentPower, (double) this.Attackers.CurrentPower);
      }
      else
      {
        this.IsSimulation = false;
        BattleObserverMissionLogic missionBehavior = this._mission.GetMissionBehavior<BattleObserverMissionLogic>();
        if (missionBehavior != null)
          missionBehavior.SetObserver((IBattleObserver) this);
        else
          Debug.FailedAssert("SPScoreboard on CustomBattle", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\SPScoreboardVM.cs", nameof (Initialize), 79);
        if (Campaign.Current != null)
        {
          if (PlayerEncounter.Battle != null)
          {
            this.Defenders = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "defender"), MobileParty.MainParty.MapEvent.DefenderSide.LeaderParty.Banner);
            this.Attackers = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "attacker"), MobileParty.MainParty.MapEvent.AttackerSide.LeaderParty.Banner);
            this.PlayerSide = PlayerEncounter.PlayerIsAttacker ? BattleSideEnum.Attacker : BattleSideEnum.Defender;
          }
          else
          {
            this.Defenders = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "defender"), Mission.Current.Teams.Defender.Banner);
            this.Attackers = new SPScoreboardSideVM(GameTexts.FindText("str_battle_result_army", "attacker"), Mission.Current.Teams.Attacker.Banner);
            this.PlayerSide = BattleSideEnum.Defender;
          }
        }
        else
          Debug.FailedAssert("SPScoreboard on CustomBattle", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox.ViewModelCollection\\SPScoreboardVM.cs", nameof (Initialize), 105);
      }
      string str1;
      string str2;
      if (MobileParty.MainParty.MapEvent != null)
      {
        if (MobileParty.MainParty.MapEvent.DefenderSide.LeaderParty?.MapFaction is Kingdom)
        {
          str1 = Color.FromUint(((Kingdom) MobileParty.MainParty.MapEvent.DefenderSide.LeaderParty.MapFaction).PrimaryBannerColor).ToString();
        }
        else
        {
          IFaction mapFaction = MobileParty.MainParty.MapEvent.DefenderSide.LeaderParty.MapFaction;
          str1 = Color.FromUint(mapFaction != null ? mapFaction.Banner.GetPrimaryColor() : 0U).ToString();
        }
        if (MobileParty.MainParty.MapEvent.AttackerSide.LeaderParty?.MapFaction is Kingdom)
        {
          str2 = Color.FromUint(((Kingdom) MobileParty.MainParty.MapEvent.AttackerSide.LeaderParty.MapFaction).PrimaryBannerColor).ToString();
        }
        else
        {
          IFaction mapFaction = MobileParty.MainParty.MapEvent.AttackerSide.LeaderParty.MapFaction;
          str2 = Color.FromUint(mapFaction != null ? mapFaction.Banner.GetPrimaryColor() : 0U).ToString();
        }
      }
      else
      {
        str2 = Color.FromUint(Mission.Current.Teams.Attacker.Color).ToString();
        str1 = Color.FromUint(Mission.Current.Teams.Defender.Color).ToString();
      }
      this.PowerComparer.SetColors(str1, str2);
      this.MissionTimeInSeconds = -1;
    }

    public virtual void Tick(float dt)
    {
      SallyOutEndLogic missionBehavior = Mission.Current.GetMissionBehavior<SallyOutEndLogic>();
      if (!this.IsOver)
      {
        if (!this._mission.IsMissionEnding)
        {
          BattleEndLogic battleEndLogic = this._battleEndLogic;
          if ((battleEndLogic != null ? (battleEndLogic.IsEnemySideRetreating ? 1 : 0) : 0) == 0 && (missionBehavior == null || !missionBehavior.IsSallyOutOver))
            goto label_6;
        }
        if ((double) this._missionEndScoreboardDelayTimer < 1.5)
          this._missionEndScoreboardDelayTimer += dt;
        else
          this.OnBattleOver();
      }
label_6:
      this.PowerComparer.IsEnabled = Mission.Current != null && Mission.Current.Mode != MissionMode.Deployment;
      this.IsPowerComparerEnabled = this.PowerComparer.IsEnabled && !BannerlordConfig.HideBattleUI && !MBCommon.IsPaused;
      if (this.IsSimulation || this.IsOver)
        return;
      this.MissionTimeInSeconds = (int) Mission.Current.CurrentTime;
    }

    public virtual void ExecutePlayAction()
    {
      if (!this.IsSimulation)
        return;
      this._battleSimulation.Play();
    }

    public virtual void ExecuteFastForwardAction()
    {
      if (this.IsSimulation)
      {
        if (!this.IsFastForwarding)
          this._battleSimulation.Play();
        else
          this._battleSimulation.FastForward();
      }
      else
        Mission.Current.SetFastForwardingFromUI(this.IsFastForwarding);
    }

    public virtual void ExecuteEndSimulationAction()
    {
      if (!this.IsSimulation)
        return;
      this._battleSimulation.Skip();
    }

    public virtual void ExecuteQuitAction() => this.OnExitBattle();

    private void GetBattleRewards(bool playerVictory)
    {
      base.BattleResults.Clear();
      if (playerVictory)
      {
        ExplainedNumber renownExplained = new ExplainedNumber(includeDescriptions: true);
        ExplainedNumber influencExplained = new ExplainedNumber(includeDescriptions: true);
        ExplainedNumber moraleExplained = new ExplainedNumber(includeDescriptions: true);
        float renownChange;
        float influenceChange;
        float moraleChange;
        float playerEarnedLootPercentage;
        PlayerEncounter.GetBattleRewards(out renownChange, out influenceChange, out moraleChange, out float _, out playerEarnedLootPercentage, ref renownExplained, ref influencExplained, ref moraleExplained);
        if ((double) renownChange > 0.10000000149011612)
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._renownStr.Format(renownChange), (Func<List<TooltipProperty>>) (() => SandBoxUIHelper.GetExplainedNumberTooltip(ref renownExplained)), (CharacterCode) null));
        if ((double) influenceChange > 0.10000000149011612)
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._influenceStr.Format(influenceChange), (Func<List<TooltipProperty>>) (() => SandBoxUIHelper.GetExplainedNumberTooltip(ref influencExplained)), (CharacterCode) null));
        if ((double) moraleChange > 0.10000000149011612 || (double) moraleChange < -0.10000000149011612)
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._moraleStr.Format(moraleChange), (Func<List<TooltipProperty>>) (() => SandBoxUIHelper.GetExplainedNumberTooltip(ref moraleExplained)), (CharacterCode) null));
        int num = this.PlayerSide == BattleSideEnum.Attacker ? this.Attackers.Parties.Count : this.Defenders.Parties.Count;
        if ((double) playerEarnedLootPercentage > 0.10000000149011612 && num > 1)
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._lootStr.Format(playerEarnedLootPercentage), (Func<List<TooltipProperty>>) (() => SandBoxUIHelper.GetBattleLootAwardTooltip(playerEarnedLootPercentage)), (CharacterCode) null));
      }
      foreach (SPScoreboardPartyVM party in (Collection<SPScoreboardPartyVM>) this.Defenders.Parties)
      {
        foreach (SPScoreboardUnitVM scoreboardUnitVm in party.Members.Where<SPScoreboardUnitVM>((Func<SPScoreboardUnitVM, bool>) (member => member.IsHero && member.Score.Dead > 0)))
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._deadLordStr.SetTextVariable("A0", scoreboardUnitVm.Character.Name).ToString(), (Func<List<TooltipProperty>>) (() => new List<TooltipProperty>()), SandBoxUIHelper.GetCharacterCode(scoreboardUnitVm.Character as CharacterObject)));
      }
      foreach (SPScoreboardPartyVM party in (Collection<SPScoreboardPartyVM>) this.Attackers.Parties)
      {
        foreach (SPScoreboardUnitVM scoreboardUnitVm in party.Members.Where<SPScoreboardUnitVM>((Func<SPScoreboardUnitVM, bool>) (member => member.IsHero && member.Score.Dead > 0)))
          base.BattleResults.Add(new BattleResultVM(SPScoreboardVM._deadLordStr.SetTextVariable("A0", scoreboardUnitVm.Character.Name).ToString(), (Func<List<TooltipProperty>>) (() => new List<TooltipProperty>()), SandBoxUIHelper.GetCharacterCode(scoreboardUnitVm.Character as CharacterObject)));
      }
    }

    private void UpdateSimulationResult(bool playerVictory)
    {
      if (this.IsSimulation)
      {
        if (playerVictory)
        {
          if (PlayerEncounter.Battle.PartiesOnSide(this.PlayerSide).Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.Party.NumberOfHealthyMembers)) < 70)
            this.SimulationResult = "SimulationVictorySmall";
          else
            this.SimulationResult = "SimulationVictoryLarge";
        }
        else
          this.SimulationResult = "SimulationDefeat";
      }
      else
        this.SimulationResult = "NotSimulation";
    }

    public void OnBattleOver()
    {
      ScoreboardBaseVM.BattleResultType battleResultType = (ScoreboardBaseVM.BattleResultType) -1;
      if (PlayerEncounter.IsActive && PlayerEncounter.Battle != null)
      {
        this.IsOver = true;
        battleResultType = PlayerEncounter.WinningSide != this.PlayerSide ? (PlayerEncounter.CampaignBattleResult == null || !PlayerEncounter.CampaignBattleResult.EnemyPulledBack ? (ScoreboardBaseVM.BattleResultType) 0 : (ScoreboardBaseVM.BattleResultType) 2) : (ScoreboardBaseVM.BattleResultType) 1;
        bool playerVictory = PlayerEncounter.WinningSide == this.PlayerSide;
        this.GetBattleRewards(playerVictory);
        this.UpdateSimulationResult(playerVictory);
      }
      else
      {
        Mission current = Mission.Current;
        if ((current != null ? (current.MissionEnded ? 1 : 0) : 0) != 0)
        {
          this.IsOver = true;
          battleResultType = (!Mission.Current.HasMissionBehavior<SallyOutEndLogic>() ? 0 : (!Mission.Current.MissionResult.BattleResolved ? 1 : 0)) != 0 || Mission.Current.MissionResult.PlayerVictory ? (ScoreboardBaseVM.BattleResultType) 1 : (Mission.Current.MissionResult.BattleState != BattleState.DefenderPullBack ? (ScoreboardBaseVM.BattleResultType) 0 : (ScoreboardBaseVM.BattleResultType) 2);
        }
        else
        {
          BattleEndLogic battleEndLogic = this._battleEndLogic;
          if ((battleEndLogic != null ? (battleEndLogic.IsEnemySideRetreating ? 1 : 0) : 0) != 0)
            this.IsOver = true;
        }
      }
      switch (battleResultType - -1)
      {
        case 1:
          this.BattleResult = GameTexts.FindText("str_defeat").ToString();
          this.BattleResultIndex = (int) battleResultType;
          break;
        case 2:
          this.BattleResult = GameTexts.FindText("str_victory").ToString();
          this.BattleResultIndex = (int) battleResultType;
          break;
        case 3:
          this.BattleResult = GameTexts.FindText("str_battle_result_retreat").ToString();
          this.BattleResultIndex = (int) battleResultType;
          break;
      }
    }

    public void OnExitBattle()
    {
      if (this.IsSimulation)
      {
        if (this._battleSimulation.IsSimulationFinished)
        {
          this._releaseSimulationSources();
          this._battleSimulation.OnReturn();
        }
        else
        {
          Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
          InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_order_Retreat").ToString(), GameTexts.FindText("str_retreat_question").ToString(), true, true, GameTexts.FindText("str_ok").ToString(), GameTexts.FindText("str_cancel").ToString(), (Action) (() =>
          {
            Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
            this._releaseSimulationSources();
            this._battleSimulation.OnReturn();
          }), (Action) (() => Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this))));
        }
      }
      else
      {
        BattleEndLogic missionBehavior1 = this._mission.GetMissionBehavior<BattleEndLogic>();
        BasicMissionHandler missionBehavior2 = this._mission.GetMissionBehavior<BasicMissionHandler>();
        BattleEndLogic.ExitResult result = missionBehavior1 != null ? missionBehavior1.TryExit() : (this._mission.MissionEnded ? BattleEndLogic.ExitResult.True : BattleEndLogic.ExitResult.NeedsPlayerConfirmation);
        switch (result)
        {
          case BattleEndLogic.ExitResult.False:
            InformationManager.ShowInquiry(this._retreatInquiryData);
            break;
          case BattleEndLogic.ExitResult.NeedsPlayerConfirmation:
          case BattleEndLogic.ExitResult.SurrenderSiege:
            this.OnToggle(false);
            missionBehavior2.CreateWarningWidgetForResult(result);
            break;
          default:
            if (missionBehavior1 != null || result != BattleEndLogic.ExitResult.True)
              break;
            this._mission.EndMission();
            break;
        }
      }
    }

    public void TroopNumberChanged(
      BattleSideEnum side,
      IBattleCombatant battleCombatant,
      BasicCharacterObject character,
      int number = 0,
      int numberDead = 0,
      int numberWounded = 0,
      int numberRouted = 0,
      int numberKilled = 0,
      int numberReadyToUpgrade = 0)
    {
      bool flag = (battleCombatant is PartyBase partyBase ? partyBase.Owner : (Hero) null) == Hero.MainHero;
      this.GetSide(side).UpdateScores(battleCombatant, flag, character, number, numberDead, numberWounded, numberRouted, numberKilled, numberReadyToUpgrade);
      this.PowerComparer.Update((double) this.Defenders.CurrentPower, (double) this.Attackers.CurrentPower, (double) this.Defenders.InitialPower, (double) this.Attackers.InitialPower);
    }

    public void HeroSkillIncreased(
      BattleSideEnum side,
      IBattleCombatant battleCombatant,
      BasicCharacterObject heroCharacter,
      SkillObject upgradedSkill)
    {
      bool flag = (battleCombatant is PartyBase partyBase ? partyBase.Owner : (Hero) null) == Hero.MainHero;
      this.GetSide(side).UpdateHeroSkills(battleCombatant, flag, heroCharacter, upgradedSkill);
    }

    public void BattleResultsReady()
    {
      if (this.IsOver)
        return;
      this.OnBattleOver();
    }

    public void TroopSideChanged(
      BattleSideEnum prevSide,
      BattleSideEnum newSide,
      IBattleCombatant battleCombatant,
      BasicCharacterObject character)
    {
      SPScoreboardStatsVM scoreboardStatsVm = this.GetSide(prevSide).RemoveTroop(battleCombatant, character);
      this.GetSide(newSide).GetPartyAddIfNotExists(battleCombatant, (battleCombatant is PartyBase partyBase ? partyBase.Owner : (Hero) null) == Hero.MainHero);
      this.GetSide(newSide).AddTroop(battleCombatant, character, scoreboardStatsVm);
    }

    [DataSourceProperty]
    public virtual MBBindingList<BattleResultVM> BattleResults
    {
      get => this._battleResults;
      set
      {
        if (value == this._battleResults)
          return;
        this._battleResults = value;
        ((ViewModel) this).OnPropertyChangedWithValue<MBBindingList<BattleResultVM>>(value, nameof (BattleResults));
      }
    }

    [DataSourceProperty]
    public string SimulationResult
    {
      get => this._simulationResult;
      set
      {
        if (!(value != this._simulationResult))
          return;
        this._simulationResult = value;
        ((ViewModel) this).OnPropertyChangedWithValue<string>(value, nameof (SimulationResult));
      }
    }
  }
}
