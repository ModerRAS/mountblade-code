// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSettlementEconomyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSettlementEconomyModel : SettlementEconomyModel
  {
    private DefaultSettlementEconomyModel.CategoryValues _categoryValues;
    private const int ProsperityLuxuryTreshold = 3000;
    private const float dailyChangeFactor = 0.15f;
    private const float oneMinusDailyChangeFactor = 0.85f;

    private DefaultSettlementEconomyModel.CategoryValues CategoryValuesCache
    {
      get
      {
        if (this._categoryValues == null)
          this._categoryValues = new DefaultSettlementEconomyModel.CategoryValues();
        return this._categoryValues;
      }
    }

    public override (float, float) GetSupplyDemandForCategory(
      Town town,
      ItemCategory category,
      float dailySupply,
      float dailyDemand,
      float oldSupply,
      float oldDemand)
    {
      float b = (float) ((double) oldSupply * 0.85000002384185791 + (double) dailySupply * 0.15000000596046448);
      float num = (float) ((double) oldDemand * 0.85000002384185791 + (double) dailyDemand * 0.15000000596046448);
      return (MathF.Max(0.1f, b), num);
    }

    public override float GetDailyDemandForCategory(
      Town town,
      ItemCategory category,
      int extraProsperity)
    {
      float num1 = MathF.Max(0.0f, town.Prosperity + (float) extraProsperity);
      float num2 = MathF.Max(0.0f, town.Prosperity - 3000f);
      float demandForCategory = category.BaseDemand * num1 + category.LuxuryDemand * num2;
      if ((double) category.BaseDemand < 9.99999993922529E-09)
        demandForCategory = num1 * 0.01f;
      return demandForCategory;
    }

    public override int GetTownGoldChange(Town town)
    {
      return MathF.Round(0.25f * ((float) (10000.0 + (double) town.Prosperity * 12.0) - (float) town.Gold));
    }

    public override float GetDemandChangeFromValue(float purchaseValue) => purchaseValue * 0.15f;

    public override float GetEstimatedDemandForCategory(
      Town town,
      ItemData itemData,
      ItemCategory category)
    {
      return this.GetDailyDemandForCategory(town, category, 1000);
    }

    private class CategoryValues
    {
      public Dictionary<ItemCategory, int> PriceDict;

      public CategoryValues()
      {
        this.PriceDict = new Dictionary<ItemCategory, int>();
        foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
          this.PriceDict[itemObject.GetItemCategory()] = itemObject.Value;
      }

      public int GetValueOfCategory(ItemCategory category)
      {
        int valueOfCategory = 1;
        this.PriceDict.TryGetValue(category, out valueOfCategory);
        return valueOfCategory;
      }
    }
  }
}
