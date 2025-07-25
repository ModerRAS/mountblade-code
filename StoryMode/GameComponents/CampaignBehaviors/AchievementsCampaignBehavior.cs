// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.CampaignBehaviors.AchievementsCampaignBehavior
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using SandBox.CampaignBehaviors;
using StoryMode.Quests.ThirdPhase;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.AchievementSystem;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace StoryMode.GameComponents.CampaignBehaviors
{
  public class AchievementsCampaignBehavior : CampaignBehaviorBase
  {
    private const float SettlementCountStoredInIntegerSet = 30f;
    private const string CreatedKingdomCountStatID = "CreatedKingdomCount";
    private const string ClearedHideoutCountStatID = "ClearedHideoutCount";
    private const string RepelledSiegeAssaultStatID = "RepelledSiegeAssaultCount";
    private const string KingOrQueenKilledInBattleStatID = "KingOrQueenKilledInBattle";
    private const string SuccessfulSiegeCountStatID = "SuccessfulSiegeCount";
    private const string WonTournamentCountStatID = "WonTournamentCount";
    private const string HighestTierSwordCraftedStatID = "HighestTierSwordCrafted";
    private const string SuccessfulBattlesAgainstArmyCountStatID = "SuccessfulBattlesAgainstArmyCount";
    private const string DefeatedArmyWhileAloneCountStatID = "DefeatedArmyWhileAloneCount";
    private const string TotalTradeProfitStatID = "TotalTradeProfit";
    private const string MaxDailyTributeGainStatID = "MaxDailyTributeGain";
    private const string MaxDailyIncomeStatID = "MaxDailyIncome";
    private const string CapturedATownAloneCountStatID = "CapturedATownAloneCount";
    private const string DefeatedTroopCountStatID = "DefeatedTroopCount";
    private const string FarthestHeadStatID = "FarthestHeadShot";
    private const string ButtersInInventoryStatID = "ButtersInInventoryCount";
    private const string ReachedClanTierSixStatID = "ReachedClanTierSix";
    private const string OwnedFortificationCountStatID = "OwnedFortificationCount";
    private const string HasOwnedCaravanAndWorkshopStatID = "HasOwnedCaravanAndWorkshop";
    private const string ExecutedLordWithMinus100RelationStatID = "ExecutedLordRelation100";
    private const string HighestSkillValueStatID = "HighestSkillValue";
    private const string LeaderOfTournamentStatID = "LeaderOfTournament";
    private const string FinishedTutorialStatID = "FinishedTutorial";
    private const string DefeatedSuperiorForceStatID = "DefeatedSuperiorForce";
    private const string BarbarianVictoryStatID = "BarbarianVictory";
    private const string ImperialVictoryStatID = "ImperialVictory";
    private const string AssembledDragonBannerStatID = "AssembledDragonBanner";
    private const string CompletedAllProjectsStatID = "CompletedAllProjects";
    private const string ClansUnderPlayerKingdomCountStatID = "ClansUnderPlayerKingdomCount";
    private const string HearthBreakerStatID = "Hearthbreaker";
    private const string ProposedAndWonAPolicyStatID = "ProposedAndWonAPolicy";
    private const string BestServedColdStatID = "BestServedCold";
    private const string DefeatedRadagosInDUelStatID = "RadagosDefeatedInDuel";
    private const string GreatGrannyStatID = "GreatGranny";
    private const string NumberOfChildrenStatID = "NumberOfChildrenBorn";
    private const string UndercoverStatID = "CompletedAnIssueInHostileTown";
    private const string EnteredEverySettlemenStatID = "EnteredEverySettlement";
    private bool _deactivateAchievements;
    private int _cachedCreatedKingdomCount;
    private int _cachedHideoutClearedCount;
    private int _cachedHighestSkillValue = -1;
    private int _cachedRepelledSiegeAssaultCount;
    private int _cachedCapturedTownAloneCount;
    private int _cachedKingOrQueenKilledInBattle;
    private int _cachedSuccessfulSiegeCount;
    private int _cachedWonTournamentCount;
    private int _cachedSuccessfulBattlesAgainstArmyCount;
    private int _cachedSuccessfulBattlesAgainstArmyAloneCount;
    private int _cachedTotalTradeProfit;
    private int _cachedMaxDailyIncome;
    private int _cachedDefeatedTroopCount;
    private int _cachedFarthestHeadShot;
    private ItemObject _butter;
    private List<Settlement> _orderedSettlementList = new List<Settlement>();
    private int[] _settlementIntegerSetList;

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<bool>("_deactivateAchievements", ref this._deactivateAchievements);
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.CacheHighestSkillValue));
      CampaignEvents.WorkshopOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Workshop, Hero>(this.ProgressOwnedWorkshopCount));
      CampaignEvents.MobilePartyCreated.AddNonSerializedListener((object) this, new Action<MobileParty>(this.ProgressOwnedCaravanCount));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.KingdomCreatedEvent.AddNonSerializedListener((object) this, new Action<Kingdom>(this.ProgressCreatedKingdomCount));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.BeforeHeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnBeforeHeroKilled));
      CampaignEvents.ClanTierIncrease.AddNonSerializedListener((object) this, new Action<Clan, bool>(this.ProgressClanTier));
      CampaignEvents.OnHideoutBattleCompletedEvent.AddNonSerializedListener((object) this, new Action<BattleSideEnum, HideoutEventComponent>(this.OnHideoutBattleCompleted));
      CampaignEvents.HeroGainedSkill.AddNonSerializedListener((object) this, new Action<Hero, SkillObject, int, bool>(this.ProgressHeroSkillValue));
      CampaignEvents.PlayerInventoryExchangeEvent.AddNonSerializedListener((object) this, new Action<List<(ItemRosterElement, int)>, List<(ItemRosterElement, int)>, bool>(this.PlayerInventoryExchange));
      CampaignEvents.TournamentFinished.AddNonSerializedListener((object) this, new Action<CharacterObject, MBReadOnlyList<CharacterObject>, Town, ItemObject>(this.OnTournamentFinish));
      CampaignEvents.SiegeCompletedEvent.AddNonSerializedListener((object) this, new Action<Settlement, MobileParty, bool, MapEvent.BattleTypes>(this.OnSiegeCompleted));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.OnQuestCompletedEvent.AddNonSerializedListener((object) this, new Action<QuestBase, QuestBase.QuestCompleteDetails>(this.OnQuestCompleted));
      CampaignEvents.OnBuildingLevelChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Building, int>(this.OnBuildingLevelChanged));
      CampaignEvents.OnNewItemCraftedEvent.AddNonSerializedListener((object) this, new Action<ItemObject, ItemModifier, bool>(this.OnNewItemCrafted));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
      CampaignEvents.OnClanDestroyedEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.OnClanDestroyed));
      CampaignEvents.OnPlayerTradeProfitEvent.AddNonSerializedListener((object) this, new Action<int>(this.ProgressTotalTradeProfit));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.OnDailyTick));
      CampaignEvents.HeroesMarried.AddNonSerializedListener((object) this, new Action<Hero, Hero, bool>(this.CheckHeroMarriage));
      CampaignEvents.KingdomDecisionConcluded.AddNonSerializedListener((object) this, new Action<KingdomDecision, DecisionOutcome, bool>(this.CheckKingdomDecisionConcluded));
      CampaignEvents.OnMissionStartedEvent.AddNonSerializedListener((object) this, new Action<IMission>(this.OnMissionStarted));
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEnter));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
      CampaignEvents.OnGameLoadFinishedEvent.AddNonSerializedListener((object) this, new Action(this.OnGameLoadFinished));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.OnIssueUpdatedEvent.AddNonSerializedListener((object) this, new Action<IssueBase, IssueBase.IssueUpdateDetails, Hero>(this.OnIssueUpdated));
      CampaignEvents.RulingClanChanged.AddNonSerializedListener((object) this, new Action<Kingdom, Clan>(this.OnRulingClanChanged));
      CampaignEvents.OnConfigChangedEvent.AddNonSerializedListener((object) this, new Action(this.OnConfigChanged));
      StoryModeEvents.OnStoryModeTutorialEndedEvent.AddNonSerializedListener((object) this, new Action(this.CheckTutorialFinished));
      StoryModeEvents.OnBannerPieceCollectedEvent.AddNonSerializedListener((object) this, new Action(this.ProgressAssembledDragonBanner));
    }

    private void OnRulingClanChanged(Kingdom kingdom, Clan newRulingCLan)
    {
      this.ProgressOwnedFortificationCount();
    }

    private void OnIssueUpdated(
      IssueBase issueBase,
      IssueBase.IssueUpdateDetails detail,
      Hero issueSolver)
    {
      if (issueSolver != Hero.MainHero || issueBase.IsSolvingWithAlternative || detail != IssueBase.IssueUpdateDetails.IssueFinishedWithSuccess || issueBase.IssueOwner.MapFaction == null || !issueBase.IssueOwner.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
        return;
      this.SetStatInternal("CompletedAnIssueInHostileTown", 1);
    }

    private void OnHideoutBattleCompleted(
      BattleSideEnum winnerSide,
      HideoutEventComponent hideoutEventComponent)
    {
      if (!hideoutEventComponent.MapEvent.InvolvedParties.Contains<PartyBase>(PartyBase.MainParty) || winnerSide != hideoutEventComponent.MapEvent.PlayerSide)
        return;
      this.ProgressHideoutClearedCount();
    }

    private void OnBeforeHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      this.ProgressKingOrQueenKilledInBattle(victim, killer, detail);
    }

    private void OnConfigChanged()
    {
      TextObject reason;
      if (this.CheckAchievementSystemActivity(out reason))
        return;
      this.DeactivateAchievements(reason);
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally)
    {
      if (!isBornNaturally)
        return;
      if (hero.Father == Hero.MainHero || hero.Mother == Hero.MainHero)
        this.ProgressChildCount();
      this.CheckGrandparent();
    }

    private void OnGameLoadFinished()
    {
      TextObject reason;
      if (this.CheckAchievementSystemActivity(out reason))
      {
        this.CacheAndInitializeAchievementVariables();
        this.CacheHighestSkillValue();
      }
      else
        this.DeactivateAchievements(reason);
    }

    private async void CacheAndInitializeAchievementVariables()
    {
      AchievementsCampaignBehavior campaignBehavior1 = this;
      campaignBehavior1._butter = MBObjectManager.Instance.GetObject<ItemObject>("butter");
      List<string> stringList = new List<string>()
      {
        "CreatedKingdomCount",
        "ClearedHideoutCount",
        "RepelledSiegeAssaultCount",
        "KingOrQueenKilledInBattle",
        "SuccessfulSiegeCount",
        "WonTournamentCount",
        "SuccessfulBattlesAgainstArmyCount",
        "DefeatedArmyWhileAloneCount",
        "TotalTradeProfit",
        "MaxDailyIncome",
        "CapturedATownAloneCount",
        "DefeatedTroopCount",
        "FarthestHeadShot"
      };
      campaignBehavior1._orderedSettlementList = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)).OrderByDescending<Settlement, string>((Func<Settlement, string>) (x => x.StringId)).ToList<Settlement>();
      int neededIntegerCount = MathF.Ceiling((float) campaignBehavior1._orderedSettlementList.Count / 30f);
      campaignBehavior1._settlementIntegerSetList = new int[neededIntegerCount];
      for (int index = 0; index < neededIntegerCount; ++index)
        stringList.Add("SettlementSet" + (object) index);
      int[] stats = await AchievementManager.GetStats(stringList.ToArray());
      if (stats != null)
      {
        int num1 = 0;
        AchievementsCampaignBehavior campaignBehavior2 = campaignBehavior1;
        int[] numArray1 = stats;
        int index1 = num1;
        int num2 = index1 + 1;
        int num3 = numArray1[index1];
        campaignBehavior2._cachedCreatedKingdomCount = num3;
        AchievementsCampaignBehavior campaignBehavior3 = campaignBehavior1;
        int[] numArray2 = stats;
        int index2 = num2;
        int num4 = index2 + 1;
        int num5 = numArray2[index2];
        campaignBehavior3._cachedHideoutClearedCount = num5;
        AchievementsCampaignBehavior campaignBehavior4 = campaignBehavior1;
        int[] numArray3 = stats;
        int index3 = num4;
        int num6 = index3 + 1;
        int num7 = numArray3[index3];
        campaignBehavior4._cachedRepelledSiegeAssaultCount = num7;
        AchievementsCampaignBehavior campaignBehavior5 = campaignBehavior1;
        int[] numArray4 = stats;
        int index4 = num6;
        int num8 = index4 + 1;
        int num9 = numArray4[index4];
        campaignBehavior5._cachedKingOrQueenKilledInBattle = num9;
        AchievementsCampaignBehavior campaignBehavior6 = campaignBehavior1;
        int[] numArray5 = stats;
        int index5 = num8;
        int num10 = index5 + 1;
        int num11 = numArray5[index5];
        campaignBehavior6._cachedSuccessfulSiegeCount = num11;
        AchievementsCampaignBehavior campaignBehavior7 = campaignBehavior1;
        int[] numArray6 = stats;
        int index6 = num10;
        int num12 = index6 + 1;
        int num13 = numArray6[index6];
        campaignBehavior7._cachedWonTournamentCount = num13;
        AchievementsCampaignBehavior campaignBehavior8 = campaignBehavior1;
        int[] numArray7 = stats;
        int index7 = num12;
        int num14 = index7 + 1;
        int num15 = numArray7[index7];
        campaignBehavior8._cachedSuccessfulBattlesAgainstArmyCount = num15;
        AchievementsCampaignBehavior campaignBehavior9 = campaignBehavior1;
        int[] numArray8 = stats;
        int index8 = num14;
        int num16 = index8 + 1;
        int num17 = numArray8[index8];
        campaignBehavior9._cachedSuccessfulBattlesAgainstArmyAloneCount = num17;
        AchievementsCampaignBehavior campaignBehavior10 = campaignBehavior1;
        int[] numArray9 = stats;
        int index9 = num16;
        int num18 = index9 + 1;
        int num19 = numArray9[index9];
        campaignBehavior10._cachedTotalTradeProfit = num19;
        AchievementsCampaignBehavior campaignBehavior11 = campaignBehavior1;
        int[] numArray10 = stats;
        int index10 = num18;
        int num20 = index10 + 1;
        int num21 = numArray10[index10];
        campaignBehavior11._cachedMaxDailyIncome = num21;
        AchievementsCampaignBehavior campaignBehavior12 = campaignBehavior1;
        int[] numArray11 = stats;
        int index11 = num20;
        int num22 = index11 + 1;
        int num23 = numArray11[index11];
        campaignBehavior12._cachedCapturedTownAloneCount = num23;
        AchievementsCampaignBehavior campaignBehavior13 = campaignBehavior1;
        int[] numArray12 = stats;
        int index12 = num22;
        int num24 = index12 + 1;
        int num25 = numArray12[index12];
        campaignBehavior13._cachedDefeatedTroopCount = num25;
        AchievementsCampaignBehavior campaignBehavior14 = campaignBehavior1;
        int[] numArray13 = stats;
        int index13 = num24;
        int num26 = index13 + 1;
        int num27 = numArray13[index13];
        campaignBehavior14._cachedFarthestHeadShot = num27;
        for (int index14 = 0; index14 < neededIntegerCount; ++index14)
        {
          int num28 = stats[num26++];
          if (num28 == -1)
          {
            campaignBehavior1._settlementIntegerSetList[index14] = 0;
            campaignBehavior1.SetStatInternal("SettlementSet" + (object) index14, 0);
          }
          else
            campaignBehavior1._settlementIntegerSetList[index14] = num28;
        }
      }
      else
      {
        TextObject reason = new TextObject("{=4wS8eYYe}Achievements are disabled temporarily for this session due to service disconnection.");
        campaignBehavior1.DeactivateAchievements(reason, temporarily: true);
        Debug.Print("Achievements are disabled because current platform does not support achievements!", color: Debug.DebugColor.DarkRed);
      }
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      TextObject reason;
      if (this.CheckAchievementSystemActivity(out reason))
        this.CacheAndInitializeAchievementVariables();
      else
        this.DeactivateAchievements(reason);
    }

    private void OnDailyTick()
    {
      this.ProgressDailyTribute();
      this.ProgressDailyIncome();
    }

    private void OnClanDestroyed(Clan clan) => this.ProgressClansUnderKingdomCount();

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification = true)
    {
      this.ProgressDailyIncome();
      this.ProgressClansUnderKingdomCount();
      this.ProgressOwnedFortificationCount();
    }

    private void OnNewItemCrafted(
      ItemObject itemObject,
      ItemModifier overriddenItemModifier,
      bool isCraftingOrderItem)
    {
      this.ProgressHighestTierSwordCrafted(itemObject);
    }

    private void OnBuildingLevelChanged(Town town, Building building, int levelChange)
    {
      this.ProgressDailyIncome();
      this.CheckProjectsInSettlement(town);
    }

    private void OnQuestCompleted(QuestBase quest, QuestBase.QuestCompleteDetails detail)
    {
      this.ProgressImperialBarbarianVictory(quest, detail);
    }

    private void OnTournamentFinish(
      CharacterObject winner,
      MBReadOnlyList<CharacterObject> participants,
      Town town,
      ItemObject prize)
    {
      this.ProgressTournamentWonCount(winner);
      this.ProgressTournamentRank(winner);
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      this.ProgressRepelSiegeAssaultCount(mapEvent);
      this.CheckDefeatedSuperiorForce(mapEvent);
      this.ProgressSuccessfulBattlesAgainstArmyCount(mapEvent);
      this.ProgressSuccessfulBattlesAgainstArmyAloneCount(mapEvent);
    }

    private void OnSiegeCompleted(
      Settlement siegeSettlement,
      MobileParty attackerParty,
      bool isWin,
      MapEvent.BattleTypes battleType)
    {
      this.ProgressRepelSiegeAssaultCount(siegeSettlement, isWin);
      this.ProgressSuccessfulSiegeCount(attackerParty, isWin);
      this.ProgressCapturedATownAlone(attackerParty, isWin);
    }

    private void PlayerInventoryExchange(
      List<(ItemRosterElement, int)> purchasedItems,
      List<(ItemRosterElement, int)> soldItems,
      bool isTrading)
    {
      if (this._butter == null)
        return;
      int itemNumber = PartyBase.MainParty.ItemRoster.GetItemNumber(this._butter);
      if (itemNumber <= 0)
        return;
      this.SetStatInternal("ButtersInInventoryCount", itemNumber);
    }

    public bool CheckAchievementSystemActivity(out TextObject reason)
    {
      reason = TextObject.Empty;
      DumpIntegrityCampaignBehavior behavior = Campaign.Current.CampaignBehaviorManager.GetBehavior<DumpIntegrityCampaignBehavior>();
      return !this._deactivateAchievements && behavior != null && DumpIntegrityCampaignBehavior.IsGameIntegrityAchieved(out reason) || MBDebug.IsTestMode();
    }

    private void OnSettlementEnter(MobileParty party, Settlement settlement, Hero hero)
    {
      if (party != MobileParty.MainParty || !settlement.IsFortification)
        return;
      int num1 = this._orderedSettlementList.IndexOf(settlement);
      int index = MathF.Floor((float) num1 / 30f);
      int num2 = this._settlementIntegerSetList[index] | 1 << (int) (30.0 - ((double) num1 % 30.0 + 1.0));
      this.SetStatInternal("SettlementSet" + (object) index, num2);
      if (this._settlementIntegerSetList[index] == num2)
        return;
      this._settlementIntegerSetList[index] = num2;
      this.CheckEnteredEverySettlement();
    }

    private void CheckEnteredEverySettlement()
    {
      int num = 0;
      for (int index = 0; index < this._settlementIntegerSetList.Length; ++index)
      {
        for (int settlementIntegerSet = this._settlementIntegerSetList[index]; settlementIntegerSet > 0; settlementIntegerSet >>= 1)
        {
          if (settlementIntegerSet % 2 == 1)
            ++num;
        }
      }
      if (num != this._orderedSettlementList.Count)
        return;
      this.SetStatInternal("EnteredEverySettlement", 1);
    }

    private void CacheHighestSkillValue()
    {
      int num = 0;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
      {
        int skillValue = Hero.MainHero.GetSkillValue(skill);
        if (skillValue > num)
          num = skillValue;
      }
      this._cachedHighestSkillValue = num;
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      this.CheckExecutedLordRelation(victim, killer, detail);
      this.CheckBestServedCold(victim, killer, detail);
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      this.ProgressDailyIncome();
      if (!settlement.IsFortification)
        return;
      this.ProgressOwnedFortificationCount();
    }

    private void OnMissionStarted(IMission obj)
    {
      Mission.Current.AddMissionBehavior((MissionBehavior) new AchievementsCampaignBehavior.AchievementMissionLogic(new Action<Agent, Agent>(this.OnAgentRemoved), new Action<Agent, WeaponComponentData, BoneBodyPartType, int>(this.OnAgentHit)));
    }

    private void OnAgentHit(
      Agent affectorAgent,
      WeaponComponentData attackerWeapon,
      BoneBodyPartType victimBoneBodyPartType,
      int hitDistance)
    {
      if (affectorAgent == null || affectorAgent != Agent.Main || attackerWeapon == null || attackerWeapon.IsMeleeWeapon || victimBoneBodyPartType != BoneBodyPartType.Head || hitDistance <= this._cachedFarthestHeadShot)
        return;
      this.SetStatInternal("FarthestHeadShot", hitDistance);
      this._cachedFarthestHeadShot = hitDistance;
    }

    private void OnAgentRemoved(Agent affectedAgent, Agent affectorAgent)
    {
      if (affectorAgent == null || affectorAgent != Agent.Main || !affectedAgent.IsHuman)
        return;
      this.SetStatInternal("DefeatedTroopCount", ++this._cachedDefeatedTroopCount);
    }

    private void ProgressChildCount()
    {
      int count = Hero.MainHero.Children.Count;
      foreach (LogEntry gameActionLog in (List<LogEntry>) Campaign.Current.LogEntryHistory.GameActionLogs)
      {
        if (gameActionLog is PlayerCharacterChangedLogEntry characterChangedLogEntry)
          count += characterChangedLogEntry.OldPlayerHero.Children.Count;
      }
      this.SetStatInternal("NumberOfChildrenBorn", count);
    }

    private void CheckGrandparent()
    {
      if (!Hero.MainHero.Children.Any<Hero>((Func<Hero, bool>) (x => x.Children.Any<Hero>((Func<Hero, bool>) (y => y.Children.Any<Hero>())))))
        return;
      this.SetStatInternal("GreatGranny", 1);
    }

    public void OnRadagosDuelWon() => this.SetStatInternal("RadagosDefeatedInDuel", 1);

    private void CheckBestServedCold(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail)
    {
      if (killer != Hero.MainHero || detail != KillCharacterAction.KillCharacterActionDetail.Executed)
        return;
      foreach (LogEntry gameActionLog in (List<LogEntry>) Campaign.Current.LogEntryHistory.GameActionLogs)
      {
        if (gameActionLog is CharacterKilledLogEntry characterKilledLogEntry && characterKilledLogEntry.Killer == victim && characterKilledLogEntry.Victim.Clan == Clan.PlayerClan)
        {
          this.SetStatInternal("BestServedCold", 1);
          break;
        }
      }
    }

    private void CheckProposedAndWonPolicy(KingdomDecision decision, DecisionOutcome chosenOutcome)
    {
      if (decision.ProposerClan != Clan.PlayerClan)
        return;
      KingdomDecision kingdomDecision = decision;
      MBList<DecisionOutcome> possibleOutcomes = new MBList<DecisionOutcome>();
      possibleOutcomes.Add(chosenOutcome);
      if (kingdomDecision.GetQueriedDecisionOutcome((MBReadOnlyList<DecisionOutcome>) possibleOutcomes) == null)
        return;
      this.SetStatInternal("ProposedAndWonAPolicy", 1);
    }

    private void CheckKingdomDecisionConcluded(
      KingdomDecision decision,
      DecisionOutcome chosenOutcome,
      bool isPlayerInvolved)
    {
      this.CheckProposedAndWonPolicy(decision, chosenOutcome);
      this.ProgressOwnedFortificationCount();
      this.ProgressClansUnderKingdomCount();
    }

    private void CheckHeroMarriage(Hero hero1, Hero hero2, bool showNotification = true)
    {
      if (hero1 != Hero.MainHero && hero2 != Hero.MainHero)
        return;
      Hero hero = hero1 == Hero.MainHero ? hero2 : hero1;
      foreach (LogEntry gameActionLog in (List<LogEntry>) Campaign.Current.LogEntryHistory.GameActionLogs)
      {
        if (gameActionLog is CharacterKilledLogEntry characterKilledLogEntry && characterKilledLogEntry.Killer == Hero.MainHero && hero.ExSpouses.Contains(characterKilledLogEntry.Victim))
          this.SetStatInternal("Hearthbreaker", 1);
      }
    }

    private void ProgressClansUnderKingdomCount()
    {
      if (Clan.PlayerClan.Kingdom == null || Clan.PlayerClan.Kingdom.Leader != Hero.MainHero)
        return;
      this.SetStatInternal("ClansUnderPlayerKingdomCount", Clan.PlayerClan.Kingdom.Clans.Count);
    }

    private void ProgressSuccessfulBattlesAgainstArmyCount(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent || mapEvent.Winner != mapEvent.GetMapEventSide(mapEvent.PlayerSide) || !mapEvent.GetMapEventSide(mapEvent.DefeatedSide).Parties.Any<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.MobileParty != null && x.Party.MobileParty.AttachedTo != null)))
        return;
      this.SetStatInternal("SuccessfulBattlesAgainstArmyCount", ++this._cachedSuccessfulBattlesAgainstArmyCount);
    }

    private void ProgressSuccessfulBattlesAgainstArmyAloneCount(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent || mapEvent.Winner != mapEvent.GetMapEventSide(mapEvent.PlayerSide) || !mapEvent.GetMapEventSide(mapEvent.DefeatedSide).Parties.Any<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.MobileParty != null && x.Party.MobileParty.AttachedTo != null)) || mapEvent.GetMapEventSide(mapEvent.PlayerSide).Parties.Count != 1)
        return;
      this.SetStatInternal("DefeatedArmyWhileAloneCount", ++this._cachedSuccessfulBattlesAgainstArmyAloneCount);
    }

    private void ProgressDailyTribute()
    {
      IFaction mapFaction = Clan.PlayerClan.MapFaction;
      float num1 = 1f;
      int f = 0;
      if (Clan.PlayerClan.Kingdom != null)
        num1 = AchievementsCampaignBehavior.CalculateTributeShareFactor(Clan.PlayerClan);
      foreach (StanceLink stance in mapFaction.Stances)
      {
        if (stance.IsNeutral && stance.GetDailyTributePaid(mapFaction) < 0)
        {
          int num2 = (int) ((double) stance.GetDailyTributePaid(mapFaction) * (double) num1);
          f += num2;
        }
      }
      this.SetStatInternal("MaxDailyTributeGain", MathF.Abs(f));
    }

    private static float CalculateTributeShareFactor(Clan clan)
    {
      Kingdom kingdom = clan.Kingdom;
      int num = kingdom.Fiefs.Sum<Town>((Func<Town, int>) (x => !x.IsCastle ? 3 : 1)) + 1 + kingdom.Clans.Count;
      return (float) (clan.Fiefs.Sum<Town>((Func<Town, int>) (x => !x.IsCastle ? 3 : 1)) + (clan == kingdom.RulingClan ? 1 : 0) + 1) / (float) num;
    }

    private void ProgressDailyIncome()
    {
      int resultNumber = (int) Campaign.Current.Models.ClanFinanceModel.CalculateClanIncome(Clan.PlayerClan).ResultNumber;
      if (resultNumber <= this._cachedMaxDailyIncome)
        return;
      this.SetStatInternal("MaxDailyIncome", resultNumber);
      this._cachedMaxDailyIncome = resultNumber;
    }

    private void ProgressTotalTradeProfit(int profit)
    {
      this._cachedTotalTradeProfit += profit;
      this.SetStatInternal("TotalTradeProfit", this._cachedTotalTradeProfit);
    }

    private void CheckProjectsInSettlement(Town town)
    {
      if (town.OwnerClan != Clan.PlayerClan)
        return;
      foreach (Settlement settlement in Clan.PlayerClan.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)))
      {
        bool flag = true;
        foreach (Building building in (List<Building>) settlement.Town.Buildings)
        {
          if (building.CurrentLevel != 3 && !building.BuildingType.IsDefaultProject)
          {
            flag = false;
            break;
          }
        }
        if (flag)
          this.SetStatInternal("CompletedAllProjects", 1);
      }
    }

    private void ProgressHighestTierSwordCrafted(ItemObject itemObject)
    {
      WeaponComponentData primaryWeapon = itemObject.WeaponComponent.PrimaryWeapon;
      if (primaryWeapon.WeaponClass != WeaponClass.OneHandedSword && primaryWeapon.WeaponClass != WeaponClass.TwoHandedSword)
        return;
      this.SetStatInternal("HighestTierSwordCrafted", (int) (itemObject.Tier + 1));
    }

    private void ProgressAssembledDragonBanner()
    {
      if (StoryModeManager.Current.MainStoryLine.FirstPhase == null || !StoryModeManager.Current.MainStoryLine.FirstPhase.AllPiecesCollected)
        return;
      this.SetStatInternal("AssembledDragonBanner", 1);
    }

    private void ProgressImperialBarbarianVictory(
      QuestBase quest,
      QuestBase.QuestCompleteDetails detail)
    {
      if (!quest.IsSpecialQuest || !(quest.GetType() == typeof (DefeatTheConspiracyQuestBehavior.DefeatTheConspiracyQuest)))
        return;
      if (StoryModeManager.Current.MainStoryLine.MainStoryLineSide == MainStoryLineSide.CreateAntiImperialKingdom || StoryModeManager.Current.MainStoryLine.MainStoryLineSide == MainStoryLineSide.SupportAntiImperialKingdom)
        this.SetStatInternal("BarbarianVictory", 1);
      else
        this.SetStatInternal("ImperialVictory", 1);
    }

    private void CheckDefeatedSuperiorForce(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent || mapEvent.Winner != mapEvent.GetMapEventSide(mapEvent.PlayerSide) || mapEvent.GetMapEventSide(mapEvent.DefeatedSide).Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.HealthyManCountAtStart)) - mapEvent.GetMapEventSide(mapEvent.WinningSide).Parties.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.HealthyManCountAtStart)) < 500)
        return;
      this.SetStatInternal("DefeatedSuperiorForce", 1);
    }

    private void CheckTutorialFinished()
    {
      if (StoryModeManager.Current.MainStoryLine.TutorialPhase.IsSkipped)
        return;
      this.SetStatInternal("FinishedTutorial", 1);
    }

    private void ProgressSuccessfulSiegeCount(MobileParty attackerParty, bool isWin)
    {
      if (!(attackerParty == MobileParty.MainParty & isWin))
        return;
      this.SetStatInternal("SuccessfulSiegeCount", ++this._cachedSuccessfulSiegeCount);
    }

    private void ProgressCapturedATownAlone(MobileParty attackerParty, bool isWin)
    {
      if (!(attackerParty == MobileParty.MainParty & isWin) || attackerParty.Army != null)
        return;
      this.SetStatInternal("CapturedATownAloneCount", ++this._cachedCapturedTownAloneCount);
    }

    private void ProgressRepelSiegeAssaultCount(Settlement siegeSettlement, bool isWin)
    {
      if (siegeSettlement.OwnerClan != Clan.PlayerClan || isWin)
        return;
      this.SetStatInternal("RepelledSiegeAssaultCount", ++this._cachedRepelledSiegeAssaultCount);
    }

    private void ProgressRepelSiegeAssaultCount(MapEvent mapEvent)
    {
      if (mapEvent.MapEventSettlement == null || mapEvent.MapEventSettlement.OwnerClan != Clan.PlayerClan || mapEvent.EventType != MapEvent.BattleTypes.Siege || mapEvent.BattleState != BattleState.None || PlayerEncounter.Battle == null || PlayerEncounter.CampaignBattleResult == null || !PlayerEncounter.CampaignBattleResult.PlayerVictory)
        return;
      this.SetStatInternal("RepelledSiegeAssaultCount", ++this._cachedRepelledSiegeAssaultCount);
    }

    private void ProgressTournamentRank(CharacterObject winner)
    {
      if (winner != CharacterObject.PlayerCharacter || Campaign.Current.TournamentManager.GetLeaderboard()[0].Key != Hero.MainHero)
        return;
      this.SetStatInternal("LeaderOfTournament", 1);
    }

    private void ProgressHeroSkillValue(
      Hero hero,
      SkillObject skill,
      int change = 1,
      bool shouldNotify = true)
    {
      if (hero != Hero.MainHero || this._cachedHighestSkillValue <= -1)
        return;
      int skillValue = hero.GetSkillValue(skill);
      if (skillValue <= this._cachedHighestSkillValue)
        return;
      this.SetStatInternal("HighestSkillValue", skillValue);
      this._cachedHighestSkillValue = skillValue;
    }

    private void ProgressHideoutClearedCount()
    {
      this.SetStatInternal("ClearedHideoutCount", ++this._cachedHideoutClearedCount);
    }

    private void CheckExecutedLordRelation(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail)
    {
      if (killer != Hero.MainHero || detail != KillCharacterAction.KillCharacterActionDetail.Executed || (int) victim.GetRelationWithPlayer() > -100)
        return;
      this.SetStatInternal("ExecutedLordRelation100", 1);
    }

    private void ProgressKingOrQueenKilledInBattle(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail)
    {
      if (killer != Hero.MainHero || !victim.IsKingdomLeader || detail != KillCharacterAction.KillCharacterActionDetail.DiedInBattle)
        return;
      this.SetStatInternal("KingOrQueenKilledInBattle", ++this._cachedKingOrQueenKilledInBattle);
    }

    private void ProgressTournamentWonCount(CharacterObject winner)
    {
      if (winner != CharacterObject.PlayerCharacter)
        return;
      this.SetStatInternal("WonTournamentCount", ++this._cachedWonTournamentCount);
    }

    private void ProgressOwnedWorkshopCount(Workshop workshop, Hero oldOwner)
    {
      if (workshop.Owner != Hero.MainHero)
        return;
      this.ProgressHasOwnedCaravanAndWorkshop();
    }

    private void ProgressOwnedCaravanCount(MobileParty party)
    {
      if (!party.IsCaravan || party.MapFaction != Hero.MainHero.MapFaction)
        return;
      this.ProgressHasOwnedCaravanAndWorkshop();
    }

    private void ProgressHasOwnedCaravanAndWorkshop()
    {
      if (Hero.MainHero.OwnedWorkshops.Count <= 0 || Hero.MainHero.OwnedCaravans.Count <= 0)
        return;
      this.SetStatInternal("HasOwnedCaravanAndWorkshop", 1);
    }

    private void ProgressOwnedFortificationCount()
    {
      this.SetStatInternal("OwnedFortificationCount", !Hero.MainHero.IsKingdomLeader ? Hero.MainHero.Clan.Fiefs.Count : Hero.MainHero.MapFaction.Fiefs.Count);
    }

    private void ProgressCreatedKingdomCount(Kingdom kingdom)
    {
      if (kingdom.Leader != Hero.MainHero)
        return;
      this.SetStatInternal("CreatedKingdomCount", ++this._cachedCreatedKingdomCount);
    }

    private void ProgressClanTier(Clan clan, bool shouldNotify)
    {
      if (clan != Clan.PlayerClan || clan.Tier != 6)
        return;
      this.SetStatInternal("ReachedClanTierSix", 1);
    }

    private bool CheckIfModulesAreDefault()
    {
      bool flag = Campaign.Current.PreviouslyUsedModules.All<string>((Func<string, bool>) (x => x.Equals("Native", StringComparison.OrdinalIgnoreCase) || x.Equals("SandBoxCore", StringComparison.OrdinalIgnoreCase) || x.Equals("CustomBattle", StringComparison.OrdinalIgnoreCase) || x.Equals("SandBox", StringComparison.OrdinalIgnoreCase) || x.Equals("Multiplayer", StringComparison.OrdinalIgnoreCase) || x.Equals("BirthAndDeath", StringComparison.OrdinalIgnoreCase) || x.Equals("StoryMode", StringComparison.OrdinalIgnoreCase)));
      if (!flag)
      {
        Debug.Print("Achievements are disabled! !CheckIfModulesAreDefault:", color: Debug.DebugColor.DarkRed);
        foreach (string previouslyUsedModule in (List<string>) Campaign.Current.PreviouslyUsedModules)
          Debug.Print(previouslyUsedModule, color: Debug.DebugColor.DarkRed);
      }
      return flag;
    }

    public void DeactivateAchievements(TextObject reason = null, bool showMessage = true, bool temporarily = false)
    {
      this._deactivateAchievements = !temporarily || this._deactivateAchievements;
      CampaignEventDispatcher.Instance.RemoveListeners((object) this);
      if (!showMessage)
        return;
      if (reason == null || reason == TextObject.Empty)
        reason = new TextObject("{=Z9mcDuDi}Achievements are disabled!");
      MBInformationManager.AddQuickInformation(reason, 4000);
    }

    private void SetStatInternal(string statId, int value)
    {
      if (this._deactivateAchievements)
        return;
      AchievementManager.SetStat(statId, value);
    }

    private class AchievementMissionLogic : MissionLogic
    {
      private Action<Agent, Agent> OnAgentRemovedAction;
      private Action<Agent, WeaponComponentData, BoneBodyPartType, int> OnAgentHitAction;

      public AchievementMissionLogic(
        Action<Agent, Agent> onAgentRemoved,
        Action<Agent, WeaponComponentData, BoneBodyPartType, int> onAgentHitAction)
      {
        this.OnAgentRemovedAction = onAgentRemoved;
        this.OnAgentHitAction = onAgentHitAction;
      }

      public override void OnAgentRemoved(
        Agent affectedAgent,
        Agent affectorAgent,
        AgentState agentState,
        KillingBlow blow)
      {
        Action<Agent, Agent> agentRemovedAction = this.OnAgentRemovedAction;
        if (agentRemovedAction == null)
          return;
        agentRemovedAction(affectedAgent, affectorAgent);
      }

      public override void OnScoreHit(
        Agent affectedAgent,
        Agent affectorAgent,
        WeaponComponentData attackerWeapon,
        bool isBlocked,
        bool isSiegeEngineHit,
        in Blow blow,
        in AttackCollisionData collisionData,
        float damagedHp,
        float hitDistance,
        float shotDifficulty)
      {
        Action<Agent, WeaponComponentData, BoneBodyPartType, int> onAgentHitAction = this.OnAgentHitAction;
        if (onAgentHitAction == null)
          return;
        onAgentHitAction(affectorAgent, attackerWeapon, blow.VictimBodyPart, (int) hitDistance);
      }
    }
  }
}
