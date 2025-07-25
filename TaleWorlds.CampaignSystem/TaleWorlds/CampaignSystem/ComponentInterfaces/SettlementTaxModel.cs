// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SettlementTaxModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SettlementTaxModel : GameModel
  {
    public abstract float SettlementCommissionRateTown { get; }

    public abstract float SettlementCommissionRateVillage { get; }

    public abstract int SettlementCommissionDecreaseSecurityThreshold { get; }

    public abstract int MaximumDecreaseBasedOnSecuritySecurity { get; }

    public abstract float GetTownTaxRatio(Town town);

    public abstract float GetVillageTaxRatio();

    public abstract float GetTownCommissionChangeBasedOnSecurity(Town town, float commission);

    public abstract ExplainedNumber CalculateTownTax(Town town, bool includeDescriptions = false);

    public abstract int CalculateVillageTaxFromIncome(Village village, int marketIncome);
  }
}
