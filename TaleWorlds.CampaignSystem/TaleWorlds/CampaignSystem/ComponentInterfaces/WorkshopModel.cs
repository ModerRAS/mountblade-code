// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.WorkshopModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class WorkshopModel : GameModel
  {
    public abstract int DaysForPlayerSaveWorkshopFromBankruptcy { get; }

    public abstract int CapitalLowLimit { get; }

    public abstract int InitialCapital { get; }

    public abstract int GetMaxWorkshopCountForClanTier(int tier);

    public abstract int DailyExpense { get; }

    public abstract int GetCostForPlayer(Workshop workshop);

    public abstract int WarehouseCapacity { get; }

    public abstract int DefaultWorkshopCountInSettlement { get; }

    public abstract int GetCostForNotable(Workshop workshop);

    public abstract int MaximumWorkshopsPlayerCanHave { get; }

    public abstract ExplainedNumber GetEffectiveConversionSpeedOfProduction(
      Workshop workshop,
      float speed,
      bool includeDescriptions);

    public abstract Hero GetNotableOwnerForWorkshop(Workshop workshop);

    public abstract int GetConvertProductionCost(WorkshopType workshopType);

    public abstract bool CanPlayerSellWorkshop(Workshop workshop, out TextObject explanation);

    public abstract float GetTradeXpPerWarehouseProduction(EquipmentElement production);
  }
}
