// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeProductionTypeOfWorkshopAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements.Workshops;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeProductionTypeOfWorkshopAction
  {
    public static void Apply(Workshop workshop, WorkshopType newWorkshopType, bool ignoreCost = false)
    {
      int convertProductionCost = ignoreCost ? 0 : Campaign.Current.Models.WorkshopModel.GetConvertProductionCost(newWorkshopType);
      workshop.ChangeWorkshopProduction(newWorkshopType);
      if (convertProductionCost > 0)
        GiveGoldAction.ApplyBetweenCharacters(workshop.Owner, (Hero) null, convertProductionCost);
      CampaignEventDispatcher.Instance.OnWorkshopTypeChanged(workshop);
    }
  }
}
