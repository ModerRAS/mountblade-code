// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.StatisticsCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class StatisticsCampaignBehavior : 
    CampaignBehaviorBase,
    IStatisticsCampaignBehavior,
    ICampaignBehavior
  {
    private int _highestTournamentRank;
    private int _numberOfTournamentWins;
    private int _numberOfChildrenBorn;
    private int _numberOfPrisonersRecruited;
    private int _numberOfTroopsRecruited;
    private int _numberOfClansDefected;
    private int _numberOfIssuesSolved;
    private int _totalInfluenceEarned;
    private int _totalCrimeRatingGained;
    private ulong _totalTimePlayedInSeconds;
    private int _numberOfbattlesWon;
    private int _numberOfbattlesLost;
    private int _largestBattleWonAsLeader;
    private int _largestArmyFormedByPlayer;
    private int _numberOfEnemyClansDestroyed;
    private int _numberOfHeroesKilledInBattle;
    private int _numberOfTroopsKnockedOrKilledAsParty;
    private int _numberOfTroopsKnockedOrKilledByPlayer;
    private int _numberOfHeroPrisonersTaken;
    private int _numberOfTroopPrisonersTaken;
    private int _numberOfTownsCaptured;
    private int _numberOfHideoutsCleared;
    private int _numberOfCastlesCaptured;
    private int _numberOfVillagesRaided;
    private CampaignTime _timeSpentAsPrisoner = CampaignTime.Zero;
    private ulong _totalDenarsEarned;
    private ulong _denarsEarnedFromCaravans;
    private ulong _denarsEarnedFromWorkshops;
    private ulong _denarsEarnedFromRansoms;
    private ulong _denarsEarnedFromTaxes;
    private ulong _denarsEarnedFromTributes;
    private ulong _denarsPaidAsTributes;
    private int _numberOfCraftingPartsUnlocked;
    private int _numberOfWeaponsCrafted;
    private int _numberOfCraftingOrdersCompleted;
    private (string, int) _mostExpensiveItemCrafted = ((string) null, 0);
    private int _numberOfCompanionsHired;
    private Dictionary<Hero, (int, int)> _companionData = new Dictionary<Hero, (int, int)>();
    private int _lastPlayerBattleSize;
    private DateTime _lastGameplayTimeCheck;

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<int>("_highestTournamentRank", ref this._highestTournamentRank);
      dataStore.SyncData<int>("_numberOfTournamentWins", ref this._numberOfTournamentWins);
      dataStore.SyncData<int>("_numberOfChildrenBorn", ref this._numberOfChildrenBorn);
      dataStore.SyncData<int>("_numberOfPrisonersRecruited", ref this._numberOfPrisonersRecruited);
      dataStore.SyncData<int>("_numberOfTroopsRecruited", ref this._numberOfTroopsRecruited);
      dataStore.SyncData<int>("_numberOfClansDefected", ref this._numberOfClansDefected);
      dataStore.SyncData<int>("_numberOfIssuesSolved", ref this._numberOfIssuesSolved);
      dataStore.SyncData<int>("_totalInfluenceEarned", ref this._totalInfluenceEarned);
      dataStore.SyncData<int>("_totalCrimeRatingGained", ref this._totalCrimeRatingGained);
      dataStore.SyncData<ulong>("_totalTimePlayedInSeconds", ref this._totalTimePlayedInSeconds);
      dataStore.SyncData<int>("_numberOfbattlesWon", ref this._numberOfbattlesWon);
      dataStore.SyncData<int>("_numberOfbattlesLost", ref this._numberOfbattlesLost);
      dataStore.SyncData<int>("_largestBattleWonAsLeader", ref this._largestBattleWonAsLeader);
      dataStore.SyncData<int>("_largestArmyFormedByPlayer", ref this._largestArmyFormedByPlayer);
      dataStore.SyncData<int>("_numberOfEnemyClansDestroyed", ref this._numberOfEnemyClansDestroyed);
      dataStore.SyncData<int>("_numberOfHeroesKilledInBattle", ref this._numberOfHeroesKilledInBattle);
      dataStore.SyncData<int>("_numberOfTroopsKnockedOrKilledAsParty", ref this._numberOfTroopsKnockedOrKilledAsParty);
      dataStore.SyncData<int>("_numberOfTroopsKnockedOrKilledByPlayer", ref this._numberOfTroopsKnockedOrKilledByPlayer);
      dataStore.SyncData<int>("_numberOfHeroPrisonersTaken", ref this._numberOfHeroPrisonersTaken);
      dataStore.SyncData<int>("_numberOfTroopPrisonersTaken", ref this._numberOfTroopPrisonersTaken);
      dataStore.SyncData<int>("_numberOfTownsCaptured", ref this._numberOfTownsCaptured);
      dataStore.SyncData<int>("_numberOfHideoutsCleared", ref this._numberOfHideoutsCleared);
      dataStore.SyncData<int>("_numberOfCastlesCaptured", ref this._numberOfCastlesCaptured);
      dataStore.SyncData<int>("_numberOfVillagesRaided", ref this._numberOfVillagesRaided);
      dataStore.SyncData<CampaignTime>("_timeSpentAsPrisoner", ref this._timeSpentAsPrisoner);
      dataStore.SyncData<ulong>("_totalDenarsEarned", ref this._totalDenarsEarned);
      dataStore.SyncData<ulong>("_denarsEarnedFromCaravans", ref this._denarsEarnedFromCaravans);
      dataStore.SyncData<ulong>("_denarsEarnedFromWorkshops", ref this._denarsEarnedFromWorkshops);
      dataStore.SyncData<ulong>("_denarsEarnedFromRansoms", ref this._denarsEarnedFromRansoms);
      dataStore.SyncData<ulong>("_denarsEarnedFromTaxes", ref this._denarsEarnedFromTaxes);
      dataStore.SyncData<ulong>("_denarsEarnedFromTributes", ref this._denarsEarnedFromTributes);
      dataStore.SyncData<ulong>("_denarsPaidAsTributes", ref this._denarsPaidAsTributes);
      dataStore.SyncData<int>("_numberOfCraftingPartsUnlocked", ref this._numberOfCraftingPartsUnlocked);
      dataStore.SyncData<int>("_numberOfWeaponsCrafted", ref this._numberOfWeaponsCrafted);
      dataStore.SyncData<int>("_numberOfCraftingOrdersCompleted", ref this._numberOfCraftingOrdersCompleted);
      dataStore.SyncData<(string, int)>("_mostExpensiveItemCrafted", ref this._mostExpensiveItemCrafted);
      dataStore.SyncData<int>("_numberOfCompanionsHired", ref this._numberOfCompanionsHired);
      dataStore.SyncData<Dictionary<Hero, (int, int)>>("_companionData", ref this._companionData);
      dataStore.SyncData<int>("_lastPlayerBattleSize", ref this._lastPlayerBattleSize);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinished));
      CampaignEvents.OnClanInfluenceChangedEvent.AddNonSerializedListener((object) this, new Action<Clan, float>(this.OnClanInfluenceChanged));
      CampaignEvents.OnAfterSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnAfterSessionLaunched));
      CampaignEvents.CrimeRatingChanged.AddNonSerializedListener((object) this, new Action<IFaction, float>(this.OnCrimeRatingChanged));
      CampaignEvents.OnMainPartyPrisonerRecruitedEvent.AddNonSerializedListener((object) this, new Action<FlattenedTroopRoster>(this.OnMainPartyPrisonerRecruited));
      CampaignEvents.OnUnitRecruitedEvent.AddNonSerializedListener((object) this, new Action<CharacterObject, int>(this.OnUnitRecruited));
      CampaignEvents.OnBeforeSaveEvent.AddNonSerializedListener((object) this, new Action(this.OnBeforeSave));
      CampaignEvents.CraftingPartUnlockedEvent.AddNonSerializedListener((object) this, new Action<CraftingPiece>(this.OnCraftingPartUnlocked));
      CampaignEvents.OnNewItemCraftedEvent.AddNonSerializedListener((object) this, new Action<ItemObject, ItemModifier, bool>(this.OnNewItemCrafted));
      CampaignEvents.NewCompanionAdded.AddNonSerializedListener((object) this, new Action<Hero>(this.OnNewCompanionAdded));
      CampaignEvents.HeroOrPartyTradedGold.AddNonSerializedListener((object) this, new Action<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool>(this.OnHeroOrPartyTradedGold));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnd));
      CampaignEvents.OnClanDestroyedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnClanDestroyed));
      CampaignEvents.PartyAttachedAnotherParty.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyAttachedAnotherParty));
      CampaignEvents.ArmyCreated.AddNonSerializedListener((object) this, new Action<Army>(this.OnArmyCreated));
      CampaignEvents.HeroPrisonerTaken.AddNonSerializedListener((object) this, new Action<PartyBase, Hero>(this.OnHeroPrisonerTaken));
      CampaignEvents.OnPrisonerTakenEvent.AddNonSerializedListener((object) this, new Action<FlattenedTroopRoster>(this.OnPrisonersTaken));
      CampaignEvents.RaidCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, RaidEventComponent>(this.OnRaidCompleted));
      CampaignEvents.OnHideoutBattleCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, HideoutEventComponent>(this.OnHideoutBattleCompleted));
      CampaignEvents.MapEventStarted.AddNonSerializedListener((object) this, new Action<MapEvent, PartyBase, PartyBase>(this.OnMapEventStarted));
      CampaignEvents.HeroPrisonerReleased.AddNonSerializedListener((object) this, new Action<Hero, PartyBase, IFaction, EndCaptivityDetail>(this.OnHeroPrisonerReleased));
      CampaignEvents.OnPlayerPartyKnockedOrKilledTroopEvent.AddNonSerializedListener((object) this, new Action<CharacterObject>(this.OnPlayerPartyKnockedOrKilledTroop));
      CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
      CampaignEvents.OnPlayerEarnedGoldFromAssetEvent.AddNonSerializedListener((object) this, new Action<DefaultClanFinanceModel.AssetIncomeType, int>(this.OnPlayerEarnedGoldFromAsset));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
    }

    private void OnBeforeSave() => this.UpdateTotalTimePlayedInSeconds();

    private void OnAfterSessionLaunched(CampaignGameStarter starter)
    {
      this._lastGameplayTimeCheck = DateTime.Now;
      if (this._highestTournamentRank != 0)
        return;
      this._highestTournamentRank = Campaign.Current.TournamentManager.GetLeaderBoardRank(Hero.MainHero);
    }

    public void OnDefectionPersuasionSucess() => ++this._numberOfClansDefected;

    private void OnUnitRecruited(CharacterObject character, int amount)
    {
      this._numberOfTroopsRecruited += amount;
    }

    private void OnMainPartyPrisonerRecruited(FlattenedTroopRoster flattenedTroopRoster)
    {
      this._numberOfPrisonersRecruited += flattenedTroopRoster.CountQ<FlattenedTroopRosterElement>();
    }

    private void OnCrimeRatingChanged(IFaction kingdom, float deltaCrimeAmount)
    {
      if ((double) deltaCrimeAmount <= 0.0)
        return;
      this._totalCrimeRatingGained += (int) deltaCrimeAmount;
    }

    private void OnClanInfluenceChanged(Clan clan, float change)
    {
      if ((double) change <= 0.0 || clan != Clan.PlayerClan)
        return;
      this._totalInfluenceEarned += (int) change;
    }

    private void OnTournamentFinished(
      CharacterObject winner,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      if (winner.HeroObject != Hero.MainHero)
        return;
      ++this._numberOfTournamentWins;
      int leaderBoardRank = Campaign.Current.TournamentManager.GetLeaderBoardRank(Hero.MainHero);
      if (leaderBoardRank >= this._highestTournamentRank)
        return;
      this._highestTournamentRank = leaderBoardRank;
    }

    private void OnIssueUpdated(
      IssueBase issue,
      IssueBase.IssueUpdateDetails details,
      Hero issueSolver = null)
    {
      if (details != IssueBase.IssueUpdateDetails.IssueFinishedWithSuccess && details != IssueBase.IssueUpdateDetails.SentTroopsFinishedQuest && details != IssueBase.IssueUpdateDetails.IssueFinishedWithBetrayal)
        return;
      ++this._numberOfIssuesSolved;
      if (issueSolver == null || !issueSolver.IsPlayerCompanion)
        return;
      if (this._companionData.ContainsKey(issueSolver))
        this._companionData[issueSolver] = (this._companionData[issueSolver].Item1 + 1, this._companionData[issueSolver].Item2);
      else
        this._companionData.Add(issueSolver, (1, 0));
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally = false)
    {
      if (hero.Mother != Hero.MainHero && hero.Father != Hero.MainHero)
        return;
      ++this._numberOfChildrenBorn;
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      if (killer == null || killer.PartyBelongedTo != MobileParty.MainParty || detail != KillCharacterAction.KillCharacterActionDetail.DiedInBattle)
        return;
      ++this._numberOfHeroesKilledInBattle;
    }

    private void OnMissionStarted(IMission mission)
    {
      Mission.Current.AddMissionBehavior((MissionBehavior) new StatisticsCampaignBehavior.StatisticsMissionLogic());
    }

    private void OnAgentRemoved(Agent affectedAgent, Agent affectorAgent)
    {
      if (affectorAgent == null)
        return;
      if (affectorAgent == Agent.Main)
        ++this._numberOfTroopsKnockedOrKilledByPlayer;
      else if (affectorAgent.IsPlayerTroop)
        ++this._numberOfTroopsKnockedOrKilledAsParty;
      else if (affectorAgent.IsHero)
      {
        Hero heroObject = (affectorAgent.Character as CharacterObject).HeroObject;
        if (heroObject.IsPlayerCompanion)
        {
          if (this._companionData.ContainsKey(heroObject))
            this._companionData[heroObject] = (this._companionData[heroObject].Item1, this._companionData[heroObject].Item2 + 1);
          else
            this._companionData.Add(heroObject, (0, 1));
        }
      }
      if (!affectedAgent.IsHero || affectedAgent.State != AgentState.Killed)
        return;
      ++this._numberOfHeroesKilledInBattle;
    }

    private void OnPlayerPartyKnockedOrKilledTroop(CharacterObject troop)
    {
      ++this._numberOfTroopsKnockedOrKilledAsParty;
    }

    private void OnHeroPrisonerReleased(
      Hero prisoner,
      PartyBase party,
      IFaction capturerFaction,
      EndCaptivityDetail detail)
    {
      if (prisoner != Hero.MainHero)
        return;
      this._timeSpentAsPrisoner += CampaignTime.Now - PlayerCaptivity.CaptivityStartTime;
    }

    private void OnMapEventStarted(
      MapEvent mapEvent,
      PartyBase attackerParty,
      PartyBase defenderParty)
    {
      if (!mapEvent.IsPlayerMapEvent)
        return;
      this._lastPlayerBattleSize = mapEvent.AttackerSide.TroopCount + mapEvent.DefenderSide.TroopCount;
    }

    private void OnHideoutBattleCompleted(
      BattleSideEnum winnerSide,
      HideoutEventComponent hideoutEventComponent)
    {
      if (hideoutEventComponent.MapEvent.PlayerSide != winnerSide)
        return;
      ++this._numberOfHideoutsCleared;
    }

    private void OnRaidCompleted(BattleSideEnum winnerSide, RaidEventComponent raidEventComponent)
    {
      if (raidEventComponent.MapEvent.PlayerSide != winnerSide)
        return;
      ++this._numberOfVillagesRaided;
    }

    private void OnPrisonersTaken(FlattenedTroopRoster troopRoster)
    {
      this._numberOfTroopPrisonersTaken += troopRoster.CountQ<FlattenedTroopRosterElement>();
    }

    private void OnHeroPrisonerTaken(PartyBase capturer, Hero prisoner)
    {
      if (capturer != PartyBase.MainParty)
        return;
      ++this._numberOfHeroPrisonersTaken;
    }

    private void OnArmyCreated(Army army)
    {
      if (army.LeaderParty != MobileParty.MainParty || this._largestArmyFormedByPlayer >= army.TotalManCount)
        return;
      this._largestArmyFormedByPlayer = army.TotalManCount;
    }

    private void OnPartyAttachedAnotherParty(MobileParty mobileParty)
    {
      if (mobileParty.Army != MobileParty.MainParty.Army || MobileParty.MainParty.Army.LeaderParty != MobileParty.MainParty || this._largestArmyFormedByPlayer >= MobileParty.MainParty.Army.TotalManCount)
        return;
      this._largestArmyFormedByPlayer = MobileParty.MainParty.Army.TotalManCount;
    }

    private void OnClanDestroyed(Clan clan)
    {
      if (!clan.IsAtWarWith((IFaction) Clan.PlayerClan))
        return;
      ++this._numberOfEnemyClansDestroyed;
    }

    private void OnMapEventEnd(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent)
        return;
      if (mapEvent.WinningSide == mapEvent.PlayerSide)
      {
        ++this._numberOfbattlesWon;
        if (mapEvent.IsSiegeAssault && !mapEvent.IsPlayerSergeant() && mapEvent.MapEventSettlement != null)
        {
          if (mapEvent.MapEventSettlement.IsTown)
            ++this._numberOfTownsCaptured;
          else if (mapEvent.MapEventSettlement.IsCastle)
            ++this._numberOfCastlesCaptured;
        }
        if (this._largestBattleWonAsLeader >= this._lastPlayerBattleSize || mapEvent.IsPlayerSergeant())
          return;
        this._largestBattleWonAsLeader = this._lastPlayerBattleSize;
      }
      else
      {
        if (!mapEvent.HasWinner)
          return;
        ++this._numberOfbattlesLost;
      }
    }

    private void OnHeroOrPartyTradedGold(
      (Hero, PartyBase) giver,
      (Hero, PartyBase) recipient,
      (int, string) goldAmount,
      bool showNotification)
    {
      if (recipient.Item1 != Hero.MainHero && recipient.Item2 != PartyBase.MainParty)
        return;
      this._totalDenarsEarned += (ulong) goldAmount.Item1;
    }

    public void OnPlayerAcceptedRansomOffer(int ransomPrice)
    {
      this._denarsEarnedFromRansoms += (ulong) ransomPrice;
    }

    private void OnPlayerEarnedGoldFromAsset(
      DefaultClanFinanceModel.AssetIncomeType assetType,
      int amount)
    {
      switch (assetType)
      {
        case DefaultClanFinanceModel.AssetIncomeType.Workshop:
          this._denarsEarnedFromWorkshops += (ulong) amount;
          break;
        case DefaultClanFinanceModel.AssetIncomeType.Caravan:
          this._denarsEarnedFromCaravans += (ulong) amount;
          break;
        case DefaultClanFinanceModel.AssetIncomeType.Taxes:
          this._denarsEarnedFromTaxes += (ulong) amount;
          break;
        case DefaultClanFinanceModel.AssetIncomeType.TributesEarned:
          this._denarsEarnedFromTributes += (ulong) amount;
          break;
        case DefaultClanFinanceModel.AssetIncomeType.TributesPaid:
          this._denarsPaidAsTributes += (ulong) amount;
          break;
      }
    }

    private void OnNewCompanionAdded(Hero hero) => ++this._numberOfCompanionsHired;

    private void OnNewItemCrafted(
      ItemObject itemObject,
      ItemModifier overriddenItemModifier,
      bool isCraftingOrderItem)
    {
      ++this._numberOfWeaponsCrafted;
      if (isCraftingOrderItem)
        ++this._numberOfCraftingOrdersCompleted;
      if (this._mostExpensiveItemCrafted.Item2 != 0 && this._mostExpensiveItemCrafted.Item2 >= itemObject.Value)
        return;
      this._mostExpensiveItemCrafted.Item1 = itemObject.Name.ToString();
      this._mostExpensiveItemCrafted.Item2 = itemObject.Value;
    }

    private void OnCraftingPartUnlocked(CraftingPiece craftingPiece)
    {
      ++this._numberOfCraftingPartsUnlocked;
    }

    public (string name, int value) GetCompanionWithMostKills()
    {
      if (this._companionData.IsEmpty<KeyValuePair<Hero, (int, int)>>())
        return ((string) null, 0);
      KeyValuePair<Hero, (int, int)> keyValuePair = this._companionData.MaxBy<KeyValuePair<Hero, (int, int)>, int>((Func<KeyValuePair<Hero, (int, int)>, int>) (kvp => kvp.Value.Item2));
      return (keyValuePair.Key.Name.ToString(), keyValuePair.Value.Item2);
    }

    public (string name, int value) GetCompanionWithMostIssuesSolved()
    {
      if (this._companionData.IsEmpty<KeyValuePair<Hero, (int, int)>>())
        return ((string) null, 0);
      KeyValuePair<Hero, (int, int)> keyValuePair = this._companionData.MaxBy<KeyValuePair<Hero, (int, int)>, int>((Func<KeyValuePair<Hero, (int, int)>, int>) (kvp => kvp.Value.Item1));
      return (keyValuePair.Key.Name.ToString(), keyValuePair.Value.Item1);
    }

    public int GetHighestTournamentRank() => this._highestTournamentRank;

    public int GetNumberOfTournamentWins() => this._numberOfTournamentWins;

    public int GetNumberOfChildrenBorn() => this._numberOfChildrenBorn;

    public int GetNumberOfPrisonersRecruited() => this._numberOfPrisonersRecruited;

    public int GetNumberOfTroopsRecruited() => this._numberOfTroopsRecruited;

    public int GetNumberOfClansDefected() => this._numberOfClansDefected;

    public int GetNumberOfIssuesSolved() => this._numberOfIssuesSolved;

    public int GetTotalInfluenceEarned() => this._totalInfluenceEarned;

    public int GetTotalCrimeRatingGained() => this._totalCrimeRatingGained;

    public int GetNumberOfBattlesWon() => this._numberOfbattlesWon;

    public int GetNumberOfBattlesLost() => this._numberOfbattlesLost;

    public int GetLargestBattleWonAsLeader() => this._largestBattleWonAsLeader;

    public int GetLargestArmyFormedByPlayer() => this._largestArmyFormedByPlayer;

    public int GetNumberOfEnemyClansDestroyed() => this._numberOfEnemyClansDestroyed;

    public int GetNumberOfHeroesKilledInBattle() => this._numberOfHeroesKilledInBattle;

    public int GetNumberOfTroopsKnockedOrKilledAsParty()
    {
      return this._numberOfTroopsKnockedOrKilledAsParty;
    }

    public int GetNumberOfTroopsKnockedOrKilledByPlayer()
    {
      return this._numberOfTroopsKnockedOrKilledByPlayer;
    }

    public int GetNumberOfHeroPrisonersTaken() => this._numberOfHeroPrisonersTaken;

    public int GetNumberOfTroopPrisonersTaken() => this._numberOfTroopPrisonersTaken;

    public int GetNumberOfTownsCaptured() => this._numberOfTownsCaptured;

    public int GetNumberOfHideoutsCleared() => this._numberOfHideoutsCleared;

    public int GetNumberOfCastlesCaptured() => this._numberOfCastlesCaptured;

    public int GetNumberOfVillagesRaided() => this._numberOfVillagesRaided;

    public int GetNumberOfCraftingPartsUnlocked() => this._numberOfCraftingPartsUnlocked;

    public int GetNumberOfWeaponsCrafted() => this._numberOfWeaponsCrafted;

    public int GetNumberOfCraftingOrdersCompleted() => this._numberOfCraftingOrdersCompleted;

    public int GetNumberOfCompanionsHired() => this._numberOfCompanionsHired;

    public CampaignTime GetTimeSpentAsPrisoner() => this._timeSpentAsPrisoner;

    public ulong GetTotalTimePlayedInSeconds()
    {
      this.UpdateTotalTimePlayedInSeconds();
      return this._totalTimePlayedInSeconds;
    }

    public ulong GetTotalDenarsEarned() => this._totalDenarsEarned;

    public ulong GetDenarsEarnedFromCaravans() => this._denarsEarnedFromCaravans;

    public ulong GetDenarsEarnedFromWorkshops() => this._denarsEarnedFromWorkshops;

    public ulong GetDenarsEarnedFromRansoms() => this._denarsEarnedFromRansoms;

    public ulong GetDenarsEarnedFromTaxes() => this._denarsEarnedFromTaxes;

    public ulong GetDenarsEarnedFromTributes() => this._denarsEarnedFromTributes;

    public ulong GetDenarsPaidAsTributes() => this._denarsPaidAsTributes;

    public CampaignTime GetTotalTimePlayed()
    {
      return CampaignTime.Now - Campaign.Current.CampaignStartTime;
    }

    public (string, int) GetMostExpensiveItemCrafted() => this._mostExpensiveItemCrafted;

    private void UpdateTotalTimePlayedInSeconds()
    {
      int seconds = (DateTime.Now - this._lastGameplayTimeCheck).Seconds;
      if (seconds <= 0)
        return;
      this._totalTimePlayedInSeconds += (ulong) seconds;
      this._lastGameplayTimeCheck = DateTime.Now;
    }

    private class StatisticsMissionLogic : MissionLogic
    {
      private readonly StatisticsCampaignBehavior behavior = Campaign.Current.CampaignBehaviorManager.GetBehavior<StatisticsCampaignBehavior>();

      public override void OnAgentRemoved(
        Agent affectedAgent,
        Agent affectorAgent,
        AgentState agentState,
        KillingBlow blow)
      {
        if (this.behavior == null)
          return;
        this.behavior.OnAgentRemoved(affectedAgent, affectorAgent);
      }
    }
  }
}
