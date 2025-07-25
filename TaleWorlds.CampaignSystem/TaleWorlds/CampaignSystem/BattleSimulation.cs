// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BattleSimulation
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class BattleSimulation : IBattleObserver
  {
    private readonly MapEvent _mapEvent;
    public List<TroopRoster> tempRosterRefs;
    private IBattleObserver _battleObserver;
    private Timer _timer;
    public readonly FlattenedTroopRoster[] SelectedTroops = new FlattenedTroopRoster[2];
    private BattleSimulation.SimulationState _simulationState;
    private float _numTicks;

    public bool IsSimulationPaused { get; private set; }

    public bool IsSimulationFinished { get; private set; }

    private bool IsPlayerJoinedBattle => PlayerEncounter.Current.IsJoinedBattle;

    public MapEvent MapEvent => this._mapEvent;

    public IBattleObserver BattleObserver
    {
      get => this._battleObserver;
      set => this._battleObserver = value;
    }

    public List<List<BattleResultPartyData>> Teams { get; private set; }

    public BattleSimulation(
      FlattenedTroopRoster selectedTroopsForPlayerSide,
      FlattenedTroopRoster selectedTroopsForOtherSide)
    {
      this.IsSimulationPaused = true;
      this._timer = new Timer(Game.Current.ApplicationTime, 1f);
      this._mapEvent = PlayerEncounter.Battle ?? PlayerEncounter.StartBattle();
      this._mapEvent.IsPlayerSimulation = true;
      this._mapEvent.BattleObserver = (IBattleObserver) this;
      this.SelectedTroops[(int) this._mapEvent.PlayerSide] = selectedTroopsForPlayerSide;
      this.SelectedTroops[(int) this._mapEvent.GetOtherSide(this._mapEvent.PlayerSide)] = selectedTroopsForOtherSide;
      this._mapEvent.GetNumberOfInvolvedMen();
      if (this._mapEvent.IsSiegeAssault)
        PlayerSiege.StartPlayerSiege(MobileParty.MainParty.Party.Side, true, this._mapEvent.MapEventSettlement);
      List<List<BattleResultPartyData>> battleResultPartyDataListList = new List<List<BattleResultPartyData>>()
      {
        new List<BattleResultPartyData>(),
        new List<BattleResultPartyData>()
      };
      foreach (PartyBase involvedParty in this._mapEvent.InvolvedParties)
      {
        BattleResultPartyData battleResultPartyData1 = new BattleResultPartyData();
        bool flag = false;
        foreach (BattleResultPartyData battleResultPartyData2 in battleResultPartyDataListList[(int) involvedParty.Side])
        {
          if (battleResultPartyData2.Party == involvedParty)
          {
            flag = true;
            battleResultPartyData1 = battleResultPartyData2;
            break;
          }
        }
        if (!flag)
        {
          battleResultPartyData1 = new BattleResultPartyData(involvedParty);
          battleResultPartyDataListList[(int) involvedParty.Side].Add(battleResultPartyData1);
        }
        for (int index = 0; index < involvedParty.MemberRoster.Count; ++index)
        {
          TroopRosterElement elementCopyAtIndex = involvedParty.MemberRoster.GetElementCopyAtIndex(index);
          if (!battleResultPartyData1.Characters.Contains(elementCopyAtIndex.Character))
            battleResultPartyData1.Characters.Add(elementCopyAtIndex.Character);
        }
      }
      this.Teams = battleResultPartyDataListList;
      this.tempRosterRefs = new List<TroopRoster>();
      foreach (PartyBase involvedParty in this._mapEvent.InvolvedParties)
        this.tempRosterRefs.Add(involvedParty.MemberRoster);
    }

    public void Play() => this._simulationState = BattleSimulation.SimulationState.Play;

    public void FastForward()
    {
      this._simulationState = BattleSimulation.SimulationState.FastForward;
    }

    public void Skip() => this._simulationState = BattleSimulation.SimulationState.Skip;

    public void OnReturn()
    {
      foreach (PartyBase involvedParty in this._mapEvent.InvolvedParties)
        involvedParty.MemberRoster.RemoveZeroCounts();
      GameMenu.ActivateGameMenu("encounter");
    }

    private void BattleEndLogic()
    {
      if (PlayerEncounter.Battle != null)
      {
        if (PlayerEncounter.Battle.GetMapEventSide(PartyBase.MainParty.Side).NumRemainingSimulationTroops > 0)
          GameMenu.SwitchToMenu("encounter");
        else
          PlayerEncounter.Finish();
      }
      else
        GameMenu.SwitchToMenu("encounter");
    }

    private void TickSimulateBattle() => BattleSimulation.SimulateBattleFromUi();

    public void Tick(float dt)
    {
      if (this.IsSimulationFinished)
        return;
      if (PlayerEncounter.Current == null)
      {
        Debug.FailedAssert("PlayerEncounter.Current == null", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\BattleSimulation.cs", nameof (Tick), 222);
        this.IsSimulationFinished = true;
      }
      else
      {
        int num1 = 0;
        if (PlayerEncounter.BattleState == BattleState.None)
        {
          foreach (PartyBase involvedParty in this.MapEvent.InvolvedParties)
          {
            if (involvedParty.Side == MobileParty.MainParty.Party.Side && involvedParty != MobileParty.MainParty.Party)
              num1 += involvedParty.NumberOfHealthyMembers;
          }
        }
        if (MobileParty.MainParty.MapEvent == this.MapEvent && MobileParty.MainParty.Party.NumberOfHealthyMembers == 1 && !Hero.MainHero.IsWounded && num1 == 0 || PlayerEncounter.BattleState == BattleState.AttackerVictory || PlayerEncounter.BattleState == BattleState.DefenderVictory)
          this.IsSimulationFinished = true;
        else if (this._simulationState == BattleSimulation.SimulationState.Skip)
        {
          while (PlayerEncounter.BattleState == BattleState.None || PlayerEncounter.BattleState == BattleState.DefenderPullBack)
          {
            this.TickSimulateBattle();
            int num2 = 0;
            if (PlayerEncounter.BattleState == BattleState.None || PlayerEncounter.BattleState == BattleState.DefenderPullBack)
            {
              foreach (PartyBase involvedParty in this.MapEvent.InvolvedParties)
              {
                if (involvedParty.Side == MobileParty.MainParty.Party.Side && involvedParty != MobileParty.MainParty.Party)
                  num2 += involvedParty.NumberOfHealthyMembers;
              }
            }
            if (MobileParty.MainParty.MapEvent == this.MapEvent && MobileParty.MainParty.Party.NumberOfHealthyMembers <= 1 && num2 == 0)
              break;
          }
        }
        else
        {
          this._numTicks += dt;
          if (this._simulationState == BattleSimulation.SimulationState.FastForward)
            this._numTicks *= 3f;
          for (; (double) this._numTicks >= 1.0; --this._numTicks)
            this.TickSimulateBattle();
        }
      }
    }

    public static void SimulateBattleFromUi() => PlayerEncounter.SimulateBattle();

    public void ResetSimulation()
    {
      this.MapEvent.SimulateBattleSetup(PlayerEncounter.CurrentBattleSimulation.SelectedTroops);
    }

    public void TroopNumberChanged(
      BattleSideEnum side,
      IBattleCombatant battleCombatant,
      BasicCharacterObject character,
      int number = 0,
      int numberKilled = 0,
      int numberWounded = 0,
      int numberRouted = 0,
      int killCount = 0,
      int numberReadyToUpgrade = 0)
    {
      this.BattleObserver?.TroopNumberChanged(side, battleCombatant, character, number, numberKilled, numberWounded, numberRouted, killCount, numberReadyToUpgrade);
    }

    public void HeroSkillIncreased(
      BattleSideEnum side,
      IBattleCombatant battleCombatant,
      BasicCharacterObject heroCharacter,
      SkillObject skill)
    {
      this.BattleObserver?.HeroSkillIncreased(side, battleCombatant, heroCharacter, skill);
    }

    public void BattleResultsReady() => this.BattleObserver?.BattleResultsReady();

    public void TroopSideChanged(
      BattleSideEnum prevSide,
      BattleSideEnum newSide,
      IBattleCombatant battleCombatant,
      BasicCharacterObject character)
    {
      this.BattleObserver?.TroopSideChanged(prevSide, newSide, battleCombatant, character);
    }

    private enum SimulationState
    {
      Play,
      FastForward,
      Skip,
    }
  }
}
