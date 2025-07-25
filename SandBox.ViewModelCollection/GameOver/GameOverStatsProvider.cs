// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.GameOver.GameOverStatsProvider
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.GameOver
{
  public class GameOverStatsProvider
  {
    private readonly IStatisticsCampaignBehavior _statSource;

    public GameOverStatsProvider()
    {
      this._statSource = Campaign.Current.GetCampaignBehavior<IStatisticsCampaignBehavior>();
    }

    public IEnumerable<StatCategory> GetGameOverStats()
    {
      yield return new StatCategory("General", this.GetGeneralStats(this._statSource));
      yield return new StatCategory("Battle", this.GetBattleStats(this._statSource));
      yield return new StatCategory("Finance", this.GetFinanceStats(this._statSource));
      yield return new StatCategory("Crafting", this.GetCraftingStats(this._statSource));
      yield return new StatCategory("Companion", this.GetCompanionStats(this._statSource));
    }

    private IEnumerable<StatItem> GetGeneralStats(IStatisticsCampaignBehavior source)
    {
      int toYears = (int) source.GetTotalTimePlayed().ToYears;
      int content1 = (int) source.GetTotalTimePlayed().ToSeasons % 4;
      int content2 = (int) source.GetTotalTimePlayed().ToDays % 21;
      GameTexts.SetVariable("YEAR_IS_PLURAL", toYears != 1 ? 1 : 0);
      GameTexts.SetVariable("YEAR", toYears);
      GameTexts.SetVariable("SEASON_IS_PLURAL", content1 != 1 ? 1 : 0);
      GameTexts.SetVariable("SEASON", content1);
      GameTexts.SetVariable("DAY_IS_PLURAL", content2 != 1 ? 1 : 0);
      GameTexts.SetVariable("DAY", content2);
      GameTexts.SetVariable("STR1", GameTexts.FindText("str_YEAR_years"));
      GameTexts.SetVariable("STR2", GameTexts.FindText("str_SEASON_seasons"));
      GameTexts.SetVariable("STR1", GameTexts.FindText("str_STR1_space_STR2").ToString());
      GameTexts.SetVariable("STR2", GameTexts.FindText("str_DAY_days"));
      yield return new StatItem("CampaignPlayTime", GameTexts.FindText("str_STR1_space_STR2").ToString());
      string content3 = string.Format("{0:0.##}", (object) TimeSpan.FromSeconds((double) source.GetTotalTimePlayedInSeconds()).TotalHours);
      GameTexts.SetVariable("PLURAL_HOURS", 1);
      GameTexts.SetVariable("HOUR", content3);
      yield return new StatItem("CampaignRealPlayTime", GameTexts.FindText("str_hours").ToString());
      yield return new StatItem("ChildrenBorn", source.GetNumberOfChildrenBorn().ToString());
      yield return new StatItem("InfluenceEarned", source.GetTotalInfluenceEarned().ToString(), StatItem.StatType.Influence);
      yield return new StatItem("IssuesSolved", source.GetNumberOfIssuesSolved().ToString(), StatItem.StatType.Issue);
      yield return new StatItem("TournamentsWon", source.GetNumberOfTournamentWins().ToString(), StatItem.StatType.Tournament);
      yield return new StatItem("HighestLeaderboardRank", source.GetHighestTournamentRank().ToString());
      yield return new StatItem("PrisonersRecruited", source.GetNumberOfPrisonersRecruited().ToString());
      yield return new StatItem("TroopsRecruited", source.GetNumberOfTroopsRecruited().ToString());
      yield return new StatItem("ClansDefected", source.GetNumberOfClansDefected().ToString());
      yield return new StatItem("TotalCrimeGained", source.GetTotalCrimeRatingGained().ToString(), StatItem.StatType.Crime);
    }

    private IEnumerable<StatItem> GetBattleStats(IStatisticsCampaignBehavior source)
    {
      int numberOfBattlesWon = source.GetNumberOfBattlesWon();
      int numberOfBattlesLost = source.GetNumberOfBattlesLost();
      int content1 = numberOfBattlesWon + numberOfBattlesLost;
      GameTexts.SetVariable("BATTLES_WON", numberOfBattlesWon);
      GameTexts.SetVariable("BATTLES_LOST", numberOfBattlesLost);
      GameTexts.SetVariable("ALL_BATTLES", content1);
      yield return new StatItem("BattlesWonLostAll", GameTexts.FindText("str_battles_won_lost").ToString());
      yield return new StatItem("BiggestBattleWonAsLeader", source.GetLargestBattleWonAsLeader().ToString());
      yield return new StatItem("BiggestArmyByPlayer", source.GetLargestArmyFormedByPlayer().ToString());
      yield return new StatItem("EnemyClansDestroyed", source.GetNumberOfEnemyClansDestroyed().ToString());
      yield return new StatItem("HeroesKilledInBattle", source.GetNumberOfHeroesKilledInBattle().ToString(), StatItem.StatType.Kill);
      yield return new StatItem("TroopsEliminatedByPlayer", source.GetNumberOfTroopsKnockedOrKilledByPlayer().ToString(), StatItem.StatType.Kill);
      yield return new StatItem("TroopsEliminatedByParty", source.GetNumberOfTroopsKnockedOrKilledAsParty().ToString(), StatItem.StatType.Kill);
      yield return new StatItem("HeroPrisonersTaken", source.GetNumberOfHeroPrisonersTaken().ToString());
      yield return new StatItem("TroopPrisonersTaken", source.GetNumberOfTroopPrisonersTaken().ToString());
      yield return new StatItem("CapturedTowns", source.GetNumberOfTownsCaptured().ToString());
      yield return new StatItem("CapturedCastles", source.GetNumberOfCastlesCaptured().ToString());
      yield return new StatItem("ClearedHideouts", source.GetNumberOfHideoutsCleared().ToString());
      yield return new StatItem("RaidedVillages", source.GetNumberOfVillagesRaided().ToString());
      string content2 = string.Format("{0:0.##}", (object) source.GetTimeSpentAsPrisoner().ToDays);
      GameTexts.SetVariable("DAY_IS_PLURAL", 1);
      GameTexts.SetVariable("DAY", content2);
      yield return new StatItem("DaysSpentAsPrisoner", GameTexts.FindText("str_DAY_days").ToString());
    }

    private IEnumerable<StatItem> GetFinanceStats(IStatisticsCampaignBehavior source)
    {
      yield return new StatItem("TotalDenarsEarned", source.GetTotalDenarsEarned().ToString("0.##"), StatItem.StatType.Gold);
      yield return new StatItem("DenarsFromCaravans", source.GetDenarsEarnedFromCaravans().ToString("0.##"), StatItem.StatType.Gold);
      yield return new StatItem("DenarsFromWorkshops", source.GetDenarsEarnedFromWorkshops().ToString("0.##"), StatItem.StatType.Gold);
      yield return new StatItem("DenarsFromRansoms", source.GetDenarsEarnedFromRansoms().ToString("0.##"), StatItem.StatType.Gold);
      yield return new StatItem("DenarsFromTaxes", source.GetDenarsEarnedFromTaxes().ToString("0.##"), StatItem.StatType.Gold);
      GameTexts.SetVariable("LEFT", source.GetDenarsEarnedFromTributes().ToString("0.##"));
      GameTexts.SetVariable("RIGHT", source.GetDenarsPaidAsTributes().ToString("0.##"));
      yield return new StatItem("TributeCollectedTributePaid", GameTexts.FindText("str_LEFT_over_RIGHT").ToString());
    }

    private IEnumerable<StatItem> GetCraftingStats(IStatisticsCampaignBehavior source)
    {
      yield return new StatItem("WeaponsCrafted", source.GetNumberOfWeaponsCrafted().ToString());
      GameTexts.SetVariable("LEFT", source.GetMostExpensiveItemCrafted().Item1 ?? GameTexts.FindText("str_no_items_crafted").ToString());
      GameTexts.SetVariable("RIGHT", source.GetMostExpensiveItemCrafted().Item2.ToString());
      yield return new StatItem("MostExpensiveCraft", GameTexts.FindText("str_LEFT_over_RIGHT").ToString(), StatItem.StatType.Gold);
      yield return new StatItem("NumberOfPiecesUnlocked", source.GetNumberOfCraftingPartsUnlocked().ToString());
      yield return new StatItem("CraftingOrdersCompleted", source.GetNumberOfCraftingOrdersCompleted().ToString());
    }

    private IEnumerable<StatItem> GetCompanionStats(IStatisticsCampaignBehavior source)
    {
      yield return new StatItem("NumberOfHiredCompanions", source.GetNumberOfCompanionsHired().ToString());
      GameTexts.SetVariable("LEFT", source.GetCompanionWithMostIssuesSolved().name ?? GameTexts.FindText("str_no_companions_with_issues_solved").ToString());
      GameTexts.SetVariable("RIGHT", source.GetCompanionWithMostIssuesSolved().value);
      yield return new StatItem("MostIssueCompanion", GameTexts.FindText("str_LEFT_over_RIGHT").ToString(), StatItem.StatType.Issue);
      GameTexts.SetVariable("LEFT", source.GetCompanionWithMostKills().name ?? GameTexts.FindText("str_no_companions_with_kills").ToString());
      GameTexts.SetVariable("RIGHT", source.GetCompanionWithMostKills().value);
      yield return new StatItem("MostKillCompanion", GameTexts.FindText("str_LEFT_over_RIGHT").ToString(), StatItem.StatType.Kill);
    }
  }
}
