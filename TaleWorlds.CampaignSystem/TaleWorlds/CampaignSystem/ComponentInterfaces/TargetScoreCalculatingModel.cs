// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.TargetScoreCalculatingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class TargetScoreCalculatingModel : GameModel
  {
    public abstract float TravelingToAssignmentFactor { get; }

    public abstract float BesiegingFactor { get; }

    public abstract float AssaultingTownFactor { get; }

    public abstract float RaidingFactor { get; }

    public abstract float DefendingFactor { get; }

    public abstract float GetTargetScoreForFaction(
      Settlement targetSettlement,
      Army.ArmyTypes missionType,
      MobileParty mobileParty,
      float ourStrength,
      int numberOfEnemyFactionSettlements = -1,
      float totalEnemyMobilePartyStrength = -1f);

    public abstract float CalculatePatrollingScoreForSettlement(
      Settlement targetSettlement,
      MobileParty mobileParty);

    public abstract float CurrentObjectiveValue(MobileParty mobileParty);
  }
}
