// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.SettlementEconomyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class SettlementEconomyModel : GameModel
  {
    public abstract float GetEstimatedDemandForCategory(
      Town town,
      ItemData itemData,
      ItemCategory category);

    public abstract float GetDailyDemandForCategory(
      Town town,
      ItemCategory category,
      int extraProsperity = 0);

    public abstract float GetDemandChangeFromValue(float purchaseValue);

    public abstract (float, float) GetSupplyDemandForCategory(
      Town town,
      ItemCategory category,
      float dailySupply,
      float dailyDemand,
      float oldSupply,
      float oldDemand);

    public abstract int GetTownGoldChange(Town town);
  }
}
