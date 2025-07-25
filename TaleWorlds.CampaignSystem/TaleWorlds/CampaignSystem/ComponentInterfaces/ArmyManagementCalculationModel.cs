// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ArmyManagementCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ArmyManagementCalculationModel : GameModel
  {
    public abstract int InfluenceValuePerGold { get; }

    public abstract int AverageCallToArmyCost { get; }

    public abstract int CohesionThresholdForDispersion { get; }

    public abstract int CalculatePartyInfluenceCost(MobileParty armyLeaderParty, MobileParty party);

    public abstract float DailyBeingAtArmyInfluenceAward(MobileParty armyMemberParty);

    public abstract List<MobileParty> GetMobilePartiesToCallToArmy(MobileParty leaderParty);

    public abstract int CalculateTotalInfluenceCost(Army army, float percentage);

    public abstract float GetPartySizeScore(MobileParty party);

    public abstract bool CheckPartyEligibility(MobileParty party);

    public abstract int GetPartyRelation(Hero hero);

    public abstract ExplainedNumber CalculateDailyCohesionChange(
      Army army,
      bool includeDescriptions = false);

    public abstract int CalculateNewCohesion(
      Army army,
      PartyBase newParty,
      int calculatedCohesion,
      int sign);

    public abstract int GetCohesionBoostInfluenceCost(Army army, int percentageToBoost = 100);

    public abstract int GetCohesionBoostGoldCost(Army army, float percentageToBoost = 100f);

    public abstract int GetPartyStrength(PartyBase party);
  }
}
