// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeOwnerOfWorkshopAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements.Workshops;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeOwnerOfWorkshopAction
  {
    private static void ApplyInternal(
      Workshop workshop,
      Hero newOwner,
      WorkshopType workshopType,
      int capital,
      int cost)
    {
      Hero owner = workshop.Owner;
      workshop.ChangeOwnerOfWorkshop(newOwner, workshopType, capital);
      if (newOwner == Hero.MainHero)
        GiveGoldAction.ApplyBetweenCharacters(newOwner, owner, cost);
      if (owner == Hero.MainHero)
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, cost);
      CampaignEventDispatcher.Instance.OnWorkshopOwnerChanged(workshop, owner);
    }

    public static void ApplyByBankruptcy(
      Workshop workshop,
      Hero newOwner,
      WorkshopType workshopType,
      int cost)
    {
      ChangeOwnerOfWorkshopAction.ApplyInternal(workshop, newOwner, workshopType, Campaign.Current.Models.WorkshopModel.InitialCapital, cost);
    }

    public static void ApplyByPlayerBuying(Workshop workshop)
    {
      int costForPlayer = Campaign.Current.Models.WorkshopModel.GetCostForPlayer(workshop);
      ChangeOwnerOfWorkshopAction.ApplyInternal(workshop, Hero.MainHero, workshop.WorkshopType, Campaign.Current.Models.WorkshopModel.InitialCapital, costForPlayer);
    }

    public static void ApplyByPlayerSelling(
      Workshop workshop,
      Hero newOwner,
      WorkshopType workshopType)
    {
      int costForNotable = Campaign.Current.Models.WorkshopModel.GetCostForNotable(workshop);
      ChangeOwnerOfWorkshopAction.ApplyInternal(workshop, newOwner, workshopType, Campaign.Current.Models.WorkshopModel.InitialCapital, costForNotable);
    }

    public static void ApplyByDeath(Workshop workshop, Hero newOwner)
    {
      ChangeOwnerOfWorkshopAction.ApplyInternal(workshop, newOwner, workshop.WorkshopType, workshop.Capital, 0);
    }

    public static void ApplyByWar(Workshop workshop, Hero newOwner, WorkshopType workshopType)
    {
      ChangeOwnerOfWorkshopAction.ApplyInternal(workshop, newOwner, workshopType, Campaign.Current.Models.WorkshopModel.InitialCapital, 0);
    }
  }
}
