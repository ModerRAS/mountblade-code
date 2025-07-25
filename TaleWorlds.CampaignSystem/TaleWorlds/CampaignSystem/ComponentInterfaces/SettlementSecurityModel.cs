// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SettlementSecurityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SettlementSecurityModel : GameModel
  {
    public abstract int MaximumSecurityInSettlement { get; }

    public abstract int SecurityDriftMedium { get; }

    public abstract float MapEventSecurityEffectRadius { get; }

    public abstract float HideoutClearedSecurityEffectRadius { get; }

    public abstract int HideoutClearedSecurityGain { get; }

    public abstract int ThresholdForTaxCorruption { get; }

    public abstract int ThresholdForHigherTaxCorruption { get; }

    public abstract int ThresholdForTaxBoost { get; }

    public abstract int SettlementTaxBoostPercentage { get; }

    public abstract int SettlementTaxPenaltyPercentage { get; }

    public abstract float GetLootedNearbyPartySecurityEffect(
      Town town,
      float sumOfAttackedPartyStrengths);

    public abstract int ThresholdForNotableRelationBonus { get; }

    public abstract int ThresholdForNotableRelationPenalty { get; }

    public abstract int DailyNotableRelationBonus { get; }

    public abstract int DailyNotableRelationPenalty { get; }

    public abstract int DailyNotablePowerBonus { get; }

    public abstract int DailyNotablePowerPenalty { get; }

    public abstract ExplainedNumber CalculateSecurityChange(Town town, bool includeDescriptions = false);

    public abstract float GetNearbyBanditPartyDefeatedSecurityEffect(
      Town town,
      float sumOfAttackedPartyStrengths);

    public abstract void CalculateGoldGainDueToHighSecurity(
      Town town,
      ref ExplainedNumber explainedNumber);

    public abstract void CalculateGoldCutDueToLowSecurity(
      Town town,
      ref ExplainedNumber explainedNumber);
  }
}
