// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IStatisticsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IStatisticsCampaignBehavior : ICampaignBehavior
  {
    void OnDefectionPersuasionSucess();

    void OnPlayerAcceptedRansomOffer(int ransomPrice);

    int GetHighestTournamentRank();

    int GetNumberOfTournamentWins();

    int GetNumberOfChildrenBorn();

    int GetNumberOfPrisonersRecruited();

    int GetNumberOfTroopsRecruited();

    int GetNumberOfClansDefected();

    int GetNumberOfIssuesSolved();

    int GetTotalInfluenceEarned();

    int GetTotalCrimeRatingGained();

    int GetNumberOfBattlesWon();

    int GetNumberOfBattlesLost();

    int GetLargestBattleWonAsLeader();

    int GetLargestArmyFormedByPlayer();

    int GetNumberOfEnemyClansDestroyed();

    int GetNumberOfHeroesKilledInBattle();

    int GetNumberOfTroopsKnockedOrKilledAsParty();

    int GetNumberOfTroopsKnockedOrKilledByPlayer();

    int GetNumberOfHeroPrisonersTaken();

    int GetNumberOfTroopPrisonersTaken();

    int GetNumberOfTownsCaptured();

    int GetNumberOfHideoutsCleared();

    int GetNumberOfCastlesCaptured();

    int GetNumberOfVillagesRaided();

    int GetNumberOfCraftingPartsUnlocked();

    int GetNumberOfWeaponsCrafted();

    int GetNumberOfCraftingOrdersCompleted();

    int GetNumberOfCompanionsHired();

    ulong GetTotalTimePlayedInSeconds();

    ulong GetTotalDenarsEarned();

    ulong GetDenarsEarnedFromCaravans();

    ulong GetDenarsEarnedFromWorkshops();

    ulong GetDenarsEarnedFromRansoms();

    ulong GetDenarsEarnedFromTaxes();

    ulong GetDenarsEarnedFromTributes();

    ulong GetDenarsPaidAsTributes();

    CampaignTime GetTotalTimePlayed();

    CampaignTime GetTimeSpentAsPrisoner();

    (string, int) GetMostExpensiveItemCrafted();

    (string name, int value) GetCompanionWithMostKills();

    (string name, int value) GetCompanionWithMostIssuesSolved();
  }
}
