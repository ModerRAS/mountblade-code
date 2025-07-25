// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.InitializeWorkshopAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements.Workshops;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class InitializeWorkshopAction
  {
    public static void ApplyByNewGame(
      Workshop workshop,
      Hero workshopOwner,
      WorkshopType workshopType)
    {
      workshop.InitializeWorkshop(workshopOwner, workshopType);
      TextObject firstName;
      TextObject fullName;
      NameGenerator.Current.GenerateHeroNameAndHeroFullName(workshopOwner, out firstName, out fullName);
      workshopOwner.SetName(fullName, firstName);
      CampaignEventDispatcher.Instance.OnWorkshopInitialized(workshop);
    }
  }
}
