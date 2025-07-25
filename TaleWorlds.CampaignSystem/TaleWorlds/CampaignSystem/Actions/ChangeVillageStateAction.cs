// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeVillageStateAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeVillageStateAction
  {
    private static void ApplyInternal(
      Village village,
      Village.VillageStates newState,
      MobileParty raiderParty)
    {
      Village.VillageStates villageState = village.VillageState;
      if (newState == villageState)
        return;
      village.VillageState = newState;
      CampaignEventDispatcher.Instance.OnVillageStateChanged(village, villageState, village.VillageState, raiderParty);
      village.Settlement.Party.SetLevelMaskIsDirty();
    }

    public static void ApplyBySettingToNormal(Settlement settlement)
    {
      ChangeVillageStateAction.ApplyInternal(settlement.Village, Village.VillageStates.Normal, (MobileParty) null);
    }

    public static void ApplyBySettingToBeingRaided(Settlement settlement, MobileParty raider)
    {
      ChangeVillageStateAction.ApplyInternal(settlement.Village, Village.VillageStates.BeingRaided, raider);
    }

    public static void ApplyBySettingToBeingForcedForSupplies(
      Settlement settlement,
      MobileParty raider)
    {
      ChangeVillageStateAction.ApplyInternal(settlement.Village, Village.VillageStates.ForcedForSupplies, raider);
    }

    public static void ApplyBySettingToBeingForcedForVolunteers(
      Settlement settlement,
      MobileParty raider)
    {
      ChangeVillageStateAction.ApplyInternal(settlement.Village, Village.VillageStates.ForcedForVolunteers, raider);
    }

    public static void ApplyBySettingToLooted(Settlement settlement, MobileParty raider)
    {
      ChangeVillageStateAction.ApplyInternal(settlement.Village, Village.VillageStates.Looted, raider);
    }
  }
}
