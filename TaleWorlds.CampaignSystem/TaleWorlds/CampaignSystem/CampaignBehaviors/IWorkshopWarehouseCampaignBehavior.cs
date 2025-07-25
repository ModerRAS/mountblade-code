// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IWorkshopWarehouseCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Workshops;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IWorkshopWarehouseCampaignBehavior
  {
    bool IsGettingInputsFromWarehouse(Workshop workshop);

    void SetIsGettingInputsFromWarehouse(Workshop workshop, bool isActive);

    float GetStockProductionInWarehouseRatio(Workshop workshop);

    void SetStockProductionInWarehouseRatio(Workshop workshop, float percentage);

    float GetWarehouseItemRosterWeight(Settlement settlement);

    bool IsRawMaterialsSufficientInTownMarket(Workshop workshop);

    int GetInputCount(Workshop workshop);

    int GetOutputCount(Workshop workshop);

    ExplainedNumber GetInputDailyChange(Workshop workshop);

    ExplainedNumber GetOutputDailyChange(Workshop workshop);
  }
}
