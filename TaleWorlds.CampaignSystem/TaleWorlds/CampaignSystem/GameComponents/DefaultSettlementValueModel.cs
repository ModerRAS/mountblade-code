// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementValueModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementValueModel : SettlementValueModel
  {
    private const float BenefitRatioForFaction = 0.33f;
    private const float CastleMultiplier = 1.25f;
    private const float SameMapFactionMultiplier = 1.1f;
    private const float SameCultureMultiplier = 1.1f;
    private const float BeingOwnerMultiplier = 1.1f;

    public override float CalculateSettlementBaseValue(Settlement settlement)
    {
      double num1 = settlement.IsCastle ? 1.25 : 1.0;
      float num2 = settlement.GetValue();
      float geographicalAdvantage = this.GetBaseGeographicalAdvantage(settlement.IsVillage ? settlement.Village.Bound : settlement);
      double num3 = (double) num2;
      return (float) (num1 * num3 * (double) geographicalAdvantage * 0.33000001311302185);
    }

    public override float CalculateSettlementValueForFaction(
      Settlement settlement,
      IFaction faction)
    {
      float num1 = settlement.IsCastle ? 1.25f : 1f;
      float num2 = settlement.MapFaction == faction.MapFaction ? 1.1f : 1f;
      float num3 = settlement.Culture == faction?.Culture ? 1.1f : 1f;
      double num4 = (double) settlement.GetValue();
      float num5 = this.GeographicalAdvantageForFaction(settlement.IsVillage ? settlement.Village.Bound : settlement, faction);
      double num6 = (double) num1;
      return (float) (num4 * num6 * (double) num2 * (double) num3 * (double) num5 * 0.33000001311302185);
    }

    public override float CalculateSettlementValueForEnemyHero(Settlement settlement, Hero hero)
    {
      float num1 = settlement.IsCastle ? 1.25f : 1f;
      float num2 = settlement.OwnerClan == hero.Clan ? 1.1f : 1f;
      float num3 = settlement.Culture == hero.Culture ? 1.1f : 1f;
      double num4 = (double) settlement.GetValue();
      float num5 = this.GeographicalAdvantageForFaction(settlement.IsVillage ? settlement.Village.Bound : settlement, hero.MapFaction);
      double num6 = (double) num1;
      return (float) (num4 * num6 * (double) num3 * (double) num2 * (double) num5 * 0.33000001311302185);
    }

    private float GetBaseGeographicalAdvantage(Settlement settlement)
    {
      return (float) (1.0 / (1.0 + (double) (Campaign.Current.Models.MapDistanceModel.GetDistance(settlement.MapFaction.FactionMidSettlement, settlement) / Campaign.AverageDistanceBetweenTwoFortifications)));
    }

    private float GeographicalAdvantageForFaction(Settlement settlement, IFaction faction)
    {
      Settlement factionMidSettlement = faction.FactionMidSettlement;
      float distance = Campaign.Current.Models.MapDistanceModel.GetDistance(settlement, factionMidSettlement);
      float allyFortification = faction.DistanceToClosestNonAllyFortification;
      if (faction.FactionMidSettlement.MapFaction != faction)
        return MathF.Clamp(Campaign.AverageDistanceBetweenTwoFortifications / (distance + 0.1f), 0.0f, 4f);
      return settlement.MapFaction == faction && (double) distance < (double) allyFortification ? MathF.Clamp(Campaign.AverageDistanceBetweenTwoFortifications / (allyFortification - distance), 1f, 4f) : (float) (1.0 / (1.0 + (double) ((distance - allyFortification) / Campaign.AverageDistanceBetweenTwoFortifications)));
    }
  }
}
